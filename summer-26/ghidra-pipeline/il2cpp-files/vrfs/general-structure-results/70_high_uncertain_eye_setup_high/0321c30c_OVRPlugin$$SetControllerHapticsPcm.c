/*
FUNCTION_NAME: OVRPlugin$$SetControllerHapticsPcm
ENTRY_POINT: 0321c30c
PROGRAM: vrfs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__SetControllerHapticsPcm(void)

{
  long lVar1;
  long *plVar2;
  undefined8 unaff_x19;
  long *unaff_x20;
  
  **(undefined8 **)(*unaff_x20 + 0xb8) = unaff_x19;
  thunk_FUN_01656ef8(*(undefined8 *)(*unaff_x20 + 0xb8));
  lVar1 = thunk_FUN_015d056c(*unaff_x20);
  if (lVar1 != 0) {
    FUN_02d76b34(lVar1,0);
    *(undefined4 *)(lVar1 + 0x10) = 1;
    plVar2 = (long *)(*(long *)(*unaff_x20 + 0xb8) + 8);
    *plVar2 = lVar1;
    thunk_FUN_01656ef8(plVar2,lVar1);
    lVar1 = thunk_FUN_015d056c(*unaff_x20);
    if (lVar1 != 0) {
      FUN_02d76b34(lVar1,0);
      *(undefined4 *)(lVar1 + 0x10) = 3;
      plVar2 = (long *)(*(long *)(*unaff_x20 + 0xb8) + 0x10);
      *plVar2 = lVar1;
      thunk_FUN_01656ef8(plVar2,lVar1);
      lVar1 = thunk_FUN_015d056c(*unaff_x20);
      if (lVar1 != 0) {
        FUN_02d76b34(lVar1,0);
        *(undefined4 *)(lVar1 + 0x10) = 4;
        plVar2 = (long *)(*(long *)(*unaff_x20 + 0xb8) + 0x18);
        *plVar2 = lVar1;
        thunk_FUN_01656ef8(plVar2,lVar1);
        lVar1 = thunk_FUN_015d056c(*unaff_x20);
        if (lVar1 != 0) {
          FUN_02d76b34(lVar1,0);
          *(undefined4 *)(lVar1 + 0x10) = 5;
          plVar2 = (long *)(*(long *)(*unaff_x20 + 0xb8) + 0x20);
          *plVar2 = lVar1;
          thunk_FUN_01656ef8(plVar2,lVar1);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


