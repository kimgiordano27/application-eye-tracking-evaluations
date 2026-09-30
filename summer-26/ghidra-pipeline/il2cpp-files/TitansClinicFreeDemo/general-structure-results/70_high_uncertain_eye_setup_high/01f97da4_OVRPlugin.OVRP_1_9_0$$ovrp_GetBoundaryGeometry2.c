/*
FUNCTION_NAME: OVRPlugin.OVRP_1_9_0$$ovrp_GetBoundaryGeometry2
ENTRY_POINT: 01f97da4
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


long * OVRPlugin_OVRP_1_9_0__ovrp_GetBoundaryGeometry2(ulong param_1,long param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long unaff_x19;
  undefined8 *puVar6;
  ulong unaff_x21;
  long *plVar7;
  undefined8 in_stack_00000008;
  
  if ((param_1 & 1) == 0) {
    thunk_FUN_01279b34(PTR_DAT_027c1ca8);
    thunk_FUN_01279b34(PTR_DAT_027c1cb0);
    thunk_FUN_01279b34(PTR_DAT_027b3ea8);
    thunk_FUN_01279b34(PTR_DAT_027c1cb8);
    *(undefined1 *)(unaff_x19 + 0xf15) = 1;
  }
  puVar2 = PTR_DAT_027c1cb8;
  in_stack_00000008 = 0;
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01230ca0();
  }
  puVar6 = (undefined8 *)(param_2 + 0x20);
  plVar7 = (long *)*puVar6;
  if (plVar7 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_027c1cb8 + 0x130);
    if ((bVar1 <= *(byte *)(*plVar7 + 0x130)) &&
       (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_027c1cb8)) {
      if ((unaff_x21 & 1) == 0) {
        return plVar7;
      }
      if (plVar7[3] != 0) {
        return plVar7;
      }
    }
  }
  in_stack_00000008 = 0;
  if (*(int *)(*(long *)PTR_DAT_027b3ea8 + 0xe0) == 0) {
    thunk_FUN_01220628();
  }
  uVar4 = FUN_011f6900(param_2,&stack0x00000008);
  uVar3 = in_stack_00000008;
  if ((uVar4 & 1) == 0) {
    uVar5 = FUN_015b6e50(*(undefined8 *)PTR_DAT_027c1cb0);
    FUN_013d46f4(uVar3,0,uVar5,*(undefined8 *)PTR_DAT_027c1ca8);
  }
  uVar3 = in_stack_00000008;
  plVar7 = (long *)thunk_FUN_0124bba8(*(undefined8 *)puVar2);
  FUN_01f97ee8(plVar7,uVar3,0);
  *puVar6 = plVar7;
  thunk_FUN_01286abc(puVar6,plVar7);
  return plVar7;
}


