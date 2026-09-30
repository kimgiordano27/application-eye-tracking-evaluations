/*
FUNCTION_NAME: FUN_05d52dc0
ENTRY_POINT: 05d52dc0
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_3;paired_field_refs_with_structure_only;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x05d53624) */
/* WARNING: Removing unreachable block (ram,0x05d5352c) */
/* WARNING: Removing unreachable block (ram,0x05d5298c) */

undefined4 FUN_05d52dc0(void)

{
  undefined8 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long unaff_x23;
  undefined8 unaff_x24;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 *unaff_x26;
  undefined8 *puVar19;
  uint uVar20;
  int unaff_w28;
  undefined8 uVar21;
  ulong in_stack_00000018;
  undefined8 *in_stack_00000020;
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
  undefined8 in_stack_00000078;
  long in_stack_00000080;
  
  puVar19 = unaff_x26;
LAB_05d52dc4:
  in_stack_00000078._4_4_ = in_stack_00000078._4_4_ + 1;
  if (in_stack_00000078._4_4_ < unaff_w28) {
    iVar8 = FUN_05d6f85c();
    if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    uVar13 = FUN_045e12ac();
    if ((uVar13 & 1) == 0) {
      if (*(int *)(*unaff_x21 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      iVar7 = FUN_05d3efa0(iVar8,0);
      if (iVar7 != 0) {
LAB_05d52b48:
        lVar14 = thunk_FUN_02b79644(*(undefined8 *)
                                     Method_DG_Tweening_TweenSettingsExtensions_SetTarget<TweenerCore<int,_int,_NoOptions>>__
                                   );
        FUN_05d48a10(lVar14,iVar8,iVar7);
        if (unaff_x23 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        uVar13 = FUN_045e2b94();
        puVar19 = in_stack_00000020;
        if ((uVar13 & 1) == 0) {
          if (*(long *)(unaff_x20 + 0x1d8) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cac4();
          }
          uVar13 = FUN_04a79de0(*(long *)(unaff_x20 + 0x1d8),iVar7,
                                *(undefined8 *)
                                 Method_UnityEngine_Component_GetComponent<EmeraldSounds>__);
          if ((uVar13 & 1) != 0) {
            lVar12 = *(long *)(unaff_x20 + 0x1d0);
            if (lVar12 == 0) {
LAB_05d535d8:
                    /* WARNING: Subroutine does not return */
              FUN_02b3cac4();
            }
            lVar15 = *(long *)(lVar12 + 0x10);
            lVar16 = *(long *)PTR_DAT_0631f050;
            *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
            if (lVar15 == 0) goto LAB_05d535d8;
            uVar9 = *(uint *)(lVar12 + 0x18);
            if (uVar9 < *(uint *)(lVar15 + 0x18)) {
              *(uint *)(lVar12 + 0x18) = uVar9 + 1;
              *(int *)(lVar15 + (long)(int)uVar9 * 4 + 0x20) = iVar7;
            }
            else {
              FUN_038597b0(lVar12,iVar7,
                           *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
            }
          }
          if (*(long *)(unaff_x20 + 0x1e8) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cac4();
          }
          uVar13 = FUN_04a79de0(*(long *)(unaff_x20 + 0x1e8),iVar8,
                                *(undefined8 *)
                                 Method_UnityEngine_Component_GetComponent<EmeraldSounds>__);
          if ((uVar13 & 1) != 0) {
            lVar12 = *(long *)(unaff_x20 + 0x1e0);
            if (lVar12 != 0) {
              lVar15 = *(long *)(lVar12 + 0x10);
              lVar16 = *(long *)Method_System_Type_GetConstructor__;
              *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
              if (lVar15 != 0) {
                uVar9 = *(uint *)(lVar12 + 0x18);
                if (uVar9 < *(uint *)(lVar15 + 0x18)) {
                  *(uint *)(lVar12 + 0x18) = uVar9 + 1;
                  plVar11 = (long *)(lVar15 + (long)(int)uVar9 * 8 + 0x20);
                  *plVar11 = lVar14;
                  thunk_FUN_02bb0e9c(plVar11,lVar14);
                }
                else {
                  FUN_037a6538(lVar12,lVar14,
                               *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
                }
                goto LAB_05d52dc4;
              }
            }
                    /* WARNING: Subroutine does not return */
            FUN_02b3cac4();
          }
          goto LAB_05d52dc4;
        }
        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        FUN_05d6ffb4(lVar14,in_stack_00000070,0);
        FUN_05d6ffbc(lVar14);
        lVar12 = *(long *)(unaff_x20 + 0x128);
        if (lVar12 != 0) {
          lVar15 = *(long *)(lVar12 + 0x10);
          lVar16 = *(long *)Method_System_Type_GetConstructor__;
          *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
          if (lVar15 != 0) {
            uVar9 = *(uint *)(lVar12 + 0x18);
            if (uVar9 < *(uint *)(lVar15 + 0x18)) {
              *(uint *)(lVar12 + 0x18) = uVar9 + 1;
              plVar11 = (long *)(lVar15 + (long)(int)uVar9 * 8 + 0x20);
              *plVar11 = lVar14;
              thunk_FUN_02bb0e9c(plVar11,lVar14);
            }
            else {
              FUN_037a6538(lVar12,lVar14,
                           *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
            }
            FUN_045e10b8();
            goto LAB_05d52dc4;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      if (iVar8 == 0xa0) {
        if (*(int *)(*unaff_x21 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        iVar7 = FUN_05d3efa0(0x20,0);
LAB_05d52b40:
        if (iVar7 != 0) goto LAB_05d52b48;
      }
      else if ((iVar8 == 0xad) || (iVar8 == 0x2011)) {
        if (*(int *)(*unaff_x21 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        iVar7 = FUN_05d3efa0(0x2d,0);
        goto LAB_05d52b40;
      }
      lVar14 = *(long *)(unaff_x20 + 0x1f0);
      if (lVar14 != 0) {
        lVar12 = *(long *)(lVar14 + 0x10);
        lVar15 = *(long *)PTR_DAT_0631f050;
        *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
        if (lVar12 != 0) {
          uVar9 = *(uint *)(lVar14 + 0x18);
          if (uVar9 < *(uint *)(lVar12 + 0x18)) {
            *(uint *)(lVar14 + 0x18) = uVar9 + 1;
            *(int *)(lVar12 + (long)(int)uVar9 * 4 + 0x20) = iVar8;
          }
          else {
            FUN_038597b0(lVar14,iVar8,
                         *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
          }
          goto LAB_05d52dc4;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    goto LAB_05d52dc4;
  }
  if (*(long *)(unaff_x20 + 0x1d0) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  if (*(int *)(*(long *)(unaff_x20 + 0x1d0) + 0x18) == 0) {
    *puVar19 = unaff_x24;
    thunk_FUN_02bb0e9c(puVar19);
LAB_05d52990:
    if (*in_stack_00000048 != 0) {
      FUN_05c36cb8(*in_stack_00000048,0);
    }
    if (in_stack_00000040 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cabc();
    }
    return 0;
  }
  lVar14 = *(long *)(unaff_x20 + 0x140);
  if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  if (*(uint *)(lVar14 + 0x18) <= *(uint *)(unaff_x20 + 0x148)) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cacc();
  }
  plVar11 = *(long **)(lVar14 + (long)(int)*(uint *)(unaff_x20 + 0x148) * 8 + 0x20);
  if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  iVar8 = (**(code **)(*plVar11 + 0x188))(plVar11,*(undefined8 *)(*plVar11 + 400));
  if (1 < iVar8) {
    lVar14 = *(long *)(unaff_x20 + 0x140);
    if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    if (*(uint *)(lVar14 + 0x18) <= *(uint *)(unaff_x20 + 0x148)) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cacc();
    }
    plVar11 = *(long **)(lVar14 + (long)(int)*(uint *)(unaff_x20 + 0x148) * 8 + 0x20);
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    iVar8 = (**(code **)(*plVar11 + 0x1a8))(plVar11,*(undefined8 *)(*plVar11 + 0x1b0));
    if (1 < iVar8) goto LAB_05d52ed0;
  }
  lVar14 = *(long *)(unaff_x20 + 0x140);
  if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  if (*(uint *)(lVar14 + 0x18) <= *(uint *)(unaff_x20 + 0x148)) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cacc();
  }
  lVar14 = *(long *)(lVar14 + (long)(int)*(uint *)(unaff_x20 + 0x148) * 8 + 0x20);
  if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  FUN_05c6b590(lVar14,*(undefined4 *)(unaff_x20 + 0x150),*(undefined4 *)(unaff_x20 + 0x154),0);
  lVar14 = *(long *)(unaff_x20 + 0x140);
  if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  if (*(uint *)(lVar14 + 0x18) <= *(uint *)(unaff_x20 + 0x148)) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cacc();
  }
  uVar17 = *(undefined8 *)(lVar14 + (long)(int)*(uint *)(unaff_x20 + 0x148) * 8 + 0x20);
  if (*(int *)(*(long *)Method_UnityEngine_Rendering_CommandBuffer_IssuePluginEventAndData__ + 0xe4)
      == 0) {
    thunk_FUN_02b9ad44();
  }
  FUN_05d41e94(uVar17,0);
LAB_05d52ed0:
  lVar14 = *(long *)(unaff_x20 + 0x140);
  if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  if (*(uint *)(lVar14 + 0x18) <= *(uint *)(unaff_x20 + 0x148)) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cacc();
  }
  uVar17 = *(undefined8 *)(unaff_x20 + 0x160);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x168);
  uVar18 = *(undefined8 *)(unaff_x20 + 0x1d0);
  uVar10 = *(undefined4 *)(unaff_x20 + 0x158);
  uVar2 = *(undefined4 *)(unaff_x20 + 0x15c);
  uVar21 = *(undefined8 *)(lVar14 + (long)(int)*(uint *)(unaff_x20 + 0x148) * 8 + 0x20);
  if (*(int *)(*(long *)Method_UnityEngine_Rendering_CommandBuffer_IssuePluginEventAndData__ + 0xe4)
      == 0) {
    thunk_FUN_02b9ad44();
  }
  uVar9 = FUN_05d3faf8(uVar18,uVar10,0,uVar1,uVar17,uVar2,uVar21,&stack0x00000080);
  if (in_stack_00000080 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  uVar10 = *(undefined4 *)(in_stack_00000080 + 0x18);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x118);
  if (*(int *)(*(long *)
                Method_Oculus_Interaction_PoseDetection_TransformFeatureStateProvider_HandDataAvailable__
              + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  FUN_031d67bc(uVar17,uVar10,*(undefined8 *)Method_System_Type_FilterNameIgnoreCaseImpl__);
  FUN_031d6988();
  puVar6 = Method_System_Type_GetArrayRank__;
  FUN_031d6830(*(undefined8 *)(unaff_x20 + 0x1c8),uVar10,
               *(undefined8 *)Method_System_Type_GetArrayRank__);
  FUN_031d6830(*(undefined8 *)(unaff_x20 + 0x1c0),uVar10,*(undefined8 *)puVar6);
  puVar5 = Method_UnityEngine_Component_GetComponent<EmeraldSystem>__;
  puVar4 = PTR_DAT_0631f050;
  if (in_stack_00000080 != 0) {
    uVar20 = 0;
    do {
      if ((int)*(uint *)(in_stack_00000080 + 0x18) <= (int)uVar20) {
LAB_05d53164:
        lVar14 = *(long *)(unaff_x20 + 0x1d0);
        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        *(undefined4 *)(lVar14 + 0x18) = 0;
        *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
        if (*(long *)(unaff_x20 + 0x1e0) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        uVar10 = *(undefined4 *)(*(long *)(unaff_x20 + 0x1e0) + 0x18);
        if (*(int *)(*(long *)
                      Method_Oculus_Interaction_PoseDetection_TransformFeatureStateProvider_HandDataAvailable__
                    + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        FUN_031d6830(lVar14,uVar10,*(undefined8 *)puVar6);
        FUN_031d67bc(*(undefined8 *)(unaff_x20 + 0x128),uVar10,
                     *(undefined8 *)Method_System_Type_FilterAttributeImpl__);
        FUN_031d6988();
        puVar6 = Method_System_Type_GetEnumName__;
        puVar5 = Method_DG_Tweening_TweenSettingsExtensions_SetUpdate<Sequence>__;
        lVar14 = *(long *)(unaff_x20 + 0x1e0);
        if (lVar14 == 0) goto LAB_05d53394;
        iVar8 = 0;
        goto LAB_05d5320c;
      }
      if (*(uint *)(in_stack_00000080 + 0x18) <= uVar20) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cacc();
      }
      lVar14 = *(long *)(in_stack_00000080 + (long)(int)uVar20 * 8 + 0x20);
      if (lVar14 == 0) goto LAB_05d53164;
      uVar10 = FUN_05d3dd8c(lVar14,0);
      FUN_05d3ddf0(lVar14,*(undefined4 *)(unaff_x20 + 0x148),0);
      lVar12 = *(long *)(unaff_x20 + 0x118);
      if (lVar12 == 0) {
LAB_05d535a8:
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      lVar15 = *(long *)(lVar12 + 0x10);
      lVar16 = *(long *)puVar5;
      *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
      if (lVar15 == 0) goto LAB_05d535a8;
      uVar3 = *(uint *)(lVar12 + 0x18);
      if (uVar3 < *(uint *)(lVar15 + 0x18)) {
        *(uint *)(lVar12 + 0x18) = uVar3 + 1;
        plVar11 = (long *)(lVar15 + (long)(int)uVar3 * 8 + 0x20);
        *plVar11 = lVar14;
        thunk_FUN_02bb0e9c(plVar11,lVar14);
      }
      else {
        FUN_037a6538(lVar12,lVar14,
                     *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
      }
      if (unaff_x23 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      FUN_045e10b8();
      lVar14 = *(long *)(unaff_x20 + 0x1c8);
      if (lVar14 == 0) {
LAB_05d535ac:
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      lVar12 = *(long *)(lVar14 + 0x10);
      lVar15 = *(long *)puVar4;
      *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
      if (lVar12 == 0) goto LAB_05d535ac;
      uVar3 = *(uint *)(lVar14 + 0x18);
      if (uVar3 < *(uint *)(lVar12 + 0x18)) {
        *(uint *)(lVar14 + 0x18) = uVar3 + 1;
        *(undefined4 *)(lVar12 + (long)(int)uVar3 * 4 + 0x20) = uVar10;
      }
      else {
        FUN_038597b0(lVar14,uVar10,
                     *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
      }
      lVar14 = *(long *)(unaff_x20 + 0x1c0);
      if (lVar14 == 0) {
LAB_05d535b0:
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      lVar12 = *(long *)(lVar14 + 0x10);
      lVar15 = *(long *)puVar4;
      *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
      if (lVar12 == 0) goto LAB_05d535b0;
      uVar3 = *(uint *)(lVar14 + 0x18);
      if (uVar3 < *(uint *)(lVar12 + 0x18)) {
        *(uint *)(lVar14 + 0x18) = uVar3 + 1;
        *(undefined4 *)(lVar12 + (long)(int)uVar3 * 4 + 0x20) = uVar10;
      }
      else {
        FUN_038597b0(lVar14,uVar10,
                     *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
      }
      uVar20 = uVar20 + 1;
    } while (in_stack_00000080 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
LAB_05d5320c:
  if (iVar8 < *(int *)(lVar14 + 0x18)) {
    lVar14 = FUN_037a6268(lVar14,iVar8,*(undefined8 *)puVar5);
    if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    uVar13 = FUN_05d6ffac(lVar14,0);
    if (unaff_x23 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4(uVar13,uVar13 & 0xffffffff);
    }
    uVar13 = FUN_045e2b94();
    if ((uVar13 & 1) == 0) {
      lVar12 = *(long *)(unaff_x20 + 0x1d0);
      uVar10 = FUN_05d6ffac(lVar14,0);
      if (lVar12 == 0) {
UnityEngine_UIElements_UIR_GCHandlePool__Dispose:
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      lVar14 = *(long *)(lVar12 + 0x10);
      lVar15 = *(long *)puVar4;
      *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
      if (lVar14 == 0) goto UnityEngine_UIElements_UIR_GCHandlePool__Dispose;
      uVar20 = *(uint *)(lVar12 + 0x18);
      if (uVar20 < *(uint *)(lVar14 + 0x18)) {
        *(uint *)(lVar12 + 0x18) = uVar20 + 1;
        *(undefined4 *)(lVar14 + (long)(int)uVar20 * 4 + 0x20) = uVar10;
      }
      else {
        FUN_038597b0(lVar12,uVar10,
                     *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
      }
    }
    else {
      FUN_05d6ffb4(lVar14,in_stack_00000068,0);
      FUN_05d6ffbc(lVar14);
      lVar12 = *(long *)(unaff_x20 + 0x128);
      if (lVar12 == 0) {
LAB_05d53598:
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      lVar15 = *(long *)(lVar12 + 0x10);
      lVar16 = *(long *)Method_System_Type_GetConstructor__;
      *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
      if (lVar15 == 0) goto LAB_05d53598;
      uVar20 = *(uint *)(lVar12 + 0x18);
      if (uVar20 < *(uint *)(lVar15 + 0x18)) {
        *(uint *)(lVar12 + 0x18) = uVar20 + 1;
        plVar11 = (long *)(lVar15 + (long)(int)uVar20 * 8 + 0x20);
        *plVar11 = lVar14;
        thunk_FUN_02bb0e9c(plVar11,lVar14);
      }
      else {
        FUN_037a6538(lVar12,lVar14,
                     *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
      }
      uVar13 = FUN_05d6ffcc(lVar14,0);
      if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4(uVar13,uVar13 & 0xffffffff);
      }
      FUN_045e10b8();
      if (*(long *)(unaff_x20 + 0x1e0) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      FUN_037a7c9c(*(long *)(unaff_x20 + 0x1e0),iVar8,*(undefined8 *)puVar6);
      iVar8 = iVar8 + -1;
    }
    lVar14 = *(long *)(unaff_x20 + 0x1e0);
    iVar8 = iVar8 + 1;
    if (lVar14 == 0) {
LAB_05d53394:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    goto LAB_05d5320c;
  }
  if (*(char *)(unaff_x20 + 0x14c) == '\0' || (uVar9 & 1) != 0) {
    if ((uVar9 & 1) == 0) {
      uVar17 = thunk_FUN_05c92238();
      uVar17 = FUN_04bffdac(*(undefined8 *)Method_System_Type_GetEnumNames__,uVar17,0);
      if (*(int *)(*(long *)PTR_DAT_06312d90 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      FUN_05c44914(uVar17,0);
    }
  }
  else {
    do {
      uVar13 = FUN_05d53888();
    } while ((uVar13 & 1) == 0);
  }
  if ((in_stack_00000018 & 0x100000000) != 0) {
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
  while( true ) {
    uVar13 = FUN_0472eaf4(&stack0x00000050,*(undefined8 *)puVar5);
    if ((uVar13 & 1) == 0) {
      FUN_0472eaf0(&stack0x00000050,
                   *(undefined8 *)
                    Method_System_Runtime_CompilerServices_TupleElementNamesAttribute__ctor__);
      *in_stack_00000020 = 0;
      thunk_FUN_02bb0e9c(in_stack_00000020,0);
      lVar14 = *(long *)(unaff_x20 + 0x1f0);
      if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      if (0 < *(int *)(lVar14 + 0x18)) {
        uVar17 = FUN_0385b1fc(lVar14,*(undefined8 *)
                                      Method_System_Collections_Generic_List<Vector2>_get_Count__);
        *in_stack_00000020 = uVar17;
        thunk_FUN_02bb0e9c(in_stack_00000020);
      }
      goto LAB_05d52990;
    }
    if (in_stack_00000060 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    lVar14 = *(long *)(unaff_x20 + 0x1f0);
    uVar10 = FUN_05d6ffcc(in_stack_00000060,0);
    if (lVar14 == 0) break;
    lVar12 = *(long *)(lVar14 + 0x10);
    lVar15 = *(long *)puVar4;
    *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
    if (lVar12 == 0) break;
    uVar9 = *(uint *)(lVar14 + 0x18);
    if (uVar9 < *(uint *)(lVar12 + 0x18)) {
      *(uint *)(lVar14 + 0x18) = uVar9 + 1;
      *(undefined4 *)(lVar12 + (long)(int)uVar9 * 4 + 0x20) = uVar10;
    }
    else {
      FUN_038597b0(lVar14,uVar10,*(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70))
      ;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


