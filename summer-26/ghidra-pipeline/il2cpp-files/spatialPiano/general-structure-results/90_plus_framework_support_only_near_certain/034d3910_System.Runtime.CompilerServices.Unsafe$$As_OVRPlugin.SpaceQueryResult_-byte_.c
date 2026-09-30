/*
FUNCTION_NAME: System.Runtime.CompilerServices.Unsafe$$As<OVRPlugin.SpaceQueryResult,-byte>
ENTRY_POINT: 034d3910
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 92
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Runtime_CompilerServices_Unsafe__As<OVRPlugin_SpaceQueryResult,_byte>
               (long param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long unaff_x22;
  long lVar4;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined4 uStack000000000000002c;
  
  if (param_1 == 0) {
    FUN_02f41ef8();
  }
  uStack000000000000002c = 0;
  in_stack_00000018 = 0;
  in_stack_00000020 = 0;
  in_stack_00000010 = 0;
  if (param_3 == (long *)0x0) {
System_Runtime_CompilerServices_Unsafe__AsRef<InstanceOcclusionEventStats>:
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  uStack000000000000002c = (**(code **)(*param_3 + 0x218))(param_3);
  if ((int)param_2[0x14] <= (int)param_2[2]) {
    lVar2 = thunk_FUN_02f2742c(*(undefined8 *)
                                (*param_2 +
                                 (ulong)*(ushort *)
                                         (*(long *)(*(long *)(unaff_x22 + 0x38) + 0x20) + 0x50) *
                                 0x10 + 0x140));
    (**(code **)(lVar2 + 8))(param_2,param_3);
    return;
  }
  uVar1 = FUN_034ea38c(&stack0x0000002c,&stack0x00000020,
                       *(undefined8 *)(*(long *)(unaff_x22 + 0x38) + 0x30));
  if ((uVar1 & 1) == 0) {
System_Runtime_CompilerServices_Unsafe__AsRef<BatchMaterialID>:
    *(undefined4 *)((long)param_2 + 0xb4) = 4;
  }
  else {
    lVar2 = *(long *)(*(long *)(unaff_x22 + 0x38) + 0x40);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02f41e9c();
    }
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    lVar4 = *(long *)(*(long *)(unaff_x22 + 0x38) + 0x38);
    lVar2 = *(long *)(lVar4 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02f41e9c();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02f41e9c();
    }
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    lVar2 = *(long *)(lVar4 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02f41e9c();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02f41e9c();
    }
    if (*(char *)(*(long *)(lVar2 + 0xb8) + 0xc) != '\0') {
      plVar3 = (long *)FUN_032960b4(*(undefined8 *)(*(long *)(unaff_x22 + 0x38) + 0x48));
      if (plVar3 == (long *)0x0)
      goto System_Runtime_CompilerServices_Unsafe__AsRef<InstanceOcclusionEventStats>;
      uVar1 = (**(code **)(*plVar3 + 0x1b8))
                        (plVar3,uStack000000000000002c,0,*(undefined8 *)(*plVar3 + 0x1c0));
      if ((uVar1 & 1) != 0) goto System_Runtime_CompilerServices_Unsafe__AsRef<BatchMaterialID>;
    }
    FUN_06176474(&stack0x00000010,param_2,param_3,0);
    FUN_0350b688(param_2,&stack0x0000002c,0,*(undefined8 *)(*(long *)(unaff_x22 + 0x38) + 0x68));
    FUN_06176494(&stack0x00000010,0);
    uVar1 = (**(code **)(*param_3 + 0x208))(param_3,*(undefined8 *)(*param_3 + 0x210));
    if (((uVar1 & 1) == 0) && ((char)param_2[0x16] == '\0')) {
      (**(code **)(*param_3 + 0x228))(param_3);
    }
  }
  return;
}


