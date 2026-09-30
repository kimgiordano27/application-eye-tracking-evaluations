/*
FUNCTION_NAME: UnityEngine.UIElements.UIR.Utility$$SetPropertyBlock_Injected
ENTRY_POINT: 05d529e0
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_9;paired_field_refs_with_structure_only;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;negative_framework_namespace_without_eye_use_flow
*/


/* WARNING: Removing unreachable block (ram,0x05d5352c) */
/* WARNING: Removing unreachable block (ram,0x05d5298c) */
/* WARNING: Removing unreachable block (ram,0x05d53624) */

uint UnityEngine_UIElements_UIR_Utility__SetPropertyBlock_Injected(void)

{
  undefined8 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  undefined4 uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long *plVar18;
  long lVar19;
  uint uVar20;
  long unaff_x20;
  uint unaff_w21;
  long lVar21;
  long lVar22;
  long unaff_x24;
  undefined8 uVar23;
  undefined8 uVar24;
  long *unaff_x26;
  uint uVar25;
  undefined8 uVar26;
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
  
  FUN_05d4b4f4();
  lVar21 = *(long *)(unaff_x20 + 0x130);
  lVar22 = *(long *)(unaff_x20 + 0x120);
  lVar16 = *(long *)(unaff_x20 + 0x1d0);
  if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  *(undefined4 *)(lVar16 + 0x18) = 0;
  *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
  puVar4 = Method_System_Xml_Schema_Compiler_CompileBaseMemberTypes__;
  if (*(long *)(unaff_x20 + 0x1d8) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  FUN_04a79244(*(long *)(unaff_x20 + 0x1d8),
               *(undefined8 *)Method_System_Xml_Schema_Compiler_CompileBaseMemberTypes__);
  lVar16 = *(long *)(unaff_x20 + 0x1e0);
  if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  iVar11 = *(int *)(lVar16 + 0x18);
  *(undefined4 *)(lVar16 + 0x18) = 0;
  *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
  if (0 < iVar11) {
    FUN_04d9e084(*(undefined8 *)(lVar16 + 0x10),0,iVar11,0);
  }
  if (*(long *)(unaff_x20 + 0x1e8) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  FUN_04a79244(*(long *)(unaff_x20 + 0x1e8),*(undefined8 *)puVar4);
  lVar16 = *(long *)(unaff_x20 + 0x1f0);
  if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  uVar20 = 0;
  iStack000000000000007c = 0;
  *(undefined4 *)(lVar16 + 0x18) = 0;
  *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
  puVar5 = 
  Method_DG_Tweening_TweenSettingsExtensions_SetTarget<TweenerCore<Quaternion,_Vector3,_QuaternionOptions>>__
  ;
  puVar4 = Method_UnityEngine_Rendering_CommandBuffer_IssuePluginEventAndData__;
  iVar11 = *(int *)(unaff_x24 + 0x18);
  uStack000000000000001c = unaff_w21;
  if (0 < iVar11) {
    do {
      iVar9 = FUN_05d6f85c();
      if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      uVar14 = FUN_045e12ac(lVar21,iVar9,*(undefined8 *)puVar5);
      if ((uVar14 & 1) == 0) {
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        iVar10 = FUN_05d3efa0(iVar9,0);
        if (iVar10 == 0) {
          if (iVar9 == 0xa0) {
            if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
              thunk_FUN_02b9ad44();
            }
            iVar10 = FUN_05d3efa0(0x20,0);
LAB_05d52b40:
            if (iVar10 != 0) goto LAB_05d52b48;
          }
          else if ((iVar9 == 0xad) || (iVar9 == 0x2011)) {
            if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
              thunk_FUN_02b9ad44();
            }
            iVar10 = FUN_05d3efa0(0x2d,0);
            goto LAB_05d52b40;
          }
          lVar16 = *(long *)(unaff_x20 + 0x1f0);
          if (lVar16 == 0) {
LAB_05d535e4:
                    /* WARNING: Subroutine does not return */
            FUN_02b3cac4();
          }
          lVar15 = *(long *)(lVar16 + 0x10);
          lVar17 = *(long *)PTR_DAT_0631f050;
          *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
          if (lVar15 == 0) goto LAB_05d535e4;
          uVar20 = *(uint *)(lVar16 + 0x18);
          if (uVar20 < *(uint *)(lVar15 + 0x18)) {
            *(uint *)(lVar16 + 0x18) = uVar20 + 1;
            *(int *)(lVar15 + (long)(int)uVar20 * 4 + 0x20) = iVar9;
          }
          else {
            FUN_038597b0(lVar16,iVar9,
                         *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
          }
          uVar20 = 1;
        }
        else {
LAB_05d52b48:
          lVar16 = thunk_FUN_02b79644(*(undefined8 *)
                                       Method_DG_Tweening_TweenSettingsExtensions_SetTarget<TweenerCore<int,_int,_NoOptions>>__
                                     );
          FUN_05d48a10(lVar16,iVar9,iVar10);
          if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cac4();
          }
          uVar14 = FUN_045e2b94(lVar22,iVar10,&stack0x00000070,
                                *(undefined8 *)Method_UnityEngine_Component_GetComponent<Graphic>__)
          ;
          if ((uVar14 & 1) == 0) {
            if (*(long *)(unaff_x20 + 0x1d8) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02b3cac4();
            }
            uVar14 = FUN_04a79de0(*(long *)(unaff_x20 + 0x1d8),iVar10,
                                  *(undefined8 *)
                                   Method_UnityEngine_Component_GetComponent<EmeraldSounds>__);
            if ((uVar14 & 1) != 0) {
              lVar15 = *(long *)(unaff_x20 + 0x1d0);
              if (lVar15 == 0) {
LAB_05d535d8:
                    /* WARNING: Subroutine does not return */
                FUN_02b3cac4();
              }
              lVar17 = *(long *)(lVar15 + 0x10);
              lVar19 = *(long *)PTR_DAT_0631f050;
              *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
              if (lVar17 == 0) goto LAB_05d535d8;
              uVar12 = *(uint *)(lVar15 + 0x18);
              if (uVar12 < *(uint *)(lVar17 + 0x18)) {
                *(uint *)(lVar15 + 0x18) = uVar12 + 1;
                *(int *)(lVar17 + (long)(int)uVar12 * 4 + 0x20) = iVar10;
              }
              else {
                FUN_038597b0(lVar15,iVar10,
                             *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
              }
            }
            if (*(long *)(unaff_x20 + 0x1e8) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02b3cac4();
            }
            uVar14 = FUN_04a79de0(*(long *)(unaff_x20 + 0x1e8),iVar9,
                                  *(undefined8 *)
                                   Method_UnityEngine_Component_GetComponent<EmeraldSounds>__);
            if ((uVar14 & 1) != 0) {
              lVar15 = *(long *)(unaff_x20 + 0x1e0);
              if (lVar15 == 0) {
LAB_05d535d0:
                    /* WARNING: Subroutine does not return */
                FUN_02b3cac4();
              }
              lVar17 = *(long *)(lVar15 + 0x10);
              lVar19 = *(long *)Method_System_Type_GetConstructor__;
              *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
              if (lVar17 == 0) goto LAB_05d535d0;
              uVar12 = *(uint *)(lVar15 + 0x18);
              if (uVar12 < *(uint *)(lVar17 + 0x18)) {
                *(uint *)(lVar15 + 0x18) = uVar12 + 1;
                plVar18 = (long *)(lVar17 + (long)(int)uVar12 * 8 + 0x20);
                *plVar18 = lVar16;
                thunk_FUN_02bb0e9c(plVar18,lVar16);
              }
              else {
                FUN_037a6538(lVar15,lVar16,
                             *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
              }
            }
          }
          else {
            if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02b3cac4();
            }
            FUN_05d6ffb4(lVar16,in_stack_00000070,0);
            FUN_05d6ffbc(lVar16);
            lVar15 = *(long *)(unaff_x20 + 0x128);
            if (lVar15 == 0) {
LAB_05d535cc:
                    /* WARNING: Subroutine does not return */
              FUN_02b3cac4();
            }
            lVar17 = *(long *)(lVar15 + 0x10);
            lVar19 = *(long *)Method_System_Type_GetConstructor__;
            *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
            if (lVar17 == 0) goto LAB_05d535cc;
            uVar12 = *(uint *)(lVar15 + 0x18);
            if (uVar12 < *(uint *)(lVar17 + 0x18)) {
              *(uint *)(lVar15 + 0x18) = uVar12 + 1;
              plVar18 = (long *)(lVar17 + (long)(int)uVar12 * 8 + 0x20);
              *plVar18 = lVar16;
              thunk_FUN_02bb0e9c(plVar18,lVar16);
            }
            else {
              FUN_037a6538(lVar15,lVar16,
                           *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
            }
            FUN_045e10b8(lVar21,iVar9,lVar16,
                         *(undefined8 *)
                          Method_DG_Tweening_TweenSettingsExtensions_SetTarget<TweenerCore<Quaternion,_Quaternion,_NoOptions>>__
                        );
          }
        }
      }
      iStack000000000000007c = iStack000000000000007c + 1;
    } while (iStack000000000000007c < iVar11);
  }
  if (*(long *)(unaff_x20 + 0x1d0) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  if (*(int *)(*(long *)(unaff_x20 + 0x1d0) + 0x18) == 0) {
    *unaff_x26 = unaff_x24;
    thunk_FUN_02bb0e9c(unaff_x26);
    uVar12 = uVar20 ^ 1;
    goto LAB_05d52990;
  }
  lVar16 = *(long *)(unaff_x20 + 0x140);
  if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  if (*(uint *)(lVar16 + 0x18) <= *(uint *)(unaff_x20 + 0x148)) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cacc();
  }
  plVar18 = *(long **)(lVar16 + (long)(int)*(uint *)(unaff_x20 + 0x148) * 8 + 0x20);
  if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  iVar11 = (**(code **)(*plVar18 + 0x188))(plVar18,*(undefined8 *)(*plVar18 + 400));
  if (1 < iVar11) {
    lVar16 = *(long *)(unaff_x20 + 0x140);
    if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    if (*(uint *)(lVar16 + 0x18) <= *(uint *)(unaff_x20 + 0x148)) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cacc();
    }
    plVar18 = *(long **)(lVar16 + (long)(int)*(uint *)(unaff_x20 + 0x148) * 8 + 0x20);
    if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    iVar11 = (**(code **)(*plVar18 + 0x1a8))(plVar18,*(undefined8 *)(*plVar18 + 0x1b0));
    if (1 < iVar11) goto LAB_05d52ed0;
  }
  lVar16 = *(long *)(unaff_x20 + 0x140);
  if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  if (*(uint *)(lVar16 + 0x18) <= *(uint *)(unaff_x20 + 0x148)) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cacc();
  }
  lVar16 = *(long *)(lVar16 + (long)(int)*(uint *)(unaff_x20 + 0x148) * 8 + 0x20);
  if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  FUN_05c6b590(lVar16,*(undefined4 *)(unaff_x20 + 0x150),*(undefined4 *)(unaff_x20 + 0x154),0);
  lVar16 = *(long *)(unaff_x20 + 0x140);
  if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  if (*(uint *)(lVar16 + 0x18) <= *(uint *)(unaff_x20 + 0x148)) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cacc();
  }
  uVar23 = *(undefined8 *)(lVar16 + (long)(int)*(uint *)(unaff_x20 + 0x148) * 8 + 0x20);
  if (*(int *)(*(long *)Method_UnityEngine_Rendering_CommandBuffer_IssuePluginEventAndData__ + 0xe4)
      == 0) {
    thunk_FUN_02b9ad44();
  }
  FUN_05d41e94(uVar23,0);
LAB_05d52ed0:
  lVar16 = *(long *)(unaff_x20 + 0x140);
  if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  if (*(uint *)(lVar16 + 0x18) <= *(uint *)(unaff_x20 + 0x148)) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cacc();
  }
  uVar23 = *(undefined8 *)(unaff_x20 + 0x160);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x168);
  uVar24 = *(undefined8 *)(unaff_x20 + 0x1d0);
  uVar13 = *(undefined4 *)(unaff_x20 + 0x158);
  uVar2 = *(undefined4 *)(unaff_x20 + 0x15c);
  uVar26 = *(undefined8 *)(lVar16 + (long)(int)*(uint *)(unaff_x20 + 0x148) * 8 + 0x20);
  if (*(int *)(*(long *)Method_UnityEngine_Rendering_CommandBuffer_IssuePluginEventAndData__ + 0xe4)
      == 0) {
    thunk_FUN_02b9ad44();
  }
  uVar12 = FUN_05d3faf8(uVar24,uVar13,0,uVar1,uVar23,uVar2,uVar26,&stack0x00000080);
  if (in_stack_00000080 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  uVar13 = *(undefined4 *)(in_stack_00000080 + 0x18);
  uVar23 = *(undefined8 *)(unaff_x20 + 0x118);
  if (*(int *)(*(long *)
                Method_Oculus_Interaction_PoseDetection_TransformFeatureStateProvider_HandDataAvailable__
              + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  FUN_031d67bc(uVar23,uVar13,*(undefined8 *)Method_System_Type_FilterNameIgnoreCaseImpl__);
  FUN_031d6988(lVar22,uVar13,*(undefined8 *)Method_System_Type_FormatTypeName__);
  puVar7 = Method_System_Type_GetArrayRank__;
  FUN_031d6830(*(undefined8 *)(unaff_x20 + 0x1c8),uVar13,
               *(undefined8 *)Method_System_Type_GetArrayRank__);
  FUN_031d6830(*(undefined8 *)(unaff_x20 + 0x1c0),uVar13,*(undefined8 *)puVar7);
  puVar6 = Method_UnityEngine_Component_GetComponent<EmeraldSystem>__;
  puVar5 = Method_System_Globalization_CompareInfo_IsSuffix__;
  puVar4 = PTR_DAT_0631f050;
  if (in_stack_00000080 != 0) {
    uVar25 = 0;
    do {
      if ((int)*(uint *)(in_stack_00000080 + 0x18) <= (int)uVar25) {
LAB_05d53164:
        lVar16 = *(long *)(unaff_x20 + 0x1d0);
        if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        *(undefined4 *)(lVar16 + 0x18) = 0;
        *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
        if (*(long *)(unaff_x20 + 0x1e0) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        uVar13 = *(undefined4 *)(*(long *)(unaff_x20 + 0x1e0) + 0x18);
        if (*(int *)(*(long *)
                      Method_Oculus_Interaction_PoseDetection_TransformFeatureStateProvider_HandDataAvailable__
                    + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        FUN_031d6830(lVar16,uVar13,*(undefined8 *)puVar7);
        FUN_031d67bc(*(undefined8 *)(unaff_x20 + 0x128),uVar13,
                     *(undefined8 *)Method_System_Type_FilterAttributeImpl__);
        FUN_031d6988(lVar21,uVar13,*(undefined8 *)Method_System_Type_FilterNameImpl__);
        puVar8 = Method_System_Type_GetEnumName__;
        puVar7 = Method_DG_Tweening_TweenSettingsExtensions_SetUpdate<Sequence>__;
        puVar6 = 
        Method_DG_Tweening_TweenSettingsExtensions_SetTarget<TweenerCore<Quaternion,_Quaternion,_NoOptions>>__
        ;
        puVar5 = Method_UnityEngine_Component_GetComponent<Graphic>__;
        lVar16 = *(long *)(unaff_x20 + 0x1e0);
        if (lVar16 == 0) goto LAB_05d53394;
        iVar11 = 0;
        goto LAB_05d5320c;
      }
      if (*(uint *)(in_stack_00000080 + 0x18) <= uVar25) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cacc();
      }
      lVar16 = *(long *)(in_stack_00000080 + (long)(int)uVar25 * 8 + 0x20);
      if (lVar16 == 0) goto LAB_05d53164;
      uVar13 = FUN_05d3dd8c(lVar16,0);
      FUN_05d3ddf0(lVar16,*(undefined4 *)(unaff_x20 + 0x148),0);
      lVar15 = *(long *)(unaff_x20 + 0x118);
      if (lVar15 == 0) {
LAB_05d535a8:
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      lVar17 = *(long *)(lVar15 + 0x10);
      lVar19 = *(long *)puVar6;
      *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
      if (lVar17 == 0) goto LAB_05d535a8;
      uVar3 = *(uint *)(lVar15 + 0x18);
      if (uVar3 < *(uint *)(lVar17 + 0x18)) {
        *(uint *)(lVar15 + 0x18) = uVar3 + 1;
        plVar18 = (long *)(lVar17 + (long)(int)uVar3 * 8 + 0x20);
        *plVar18 = lVar16;
        thunk_FUN_02bb0e9c(plVar18,lVar16);
      }
      else {
        FUN_037a6538(lVar15,lVar16,
                     *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
      }
      if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      FUN_045e10b8(lVar22,uVar13,lVar16,*(undefined8 *)puVar5);
      lVar16 = *(long *)(unaff_x20 + 0x1c8);
      if (lVar16 == 0) {
LAB_05d535ac:
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      lVar15 = *(long *)(lVar16 + 0x10);
      lVar17 = *(long *)puVar4;
      *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
      if (lVar15 == 0) goto LAB_05d535ac;
      uVar3 = *(uint *)(lVar16 + 0x18);
      if (uVar3 < *(uint *)(lVar15 + 0x18)) {
        *(uint *)(lVar16 + 0x18) = uVar3 + 1;
        *(undefined4 *)(lVar15 + (long)(int)uVar3 * 4 + 0x20) = uVar13;
      }
      else {
        FUN_038597b0(lVar16,uVar13,
                     *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
      }
      lVar16 = *(long *)(unaff_x20 + 0x1c0);
      if (lVar16 == 0) {
LAB_05d535b0:
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      lVar15 = *(long *)(lVar16 + 0x10);
      lVar17 = *(long *)puVar4;
      *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
      if (lVar15 == 0) goto LAB_05d535b0;
      uVar3 = *(uint *)(lVar16 + 0x18);
      if (uVar3 < *(uint *)(lVar15 + 0x18)) {
        *(uint *)(lVar16 + 0x18) = uVar3 + 1;
        *(undefined4 *)(lVar15 + (long)(int)uVar3 * 4 + 0x20) = uVar13;
      }
      else {
        FUN_038597b0(lVar16,uVar13,
                     *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
      }
      uVar25 = uVar25 + 1;
    } while (in_stack_00000080 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
LAB_05d5320c:
  if (*(int *)(lVar16 + 0x18) <= iVar11) {
    if (*(char *)(unaff_x20 + 0x14c) != '\0' && (uVar12 & 1) == 0) goto LAB_05d53428;
    if ((uVar12 & 1) != 0) goto LAB_05d53434;
    uVar23 = thunk_FUN_05c92238();
    uVar23 = FUN_04bffdac(*(undefined8 *)Method_System_Type_GetEnumNames__,uVar23,0);
    if (*(int *)(*(long *)PTR_DAT_06312d90 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    FUN_05c44914(uVar23,0);
    uVar12 = 0;
    goto LAB_05d53438;
  }
  lVar16 = FUN_037a6268(lVar16,iVar11,*(undefined8 *)puVar7);
  if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  uVar14 = FUN_05d6ffac(lVar16,0);
  if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4(uVar14,uVar14 & 0xffffffff);
  }
  uVar14 = FUN_045e2b94(lVar22,uVar14 & 0xffffffff,&stack0x00000068,*(undefined8 *)puVar5);
  if ((uVar14 & 1) == 0) {
    lVar15 = *(long *)(unaff_x20 + 0x1d0);
    uVar13 = FUN_05d6ffac(lVar16,0);
    if (lVar15 == 0) {
UnityEngine_UIElements_UIR_GCHandlePool__Dispose:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    lVar16 = *(long *)(lVar15 + 0x10);
    lVar17 = *(long *)puVar4;
    *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
    if (lVar16 == 0) goto UnityEngine_UIElements_UIR_GCHandlePool__Dispose;
    uVar25 = *(uint *)(lVar15 + 0x18);
    if (uVar25 < *(uint *)(lVar16 + 0x18)) {
      *(uint *)(lVar15 + 0x18) = uVar25 + 1;
      *(undefined4 *)(lVar16 + (long)(int)uVar25 * 4 + 0x20) = uVar13;
    }
    else {
      FUN_038597b0(lVar15,uVar13,*(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70))
      ;
    }
  }
  else {
    FUN_05d6ffb4(lVar16,in_stack_00000068,0);
    FUN_05d6ffbc(lVar16);
    lVar15 = *(long *)(unaff_x20 + 0x128);
    if (lVar15 == 0) {
LAB_05d53598:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    lVar17 = *(long *)(lVar15 + 0x10);
    lVar19 = *(long *)Method_System_Type_GetConstructor__;
    *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
    if (lVar17 == 0) goto LAB_05d53598;
    uVar25 = *(uint *)(lVar15 + 0x18);
    if (uVar25 < *(uint *)(lVar17 + 0x18)) {
      *(uint *)(lVar15 + 0x18) = uVar25 + 1;
      plVar18 = (long *)(lVar17 + (long)(int)uVar25 * 8 + 0x20);
      *plVar18 = lVar16;
      thunk_FUN_02bb0e9c(plVar18,lVar16);
    }
    else {
      FUN_037a6538(lVar15,lVar16,*(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70))
      ;
    }
    uVar14 = FUN_05d6ffcc(lVar16,0);
    if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4(uVar14,uVar14 & 0xffffffff);
    }
    FUN_045e10b8(lVar21,uVar14 & 0xffffffff,lVar16,*(undefined8 *)puVar6);
    if (*(long *)(unaff_x20 + 0x1e0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    FUN_037a7c9c(*(long *)(unaff_x20 + 0x1e0),iVar11,*(undefined8 *)puVar8);
    iVar11 = iVar11 + -1;
  }
  lVar16 = *(long *)(unaff_x20 + 0x1e0);
  iVar11 = iVar11 + 1;
  if (lVar16 == 0) {
LAB_05d53394:
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  goto LAB_05d5320c;
LAB_05d53428:
  do {
    uVar14 = FUN_05d53888();
  } while ((uVar14 & 1) == 0);
LAB_05d53434:
  uVar12 = 1;
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
  puVar5 = Method_Oculus_Interaction_Locomotion_TurnerEventBroadcaster_HandlePostprocessed__;
  in_stack_00000058 = in_stack_00000030;
  in_stack_00000050 = in_stack_00000028;
  in_stack_00000060 = in_stack_00000038;
  in_stack_00000028 = 0;
  in_stack_00000030 = &stack0x00000050;
  while (uVar14 = FUN_0472eaf4(&stack0x00000050,*(undefined8 *)puVar5), (uVar14 & 1) != 0) {
    if (in_stack_00000060 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    lVar16 = *(long *)(unaff_x20 + 0x1f0);
    uVar13 = FUN_05d6ffcc(in_stack_00000060,0);
    if (lVar16 == 0) {
LAB_05d53584:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    lVar21 = *(long *)(lVar16 + 0x10);
    lVar22 = *(long *)puVar4;
    *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
    if (lVar21 == 0) goto LAB_05d53584;
    uVar25 = *(uint *)(lVar16 + 0x18);
    if (uVar25 < *(uint *)(lVar21 + 0x18)) {
      *(uint *)(lVar16 + 0x18) = uVar25 + 1;
      *(undefined4 *)(lVar21 + (long)(int)uVar25 * 4 + 0x20) = uVar13;
    }
    else {
      FUN_038597b0(lVar16,uVar13,*(undefined8 *)(*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0x70))
      ;
    }
  }
  FUN_0472eaf0(&stack0x00000050,
               *(undefined8 *)
                Method_System_Runtime_CompilerServices_TupleElementNamesAttribute__ctor__);
  *unaff_x26 = 0;
  thunk_FUN_02bb0e9c(unaff_x26,0);
  lVar16 = *(long *)(unaff_x20 + 0x1f0);
  if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  if (0 < *(int *)(lVar16 + 0x18)) {
    lVar16 = FUN_0385b1fc(lVar16,*(undefined8 *)
                                  Method_System_Collections_Generic_List<Vector2>_get_Count__);
    *unaff_x26 = lVar16;
    thunk_FUN_02bb0e9c(unaff_x26);
  }
  uVar12 = uVar12 & (uVar20 ^ 1);
LAB_05d52990:
  if (*in_stack_00000048 != 0) {
    FUN_05c36cb8(*in_stack_00000048,0);
  }
  if (in_stack_00000040 == 0) {
    return uVar12;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cabc();
}


