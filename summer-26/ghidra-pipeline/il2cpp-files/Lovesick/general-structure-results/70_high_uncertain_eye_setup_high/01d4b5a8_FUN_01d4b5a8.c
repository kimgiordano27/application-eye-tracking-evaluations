/*
FUNCTION_NAME: FUN_01d4b5a8
ENTRY_POINT: 01d4b5a8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01d4b710) */

void FUN_01d4b5a8(long param_1,long param_2)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  int iVar4;
  long *plVar5;
  int iVar6;
  long local_38;
  
  if ((DAT_0377f4f7 & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_Oculus_Interaction_PointerInteractable<HandGrabInteractor,_HandGrabInteractable>_InjectOptionalPointableElement__
                      );
    thunk_FUN_00d48444(OVRPlugin_Hand_TypeInfo);
    DAT_0377f4f7 = 1;
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
      iVar6 = 0;
      do {
        FUN_0132138c(lVar3,iVar6,&local_38,*(undefined8 *)puVar2);
        if (local_38 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        if (0 < *(int *)(local_38 + 0x44)) {
          if (param_2 == 0) {
            FUN_01d8d088(local_38,0);
          }
          else {
            lVar3 = *(long *)(local_38 + 0x18);
            if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            if (0 < *(int *)(lVar3 + 0x18)) {
              iVar4 = 0;
              plVar5 = (long *)(lVar3 + 0x20);
              do {
                if (*plVar5 == param_2) {
                  FUN_01d8d088(local_38,0);
                  break;
                }
                iVar4 = iVar4 + 1;
                plVar5 = plVar5 + 2;
              } while (iVar4 < *(int *)(lVar3 + 0x18));
            }
          }
        }
        iVar6 = iVar6 + 1;
        if (iVar6 == iVar1) goto LAB_01d4b6d8;
        lVar3 = *(long *)(param_1 + 0x78);
      } while (lVar3 != 0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
LAB_01d4b6d8:
  iVar1 = *(int *)(param_1 + 0x80) + -1;
  *(int *)(param_1 + 0x80) = iVar1;
  if (iVar1 == 0) {
    *(undefined8 *)(param_1 + 0x78) = 0;
  }
  return;
}


