/*
FUNCTION_NAME: System.Runtime.CompilerServices.RuntimeHelpers$$IsReferenceOrContainsReferences<OVRPlugin.Vector3f>
ENTRY_POINT: 04e94f24
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 84
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;validity_or_gating_hits_2;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_1
*/


void System_Runtime_CompilerServices_RuntimeHelpers__IsReferenceOrContainsReferences<OVRPlugin_Vector3f>
               (undefined8 param_1,long *param_2,void *param_3,undefined8 param_4,undefined8 param_5
               ,undefined8 param_6,long param_7)

{
  byte bVar1;
  byte bVar2;
  void *__src;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  long in_x9;
  undefined8 uVar6;
  long lVar7;
  long unaff_x26;
  long in_stack_00000070;
  long in_stack_00000078;
  long in_stack_00000080;
  long in_stack_00000088;
  long in_stack_00000090;
  long in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined4 in_stack_000000b0;
  undefined1 in_stack_000000b8;
  long in_stack_000000c0;
  long in_stack_000000c8;
  long in_stack_000000d0;
  long in_stack_000000d8;
  long in_stack_000000e0;
  long in_stack_000000e8;
  undefined8 in_stack_000000f0;
  char in_stack_00000350;
  long in_stack_0000cc58;
  
  *(undefined8 *)(in_x9 + 0x8c58) = param_1;
  if (*(long *)(param_7 + 0x38) == 0) {
    FUN_04447ba8(PTR_DAT_09f26c58);
    FUN_04447ba8(PTR_DAT_09f26c40);
    FUN_04447ba8(PTR_DAT_09f26c60);
    FUN_04447ba8(PTR_DAT_09f26c68);
    FUN_04447ba8(PTR_DAT_09f26a68);
    FUN_04447ba8(PTR_DAT_09f26c70);
    FUN_04447ba8(PTR_DAT_09f26c78);
    FUN_04447ba8(PTR_DAT_09f26c80);
    FUN_04447ba8(PTR_DAT_09f26c88);
    FUN_04447ba8(PTR_DAT_09f26c90);
    FUN_04447ba8(PTR_DAT_09f26c98);
    FUN_04447ba8(PTR_DAT_09f26ca0);
    FUN_04447ba8(PTR_DAT_09f26ca8);
                    /* try { // try from 04e94ff0 to 04f94ff7 has its CatchHandler @ 04e9513c */
    FUN_04447ba8(PTR_DAT_09f26cb0);
    FUN_04447ba8(PTR_DAT_09f26cb8);
    FUN_04447ba8(PTR_DAT_09f26cc0);
                    /* try { // try from 04e95010 to 04f9501f has its CatchHandler @ 04e95140 */
    FUN_04447ba8(PTR_DAT_09f26cc8);
    FUN_04447ba8(PTR_DAT_09f26cd0);
    FUN_04447ba8(PTR_DAT_09f26cd8);
    if (*(long *)(param_7 + 0x38) == 0) {
      FUN_04482014(param_7);
    }
  }
  memset(&stack0x0000c798,0,0x4c0);
  memset(&stack0x00000588,0,0xc210);
  in_stack_000000b8 = 0;
  in_stack_000000a0 = 0;
  in_stack_000000a8 = 0;
  in_stack_000000b0 = 0;
  FUN_08c35a4c(param_2,0);
  FUN_050ebe4c(&stack0x000000c0,**(undefined8 **)(param_7 + 0x38));
  in_stack_00000098 = in_stack_000000e8;
  in_stack_00000090 = in_stack_000000e0;
  in_stack_00000078 = in_stack_000000c8;
  in_stack_00000070 = in_stack_000000c0;
  in_stack_00000088 = in_stack_000000d8;
  in_stack_00000080 = in_stack_000000d0;
  param_2[0xd] = in_stack_000000d8;
  param_2[0xc] = in_stack_000000d0;
  param_2[0xf] = in_stack_000000e8;
  param_2[0xe] = in_stack_000000e0;
  param_2[0xb] = in_stack_000000c8;
  param_2[10] = in_stack_000000c0;
  FUN_04e927b8(param_2,0,param_4,*(undefined8 *)PTR_DAT_09f26c80);
  memcpy(&stack0x00000008,param_3,0x68);
  uVar6 = *(undefined8 *)(*(long *)(param_7 + 0x38) + 0x28);
  memcpy(&stack0x000000c0,&stack0x00000008,0x68);
  FUN_04e92560(param_2,&stack0x000000c0,param_4,uVar6);
  lVar7 = *param_2;
  if ((*(byte *)(*(long *)(*(long *)PTR_DAT_09f26c60 + 0x20) + 0x135) & 1) == 0) {
    FUN_04481fb8();
  }
  uVar6 = FUN_060ac158(param_2,*(int *)(lVar7 + 8) + -1,*(undefined8 *)PTR_DAT_09f26c40);
  __src = (void *)FUN_04e63e08(uVar6,*(undefined8 *)(*(long *)(param_7 + 0x38) + 0x30));
  FUN_04e94428(__src,param_4,param_5,param_6,*(undefined8 *)(*(long *)(param_7 + 0x38) + 0x40));
  memmove(param_3,__src,0x68);
  bVar2 = FUN_04e910dc(param_4,&stack0x0000c798,*(undefined8 *)PTR_DAT_09f26a68);
  if ((bVar2 & 1) == 0) {
    bVar1 = FUN_04e91204(param_4,&stack0x00000588,*(undefined8 *)PTR_DAT_09f26c70);
  }
  else {
    UnityEngine_Rendering_ProbeReferenceVolume_CellStreamingRequest__UpdateState
              (&stack0x000000c0,param_4,0);
    bVar1 = in_stack_00000350 == '\x01';
  }
  memcpy(&stack0x000000c0,param_3,0x68);
  plVar3 = (long *)thunk_FUN_04484e3c(*(undefined8 *)(*(long *)(param_7 + 0x38) + 0x10),
                                      &stack0x000000c0);
  if ((plVar3 == (long *)0x0) || (*plVar3 != *(long *)PTR_DAT_09f26cd0)) {
    memcpy(&stack0x000000c0,param_3,0x68);
    plVar3 = (long *)thunk_FUN_04484e3c(*(undefined8 *)(*(long *)(param_7 + 0x38) + 0x10),
                                        &stack0x000000c0);
    if (plVar3 != (long *)0x0) {
      if (*plVar3 == *(long *)PTR_DAT_09f26cd8) goto LAB_04e95258;
      bVar2 = bVar2 & 1;
    }
  }
  else {
LAB_04e95258:
    uVar4 = FUN_04e9132c(param_4,&stack0x000000b8,*(undefined8 *)PTR_DAT_09f26c78);
    if ((uVar4 & 1) != 0) {
      FUN_04e93374(param_2,0,param_4,*(undefined8 *)PTR_DAT_09f26ca8);
    }
    if ((bVar1 & 1) != 0) {
      uVar6 = *(undefined8 *)PTR_DAT_09f26cb8;
      memset(&stack0x000000c0,0,0x138);
      FUN_04e93828(param_2,&stack0x000000c0,param_4,uVar6);
    }
    memcpy(&stack0x000000c0,param_3,0x68);
    plVar3 = (long *)thunk_FUN_04484e3c(*(undefined8 *)(*(long *)(param_7 + 0x38) + 0x10),
                                        &stack0x000000c0);
    if ((plVar3 != (long *)0x0) && (*plVar3 == *(long *)PTR_DAT_09f26cd0)) {
      in_stack_000000c0 = 0;
      in_stack_000000c8 = 0;
      in_stack_000000d0 = 0;
      FUN_04e935d0(param_2,&stack0x000000c0,param_4,*(undefined8 *)PTR_DAT_09f26cb0);
    }
    memcpy(&stack0x000000c0,param_3,0x68);
    plVar3 = (long *)thunk_FUN_04484e3c(*(undefined8 *)(*(long *)(param_7 + 0x38) + 0x10),
                                        &stack0x000000c0);
    if ((plVar3 != (long *)0x0) && (*plVar3 == *(long *)PTR_DAT_09f26cd8)) {
      uVar6 = *(undefined8 *)PTR_DAT_09f26cc8;
      memset(&stack0x000000c0,0,0x130);
      FUN_04e93cd8(param_2,&stack0x000000c0,param_4,uVar6);
    }
  }
  uVar4 = FUN_04e90fb8(param_4,&stack0x000000a0,*(undefined8 *)PTR_DAT_09f26c68);
  if ((uVar4 & 1) != 0) {
    in_stack_000000c0 = 0;
    in_stack_000000c8 = 0;
    in_stack_000000d0 = 0;
    FUN_04e9311c(param_2,&stack0x000000c0,param_4,*(undefined8 *)PTR_DAT_09f26ca0);
  }
  if ((bVar1 & 1) != 0) {
    bVar2 = bVar1 & bVar2;
    memcpy(&stack0x000000c0,param_3,0x68);
    plVar3 = (long *)thunk_FUN_04484e3c(*(undefined8 *)(*(long *)(param_7 + 0x38) + 0x10),
                                        &stack0x000000c0);
    if (plVar3 != (long *)0x0) {
      if (*plVar3 == *(long *)PTR_DAT_09f26cd0) goto LAB_04e95488;
      bVar2 = bVar2 & 1;
    }
    memcpy(&stack0x000000c0,param_3,0x68);
    plVar3 = (long *)thunk_FUN_04484e3c(*(undefined8 *)(*(long *)(param_7 + 0x38) + 0x10),
                                        &stack0x000000c0);
    if ((plVar3 == (long *)0x0) || (*plVar3 != *(long *)PTR_DAT_09f26cd8)) {
      uVar6 = *(undefined8 *)PTR_DAT_09f26c88;
      memset(&stack0x000000c0,0,0x110);
      FUN_04e92a14(param_2,&stack0x000000c0,param_4,uVar6);
    }
  }
LAB_04e95488:
  if ((bVar2 & 1) != 0) {
    memcpy(&stack0x000000c0,param_3,0x68);
    plVar3 = (long *)thunk_FUN_04484e3c(*(undefined8 *)(*(long *)(param_7 + 0x38) + 0x10),
                                        &stack0x000000c0);
    if ((plVar3 != (long *)0x0) && (*plVar3 == *(long *)PTR_DAT_09f26c58)) {
      thunk_FUN_044adef4(PTR_DAT_09f20bb0);
      uVar6 = thunk_FUN_0448520c();
      uVar5 = thunk_FUN_044adef4(PTR_DAT_09f26ce0);
      FUN_07a3e070(uVar6,uVar5,0);
                    /* WARNING: Subroutine does not return */
      FUN_04447d10(uVar6,param_7);
    }
    uVar6 = *(undefined8 *)PTR_DAT_09f26c90;
    memset(&stack0x000000c0,0,0x100);
    FUN_04e92c6c(param_2,&stack0x000000c0,param_4,uVar6);
  }
  uVar6 = *(undefined8 *)PTR_DAT_09f26c98;
  memset(&stack0x000000c0,0,0xf8);
  FUN_04e92ec4(param_2,&stack0x000000c0,param_4,uVar6);
  in_stack_000000f0 = 0;
  in_stack_000000d8 = 0;
  in_stack_000000d0 = 0;
  in_stack_000000e8 = 0;
  in_stack_000000e0 = 0;
  in_stack_000000c8 = 0;
  in_stack_000000c0 = 0;
  FUN_04e93a80(param_2,&stack0x000000c0,param_4,*(undefined8 *)PTR_DAT_09f26cc0);
  if (*(long *)(unaff_x26 + 0x28) == in_stack_0000cc58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


