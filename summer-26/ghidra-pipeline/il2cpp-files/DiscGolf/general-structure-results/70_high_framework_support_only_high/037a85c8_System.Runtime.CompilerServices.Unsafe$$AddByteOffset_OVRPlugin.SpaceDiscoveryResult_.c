/*
FUNCTION_NAME: System.Runtime.CompilerServices.Unsafe$$AddByteOffset<OVRPlugin.SpaceDiscoveryResult>
ENTRY_POINT: 037a85c8
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 78
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Runtime_CompilerServices_Unsafe__AddByteOffset<OVRPlugin_SpaceDiscoveryResult>
               (long param_1)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long *unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long lVar4;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 *in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  
  if (param_1 == 0) {
    FUN_02dcfd74();
  }
  in_stack_00000010 = 0;
  in_stack_00000018 = 0;
  in_stack_00000008 = 0;
  in_stack_00000028 = 0;
  in_stack_00000020 = 0;
  in_stack_00000038 = 0;
  in_stack_00000030 = 0;
  if (unaff_x20 == (long *)0x0) {
LAB_037a87e8:
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  (**(code **)(*unaff_x20 + 0x218))(&stack0x00000060);
  in_stack_00000028 = in_stack_00000068;
  in_stack_00000020 = in_stack_00000060;
  in_stack_00000038 = in_stack_00000078;
  in_stack_00000030 = in_stack_00000070;
  if ((int)unaff_x21[0x14] <= (int)unaff_x21[2]) {
    lVar2 = thunk_FUN_02db5310(*(undefined8 *)
                                (*unaff_x21 +
                                 (ulong)*(ushort *)
                                         (*(long *)(*(long *)(unaff_x22 + 0x38) + 0x20) + 0x50) *
                                 0x10 + 0x140));
    (**(code **)(lVar2 + 8))();
    return;
  }
  uVar1 = FUN_037c5484(&stack0x00000020,&stack0x00000018,
                       *(undefined8 *)(*(long *)(unaff_x22 + 0x38) + 0x30));
  if ((uVar1 & 1) == 0) {
LAB_037a870c:
    *(undefined4 *)((long)unaff_x21 + 0xb4) = 4;
  }
  else {
    lVar2 = *(long *)(*(long *)(unaff_x22 + 0x38) + 0x40);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02dcfd18();
    }
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    lVar4 = *(long *)(*(long *)(unaff_x22 + 0x38) + 0x38);
    lVar2 = *(long *)(lVar4 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02dcfd18();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02dcfd18();
    }
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    lVar2 = *(long *)(lVar4 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02dcfd18();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02dcfd18();
    }
    if (*(char *)(*(long *)(lVar2 + 0xb8) + 0xc) != '\0') {
      plVar3 = (long *)FUN_0357badc(*(undefined8 *)(*(long *)(unaff_x22 + 0x38) + 0x48));
      if (plVar3 == (long *)0x0) goto LAB_037a87e8;
      in_stack_00000068 = (undefined8 *)in_stack_00000028;
      in_stack_00000060 = in_stack_00000020;
      in_stack_00000078 = in_stack_00000038;
      in_stack_00000070 = in_stack_00000030;
      in_stack_00000048 = 0;
      in_stack_00000040 = 0;
      in_stack_00000058 = 0;
      in_stack_00000050 = 0;
      uVar1 = (**(code **)(*plVar3 + 0x1b8))
                        (plVar3,&stack0x00000060,&stack0x00000040,*(undefined8 *)(*plVar3 + 0x1c0));
      if ((uVar1 & 1) != 0) goto LAB_037a870c;
    }
    FUN_063cf4e0(&stack0x00000008);
    in_stack_00000060 = 0;
    in_stack_00000068 = &stack0x00000008;
    FUN_037e6c4c();
    FUN_063cf530(&stack0x00000008,0);
    uVar1 = (**(code **)(*unaff_x20 + 0x208))();
    if (((uVar1 & 1) == 0) && ((char)unaff_x21[0x16] == '\0')) {
      in_stack_00000068 = (undefined8 *)in_stack_00000028;
      in_stack_00000060 = in_stack_00000020;
      in_stack_00000078 = in_stack_00000038;
      in_stack_00000070 = in_stack_00000030;
      (**(code **)(*unaff_x20 + 0x228))();
    }
  }
  return;
}


