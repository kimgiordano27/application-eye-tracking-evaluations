/*
FUNCTION_NAME: Unity.Mathematics.int4$$get_xyy
ENTRY_POINT: 05b0c5cc
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: possible_eye_biometrics_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: possible_eye_biometrics
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: validity_gate;pose_vector;ui_interaction;active_gaze_retrieval;active_gaze_interaction;possible_biometrics
EVIDENCE: validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_6;ui_or_gameplay_sink_hits_2;active_gaze_state_retrieval_with_validity_and_pose;active_gaze_values_flow_to_interaction_sink;possible_biometric_feature_from_active_eye_context;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Unity_Mathematics_int4__get_xyy(long param_1)

{
  uint uVar1;
  byte bVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined4 uVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 in_stack_00000010;
  ulong in_stack_00000018;
  undefined8 in_stack_00000020;
  ulong in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined4 in_stack_00000040;
  long lStack0000000000000048;
  
  puVar7 = Method_Oculus_Interaction_BestHoverInteractorGroup_HandleBestInteractorStateChanged__;
  puVar6 = PTR_DAT_067caaa8;
  puVar4 = PTR_DAT_067caaa0;
  lVar3 = tpidr_el0;
  lStack0000000000000048 = *(long *)(lVar3 + 0x28);
  if ((DAT_06bc2842 & 1) == 0) {
    FUN_02f08768(PTR_DAT_067ca498);
    FUN_02f08768(
                Method_Oculus_Interaction_BestSelectInteractorGroup_HandleBestInteractorStateChanged__
                );
    FUN_02f08768(PTR_DAT_067caaa0);
    FUN_02f08768(PTR_DAT_067ca4f0);
    FUN_02f08768(PTR_DAT_067caaa8);
    FUN_02f08768(Method_System_ValueTuple<string[],_OVRFaceExpressions_FaceExpression[]>__ctor__);
    FUN_02f08768(Method_System_ValueTuple<Vector2[],_Vector2[]>__ctor__);
    FUN_02f08768(
                Method_Oculus_Interaction_BestHoverInteractorGroup_HandleBestInteractorStateChanged__
                );
    FUN_02f08768(Method_System_Text_ASCIIEncoding_GetCharCount__);
    DAT_06bc2842 = 1;
  }
  puVar5 = PTR_DAT_067ca4f0;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  in_stack_00000010 = 0;
  in_stack_00000018 = 0;
  lVar9 = FUN_05abbe04(param_1,0);
  uVar8 = FUN_03553424(*(undefined8 *)puVar7);
  FUN_03cefc70(&stack0x00000020,uVar8,2,1,*(undefined8 *)puVar6);
  puVar10 = (undefined8 *)FUN_0347b618(in_stack_00000020,in_stack_00000028,*(undefined8 *)puVar4);
  in_stack_00000030 = 0;
  in_stack_00000038 = 0;
  in_stack_00000040 = 0;
  FUN_05b50d20(0xbff0000000000000,&stack0x00000030,0x53544154,in_stack_00000028 & 0xffffffff,
               *(undefined4 *)(param_1 + 0xe0),0);
  if (puVar10 == (undefined8 *)0x0) {
    if (*(long *)(lVar3 + 0x28) == lStack0000000000000048) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
  }
  else {
    *(undefined4 *)(puVar10 + 2) = in_stack_00000040;
    puVar10[1] = in_stack_00000038;
    *puVar10 = in_stack_00000030;
    puVar4 = PTR_DAT_067ca498;
    if (*(long *)(param_1 + 0x1b8) == 0) {
      if (*(long *)(lVar3 + 0x28) == lStack0000000000000048) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
    }
    else {
      uVar1 = *(uint *)(*(long *)(param_1 + 0x1b8) + 0x14);
      if (*(int *)(*(long *)PTR_DAT_067ca498 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      puVar6 = 
      Method_Oculus_Interaction_BestSelectInteractorGroup_HandleBestInteractorStateChanged__;
      lVar12 = (ulong)uVar1 + lVar9;
      bVar2 = *(byte *)(lVar12 + 0x20);
      if ((bVar2 < 6) && ((1 << (ulong)(bVar2 & 0x1f) & 0x26U) != 0)) {
        uVar11 = FUN_05b572b0(puVar10,0);
        FUN_0609bf0c(uVar11,lVar12,0x38,0);
        uVar11 = FUN_05b572b0(puVar10,0);
        FUN_05b4aaf0(uVar11,4,0);
        if (*(long *)(param_1 + 0x1b8) == 0) {
          if (*(long *)(lVar3 + 0x28) == lStack0000000000000048) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          goto LAB_05b0c9ec;
        }
        FUN_0344df00(*(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0x1a8),4,0,puVar10,
                     *(undefined8 *)puVar6);
      }
      puVar7 = Method_System_ValueTuple<Vector2[],_Vector2[]>__ctor__;
      in_stack_00000018 = *(ulong *)(param_1 + 0x1c8);
      in_stack_00000010 = *(undefined8 *)(param_1 + 0x1c0);
      lVar12 = FUN_040499dc(&stack0x00000010,0,
                            *(undefined8 *)Method_System_ValueTuple<Vector2[],_Vector2[]>__ctor__);
      if (lVar12 == 0) {
        if (*(long *)(lVar3 + 0x28) == lStack0000000000000048) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
      }
      else {
        uVar1 = *(uint *)(lVar12 + 0x14);
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_02f6670c(*(long *)puVar4);
        }
        in_stack_00000010 = *(undefined8 *)(param_1 + 0x1c0);
        in_stack_00000018 = *(ulong *)(param_1 + 0x1c8);
        uVar14 = in_stack_00000018 >> 0x20;
        if (0 < (int)(in_stack_00000018 >> 0x20)) {
          uVar13 = 0;
          lVar9 = (ulong)uVar1 + lVar9;
          do {
            if (*(byte *)(lVar9 + 0x20) < 6 &&
                (1 << (ulong)(*(byte *)(lVar9 + 0x20) & 0x1f) & 0x26U) != 0) {
              uVar11 = FUN_05b572b0(puVar10,0);
              FUN_0609bf0c(uVar11,lVar9,0x38,0);
              uVar11 = FUN_05b572b0(puVar10,0);
              FUN_05b4aaf0(uVar11,4,0);
              in_stack_00000018 = *(ulong *)(param_1 + 0x1c8);
              in_stack_00000010 = *(undefined8 *)(param_1 + 0x1c0);
              lVar12 = FUN_040499dc(&stack0x00000010,uVar13 & 0xffffffff,*(undefined8 *)puVar7);
              if (lVar12 == 0) {
                if (*(long *)(lVar3 + 0x28) == lStack0000000000000048) {
                    /* WARNING: Subroutine does not return */
                  FUN_02f089c8();
                }
                goto LAB_05b0c9ec;
              }
              FUN_0344df00(*(undefined8 *)(lVar12 + 0x1a8),4,0,puVar10,*(undefined8 *)puVar6);
            }
            uVar13 = uVar13 + 1;
            lVar9 = lVar9 + 0x38;
          } while (uVar14 != uVar13);
        }
        FUN_03ceff58(&stack0x00000020,*(undefined8 *)puVar5);
        if (*(long *)(lVar3 + 0x28) == lStack0000000000000048) {
          return;
        }
      }
    }
  }
LAB_05b0c9ec:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


