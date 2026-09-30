/*
FUNCTION_NAME: Unity.Mathematics.int4$$get_xyw
ENTRY_POINT: 05b0c5f8
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: possible_eye_biometrics_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: possible_eye_biometrics
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: validity_gate;pose_vector;active_gaze_retrieval;possible_biometrics
EVIDENCE: validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_6;active_gaze_state_retrieval_with_validity_and_pose;possible_biometric_feature_from_active_eye_context;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Unity_Mathematics_int4__get_xyw(ulong param_1)

{
  uint uVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long unaff_x19;
  long unaff_x20;
  undefined8 *puVar11;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  ulong uVar12;
  long unaff_x23;
  long unaff_x24;
  ulong uVar13;
  undefined8 in_stack_00000010;
  ulong in_stack_00000018;
  undefined8 in_stack_00000020;
  ulong in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined4 in_stack_00000040;
  long in_stack_00000048;
  
  puVar11 = *(undefined8 **)(unaff_x20 + 0xaa0);
  if ((param_1 & 1) == 0) {
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
    *(undefined1 *)(unaff_x24 + 0x842) = 1;
  }
  puVar4 = PTR_DAT_067ca4f0;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  in_stack_00000010 = 0;
  in_stack_00000018 = 0;
  lVar8 = FUN_05abbe04();
  uVar7 = FUN_03553424(*unaff_x21);
  FUN_03cefc70(&stack0x00000020,uVar7,2,1,*unaff_x22);
  puVar11 = (undefined8 *)FUN_0347b618(in_stack_00000020,in_stack_00000028,*puVar11);
  in_stack_00000030 = 0;
  in_stack_00000038 = 0;
  in_stack_00000040 = 0;
  FUN_05b50d20(0xbff0000000000000,&stack0x00000030,0x53544154,in_stack_00000028 & 0xffffffff,
               *(undefined4 *)(unaff_x19 + 0xe0),0);
  if (puVar11 == (undefined8 *)0x0) {
    if (*(long *)(unaff_x23 + 0x28) == in_stack_00000048) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
  }
  else {
    *(undefined4 *)(puVar11 + 2) = in_stack_00000040;
    puVar11[1] = in_stack_00000038;
    *puVar11 = in_stack_00000030;
    puVar3 = PTR_DAT_067ca498;
    if (*(long *)(unaff_x19 + 0x1b8) == 0) {
      if (*(long *)(unaff_x23 + 0x28) == in_stack_00000048) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
    }
    else {
      uVar1 = *(uint *)(*(long *)(unaff_x19 + 0x1b8) + 0x14);
      if (*(int *)(*(long *)PTR_DAT_067ca498 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      puVar6 = 
      Method_Oculus_Interaction_BestSelectInteractorGroup_HandleBestInteractorStateChanged__;
      lVar10 = (ulong)uVar1 + lVar8;
      bVar2 = *(byte *)(lVar10 + 0x20);
      if ((bVar2 < 6) && ((1 << (ulong)(bVar2 & 0x1f) & 0x26U) != 0)) {
        uVar9 = FUN_05b572b0(puVar11,0);
        FUN_0609bf0c(uVar9,lVar10,0x38,0);
        uVar9 = FUN_05b572b0(puVar11,0);
        FUN_05b4aaf0(uVar9,4,0);
        if (*(long *)(unaff_x19 + 0x1b8) == 0) {
          if (*(long *)(unaff_x23 + 0x28) == in_stack_00000048) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          goto LAB_05b0c9ec;
        }
        FUN_0344df00(*(undefined8 *)(*(long *)(unaff_x19 + 0x1b8) + 0x1a8),4,0,puVar11,
                     *(undefined8 *)puVar6);
      }
      puVar5 = Method_System_ValueTuple<Vector2[],_Vector2[]>__ctor__;
      in_stack_00000018 = *(ulong *)(unaff_x19 + 0x1c8);
      in_stack_00000010 = *(undefined8 *)(unaff_x19 + 0x1c0);
      lVar10 = FUN_040499dc(&stack0x00000010,0,
                            *(undefined8 *)Method_System_ValueTuple<Vector2[],_Vector2[]>__ctor__);
      if (lVar10 == 0) {
        if (*(long *)(unaff_x23 + 0x28) == in_stack_00000048) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
      }
      else {
        uVar1 = *(uint *)(lVar10 + 0x14);
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_02f6670c(*(long *)puVar3);
        }
        in_stack_00000010 = *(undefined8 *)(unaff_x19 + 0x1c0);
        in_stack_00000018 = *(ulong *)(unaff_x19 + 0x1c8);
        uVar13 = in_stack_00000018 >> 0x20;
        if (0 < (int)(in_stack_00000018 >> 0x20)) {
          uVar12 = 0;
          lVar8 = (ulong)uVar1 + lVar8;
          do {
            if (*(byte *)(lVar8 + 0x20) < 6 &&
                (1 << (ulong)(*(byte *)(lVar8 + 0x20) & 0x1f) & 0x26U) != 0) {
              uVar9 = FUN_05b572b0(puVar11,0);
              FUN_0609bf0c(uVar9,lVar8,0x38,0);
              uVar9 = FUN_05b572b0(puVar11,0);
              FUN_05b4aaf0(uVar9,4,0);
              in_stack_00000018 = *(ulong *)(unaff_x19 + 0x1c8);
              in_stack_00000010 = *(undefined8 *)(unaff_x19 + 0x1c0);
              lVar10 = FUN_040499dc(&stack0x00000010,uVar12 & 0xffffffff,*(undefined8 *)puVar5);
              if (lVar10 == 0) {
                if (*(long *)(unaff_x23 + 0x28) == in_stack_00000048) {
                    /* WARNING: Subroutine does not return */
                  FUN_02f089c8();
                }
                goto LAB_05b0c9ec;
              }
              FUN_0344df00(*(undefined8 *)(lVar10 + 0x1a8),4,0,puVar11,*(undefined8 *)puVar6);
            }
            uVar12 = uVar12 + 1;
            lVar8 = lVar8 + 0x38;
          } while (uVar13 != uVar12);
        }
        FUN_03ceff58(&stack0x00000020,*(undefined8 *)puVar4);
        if (*(long *)(unaff_x23 + 0x28) == in_stack_00000048) {
          return;
        }
      }
    }
  }
LAB_05b0c9ec:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


