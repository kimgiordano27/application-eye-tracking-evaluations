/*
FUNCTION_NAME: OVRPlugin$$set_rotation
ENTRY_POINT: 02c18fb0
PROGRAM: sharks-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__set_rotation(void)

{
  ulong uVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = FUN_02b0f554();
  if ((uVar1 & 1) == 0) {
    return 0;
  }
  lVar2 = *(long *)(unaff_x19 + 0x68);
  if (*(long *)(unaff_x20 + 0x68) == 0) {
    if (lVar2 == 0) {
      return 1;
    }
    uVar3 = *(undefined8 *)(lVar2 + 0x10);
    if (*(int *)(*(long *)PTR_DAT_037f2c78 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
  }
  else {
    uVar3 = *(undefined8 *)(*(long *)(unaff_x20 + 0x68) + 0x10);
    if (lVar2 != 0) {
      uVar4 = *(undefined8 *)(lVar2 + 0x10);
      if (*(int *)(*(long *)PTR_DAT_037f2c78 + 0xe0) == 0) {
        thunk_FUN_01843fdc();
      }
      uVar1 = FUN_02be66d0(uVar3,uVar4,0);
      if ((uVar1 & 1) == 0) {
        return 0;
      }
      if ((*(long *)(unaff_x20 + 0x68) != 0) && (*(long *)(unaff_x19 + 0x68) != 0)) {
        uVar3 = thunk_FUN_02a4fb2c(*(undefined8 *)(*(long *)(unaff_x20 + 0x68) + 0x18),
                                   *(undefined8 *)(*(long *)(unaff_x19 + 0x68) + 0x18),0);
        return uVar3;
      }
                    /* WARNING: Subroutine does not return */
      FUN_017fc5a8();
    }
    if (*(int *)(*(long *)PTR_DAT_037f2c78 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
  }
  uVar3 = FUN_02be66d0(uVar3,0,0);
  return uVar3;
}


