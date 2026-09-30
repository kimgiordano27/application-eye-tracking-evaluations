/*
FUNCTION_NAME: OVRPlugin.OVRP_1_84_0$$ovrp_GetEyeLayerRecommendedResolution
ENTRY_POINT: 01fa0cf4
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


long * OVRPlugin_OVRP_1_84_0__ovrp_GetEyeLayerRecommendedResolution(long param_1)

{
  byte bVar1;
  undefined8 uVar2;
  long *plVar3;
  uint unaff_w21;
  long *unaff_x22;
  long *unaff_x23;
  
  if (param_1 != 0) {
    if ((unaff_w21 >> 0x10 & 1) == 0) {
      if (unaff_x22 == (long *)0x0) {
        if (*(int *)(*(long *)PTR_DAT_027b32e0 + 0xe0) == 0) {
          thunk_FUN_01220628();
        }
        unaff_x22 = (long *)FUN_01f824c8(0);
        uVar2 = FUN_018de6c0(&stack0x00000020,*(undefined8 *)PTR_DAT_027c1f80);
        if (unaff_x22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01230ca0();
        }
      }
      else {
        uVar2 = FUN_018de6c0(&stack0x00000020,*(undefined8 *)PTR_DAT_027c1f80);
      }
      plVar3 = (long *)(**(code **)(*unaff_x22 + 0x1b8))(unaff_x22,unaff_w21,uVar2);
    }
    else {
      uVar2 = FUN_018de6c0(&stack0x00000020,*(undefined8 *)PTR_DAT_027c1f80);
      if (*(int *)(*(long *)PTR_DAT_027c1390 + 0xe0) == 0) {
        thunk_FUN_01220628(*(long *)PTR_DAT_027c1390);
      }
      plVar3 = (long *)FUN_01f96754(uVar2);
    }
    if (plVar3 != (long *)0x0) {
      bVar1 = *(byte *)(*(long *)PTR_DAT_027b5b18 + 0x130);
      if (bVar1 <= *(byte *)(*plVar3 + 0x130)) {
        if (*(long *)(*(long *)(*plVar3 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_027b5b18
           ) {
          return plVar3;
        }
        return (long *)0x0;
      }
    }
    unaff_x23 = (long *)0x0;
  }
  return unaff_x23;
}


