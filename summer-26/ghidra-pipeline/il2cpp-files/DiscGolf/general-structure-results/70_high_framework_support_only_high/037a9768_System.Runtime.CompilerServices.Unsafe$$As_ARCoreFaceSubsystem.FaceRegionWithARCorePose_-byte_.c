/*
FUNCTION_NAME: System.Runtime.CompilerServices.Unsafe$$As<ARCoreFaceSubsystem.FaceRegionWithARCorePose,-byte>
ENTRY_POINT: 037a9768
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 85
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Runtime_CompilerServices_Unsafe__As<ARCoreFaceSubsystem_FaceRegionWithARCorePose,_byte>
               (void)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long *unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long lVar4;
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000018;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  undefined4 uStack0000000000000030;
  undefined8 uStack0000000000000034;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined4 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined4 in_stack_00000068;
  undefined4 uStack000000000000006c;
  undefined4 uStack0000000000000070;
  undefined8 uStack0000000000000074;
  
  uStack0000000000000010 = 0;
  uStack0000000000000018 = 0;
  uStack0000000000000008 = 0;
  if (unaff_x20 == (long *)0x0) {
System_Runtime_CompilerServices_Unsafe__As<RenderGraph_CompiledPassInfo,_byte>:
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  (**(code **)(*unaff_x20 + 0x218))(&stack0x00000060);
  in_stack_00000028 = in_stack_00000068;
  in_stack_00000020 = in_stack_00000060;
  uStack0000000000000034 = uStack0000000000000074;
  uStack0000000000000030 = uStack0000000000000070;
  if ((int)unaff_x21[0x14] <= (int)unaff_x21[2]) {
    lVar2 = thunk_FUN_02db5310(*(undefined8 *)
                                (*unaff_x21 +
                                 (ulong)*(ushort *)
                                         (*(long *)(*(long *)(unaff_x22 + 0x38) + 0x20) + 0x50) *
                                 0x10 + 0x140));
    (**(code **)(lVar2 + 8))();
    return;
  }
  uVar1 = FUN_037c5778(&stack0x00000020,&stack0x00000018,
                       *(undefined8 *)(*(long *)(unaff_x22 + 0x38) + 0x30));
  if ((uVar1 & 1) == 0) {
System_Runtime_CompilerServices_Unsafe__As<OVRPlugin_SpaceQueryResult,_byte>:
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
      plVar3 = (long *)FUN_0357c150(*(undefined8 *)(*(long *)(unaff_x22 + 0x38) + 0x48));
      if (plVar3 == (long *)0x0)
      goto System_Runtime_CompilerServices_Unsafe__As<RenderGraph_CompiledPassInfo,_byte>;
      in_stack_00000068 = in_stack_00000028;
      in_stack_00000060 = in_stack_00000020;
      uStack0000000000000074 = uStack0000000000000034;
      uStack0000000000000070 = uStack0000000000000030;
      in_stack_00000048 = 0;
      in_stack_00000050 = 0;
      in_stack_00000040 = 0;
      in_stack_00000058 = 0;
      uVar1 = (**(code **)(*plVar3 + 0x1b8))
                        (plVar3,&stack0x00000060,&stack0x00000040,*(undefined8 *)(*plVar3 + 0x1c0));
      if ((uVar1 & 1) != 0)
      goto System_Runtime_CompilerServices_Unsafe__As<OVRPlugin_SpaceQueryResult,_byte>;
    }
    FUN_063cf4e0(&stack0x00000008);
    in_stack_00000060 = 0;
    _in_stack_00000068 = (undefined1 *)&stack0x00000008;
    FUN_037e7b04();
    FUN_063cf530(&stack0x00000008,0);
    uVar1 = (**(code **)(*unaff_x20 + 0x208))();
    if (((uVar1 & 1) == 0) && ((char)unaff_x21[0x16] == '\0')) {
      in_stack_00000068 = in_stack_00000028;
      in_stack_00000060 = in_stack_00000020;
      uStack0000000000000074 = uStack0000000000000034;
      uStack0000000000000070 = uStack0000000000000030;
      (**(code **)(*unaff_x20 + 0x228))();
    }
  }
  return;
}


