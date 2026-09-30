/*
FUNCTION_NAME: OVRPlugin.OVRP_1_84_0$$ovrp_GetLayerRecommendedResolution
ENTRY_POINT: 01fa0c70
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


long * OVRPlugin_OVRP_1_84_0__ovrp_GetLayerRecommendedResolution(void)

{
  byte bVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x19;
  uint unaff_w21;
  long *unaff_x22;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 uStack0000000000000020;
  undefined8 uStack0000000000000028;
  undefined8 uStack0000000000000030;
  
  uStack0000000000000020 = 0;
  uStack0000000000000028 = 0;
  uStack0000000000000030 = 0;
  FUN_01f9ef20();
  uStack0000000000000030 = in_stack_00000018;
  uStack0000000000000028 = in_stack_00000010;
  uStack0000000000000020 = in_stack_00000008;
  if ((int)in_stack_00000018 != 0) {
    if (unaff_x19 == 0) {
LAB_01fa0e18:
                    /* WARNING: Subroutine does not return */
      FUN_01230ca0();
    }
    if (((int)in_stack_00000018 == 1) && (*(long *)(unaff_x19 + 0x18) == 0)) {
      plVar2 = (long *)System_Collections_Generic_List<float3>__BinarySearch
                                 (&stack0x00000020,0,*(undefined8 *)PTR_DAT_027c1ff0);
      if (plVar2 == (long *)0x0) goto LAB_01fa0e18;
      lVar3 = (**(code **)(*plVar2 + 0x378))(plVar2,*(undefined8 *)(*plVar2 + 0x380));
      if (lVar3 == 0) {
        return plVar2;
      }
      if (*(long *)(lVar3 + 0x18) == 0) {
        return plVar2;
      }
    }
    if ((unaff_w21 >> 0x10 & 1) == 0) {
      if (unaff_x22 == (long *)0x0) {
        if (*(int *)(*(long *)PTR_DAT_027b32e0 + 0xe0) == 0) {
          thunk_FUN_01220628();
        }
        unaff_x22 = (long *)FUN_01f824c8(0);
        uVar4 = FUN_018de6c0(&stack0x00000020,*(undefined8 *)PTR_DAT_027c1f80);
        if (unaff_x22 == (long *)0x0) goto LAB_01fa0e18;
      }
      else {
        uVar4 = FUN_018de6c0(&stack0x00000020,*(undefined8 *)PTR_DAT_027c1f80);
      }
      plVar2 = (long *)(**(code **)(*unaff_x22 + 0x1b8))(unaff_x22,unaff_w21,uVar4);
    }
    else {
      uVar4 = FUN_018de6c0(&stack0x00000020,*(undefined8 *)PTR_DAT_027c1f80);
      if (*(int *)(*(long *)PTR_DAT_027c1390 + 0xe0) == 0) {
        thunk_FUN_01220628(*(long *)PTR_DAT_027c1390);
      }
      plVar2 = (long *)FUN_01f96754(uVar4);
    }
    if (plVar2 != (long *)0x0) {
      bVar1 = *(byte *)(*(long *)PTR_DAT_027b5b18 + 0x130);
      if (bVar1 <= *(byte *)(*plVar2 + 0x130)) {
        if (*(long *)(*(long *)(*plVar2 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_027b5b18
           ) {
          return plVar2;
        }
        return (long *)0x0;
      }
    }
  }
  return (long *)0x0;
}


