/*
FUNCTION_NAME: Oculus.Interaction.TouchHandGrabInteractor$$ComputeShouldUnselect
ENTRY_POINT: 035494fc
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


void Oculus_Interaction_TouchHandGrabInteractor__ComputeShouldUnselect(undefined8 param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  long unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  uint unaff_w23;
  undefined8 *unaff_x24;
  uint unaff_w26;
  int unaff_w27;
  float fVar11;
  long *in_stack_00000000;
  long in_stack_00000008;
  long in_stack_00000010;
  long in_stack_00000018;
  undefined *puVar10;
  
code_r0x035494fc:
  uVar5 = FUN_03579868(param_1,0);
  if (unaff_x22 != 0) {
                    /* try { // try from 0354950c to 03649517 has its CatchHandler @ 03549f30 */
    lVar6 = FUN_03489498(unaff_x22,
                         *(undefined8 *)
                          Method_Unity_Burst_Intrinsics_Arm_Neon_vmull_high_laneq_s32__,uVar5,0);
    if (lVar6 == 0) {
      lVar7 = 0;
      goto LAB_035495e4;
    }
    uVar5 = *(undefined8 *)
             Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__;
    lVar7 = thunk_FUN_01f116d0(lVar6,uVar5);
    lVar4 = lVar7;
joined_r0x03549544:
    do {
      if (lVar4 == 0) {
LAB_035497b4:
                    /* WARNING: Subroutine does not return */
        FUN_01f08cfc(lVar6,uVar5);
      }
LAB_035495e4:
      while( true ) {
        do {
          while( true ) {
            while( true ) {
              uVar8 = FUN_034795a4();
              if ((uVar8 & 1) == 0) {
                fVar11 = *(float *)(unaff_x19 + 0x24) * (float)unaff_w27;
                iVar1 = -0x80000000;
                if (fVar11 != INFINITY) {
                  iVar1 = (int)fVar11;
                }
                *(int *)(unaff_x19 + 0x20) = iVar1;
                if ((*(long *)(unaff_x19 + 0x40) == 0) &&
                   (in_stack_00000008 != 0 || in_stack_00000010 != 0)) {
                  lVar6 = thunk_FUN_01f117cc(*(undefined8 *)
                                              Method_Unity_Burst_Intrinsics_Arm_Neon_vmull_high_lane_s16__
                                            );
                  FUN_0353de00(lVar6,in_stack_00000008,in_stack_00000010,0);
                  *in_stack_00000000 = lVar6;
                  thunk_FUN_01f51358(in_stack_00000000,lVar6);
                }
                uVar5 = FUN_01f08890(*(undefined8 *)
                                      Method_Unity_Burst_Intrinsics_Arm_Neon_vmul_laneq_f32__,
                                     unaff_w27);
                *unaff_x20 = uVar5;
                thunk_FUN_01f51358(unaff_x20,uVar5);
                if (unaff_x21 == 0) {
                  thunk_FUN_01efb3a4(
                                    Method_System_Dynamic_Utils_ExpressionUtils_ReturnObject<Expression>__
                                    );
                  uVar5 = thunk_FUN_01f117cc();
                  puVar10 = 
                  Method_System_Dynamic_Utils_ExpressionUtils_ReturnObject<ParameterExpression>__;
                  goto LAB_03549784;
                }
                if (lVar7 == 0) {
                  thunk_FUN_01efb3a4(
                                    Method_System_Dynamic_Utils_ExpressionUtils_ReturnObject<Expression>__
                                    );
                  uVar5 = thunk_FUN_01f117cc();
                  puVar10 = Method_Unity_Collections_FixedString4096Bytes_CheckLengthInRange__;
                  goto LAB_03549784;
                }
                uVar2 = *(uint *)(unaff_x21 + 0x18);
                if (uVar2 != *(uint *)(lVar7 + 0x18)) {
                  thunk_FUN_01efb3a4(
                                    Method_System_Dynamic_Utils_ExpressionUtils_ReturnObject<Expression>__
                                    );
                  uVar5 = thunk_FUN_01f117cc();
                  puVar10 = Method_Unity_Burst_Intrinsics_Arm_Neon_vmull_high_s32__;
                  goto LAB_03549784;
                }
                if ((int)uVar2 < 1) goto LAB_03549700;
                lVar6 = 0;
                goto LAB_035496c4;
              }
              uVar5 = FUN_03480450();
              uVar2 = FUN_03549840();
              if (uVar2 <= unaff_w23) break;
              if (uVar2 < 0x94138db6) {
                if (uVar2 == 0x8d4d225b) {
                  uVar8 = thunk_FUN_0340e318(uVar5,*(undefined8 *)
                                                                                                        
                                                  Method_Unity_Burst_Intrinsics_Arm_Neon_vmull_high_laneq_s32__
                                             ,0);
                  if ((uVar8 & 1) != 0) {
                    param_1 = *(undefined8 *)Method_System_Text_StringBuilder_MakeRoom__;
                    unaff_x22 = in_stack_00000018;
                    if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__
                                + 0xe0) == 0) {
                      thunk_FUN_01ee6d7c();
                    }
                    goto code_r0x035494fc;
                  }
                }
                else if ((uVar2 == 0x94138db5) &&
                        (uVar8 = thunk_FUN_0340e318(uVar5,*(undefined8 *)
                                                                                                                      
                                                  Method_Unity_Burst_Intrinsics_Arm_Neon_vmull_high_n_s16__
                                                  ,0), (uVar8 & 1) != 0)) {
                  uVar5 = *(undefined8 *)
                           Method_Unity_Burst_Intrinsics_Arm_Neon_vmull_high_lane_u32__;
                  if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ +
                              0xe0) == 0) {
                    thunk_FUN_01ee6d7c();
                  }
                  uVar5 = FUN_03579868(uVar5,0);
                  if (in_stack_00000018 == 0) goto LAB_035497b0;
                  lVar6 = FUN_03489498(in_stack_00000018,
                                       *(undefined8 *)
                                        Method_Unity_Burst_Intrinsics_Arm_Neon_vmull_high_n_s16__,
                                       uVar5,0);
                  if (lVar6 == 0) {
                    in_stack_00000008 = 0;
                    goto LAB_035495d8;
                  }
                  uVar5 = *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vmlaq_lane_u32__;
                  in_stack_00000008 = thunk_FUN_01f116d0(lVar6,uVar5);
                  unaff_w26 = 0x351df9d2;
                  lVar4 = in_stack_00000008;
                  goto joined_r0x03549544;
                }
              }
              else if (uVar2 == 0xc80ab660) {
                uVar8 = thunk_FUN_0340e318(uVar5,*(undefined8 *)
                                                  Method_System_Linq_Enumerable_ToList<GlyphPairAdjustmentRecord>__
                                           ,0);
                if ((uVar8 & 1) != 0) {
                  if (in_stack_00000018 == 0) goto LAB_035497b0;
                  unaff_w27 = FUN_0348b56c(in_stack_00000018,
                                           *(undefined8 *)
                                            Method_System_Linq_Enumerable_ToList<GlyphPairAdjustmentRecord>__
                                           ,0);
                }
              }
              else if ((uVar2 == 0xcf9da972) &&
                      (uVar8 = thunk_FUN_0340e318(uVar5,*(undefined8 *)
                                                                                                                  
                                                  Method_Unity_Burst_Intrinsics_Arm_Neon_vmull_high_laneq_u32__
                                                  ,0), (uVar8 & 1) != 0)) {
                if (in_stack_00000018 == 0) goto LAB_035497b0;
                uVar3 = FUN_0348b854(in_stack_00000018,
                                     *(undefined8 *)
                                      Method_Unity_Burst_Intrinsics_Arm_Neon_vmull_high_laneq_u32__,
                                     0);
                *(undefined4 *)(unaff_x19 + 0x24) = uVar3;
              }
            }
            if (uVar2 == unaff_w26) goto LAB_0354934c;
            if (uVar2 != 0x4939908b) break;
            uVar8 = thunk_FUN_0340e318(uVar5,*(undefined8 *)
                                              Method_Unity_Burst_Intrinsics_Arm_Neon_vmull_high_laneq_u16__
                                       ,0);
            if ((uVar8 & 1) != 0) {
              uVar5 = *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vmull_high_lane_u16__;
              if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0
                          ) == 0) {
                thunk_FUN_01ee6d7c();
              }
              uVar5 = FUN_03579868(uVar5,0);
              if (in_stack_00000018 == 0) goto LAB_035497b0;
              lVar6 = FUN_03489498(in_stack_00000018,
                                   *(undefined8 *)
                                    Method_Unity_Burst_Intrinsics_Arm_Neon_vmull_high_laneq_u16__,
                                   uVar5,0);
              puVar10 = Method_Drawing_DrawingData_Render__;
              if (lVar6 == 0) {
                lVar4 = 0;
                *in_stack_00000000 = 0;
              }
              else {
                uVar5 = *(undefined8 *)Method_Drawing_DrawingData_Render__;
                lVar4 = thunk_FUN_01f116d0(lVar6,uVar5);
                if (lVar4 == 0) goto LAB_035497b4;
                *in_stack_00000000 = lVar4;
                uVar5 = *(undefined8 *)puVar10;
                lVar4 = thunk_FUN_01f116d0(lVar6,uVar5);
                if (lVar4 == 0) goto LAB_035497b4;
              }
              thunk_FUN_01f51358(in_stack_00000000,lVar4);
              unaff_w26 = 0x351df9d2;
              unaff_w23 = 0x602b32ed;
            }
          }
        } while ((uVar2 != unaff_w23) ||
                (uVar8 = thunk_FUN_0340e318(uVar5,*unaff_x24,0), (uVar8 & 1) == 0));
        uVar5 = *(undefined8 *)Method_System_Text_StringBuilder_MakeRoom__;
        if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0
           ) {
          thunk_FUN_01ee6d7c();
        }
        uVar5 = FUN_03579868(uVar5,0);
        if (in_stack_00000018 == 0) goto LAB_035497b0;
        lVar6 = FUN_03489498(in_stack_00000018,*unaff_x24,uVar5,0);
        if (lVar6 != 0) break;
        unaff_x21 = 0;
      }
      uVar5 = *(undefined8 *)
               Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__;
      unaff_x21 = thunk_FUN_01f116d0(lVar6,uVar5);
      lVar4 = unaff_x21;
    } while( true );
  }
  goto LAB_035497b0;
LAB_035496c4:
  if (uVar2 <= (uint)lVar6) {
LAB_03549764:
                    /* WARNING: Subroutine does not return */
    FUN_01f08a44();
  }
  if (*(long *)(unaff_x21 + 0x20 + lVar6 * 8) == 0) {
    thunk_FUN_01efb3a4(Method_System_Dynamic_Utils_ExpressionUtils_ReturnObject<Expression>__);
    uVar5 = thunk_FUN_01f117cc();
    puVar10 = Method_Unity_Burst_Intrinsics_Arm_Neon_vmull_high_n_u16__;
LAB_03549784:
    uVar9 = thunk_FUN_01efb3a4(puVar10);
    FUN_03480238(uVar5,uVar9,0);
    uVar9 = thunk_FUN_01efb3a4(Method_Unity_Burst_Intrinsics_Arm_Neon_vmull_high_n_u32__);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar5,uVar9);
  }
  if (*(uint *)(lVar7 + 0x18) <= (uint)lVar6) goto LAB_03549764;
  FUN_035471cc();
  uVar2 = *(uint *)(unaff_x21 + 0x18);
  lVar6 = lVar6 + 1;
  if ((int)uVar2 <= (int)lVar6) {
LAB_03549700:
    if (in_stack_00000018 != 0) {
      uVar3 = FUN_0348b56c(in_stack_00000018,
                           *(undefined8 *)Method_System_Linq_Enumerable_ToList<IInteractorView>__,0)
      ;
      thunk_FUN_01f3e6f0();
      *(undefined4 *)(unaff_x19 + 0x28) = uVar3;
      lVar6 = FUN_03546d50();
      if (lVar6 != 0) {
        FUN_02a64cc0();
        return;
      }
    }
LAB_035497b0:
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  goto LAB_035496c4;
LAB_0354934c:
  uVar8 = thunk_FUN_0340e318(uVar5,*(undefined8 *)
                                    Method_System_Linq_Enumerable_ToList<IBoundsClipper>__,0);
  if ((uVar8 & 1) != 0) {
    uVar5 = *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vmull_high_lane_s32__;
    if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar5 = FUN_03579868(uVar5,0);
    if (in_stack_00000018 == 0) goto LAB_035497b0;
    lVar6 = FUN_03489498(in_stack_00000018,
                         *(undefined8 *)Method_System_Linq_Enumerable_ToList<IBoundsClipper>__,uVar5
                         ,0);
    if (lVar6 != 0) {
      uVar5 = *(undefined8 *)Method_Drawing_DrawingManager_PostRender__;
      in_stack_00000010 = thunk_FUN_01f116d0(lVar6,uVar5);
      unaff_w26 = 0x351df9d2;
      lVar4 = in_stack_00000010;
      goto joined_r0x03549544;
    }
    in_stack_00000010 = 0;
LAB_035495d8:
    unaff_w26 = 0x351df9d2;
  }
  goto LAB_035495e4;
}


