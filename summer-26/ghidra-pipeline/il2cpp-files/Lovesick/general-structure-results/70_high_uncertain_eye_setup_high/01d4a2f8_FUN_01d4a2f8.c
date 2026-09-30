/*
FUNCTION_NAME: FUN_01d4a2f8
ENTRY_POINT: 01d4a2f8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01d4a45c) */

void FUN_01d4a2f8(long param_1,long param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  long local_48;
  
  if ((DAT_0377f4ef & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_Oculus_Interaction_PointerInteractable<HandGrabInteractor,_HandGrabInteractable>_InjectOptionalPointableElement__
                      );
    thunk_FUN_00d48444(OVRPlugin_Hand_TypeInfo);
                    /* try { // try from 01d4a33c to 01e4a343 has its CatchHandler @ 01d4abcc */
    DAT_0377f4ef = 1;
  }
  lVar4 = *(long *)(param_1 + 0x78);
  if (lVar4 == 0) {
    lVar4 = FUN_01d41074(param_1);
    *(long *)(param_1 + 0x78) = lVar4;
    *(undefined4 *)(param_1 + 0x80) = 1;
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
  }
  else {
    *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + 1;
  }
  puVar3 = OVRPlugin_Hand_TypeInfo;
  uVar1 = *(uint *)(lVar4 + 0x18);
  if ((int)uVar1 < 1) {
LAB_01d4a414:
    iVar2 = *(int *)(param_1 + 0x80) + -1;
    *(int *)(param_1 + 0x80) = iVar2;
    if (iVar2 == 0) {
      *(undefined8 *)(param_1 + 0x78) = 0;
    }
    return;
  }
  if (lVar4 != 0) {
    uVar5 = 0;
    do {
      FUN_0132138c(lVar4,uVar5 & 0xffffffff,&local_48,*(undefined8 *)puVar3);
      if (local_48 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      if (0 < *(int *)(local_48 + 0x44)) {
        if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        if (*(uint *)(param_2 + 0x18) <= uVar5) {
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        if (*(uint *)(param_3 + 0x18) <= uVar5) {
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        FUN_01d8d244(local_48,*(undefined4 *)(param_2 + 0x20 + uVar5 * 4),
                     *(undefined4 *)(param_3 + 0x20 + uVar5 * 4),0);
      }
      if ((ulong)uVar1 - 1 == uVar5) goto LAB_01d4a414;
      lVar4 = *(long *)(param_1 + 0x78);
      uVar5 = uVar5 + 1;
    } while (lVar4 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


