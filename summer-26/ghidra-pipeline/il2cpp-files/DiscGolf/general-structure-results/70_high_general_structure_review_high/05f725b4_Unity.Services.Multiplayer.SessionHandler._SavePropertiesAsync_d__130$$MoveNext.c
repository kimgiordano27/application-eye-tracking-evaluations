/*
FUNCTION_NAME: Unity.Services.Multiplayer.SessionHandler.<SavePropertiesAsync>d__130$$MoveNext
ENTRY_POINT: 05f725b4
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_8;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_structure_only;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


bool Unity_Services_Multiplayer_SessionHandler_<SavePropertiesAsync>d__130__MoveNext
               (undefined8 param_1,undefined1 param_2 [16],undefined1 param_3 [16],long param_4,
               undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  int iVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined *puVar6;
  undefined4 uVar7;
  long lVar8;
  long lVar9;
  int in_w9;
  int in_w10;
  int in_w11;
  undefined8 unaff_x19;
  long unaff_x22;
  int unaff_w24;
  int unaff_w25;
  int unaff_w26;
  int unaff_w27;
  int unaff_w29;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  long in_stack_00000008;
  long in_stack_00000010;
  ulong in_stack_00000018;
  undefined8 in_stack_00000020;
  long in_stack_00000028;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 uStack00000000000000c0;
  undefined8 uStack00000000000000c8;
  undefined8 uStack00000000000000d0;
  undefined8 uStack00000000000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 uStack0000000000000110;
  undefined8 uStack0000000000000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 uStack0000000000000130;
  undefined8 uStack0000000000000138;
  
  auVar15._8_8_ = param_6;
  auVar15._0_8_ = param_1;
  auVar12._8_8_ = in_stack_00000108;
  auVar12._0_8_ = in_stack_00000100;
  auVar13._8_8_ = unaff_x19;
  auVar13._0_8_ = in_stack_00000068;
  auVar11._8_8_ = in_stack_000000f8;
  auVar11._0_8_ = in_stack_000000f0;
  auVar14._8_8_ = in_stack_00000128;
  auVar14._0_8_ = in_stack_00000120;
  auVar10._8_8_ = in_stack_000000e8;
  auVar10._0_8_ = in_stack_000000e0;
  while( true ) {
    uStack0000000000000118 = auVar13._8_8_;
    in_stack_00000068 = auVar13._0_8_;
    uStack0000000000000110 = in_stack_00000068;
    unaff_w27 = unaff_w27 + (in_w9 + in_w10 * 2) * unaff_w29;
                    /* try { // try from 05f725cc to 060725cf has its CatchHandler @ 05f725f0 */
                    /* try { // try from 05f725d0 to 060725f3 has its CatchHandler @ 05f720f4 */
    unaff_w25 = unaff_w25 + *(int *)(unaff_x22 + 0x128) * unaff_w29;
    unaff_w26 = unaff_w26 + unaff_w29 * in_w11 * 4;
    _uStack0000000000000130 = auVar15;
    _uStack00000000000000d0 = param_2;
    _uStack00000000000000c0 = param_3;
    _in_stack_000000e0 = auVar10;
    _in_stack_000000f0 = auVar11;
    _in_stack_00000100 = auVar12;
    _in_stack_00000120 = auVar14;
                    /* catch() { ... } // from try @ 05f725cc with catch @ 05f725f0 */
    FUN_04f10b14(param_4,in_stack_00000020,&stack0x000000c0,
                 *(undefined8 *)Method_System_Tuple<bool,_bool,_bool,_bool>_get_Item4__);
                    /* try { // try from 05f725f4 to 060725fb has its CatchHandler @ 05f72604 */
    unaff_w24 = unaff_w24 + 1;
                    /* try { // try from 05f725fc to 06072607 has its CatchHandler @ 05f720f4 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 05f725f4 with catch @ 05f72604
                        */
    if (*(int *)(in_stack_00000010 + 0x18) <= unaff_w24) {
      return in_stack_00000008 != 0;
    }
    uVar7 = FUN_03fb3b24(in_stack_00000010,unaff_w24,*(undefined8 *)PTR_DAT_069fe588);
    if (*(long *)(unaff_x22 + 0x70) == 0) break;
    lVar8 = FUN_04d96618(*(long *)(unaff_x22 + 0x70),uVar7,
                         *(undefined8 *)
                          Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Jobs_TweenJobData<float2>_get_stateTransitionAmountFloat__
                        );
    if (*(long *)(unaff_x22 + 0x68) == 0) break;
    lVar9 = FUN_04d96618(*(long *)(unaff_x22 + 0x68),uVar7,*(undefined8 *)PTR_DAT_06a0e938);
    puVar6 = PTR_DAT_06a0e928;
    if (lVar9 == 0) break;
    unaff_w29 = *(int *)(lVar9 + 0x2c);
    auVar10 = FUN_0422d50c(&stack0x000000b0,unaff_w27,*(int *)(unaff_x22 + 0x11c) * unaff_w29,
                           *(undefined8 *)PTR_DAT_06a0e928);
    _in_stack_00000080 = auVar10;
    param_3 = FUN_033654e4(&stack0x00000080,1,
                           *(undefined8 *)Method_System_Threading_Tasks_Task<Task>_GetAwaiter__);
    param_2 = FUN_0422d50c(&stack0x000000b0,unaff_w27 + *(int *)(unaff_x22 + 0x11c) * unaff_w29,
                           *(int *)(unaff_x22 + 0x120) * unaff_w29,*(undefined8 *)puVar6);
    auVar10 = FUN_0422d50c(&stack0x000000b0,
                           unaff_w27 +
                           (*(int *)(unaff_x22 + 0x120) + *(int *)(unaff_x22 + 0x11c)) * unaff_w29,
                           *(int *)(unaff_x22 + 0x120) * unaff_w29,*(undefined8 *)puVar6);
    if (*(char *)(unaff_x22 + 0x1ea) != '\0') {
      uStack00000000000000c0 = 0;
      uStack00000000000000c8 = 0;
      FUN_0426f5dc(&stack0x000000c0,param_3._0_8_,param_3._8_8_,4,
                   *(undefined8 *)Method_System_Tuple<Pose,_float,_float,_float>_get_Item3__);
      puVar6 = 
      Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Jobs_TweenJobData<Color>_get_stateTransitionAmountFloat__
      ;
      param_3._8_8_ = uStack00000000000000c8;
      param_3._0_8_ = uStack00000000000000c0;
      auVar4._8_8_ = uStack00000000000000c8;
      auVar4._0_8_ = uStack00000000000000c0;
      auVar3._8_8_ = uStack00000000000000c8;
      auVar3._0_8_ = uStack00000000000000c0;
      _uStack00000000000000c0 = param_3;
      if (*(char *)(unaff_x22 + 0x1ea) != '\0') {
        uStack00000000000000c0 = 0;
        uStack00000000000000c8 = 0;
        FUN_0422c734(&stack0x000000c0,param_2._0_8_,param_2._8_8_,4,
                     *(undefined8 *)
                      Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Jobs_TweenJobData<Color>_get_stateTransitionAmountFloat__
                    );
        auVar5._8_8_ = uStack00000000000000c8;
        auVar5._0_8_ = uStack00000000000000c0;
        param_2._8_8_ = uStack00000000000000c8;
        param_2._0_8_ = uStack00000000000000c0;
        param_3 = auVar3;
        _uStack00000000000000c0 = auVar5;
        if (*(char *)(unaff_x22 + 0x1ea) != '\0') {
          uStack00000000000000c0 = 0;
          uStack00000000000000c8 = 0;
          FUN_0422c734(&stack0x000000c0,auVar10._0_8_,auVar10._8_8_,4,*(undefined8 *)puVar6);
          auVar10._8_8_ = uStack00000000000000c8;
          auVar10._0_8_ = uStack00000000000000c0;
          param_3 = auVar4;
          param_2 = auVar5;
          _uStack00000000000000c0 = auVar10;
        }
      }
    }
    puVar6 = PTR_DAT_06a0e928;
    if (in_stack_00000028 == 0) {
      auVar11 = ZEXT816(0);
      auVar12 = ZEXT816(0);
      auVar13 = ZEXT816(0);
      auVar14 = ZEXT816(0);
    }
    else {
      iVar2 = *(int *)(unaff_x22 + 0x124) * unaff_w29;
      auVar11 = FUN_0422d50c(&stack0x000000a0,unaff_w26,iVar2,*(undefined8 *)PTR_DAT_06a0e928);
      auVar12 = FUN_0422d50c(&stack0x000000a0,iVar2 + unaff_w26,iVar2,*(undefined8 *)puVar6);
      iVar1 = unaff_w26 + iVar2 * 2;
      auVar13 = FUN_0422d50c(&stack0x000000a0,iVar1,iVar2,*(undefined8 *)puVar6);
      auVar14 = FUN_0422d50c(&stack0x000000a0,iVar1 + iVar2,iVar2,*(undefined8 *)puVar6);
      if (*(char *)(unaff_x22 + 0x1ea) != '\0') {
        uStack00000000000000c0 = 0;
        uStack00000000000000c8 = 0;
        FUN_0422c734(&stack0x000000c0,auVar11._0_8_,auVar11._8_8_,4,
                     *(undefined8 *)
                      Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Jobs_TweenJobData<Color>_get_stateTransitionAmountFloat__
                    );
        auVar11._8_8_ = uStack00000000000000c8;
        auVar11._0_8_ = uStack00000000000000c0;
        _uStack00000000000000c0 = auVar11;
      }
      if (*(char *)(unaff_x22 + 0x1ea) != '\0') {
        uStack00000000000000c0 = 0;
        uStack00000000000000c8 = 0;
        FUN_0422c734(&stack0x000000c0,auVar12._0_8_,auVar12._8_8_,4,
                     *(undefined8 *)
                      Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Jobs_TweenJobData<Color>_get_stateTransitionAmountFloat__
                    );
        auVar12._8_8_ = uStack00000000000000c8;
        auVar12._0_8_ = uStack00000000000000c0;
        _uStack00000000000000c0 = auVar12;
      }
      if (*(char *)(unaff_x22 + 0x1ea) != '\0') {
        uStack00000000000000c0 = 0;
        uStack00000000000000c8 = 0;
        FUN_0422c734(&stack0x000000c0,auVar13._0_8_,auVar13._8_8_,4,
                     *(undefined8 *)
                      Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Jobs_TweenJobData<Color>_get_stateTransitionAmountFloat__
                    );
        auVar13._8_8_ = uStack00000000000000c8;
        auVar13._0_8_ = uStack00000000000000c0;
        _uStack00000000000000c0 = auVar13;
      }
      if (*(char *)(unaff_x22 + 0x1ea) != '\0') {
        uStack00000000000000c0 = 0;
        uStack00000000000000c8 = 0;
        FUN_0422c734(&stack0x000000c0,auVar14._0_8_,auVar14._8_8_,4,
                     *(undefined8 *)
                      Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Jobs_TweenJobData<Color>_get_stateTransitionAmountFloat__
                    );
        auVar14._8_8_ = uStack00000000000000c8;
        auVar14._0_8_ = uStack00000000000000c0;
        _uStack00000000000000c0 = auVar14;
      }
    }
    if ((in_stack_00000018 & 0x100000000) == 0) {
      auVar15 = FUN_0422d50c(&stack0x00000090,unaff_w25,*(int *)(unaff_x22 + 0x128) * unaff_w29,
                             *(undefined8 *)PTR_DAT_06a0e928);
      if (*(char *)(unaff_x22 + 0x1ea) != '\0') {
        uStack00000000000000c0 = 0;
        uStack00000000000000c8 = 0;
        FUN_0422c734(&stack0x000000c0,auVar15._0_8_,auVar15._8_8_,4,
                     *(undefined8 *)
                      Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Jobs_TweenJobData<Color>_get_stateTransitionAmountFloat__
                    );
        auVar15._8_8_ = uStack00000000000000c8;
        auVar15._0_8_ = uStack00000000000000c0;
        _uStack00000000000000c0 = auVar15;
      }
    }
    else {
      auVar15 = ZEXT816(0);
    }
    if ((lVar8 == 0) || (param_4 = *(long *)(lVar8 + 0x40), param_4 == 0)) break;
    in_w9 = *(int *)(unaff_x22 + 0x11c);
    in_w10 = *(int *)(unaff_x22 + 0x120);
    in_w11 = *(int *)(unaff_x22 + 0x124);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


