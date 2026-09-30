/*
FUNCTION_NAME: Unity.Services.Multiplayer.SessionHandler.<OnQuitting>d__143$$MoveNext
ENTRY_POINT: 05f71d9c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_5;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_5;paired_field_refs_with_structure_only;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Unity_Services_Multiplayer_SessionHandler_<OnQuitting>d__143__MoveNext
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *in_x9;
  long unaff_x20;
  long unaff_x21;
  int unaff_w22;
  int unaff_w24;
  long unaff_x26;
  undefined8 *unaff_x27;
  int unaff_w28;
  int unaff_w29;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  long in_stack_00000008;
  long in_stack_00000010;
  undefined4 uStack0000000000000018;
  int iStack000000000000001c;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  
  auVar8._8_8_ = param_3;
  auVar8._0_8_ = param_2;
  do {
    FUN_0426f5dc(param_1,auVar8._0_8_,auVar8._8_8_,param_4,*in_x9);
    auVar8._8_8_ = in_stack_00000038;
    auVar8._0_8_ = in_stack_00000030;
    do {
      *(undefined1 (*) [16])(unaff_x26 + 0x20) = auVar8;
      do {
        unaff_w29 = unaff_w29 + *(int *)(unaff_x20 + 0x130) * unaff_w24;
        if (0 < *(int *)(unaff_x20 + 0xf4)) {
          uVar4 = FUN_05f5062c();
          if (((uVar4 & 1) != 0) && (uVar4 = FUN_05f506b0(), (uVar4 & 1) != 0)) {
                    /* try { // try from 05f71dec to 06071e13 has its CatchHandler @ 05f720b0 */
            auVar7 = FUN_0422d50c(&stack0x00000060,unaff_w29,*(int *)(unaff_x20 + 0x134) * unaff_w24
                                  ,*unaff_x27);
            if (*(char *)(unaff_x20 + 0x1ea) != '\0') {
              in_stack_00000030 = 0;
              in_stack_00000038 = 0;
                    /* try { // try from 05f71e20 to 06071e27 has its CatchHandler @ 05f720a4 */
              FUN_0422c734(&stack0x00000030,auVar7._0_8_,auVar7._8_8_,4,
                           *(undefined8 *)
                            Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Jobs_TweenJobData<Color>_get_stateTransitionAmountFloat__
                          );
              auVar7._8_8_ = in_stack_00000038;
              auVar7._0_8_ = in_stack_00000030;
            }
                    /* try { // try from 05f71e2c to 06071e33 has its CatchHandler @ 05f7209c */
            *(undefined1 (*) [16])(unaff_x26 + 0x30) = auVar7;
          }
          unaff_w29 = unaff_w29 + *(int *)(unaff_x20 + 0x134) * unaff_w24;
        }
        do {
          if (in_stack_00000008 != 0) {
                    /* try { // try from 05f71e48 to 06071e4f has its CatchHandler @ 05f7208c */
            auVar8 = FUN_0422d50c(&stack0x00000050,unaff_w28,*(int *)(unaff_x20 + 0x13c) * unaff_w24
                                  ,*unaff_x27);
                    /* try { // try from 05f71e60 to 06071e6f has its CatchHandler @ 05f72094 */
            _in_stack_00000040 = auVar8;
            auVar9 = FUN_033655a0(&stack0x00000040,1,
                                  *(undefined8 *)
                                   Method_UnityEngine_TextCore_Text_TextProcessingStack<int>_Clear__
                                 );
            iVar1 = *(int *)(unaff_x20 + 0x13c);
                    /* try { // try from 05f71e7c to 06071e7f has its CatchHandler @ 05f720ac */
                    /* try { // try from 05f71e80 to 06071fdf has its CatchHandler @ 05f719cc */
            if (*(char *)(unaff_x20 + 0x1ea) != '\0') {
              in_stack_00000030 = 0;
              in_stack_00000038 = 0;
              FUN_0427377c(&stack0x00000030,auVar9._0_8_,auVar9._8_8_,4,
                           *(undefined8 *)
                            Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Jobs_TweenJobData<float>_get_stateTransitionAmountFloat__
                          );
              auVar9._8_8_ = in_stack_00000038;
              auVar9._0_8_ = in_stack_00000030;
            }
            *(undefined1 (*) [16])(unaff_x26 + 0x58) = auVar9;
            iVar2 = unaff_w28 + iVar1 * unaff_w24;
            auVar8 = FUN_0422d50c(&stack0x00000050,iVar2,*(int *)(unaff_x20 + 0x140) * unaff_w24,
                                  *unaff_x27);
            _in_stack_00000040 = auVar8;
            auVar10 = FUN_03365484(&stack0x00000040,1,
                                   *(undefined8 *)
                                    Method_UnityEngine_TextCore_Text_TextProcessingStack<int>_Add__)
            ;
            iVar1 = *(int *)(unaff_x20 + 0x140);
            if (*(char *)(unaff_x20 + 0x1ea) != '\0') {
              in_stack_00000030 = 0;
              in_stack_00000038 = 0;
              FUN_0426a248(&stack0x00000030,auVar10._0_8_,auVar10._8_8_,4,
                           *(undefined8 *)Method_System_Tuple<Pose,_float,_float,_float>_get_Item4__
                          );
              auVar10._8_8_ = in_stack_00000038;
              auVar10._0_8_ = in_stack_00000030;
            }
            *(undefined1 (*) [16])(unaff_x26 + 0x88) = auVar10;
            iVar2 = iVar2 + iVar1 * unaff_w24;
            auVar8 = FUN_0422d50c(&stack0x00000050,iVar2,*(int *)(unaff_x20 + 0x144) * unaff_w24,
                                  *unaff_x27);
            _in_stack_00000040 = auVar8;
            auVar11 = FUN_03365484(&stack0x00000040,1,
                                   *(undefined8 *)
                                    Method_UnityEngine_TextCore_Text_TextProcessingStack<int>_Add__)
            ;
            iVar1 = *(int *)(unaff_x20 + 0x144);
            if (*(char *)(unaff_x20 + 0x1ea) != '\0') {
              in_stack_00000030 = 0;
              in_stack_00000038 = 0;
              FUN_0426a248(&stack0x00000030,auVar11._0_8_,auVar11._8_8_,4,
                           *(undefined8 *)Method_System_Tuple<Pose,_float,_float,_float>_get_Item4__
                          );
              auVar11._8_8_ = in_stack_00000038;
              auVar11._0_8_ = in_stack_00000030;
            }
            *(undefined1 (*) [16])(unaff_x26 + 0x68) = auVar11;
            unaff_w28 = iVar2 + iVar1 * unaff_w24;
            if (*(int *)(unaff_x20 + 0x148) != 0) {
              auVar8 = FUN_0422d50c(&stack0x00000050,unaff_w28,
                                    *(int *)(unaff_x20 + 0x148) * unaff_w24,*unaff_x27);
              _in_stack_00000040 = auVar8;
              auVar12 = FUN_03365434(&stack0x00000040,1,
                                     *(undefined8 *)
                                      Method_UnityEngine_TextCore_Text_TextProcessingStack<int>__ctor__
                                    );
              iVar1 = *(int *)(unaff_x20 + 0x148);
                    /* try { // try from 05f71fe0 to 06071fe3 has its CatchHandler @ 05f720a8 */
                    /* try { // try from 05f71fe4 to 06071fe7 has its CatchHandler @ 05f720a0 */
              if (*(char *)(unaff_x20 + 0x1ea) != '\0') {
                in_stack_00000030 = 0;
                in_stack_00000038 = 0;
                FUN_0422c734(&stack0x00000030,auVar12._0_8_,auVar12._8_8_,4,
                             *(undefined8 *)
                              Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Jobs_TweenJobData<Color>_get_stateTransitionAmountFloat__
                            );
                auVar12._8_8_ = in_stack_00000038;
                auVar12._0_8_ = in_stack_00000030;
              }
              unaff_w28 = unaff_w28 + iVar1 * unaff_w24;
              *(undefined1 (*) [16])(unaff_x26 + 0x98) = auVar12;
            }
            if (*(int *)(unaff_x20 + 0x14c) != 0) {
              auVar8 = FUN_0422d50c(&stack0x00000050,unaff_w28,
                                    *(int *)(unaff_x20 + 0x14c) * unaff_w24,*unaff_x27);
              _in_stack_00000040 = auVar8;
              auVar13 = FUN_033655a0(&stack0x00000040,1,
                                     *(undefined8 *)
                                      Method_UnityEngine_TextCore_Text_TextProcessingStack<int>_Clear__
                                    );
              iVar1 = *(int *)(unaff_x20 + 0x14c);
              if (*(char *)(unaff_x20 + 0x1ea) != '\0') {
                in_stack_00000030 = 0;
                in_stack_00000038 = 0;
                FUN_0427377c(&stack0x00000030,auVar13._0_8_,auVar13._8_8_,4,
                             *(undefined8 *)
                              Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Jobs_TweenJobData<float>_get_stateTransitionAmountFloat__
                            );
                auVar13._8_8_ = in_stack_00000038;
                auVar13._0_8_ = in_stack_00000030;
              }
              unaff_w28 = unaff_w28 + iVar1 * unaff_w24;
              *(undefined1 (*) [16])(unaff_x26 + 0x78) = auVar13;
            }
          }
          if (*(long *)(unaff_x20 + 0x70) == 0) goto LAB_05f720ec;
          FUN_04d966b8(*(long *)(unaff_x20 + 0x70),uStack0000000000000018,unaff_x26,
                       *(undefined8 *)Method_System_Tuple<int,_int,_int,_bool>__ctor__);
          in_stack_00000028._4_4_ = in_stack_00000028._4_4_ + 1;
          unaff_w22 = iStack000000000000001c + unaff_w22;
          if (*(int *)(in_stack_00000010 + 0x18) <= in_stack_00000028._4_4_) {
            return;
          }
          uStack0000000000000018 =
               FUN_03fb3b24(in_stack_00000010,in_stack_00000028._4_4_,
                            *(undefined8 *)PTR_DAT_069fe588);
          unaff_x26 = thunk_FUN_02dd3144(*(undefined8 *)
                                          Method_System_Tuple<bool,_bool,_bool,_bool>_get_Item3__);
          FUN_05f6bdf0();
          if (*(long *)(unaff_x20 + 0x68) == 0) goto LAB_05f720ec;
          lVar3 = FUN_04d96618(*(long *)(unaff_x20 + 0x68),uStack0000000000000018,
                               *(undefined8 *)PTR_DAT_06a0e938);
          if (lVar3 == 0) goto LAB_05f720ec;
          unaff_w24 = *(int *)(lVar3 + 0x2c);
          iStack000000000000001c = *(int *)(lVar3 + 0x30);
          auVar5 = FUN_042b26f4(&stack0x00000070,unaff_w22,iStack000000000000001c,
                                *(undefined8 *)
                                 Method_System_Tuple<Pose,_float,_float,_float>_get_Item1__);
          auVar6 = FUN_0422d50c(&stack0x00000060,unaff_w29,*(int *)(unaff_x20 + 300) * unaff_w24,
                                *unaff_x27);
          iVar1 = *(int *)(unaff_x20 + 300);
          if (*(char *)(unaff_x20 + 0x1ea) != '\0') {
            in_stack_00000030 = 0;
            in_stack_00000038 = 0;
            FUN_042b18d4(&stack0x00000030,auVar5._0_8_,auVar5._8_8_,4,
                         *(undefined8 *)Method_System_Tuple<Pose,_float,_float,_float>_get_Item2__);
            auVar5._8_8_ = in_stack_00000038;
            auVar5._0_8_ = in_stack_00000030;
          }
          if (unaff_x26 == 0) goto LAB_05f720ec;
          *(undefined1 (*) [16])(unaff_x26 + 0x48) = auVar5;
          if (*(char *)(unaff_x20 + 0x1ea) != '\0') {
            in_stack_00000030 = 0;
            in_stack_00000038 = 0;
            FUN_0422c734(&stack0x00000030,auVar6._0_8_,auVar6._8_8_,4,
                         *(undefined8 *)
                          Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Jobs_TweenJobData<Color>_get_stateTransitionAmountFloat__
                        );
            auVar6._8_8_ = in_stack_00000038;
            auVar6._0_8_ = in_stack_00000030;
          }
          *(undefined1 (*) [16])(unaff_x26 + 0x10) = auVar6;
          unaff_w29 = unaff_w29 + iVar1 * unaff_w24;
        } while (*(int *)(unaff_x20 + 0xf0) < 1);
        if (unaff_x21 == 0) {
LAB_05f720ec:
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        uVar4 = FUN_05f5062c();
      } while ((uVar4 & 1) == 0);
      auVar8 = FUN_0422d50c(&stack0x00000060,unaff_w29,*(int *)(unaff_x20 + 0x130) * unaff_w24,
                            *unaff_x27);
      _in_stack_00000040 = auVar8;
      auVar8 = FUN_033654e4(&stack0x00000040,1,
                            *(undefined8 *)Method_System_Threading_Tasks_Task<Task>_GetAwaiter__);
    } while (*(char *)(unaff_x20 + 0x1ea) == '\0');
    param_1 = &stack0x00000030;
    param_4 = 4;
    in_stack_00000030 = 0;
    in_stack_00000038 = 0;
    in_x9 = (undefined8 *)Method_System_Tuple<Pose,_float,_float,_float>_get_Item3__;
  } while( true );
}


