/*
FUNCTION_NAME: FUN_05f71a44
ENTRY_POINT: 05f71a44
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_7;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_9;telemetry_or_network_hits_3;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_05f71a44(long param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
                 ,undefined8 param_6,undefined8 param_7,ulong param_8)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined1 local_a0 [16];
  undefined8 local_90;
  ulong uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  puVar4 = Method_System_Runtime_CompilerServices_TaskAwaiter<HttpClientResponse>_GetResult__;
  local_90 = param_7;
  uStack_88 = param_8;
  local_80 = param_5;
  uStack_78 = param_6;
  local_70 = param_3;
  uStack_68 = param_4;
  if ((DAT_06dc445a & 1) == 0) {
    FUN_02d965b8(Method_System_Tuple<bool,_bool,_bool,_bool>_get_Item3__);
    FUN_02d965b8(Method_System_Tuple<int,_int,_int,_bool>__ctor__);
    FUN_02d965b8(PTR_DAT_06a0e938);
    FUN_02d965b8(PTR_DAT_069fed40);
    FUN_02d965b8(PTR_DAT_069fe588);
    FUN_02d965b8(Method_System_Tuple<Pose,_float,_float,_float>_get_Item1__);
    FUN_02d965b8(PTR_DAT_06a0e928);
    FUN_02d965b8(Method_UnityEngine_TextCore_Text_TextProcessingStack<int>__ctor__);
    FUN_02d965b8(Method_UnityEngine_TextCore_Text_TextProcessingStack<int>_Add__);
    FUN_02d965b8(Method_System_Threading_Tasks_Task<Task>_GetAwaiter__);
    FUN_02d965b8(Method_UnityEngine_TextCore_Text_TextProcessingStack<int>_Clear__);
    FUN_02d965b8(Method_System_Tuple<Pose,_float,_float,_float>_get_Item2__);
    FUN_02d965b8(Method_System_Tuple<Pose,_float,_float,_float>_get_Item3__);
    FUN_02d965b8(Method_System_Tuple<Pose,_float,_float,_float>_get_Item4__);
    FUN_02d965b8(
                Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Jobs_TweenJobData<Color>_get_stateTransitionAmountFloat__
                );
    FUN_02d965b8(
                Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Jobs_TweenJobData<float>_get_stateTransitionAmountFloat__
                );
    FUN_02d965b8(Method_System_Runtime_CompilerServices_TaskAwaiter<HttpClientResponse>_GetResult__)
    ;
    DAT_06dc445a = 1;
  }
  local_a0._0_8_ = 0;
  local_a0._8_8_ = 0;
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  if (DAT_06dc43e7 == '\0') {
    FUN_02d965b8(Method_System_Runtime_CompilerServices_TaskAwaiter<HttpClientResponse>_GetResult__)
    ;
    DAT_06dc43e7 = '\x01';
  }
  lVar6 = *(long *)puVar4;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02df485c();
    lVar6 = *(long *)puVar4;
  }
  puVar4 = PTR_DAT_06a0e928;
  if (param_2 != 0) {
    if (0 < *(int *)(param_2 + 0x18)) {
      iVar10 = 0;
      iVar11 = 0;
      iVar12 = 0;
      iVar13 = 0;
      lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
      do {
        uVar5 = FUN_03fb3b24(param_2,iVar10,*(undefined8 *)PTR_DAT_069fe588);
        lVar7 = thunk_FUN_02dd3144(*(undefined8 *)
                                    Method_System_Tuple<bool,_bool,_bool,_bool>_get_Item3__);
        FUN_05f6bdf0();
        if (*(long *)(param_1 + 0x68) == 0) goto LAB_05f720ec;
        lVar8 = FUN_04d96618(*(long *)(param_1 + 0x68),uVar5,*(undefined8 *)PTR_DAT_06a0e938);
        if (lVar8 == 0) goto LAB_05f720ec;
        iVar1 = *(int *)(lVar8 + 0x2c);
        iVar2 = *(int *)(lVar8 + 0x30);
        auVar14 = FUN_042b26f4(&local_70,iVar11,iVar2,
                               *(undefined8 *)
                                Method_System_Tuple<Pose,_float,_float,_float>_get_Item1__);
        auVar15 = FUN_0422d50c(&local_80,iVar13,*(int *)(param_1 + 300) * iVar1,
                               *(undefined8 *)puVar4);
        iVar3 = *(int *)(param_1 + 300);
        if (*(char *)(param_1 + 0x1ea) != '\0') {
          local_b0 = 0;
          uStack_a8 = 0;
          FUN_042b18d4(&local_b0,auVar14._0_8_,auVar14._8_8_,4,
                       *(undefined8 *)Method_System_Tuple<Pose,_float,_float,_float>_get_Item2__);
          auVar14._8_8_ = uStack_a8;
          auVar14._0_8_ = local_b0;
        }
        if (lVar7 == 0) goto LAB_05f720ec;
        *(undefined1 (*) [16])(lVar7 + 0x48) = auVar14;
        if (*(char *)(param_1 + 0x1ea) != '\0') {
          local_b0 = 0;
          uStack_a8 = 0;
          FUN_0422c734(&local_b0,auVar15._0_8_,auVar15._8_8_,4,
                       *(undefined8 *)
                        Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Jobs_TweenJobData<Color>_get_stateTransitionAmountFloat__
                      );
          auVar15._8_8_ = uStack_a8;
          auVar15._0_8_ = local_b0;
        }
        *(undefined1 (*) [16])(lVar7 + 0x10) = auVar15;
        iVar13 = iVar13 + iVar3 * iVar1;
        if (0 < *(int *)(param_1 + 0xf0)) {
          if (lVar6 == 0) goto LAB_05f720ec;
          uVar9 = FUN_05f5062c(lVar6,0);
          if ((uVar9 & 1) != 0) {
            auVar14 = FUN_0422d50c(&local_80,iVar13,*(int *)(param_1 + 0x130) * iVar1,
                                   *(undefined8 *)puVar4);
            local_a0 = auVar14;
            auVar16 = FUN_033654e4(local_a0,1,
                                   *(undefined8 *)
                                    Method_System_Threading_Tasks_Task<Task>_GetAwaiter__);
            if (*(char *)(param_1 + 0x1ea) != '\0') {
                    /* try { // try from 05f71d88 to 06071daf has its CatchHandler @ 05f720b4 */
              local_b0 = 0;
              uStack_a8 = 0;
              FUN_0426f5dc(&local_b0,auVar16._0_8_,auVar16._8_8_,4,
                           *(undefined8 *)Method_System_Tuple<Pose,_float,_float,_float>_get_Item3__
                          );
              auVar16._8_8_ = uStack_a8;
              auVar16._0_8_ = local_b0;
            }
            *(undefined1 (*) [16])(lVar7 + 0x20) = auVar16;
          }
          iVar13 = iVar13 + *(int *)(param_1 + 0x130) * iVar1;
          if (0 < *(int *)(param_1 + 0xf4)) {
            uVar9 = FUN_05f5062c(lVar6,0);
            if (((uVar9 & 1) != 0) && (uVar9 = FUN_05f506b0(lVar6,0), (uVar9 & 1) != 0)) {
              auVar17 = FUN_0422d50c(&local_80,iVar13,*(int *)(param_1 + 0x134) * iVar1,
                                     *(undefined8 *)puVar4);
              if (*(char *)(param_1 + 0x1ea) != '\0') {
                local_b0 = 0;
                uStack_a8 = 0;
                FUN_0422c734(&local_b0,auVar17._0_8_,auVar17._8_8_,4,
                             *(undefined8 *)
                              Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Jobs_TweenJobData<Color>_get_stateTransitionAmountFloat__
                            );
                auVar17._8_8_ = uStack_a8;
                auVar17._0_8_ = local_b0;
              }
              *(undefined1 (*) [16])(lVar7 + 0x30) = auVar17;
            }
            iVar13 = iVar13 + *(int *)(param_1 + 0x134) * iVar1;
          }
        }
        if ((param_8 & 0xffffffff) != 0) {
          auVar14 = FUN_0422d50c(&local_90,iVar12,*(int *)(param_1 + 0x13c) * iVar1,
                                 *(undefined8 *)puVar4);
          local_a0 = auVar14;
          auVar18 = FUN_033655a0(local_a0,1,
                                 *(undefined8 *)
                                  Method_UnityEngine_TextCore_Text_TextProcessingStack<int>_Clear__)
          ;
          iVar3 = *(int *)(param_1 + 0x13c);
          if (*(char *)(param_1 + 0x1ea) != '\0') {
            local_b0 = 0;
            uStack_a8 = 0;
            FUN_0427377c(&local_b0,auVar18._0_8_,auVar18._8_8_,4,
                         *(undefined8 *)
                          Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Jobs_TweenJobData<float>_get_stateTransitionAmountFloat__
                        );
            auVar18._8_8_ = uStack_a8;
            auVar18._0_8_ = local_b0;
          }
          *(undefined1 (*) [16])(lVar7 + 0x58) = auVar18;
          iVar12 = iVar12 + iVar3 * iVar1;
          auVar14 = FUN_0422d50c(&local_90,iVar12,*(int *)(param_1 + 0x140) * iVar1,
                                 *(undefined8 *)puVar4);
          local_a0 = auVar14;
          auVar19 = FUN_03365484(local_a0,1,
                                 *(undefined8 *)
                                  Method_UnityEngine_TextCore_Text_TextProcessingStack<int>_Add__);
          iVar3 = *(int *)(param_1 + 0x140);
          if (*(char *)(param_1 + 0x1ea) != '\0') {
            local_b0 = 0;
            uStack_a8 = 0;
            FUN_0426a248(&local_b0,auVar19._0_8_,auVar19._8_8_,4,
                         *(undefined8 *)Method_System_Tuple<Pose,_float,_float,_float>_get_Item4__);
            auVar19._8_8_ = uStack_a8;
            auVar19._0_8_ = local_b0;
          }
          *(undefined1 (*) [16])(lVar7 + 0x88) = auVar19;
          iVar12 = iVar12 + iVar3 * iVar1;
          auVar14 = FUN_0422d50c(&local_90,iVar12,*(int *)(param_1 + 0x144) * iVar1,
                                 *(undefined8 *)puVar4);
          local_a0 = auVar14;
          auVar20 = FUN_03365484(local_a0,1,
                                 *(undefined8 *)
                                  Method_UnityEngine_TextCore_Text_TextProcessingStack<int>_Add__);
          iVar3 = *(int *)(param_1 + 0x144);
          if (*(char *)(param_1 + 0x1ea) != '\0') {
            local_b0 = 0;
            uStack_a8 = 0;
            FUN_0426a248(&local_b0,auVar20._0_8_,auVar20._8_8_,4,
                         *(undefined8 *)Method_System_Tuple<Pose,_float,_float,_float>_get_Item4__);
            auVar20._8_8_ = uStack_a8;
            auVar20._0_8_ = local_b0;
          }
          *(undefined1 (*) [16])(lVar7 + 0x68) = auVar20;
          iVar12 = iVar12 + iVar3 * iVar1;
          if (*(int *)(param_1 + 0x148) != 0) {
            auVar14 = FUN_0422d50c(&local_90,iVar12,*(int *)(param_1 + 0x148) * iVar1,
                                   *(undefined8 *)puVar4);
            local_a0 = auVar14;
            auVar21 = FUN_03365434(local_a0,1,
                                   *(undefined8 *)
                                    Method_UnityEngine_TextCore_Text_TextProcessingStack<int>__ctor__
                                  );
            iVar3 = *(int *)(param_1 + 0x148);
            if (*(char *)(param_1 + 0x1ea) != '\0') {
              local_b0 = 0;
              uStack_a8 = 0;
              FUN_0422c734(&local_b0,auVar21._0_8_,auVar21._8_8_,4,
                           *(undefined8 *)
                            Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Jobs_TweenJobData<Color>_get_stateTransitionAmountFloat__
                          );
              auVar21._8_8_ = uStack_a8;
              auVar21._0_8_ = local_b0;
            }
            iVar12 = iVar12 + iVar3 * iVar1;
            *(undefined1 (*) [16])(lVar7 + 0x98) = auVar21;
          }
          if (*(int *)(param_1 + 0x14c) != 0) {
            auVar14 = FUN_0422d50c(&local_90,iVar12,*(int *)(param_1 + 0x14c) * iVar1,
                                   *(undefined8 *)puVar4);
            local_a0 = auVar14;
            auVar22 = FUN_033655a0(local_a0,1,
                                   *(undefined8 *)
                                    Method_UnityEngine_TextCore_Text_TextProcessingStack<int>_Clear__
                                  );
            iVar3 = *(int *)(param_1 + 0x14c);
            if (*(char *)(param_1 + 0x1ea) != '\0') {
              local_b0 = 0;
              uStack_a8 = 0;
              FUN_0427377c(&local_b0,auVar22._0_8_,auVar22._8_8_,4,
                           *(undefined8 *)
                            Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Jobs_TweenJobData<float>_get_stateTransitionAmountFloat__
                          );
              auVar22._8_8_ = uStack_a8;
              auVar22._0_8_ = local_b0;
            }
            iVar12 = iVar12 + iVar3 * iVar1;
            *(undefined1 (*) [16])(lVar7 + 0x78) = auVar22;
          }
        }
        if (*(long *)(param_1 + 0x70) == 0) goto LAB_05f720ec;
        FUN_04d966b8(*(long *)(param_1 + 0x70),uVar5,lVar7,
                     *(undefined8 *)Method_System_Tuple<int,_int,_int,_bool>__ctor__);
        iVar10 = iVar10 + 1;
        iVar11 = iVar2 + iVar11;
      } while (iVar10 < *(int *)(param_2 + 0x18));
    }
    return;
  }
LAB_05f720ec:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


