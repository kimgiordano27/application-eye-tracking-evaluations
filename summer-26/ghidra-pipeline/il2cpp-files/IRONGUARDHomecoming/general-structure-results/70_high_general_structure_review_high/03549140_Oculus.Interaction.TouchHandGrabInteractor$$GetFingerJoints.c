/*
FUNCTION_NAME: Oculus.Interaction.TouchHandGrabInteractor$$GetFingerJoints
ENTRY_POINT: 03549140
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


void Oculus_Interaction_TouchHandGrabInteractor__GetFingerJoints(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long unaff_x19;
  undefined8 *unaff_x20;
  long lVar11;
  long unaff_x22;
  uint unaff_w23;
  uint uVar12;
  undefined8 *unaff_x24;
  uint unaff_w26;
  uint uVar13;
  float fVar14;
  long *in_stack_00000000;
  long in_stack_00000008;
  long in_stack_00000010;
  long in_stack_00000018;
  undefined *puVar10;
  
  lVar11 = 0;
  iVar3 = 0;
  uVar12 = unaff_w23 & 0xffff | 0x602b0000;
  uVar13 = unaff_w26 & 0xffff | 0x351d0000;
  do {
    uVar5 = FUN_03480450();
    uVar2 = FUN_03549840();
    if (uVar12 < uVar2) {
      if (uVar2 < 0x94138db6) {
        if (uVar2 == 0x8d4d225b) {
          uVar6 = thunk_FUN_0340e318(uVar5,*(undefined8 *)
                                            Method_Unity_Burst_Intrinsics_Arm_Neon_vmull_high_laneq_s32__
                                     ,0);
          if ((uVar6 & 1) != 0) {
            uVar5 = *(undefined8 *)Method_System_Text_StringBuilder_MakeRoom__;
            if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0)
                == 0) {
              thunk_FUN_01ee6d7c();
            }
            uVar5 = FUN_03579868(uVar5,0);
            if (in_stack_00000018 == 0) goto LAB_035497b0;
            lVar7 = FUN_03489498(in_stack_00000018,
                                 *(undefined8 *)
                                  Method_Unity_Burst_Intrinsics_Arm_Neon_vmull_high_laneq_s32__,
                                 uVar5,0);
            if (lVar7 != 0) {
              uVar5 = *(undefined8 *)
                       Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
              ;
              unaff_x22 = thunk_FUN_01f116d0(lVar7,uVar5);
              lVar8 = unaff_x22;
              goto joined_r0x03549544;
            }
            unaff_x22 = 0;
          }
        }
        else if ((uVar2 == 0x94138db5) &&
                (uVar6 = thunk_FUN_0340e318(uVar5,*(undefined8 *)
                                                                                                      
                                                  Method_Unity_Burst_Intrinsics_Arm_Neon_vmull_high_n_s16__
                                            ,0), (uVar6 & 1) != 0)) {
          uVar5 = *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vmull_high_lane_u32__;
          if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) ==
              0) {
            thunk_FUN_01ee6d7c();
          }
          uVar5 = FUN_03579868(uVar5,0);
          if (in_stack_00000018 == 0) goto LAB_035497b0;
          lVar7 = FUN_03489498(in_stack_00000018,
                               *(undefined8 *)
                                Method_Unity_Burst_Intrinsics_Arm_Neon_vmull_high_n_s16__,uVar5,0);
          if (lVar7 == 0) {
            in_stack_00000008 = 0;
            goto LAB_035495d8;
          }
          uVar5 = *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vmlaq_lane_u32__;
          in_stack_00000008 = thunk_FUN_01f116d0(lVar7,uVar5);
          uVar13 = 0x351df9d2;
          lVar8 = in_stack_00000008;
joined_r0x03549544:
          if (lVar8 == 0) {
LAB_035497b4:
                    /* WARNING: Subroutine does not return */
            FUN_01f08cfc(lVar7,uVar5);
          }
        }
      }
      else if (uVar2 == 0xc80ab660) {
        uVar6 = thunk_FUN_0340e318(uVar5,*(undefined8 *)
                                          Method_System_Linq_Enumerable_ToList<GlyphPairAdjustmentRecord>__
                                   ,0);
        if ((uVar6 & 1) != 0) {
          if (in_stack_00000018 == 0) goto LAB_035497b0;
          iVar3 = FUN_0348b56c(in_stack_00000018,
                               *(undefined8 *)
                                Method_System_Linq_Enumerable_ToList<GlyphPairAdjustmentRecord>__,0)
          ;
        }
      }
      else if ((uVar2 == 0xcf9da972) &&
              (uVar6 = thunk_FUN_0340e318(uVar5,*(undefined8 *)
                                                 Method_Unity_Burst_Intrinsics_Arm_Neon_vmull_high_laneq_u32__
                                          ,0), (uVar6 & 1) != 0)) {
        if (in_stack_00000018 == 0) goto LAB_035497b0;
        uVar4 = FUN_0348b854(in_stack_00000018,
                             *(undefined8 *)
                              Method_Unity_Burst_Intrinsics_Arm_Neon_vmull_high_laneq_u32__,0);
        *(undefined4 *)(unaff_x19 + 0x24) = uVar4;
      }
    }
    else if (uVar2 == uVar13) {
      uVar6 = thunk_FUN_0340e318(uVar5,*(undefined8 *)
                                        Method_System_Linq_Enumerable_ToList<IBoundsClipper>__,0);
      if ((uVar6 & 1) != 0) {
        uVar5 = *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vmull_high_lane_s32__;
        if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0
           ) {
          thunk_FUN_01ee6d7c();
        }
        uVar5 = FUN_03579868(uVar5,0);
        if (in_stack_00000018 == 0) goto LAB_035497b0;
        lVar7 = FUN_03489498(in_stack_00000018,
                             *(undefined8 *)Method_System_Linq_Enumerable_ToList<IBoundsClipper>__,
                             uVar5,0);
        if (lVar7 != 0) {
          uVar5 = *(undefined8 *)Method_Drawing_DrawingManager_PostRender__;
          in_stack_00000010 = thunk_FUN_01f116d0(lVar7,uVar5);
          uVar13 = 0x351df9d2;
          lVar8 = in_stack_00000010;
          goto joined_r0x03549544;
        }
        in_stack_00000010 = 0;
LAB_035495d8:
        uVar13 = 0x351df9d2;
      }
    }
    else if (uVar2 == 0x4939908b) {
      uVar6 = thunk_FUN_0340e318(uVar5,*(undefined8 *)
                                        Method_Unity_Burst_Intrinsics_Arm_Neon_vmull_high_laneq_u16__
                                 ,0);
      if ((uVar6 & 1) != 0) {
        uVar5 = *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vmull_high_lane_u16__;
        if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0
           ) {
          thunk_FUN_01ee6d7c();
        }
        uVar5 = FUN_03579868(uVar5,0);
        if (in_stack_00000018 == 0) goto LAB_035497b0;
        lVar7 = FUN_03489498(in_stack_00000018,
                             *(undefined8 *)
                              Method_Unity_Burst_Intrinsics_Arm_Neon_vmull_high_laneq_u16__,uVar5,0)
        ;
        puVar10 = Method_Drawing_DrawingData_Render__;
        if (lVar7 == 0) {
          lVar8 = 0;
          *in_stack_00000000 = 0;
        }
        else {
          uVar5 = *(undefined8 *)Method_Drawing_DrawingData_Render__;
          lVar8 = thunk_FUN_01f116d0(lVar7,uVar5);
          if (lVar8 == 0) goto LAB_035497b4;
          *in_stack_00000000 = lVar8;
          uVar5 = *(undefined8 *)puVar10;
          lVar8 = thunk_FUN_01f116d0(lVar7,uVar5);
          if (lVar8 == 0) goto LAB_035497b4;
        }
        thunk_FUN_01f51358(in_stack_00000000,lVar8);
        uVar13 = 0x351df9d2;
        uVar12 = 0x602b32ed;
      }
    }
    else if ((uVar2 == uVar12) && (uVar6 = thunk_FUN_0340e318(uVar5,*unaff_x24,0), (uVar6 & 1) != 0)
            ) {
      uVar5 = *(undefined8 *)Method_System_Text_StringBuilder_MakeRoom__;
      if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0)
      {
        thunk_FUN_01ee6d7c();
      }
      uVar5 = FUN_03579868(uVar5,0);
      if (in_stack_00000018 == 0) goto LAB_035497b0;
      lVar7 = FUN_03489498(in_stack_00000018,*unaff_x24,uVar5,0);
      if (lVar7 != 0) {
        uVar5 = *(undefined8 *)
                 Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__;
        lVar11 = thunk_FUN_01f116d0(lVar7,uVar5);
        lVar8 = lVar11;
        goto joined_r0x03549544;
      }
      lVar11 = 0;
    }
    uVar6 = FUN_034795a4();
  } while ((uVar6 & 1) != 0);
  fVar14 = *(float *)(unaff_x19 + 0x24) * (float)iVar3;
  iVar1 = -0x80000000;
  if (fVar14 != INFINITY) {
    iVar1 = (int)fVar14;
  }
  *(int *)(unaff_x19 + 0x20) = iVar1;
  if ((*(long *)(unaff_x19 + 0x40) == 0) && (in_stack_00000008 != 0 || in_stack_00000010 != 0)) {
    lVar7 = thunk_FUN_01f117cc(*(undefined8 *)
                                Method_Unity_Burst_Intrinsics_Arm_Neon_vmull_high_lane_s16__);
    FUN_0353de00(lVar7,in_stack_00000008,in_stack_00000010,0);
    *in_stack_00000000 = lVar7;
    thunk_FUN_01f51358(in_stack_00000000,lVar7);
  }
  uVar5 = FUN_01f08890(*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vmul_laneq_f32__,iVar3)
  ;
  *unaff_x20 = uVar5;
  thunk_FUN_01f51358(unaff_x20,uVar5);
  if (lVar11 == 0) {
    thunk_FUN_01efb3a4(Method_System_Dynamic_Utils_ExpressionUtils_ReturnObject<Expression>__);
    uVar5 = thunk_FUN_01f117cc();
    puVar10 = Method_System_Dynamic_Utils_ExpressionUtils_ReturnObject<ParameterExpression>__;
  }
  else if (unaff_x22 == 0) {
    thunk_FUN_01efb3a4(Method_System_Dynamic_Utils_ExpressionUtils_ReturnObject<Expression>__);
    uVar5 = thunk_FUN_01f117cc();
    puVar10 = Method_Unity_Collections_FixedString4096Bytes_CheckLengthInRange__;
  }
  else {
    uVar12 = *(uint *)(lVar11 + 0x18);
    if (uVar12 == *(uint *)(unaff_x22 + 0x18)) {
      if (0 < (int)uVar12) {
        lVar7 = 0;
        do {
          if (uVar12 <= (uint)lVar7) {
LAB_03549764:
                    /* WARNING: Subroutine does not return */
            FUN_01f08a44();
          }
          if (*(long *)(lVar11 + 0x20 + lVar7 * 8) == 0) {
            thunk_FUN_01efb3a4(
                              Method_System_Dynamic_Utils_ExpressionUtils_ReturnObject<Expression>__
                              );
            uVar5 = thunk_FUN_01f117cc();
            puVar10 = Method_Unity_Burst_Intrinsics_Arm_Neon_vmull_high_n_u16__;
            goto LAB_03549784;
          }
          if (*(uint *)(unaff_x22 + 0x18) <= (uint)lVar7) goto LAB_03549764;
          FUN_035471cc();
          uVar12 = *(uint *)(lVar11 + 0x18);
          lVar7 = lVar7 + 1;
        } while ((int)lVar7 < (int)uVar12);
      }
      if (in_stack_00000018 != 0) {
        uVar4 = FUN_0348b56c(in_stack_00000018,
                             *(undefined8 *)Method_System_Linq_Enumerable_ToList<IInteractorView>__,
                             0);
        thunk_FUN_01f3e6f0();
        *(undefined4 *)(unaff_x19 + 0x28) = uVar4;
        lVar11 = FUN_03546d50();
        if (lVar11 != 0) {
          FUN_02a64cc0();
          return;
        }
      }
LAB_035497b0:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    thunk_FUN_01efb3a4(Method_System_Dynamic_Utils_ExpressionUtils_ReturnObject<Expression>__);
    uVar5 = thunk_FUN_01f117cc();
    puVar10 = Method_Unity_Burst_Intrinsics_Arm_Neon_vmull_high_s32__;
  }
LAB_03549784:
  uVar9 = thunk_FUN_01efb3a4(puVar10);
  FUN_03480238(uVar5,uVar9,0);
  uVar9 = thunk_FUN_01efb3a4(Method_Unity_Burst_Intrinsics_Arm_Neon_vmull_high_n_u32__);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar5,uVar9);
}


