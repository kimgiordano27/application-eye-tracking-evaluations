/*
FUNCTION_NAME: FUN_05d525fc
ENTRY_POINT: 05d525fc
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_16;paired_field_refs_with_structure_only;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x05d5352c) */
/* WARNING: Removing unreachable block (ram,0x05d53624) */

uint FUN_05d525fc(long param_1,long param_2,long *param_3,uint param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  undefined4 uVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  long *plVar20;
  long lVar21;
  ulong uVar22;
  uint uVar23;
  long lVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  uint uVar27;
  undefined8 uVar28;
  undefined8 local_c8;
  undefined8 *puStack_c0;
  long local_b8;
  long local_b0;
  long *local_a8;
  undefined8 local_a0;
  undefined8 *puStack_98;
  long local_90;
  undefined8 local_88;
  undefined8 local_80;
  int local_74;
  long local_70;
  long local_68;
  
  puVar5 = Method_Oculus_Interaction_PoseDetection_TransformFeatureStateProvider_HandDataAvailable__
  ;
  if ((DAT_066db83f & 1) == 0) {
    FUN_02b3c81c(
                Method_DG_Tweening_TweenSettingsExtensions_SetTarget<TweenerCore<int,_int,_NoOptions>>__
                );
    FUN_02b3c81c(PTR_DAT_06312d90);
    FUN_02b3c81c(
                Method_DG_Tweening_TweenSettingsExtensions_SetTarget<TweenerCore<Quaternion,_Quaternion,_NoOptions>>__
                );
    FUN_02b3c81c(Method_System_Globalization_CompareInfo_IsSuffix__);
    FUN_02b3c81c(
                Method_DG_Tweening_TweenSettingsExtensions_SetTarget<TweenerCore<Quaternion,_Vector3,_QuaternionOptions>>__
                );
    FUN_02b3c81c(Method_UnityEngine_Component_GetComponent<Graphic>__);
    FUN_02b3c81c(Method_System_Runtime_CompilerServices_TupleElementNamesAttribute__ctor__);
    FUN_02b3c81c(Method_Oculus_Interaction_Locomotion_TurnerEventBroadcaster_HandlePostprocessed__);
    FUN_02b3c81c(Method_Oculus_Interaction_Locomotion_TurnerEventBroadcaster_HandleStateChanged__);
    FUN_02b3c81c(Method_System_Type_FilterAttributeImpl__);
    FUN_02b3c81c(Method_System_Type_FilterNameIgnoreCaseImpl__);
    FUN_02b3c81c(Method_System_Type_FilterNameImpl__);
    FUN_02b3c81c(Method_System_Type_FormatTypeName__);
    FUN_02b3c81c(Method_System_Type_GetArrayRank__);
    FUN_02b3c81c(
                Method_Oculus_Interaction_PoseDetection_TransformFeatureStateProvider_HandDataAvailable__
                );
    FUN_02b3c81c(Method_UnityEngine_Rendering_CommandBuffer_IssuePluginEventAndData__);
    FUN_02b3c81c(Method_UnityEngine_Component_GetComponent<EmeraldSounds>__);
    FUN_02b3c81c(Method_System_Xml_Schema_Compiler_CompileBaseMemberTypes__);
    FUN_02b3c81c(Method_UnityEngine_Component_GetComponent<EmeraldSystem>__);
    FUN_02b3c81c(PTR_DAT_0631f050);
    FUN_02b3c81c(Method_System_Type_GetConstructor__);
    FUN_02b3c81c(Method_RootMotion_Demos_TwoHandedProp_AfterFBBIK__);
    FUN_02b3c81c(Method_System_Collections_Generic_List<Vector3>__ctor__);
    FUN_02b3c81c(Method_Meta_XR_ImmersiveDebugger_Manager_TweakManager_ProcessTypeFromHierarchy__);
    FUN_02b3c81c(Method_System_Type_GetEnumName__);
    FUN_02b3c81c(Method_System_Collections_Generic_List<Vector2>_get_Count__);
    FUN_02b3c81c(Method_UnityEngine_UIElements_Clickable_OnPointerUp__);
    FUN_02b3c81c(
                Method_DG_Tweening_TweenSettingsExtensions_SetTarget<TweenerCore<Vector3,_Path,_PathOptions>>__
                );
    FUN_02b3c81c(Method_DG_Tweening_TweenSettingsExtensions_SetUpdate<Sequence>__);
    FUN_02b3c81c(PTR_DAT_06323340);
    FUN_02b3c81c(Method_UnityEngine_Component_GetComponent<HandGrabbableHighlighter>__);
    FUN_02b3c81c(Method_UnityEngine_Component_GetComponent<HandPuppet>__);
    FUN_02b3c81c(Method_UnityEngine_Component_GetComponent<HeadBodyRig>__);
    FUN_02b3c81c(Method_System_Type_GetEnumNames__);
    DAT_066db83f = 1;
  }
  lVar15 = *(long *)puVar5;
  local_70 = 0;
  local_68 = 0;
  local_74 = 0;
  local_88 = 0;
  local_80 = 0;
  local_a0 = 0;
  puStack_98 = (undefined8 *)0x0;
  local_90 = 0;
  if (*(int *)(lVar15 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
    lVar15 = *(long *)puVar5;
  }
  lVar15 = *(long *)(*(long *)(lVar15 + 0xb8) + 0x30);
  if (lVar15 != 0) {
    FUN_05c36c30(lVar15,0);
  }
  local_a8 = &local_68;
  local_b0 = 0;
  local_68 = lVar15;
  if (((param_2 == 0) || (*(long *)(param_2 + 0x18) == 0)) || (*(int *)(param_1 + 0xa8) == 0)) {
    if (*(int *)(param_1 + 0xa8) == 0) {
      uVar25 = thunk_FUN_05c92238(param_1,0);
      uVar25 = FUN_04c0a5c4(*(undefined8 *)Method_UnityEngine_Component_GetComponent<HeadBodyRig>__,
                            uVar25,*(undefined8 *)
                                    Method_UnityEngine_Component_GetComponent<HandPuppet>__,0);
      if (*(int *)(*(long *)PTR_DAT_06312d90 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      FUN_05c453b4(uVar25,param_1,0);
    }
    else {
      uVar25 = thunk_FUN_05c92238(param_1,0);
      uVar25 = FUN_04c0a5c4(*(undefined8 *)Method_UnityEngine_Component_GetComponent<HeadBodyRig>__,
                            uVar25,*(undefined8 *)
                                    Method_UnityEngine_Component_GetComponent<HandGrabbableHighlighter>__
                            ,0);
      if (*(int *)(*(long *)PTR_DAT_06312d90 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      FUN_05c453b4(uVar25,param_1,0);
    }
    *param_3 = 0;
    thunk_FUN_02bb0e9c(param_3,0);
  }
  else {
    iVar10 = FUN_05d4f124(param_1);
    if (iVar10 == 0) {
      lVar15 = *(long *)(param_1 + 0x130);
      if ((lVar15 == 0) || (lVar24 = *(long *)(param_1 + 0x120), lVar24 == 0)) {
        FUN_05d4b4f4(param_1);
        lVar15 = *(long *)(param_1 + 0x130);
        lVar24 = *(long *)(param_1 + 0x120);
      }
      lVar18 = *(long *)(param_1 + 0x1d0);
      if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      *(undefined4 *)(lVar18 + 0x18) = 0;
      *(int *)(lVar18 + 0x1c) = *(int *)(lVar18 + 0x1c) + 1;
      puVar5 = Method_System_Xml_Schema_Compiler_CompileBaseMemberTypes__;
      if (*(long *)(param_1 + 0x1d8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      FUN_04a79244(*(long *)(param_1 + 0x1d8),
                   *(undefined8 *)Method_System_Xml_Schema_Compiler_CompileBaseMemberTypes__);
      lVar18 = *(long *)(param_1 + 0x1e0);
      if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      iVar10 = *(int *)(lVar18 + 0x18);
      *(undefined4 *)(lVar18 + 0x18) = 0;
      *(int *)(lVar18 + 0x1c) = *(int *)(lVar18 + 0x1c) + 1;
      if (0 < iVar10) {
        FUN_04d9e084(*(undefined8 *)(lVar18 + 0x10),0,iVar10,0);
      }
      if (*(long *)(param_1 + 0x1e8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      FUN_04a79244(*(long *)(param_1 + 0x1e8),*(undefined8 *)puVar5);
      lVar18 = *(long *)(param_1 + 0x1f0);
      if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      uVar23 = 0;
      local_74 = 0;
      *(undefined4 *)(lVar18 + 0x18) = 0;
      *(int *)(lVar18 + 0x1c) = *(int *)(lVar18 + 0x1c) + 1;
      puVar6 = 
      Method_DG_Tweening_TweenSettingsExtensions_SetTarget<TweenerCore<Quaternion,_Vector3,_QuaternionOptions>>__
      ;
      puVar5 = Method_UnityEngine_Rendering_CommandBuffer_IssuePluginEventAndData__;
      iVar10 = *(int *)(param_2 + 0x18);
      if (0 < iVar10) {
        do {
          iVar11 = FUN_05d6f85c(param_2,&local_74,0);
          if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cac4();
          }
          uVar22 = FUN_045e12ac(lVar15,iVar11,*(undefined8 *)puVar6);
          if ((uVar22 & 1) == 0) {
            if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
              thunk_FUN_02b9ad44();
            }
            iVar12 = FUN_05d3efa0(iVar11,0);
            if (iVar12 == 0) {
              if (iVar11 == 0xa0) {
                if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
                  thunk_FUN_02b9ad44();
                }
                iVar12 = FUN_05d3efa0(0x20,0);
LAB_05d52b40:
                if (iVar12 != 0) goto LAB_05d52b48;
              }
              else if ((iVar11 == 0xad) || (iVar11 == 0x2011)) {
                if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
                  thunk_FUN_02b9ad44();
                }
                iVar12 = FUN_05d3efa0(0x2d,0);
                goto LAB_05d52b40;
              }
              lVar18 = *(long *)(param_1 + 0x1f0);
              if (lVar18 == 0) {
LAB_05d535e4:
                    /* WARNING: Subroutine does not return */
                FUN_02b3cac4();
              }
              lVar16 = *(long *)(lVar18 + 0x10);
              lVar19 = *(long *)PTR_DAT_0631f050;
              *(int *)(lVar18 + 0x1c) = *(int *)(lVar18 + 0x1c) + 1;
              if (lVar16 == 0) goto LAB_05d535e4;
              uVar23 = *(uint *)(lVar18 + 0x18);
              if (uVar23 < *(uint *)(lVar16 + 0x18)) {
                *(uint *)(lVar18 + 0x18) = uVar23 + 1;
                *(int *)(lVar16 + (long)(int)uVar23 * 4 + 0x20) = iVar11;
              }
              else {
                FUN_038597b0(lVar18,iVar11,
                             *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
              }
              uVar23 = 1;
            }
            else {
LAB_05d52b48:
              lVar18 = thunk_FUN_02b79644(*(undefined8 *)
                                           Method_DG_Tweening_TweenSettingsExtensions_SetTarget<TweenerCore<int,_int,_NoOptions>>__
                                         );
              FUN_05d48a10(lVar18,iVar11,iVar12);
              if (lVar24 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02b3cac4();
              }
              uVar22 = FUN_045e2b94(lVar24,iVar12,&local_80,
                                    *(undefined8 *)
                                     Method_UnityEngine_Component_GetComponent<Graphic>__);
              if ((uVar22 & 1) == 0) {
                if (*(long *)(param_1 + 0x1d8) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02b3cac4();
                }
                uVar22 = FUN_04a79de0(*(long *)(param_1 + 0x1d8),iVar12,
                                      *(undefined8 *)
                                       Method_UnityEngine_Component_GetComponent<EmeraldSounds>__);
                if ((uVar22 & 1) != 0) {
                  lVar16 = *(long *)(param_1 + 0x1d0);
                  if (lVar16 == 0) {
LAB_05d535d8:
                    /* WARNING: Subroutine does not return */
                    FUN_02b3cac4();
                  }
                  lVar19 = *(long *)(lVar16 + 0x10);
                  lVar21 = *(long *)PTR_DAT_0631f050;
                  *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
                  if (lVar19 == 0) goto LAB_05d535d8;
                  uVar13 = *(uint *)(lVar16 + 0x18);
                  if (uVar13 < *(uint *)(lVar19 + 0x18)) {
                    *(uint *)(lVar16 + 0x18) = uVar13 + 1;
                    *(int *)(lVar19 + (long)(int)uVar13 * 4 + 0x20) = iVar12;
                  }
                  else {
                    FUN_038597b0(lVar16,iVar12,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar21 + 0x20) + 0xc0) + 0x70))
                    ;
                  }
                }
                if (*(long *)(param_1 + 0x1e8) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02b3cac4();
                }
                uVar22 = FUN_04a79de0(*(long *)(param_1 + 0x1e8),iVar11,
                                      *(undefined8 *)
                                       Method_UnityEngine_Component_GetComponent<EmeraldSounds>__);
                if ((uVar22 & 1) != 0) {
                  lVar16 = *(long *)(param_1 + 0x1e0);
                  if (lVar16 == 0) {
LAB_05d535d0:
                    /* WARNING: Subroutine does not return */
                    FUN_02b3cac4();
                  }
                  lVar19 = *(long *)(lVar16 + 0x10);
                  lVar21 = *(long *)Method_System_Type_GetConstructor__;
                  *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
                  if (lVar19 == 0) goto LAB_05d535d0;
                  uVar13 = *(uint *)(lVar16 + 0x18);
                  if (uVar13 < *(uint *)(lVar19 + 0x18)) {
                    *(uint *)(lVar16 + 0x18) = uVar13 + 1;
                    plVar20 = (long *)(lVar19 + (long)(int)uVar13 * 8 + 0x20);
                    *plVar20 = lVar18;
                    thunk_FUN_02bb0e9c(plVar20,lVar18);
                  }
                  else {
                    FUN_037a6538(lVar16,lVar18,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar21 + 0x20) + 0xc0) + 0x70))
                    ;
                  }
                }
              }
              else {
                if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02b3cac4();
                }
                FUN_05d6ffb4(lVar18,local_80,0);
                FUN_05d6ffbc(lVar18,param_1,0);
                lVar16 = *(long *)(param_1 + 0x128);
                if (lVar16 == 0) {
LAB_05d535cc:
                    /* WARNING: Subroutine does not return */
                  FUN_02b3cac4();
                }
                lVar19 = *(long *)(lVar16 + 0x10);
                lVar21 = *(long *)Method_System_Type_GetConstructor__;
                *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
                if (lVar19 == 0) goto LAB_05d535cc;
                uVar13 = *(uint *)(lVar16 + 0x18);
                if (uVar13 < *(uint *)(lVar19 + 0x18)) {
                  *(uint *)(lVar16 + 0x18) = uVar13 + 1;
                  plVar20 = (long *)(lVar19 + (long)(int)uVar13 * 8 + 0x20);
                  *plVar20 = lVar18;
                  thunk_FUN_02bb0e9c(plVar20,lVar18);
                }
                else {
                  FUN_037a6538(lVar16,lVar18,
                               *(undefined8 *)(*(long *)(*(long *)(lVar21 + 0x20) + 0xc0) + 0x70));
                }
                FUN_045e10b8(lVar15,iVar11,lVar18,
                             *(undefined8 *)
                              Method_DG_Tweening_TweenSettingsExtensions_SetTarget<TweenerCore<Quaternion,_Quaternion,_NoOptions>>__
                            );
              }
            }
          }
          local_74 = local_74 + 1;
        } while (local_74 < iVar10);
      }
      if (*(long *)(param_1 + 0x1d0) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      if (*(int *)(*(long *)(param_1 + 0x1d0) + 0x18) == 0) {
        *param_3 = param_2;
        thunk_FUN_02bb0e9c(param_3,param_2);
        uVar13 = uVar23 ^ 1;
        goto LAB_05d52990;
      }
      lVar18 = *(long *)(param_1 + 0x140);
      if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      if (*(uint *)(lVar18 + 0x18) <= *(uint *)(param_1 + 0x148)) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cacc();
      }
      plVar20 = *(long **)(lVar18 + (long)(int)*(uint *)(param_1 + 0x148) * 8 + 0x20);
      if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      iVar10 = (**(code **)(*plVar20 + 0x188))(plVar20,*(undefined8 *)(*plVar20 + 400));
      if (1 < iVar10) {
        lVar18 = *(long *)(param_1 + 0x140);
        if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        if (*(uint *)(lVar18 + 0x18) <= *(uint *)(param_1 + 0x148)) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cacc();
        }
        plVar20 = *(long **)(lVar18 + (long)(int)*(uint *)(param_1 + 0x148) * 8 + 0x20);
        if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        iVar10 = (**(code **)(*plVar20 + 0x1a8))(plVar20,*(undefined8 *)(*plVar20 + 0x1b0));
        if (1 < iVar10) goto LAB_05d52ed0;
      }
      lVar18 = *(long *)(param_1 + 0x140);
      if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      if (*(uint *)(lVar18 + 0x18) <= *(uint *)(param_1 + 0x148)) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cacc();
      }
      lVar18 = *(long *)(lVar18 + (long)(int)*(uint *)(param_1 + 0x148) * 8 + 0x20);
      if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      FUN_05c6b590(lVar18,*(undefined4 *)(param_1 + 0x150),*(undefined4 *)(param_1 + 0x154),0);
      lVar18 = *(long *)(param_1 + 0x140);
      if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      if (*(uint *)(lVar18 + 0x18) <= *(uint *)(param_1 + 0x148)) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cacc();
      }
      uVar25 = *(undefined8 *)(lVar18 + (long)(int)*(uint *)(param_1 + 0x148) * 8 + 0x20);
      if (*(int *)(*(long *)Method_UnityEngine_Rendering_CommandBuffer_IssuePluginEventAndData__ +
                  0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      FUN_05d41e94(uVar25,0);
LAB_05d52ed0:
      lVar18 = *(long *)(param_1 + 0x140);
      if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      if (*(uint *)(lVar18 + 0x18) <= *(uint *)(param_1 + 0x148)) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cacc();
      }
      uVar25 = *(undefined8 *)(param_1 + 0x160);
      uVar2 = *(undefined8 *)(param_1 + 0x168);
      uVar26 = *(undefined8 *)(param_1 + 0x1d0);
      uVar14 = *(undefined4 *)(param_1 + 0x158);
      uVar3 = *(undefined4 *)(param_1 + 0x15c);
      uVar28 = *(undefined8 *)(lVar18 + (long)(int)*(uint *)(param_1 + 0x148) * 8 + 0x20);
      if (*(int *)(*(long *)Method_UnityEngine_Rendering_CommandBuffer_IssuePluginEventAndData__ +
                  0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar13 = FUN_05d3faf8(uVar26,uVar14,0,uVar2,uVar25,uVar3,uVar28,&local_70,0);
      if (local_70 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      uVar14 = *(undefined4 *)(local_70 + 0x18);
      uVar25 = *(undefined8 *)(param_1 + 0x118);
      if (*(int *)(*(long *)
                    Method_Oculus_Interaction_PoseDetection_TransformFeatureStateProvider_HandDataAvailable__
                  + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      FUN_031d67bc(uVar25,uVar14,*(undefined8 *)Method_System_Type_FilterNameIgnoreCaseImpl__);
      FUN_031d6988(lVar24,uVar14,*(undefined8 *)Method_System_Type_FormatTypeName__);
      puVar8 = Method_System_Type_GetArrayRank__;
      FUN_031d6830(*(undefined8 *)(param_1 + 0x1c8),uVar14,
                   *(undefined8 *)Method_System_Type_GetArrayRank__);
      FUN_031d6830(*(undefined8 *)(param_1 + 0x1c0),uVar14,*(undefined8 *)puVar8);
      puVar7 = Method_UnityEngine_Component_GetComponent<EmeraldSystem>__;
      puVar6 = Method_System_Globalization_CompareInfo_IsSuffix__;
      puVar5 = PTR_DAT_0631f050;
      if (local_70 != 0) {
        uVar27 = 0;
        do {
          if ((int)*(uint *)(local_70 + 0x18) <= (int)uVar27) {
LAB_05d53164:
            lVar18 = *(long *)(param_1 + 0x1d0);
            if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02b3cac4();
            }
            *(undefined4 *)(lVar18 + 0x18) = 0;
            *(int *)(lVar18 + 0x1c) = *(int *)(lVar18 + 0x1c) + 1;
            if (*(long *)(param_1 + 0x1e0) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02b3cac4();
            }
            uVar14 = *(undefined4 *)(*(long *)(param_1 + 0x1e0) + 0x18);
            if (*(int *)(*(long *)
                          Method_Oculus_Interaction_PoseDetection_TransformFeatureStateProvider_HandDataAvailable__
                        + 0xe4) == 0) {
              thunk_FUN_02b9ad44();
            }
            FUN_031d6830(lVar18,uVar14,*(undefined8 *)puVar8);
            FUN_031d67bc(*(undefined8 *)(param_1 + 0x128),uVar14,
                         *(undefined8 *)Method_System_Type_FilterAttributeImpl__);
            FUN_031d6988(lVar15,uVar14,*(undefined8 *)Method_System_Type_FilterNameImpl__);
            puVar9 = Method_System_Type_GetEnumName__;
            puVar8 = Method_DG_Tweening_TweenSettingsExtensions_SetUpdate<Sequence>__;
            puVar7 = 
            Method_DG_Tweening_TweenSettingsExtensions_SetTarget<TweenerCore<Quaternion,_Quaternion,_NoOptions>>__
            ;
            puVar6 = Method_UnityEngine_Component_GetComponent<Graphic>__;
            lVar18 = *(long *)(param_1 + 0x1e0);
            if (lVar18 == 0) goto LAB_05d53394;
            iVar10 = 0;
            goto LAB_05d5320c;
          }
          if (*(uint *)(local_70 + 0x18) <= uVar27) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cacc();
          }
          lVar18 = *(long *)(local_70 + (long)(int)uVar27 * 8 + 0x20);
          if (lVar18 == 0) goto LAB_05d53164;
          uVar14 = FUN_05d3dd8c(lVar18,0);
          FUN_05d3ddf0(lVar18,*(undefined4 *)(param_1 + 0x148),0);
          lVar16 = *(long *)(param_1 + 0x118);
          if (lVar16 == 0) {
LAB_05d535a8:
                    /* WARNING: Subroutine does not return */
            FUN_02b3cac4();
          }
          lVar19 = *(long *)(lVar16 + 0x10);
          lVar21 = *(long *)puVar7;
          *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
          if (lVar19 == 0) goto LAB_05d535a8;
          uVar4 = *(uint *)(lVar16 + 0x18);
          if (uVar4 < *(uint *)(lVar19 + 0x18)) {
            *(uint *)(lVar16 + 0x18) = uVar4 + 1;
            plVar20 = (long *)(lVar19 + (long)(int)uVar4 * 8 + 0x20);
            *plVar20 = lVar18;
            thunk_FUN_02bb0e9c(plVar20,lVar18);
          }
          else {
            FUN_037a6538(lVar16,lVar18,
                         *(undefined8 *)(*(long *)(*(long *)(lVar21 + 0x20) + 0xc0) + 0x70));
          }
          if (lVar24 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cac4();
          }
          FUN_045e10b8(lVar24,uVar14,lVar18,*(undefined8 *)puVar6);
          lVar18 = *(long *)(param_1 + 0x1c8);
          if (lVar18 == 0) {
LAB_05d535ac:
                    /* WARNING: Subroutine does not return */
            FUN_02b3cac4();
          }
          lVar16 = *(long *)(lVar18 + 0x10);
          lVar19 = *(long *)puVar5;
          *(int *)(lVar18 + 0x1c) = *(int *)(lVar18 + 0x1c) + 1;
          if (lVar16 == 0) goto LAB_05d535ac;
          uVar4 = *(uint *)(lVar18 + 0x18);
          if (uVar4 < *(uint *)(lVar16 + 0x18)) {
            *(uint *)(lVar18 + 0x18) = uVar4 + 1;
            *(undefined4 *)(lVar16 + (long)(int)uVar4 * 4 + 0x20) = uVar14;
          }
          else {
            FUN_038597b0(lVar18,uVar14,
                         *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
          }
          lVar18 = *(long *)(param_1 + 0x1c0);
          if (lVar18 == 0) {
LAB_05d535b0:
                    /* WARNING: Subroutine does not return */
            FUN_02b3cac4();
          }
          lVar16 = *(long *)(lVar18 + 0x10);
          lVar19 = *(long *)puVar5;
          *(int *)(lVar18 + 0x1c) = *(int *)(lVar18 + 0x1c) + 1;
          if (lVar16 == 0) goto LAB_05d535b0;
          uVar4 = *(uint *)(lVar18 + 0x18);
          if (uVar4 < *(uint *)(lVar16 + 0x18)) {
            *(uint *)(lVar18 + 0x18) = uVar4 + 1;
            *(undefined4 *)(lVar16 + (long)(int)uVar4 * 4 + 0x20) = uVar14;
          }
          else {
            FUN_038597b0(lVar18,uVar14,
                         *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
          }
          uVar27 = uVar27 + 1;
        } while (local_70 != 0);
      }
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    lVar15 = FUN_02b3c908(*(undefined8 *)PTR_DAT_06323340,*(undefined4 *)(param_2 + 0x18));
    *param_3 = lVar15;
    thunk_FUN_02bb0e9c(param_3);
    uVar22 = *(ulong *)(param_2 + 0x18);
    if (0 < (int)uVar22) {
      lVar15 = *param_3;
      uVar17 = 0;
      do {
        if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        if (*(uint *)(lVar15 + 0x18) <= uVar17) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cacc();
        }
        uVar1 = uVar17 + 1;
        *(undefined4 *)(lVar15 + 0x20 + uVar17 * 4) = *(undefined4 *)(param_2 + 0x20 + uVar17 * 4);
        uVar17 = uVar1;
      } while ((uVar22 & 0xffffffff) != uVar1);
    }
  }
  uVar13 = 0;
  goto LAB_05d52990;
LAB_05d5320c:
  if (*(int *)(lVar18 + 0x18) <= iVar10) {
    if (*(char *)(param_1 + 0x14c) != '\0' && (uVar13 & 1) == 0) goto LAB_05d53428;
    if ((uVar13 & 1) != 0) goto LAB_05d53434;
    uVar25 = thunk_FUN_05c92238(param_1,0);
    uVar25 = FUN_04bffdac(*(undefined8 *)Method_System_Type_GetEnumNames__,uVar25,0);
    if (*(int *)(*(long *)PTR_DAT_06312d90 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    FUN_05c44914(uVar25,0);
    uVar13 = 0;
    goto LAB_05d53438;
  }
  lVar18 = FUN_037a6268(lVar18,iVar10,*(undefined8 *)puVar8);
  if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  uVar22 = FUN_05d6ffac(lVar18,0);
  if (lVar24 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4(uVar22,uVar22 & 0xffffffff);
  }
  uVar22 = FUN_045e2b94(lVar24,uVar22 & 0xffffffff,&local_88,*(undefined8 *)puVar6);
  if ((uVar22 & 1) == 0) {
    lVar16 = *(long *)(param_1 + 0x1d0);
    uVar14 = FUN_05d6ffac(lVar18,0);
    if (lVar16 == 0) {
UnityEngine_UIElements_UIR_GCHandlePool__Dispose:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    lVar18 = *(long *)(lVar16 + 0x10);
    lVar19 = *(long *)puVar5;
    *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
    if (lVar18 == 0) goto UnityEngine_UIElements_UIR_GCHandlePool__Dispose;
    uVar27 = *(uint *)(lVar16 + 0x18);
    if (uVar27 < *(uint *)(lVar18 + 0x18)) {
      *(uint *)(lVar16 + 0x18) = uVar27 + 1;
      *(undefined4 *)(lVar18 + (long)(int)uVar27 * 4 + 0x20) = uVar14;
    }
    else {
      FUN_038597b0(lVar16,uVar14,*(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70))
      ;
    }
  }
  else {
    FUN_05d6ffb4(lVar18,local_88,0);
    FUN_05d6ffbc(lVar18,param_1,0);
    lVar16 = *(long *)(param_1 + 0x128);
    if (lVar16 == 0) {
LAB_05d53598:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    lVar19 = *(long *)(lVar16 + 0x10);
    lVar21 = *(long *)Method_System_Type_GetConstructor__;
    *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
    if (lVar19 == 0) goto LAB_05d53598;
    uVar27 = *(uint *)(lVar16 + 0x18);
    if (uVar27 < *(uint *)(lVar19 + 0x18)) {
      *(uint *)(lVar16 + 0x18) = uVar27 + 1;
      plVar20 = (long *)(lVar19 + (long)(int)uVar27 * 8 + 0x20);
      *plVar20 = lVar18;
      thunk_FUN_02bb0e9c(plVar20,lVar18);
    }
    else {
      FUN_037a6538(lVar16,lVar18,*(undefined8 *)(*(long *)(*(long *)(lVar21 + 0x20) + 0xc0) + 0x70))
      ;
    }
    uVar22 = FUN_05d6ffcc(lVar18,0);
    if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4(uVar22,uVar22 & 0xffffffff);
    }
    FUN_045e10b8(lVar15,uVar22 & 0xffffffff,lVar18,*(undefined8 *)puVar7);
    if (*(long *)(param_1 + 0x1e0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    FUN_037a7c9c(*(long *)(param_1 + 0x1e0),iVar10,*(undefined8 *)puVar9);
    iVar10 = iVar10 + -1;
  }
  lVar18 = *(long *)(param_1 + 0x1e0);
  iVar10 = iVar10 + 1;
  if (lVar18 == 0) {
LAB_05d53394:
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  goto LAB_05d5320c;
LAB_05d53428:
  do {
    uVar22 = FUN_05d53888(param_1);
  } while ((uVar22 & 1) == 0);
LAB_05d53434:
  uVar13 = 1;
LAB_05d53438:
  if ((param_4 & 1) != 0) {
    FUN_05d53d58(param_1);
  }
  if (*(long *)(param_1 + 0x1e0) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  FUN_037a6fdc(&local_c8,*(long *)(param_1 + 0x1e0),
               *(undefined8 *)
                Method_Meta_XR_ImmersiveDebugger_Manager_TweakManager_ProcessTypeFromHierarchy__);
  puVar6 = Method_Oculus_Interaction_Locomotion_TurnerEventBroadcaster_HandlePostprocessed__;
  puStack_98 = puStack_c0;
  local_a0 = local_c8;
  local_90 = local_b8;
  local_c8 = 0;
  puStack_c0 = &local_a0;
  while (uVar22 = FUN_0472eaf4(&local_a0,*(undefined8 *)puVar6), (uVar22 & 1) != 0) {
    if (local_90 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    lVar15 = *(long *)(param_1 + 0x1f0);
    uVar14 = FUN_05d6ffcc(local_90,0);
    if (lVar15 == 0) {
LAB_05d53584:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    lVar24 = *(long *)(lVar15 + 0x10);
    lVar18 = *(long *)puVar5;
    *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
    if (lVar24 == 0) goto LAB_05d53584;
    uVar27 = *(uint *)(lVar15 + 0x18);
    if (uVar27 < *(uint *)(lVar24 + 0x18)) {
      *(uint *)(lVar15 + 0x18) = uVar27 + 1;
      *(undefined4 *)(lVar24 + (long)(int)uVar27 * 4 + 0x20) = uVar14;
    }
    else {
      FUN_038597b0(lVar15,uVar14,*(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70))
      ;
    }
  }
  FUN_0472eaf0(&local_a0,
               *(undefined8 *)
                Method_System_Runtime_CompilerServices_TupleElementNamesAttribute__ctor__);
  *param_3 = 0;
  thunk_FUN_02bb0e9c(param_3,0);
  lVar15 = *(long *)(param_1 + 0x1f0);
  if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  if (0 < *(int *)(lVar15 + 0x18)) {
    lVar15 = FUN_0385b1fc(lVar15,*(undefined8 *)
                                  Method_System_Collections_Generic_List<Vector2>_get_Count__);
    *param_3 = lVar15;
    thunk_FUN_02bb0e9c(param_3);
  }
  uVar13 = uVar13 & (uVar23 ^ 1);
LAB_05d52990:
  if (*local_a8 != 0) {
    FUN_05c36cb8(*local_a8,0);
  }
  if (local_b0 == 0) {
    return uVar13;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cabc();
}


