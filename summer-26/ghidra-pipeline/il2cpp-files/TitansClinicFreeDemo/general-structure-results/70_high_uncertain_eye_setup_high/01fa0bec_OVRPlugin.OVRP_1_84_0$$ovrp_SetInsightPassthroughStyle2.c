/*
FUNCTION_NAME: OVRPlugin.OVRP_1_84_0$$ovrp_SetInsightPassthroughStyle2
ENTRY_POINT: 01fa0bec
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


long * OVRPlugin_OVRP_1_84_0__ovrp_SetInsightPassthroughStyle2
                 (undefined8 param_1,uint param_2,long *param_3,undefined8 param_4,long param_5,
                 undefined8 param_6)

{
  byte bVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  if ((DAT_0293df69 & 1) == 0) {
    thunk_FUN_01279b34(PTR_DAT_027b5b18);
    thunk_FUN_01279b34(PTR_DAT_027c1390);
    thunk_FUN_01279b34(PTR_DAT_027c1f80);
    thunk_FUN_01279b34(PTR_DAT_027c1fc0);
    thunk_FUN_01279b34(PTR_DAT_027c1ff0);
    thunk_FUN_01279b34(PTR_DAT_027b32e0);
    DAT_0293df69 = 1;
  }
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  in_stack_00000030 = 0;
  FUN_01f9ef20(&stack0x00000008,param_1,0,param_2,3,param_5,0);
  in_stack_00000030 = in_stack_00000018;
  in_stack_00000028 = in_stack_00000010;
  in_stack_00000020 = in_stack_00000008;
  if ((int)in_stack_00000018 != 0) {
    if (param_5 == 0) {
LAB_01fa0e18:
                    /* WARNING: Subroutine does not return */
      FUN_01230ca0();
    }
    if (((int)in_stack_00000018 == 1) && (*(long *)(param_5 + 0x18) == 0)) {
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
    if ((param_2 >> 0x10 & 1) == 0) {
      if (param_3 == (long *)0x0) {
        if (*(int *)(*(long *)PTR_DAT_027b32e0 + 0xe0) == 0) {
          thunk_FUN_01220628();
        }
        param_3 = (long *)FUN_01f824c8(0);
        uVar4 = FUN_018de6c0(&stack0x00000020,*(undefined8 *)PTR_DAT_027c1f80);
        if (param_3 == (long *)0x0) goto LAB_01fa0e18;
      }
      else {
        uVar4 = FUN_018de6c0(&stack0x00000020,*(undefined8 *)PTR_DAT_027c1f80);
      }
      plVar2 = (long *)(**(code **)(*param_3 + 0x1b8))
                                 (param_3,param_2,uVar4,param_5,param_6,
                                  *(undefined8 *)(*param_3 + 0x1c0));
    }
    else {
      uVar4 = FUN_018de6c0(&stack0x00000020,*(undefined8 *)PTR_DAT_027c1f80);
      if (*(int *)(*(long *)PTR_DAT_027c1390 + 0xe0) == 0) {
        thunk_FUN_01220628(*(long *)PTR_DAT_027c1390);
      }
      plVar2 = (long *)FUN_01f96754(uVar4,param_5);
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


