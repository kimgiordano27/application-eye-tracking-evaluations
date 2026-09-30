/*
FUNCTION_NAME: FUN_03548f9c
ENTRY_POINT: 03548f9c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 88
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_18;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void FUN_03548f9c(long param_1)

{
  long *plVar1;
  int iVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long *plVar14;
  long lVar15;
  long lVar16;
  float fVar17;
  long local_78;
  long local_70;
  long local_68;
  undefined *puVar13;
  
  if ((DAT_0483314e & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Burst_Intrinsics_Arm_Neon_vmull_high_lane_s16__);
    thunk_FUN_01efb3a4(Method_System_Linq_Enumerable_ToList<IValueAnimationUpdate>__);
    thunk_FUN_01efb3a4(Method_System_Linq_Enumerable_ToList<int>__);
    thunk_FUN_01efb3a4(Method_Unity_Burst_Intrinsics_Arm_Neon_vmull_high_lane_s32__);
    thunk_FUN_01efb3a4(Method_Drawing_DrawingManager_PostRender__);
    thunk_FUN_01efb3a4(Method_Unity_Burst_Intrinsics_Arm_Neon_vmull_high_lane_u16__);
    thunk_FUN_01efb3a4(Method_Drawing_DrawingData_Render__);
    thunk_FUN_01efb3a4(Method_Unity_Burst_Intrinsics_Arm_Neon_vmull_high_lane_u32__);
    thunk_FUN_01efb3a4(Method_Unity_Burst_Intrinsics_Arm_Neon_vmlaq_lane_u32__);
    thunk_FUN_01efb3a4(Method_System_Text_StringBuilder_MakeRoom__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                      );
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    thunk_FUN_01efb3a4(Method_Unity_Burst_Intrinsics_Arm_Neon_vmull_high_laneq_s16__);
    thunk_FUN_01efb3a4(Method_System_Linq_Enumerable_ToList<GlyphPairAdjustmentRecord>__);
    thunk_FUN_01efb3a4(Method_Unity_Burst_Intrinsics_Arm_Neon_vmull_high_laneq_s32__);
    thunk_FUN_01efb3a4(Method_Unity_Burst_Intrinsics_Arm_Neon_vmull_high_laneq_u16__);
    thunk_FUN_01efb3a4(Method_Unity_Burst_Intrinsics_Arm_Neon_vmull_high_laneq_u32__);
    thunk_FUN_01efb3a4(Method_Unity_Burst_Intrinsics_Arm_Neon_vmull_high_n_s16__);
    thunk_FUN_01efb3a4(Method_System_Linq_Enumerable_ToList<IBoundsClipper>__);
    thunk_FUN_01efb3a4(Method_System_Linq_Enumerable_ToList<IInteractorView>__);
    thunk_FUN_01efb3a4(Method_Unity_Burst_Intrinsics_Arm_Neon_vmul_laneq_f32__);
    DAT_0483314e = 1;
  }
  local_68 = 0;
  plVar14 = (long *)(param_1 + 0x10);
  if (*plVar14 != 0) {
    return;
  }
  lVar7 = FUN_03546d50();
  if (lVar7 == 0) {
LAB_035497b0:
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  FUN_02a64f10(lVar7,param_1,&local_68,*(undefined8 *)Method_System_Linq_Enumerable_ToList<int>__);
  if (local_68 == 0) {
    thunk_FUN_01efb3a4(Method_System_Dynamic_Utils_ExpressionUtils_ReturnObject<Expression>__);
    uVar9 = thunk_FUN_01f117cc();
    puVar13 = Method_Unity_Burst_Intrinsics_Arm_Neon_vmull_high_s16__;
  }
  else {
    lVar7 = FUN_03479464(local_68,0);
    if (lVar7 == 0) goto LAB_035497b0;
    plVar1 = (long *)(param_1 + 0x40);
    uVar8 = FUN_034795a4(lVar7,0);
    puVar13 = Method_Unity_Burst_Intrinsics_Arm_Neon_vmull_high_laneq_s16__;
    if ((uVar8 & 1) == 0) {
      iVar5 = 0;
      local_78 = 0;
      local_70 = 0;
      lVar15 = 0;
      lVar16 = 0;
    }
    else {
      local_78 = 0;
      local_70 = 0;
      lVar16 = 0;
      lVar15 = 0;
      iVar5 = 0;
      do {
        uVar9 = FUN_03480450(lVar7,0);
        uVar4 = FUN_03549840();
        if (uVar4 < 0x602b32ee) {
          if (uVar4 == 0x351df9d2) {
            uVar8 = thunk_FUN_0340e318(uVar9,*(undefined8 *)
                                              Method_System_Linq_Enumerable_ToList<IBoundsClipper>__
                                       ,0);
            lVar10 = local_68;
            if ((uVar8 & 1) != 0) {
              uVar9 = *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vmull_high_lane_s32__;
              if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0
                          ) == 0) {
                thunk_FUN_01ee6d7c();
              }
              uVar9 = FUN_03579868(uVar9,0);
              if (lVar10 == 0) goto LAB_035497b0;
              lVar10 = FUN_03489498(lVar10,*(undefined8 *)
                                            Method_System_Linq_Enumerable_ToList<IBoundsClipper>__,
                                    uVar9,0);
              if (lVar10 != 0) {
                uVar9 = *(undefined8 *)Method_Drawing_DrawingManager_PostRender__;
                local_70 = thunk_FUN_01f116d0(lVar10,uVar9);
                lVar11 = local_70;
                goto joined_r0x03549544;
              }
              local_70 = 0;
            }
          }
          else if (uVar4 == 0x4939908b) {
            uVar8 = thunk_FUN_0340e318(uVar9,*(undefined8 *)
                                              Method_Unity_Burst_Intrinsics_Arm_Neon_vmull_high_laneq_u16__
                                       ,0);
            lVar10 = local_68;
            if ((uVar8 & 1) != 0) {
              uVar9 = *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vmull_high_lane_u16__;
              if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0
                          ) == 0) {
                thunk_FUN_01ee6d7c();
              }
              uVar9 = FUN_03579868(uVar9,0);
              if (lVar10 == 0) goto LAB_035497b0;
              lVar10 = FUN_03489498(lVar10,*(undefined8 *)
                                            Method_Unity_Burst_Intrinsics_Arm_Neon_vmull_high_laneq_u16__
                                    ,uVar9,0);
              puVar3 = Method_Drawing_DrawingData_Render__;
              if (lVar10 == 0) {
                lVar11 = 0;
                *plVar1 = 0;
              }
              else {
                uVar9 = *(undefined8 *)Method_Drawing_DrawingData_Render__;
                lVar11 = thunk_FUN_01f116d0(lVar10,uVar9);
                if (lVar11 == 0) goto LAB_035497b4;
                *plVar1 = lVar11;
                uVar9 = *(undefined8 *)puVar3;
                lVar11 = thunk_FUN_01f116d0(lVar10,uVar9);
                if (lVar11 == 0) goto LAB_035497b4;
              }
              thunk_FUN_01f51358(plVar1,lVar11);
            }
          }
          else if ((uVar4 == 0x602b32ed) &&
                  (uVar8 = thunk_FUN_0340e318(uVar9,*(undefined8 *)puVar13,0), lVar10 = local_68,
                  (uVar8 & 1) != 0)) {
            uVar9 = *(undefined8 *)Method_System_Text_StringBuilder_MakeRoom__;
            if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0)
                == 0) {
              thunk_FUN_01ee6d7c();
            }
            uVar9 = FUN_03579868(uVar9,0);
            if (lVar10 == 0) goto LAB_035497b0;
            lVar10 = FUN_03489498(lVar10,*(undefined8 *)puVar13,uVar9,0);
            if (lVar10 != 0) {
              uVar9 = *(undefined8 *)
                       Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
              ;
              lVar15 = thunk_FUN_01f116d0(lVar10,uVar9);
              lVar11 = lVar15;
              goto joined_r0x03549544;
            }
            lVar15 = 0;
          }
        }
        else if (uVar4 < 0x94138db6) {
          if (uVar4 == 0x8d4d225b) {
            uVar8 = thunk_FUN_0340e318(uVar9,*(undefined8 *)
                                              Method_Unity_Burst_Intrinsics_Arm_Neon_vmull_high_laneq_s32__
                                       ,0);
            lVar10 = local_68;
            if ((uVar8 & 1) != 0) {
              uVar9 = *(undefined8 *)Method_System_Text_StringBuilder_MakeRoom__;
              if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0
                          ) == 0) {
                thunk_FUN_01ee6d7c();
              }
              uVar9 = FUN_03579868(uVar9,0);
              if (lVar10 == 0) goto LAB_035497b0;
              lVar10 = FUN_03489498(lVar10,*(undefined8 *)
                                            Method_Unity_Burst_Intrinsics_Arm_Neon_vmull_high_laneq_s32__
                                    ,uVar9,0);
              if (lVar10 != 0) {
                uVar9 = *(undefined8 *)
                         Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                ;
                lVar16 = thunk_FUN_01f116d0(lVar10,uVar9);
                lVar11 = lVar16;
                goto joined_r0x03549544;
              }
              lVar16 = 0;
            }
          }
          else if ((uVar4 == 0x94138db5) &&
                  (uVar8 = thunk_FUN_0340e318(uVar9,*(undefined8 *)
                                                                                                          
                                                  Method_Unity_Burst_Intrinsics_Arm_Neon_vmull_high_n_s16__
                                              ,0), lVar10 = local_68, (uVar8 & 1) != 0)) {
            uVar9 = *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vmull_high_lane_u32__;
            if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0)
                == 0) {
              thunk_FUN_01ee6d7c();
            }
            uVar9 = FUN_03579868(uVar9,0);
            if (lVar10 == 0) goto LAB_035497b0;
            lVar10 = FUN_03489498(lVar10,*(undefined8 *)
                                          Method_Unity_Burst_Intrinsics_Arm_Neon_vmull_high_n_s16__,
                                  uVar9,0);
            if (lVar10 == 0) {
              local_78 = 0;
            }
            else {
              uVar9 = *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vmlaq_lane_u32__;
              local_78 = thunk_FUN_01f116d0(lVar10,uVar9);
              lVar11 = local_78;
joined_r0x03549544:
              if (lVar11 == 0) {
LAB_035497b4:
                    /* WARNING: Subroutine does not return */
                FUN_01f08cfc(lVar10,uVar9);
              }
            }
          }
        }
        else if (uVar4 == 0xc80ab660) {
          uVar8 = thunk_FUN_0340e318(uVar9,*(undefined8 *)
                                            Method_System_Linq_Enumerable_ToList<GlyphPairAdjustmentRecord>__
                                     ,0);
          if ((uVar8 & 1) != 0) {
            if (local_68 == 0) goto LAB_035497b0;
            iVar5 = FUN_0348b56c(local_68,*(undefined8 *)
                                           Method_System_Linq_Enumerable_ToList<GlyphPairAdjustmentRecord>__
                                 ,0);
          }
        }
        else if ((uVar4 == 0xcf9da972) &&
                (uVar8 = thunk_FUN_0340e318(uVar9,*(undefined8 *)
                                                                                                      
                                                  Method_Unity_Burst_Intrinsics_Arm_Neon_vmull_high_laneq_u32__
                                            ,0), (uVar8 & 1) != 0)) {
          if (local_68 == 0) goto LAB_035497b0;
          uVar6 = FUN_0348b854(local_68,*(undefined8 *)
                                         Method_Unity_Burst_Intrinsics_Arm_Neon_vmull_high_laneq_u32__
                               ,0);
          *(undefined4 *)(param_1 + 0x24) = uVar6;
        }
        uVar8 = FUN_034795a4(lVar7,0);
      } while ((uVar8 & 1) != 0);
    }
    fVar17 = *(float *)(param_1 + 0x24) * (float)iVar5;
    iVar2 = -0x80000000;
    if (fVar17 != INFINITY) {
      iVar2 = (int)fVar17;
    }
    *(int *)(param_1 + 0x20) = iVar2;
    if ((*(long *)(param_1 + 0x40) == 0) && (local_78 != 0 || local_70 != 0)) {
      lVar7 = thunk_FUN_01f117cc(*(undefined8 *)
                                  Method_Unity_Burst_Intrinsics_Arm_Neon_vmull_high_lane_s16__);
      FUN_0353de00(lVar7,local_78,local_70,0);
      *plVar1 = lVar7;
      thunk_FUN_01f51358(plVar1,lVar7);
    }
    lVar7 = FUN_01f08890(*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vmul_laneq_f32__,
                         iVar5);
    *plVar14 = lVar7;
    thunk_FUN_01f51358(plVar14,lVar7);
    if (lVar15 == 0) {
      thunk_FUN_01efb3a4(Method_System_Dynamic_Utils_ExpressionUtils_ReturnObject<Expression>__);
      uVar9 = thunk_FUN_01f117cc();
      puVar13 = Method_System_Dynamic_Utils_ExpressionUtils_ReturnObject<ParameterExpression>__;
    }
    else if (lVar16 == 0) {
      thunk_FUN_01efb3a4(Method_System_Dynamic_Utils_ExpressionUtils_ReturnObject<Expression>__);
      uVar9 = thunk_FUN_01f117cc();
      puVar13 = Method_Unity_Collections_FixedString4096Bytes_CheckLengthInRange__;
    }
    else {
      uVar4 = *(uint *)(lVar15 + 0x18);
      if (uVar4 == *(uint *)(lVar16 + 0x18)) {
        if (0 < (int)uVar4) {
          lVar7 = 0;
          do {
            if (uVar4 <= (uint)lVar7) {
LAB_03549764:
                    /* WARNING: Subroutine does not return */
              FUN_01f08a44();
            }
            lVar10 = *(long *)(lVar15 + 0x20 + lVar7 * 8);
            if (lVar10 == 0) {
              thunk_FUN_01efb3a4(
                                Method_System_Dynamic_Utils_ExpressionUtils_ReturnObject<Expression>__
                                );
              uVar9 = thunk_FUN_01f117cc();
              puVar13 = Method_Unity_Burst_Intrinsics_Arm_Neon_vmull_high_n_u16__;
              goto LAB_03549784;
            }
            if (*(uint *)(lVar16 + 0x18) <= (uint)lVar7) goto LAB_03549764;
            FUN_035471cc(param_1,lVar10,*(undefined8 *)(lVar16 + 0x20 + lVar7 * 8),1);
            uVar4 = *(uint *)(lVar15 + 0x18);
            lVar7 = lVar7 + 1;
          } while ((int)lVar7 < (int)uVar4);
        }
        if (local_68 != 0) {
          uVar6 = FUN_0348b56c(local_68,*(undefined8 *)
                                         Method_System_Linq_Enumerable_ToList<IInteractorView>__,0);
          thunk_FUN_01f3e6f0();
          *(undefined4 *)(param_1 + 0x28) = uVar6;
          lVar7 = FUN_03546d50();
          if (lVar7 != 0) {
            FUN_02a64cc0(lVar7,param_1,
                         *(undefined8 *)
                          Method_System_Linq_Enumerable_ToList<IValueAnimationUpdate>__);
            return;
          }
        }
        goto LAB_035497b0;
      }
      thunk_FUN_01efb3a4(Method_System_Dynamic_Utils_ExpressionUtils_ReturnObject<Expression>__);
      uVar9 = thunk_FUN_01f117cc();
      puVar13 = Method_Unity_Burst_Intrinsics_Arm_Neon_vmull_high_s32__;
    }
  }
LAB_03549784:
  uVar12 = thunk_FUN_01efb3a4(puVar13);
  FUN_03480238(uVar9,uVar12,0);
  uVar12 = thunk_FUN_01efb3a4(Method_Unity_Burst_Intrinsics_Arm_Neon_vmull_high_n_u32__);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar9,uVar12);
}


