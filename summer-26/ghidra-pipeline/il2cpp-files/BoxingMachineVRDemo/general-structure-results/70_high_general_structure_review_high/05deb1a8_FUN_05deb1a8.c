/*
FUNCTION_NAME: FUN_05deb1a8
ENTRY_POINT: 05deb1a8
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_20;validity_or_gating_hits_16;strong_pose_or_ray_construction_hits_12;paired_field_refs_with_structure_only;telemetry_or_network_hits_6;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x05deb718) */
/* WARNING: Removing unreachable block (ram,0x05deb524) */
/* WARNING: Removing unreachable block (ram,0x05deb834) */
/* WARNING: Removing unreachable block (ram,0x05deb844) */

void FUN_05deb1a8(int *param_1)

{
  bool bVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  int *piVar11;
  long lVar12;
  long *plVar13;
  int iVar14;
  int iVar15;
  long lVar16;
  undefined1 auVar17 [16];
  long local_f0;
  long lStack_e8;
  long local_e0;
  long lStack_d8;
  long local_d0;
  long lStack_c8;
  long local_c0;
  long lStack_b8;
  undefined8 local_b0;
  long lStack_a8;
  long local_a0;
  long lStack_98;
  undefined8 local_88;
  undefined1 local_80 [16];
  long local_70;
  long lStack_68;
  long local_60;
  
  if ((DAT_06b8319c & 1) == 0) {
    FUN_02d6084c(
                Method_UnityEngine_SubsystemsImplementation_SubsystemWithProvider<XRSessionSubsystem,_XRSessionSubsystemDescriptor,_XRSessionSubsystem_Provider>_get_subsystemDescriptor__
                );
    FUN_02d6084c(Method_Unity_VisualScripting_Subtract<object>__ctor__);
    FUN_02d6084c(Method_Unity_VisualScripting_Subtract<float>__ctor__);
    FUN_02d6084c(Method_Unity_VisualScripting_Subtract<Vector2>__ctor__);
    FUN_02d6084c(Method_Unity_VisualScripting_Subtract<Vector3>__ctor__);
    FUN_02d6084c(Method_Unity_VisualScripting_Subtract<Vector4>__ctor__);
    FUN_02d6084c(Method_Unity_VisualScripting_Sum<object>__ctor__);
    FUN_02d6084c(Method_Unity_VisualScripting_Sum<float>__ctor__);
    FUN_02d6084c(Method_Unity_VisualScripting_Sum<Vector2>__ctor__);
    FUN_02d6084c(PTR_DAT_0675f3d0);
    FUN_02d6084c(Method_Unity_VisualScripting_Sum<Vector3>__ctor__);
    FUN_02d6084c(Method_Unity_VisualScripting_Sum<Vector4>__ctor__);
    FUN_02d6084c(PTR_DAT_0675f3d8);
    FUN_02d6084c(
                Method_UnityEngine_XR_OpenXR_CompositionLayers_OpenXRCustomLayerHandler_SwapchainCreateInfo<XrCompositionLayerCubeKHR>_op_Implicit__
                );
    FUN_02d6084c(
                Method_UnityEngine_XR_OpenXR_CompositionLayers_OpenXRCustomLayerHandler_SwapchainCreateInfo<XrCompositionLayerCylinderKHR>__ctor__
                );
    FUN_02d6084c(
                Method_UnityEngine_XR_OpenXR_CompositionLayers_OpenXRCustomLayerHandler_SwapchainCreateInfo<XrCompositionLayerEquirect2KHR>_op_Implicit__
                );
    FUN_02d6084c(
                Method_UnityEngine_XR_OpenXR_CompositionLayers_OpenXRCustomLayerHandler_SwapchainCreateInfo<XrCompositionLayerEquirectKHR>_op_Implicit__
                );
    FUN_02d6084c(
                Method_UnityEngine_XR_OpenXR_CompositionLayers_OpenXRCustomLayerHandler_SwapchainCreateInfo<XrCompositionLayerProjection>__ctor__
                );
    FUN_02d6084c(
                Method_UnityEngine_XR_ARFoundation_SubsystemLifecycleManager<XROcclusionSubsystem,_XROcclusionSubsystemDescriptor,_XROcclusionSubsystem_Provider>_OnDisable__
                );
    DAT_06b8319c = 1;
  }
  local_80._0_8_ = 0;
  local_80._8_8_ = 0;
  local_88 = 0;
  lStack_a8 = 0;
  local_b0 = 0;
  lStack_98 = 0;
  local_a0 = 0;
  lStack_b8 = 0;
  local_c0 = 0;
  iVar15 = *param_1;
  if (iVar15 != 0) {
    if (*(long *)(param_1 + 6) == 0) {
      thunk_FUN_02dc61f4(PTR_DAT_06764070);
      uVar8 = thunk_FUN_02d9d534();
      uVar9 = thunk_FUN_02dc61f4(
                                Method_UnityEngine_XR_OpenXR_CompositionLayers_OpenXRCustomLayerHandler_SwapchainCreateInfo<XrCompositionLayerQuad>__ctor__
                                );
      FUN_04f77010(uVar8,uVar9,0);
      uVar9 = thunk_FUN_02dc61f4(Method_Unity_VisualScripting_SwitchUnit<int>__ctor__);
                    /* WARNING: Subroutine does not return */
      FUN_02d609b4(uVar8,uVar9);
    }
    if (*(long *)(param_1 + 8) == 0) {
      thunk_FUN_02dc61f4(PTR_DAT_06764070);
      uVar8 = thunk_FUN_02d9d534();
      uVar9 = thunk_FUN_02dc61f4(Method_Unity_VisualScripting_SwitchUnit<string>__ctor__);
      FUN_04f77010(uVar8,uVar9,0);
      uVar9 = thunk_FUN_02dc61f4(Method_Unity_VisualScripting_SwitchUnit<int>__ctor__);
                    /* WARNING: Subroutine does not return */
      FUN_02d609b4(uVar8,uVar9);
    }
    lVar16 = *(long *)(param_1 + 10);
    uVar6 = FUN_0339474c(*(long *)(param_1 + 6),
                         *(undefined8 *)Method_Unity_VisualScripting_Subtract<Vector3>__ctor__);
    if ((uVar6 & 1) != 0) {
      uVar5 = FUN_033a03d8(*(undefined8 *)(param_1 + 6),
                           *(undefined8 *)Method_Unity_VisualScripting_Subtract<Vector4>__ctor__);
      local_f0 = 0;
      lStack_e8 = 0;
      FUN_03d1d820(&local_f0,uVar5,4,1,
                   *(undefined8 *)
                    Method_UnityEngine_XR_OpenXR_CompositionLayers_OpenXRCustomLayerHandler_SwapchainCreateInfo<XrCompositionLayerProjection>__ctor__
                  );
      plVar13 = *(long **)(param_1 + 6);
      *(long *)(param_1 + 0x10) = lStack_e8;
      *(long *)(param_1 + 0xe) = local_f0;
      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      lVar10 = *plVar13;
      uVar6 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar6 != 0) {
        piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)Method_Unity_VisualScripting_Sum<Vector3>__ctor__)
          {
            puVar7 = (undefined8 *)(lVar10 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_05deb3b4;
          }
          uVar6 = uVar6 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar6 != 0);
      }
      puVar7 = (undefined8 *)
               FUN_02d9a5d4(plVar13,*(long *)Method_Unity_VisualScripting_Sum<Vector3>__ctor__,0);
LAB_05deb3b4:
      plVar13 = (long *)(*(code *)*puVar7)(plVar13,puVar7[1]);
      puVar4 = Method_Unity_VisualScripting_Sum<Vector4>__ctor__;
      puVar3 = PTR_DAT_0675f3d8;
      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      iVar14 = 0;
      do {
        lVar10 = *plVar13;
        uVar6 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar6 != 0) {
          piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
              puVar7 = (undefined8 *)(lVar10 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_05deb42c;
            }
            uVar6 = uVar6 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar6 != 0);
        }
        puVar7 = (undefined8 *)FUN_02d9a5d4(plVar13,*(long *)puVar3,0);
LAB_05deb42c:
        uVar6 = (*(code *)*puVar7)(plVar13,puVar7[1]);
        if ((uVar6 & 1) == 0) goto LAB_05deb4a8;
        lVar10 = *plVar13;
        uVar6 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar6 != 0) {
          piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)puVar4) {
              puVar7 = (undefined8 *)(lVar10 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_05deb488;
            }
            uVar6 = uVar6 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar6 != 0);
        }
        puVar7 = (undefined8 *)FUN_02d9a5d4(plVar13,*(long *)puVar4,0);
LAB_05deb488:
        auVar17 = (*(code *)*puVar7)(plVar13,puVar7[1]);
        *(undefined1 (*) [16])(*(long *)(param_1 + 0xe) + (long)iVar14 * 0x10) = auVar17;
        iVar14 = iVar14 + 1;
      } while( true );
    }
    goto LAB_05deb730;
  }
  local_88 = *(undefined8 *)(param_1 + 0x12);
  iVar15 = -1;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *param_1 = -1;
  goto LAB_05deb578;
LAB_05deb4a8:
  if ((iVar15 < 0) && (plVar13 != (long *)0x0)) {
    lVar10 = *plVar13;
    uVar6 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar6 != 0) {
      piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_0675f3d0) {
          puVar7 = (undefined8 *)(lVar10 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_05deb50c;
        }
        uVar6 = uVar6 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar6 != 0);
    }
    puVar7 = (undefined8 *)FUN_02d9a5d4(plVar13,*(long *)PTR_DAT_0675f3d0,0);
LAB_05deb50c:
    (*(code *)*puVar7)(plVar13,puVar7[1]);
  }
  if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  lVar16 = *(long *)(lVar16 + 0x20);
  if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  lVar16 = FUN_05e24da8(lVar16,*(undefined8 *)(param_1 + 0xe),*(undefined8 *)(param_1 + 0x10),2,
                        *(undefined8 *)(param_1 + 0xc),0);
  if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  local_88 = FUN_03dfe7c8(lVar16,*(undefined8 *)
                                  Method_Unity_VisualScripting_Subtract<object>__ctor__);
  uVar6 = FUN_03e0475c(&local_88,
                       *(undefined8 *)Method_Unity_VisualScripting_Subtract<Vector2>__ctor__);
  if ((uVar6 & 1) == 0) {
    *param_1 = 0;
    *(undefined8 *)(param_1 + 0x12) = local_88;
    thunk_FUN_02dd37b4(param_1 + 0x12,0);
    FUN_036141a0(param_1 + 2,&local_88,param_1,
                 *(undefined8 *)
                  Method_UnityEngine_SubsystemsImplementation_SubsystemWithProvider<XRSessionSubsystem,_XRSessionSubsystemDescriptor,_XRSessionSubsystem_Provider>_get_subsystemDescriptor__
                );
    return;
  }
LAB_05deb578:
  local_80 = FUN_03e04780(&local_88,
                          *(undefined8 *)Method_Unity_VisualScripting_Subtract<float>__ctor__);
  lVar16 = *(long *)(param_1 + 8);
  if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  *(undefined4 *)(lVar16 + 0x18) = 0;
  *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
  FUN_03d3b77c(&local_f0,local_80,
               *(undefined8 *)
                Method_UnityEngine_XR_OpenXR_CompositionLayers_OpenXRCustomLayerHandler_SwapchainCreateInfo<XrCompositionLayerEquirectKHR>_op_Implicit__
              );
  puVar4 = 
  Method_UnityEngine_XR_OpenXR_CompositionLayers_OpenXRCustomLayerHandler_SwapchainCreateInfo<XrCompositionLayerCubeKHR>_op_Implicit__
  ;
  puVar3 = Method_Unity_VisualScripting_Sum<float>__ctor__;
  lStack_b8 = lStack_e8;
  lVar16 = lStack_b8;
  local_c0 = local_f0;
  lStack_a8 = lStack_d8;
  lStack_98 = lStack_c8;
  local_a0 = local_d0;
  local_b0._0_4_ = (int)local_e0;
  lStack_b8._0_4_ = (int)lStack_e8;
  iVar14 = (int)local_b0 + 1;
  lVar10 = *(long *)Method_Unity_VisualScripting_Sum<float>__ctor__;
  local_b0._4_4_ = (undefined4)((ulong)local_e0 >> 0x20);
  local_b0 = CONCAT44(local_b0._4_4_,iVar14);
  bVar1 = iVar14 < (int)lStack_b8;
  lStack_b8 = lVar16;
  if (bVar1) {
    do {
      lVar16 = local_c0;
      if ((*(byte *)(*(long *)(lVar10 + 0x20) + 0x135) & 1) == 0) {
        FUN_02d9a2e0();
      }
      plVar13 = (long *)(lVar16 + (long)iVar14 * 0x18);
      lStack_e8 = plVar13[1];
      local_f0 = *plVar13;
      local_e0 = plVar13[2];
      lVar16 = *(long *)(param_1 + 8);
      lStack_a8 = local_f0;
      local_a0 = lStack_e8;
      lStack_98 = local_e0;
      if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      lVar12 = *(long *)puVar4;
      lVar10 = *(long *)(lVar16 + 0x10);
      *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
      local_70 = local_f0;
      lStack_68 = lStack_e8;
      local_60 = local_e0;
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      uVar2 = *(uint *)(lVar16 + 0x18);
      if (uVar2 < *(uint *)(lVar10 + 0x18)) {
        *(uint *)(lVar16 + 0x18) = uVar2 + 1;
        lVar10 = lVar10 + (long)(int)uVar2 * 0x18;
        *(long *)(lVar10 + 0x30) = local_e0;
        *(long *)(lVar10 + 0x28) = lStack_e8;
        *(long *)(lVar10 + 0x20) = local_f0;
      }
      else {
        FUN_03b3c1f4(lVar16,&local_f0,
                     *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
      }
      lVar10 = *(long *)puVar3;
      iVar14 = (int)local_b0 + 1;
      local_b0 = CONCAT44(local_b0._4_4_,iVar14);
      bVar1 = iVar14 < (int)lStack_b8;
    } while (bVar1);
  }
  lStack_a8 = 0;
  local_a0 = 0;
  lStack_98 = 0;
  if (iVar15 < 0) {
    FUN_04a9c884(&local_c0,*(undefined8 *)Method_Unity_VisualScripting_Sum<object>__ctor__);
  }
  FUN_03d1daf4(param_1 + 0xe,
               *(undefined8 *)
                Method_UnityEngine_XR_OpenXR_CompositionLayers_OpenXRCustomLayerHandler_SwapchainCreateInfo<XrCompositionLayerEquirect2KHR>_op_Implicit__
              );
LAB_05deb730:
  *param_1 = -2;
  FUN_05e028b4(param_1 + 2,0);
  return;
}


