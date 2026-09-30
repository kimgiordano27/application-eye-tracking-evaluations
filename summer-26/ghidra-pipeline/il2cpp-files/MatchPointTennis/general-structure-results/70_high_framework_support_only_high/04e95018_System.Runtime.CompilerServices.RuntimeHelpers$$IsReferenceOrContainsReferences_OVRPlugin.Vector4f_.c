/*
FUNCTION_NAME: System.Runtime.CompilerServices.RuntimeHelpers$$IsReferenceOrContainsReferences<OVRPlugin.Vector4f>
ENTRY_POINT: 04e95018
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;validity_or_gating_hits_1;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_1
*/


void System_Runtime_CompilerServices_RuntimeHelpers__IsReferenceOrContainsReferences<OVRPlugin_Vector4f>
               (void)

{
  byte bVar1;
  byte bVar2;
  undefined8 uVar3;
  void *__src;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  long unaff_x20;
  long unaff_x21;
  void *unaff_x22;
  long unaff_x26;
  long unaff_x27;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined4 in_stack_000000b0;
  undefined1 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000f0;
  char in_stack_00000350;
  long in_stack_0000cc58;
  
  FUN_04447ba8();
                    /* try { // try from 04e95020 to 04f95053 has its CatchHandler @ 04e94edc */
  FUN_04447ba8(PTR_DAT_09f26cd0);
  FUN_04447ba8(PTR_DAT_09f26cd8);
  if (*(long *)(unaff_x21 + 0x38) == 0) {
    FUN_04482014();
  }
                    /* try { // try from 04e95054 to 04f95063 has its CatchHandler @ 04e95138 */
  memset(&stack0x0000c798,0,0x4c0);
  memset(&stack0x00000588,0,0xc210);
  in_stack_000000b8 = 0;
  in_stack_000000a0 = 0;
  in_stack_000000a8 = 0;
                    /* try { // try from 04e95078 to 04f95083 has its CatchHandler @ 04e95140 */
  in_stack_000000b0 = 0;
  FUN_08c35a4c();
                    /* try { // try from 04e95084 to 04f95157 has its CatchHandler @ 04e94edc */
  FUN_050ebe4c(&stack0x000000c0,**(undefined8 **)(unaff_x21 + 0x38));
  in_stack_00000088 = *(undefined8 *)(unaff_x27 + 0x68);
  in_stack_00000080 = *(undefined8 *)(unaff_x27 + 0x60);
  uVar6 = *(undefined8 *)(unaff_x27 + 0x78);
  uVar3 = *(undefined8 *)(unaff_x27 + 0x70);
  in_stack_00000078 = *(undefined8 *)(unaff_x27 + 0x58);
  in_stack_00000070 = *(undefined8 *)(unaff_x27 + 0x50);
  *(undefined8 *)(unaff_x27 + 0x28) = uVar6;
  *(undefined8 *)(unaff_x27 + 0x20) = uVar3;
  *(undefined8 *)(unaff_x20 + 0x68) = in_stack_00000088;
  *(undefined8 *)(unaff_x20 + 0x60) = in_stack_00000080;
  *(undefined8 *)(unaff_x20 + 0x78) = uVar6;
  *(undefined8 *)(unaff_x20 + 0x70) = uVar3;
  *(undefined8 *)(unaff_x20 + 0x58) = in_stack_00000078;
  *(undefined8 *)(unaff_x20 + 0x50) = in_stack_00000070;
  FUN_04e927b8();
  memcpy(&stack0x00000008,unaff_x22,0x68);
  memcpy(&stack0x000000c0,&stack0x00000008,0x68);
  FUN_04e92560();
  if ((*(byte *)(*(long *)(*(long *)PTR_DAT_09f26c60 + 0x20) + 0x135) & 1) == 0) {
    FUN_04481fb8();
  }
  uVar3 = FUN_060ac158();
  __src = (void *)FUN_04e63e08(uVar3,*(undefined8 *)(*(long *)(unaff_x21 + 0x38) + 0x30));
  FUN_04e94428();
  memmove(unaff_x22,__src,0x68);
  bVar2 = FUN_04e910dc();
  if ((bVar2 & 1) == 0) {
    bVar1 = FUN_04e91204();
  }
  else {
    UnityEngine_Rendering_ProbeReferenceVolume_CellStreamingRequest__UpdateState(&stack0x000000c0);
    bVar1 = in_stack_00000350 == '\x01';
  }
  memcpy(&stack0x000000c0,unaff_x22,0x68);
  plVar4 = (long *)thunk_FUN_04484e3c(*(undefined8 *)(*(long *)(unaff_x21 + 0x38) + 0x10),
                                      &stack0x000000c0);
  if ((plVar4 == (long *)0x0) || (*plVar4 != *(long *)PTR_DAT_09f26cd0)) {
    memcpy(&stack0x000000c0,unaff_x22,0x68);
    plVar4 = (long *)thunk_FUN_04484e3c(*(undefined8 *)(*(long *)(unaff_x21 + 0x38) + 0x10),
                                        &stack0x000000c0);
    if (plVar4 != (long *)0x0) {
      if (*plVar4 == *(long *)PTR_DAT_09f26cd8) goto LAB_04e95258;
      bVar2 = bVar2 & 1;
    }
  }
  else {
LAB_04e95258:
    uVar5 = FUN_04e9132c();
    if ((uVar5 & 1) != 0) {
      FUN_04e93374();
    }
    if ((bVar1 & 1) != 0) {
      memset(&stack0x000000c0,0,0x138);
      FUN_04e93828();
    }
    memcpy(&stack0x000000c0,unaff_x22,0x68);
    plVar4 = (long *)thunk_FUN_04484e3c(*(undefined8 *)(*(long *)(unaff_x21 + 0x38) + 0x10),
                                        &stack0x000000c0);
    if ((plVar4 != (long *)0x0) && (*plVar4 == *(long *)PTR_DAT_09f26cd0)) {
      in_stack_000000c0 = 0;
      in_stack_000000c8 = 0;
      in_stack_000000d0 = 0;
      FUN_04e935d0();
    }
    memcpy(&stack0x000000c0,unaff_x22,0x68);
    plVar4 = (long *)thunk_FUN_04484e3c(*(undefined8 *)(*(long *)(unaff_x21 + 0x38) + 0x10),
                                        &stack0x000000c0);
    if ((plVar4 != (long *)0x0) && (*plVar4 == *(long *)PTR_DAT_09f26cd8)) {
      memset(&stack0x000000c0,0,0x130);
      FUN_04e93cd8();
    }
  }
  uVar5 = FUN_04e90fb8();
  if ((uVar5 & 1) != 0) {
    in_stack_000000c0 = 0;
    in_stack_000000c8 = 0;
    in_stack_000000d0 = 0;
    FUN_04e9311c();
  }
  if ((bVar1 & 1) != 0) {
    bVar2 = bVar1 & bVar2;
    memcpy(&stack0x000000c0,unaff_x22,0x68);
    plVar4 = (long *)thunk_FUN_04484e3c(*(undefined8 *)(*(long *)(unaff_x21 + 0x38) + 0x10),
                                        &stack0x000000c0);
    if (plVar4 != (long *)0x0) {
      if (*plVar4 == *(long *)PTR_DAT_09f26cd0) goto LAB_04e95488;
      bVar2 = bVar2 & 1;
    }
    memcpy(&stack0x000000c0,unaff_x22,0x68);
    plVar4 = (long *)thunk_FUN_04484e3c(*(undefined8 *)(*(long *)(unaff_x21 + 0x38) + 0x10),
                                        &stack0x000000c0);
    if ((plVar4 == (long *)0x0) || (*plVar4 != *(long *)PTR_DAT_09f26cd8)) {
      memset(&stack0x000000c0,0,0x110);
      FUN_04e92a14();
    }
  }
LAB_04e95488:
  if ((bVar2 & 1) != 0) {
    memcpy(&stack0x000000c0,unaff_x22,0x68);
    plVar4 = (long *)thunk_FUN_04484e3c(*(undefined8 *)(*(long *)(unaff_x21 + 0x38) + 0x10),
                                        &stack0x000000c0);
    if ((plVar4 != (long *)0x0) && (*plVar4 == *(long *)PTR_DAT_09f26c58)) {
      thunk_FUN_044adef4(PTR_DAT_09f20bb0);
      uVar3 = thunk_FUN_0448520c();
      uVar6 = thunk_FUN_044adef4(PTR_DAT_09f26ce0);
      FUN_07a3e070(uVar3,uVar6,0);
                    /* WARNING: Subroutine does not return */
      FUN_04447d10(uVar3);
    }
    memset(&stack0x000000c0,0,0x100);
    FUN_04e92c6c();
  }
  memset(&stack0x000000c0,0,0xf8);
  FUN_04e92ec4();
  in_stack_000000f0 = 0;
  *(undefined8 *)(unaff_x27 + 0x68) = 0;
  *(undefined8 *)(unaff_x27 + 0x60) = 0;
  *(undefined8 *)(unaff_x27 + 0x78) = 0;
  *(undefined8 *)(unaff_x27 + 0x70) = 0;
  *(undefined8 *)(unaff_x27 + 0x58) = 0;
  *(undefined8 *)(unaff_x27 + 0x50) = 0;
  FUN_04e93a80();
  if (*(long *)(unaff_x26 + 0x28) == in_stack_0000cc58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


