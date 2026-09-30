/*
FUNCTION_NAME: FUN_01d48614
ENTRY_POINT: 01d48614
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01d487d0) */

void FUN_01d48614(long param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5,
                 undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  int iVar4;
  long local_68;
  
  if ((DAT_0377f4f1 & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_Oculus_Interaction_PointerInteractable<HandGrabInteractor,_HandGrabInteractable>_InjectOptionalPointableElement__
                      );
    thunk_FUN_00d48444(OVRPlugin_Hand_TypeInfo);
    DAT_0377f4f1 = 1;
  }
  lVar3 = *(long *)(param_1 + 0x78);
  if (lVar3 == 0) {
    lVar3 = FUN_01d41074(param_1);
    *(long *)(param_1 + 0x78) = lVar3;
    *(undefined4 *)(param_1 + 0x80) = 1;
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
  }
  else {
    *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + 1;
  }
  puVar2 = OVRPlugin_Hand_TypeInfo;
  iVar1 = *(int *)(lVar3 + 0x18);
  if (0 < iVar1) {
    if (lVar3 != 0) {
      iVar4 = 0;
      do {
        FUN_0132138c(lVar3,iVar4,&local_68,*(undefined8 *)puVar2);
        if (local_68 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        if (0 < *(int *)(local_68 + 0x44)) {
          if (param_2 == -1 || param_5 == -1) {
            if (param_2 == -1) {
              if (param_5 != -1) {
                FUN_01d8d378(local_68,param_5,param_6,param_7,0);
              }
            }
            else {
              FUN_01d8d378(local_68,param_2,param_3,param_4,0);
            }
          }
          else {
            FUN_01d8d498(local_68,param_2,param_3,param_4,param_5,param_6,param_7,0);
          }
        }
        iVar4 = iVar4 + 1;
        if (iVar1 == iVar4) goto LAB_01d4878c;
        lVar3 = *(long *)(param_1 + 0x78);
      } while (lVar3 != 0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
LAB_01d4878c:
  iVar1 = *(int *)(param_1 + 0x80) + -1;
  *(int *)(param_1 + 0x80) = iVar1;
  if (iVar1 == 0) {
    *(undefined8 *)(param_1 + 0x78) = 0;
  }
  return;
}


