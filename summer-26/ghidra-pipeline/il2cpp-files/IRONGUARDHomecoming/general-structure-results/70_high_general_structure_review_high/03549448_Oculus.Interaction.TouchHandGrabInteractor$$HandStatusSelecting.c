/*
FUNCTION_NAME: Oculus.Interaction.TouchHandGrabInteractor$$HandStatusSelecting
ENTRY_POINT: 03549448
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_14;telemetry_or_network_hits_1
*/


void Oculus_Interaction_TouchHandGrabInteractor__HandStatusSelecting(undefined8 param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  long unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  undefined8 *unaff_x23;
  int unaff_w27;
  long unaff_x28;
  undefined8 uVar9;
  float fVar10;
  long *in_stack_00000000;
  long in_stack_00000008;
  long in_stack_00000010;
  long in_stack_00000018;
  undefined *puVar8;
  
  do {
    lVar4 = FUN_03489498(unaff_x28,
                         *(undefined8 *)
                          Method_Unity_Burst_Intrinsics_Arm_Neon_vmull_high_laneq_u16__,param_1,0);
    puVar8 = Method_Drawing_DrawingData_Render__;
    if (lVar4 == 0) {
      lVar5 = 0;
      *in_stack_00000000 = 0;
    }
    else {
      uVar9 = *(undefined8 *)Method_Drawing_DrawingData_Render__;
      lVar5 = thunk_FUN_01f116d0(lVar4,uVar9);
      if (lVar5 == 0) {
LAB_035497b4:
                    /* WARNING: Subroutine does not return */
        FUN_01f08cfc(lVar4,uVar9);
      }
      *in_stack_00000000 = lVar5;
      uVar9 = *(undefined8 *)puVar8;
                    /* try { // try from 03549498 to 036494b7 has its CatchHandler @ 0354a04c */
      lVar5 = thunk_FUN_01f116d0(lVar4,uVar9);
      if (lVar5 == 0) goto LAB_035497b4;
    }
    thunk_FUN_01f51358(in_stack_00000000,lVar5);
LAB_035495e4:
    do {
      uVar6 = FUN_034795a4();
      if ((uVar6 & 1) == 0) {
        fVar10 = *(float *)(unaff_x19 + 0x24) * (float)unaff_w27;
        iVar1 = -0x80000000;
        if (fVar10 != INFINITY) {
          iVar1 = (int)fVar10;
        }
        *(int *)(unaff_x19 + 0x20) = iVar1;
        if ((*(long *)(unaff_x19 + 0x40) == 0) && (in_stack_00000008 != 0 || in_stack_00000010 != 0)
           ) {
          lVar4 = thunk_FUN_01f117cc(*(undefined8 *)
                                      Method_Unity_Burst_Intrinsics_Arm_Neon_vmull_high_lane_s16__);
          FUN_0353de00(lVar4,in_stack_00000008,in_stack_00000010,0);
          *in_stack_00000000 = lVar4;
          thunk_FUN_01f51358(in_stack_00000000,lVar4);
        }
        uVar9 = FUN_01f08890(*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vmul_laneq_f32__,
                             unaff_w27);
        *unaff_x23 = uVar9;
        thunk_FUN_01f51358(unaff_x23,uVar9);
        if (unaff_x21 == 0) {
          thunk_FUN_01efb3a4(Method_System_Dynamic_Utils_ExpressionUtils_ReturnObject<Expression>__)
          ;
          uVar9 = thunk_FUN_01f117cc();
          puVar8 = Method_System_Dynamic_Utils_ExpressionUtils_ReturnObject<ParameterExpression>__;
          goto LAB_03549784;
        }
        if (unaff_x22 == 0) {
          thunk_FUN_01efb3a4(Method_System_Dynamic_Utils_ExpressionUtils_ReturnObject<Expression>__)
          ;
          uVar9 = thunk_FUN_01f117cc();
          puVar8 = Method_Unity_Collections_FixedString4096Bytes_CheckLengthInRange__;
          goto LAB_03549784;
        }
        uVar2 = *(uint *)(unaff_x21 + 0x18);
        if (uVar2 != *(uint *)(unaff_x22 + 0x18)) {
          thunk_FUN_01efb3a4(Method_System_Dynamic_Utils_ExpressionUtils_ReturnObject<Expression>__)
          ;
          uVar9 = thunk_FUN_01f117cc();
          puVar8 = Method_Unity_Burst_Intrinsics_Arm_Neon_vmull_high_s32__;
          goto LAB_03549784;
        }
        if ((int)uVar2 < 1) goto LAB_03549700;
        lVar4 = 0;
        goto LAB_035496c4;
      }
      uVar9 = FUN_03480450();
      uVar2 = FUN_03549840();
      if (0x602b32ed < uVar2) {
        if (uVar2 < 0x94138db6) {
          if (uVar2 == 0x8d4d225b) {
            uVar6 = thunk_FUN_0340e318(uVar9,*(undefined8 *)
                                              Method_Unity_Burst_Intrinsics_Arm_Neon_vmull_high_laneq_s32__
                                       ,0);
            if ((uVar6 & 1) == 0) goto LAB_035495e4;
            uVar9 = *(undefined8 *)Method_System_Text_StringBuilder_MakeRoom__;
            if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0)
                == 0) {
              thunk_FUN_01ee6d7c();
            }
            uVar9 = FUN_03579868(uVar9,0);
            if (in_stack_00000018 == 0) goto LAB_035497b0;
            lVar4 = FUN_03489498(in_stack_00000018,
                                 *(undefined8 *)
                                  Method_Unity_Burst_Intrinsics_Arm_Neon_vmull_high_laneq_s32__,
                                 uVar9,0);
            if (lVar4 == 0) {
              unaff_x22 = 0;
              goto LAB_035495e4;
            }
            uVar9 = *(undefined8 *)
                     Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
            ;
            unaff_x22 = thunk_FUN_01f116d0(lVar4,uVar9);
            lVar5 = unaff_x22;
          }
          else {
            if ((uVar2 != 0x94138db5) ||
               (uVar6 = thunk_FUN_0340e318(uVar9,*(undefined8 *)
                                                  Method_Unity_Burst_Intrinsics_Arm_Neon_vmull_high_n_s16__
                                           ,0), (uVar6 & 1) == 0)) goto LAB_035495e4;
            uVar9 = *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vmull_high_lane_u32__;
            if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0)
                == 0) {
              thunk_FUN_01ee6d7c();
            }
            uVar9 = FUN_03579868(uVar9,0);
            if (in_stack_00000018 == 0) goto LAB_035497b0;
            lVar4 = FUN_03489498(in_stack_00000018,
                                 *(undefined8 *)
                                  Method_Unity_Burst_Intrinsics_Arm_Neon_vmull_high_n_s16__,uVar9,0)
            ;
            if (lVar4 == 0) {
              in_stack_00000008 = 0;
              goto LAB_035495e4;
            }
            uVar9 = *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vmlaq_lane_u32__;
            in_stack_00000008 = thunk_FUN_01f116d0(lVar4,uVar9);
            lVar5 = in_stack_00000008;
          }
joined_r0x035493e4:
          if (lVar5 == 0) goto LAB_035497b4;
          goto LAB_035495e4;
        }
        if (uVar2 == 0xc80ab660) {
          uVar6 = thunk_FUN_0340e318(uVar9,*(undefined8 *)
                                            Method_System_Linq_Enumerable_ToList<GlyphPairAdjustmentRecord>__
                                     ,0);
          if ((uVar6 & 1) != 0) {
            if (in_stack_00000018 == 0) goto LAB_035497b0;
            unaff_w27 = FUN_0348b56c(in_stack_00000018,
                                     *(undefined8 *)
                                      Method_System_Linq_Enumerable_ToList<GlyphPairAdjustmentRecord>__
                                     ,0);
          }
        }
        else if ((uVar2 == 0xcf9da972) &&
                (uVar6 = thunk_FUN_0340e318(uVar9,*(undefined8 *)
                                                                                                      
                                                  Method_Unity_Burst_Intrinsics_Arm_Neon_vmull_high_laneq_u32__
                                            ,0), (uVar6 & 1) != 0)) {
          if (in_stack_00000018 == 0) goto LAB_035497b0;
          uVar3 = FUN_0348b854(in_stack_00000018,
                               *(undefined8 *)
                                Method_Unity_Burst_Intrinsics_Arm_Neon_vmull_high_laneq_u32__,0);
          *(undefined4 *)(unaff_x19 + 0x24) = uVar3;
        }
        goto LAB_035495e4;
      }
      if (uVar2 == 0x351df9d2) {
        uVar6 = thunk_FUN_0340e318(uVar9,*(undefined8 *)
                                          Method_System_Linq_Enumerable_ToList<IBoundsClipper>__,0);
        if ((uVar6 & 1) != 0) {
          uVar9 = *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vmull_high_lane_s32__;
          if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) ==
              0) {
            thunk_FUN_01ee6d7c();
          }
          uVar9 = FUN_03579868(uVar9,0);
          if (in_stack_00000018 == 0) goto LAB_035497b0;
          lVar4 = FUN_03489498(in_stack_00000018,
                               *(undefined8 *)Method_System_Linq_Enumerable_ToList<IBoundsClipper>__
                               ,uVar9,0);
          if (lVar4 != 0) {
            uVar9 = *(undefined8 *)Method_Drawing_DrawingManager_PostRender__;
            in_stack_00000010 = thunk_FUN_01f116d0(lVar4,uVar9);
            lVar5 = in_stack_00000010;
            goto joined_r0x035493e4;
          }
          in_stack_00000010 = 0;
        }
        goto LAB_035495e4;
      }
      if (uVar2 != 0x4939908b) {
        if ((uVar2 == 0x602b32ed) &&
           (uVar6 = thunk_FUN_0340e318(uVar9,*unaff_x20,0), (uVar6 & 1) != 0)) {
          uVar9 = *(undefined8 *)Method_System_Text_StringBuilder_MakeRoom__;
          if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) ==
              0) {
            thunk_FUN_01ee6d7c();
          }
          uVar9 = FUN_03579868(uVar9,0);
          if (in_stack_00000018 == 0) goto LAB_035497b0;
          lVar4 = FUN_03489498(in_stack_00000018,*unaff_x20,uVar9,0);
          if (lVar4 != 0) {
            uVar9 = *(undefined8 *)
                     Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
            ;
            unaff_x21 = thunk_FUN_01f116d0(lVar4,uVar9);
            lVar5 = unaff_x21;
            goto joined_r0x035493e4;
          }
          unaff_x21 = 0;
        }
        goto LAB_035495e4;
      }
      uVar6 = thunk_FUN_0340e318(uVar9,*(undefined8 *)
                                        Method_Unity_Burst_Intrinsics_Arm_Neon_vmull_high_laneq_u16__
                                 ,0);
    } while ((uVar6 & 1) == 0);
    uVar9 = *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vmull_high_lane_u16__;
    if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    param_1 = FUN_03579868(uVar9,0);
    unaff_x28 = in_stack_00000018;
  } while (in_stack_00000018 != 0);
  goto LAB_035497b0;
LAB_035496c4:
  do {
    if (uVar2 <= (uint)lVar4) {
LAB_03549764:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    if (*(long *)(unaff_x21 + 0x20 + lVar4 * 8) == 0) {
      thunk_FUN_01efb3a4(Method_System_Dynamic_Utils_ExpressionUtils_ReturnObject<Expression>__);
      uVar9 = thunk_FUN_01f117cc();
      puVar8 = Method_Unity_Burst_Intrinsics_Arm_Neon_vmull_high_n_u16__;
LAB_03549784:
      uVar7 = thunk_FUN_01efb3a4(puVar8);
      FUN_03480238(uVar9,uVar7,0);
      uVar7 = thunk_FUN_01efb3a4(Method_Unity_Burst_Intrinsics_Arm_Neon_vmull_high_n_u32__);
                    /* WARNING: Subroutine does not return */
      FUN_01f08910(uVar9,uVar7);
    }
    if (*(uint *)(unaff_x22 + 0x18) <= (uint)lVar4) goto LAB_03549764;
    FUN_035471cc();
    uVar2 = *(uint *)(unaff_x21 + 0x18);
    lVar4 = lVar4 + 1;
  } while ((int)lVar4 < (int)uVar2);
LAB_03549700:
  if (in_stack_00000018 != 0) {
    uVar3 = FUN_0348b56c(in_stack_00000018,
                         *(undefined8 *)Method_System_Linq_Enumerable_ToList<IInteractorView>__,0);
    thunk_FUN_01f3e6f0();
    *(undefined4 *)(unaff_x19 + 0x28) = uVar3;
    lVar4 = FUN_03546d50();
    if (lVar4 != 0) {
      FUN_02a64cc0();
      return;
    }
  }
LAB_035497b0:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


