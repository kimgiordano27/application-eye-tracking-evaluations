/*
FUNCTION_NAME: UnityEngine.XR.OpenXR.Features.Interactions.EyeGazeInteraction$$.ctor
ENTRY_POINT: 037b30e4
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 89
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


undefined8
UnityEngine_XR_OpenXR_Features_Interactions_EyeGazeInteraction___ctor
          (undefined8 param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long unaff_x21;
  long unaff_x23;
  long *plVar6;
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
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  
  plVar6 = *(long **)(unaff_x23 + 0xfb8);
  if ((*(byte *)(unaff_x21 + 0xffd) & 1) == 0) {
    thunk_FUN_01ad9084(StringLiteral_5517);
    thunk_FUN_01ad9084(StringLiteral_5390);
    thunk_FUN_01ad9084(StringLiteral_7843);
    thunk_FUN_01ad9084(StringLiteral_5391);
    thunk_FUN_01ad9084(StringLiteral_5518);
    thunk_FUN_01ad9084(StringLiteral_5392);
    thunk_FUN_01ad9084(StringLiteral_5519);
    thunk_FUN_01ad9084(StringLiteral_5393);
    thunk_FUN_01ad9084(StringLiteral_5520);
    thunk_FUN_01ad9084(StringLiteral_5394);
    thunk_FUN_01ad9084(StringLiteral_5522);
    thunk_FUN_01ad9084(StringLiteral_5395);
    thunk_FUN_01ad9084(StringLiteral_5523);
    thunk_FUN_01ad9084(StringLiteral_2729);
    *(undefined1 *)(unaff_x21 + 0xffd) = 1;
  }
  in_stack_00000080 = 0;
  in_stack_00000088 = 0;
  in_stack_00000068 = 0;
  in_stack_00000060 = 0;
  in_stack_00000078 = 0;
  in_stack_00000070 = 0;
  in_stack_00000050 = 0;
  in_stack_00000038 = 0;
  in_stack_00000030 = 0;
  in_stack_00000048 = 0;
  in_stack_00000040 = 0;
  if (*(int *)(*plVar6 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  lVar3 = FUN_037b3c54();
  if (lVar3 != 0) {
    uVar4 = FUN_025bddd0(lVar3,param_1,&stack0x00000088,*(undefined8 *)StringLiteral_7843);
    if ((uVar4 & 1) != 0) {
      *param_2 = in_stack_00000088;
      thunk_FUN_01b4f09c(param_2);
      return 1;
    }
    lVar3 = FUN_037b3cf4(param_1);
    if (*(int *)(*plVar6 + 0xe0) == 0) {
      thunk_FUN_01ac7298(*plVar6);
    }
    lVar5 = FUN_037b3c54();
    if (lVar5 != 0) {
      FUN_025bc9f4(&stack0x00000008,lVar5,*(undefined8 *)StringLiteral_5517);
      puVar1 = StringLiteral_5519;
      in_stack_00000068 = in_stack_00000010;
      in_stack_00000060 = in_stack_00000008;
      in_stack_00000078 = in_stack_00000020;
      in_stack_00000070 = in_stack_00000018;
      in_stack_00000080 = in_stack_00000028;
      while (uVar4 = FUN_0277c640(&stack0x00000060,*(undefined8 *)puVar1), (uVar4 & 1) != 0) {
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        FUN_037b3d5c(lVar3,in_stack_00000070,in_stack_00000078);
      }
      FUN_0277c760(&stack0x00000060,*(undefined8 *)StringLiteral_5518);
      if (*(int *)(*plVar6 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      lVar5 = FUN_037b3de8();
      puVar1 = StringLiteral_5390;
      if (lVar5 != 0) {
        FUN_025bc9f4(&stack0x00000008,lVar5,*(undefined8 *)StringLiteral_5390);
        puVar2 = StringLiteral_5392;
        in_stack_00000038 = in_stack_00000010;
        in_stack_00000030 = in_stack_00000008;
        in_stack_00000048 = in_stack_00000020;
        in_stack_00000040 = in_stack_00000018;
        in_stack_00000050 = in_stack_00000028;
        while (uVar4 = FUN_0277c640(&stack0x00000030,*(undefined8 *)puVar2), (uVar4 & 1) != 0) {
          if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01b48178();
          }
          FUN_037b3e88(lVar3,in_stack_00000040,in_stack_00000048);
        }
        FUN_0277c760(&stack0x00000030,*(undefined8 *)StringLiteral_5391);
        if (*(int *)(*plVar6 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        lVar5 = FUN_037b40f4();
        if (lVar5 != 0) {
          FUN_025bc9f4(&stack0x00000008,lVar5,*(undefined8 *)puVar1);
          in_stack_00000038 = in_stack_00000010;
          in_stack_00000030 = in_stack_00000008;
          in_stack_00000048 = in_stack_00000020;
          in_stack_00000040 = in_stack_00000018;
          in_stack_00000050 = in_stack_00000028;
          while (uVar4 = FUN_0277c640(&stack0x00000030,*(undefined8 *)puVar2), (uVar4 & 1) != 0) {
            if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01b48178();
            }
            FUN_037b4194(lVar3,in_stack_00000040,in_stack_00000048);
          }
          FUN_0277c760(&stack0x00000030,*(undefined8 *)StringLiteral_5391);
          if (*(int *)(*plVar6 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          uVar4 = FUN_037b36a4(lVar3,param_2);
          if ((uVar4 & 1) != 0) {
            return 1;
          }
          *param_2 = 0;
          thunk_FUN_01b4f09c(param_2,0);
          return 0;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


