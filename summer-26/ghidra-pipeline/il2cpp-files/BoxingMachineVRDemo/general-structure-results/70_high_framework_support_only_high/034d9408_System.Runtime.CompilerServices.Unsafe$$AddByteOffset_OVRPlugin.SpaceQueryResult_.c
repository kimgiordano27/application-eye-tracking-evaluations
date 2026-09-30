/*
FUNCTION_NAME: System.Runtime.CompilerServices.Unsafe$$AddByteOffset<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 034d9408
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 78
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Runtime_CompilerServices_Unsafe__AddByteOffset<OVRPlugin_SpaceQueryResult>
               (long param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long unaff_x22;
  long lVar4;
  undefined8 in_stack_00000010;
  undefined4 uStack000000000000001c;
  
  if (param_1 == 0) {
    FUN_02d9a33c();
  }
  uStack000000000000001c = 0;
  in_stack_00000010 = 0;
  if (param_3 == (long *)0x0) {
LAB_034d95ec:
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  uStack000000000000001c = (**(code **)(*param_3 + 0x218))(param_3);
  if ((int)param_2[0x14] <= (int)param_2[2]) {
    lVar2 = thunk_FUN_02d7fbac(*(undefined8 *)
                                (*param_2 +
                                 (ulong)*(ushort *)
                                         (*(long *)(*(long *)(unaff_x22 + 0x38) + 0x20) + 0x50) *
                                 0x10 + 0x140));
    (**(code **)(lVar2 + 8))(param_2,param_3);
    return;
  }
  uVar1 = FUN_034f2020(&stack0x0000001c,&stack0x00000010,
                       *(undefined8 *)(*(long *)(unaff_x22 + 0x38) + 0x30));
  if ((uVar1 & 1) == 0) {
System_Runtime_CompilerServices_Unsafe__AddByteOffset<Painter2D_Painter2DJobData>:
    *(undefined4 *)((long)param_2 + 0xb4) = 4;
  }
  else {
    lVar2 = *(long *)(*(long *)(unaff_x22 + 0x38) + 0x40);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02d9a2e0();
    }
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    lVar4 = *(long *)(*(long *)(unaff_x22 + 0x38) + 0x38);
    lVar2 = *(long *)(lVar4 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02d9a2e0();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02d9a2e0();
    }
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    lVar2 = *(long *)(lVar4 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02d9a2e0();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02d9a2e0();
    }
    if (*(char *)(*(long *)(lVar2 + 0xb8) + 0xc) != '\0') {
      plVar3 = (long *)FUN_03316fc4(*(undefined8 *)(*(long *)(unaff_x22 + 0x38) + 0x48));
      if (plVar3 == (long *)0x0) goto LAB_034d95ec;
      uVar1 = (**(code **)(*plVar3 + 0x1b8))
                        (uStack000000000000001c,0,plVar3,*(undefined8 *)(*plVar3 + 0x1c0));
      if ((uVar1 & 1) != 0)
      goto System_Runtime_CompilerServices_Unsafe__AddByteOffset<Painter2D_Painter2DJobData>;
    }
    FUN_060fa05c();
    FUN_035114d0(param_2,&stack0x0000001c,0,*(undefined8 *)(*(long *)(unaff_x22 + 0x38) + 0x68));
    FUN_060fa0ac();
    uVar1 = (**(code **)(*param_3 + 0x208))(param_3,*(undefined8 *)(*param_3 + 0x210));
    if (((uVar1 & 1) == 0) && ((char)param_2[0x16] == '\0')) {
      (**(code **)(*param_3 + 0x228))(uStack000000000000001c,param_3);
    }
  }
  return;
}


