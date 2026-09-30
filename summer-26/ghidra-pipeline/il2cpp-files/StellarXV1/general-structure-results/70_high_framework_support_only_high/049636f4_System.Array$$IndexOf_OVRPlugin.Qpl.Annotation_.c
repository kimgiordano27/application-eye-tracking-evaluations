/*
FUNCTION_NAME: System.Array$$IndexOf<OVRPlugin.Qpl.Annotation>
ENTRY_POINT: 049636f4
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void System_Array__IndexOf<OVRPlugin_Qpl_Annotation>(undefined8 param_1)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long unaff_x19;
  undefined8 *unaff_x20;
  long *unaff_x21;
  undefined8 *unaff_x22;
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
  undefined8 uStack0000000000000060;
  undefined8 uStack0000000000000068;
  
  uStack0000000000000060 = 0;
  uStack0000000000000068 = 0;
  FUN_0601c84c(&stack0x00000060,param_1);
  lVar4 = *unaff_x21;
  *(undefined8 *)(unaff_x19 + 0x38) = uStack0000000000000068;
  *(undefined8 *)(unaff_x19 + 0x30) = uStack0000000000000060;
  *(undefined8 *)(unaff_x19 + 0x48) = 0;
  *(undefined8 *)(unaff_x19 + 0x40) = 0;
  *(undefined8 *)(unaff_x19 + 0x58) = 0;
  *(undefined8 *)(unaff_x19 + 0x50) = 0;
  *(long *)(*(long *)(lVar4 + 0xb8) + 8) = unaff_x19;
  thunk_FUN_040ec700();
  lVar4 = thunk_FUN_040b4efc(*unaff_x20);
  FUN_047a7384(lVar4,0);
  uVar1 = _DAT_01aefcc0;
  if (lVar4 != 0) {
    *(undefined8 *)(lVar4 + 0x18) = _UNK_01aefcc8;
    *(undefined8 *)(lVar4 + 0x10) = uVar1;
    uVar1 = FUN_0769134c(0);
    in_stack_00000050 = 0;
    in_stack_00000058 = 0;
    FUN_0601c84c(&stack0x00000050,uVar1,*unaff_x22);
    *(undefined8 *)(lVar4 + 0x28) = in_stack_00000058;
    *(undefined8 *)(lVar4 + 0x20) = in_stack_00000050;
    uVar1 = FUN_0769134c(0);
    in_stack_00000040 = 0;
    in_stack_00000048 = 0;
    FUN_0601c84c(&stack0x00000040,uVar1,*unaff_x22);
    lVar5 = *unaff_x21;
    *(undefined8 *)(lVar4 + 0x38) = in_stack_00000048;
    *(undefined8 *)(lVar4 + 0x30) = in_stack_00000040;
    *(undefined8 *)(lVar4 + 0x48) = 0;
    *(undefined8 *)(lVar4 + 0x40) = 0;
    *(undefined8 *)(lVar4 + 0x58) = 0;
    *(undefined8 *)(lVar4 + 0x50) = 0;
    plVar2 = (long *)(*(long *)(lVar5 + 0xb8) + 0x10);
    *plVar2 = lVar4;
    thunk_FUN_040ec700(plVar2,lVar4);
    lVar4 = thunk_FUN_040b4efc(*unaff_x20);
    FUN_047a7384(lVar4,0);
    uVar3 = _DAT_01aef6e0;
    uVar1 = DAT_01aee630;
    if (lVar4 != 0) {
      *(undefined8 *)(lVar4 + 0x18) = _UNK_01aef6e8;
      *(undefined8 *)(lVar4 + 0x10) = uVar3;
      uVar3 = FUN_0769134c(uVar1,0);
      in_stack_00000030 = 0;
      in_stack_00000038 = 0;
      FUN_0601c84c(&stack0x00000030,uVar3,*unaff_x22);
      *(undefined8 *)(lVar4 + 0x28) = in_stack_00000038;
      *(undefined8 *)(lVar4 + 0x20) = in_stack_00000030;
      uVar1 = FUN_0769134c(uVar1,0);
      in_stack_00000020 = 0;
      in_stack_00000028 = 0;
      FUN_0601c84c(&stack0x00000020,uVar1,*unaff_x22);
      lVar5 = *unaff_x21;
      *(undefined8 *)(lVar4 + 0x38) = in_stack_00000028;
      *(undefined8 *)(lVar4 + 0x30) = in_stack_00000020;
      *(undefined8 *)(lVar4 + 0x48) = 0;
      *(undefined8 *)(lVar4 + 0x40) = 0;
      *(undefined8 *)(lVar4 + 0x58) = 0;
      *(undefined8 *)(lVar4 + 0x50) = 0;
      plVar2 = (long *)(*(long *)(lVar5 + 0xb8) + 0x18);
      *plVar2 = lVar4;
      thunk_FUN_040ec700(plVar2,lVar4);
      lVar4 = thunk_FUN_040b4efc(*unaff_x20);
      FUN_047a7384(lVar4,0);
      uVar1 = _DAT_01aef440;
      if (lVar4 != 0) {
        *(undefined8 *)(lVar4 + 0x18) = _UNK_01aef448;
        *(undefined8 *)(lVar4 + 0x10) = uVar1;
        uVar1 = FUN_0769134c(0);
        in_stack_00000010 = 0;
        in_stack_00000018 = 0;
        FUN_0601c84c(&stack0x00000010,uVar1,*unaff_x22);
        *(undefined8 *)(lVar4 + 0x28) = in_stack_00000018;
        *(undefined8 *)(lVar4 + 0x20) = in_stack_00000010;
        FUN_0769134c(0);
        FUN_0601c84c();
        lVar5 = *unaff_x21;
        *(undefined8 *)(lVar4 + 0x38) = 0;
        *(undefined8 *)(lVar4 + 0x30) = 0;
        *(undefined8 *)(lVar4 + 0x48) = 0;
        *(undefined8 *)(lVar4 + 0x40) = 0;
        *(undefined8 *)(lVar4 + 0x58) = 0;
        *(undefined8 *)(lVar4 + 0x50) = 0;
        plVar2 = (long *)(*(long *)(lVar5 + 0xb8) + 0x20);
        *plVar2 = lVar4;
        thunk_FUN_040ec700(plVar2,lVar4);
        lVar4 = thunk_FUN_040b4efc(*unaff_x20);
        FUN_047a7384(lVar4,0);
        if (lVar4 != 0) {
          lVar5 = *unaff_x21;
          *(undefined4 *)(lVar4 + 0x10) = 5;
          *(undefined8 *)(lVar4 + 0x1c) = 0;
          *(undefined8 *)(lVar4 + 0x14) = 0;
          *(undefined8 *)(lVar4 + 0x2c) = 0;
          *(undefined8 *)(lVar4 + 0x24) = 0;
          *(undefined8 *)(lVar4 + 0x3c) = 0;
          *(undefined8 *)(lVar4 + 0x34) = 0;
          *(undefined8 *)(lVar4 + 0x4c) = 0;
          *(undefined8 *)(lVar4 + 0x44) = 0;
          *(undefined8 *)(lVar4 + 0x58) = 0;
          *(undefined8 *)(lVar4 + 0x50) = 0;
          plVar2 = (long *)(*(long *)(lVar5 + 0xb8) + 0x28);
          *plVar2 = lVar4;
          thunk_FUN_040ec700(plVar2,lVar4);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


