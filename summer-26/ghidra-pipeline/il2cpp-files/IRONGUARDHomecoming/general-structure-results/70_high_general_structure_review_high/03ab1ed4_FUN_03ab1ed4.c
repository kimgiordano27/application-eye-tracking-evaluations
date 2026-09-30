/*
FUNCTION_NAME: FUN_03ab1ed4
ENTRY_POINT: 03ab1ed4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_16;telemetry_or_network_hits_2
*/


void FUN_03ab1ed4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  undefined4 uVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long local_80;
  long local_78;
  undefined8 local_70;
  undefined8 local_68;
  
                    /* try { // try from 03ab1ee8 to 03bb1eeb has its CatchHandler @ 03ab1f14 */
                    /* try { // try from 03ab1eec to 03bb1f23 has its CatchHandler @ 03ab1d34 */
  if ((DAT_04838ff4 & 1) == 0) {
    thunk_FUN_01efb3a4(StringLiteral_8828);
                    /* catch() { ... } // from try @ 03ab1ee8 with catch @ 03ab1f14 */
    thunk_FUN_01efb3a4(Method_Unity_Burst_Intrinsics_Arm_Neon_vmull_high_lane_s32__);
    thunk_FUN_01efb3a4(Method_Drawing_DrawingManager_PostRender__);
                    /* try { // try from 03ab1f24 to 03bb1f2b has its CatchHandler @ 03ab1f40 */
                    /* try { // try from 03ab1f2c to 03bb1f37 has its CatchHandler @ 03ab1d34 */
    thunk_FUN_01efb3a4(Method_Unity_Burst_Intrinsics_Arm_Neon_vmull_high_lane_u16__);
                    /* try { // try from 03ab1f38 to 03bb1f3f has its CatchHandler @ 03ab1f40 */
    thunk_FUN_01efb3a4(Method_Drawing_DrawingData_Render__);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03ab1f24 with catch @ 03ab1f40
                       catch(type#2 @ 00000000) { ... } // from try @ 03ab1f38 with catch @ 03ab1f40
                        */
    thunk_FUN_01efb3a4(Method_Unity_Burst_Intrinsics_Arm_Neon_vmull_high_lane_u32__);
    thunk_FUN_01efb3a4(Method_Unity_Burst_Intrinsics_Arm_Neon_vmlaq_lane_u32__);
    thunk_FUN_01efb3a4(Method_System_Text_StringBuilder_MakeRoom__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                      );
    thunk_FUN_01efb3a4(
                      Method_System_Reflection_CustomAttributeExtensions_GetCustomAttribute<InputControlAttribute>__
                      );
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__
                      );
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    thunk_FUN_01efb3a4(StringLiteral_8829);
    thunk_FUN_01efb3a4(Method_Unity_Burst_Intrinsics_Arm_Neon_vmull_high_laneq_s16__);
    thunk_FUN_01efb3a4(Method_Unity_Burst_Intrinsics_Arm_Neon_vmull_high_laneq_s32__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_FixedString4096Bytes_CheckFormatError__);
    thunk_FUN_01efb3a4(StringLiteral_8819);
    thunk_FUN_01efb3a4(Method_Unity_Burst_Intrinsics_Arm_Neon_vmull_high_laneq_u16__);
    thunk_FUN_01efb3a4(Method_System_Linq_Enumerable_ToList<IBoundsClipper>__);
    thunk_FUN_01efb3a4(Method_System_Linq_Enumerable_ToList<IInteractorView>__);
    DAT_04838ff4 = 1;
  }
  plVar14 = (long *)(param_1 + 0x20);
  if (*plVar14 != 0) {
    return;
  }
  plVar7 = (long *)(param_1 + 0x40);
  lVar17 = *plVar7;
  if (lVar17 != 0) {
    *plVar7 = 0;
    thunk_FUN_01f51358(plVar7,0);
    lVar8 = FUN_03479464(lVar17,0);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar9 = FUN_034795a4(lVar8,0);
    puVar1 = Method_Drawing_DrawingData_Render__;
    if ((uVar9 & 1) == 0) {
      local_70 = 0;
      local_68 = 0;
      lVar15 = 0;
      lVar16 = 0;
      local_80 = 0;
      local_78 = 0;
    }
    else {
      local_78 = 0;
      local_70 = 0;
      local_80 = 0;
      local_68 = 0;
      lVar16 = 0;
      lVar15 = 0;
      do {
        uVar10 = FUN_03480450(lVar8,0);
        uVar5 = FUN_03ab262c();
        puVar4 = StringLiteral_8819;
        puVar3 = Method_Unity_Collections_FixedString4096Bytes_CheckFormatError__;
        puVar2 = Method_System_Linq_Enumerable_ToList<IInteractorView>__;
        if (uVar5 < 0x5dcdd538) {
          if (uVar5 < 0x47b0fbf8) {
            if (uVar5 == 0x351df9d2) {
              uVar9 = thunk_FUN_0340e318(uVar10,*(undefined8 *)
                                                 Method_System_Linq_Enumerable_ToList<IBoundsClipper>__
                                         ,0);
              if ((uVar9 & 1) != 0) {
                uVar10 = *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vmull_high_lane_s32__
                ;
                if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ +
                            0xe0) == 0) {
                  thunk_FUN_01ee6d7c();
                }
                uVar10 = FUN_03579868(uVar10,0);
                lVar11 = FUN_03489498(lVar17,*(undefined8 *)
                                              Method_System_Linq_Enumerable_ToList<IBoundsClipper>__
                                      ,uVar10,0);
                if (lVar11 != 0) {
                  uVar10 = *(undefined8 *)Method_Drawing_DrawingManager_PostRender__;
                  local_80 = thunk_FUN_01f116d0(lVar11,uVar10);
                  lVar12 = local_80;
                  goto joined_r0x03ab2494;
                }
                local_80 = 0;
              }
            }
            else if ((uVar5 == 0x47b0fbf7) &&
                    (uVar9 = thunk_FUN_0340e318(uVar10,*(undefined8 *)StringLiteral_8819,0),
                    (uVar9 & 1) != 0)) {
              uVar6 = FUN_0348b3ec(lVar17,*(undefined8 *)puVar4,0);
              local_68 = CONCAT44(local_68._4_4_,uVar6);
            }
          }
          else if (uVar5 == 0x4939908b) {
            uVar9 = thunk_FUN_0340e318(uVar10,*(undefined8 *)
                                               Method_Unity_Burst_Intrinsics_Arm_Neon_vmull_high_laneq_u16__
                                       ,0);
            if ((uVar9 & 1) != 0) {
              uVar10 = *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vmull_high_lane_u16__;
              if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0
                          ) == 0) {
                thunk_FUN_01ee6d7c();
              }
              uVar10 = FUN_03579868(uVar10,0);
              lVar11 = FUN_03489498(lVar17,*(undefined8 *)
                                            Method_Unity_Burst_Intrinsics_Arm_Neon_vmull_high_laneq_u16__
                                    ,uVar10,0);
              if (lVar11 == 0) {
                lVar12 = 0;
                *plVar14 = 0;
              }
              else {
                uVar10 = *(undefined8 *)puVar1;
                lVar12 = thunk_FUN_01f116d0(lVar11,uVar10);
                if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08cfc(lVar11,uVar10);
                }
                *plVar14 = lVar12;
                uVar10 = *(undefined8 *)puVar1;
                lVar12 = thunk_FUN_01f116d0(lVar11,uVar10);
                if (lVar12 == 0) goto LAB_03ab2610;
              }
              thunk_FUN_01f51358(plVar14,lVar12);
            }
          }
          else if ((uVar5 == 0x5dcdd537) &&
                  (uVar9 = thunk_FUN_0340e318(uVar10,*(undefined8 *)
                                                                                                            
                                                  Method_System_Linq_Enumerable_ToList<IInteractorView>__
                                              ,0), (uVar9 & 1) != 0)) {
            uVar6 = FUN_0348b56c(lVar17,*(undefined8 *)puVar2,0);
            local_70 = CONCAT44(1,uVar6);
          }
        }
        else if (uVar5 < 0x73e2c1d9) {
          if (uVar5 == 0x602b32ed) {
            uVar9 = thunk_FUN_0340e318(uVar10,*(undefined8 *)
                                               Method_Unity_Burst_Intrinsics_Arm_Neon_vmull_high_laneq_s16__
                                       ,0);
            if ((uVar9 & 1) != 0) {
              uVar10 = *(undefined8 *)
                        Method_System_Reflection_CustomAttributeExtensions_GetCustomAttribute<InputControlAttribute>__
              ;
              if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0
                          ) == 0) {
                thunk_FUN_01ee6d7c();
              }
              uVar10 = FUN_03579868(uVar10,0);
              lVar11 = FUN_03489498(lVar17,*(undefined8 *)
                                            Method_Unity_Burst_Intrinsics_Arm_Neon_vmull_high_laneq_s16__
                                    ,uVar10,0);
              if (lVar11 != 0) {
                uVar10 = *(undefined8 *)
                          Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__
                ;
                lVar15 = thunk_FUN_01f116d0(lVar11,uVar10);
                lVar12 = lVar15;
                goto joined_r0x03ab2494;
              }
              lVar15 = 0;
            }
          }
          else if ((uVar5 == 0x73e2c1d8) &&
                  (uVar9 = thunk_FUN_0340e318(uVar10,*(undefined8 *)StringLiteral_8829,0),
                  (uVar9 & 1) != 0)) {
            uVar10 = *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vmull_high_lane_u32__;
            if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0)
                == 0) {
              thunk_FUN_01ee6d7c();
            }
            uVar10 = FUN_03579868(uVar10,0);
            lVar11 = FUN_03489498(lVar17,*(undefined8 *)StringLiteral_8829,uVar10,0);
            if (lVar11 == 0) {
              local_78 = 0;
            }
            else {
              uVar10 = *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vmlaq_lane_u32__;
              local_78 = thunk_FUN_01f116d0(lVar11,uVar10);
              lVar12 = local_78;
joined_r0x03ab2494:
              if (lVar12 == 0) {
LAB_03ab2610:
                    /* WARNING: Subroutine does not return */
                FUN_01f08cfc(lVar11,uVar10);
              }
            }
          }
        }
        else if (uVar5 == 0x8d4d225b) {
          uVar9 = thunk_FUN_0340e318(uVar10,*(undefined8 *)
                                             Method_Unity_Burst_Intrinsics_Arm_Neon_vmull_high_laneq_s32__
                                     ,0);
          if ((uVar9 & 1) != 0) {
            uVar10 = *(undefined8 *)Method_System_Text_StringBuilder_MakeRoom__;
            if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0)
                == 0) {
              thunk_FUN_01ee6d7c();
            }
            uVar10 = FUN_03579868(uVar10,0);
            lVar11 = FUN_03489498(lVar17,*(undefined8 *)
                                          Method_Unity_Burst_Intrinsics_Arm_Neon_vmull_high_laneq_s32__
                                  ,uVar10,0);
            if (lVar11 != 0) {
              uVar10 = *(undefined8 *)
                        Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
              ;
              lVar16 = thunk_FUN_01f116d0(lVar11,uVar10);
              lVar12 = lVar16;
              goto joined_r0x03ab2494;
            }
            lVar16 = 0;
          }
        }
        else if ((uVar5 == 0xe1e7b894) &&
                (uVar9 = thunk_FUN_0340e318(uVar10,*(undefined8 *)
                                                                                                        
                                                  Method_Unity_Collections_FixedString4096Bytes_CheckFormatError__
                                            ,0), (uVar9 & 1) != 0)) {
          uVar6 = FUN_0348b56c(lVar17,*(undefined8 *)puVar3,0);
          local_68 = CONCAT44(uVar6,(undefined4)local_68);
        }
        uVar9 = FUN_034795a4(lVar8,0);
      } while ((uVar9 & 1) != 0);
    }
    if (*plVar14 == 0) {
      if ((local_80 == 0) || (local_78 == 0)) goto LAB_03ab25dc;
      lVar17 = thunk_FUN_01f117cc(*(undefined8 *)StringLiteral_8828);
      FUN_03ab26a8(lVar17,local_80,local_78);
      *plVar14 = lVar17;
      thunk_FUN_01f51358(plVar14,lVar17);
    }
    if ((lVar16 != 0) && (lVar15 != 0)) {
      FUN_03ab1680(param_1,local_68._4_4_);
      if (0 < (int)local_68._4_4_) {
        uVar9 = 0;
        do {
          if ((*(uint *)(lVar15 + 0x18) <= uVar9) || (*(uint *)(lVar16 + 0x18) <= uVar9)) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a44();
          }
          UnityEngine_InputSystem_Gyroscope__MakeCurrent
                    (param_1,*(undefined8 *)(lVar15 + 0x20 + uVar9 * 8),
                     *(undefined8 *)(lVar16 + 0x20 + uVar9 * 8));
          uVar9 = uVar9 + 1;
        } while (local_68._4_4_ != uVar9);
      }
      *(byte *)(param_1 + 0x10) = (byte)local_68 & 1;
      if ((local_70 & 0x100000000) == 0) {
        return;
      }
      *(undefined4 *)(param_1 + 0x48) = (undefined4)local_70;
      return;
    }
  }
LAB_03ab25dc:
  thunk_FUN_01efb3a4(Method_System_Dynamic_Utils_ExpressionUtils_ReturnObject<Expression>__);
  uVar10 = thunk_FUN_01f117cc();
  FUN_034801c4(uVar10,0);
  uVar13 = thunk_FUN_01efb3a4(StringLiteral_8833);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar10,uVar13);
}


