/*
FUNCTION_NAME: System.Array$$IndexOfImpl<OVRPlugin.SpaceDiscoveryResult>
ENTRY_POINT: 0555782c
PROGRAM: Hyper-libil2cpp.so
SCORE: 92
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


ulong System_Array__IndexOfImpl<OVRPlugin_SpaceDiscoveryResult>
                (long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  long *plVar2;
  ushort *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  if (param_1 == 0) {
    FUN_04947ee4(&DAT_0ae98c78);
    if (*(long *)(param_3 + 0x38) == 0) {
      FUN_04980b90(param_3);
    }
  }
  uVar7 = *(undefined8 *)(param_2 + 0x20);
  in_stack_00000008 = uVar7;
  uVar1 = thunk_FUN_04983b98(**(undefined8 **)(*(long *)(param_3 + 0x20) + 0xc0),&stack0x00000008);
  lVar5 = **(long **)(param_3 + 0x38);
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_04980b34(lVar5);
  }
  lVar5 = thunk_FUN_04983e64(uVar1,lVar5);
  if (lVar5 == 0) {
    in_stack_00000008 = *(undefined8 *)(param_2 + 0x20);
    plVar2 = (long *)thunk_FUN_04983b98(**(undefined8 **)(*(long *)(param_3 + 0x20) + 0xc0),
                                        &stack0x00000008);
    if ((plVar2 == (long *)0x0) || (*plVar2 != DAT_0ae98c78)) {
      thunk_FUN_049ae08c(&DAT_0ae9e198);
      FUN_0433a0d0();
      uVar1 = FUN_09371824(0);
      uVar7 = *(undefined8 *)(param_2 + 0x20);
      in_stack_00000008 = FUN_043518cc(*(undefined8 *)(*(long *)(param_3 + 0x20) + 0xc0),0);
      in_stack_00000010 = 0xffffffffffffffff;
      in_stack_00000018 = uVar7;
      uVar7 = thunk_FUN_04956588(&stack0x00000008,0);
      uVar6 = *(undefined8 *)(*(long *)(param_3 + 0x38) + 0x10);
      FUN_0433a0d0(*(undefined8 *)(PTR_DAT_0ac09758 + 0xe0));
      uVar6 = FUN_08d895f0(uVar6,0);
      uVar1 = FUN_0936d4d8(uVar1,uVar7,uVar6,0);
      thunk_FUN_049ae08c(&DAT_0ae98850);
      uVar7 = thunk_FUN_04983f60();
      FUN_08d79944(uVar7,uVar1,0);
                    /* WARNING: Subroutine does not return */
      FUN_04948050(uVar7,param_3);
    }
    uVar4 = FUN_0554d4b4(param_2,*(undefined8 *)(*(long *)(param_3 + 0x38) + 8));
  }
  else {
    in_stack_00000008 = uVar7;
    uVar1 = thunk_FUN_04983b98(**(undefined8 **)(*(long *)(param_3 + 0x20) + 0xc0),&stack0x00000008)
    ;
    lVar5 = **(long **)(param_3 + 0x38);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_04980b34(lVar5);
    }
    plVar2 = (long *)thunk_FUN_04983e64(uVar1,lVar5);
    lVar5 = **(long **)(param_3 + 0x38);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_04980b34(lVar5);
    }
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    if (*(long *)(*plVar2 + 0x40) != *(long *)(lVar5 + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_0494850c(plVar2);
    }
    puVar3 = (ushort *)thunk_FUN_049840a8();
    uVar4 = (ulong)*puVar3;
  }
  return uVar4;
}


