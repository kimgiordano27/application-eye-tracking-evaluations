/*
FUNCTION_NAME: System.Runtime.CompilerServices.RuntimeHelpers$$IsReferenceOrContainsReferences<OVRPlugin.SpaceDiscoveryResult>
ENTRY_POINT: 040da668
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Runtime_CompilerServices_RuntimeHelpers__IsReferenceOrContainsReferences<OVRPlugin_SpaceDiscoveryResult>
               (long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  
  lVar5 = *(long *)(param_4 + 0x38);
  if (lVar5 == 0) {
    FUN_0373b518(PTR_DAT_07d97330);
    FUN_0373b518(PTR_DAT_07d96760);
    FUN_0373b518(PTR_DAT_07d97338);
    FUN_0373b518(PTR_DAT_07d97340);
    lVar5 = *(long *)(param_4 + 0x38);
    if (lVar5 == 0) {
      FUN_037756d4(param_4);
      lVar5 = *(long *)(param_4 + 0x38);
    }
  }
  in_stack_000000e8 = 0;
  in_stack_000000e0 = 0;
  in_stack_000000f8 = 0;
  in_stack_000000f0 = 0;
  in_stack_000000c8 = 0;
  in_stack_000000c0 = 0;
  in_stack_000000d8 = 0;
  in_stack_000000d0 = 0;
  in_stack_00000130 = *(undefined8 *)(param_1 + 0x48);
  in_stack_00000128 = *(undefined8 *)(param_1 + 0x40);
  in_stack_00000120 = *(undefined8 *)(param_1 + 0x38);
  in_stack_00000118 = *(undefined8 *)(param_1 + 0x30);
  in_stack_00000110 = *(undefined8 *)(param_1 + 0x28);
  in_stack_00000108 = *(undefined8 *)(param_1 + 0x20);
  in_stack_00000100 = *(undefined8 *)(param_1 + 0x18);
  lVar1 = param_1 + 0x18;
  iVar2 = FUN_06e58b78(param_2,param_3,lVar1,param_1 + 0x10,*(undefined8 *)(lVar5 + 0x10));
  if (iVar2 != 0) {
    uVar6 = *(undefined8 *)(*(long *)(param_4 + 0x38) + 0x18);
    if (*(int *)(*(long *)(PTR_DAT_07d86548 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    plVar3 = (long *)FUN_062519f8(uVar6,0);
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    uVar6 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
    FUN_06e7b8ac(uVar6,iVar2,0);
  }
  FUN_040a7418(&stack0x00000080,param_2,*(undefined8 *)(*(long *)(param_4 + 0x38) + 0x20));
  in_stack_000000c8 = in_stack_00000088;
  in_stack_000000c0 = in_stack_00000080;
  in_stack_000000d8 = in_stack_00000098;
  in_stack_000000d0 = in_stack_00000090;
  in_stack_000000e8 = in_stack_000000a8;
  in_stack_000000e0 = in_stack_000000a0;
  in_stack_000000f8 = in_stack_000000b8;
  in_stack_000000f0 = in_stack_000000b0;
  FUN_04daa438(param_1,&stack0x000000c0,*(undefined8 *)PTR_DAT_07d97330);
  FUN_04da0030(param_1 + 8,param_1 + 0x10,*(undefined8 *)PTR_DAT_07d96760);
  uVar4 = UnityEngine_Rendering_DebugUI_EnumField__set_setIndex(lVar1,0);
  if ((uVar4 & 1) != 0) {
    in_stack_00000048 = in_stack_00000108;
    in_stack_00000040 = in_stack_00000100;
    in_stack_00000058 = in_stack_00000118;
    in_stack_00000050 = in_stack_00000110;
    in_stack_00000068 = in_stack_00000128;
    in_stack_00000060 = in_stack_00000120;
    in_stack_00000070 = in_stack_00000130;
    uVar4 = FUN_06e51874(&stack0x00000040);
    if ((uVar4 & 1) != 0) {
      uVar6 = FUN_04daa1e4(param_1,0,*(undefined8 *)PTR_DAT_07d97338);
      uVar6 = FUN_040a665c(uVar6,*(undefined8 *)PTR_DAT_07d97340);
      FUN_06e535ec(uVar6,lVar1,0);
    }
  }
  return;
}


