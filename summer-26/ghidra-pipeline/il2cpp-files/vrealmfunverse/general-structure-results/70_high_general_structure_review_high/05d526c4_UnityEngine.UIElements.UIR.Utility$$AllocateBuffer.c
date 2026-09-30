/*
FUNCTION_NAME: UnityEngine.UIElements.UIR.Utility$$AllocateBuffer
ENTRY_POINT: 05d526c4
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_12;paired_field_refs_with_structure_only;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;negative_framework_namespace_without_eye_use_flow
*/


/* WARNING: Removing unreachable block (ram,0x05d5352c) */
/* WARNING: Removing unreachable block (ram,0x05d53624) */

uint UnityEngine_UIElements_UIR_Utility__AllocateBuffer(long param_1)

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
  long unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  long *unaff_x22;
  long lVar24;
  long unaff_x24;
  undefined8 uVar25;
  undefined8 uVar26;
  long *unaff_x26;
  uint uVar27;
  undefined8 uVar28;
  uint uStack000000000000001c;
  undefined8 in_stack_00000028;
  undefined8 *in_stack_00000030;
  long in_stack_00000038;
  long in_stack_00000040;
  long *in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 *in_stack_00000058;
  long in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  int iStack000000000000007c;
  long in_stack_00000080;
  long in_stack_00000088;
  
  FUN_02b3c81c(*(undefined8 *)(param_1 + 0x180));
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
  *(undefined1 *)(unaff_x19 + 0x83f) = 1;
  lVar15 = *unaff_x22;
  in_stack_00000080 = 0;
  in_stack_00000088 = 0;
  iStack000000000000007c = 0;
  in_stack_00000068 = 0;
  in_stack_00000070 = 0;
  in_stack_00000050 = 0;
  in_stack_00000058 = (undefined8 *)0x0;
  in_stack_00000060 = 0;
  if (*(int *)(lVar15 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
    lVar15 = *unaff_x22;
  }
  lVar15 = *(long *)(*(long *)(lVar15 + 0xb8) + 0x30);
  if (lVar15 != 0) {
    FUN_05c36c30(lVar15,0);
  }
  in_stack_00000048 = &stack0x00000088;
  in_stack_00000040 = 0;
  in_stack_00000088 = lVar15;
  if (((unaff_x24 == 0) || (*(long *)(unaff_x24 + 0x18) == 0)) || (*(int *)(unaff_x20 + 0xa8) == 0))
  {
    if (*(int *)(unaff_x20 + 0xa8) == 0) {
      uVar25 = thunk_FUN_05c92238();
      uVar25 = FUN_04c0a5c4(*(undefined8 *)Method_UnityEngine_Component_GetComponent<HeadBodyRig>__,
                            uVar25,*(undefined8 *)
                                    Method_UnityEngine_Component_GetComponent<HandPuppet>__,0);
      if (*(int *)(*(long *)PTR_DAT_06312d90 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      FUN_05c453b4(uVar25);
    }
    else {
      uVar25 = thunk_FUN_05c92238();
      uVar25 = FUN_04c0a5c4(*(undefined8 *)Method_UnityEngine_Component_GetComponent<HeadBodyRig>__,
                            uVar25,*(undefined8 *)
                                    Method_UnityEngine_Component_GetComponent<HandGrabbableHighlighter>__
                            ,0);
      if (*(int *)(*(long *)PTR_DAT_06312d90 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      FUN_05c453b4(uVar25);
    }
    *unaff_x26 = 0;
    thunk_FUN_02bb0e9c();
  }
  else {
    iVar10 = FUN_05d4f124();
    if (iVar10 == 0) {
      lVar15 = *(long *)(unaff_x20 + 0x130);
      if ((lVar15 == 0) || (lVar24 = *(long *)(unaff_x20 + 0x120), lVar24 == 0)) {
        FUN_05d4b4f4();
        lVar15 = *(long *)(unaff_x20 + 0x130);
        lVar24 = *(long *)(unaff_x20 + 0x120);
      }
      lVar18 = *(long *)(unaff_x20 + 0x1d0);
      if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      *(undefined4 *)(lVar18 + 0x18) = 0;
      *(int *)(lVar18 + 0x1c) = *(int *)(lVar18 + 0x1c) + 1;
      puVar5 = Method_System_Xml_Schema_Compiler_CompileBaseMemberTypes__;
      if (*(long *)(unaff_x20 + 0x1d8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      FUN_04a79244(*(long *)(unaff_x20 + 0x1d8),
                   *(undefined8 *)Method_System_Xml_Schema_Compiler_CompileBaseMemberTypes__);
      lVar18 = *(long *)(unaff_x20 + 0x1e0);
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
      if (*(long *)(unaff_x20 + 0x1e8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      FUN_04a79244(*(long *)(unaff_x20 + 0x1e8),*(undefined8 *)puVar5);
      lVar18 = *(long *)(unaff_x20 + 0x1f0);
      if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      uVar23 = 0;
      iStack000000000000007c = 0;
      *(undefined4 *)(lVar18 + 0x18) = 0;
      *(int *)(lVar18 + 0x1c) = *(int *)(lVar18 + 0x1c) + 1;
      puVar6 = 
      Method_DG_Tweening_TweenSettingsExtensions_SetTarget<TweenerCore<Quaternion,_Vector3,_QuaternionOptions>>__
      ;
      puVar5 = Method_UnityEngine_Rendering_CommandBuffer_IssuePluginEventAndData__;
      iVar10 = *(int *)(unaff_x24 + 0x18);
      uStack000000000000001c = unaff_w21;
      if (0 < iVar10) {
        do {
          iVar11 = FUN_05d6f85c();
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
              lVar18 = *(long *)(unaff_x20 + 0x1f0);
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
              uVar22 = FUN_045e2b94(lVar24,iVar12,&stack0x00000070,
                                    *(undefined8 *)
                                     Method_UnityEngine_Component_GetComponent<Graphic>__);
              if ((uVar22 & 1) == 0) {
                if (*(long *)(unaff_x20 + 0x1d8) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02b3cac4();
                }
                uVar22 = FUN_04a79de0(*(long *)(unaff_x20 + 0x1d8),iVar12,
                                      *(undefined8 *)
                                       Method_UnityEngine_Component_GetComponent<EmeraldSounds>__);
                if ((uVar22 & 1) != 0) {
                  lVar16 = *(long *)(unaff_x20 + 0x1d0);
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
                if (*(long *)(unaff_x20 + 0x1e8) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02b3cac4();
                }
                uVar22 = FUN_04a79de0(*(long *)(unaff_x20 + 0x1e8),iVar11,
                                      *(undefined8 *)
                                       Method_UnityEngine_Component_GetComponent<EmeraldSounds>__);
                if ((uVar22 & 1) != 0) {
                  lVar16 = *(long *)(unaff_x20 + 0x1e0);
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
                FUN_05d6ffb4(lVar18,in_stack_00000070,0);
                FUN_05d6ffbc(lVar18);
                lVar16 = *(long *)(unaff_x20 + 0x128);
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
          iStack000000000000007c = iStack000000000000007c + 1;
        } while (iStack000000000000007c < iVar10);
      }
      if (*(long *)(unaff_x20 + 0x1d0) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      if (*(int *)(*(long *)(unaff_x20 + 0x1d0) + 0x18) == 0) {
        *unaff_x26 = unaff_x24;
        thunk_FUN_02bb0e9c(unaff_x26);
        uVar13 = uVar23 ^ 1;
        goto LAB_05d52990;
      }
      lVar18 = *(long *)(unaff_x20 + 0x140);
      if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      if (*(uint *)(lVar18 + 0x18) <= *(uint *)(unaff_x20 + 0x148)) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cacc();
      }
      plVar20 = *(long **)(lVar18 + (long)(int)*(uint *)(unaff_x20 + 0x148) * 8 + 0x20);
      if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      iVar10 = (**(code **)(*plVar20 + 0x188))(plVar20,*(undefined8 *)(*plVar20 + 400));
      if (1 < iVar10) {
        lVar18 = *(long *)(unaff_x20 + 0x140);
        if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        if (*(uint *)(lVar18 + 0x18) <= *(uint *)(unaff_x20 + 0x148)) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cacc();
        }
        plVar20 = *(long **)(lVar18 + (long)(int)*(uint *)(unaff_x20 + 0x148) * 8 + 0x20);
        if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        iVar10 = (**(code **)(*plVar20 + 0x1a8))(plVar20,*(undefined8 *)(*plVar20 + 0x1b0));
        if (1 < iVar10) goto LAB_05d52ed0;
      }
      lVar18 = *(long *)(unaff_x20 + 0x140);
      if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      if (*(uint *)(lVar18 + 0x18) <= *(uint *)(unaff_x20 + 0x148)) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cacc();
      }
      lVar18 = *(long *)(lVar18 + (long)(int)*(uint *)(unaff_x20 + 0x148) * 8 + 0x20);
      if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      FUN_05c6b590(lVar18,*(undefined4 *)(unaff_x20 + 0x150),*(undefined4 *)(unaff_x20 + 0x154),0);
      lVar18 = *(long *)(unaff_x20 + 0x140);
      if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      if (*(uint *)(lVar18 + 0x18) <= *(uint *)(unaff_x20 + 0x148)) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cacc();
      }
      uVar25 = *(undefined8 *)(lVar18 + (long)(int)*(uint *)(unaff_x20 + 0x148) * 8 + 0x20);
      if (*(int *)(*(long *)Method_UnityEngine_Rendering_CommandBuffer_IssuePluginEventAndData__ +
                  0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      FUN_05d41e94(uVar25,0);
LAB_05d52ed0:
      lVar18 = *(long *)(unaff_x20 + 0x140);
      if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      if (*(uint *)(lVar18 + 0x18) <= *(uint *)(unaff_x20 + 0x148)) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cacc();
      }
      uVar25 = *(undefined8 *)(unaff_x20 + 0x160);
      uVar2 = *(undefined8 *)(unaff_x20 + 0x168);
      uVar26 = *(undefined8 *)(unaff_x20 + 0x1d0);
      uVar14 = *(undefined4 *)(unaff_x20 + 0x158);
      uVar3 = *(undefined4 *)(unaff_x20 + 0x15c);
      uVar28 = *(undefined8 *)(lVar18 + (long)(int)*(uint *)(unaff_x20 + 0x148) * 8 + 0x20);
      if (*(int *)(*(long *)Method_UnityEngine_Rendering_CommandBuffer_IssuePluginEventAndData__ +
                  0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar13 = FUN_05d3faf8(uVar26,uVar14,0,uVar2,uVar25,uVar3,uVar28,&stack0x00000080);
      if (in_stack_00000080 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      uVar14 = *(undefined4 *)(in_stack_00000080 + 0x18);
      uVar25 = *(undefined8 *)(unaff_x20 + 0x118);
      if (*(int *)(*(long *)
                    Method_Oculus_Interaction_PoseDetection_TransformFeatureStateProvider_HandDataAvailable__
                  + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      FUN_031d67bc(uVar25,uVar14,*(undefined8 *)Method_System_Type_FilterNameIgnoreCaseImpl__);
      FUN_031d6988(lVar24,uVar14,*(undefined8 *)Method_System_Type_FormatTypeName__);
      puVar8 = Method_System_Type_GetArrayRank__;
      FUN_031d6830(*(undefined8 *)(unaff_x20 + 0x1c8),uVar14,
                   *(undefined8 *)Method_System_Type_GetArrayRank__);
      FUN_031d6830(*(undefined8 *)(unaff_x20 + 0x1c0),uVar14,*(undefined8 *)puVar8);
      puVar7 = Method_UnityEngine_Component_GetComponent<EmeraldSystem>__;
      puVar6 = Method_System_Globalization_CompareInfo_IsSuffix__;
      puVar5 = PTR_DAT_0631f050;
      if (in_stack_00000080 != 0) {
        uVar27 = 0;
        do {
          if ((int)*(uint *)(in_stack_00000080 + 0x18) <= (int)uVar27) {
LAB_05d53164:
            lVar18 = *(long *)(unaff_x20 + 0x1d0);
            if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02b3cac4();
            }
            *(undefined4 *)(lVar18 + 0x18) = 0;
            *(int *)(lVar18 + 0x1c) = *(int *)(lVar18 + 0x1c) + 1;
            if (*(long *)(unaff_x20 + 0x1e0) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02b3cac4();
            }
            uVar14 = *(undefined4 *)(*(long *)(unaff_x20 + 0x1e0) + 0x18);
            if (*(int *)(*(long *)
                          Method_Oculus_Interaction_PoseDetection_TransformFeatureStateProvider_HandDataAvailable__
                        + 0xe4) == 0) {
              thunk_FUN_02b9ad44();
            }
            FUN_031d6830(lVar18,uVar14,*(undefined8 *)puVar8);
            FUN_031d67bc(*(undefined8 *)(unaff_x20 + 0x128),uVar14,
                         *(undefined8 *)Method_System_Type_FilterAttributeImpl__);
            FUN_031d6988(lVar15,uVar14,*(undefined8 *)Method_System_Type_FilterNameImpl__);
            puVar9 = Method_System_Type_GetEnumName__;
            puVar8 = Method_DG_Tweening_TweenSettingsExtensions_SetUpdate<Sequence>__;
            puVar7 = 
            Method_DG_Tweening_TweenSettingsExtensions_SetTarget<TweenerCore<Quaternion,_Quaternion,_NoOptions>>__
            ;
            puVar6 = Method_UnityEngine_Component_GetComponent<Graphic>__;
            lVar18 = *(long *)(unaff_x20 + 0x1e0);
            if (lVar18 == 0) goto LAB_05d53394;
            iVar10 = 0;
            goto LAB_05d5320c;
          }
          if (*(uint *)(in_stack_00000080 + 0x18) <= uVar27) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cacc();
          }
          lVar18 = *(long *)(in_stack_00000080 + (long)(int)uVar27 * 8 + 0x20);
          if (lVar18 == 0) goto LAB_05d53164;
          uVar14 = FUN_05d3dd8c(lVar18,0);
          FUN_05d3ddf0(lVar18,*(undefined4 *)(unaff_x20 + 0x148),0);
          lVar16 = *(long *)(unaff_x20 + 0x118);
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
          lVar18 = *(long *)(unaff_x20 + 0x1c8);
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
          lVar18 = *(long *)(unaff_x20 + 0x1c0);
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
        } while (in_stack_00000080 != 0);
      }
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    lVar15 = FUN_02b3c908(*(undefined8 *)PTR_DAT_06323340,*(undefined4 *)(unaff_x24 + 0x18));
    *unaff_x26 = lVar15;
    thunk_FUN_02bb0e9c();
    uVar22 = *(ulong *)(unaff_x24 + 0x18);
    if (0 < (int)uVar22) {
      lVar15 = *unaff_x26;
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
        *(undefined4 *)(lVar15 + 0x20 + uVar17 * 4) = *(undefined4 *)(unaff_x24 + 0x20 + uVar17 * 4)
        ;
        uVar17 = uVar1;
      } while ((uVar22 & 0xffffffff) != uVar1);
    }
  }
  uVar13 = 0;
  goto LAB_05d52990;
LAB_05d5320c:
  if (*(int *)(lVar18 + 0x18) <= iVar10) {
    if (*(char *)(unaff_x20 + 0x14c) != '\0' && (uVar13 & 1) == 0) goto LAB_05d53428;
    if ((uVar13 & 1) != 0) goto LAB_05d53434;
    uVar25 = thunk_FUN_05c92238();
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
  uVar22 = FUN_045e2b94(lVar24,uVar22 & 0xffffffff,&stack0x00000068,*(undefined8 *)puVar6);
  if ((uVar22 & 1) == 0) {
    lVar16 = *(long *)(unaff_x20 + 0x1d0);
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
    FUN_05d6ffb4(lVar18,in_stack_00000068,0);
    FUN_05d6ffbc(lVar18);
    lVar16 = *(long *)(unaff_x20 + 0x128);
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
    if (*(long *)(unaff_x20 + 0x1e0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    FUN_037a7c9c(*(long *)(unaff_x20 + 0x1e0),iVar10,*(undefined8 *)puVar9);
    iVar10 = iVar10 + -1;
  }
  lVar18 = *(long *)(unaff_x20 + 0x1e0);
  iVar10 = iVar10 + 1;
  if (lVar18 == 0) {
LAB_05d53394:
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  goto LAB_05d5320c;
LAB_05d53428:
  do {
    uVar22 = FUN_05d53888();
  } while ((uVar22 & 1) == 0);
LAB_05d53434:
  uVar13 = 1;
LAB_05d53438:
  if ((uStack000000000000001c & 1) != 0) {
    FUN_05d53d58();
  }
  if (*(long *)(unaff_x20 + 0x1e0) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  FUN_037a6fdc(&stack0x00000028,*(long *)(unaff_x20 + 0x1e0),
               *(undefined8 *)
                Method_Meta_XR_ImmersiveDebugger_Manager_TweakManager_ProcessTypeFromHierarchy__);
  puVar6 = Method_Oculus_Interaction_Locomotion_TurnerEventBroadcaster_HandlePostprocessed__;
  in_stack_00000058 = in_stack_00000030;
  in_stack_00000050 = in_stack_00000028;
  in_stack_00000060 = in_stack_00000038;
  in_stack_00000028 = 0;
  in_stack_00000030 = &stack0x00000050;
  while (uVar22 = FUN_0472eaf4(&stack0x00000050,*(undefined8 *)puVar6), (uVar22 & 1) != 0) {
    if (in_stack_00000060 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    lVar15 = *(long *)(unaff_x20 + 0x1f0);
    uVar14 = FUN_05d6ffcc(in_stack_00000060,0);
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
  FUN_0472eaf0(&stack0x00000050,
               *(undefined8 *)
                Method_System_Runtime_CompilerServices_TupleElementNamesAttribute__ctor__);
  *unaff_x26 = 0;
  thunk_FUN_02bb0e9c(unaff_x26,0);
  lVar15 = *(long *)(unaff_x20 + 0x1f0);
  if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  if (0 < *(int *)(lVar15 + 0x18)) {
    lVar15 = FUN_0385b1fc(lVar15,*(undefined8 *)
                                  Method_System_Collections_Generic_List<Vector2>_get_Count__);
    *unaff_x26 = lVar15;
    thunk_FUN_02bb0e9c(unaff_x26);
  }
  uVar13 = uVar13 & (uVar23 ^ 1);
LAB_05d52990:
  if (*in_stack_00000048 != 0) {
    FUN_05c36cb8(*in_stack_00000048,0);
  }
  if (in_stack_00000040 == 0) {
    return uVar13;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cabc();
}


