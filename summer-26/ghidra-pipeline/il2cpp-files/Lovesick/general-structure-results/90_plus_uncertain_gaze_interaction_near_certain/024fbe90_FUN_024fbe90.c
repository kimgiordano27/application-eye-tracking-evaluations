/*
FUNCTION_NAME: FUN_024fbe90
ENTRY_POINT: 024fbe90
PROGRAM: Lovesick-libil2cpp.so
SCORE: 175
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_15;strong_pose_or_ray_construction_hits_1;ray_or_cast_sink_hits_8;ui_or_gameplay_sink_hits_5;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_13
*/


/* WARNING: Removing unreachable block (ram,0x024fc300) */
/* WARNING: Removing unreachable block (ram,0x024fc718) */

undefined1  [16]
FUN_024fbe90(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  byte bVar7;
  uint uVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  long *plVar14;
  long lVar15;
  int *piVar16;
  long *plVar17;
  int iVar18;
  int iVar19;
  undefined8 uVar20;
  undefined4 uVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 local_c0 [16];
  undefined1 local_b0 [16];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined1 local_90 [16];
  undefined1 local_80 [16];
  
  local_a0 = param_2;
  uStack_98 = param_3;
  if ((DAT_03782889 & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List<TrackedDeviceGraphicRaycaster_RaycastHitData>_AddRange__
                      );
    thunk_FUN_00d48444(Method_UnityEngine_Component_GetComponent<TextMeshProUGUI>__);
    thunk_FUN_00d48444(StringLiteral_4495);
    thunk_FUN_00d48444(StringLiteral_10310);
    thunk_FUN_00d48444(
                      Method_UnityEngine_Rendering_Universal_UTess_ModuleHandle_InsertionSort<int2,_TessJunctionCompare>__
                      );
    thunk_FUN_00d48444(PTR_DAT_033eb298);
    thunk_FUN_00d48444(Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__);
    thunk_FUN_00d48444(Method_UnityEngine_ProBuilder_ProBuilderMesh_set_colors__);
    thunk_FUN_00d48444(System_Runtime_Remoting_Contexts_IContributeServerContextSink_TypeInfo);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<AxisAlignedBox_BoxSurface,_float>_set_Item__
                      );
    thunk_FUN_00d48444(StringLiteral_10858);
    thunk_FUN_00d48444(StringLiteral_2471);
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<GraphicsFormat,_Dictionary<FormatUsage,_bool>>__ctor__
                      );
    thunk_FUN_00d48444(Method_System_Collections_Generic_HashSet<MaskableGraphic>__ctor__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<StencilMaterial_MatEntry>_get_Count__)
    ;
    thunk_FUN_00d48444(OVRPlugin_OVRP_1_9_0_TypeInfo);
    DAT_03782889 = 1;
  }
  local_b0._0_8_ = 0;
  local_b0._8_8_ = 0;
  local_c0._0_8_ = 0;
  local_c0._8_8_ = 0;
  uVar10 = FUN_024fb0b0(param_1);
  if ((uVar10 & 1) != 0) {
    thunk_FUN_00d48444(System_Data_ConstraintTable_TypeInfo);
    uVar12 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    uVar20 = thunk_FUN_00d48444(Method_Obi_ObiNativeList<Vector3>_Dispose__);
    FUN_017713a8(uVar12,uVar20,0);
    uVar20 = thunk_FUN_00d48444(PTR_DAT_033f3068);
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar12,uVar20);
  }
  lVar11 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_2471);
  puVar2 = Method_UnityEngine_ProBuilder_ProBuilderMesh_set_colors__;
  if (lVar11 != 0) {
    FUN_01320e50(lVar11,*(undefined8 *)
                         System_Runtime_Remoting_Contexts_IContributeServerContextSink_TypeInfo);
    uVar10 = (**(code **)(*param_1 + 0x348))(param_1,*(undefined8 *)(*param_1 + 0x350));
    if ((uVar10 & 1) != 0) {
      FUN_00cb921c(lVar11,param_1,*(undefined8 *)puVar2);
    }
    uVar12 = FUN_024fc7f4(param_1,param_4);
    uVar10 = FUN_024fb8a4(param_1);
    if ((uVar10 & 1) == 0) {
      bVar7 = 0;
    }
    else {
      bVar7 = FUN_024fc9e0(param_1,param_4,uVar12);
      bVar7 = bVar7 ^ 1;
    }
    FUN_02505594(param_1);
    plVar17 = (long *)param_1[0xf];
    if (plVar17 != (long *)0x0) {
      lVar15 = *plVar17;
      uVar10 = (ulong)*(ushort *)(lVar15 + 0x12a);
      if (uVar10 != 0) {
        piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) ==
              *(long *)
               Method_UnityEngine_Rendering_Universal_UTess_ModuleHandle_InsertionSort<int2,_TessJunctionCompare>__
             ) {
            puVar13 = (undefined8 *)(lVar15 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_024fc0b0;
          }
          uVar10 = uVar10 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar10 != 0);
      }
      puVar13 = (undefined8 *)
                FUN_00d59724(plVar17,*(long *)
                                      Method_UnityEngine_Rendering_Universal_UTess_ModuleHandle_InsertionSort<int2,_TessJunctionCompare>__
                             ,0);
LAB_024fc0b0:
      puVar5 = StringLiteral_10858;
      puVar4 = Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__;
      puVar3 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
      puVar2 = PTR_DAT_033eb298;
      plVar17 = (long *)(*(code *)*puVar13)(plVar17,puVar13[1]);
      do {
        if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        do {
          do {
            lVar15 = *plVar17;
            uVar10 = (ulong)*(ushort *)(lVar15 + 0x12a);
            if (uVar10 != 0) {
              piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
              do {
                if (*(long *)(piVar16 + -2) == *(long *)puVar4) {
                  puVar13 = (undefined8 *)(lVar15 + (long)*piVar16 * 0x10 + 0x138);
                  goto LAB_024fc130;
                }
                uVar10 = uVar10 - 1;
                piVar16 = piVar16 + 4;
              } while (uVar10 != 0);
            }
            puVar13 = (undefined8 *)FUN_00d59724(plVar17,*(long *)puVar4,0);
LAB_024fc130:
            uVar10 = (*(code *)*puVar13)(plVar17,puVar13[1]);
            if ((uVar10 & 1) == 0) {
              if (plVar17 == (long *)0x0) goto LAB_024fc2f4;
              lVar15 = *plVar17;
              uVar10 = (ulong)*(ushort *)(lVar15 + 0x12a);
              if (uVar10 == 0) goto LAB_024fc2cc;
              piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
              goto LAB_024fc2b4;
            }
            lVar15 = *plVar17;
            uVar10 = (ulong)*(ushort *)(lVar15 + 0x12a);
            if (uVar10 != 0) {
              piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
              do {
                if (*(long *)(piVar16 + -2) == *(long *)puVar2) {
                  puVar13 = (undefined8 *)(lVar15 + (long)*piVar16 * 0x10 + 0x138);
                  goto LAB_024fc18c;
                }
                uVar10 = uVar10 - 1;
                piVar16 = piVar16 + 4;
              } while (uVar10 != 0);
            }
            puVar13 = (undefined8 *)FUN_00d59724(plVar17,*(long *)puVar2,0);
LAB_024fc18c:
            plVar14 = (long *)(*(code *)*puVar13)(plVar17,puVar13[1]);
            if (plVar14 == (long *)0x0) {
LAB_024fc1bc:
              plVar14 = (long *)0x0;
            }
            else {
              bVar1 = *(byte *)(*(long *)StringLiteral_4495 + 300);
              if (*(byte *)(*plVar14 + 300) < bVar1) goto LAB_024fc1bc;
              if (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar1 * 8 + -8) !=
                  *(long *)StringLiteral_4495) {
                plVar14 = (long *)0x0;
              }
            }
            if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar10 = FUN_02681b9c(plVar14,0,0);
          } while ((uVar10 & 1) == 0);
          if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          uVar10 = (**(code **)(*plVar14 + 0x348))(plVar14,*(undefined8 *)(*plVar14 + 0x350));
        } while ((uVar10 & 1) == 0);
        uVar10 = FUN_024fb8a4(plVar14);
        FUN_024fb8a4(plVar14);
        if ((uVar10 & 1) == 0) {
          uVar8 = 0;
        }
        else {
          uVar8 = FUN_024fc9e0(plVar14,param_4,uVar12);
          uVar8 = ~uVar8 & 1;
        }
        bVar7 = uVar8 != 0 || (bVar7 & 1) != 0;
        FUN_00cb921c(lVar11,plVar14,
                     *(undefined8 *)Method_UnityEngine_ProBuilder_ProBuilderMesh_set_colors__);
      } while( true );
    }
  }
LAB_024fc6c0:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar16 = piVar16 + 4;
    if (uVar10 == 0) break;
LAB_024fc2b4:
    if (*(long *)(piVar16 + -2) == *(long *)StringLiteral_10310) {
      puVar13 = (undefined8 *)(lVar15 + (long)*piVar16 * 0x10 + 0x138);
      goto LAB_024fc2e8;
    }
  }
LAB_024fc2cc:
  puVar13 = (undefined8 *)FUN_00d59724(plVar17,*(long *)StringLiteral_10310,0);
LAB_024fc2e8:
  (*(code *)*puVar13)(plVar17,puVar13[1]);
LAB_024fc2f4:
  iVar9 = FUN_024fcc60(param_1,param_4,bVar7 & 1);
  uVar6 = uStack_98;
  uVar20 = local_a0;
  if (*(int *)(*(long *)StringLiteral_4495 + 0xe0) == 0) {
    thunk_FUN_00d32864(*(long *)StringLiteral_4495);
  }
  local_b0 = FUN_024fccd8(uVar20,uVar6);
  if (0 < *(int *)(lVar11 + 0x18)) {
    iVar18 = 0;
    do {
      if (iVar9 == 0) {
        iVar19 = 0;
      }
      else {
        FUN_0132138c(lVar11,iVar18,local_80,*(undefined8 *)puVar5);
        if (local_80._0_8_ == 0) goto LAB_024fc6c0;
        uVar10 = FUN_024fc9e0(local_80._0_8_,param_4,uVar12);
        iVar19 = 0;
        if ((uVar10 & 1) == 0) {
          iVar19 = iVar9;
        }
      }
      FUN_0132138c(lVar11,iVar18,local_80,*(undefined8 *)puVar5);
      if (local_80._0_8_ == 0) goto LAB_024fc6c0;
      uVar10 = FUN_024fa748();
      uVar6 = uStack_98;
      uVar20 = local_a0;
      if ((uVar10 & 1) == 0) {
        FUN_0132138c(lVar11,iVar18,local_80,*(undefined8 *)puVar5);
        if (local_80._0_8_ == 0) goto LAB_024fc6c0;
        auVar22 = FUN_024fcd48(local_80._0_8_,local_a0,uStack_98);
      }
      else {
        FUN_0132138c(lVar11,iVar18,local_80,*(undefined8 *)puVar5);
        auVar22 = FUN_024fb420(param_1,uVar20,uVar6,local_80._0_8_,param_4,param_5,iVar19);
      }
      local_80 = auVar22;
      local_90 = local_b0;
      FUN_01132ae0(&local_a0,local_80,0,local_90,iVar18,
                   *(undefined8 *)
                    Method_System_Collections_Generic_List<StencilMaterial_MatEntry>_get_Count__);
      auVar22 = local_b0;
      FUN_0132138c(lVar11,iVar18,local_80,*(undefined8 *)puVar5);
      if (local_80._0_8_ == 0) goto LAB_024fc6c0;
      uVar10 = FUN_024fa748();
      uVar21 = 0;
      if ((uVar10 & 1) == 0) {
        uVar21 = 0x3f800000;
      }
      local_80 = auVar22;
      FUN_0113224c(uVar21,local_80,iVar18,
                   *(undefined8 *)
                    Method_System_Collections_Generic_Dictionary<GraphicsFormat,_Dictionary<FormatUsage,_bool>>__ctor__
                  );
      FUN_0132138c(lVar11,iVar18,local_80,*(undefined8 *)puVar5);
      if (local_80._0_8_ == 0) goto LAB_024fc6c0;
      if (*(char *)(local_80._0_8_ + 0xf8) != '\0') {
        FUN_0132138c(lVar11,iVar18,local_80,*(undefined8 *)puVar5);
        if (local_80._0_8_ == 0) goto LAB_024fc6c0;
        uVar20 = *(undefined8 *)(local_80._0_8_ + 0xf0);
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar10 = FUN_02681b9c(uVar20,0,0);
        if ((uVar10 & 1) != 0) {
          FUN_0132138c(lVar11,iVar18,local_80,*(undefined8 *)puVar5);
          if (local_80._0_8_ == 0) goto LAB_024fc6c0;
          uVar20 = *(undefined8 *)(local_80._0_8_ + 0xf0);
          if (*(int *)(*(long *)
                        Method_System_Collections_Generic_List<TrackedDeviceGraphicRaycaster_RaycastHitData>_AddRange__
                      + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          UnityEngine_UIElements_VisualElement__UnityEngine_UIElements_IResolvedStyle_get_visibility
                    (local_b0,iVar18,uVar20,0);
        }
      }
      iVar18 = iVar18 + 1;
    } while (iVar18 < *(int *)(lVar11 + 0x18));
  }
  uVar10 = FUN_024fd0cc(param_1,iVar9,param_4);
  uVar20 = local_b0._8_8_;
  uVar12 = local_b0._0_8_;
  if (*(int *)(*(long *)
                Method_System_Collections_Generic_List<TrackedDeviceGraphicRaycaster_RaycastHitData>_AddRange__
              + 0xe0) == 0) {
    thunk_FUN_00d32864(*(long *)
                        Method_System_Collections_Generic_List<TrackedDeviceGraphicRaycaster_RaycastHitData>_AddRange__
                      );
  }
  auVar22 = FUN_026565ec(uVar12,uVar20,0);
  uVar20 = uStack_98;
  uVar12 = local_a0;
  if ((uVar10 & 1) != 0) {
    if (*(int *)(*(long *)Method_UnityEngine_Component_GetComponent<TextMeshProUGUI>__ + 0xe0) == 0)
    {
      thunk_FUN_00d32864();
    }
    auVar23 = FUN_0265720c(uVar12,uVar20,0);
    local_c0 = auVar23;
    local_80 = auVar22;
    local_90 = auVar23;
    FUN_01132ae0(&local_a0,local_80,0,local_90,0,*(undefined8 *)OVRPlugin_OVRP_1_9_0_TypeInfo);
    local_80 = auVar23;
    FUN_0113224c(0x3f800000,local_80,0,
                 *(undefined8 *)Method_System_Collections_Generic_HashSet<MaskableGraphic>__ctor__);
    if (*(int *)(*(long *)StringLiteral_4495 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_02657630(local_c0,iVar9 != 2 && iVar9 != 4,0);
    auVar22 = FUN_02657514(local_c0._0_8_,local_c0._8_8_,0);
  }
  return auVar22;
}


