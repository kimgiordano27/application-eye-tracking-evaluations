/*
FUNCTION_NAME: Unity.Services.Multiplayer.SessionHandler.<SavePlayerDataAsync>d__126$$SetStateMachine
ENTRY_POINT: 05f7254c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_8;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_structure_only;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


bool Unity_Services_Multiplayer_SessionHandler_<SavePlayerDataAsync>d__126__SetStateMachine
               (undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined *puVar6;
  undefined4 uVar7;
  long lVar8;
  uint in_w9;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  long unaff_x22;
  undefined8 unaff_x23;
  int unaff_w24;
  int unaff_w25;
  int unaff_w26;
  int unaff_w27;
  undefined8 unaff_x28;
  int unaff_w29;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  long in_stack_00000008;
  long in_stack_00000010;
  ulong in_stack_00000018;
  undefined8 in_stack_00000020;
  long in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  long in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  
  auVar13._8_8_ = in_stack_00000070;
  auVar13._0_8_ = in_stack_00000078;
  auVar11._8_8_ = in_stack_00000058;
  auVar11._0_8_ = in_stack_00000060;
  auVar9._8_8_ = in_stack_00000048;
  auVar9._0_8_ = in_stack_00000040;
  auVar10._8_8_ = in_stack_00000038;
  auVar10._0_8_ = in_stack_00000030;
  auVar16._8_8_ = param_2;
  auVar16._0_8_ = param_1;
  auVar14._8_8_ = unaff_x19;
  auVar14._0_8_ = in_stack_00000068;
  auVar12._8_8_ = unaff_x28;
  auVar12._0_8_ = unaff_x21;
  auVar15._8_8_ = unaff_x23;
  auVar15._0_8_ = unaff_x20;
code_r0x05f7254c:
  if (in_w9 != 0) {
    in_stack_000000c0 = 0;
    in_stack_000000c8 = 0;
    FUN_0422c734(&stack0x000000c0,auVar16._0_8_,auVar16._8_8_,4,
                 *(undefined8 *)
                  Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Jobs_TweenJobData<Color>_get_stateTransitionAmountFloat__
                );
    auVar16._8_8_ = in_stack_000000c8;
    auVar16._0_8_ = in_stack_000000c0;
    _in_stack_000000c0 = auVar16;
  }
  do {
    in_stack_00000068 = auVar14._0_8_;
    if ((in_stack_00000050 == 0) || (*(long *)(in_stack_00000050 + 0x40) == 0)) {
LAB_05f72634:
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 05f72434 with catch @ 05f725a8
                        */
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 05f723c0 with catch @ 05f725ac
                        */
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 05f723ac with catch @ 05f725b0
                        */
    in_stack_00000110 = in_stack_00000068;
    unaff_w27 = unaff_w27 +
                (*(int *)(unaff_x22 + 0x11c) + *(int *)(unaff_x22 + 0x120) * 2) * unaff_w29;
    unaff_w25 = unaff_w25 + *(int *)(unaff_x22 + 0x128) * unaff_w29;
    unaff_w26 = unaff_w26 + unaff_w29 * *(int *)(unaff_x22 + 0x124) * 4;
    in_stack_00000118 = auVar14._8_8_;
    _in_stack_00000130 = auVar16;
    _in_stack_00000120 = auVar15;
    _in_stack_000000f0 = auVar12;
    _in_stack_000000d0 = auVar10;
    _in_stack_000000c0 = auVar9;
    _in_stack_000000e0 = auVar11;
    _in_stack_00000100 = auVar13;
    FUN_04f10b14(*(long *)(in_stack_00000050 + 0x40),in_stack_00000020,&stack0x000000c0,
                 *(undefined8 *)Method_System_Tuple<bool,_bool,_bool,_bool>_get_Item4__);
    unaff_w24 = unaff_w24 + 1;
    if (*(int *)(in_stack_00000010 + 0x18) <= unaff_w24) {
      return in_stack_00000008 != 0;
    }
    uVar7 = FUN_03fb3b24(in_stack_00000010,unaff_w24,*(undefined8 *)PTR_DAT_069fe588);
    if (*(long *)(unaff_x22 + 0x70) == 0) goto LAB_05f72634;
    in_stack_00000050 =
         FUN_04d96618(*(long *)(unaff_x22 + 0x70),uVar7,
                      *(undefined8 *)
                       Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Jobs_TweenJobData<float2>_get_stateTransitionAmountFloat__
                     );
    if (*(long *)(unaff_x22 + 0x68) == 0) goto LAB_05f72634;
    lVar8 = FUN_04d96618(*(long *)(unaff_x22 + 0x68),uVar7,*(undefined8 *)PTR_DAT_06a0e938);
    puVar6 = PTR_DAT_06a0e928;
    if (lVar8 == 0) goto LAB_05f72634;
    unaff_w29 = *(int *)(lVar8 + 0x2c);
    auVar9 = FUN_0422d50c(&stack0x000000b0,unaff_w27,*(int *)(unaff_x22 + 0x11c) * unaff_w29,
                          *(undefined8 *)PTR_DAT_06a0e928);
    _in_stack_00000080 = auVar9;
    auVar9 = FUN_033654e4(&stack0x00000080,1,
                          *(undefined8 *)Method_System_Threading_Tasks_Task<Task>_GetAwaiter__);
    auVar10 = FUN_0422d50c(&stack0x000000b0,unaff_w27 + *(int *)(unaff_x22 + 0x11c) * unaff_w29,
                           *(int *)(unaff_x22 + 0x120) * unaff_w29,*(undefined8 *)puVar6);
    auVar11 = FUN_0422d50c(&stack0x000000b0,
                           unaff_w27 +
                           (*(int *)(unaff_x22 + 0x120) + *(int *)(unaff_x22 + 0x11c)) * unaff_w29,
                           *(int *)(unaff_x22 + 0x120) * unaff_w29,*(undefined8 *)puVar6);
    if (*(char *)(unaff_x22 + 0x1ea) != '\0') {
      in_stack_000000c0 = 0;
      in_stack_000000c8 = 0;
      FUN_0426f5dc(&stack0x000000c0,auVar9._0_8_,auVar9._8_8_,4,
                   *(undefined8 *)Method_System_Tuple<Pose,_float,_float,_float>_get_Item3__);
      puVar6 = 
      Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Jobs_TweenJobData<Color>_get_stateTransitionAmountFloat__
      ;
      auVar9._8_8_ = in_stack_000000c8;
      auVar9._0_8_ = in_stack_000000c0;
      auVar4._8_8_ = in_stack_000000c8;
      auVar4._0_8_ = in_stack_000000c0;
      auVar3._8_8_ = in_stack_000000c8;
      auVar3._0_8_ = in_stack_000000c0;
      _in_stack_000000c0 = auVar9;
      if (*(char *)(unaff_x22 + 0x1ea) != '\0') {
        in_stack_000000c0 = 0;
        in_stack_000000c8 = 0;
        FUN_0422c734(&stack0x000000c0,auVar10._0_8_,auVar10._8_8_,4,
                     *(undefined8 *)
                      Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Jobs_TweenJobData<Color>_get_stateTransitionAmountFloat__
                    );
        auVar5._8_8_ = in_stack_000000c8;
        auVar5._0_8_ = in_stack_000000c0;
        auVar10._8_8_ = in_stack_000000c8;
        auVar10._0_8_ = in_stack_000000c0;
        auVar9 = auVar3;
        _in_stack_000000c0 = auVar5;
        if (*(char *)(unaff_x22 + 0x1ea) != '\0') {
          in_stack_000000c0 = 0;
          in_stack_000000c8 = 0;
          FUN_0422c734(&stack0x000000c0,auVar11._0_8_,auVar11._8_8_,4,*(undefined8 *)puVar6);
          auVar11._8_8_ = in_stack_000000c8;
          auVar11._0_8_ = in_stack_000000c0;
          auVar9 = auVar4;
          auVar10 = auVar5;
          _in_stack_000000c0 = auVar11;
        }
      }
    }
    puVar6 = PTR_DAT_06a0e928;
    if (in_stack_00000028 == 0) {
      auVar12 = ZEXT816(0);
      auVar13 = ZEXT816(0);
      auVar14 = ZEXT816(0);
      auVar15 = ZEXT816(0);
    }
    else {
      iVar2 = *(int *)(unaff_x22 + 0x124) * unaff_w29;
      auVar12 = FUN_0422d50c(&stack0x000000a0,unaff_w26,iVar2,*(undefined8 *)PTR_DAT_06a0e928);
      auVar13 = FUN_0422d50c(&stack0x000000a0,iVar2 + unaff_w26,iVar2,*(undefined8 *)puVar6);
      iVar1 = unaff_w26 + iVar2 * 2;
      auVar14 = FUN_0422d50c(&stack0x000000a0,iVar1,iVar2,*(undefined8 *)puVar6);
      auVar15 = FUN_0422d50c(&stack0x000000a0,iVar1 + iVar2,iVar2,*(undefined8 *)puVar6);
      if (*(char *)(unaff_x22 + 0x1ea) != '\0') {
        in_stack_000000c0 = 0;
        in_stack_000000c8 = 0;
        FUN_0422c734(&stack0x000000c0,auVar12._0_8_,auVar12._8_8_,4,
                     *(undefined8 *)
                      Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Jobs_TweenJobData<Color>_get_stateTransitionAmountFloat__
                    );
        auVar12._8_8_ = in_stack_000000c8;
        auVar12._0_8_ = in_stack_000000c0;
        _in_stack_000000c0 = auVar12;
      }
      if (*(char *)(unaff_x22 + 0x1ea) != '\0') {
        in_stack_000000c0 = 0;
        in_stack_000000c8 = 0;
        FUN_0422c734(&stack0x000000c0,auVar13._0_8_,auVar13._8_8_,4,
                     *(undefined8 *)
                      Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Jobs_TweenJobData<Color>_get_stateTransitionAmountFloat__
                    );
        auVar13._8_8_ = in_stack_000000c8;
        auVar13._0_8_ = in_stack_000000c0;
        _in_stack_000000c0 = auVar13;
      }
      if (*(char *)(unaff_x22 + 0x1ea) != '\0') {
        in_stack_000000c0 = 0;
        in_stack_000000c8 = 0;
        FUN_0422c734(&stack0x000000c0,auVar14._0_8_,auVar14._8_8_,4,
                     *(undefined8 *)
                      Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Jobs_TweenJobData<Color>_get_stateTransitionAmountFloat__
                    );
        auVar14._8_8_ = in_stack_000000c8;
        auVar14._0_8_ = in_stack_000000c0;
        _in_stack_000000c0 = auVar14;
      }
      if (*(char *)(unaff_x22 + 0x1ea) != '\0') {
        in_stack_000000c0 = 0;
        in_stack_000000c8 = 0;
        FUN_0422c734(&stack0x000000c0,auVar15._0_8_,auVar15._8_8_,4,
                     *(undefined8 *)
                      Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Jobs_TweenJobData<Color>_get_stateTransitionAmountFloat__
                    );
        auVar15._8_8_ = in_stack_000000c8;
        auVar15._0_8_ = in_stack_000000c0;
        _in_stack_000000c0 = auVar15;
      }
    }
    if ((in_stack_00000018 & 0x100000000) == 0) break;
    auVar16 = ZEXT816(0);
  } while( true );
  auVar16 = FUN_0422d50c(&stack0x00000090,unaff_w25,*(int *)(unaff_x22 + 0x128) * unaff_w29,
                         *(undefined8 *)PTR_DAT_06a0e928);
  in_w9 = (uint)*(byte *)(unaff_x22 + 0x1ea);
  goto code_r0x05f7254c;
}


