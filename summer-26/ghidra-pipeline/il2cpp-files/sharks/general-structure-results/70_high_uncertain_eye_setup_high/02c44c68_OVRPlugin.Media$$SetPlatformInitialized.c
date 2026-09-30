/*
FUNCTION_NAME: OVRPlugin.Media$$SetPlatformInitialized
ENTRY_POINT: 02c44c68
PROGRAM: sharks-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_Media__SetPlatformInitialized(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 unaff_x19;
  ulong uVar4;
  long *plVar5;
  undefined8 *unaff_x25;
  
  if (0 < (param_1[3] << 0x20) + -0x100000000) {
    uVar4 = 0;
    plVar5 = param_1 + 4;
    do {
      lVar1 = FUN_02826610();
      if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_017fc5a8();
      }
      lVar1 = *(long *)(lVar1 + 0x10);
      if ((lVar1 != 0) &&
         (lVar2 = thunk_FUN_01861ac0(lVar1,*(undefined8 *)(*param_1 + 0x40)), lVar2 == 0))
      goto LAB_02c44d84;
      if (*(uint *)(param_1 + 3) <= uVar4) goto LAB_02c44d80;
      *plVar5 = lVar1;
      thunk_FUN_0188fd20(plVar5,lVar1);
      uVar4 = uVar4 + 1;
      plVar5 = plVar5 + 1;
    } while ((long)uVar4 < (long)((int)param_1[3] + -1));
  }
  lVar1 = thunk_FUN_01861ac0();
  if (lVar1 != 0) {
    if ((int)param_1[3] != 0) {
      *(undefined8 *)((long)param_1 + ((param_1[3] << 0x20) + -0x100000000 >> 0x1d) + 0x20) =
           unaff_x19;
      thunk_FUN_0188fd20();
      uVar3 = thunk_FUN_01861bbc(*unaff_x25);
      FUN_02b43408(uVar3,param_1,0);
      return uVar3;
    }
LAB_02c44d80:
                    /* WARNING: Subroutine does not return */
    FUN_017fc5b0();
  }
LAB_02c44d84:
  uVar3 = thunk_FUN_0187aa4c();
                    /* WARNING: Subroutine does not return */
  FUN_017fc474(uVar3,0);
}


