/*
FUNCTION_NAME: FUN_055593a4
ENTRY_POINT: 055593a4
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_21;telemetry_or_network_hits_13;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x0555a2a4) */
/* WARNING: Removing unreachable block (ram,0x05559e20) */
/* WARNING: Removing unreachable block (ram,0x0555a2fc) */
/* WARNING: Removing unreachable block (ram,0x0555a128) */
/* WARNING: Removing unreachable block (ram,0x0555a12c) */
/* WARNING: Removing unreachable block (ram,0x0555a280) */
/* WARNING: Removing unreachable block (ram,0x0555a43c) */
/* WARNING: Removing unreachable block (ram,0x05559c44) */
/* WARNING: Removing unreachable block (ram,0x05559c48) */
/* WARNING: Removing unreachable block (ram,0x0555a2f0) */
/* WARNING: Removing unreachable block (ram,0x05559d38) */

void FUN_055593a4(long param_1,undefined8 param_2,uint param_3)

{
  undefined4 uVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  undefined8 *puVar14;
  long *plVar15;
  long *plVar16;
  long lVar17;
  long lVar18;
  int *piVar19;
  undefined8 uVar20;
  long lVar21;
  undefined8 uVar22;
  long lVar23;
  long *local_d8;
  long **pplStack_d0;
  long *local_c8;
  long local_c0;
  undefined8 *local_b8;
  long *local_b0;
  long **pplStack_a8;
  long *local_a0;
  long local_90;
  long *local_88;
  long *local_80;
  long **pplStack_78;
  long *local_70;
  undefined8 local_68;
  
  puVar3 = PTR_DAT_067c9f00;
  if ((DAT_06bbf7de & 1) == 0) {
    FUN_02f08768(
                UnityEngine_XR_Interaction_Toolkit_Inputs_XRTransformStabilizer_StabilizePosition_00001216_PostfixBurstDelegate_TypeInfo
                );
    FUN_02f08768(System_Collections_Generic_List<BodyPoseData_JointData>_TypeInfo);
    FUN_02f08768(System_Xml_XmlQualifiedName_HashCodeOfStringDelegate_TypeInfo);
    FUN_02f08768(PTR_DAT_067c9f00);
    FUN_02f08768(System_Collections_Generic_List<Awaitable_AwaitableAndFrameIndex>_TypeInfo);
    FUN_02f08768(
                UnityEngine_XR_Interaction_Toolkit_Inputs_XRTransformStabilizer_CalculateRotationParams_00001219_BurstDirectCall_TypeInfo
                );
    FUN_02f08768(UnityEngine_UIElements_BackgroundSize_PropertyBag_YProperty_TypeInfo);
    FUN_02f08768(
                UnityEngine_XR_Interaction_Toolkit_Inputs_XRTransformStabilizer_CalculateRotationParams_00001219_PostfixBurstDelegate_TypeInfo
                );
    FUN_02f08768(Unity_Burst_BurstCompiler_BurstCompilerHelper_IsBurstEnabledDelegate_TypeInfo);
    FUN_02f08768(
                UnityEngine_XR_Interaction_Toolkit_Inputs_XRTransformStabilizer_CalculateStabilizedLerp_00001218_BurstDirectCall_TypeInfo
                );
    FUN_02f08768(
                Unity_Burst_BurstCompiler_BurstCompilerHelper_IsBurstEnabled_00000145_BurstDirectCall_TypeInfo
                );
    FUN_02f08768(
                UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_IsWithinRadius_00000965_PostfixBurstDelegate_TypeInfo
                );
    FUN_02f08768(PTR_DAT_067c91b0);
    FUN_02f08768(PTR_DAT_067c91b8);
    FUN_02f08768(
                UnityEngine_XR_Hands_ProviderImplementation_XRHandProviderUtility_SubsystemUpdater_TypeInfo
                );
    FUN_02f08768(
                UnityEngine_XR_Interaction_Toolkit_Inputs_XRTransformStabilizer_CalculateStabilizedLerp_00001218_PostfixBurstDelegate_TypeInfo
                );
    FUN_02f08768(
                Unity_Burst_BurstCompiler_BurstCompilerHelper_IsBurstEnabled_00000145_PostfixBurstDelegate_TypeInfo
                );
    FUN_02f08768(
                UnityEngine_XR_Interaction_Toolkit_Inputs_XRTransformStabilizer_StabilizeOptimalRotation_00001217_BurstDirectCall_TypeInfo
                );
    FUN_02f08768(System_Xml_XmlBaseReader_XmlAtomicTextNode_TypeInfo);
    FUN_02f08768(
                UnityEngine_XR_Hands_XRHandSkeletonDriver_CalculateJointTransformLocalPoses_00000096_BurstDirectCall_TypeInfo
                );
    FUN_02f08768(System_Xml_XmlBaseReader_XmlAttributeNode_TypeInfo);
    FUN_02f08768(
                UnityEngine_XR_Hands_XRHandSkeletonDriver_CalculateJointTransformLocalPoses_00000096_PostfixBurstDelegate_TypeInfo
                );
    FUN_02f08768(System_Xml_XmlBaseReader_XmlAttributeTextNode_TypeInfo);
    FUN_02f08768(
                System_Threading_CancellationTokenSource_LinkedNCancellationTokenSource_<>c_TypeInfo
                );
    DAT_06bbf7de = 1;
  }
  lVar9 = *(long *)puVar3;
  local_70 = (long *)0x0;
  local_68 = 0;
  local_80 = (long *)0x0;
  pplStack_78 = (long **)0x0;
  local_90 = 0;
  local_88 = (long *)0x0;
  local_b0 = (long *)0x0;
  pplStack_a8 = (long **)0x0;
  local_a0 = (long *)0x0;
  if (*(int *)(lVar9 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
    lVar9 = *(long *)puVar3;
  }
  puVar3 = System_Collections_Generic_List<Awaitable_AwaitableAndFrameIndex>_TypeInfo;
  if (**(long **)(lVar9 + 0xb8) != 0) {
    local_68 = FUN_03375610(**(long **)(lVar9 + 0xb8),
                            *(undefined8 *)
                             System_Threading_CancellationTokenSource_LinkedNCancellationTokenSource_<>c_TypeInfo
                            ,*(undefined4 *)(param_1 + 0x220),param_3 & 1,
                            *(undefined8 *)
                             System_Xml_XmlQualifiedName_HashCodeOfStringDelegate_TypeInfo);
    local_b8 = &local_68;
    local_c0 = 0;
    lVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar3);
    FUN_0556837c(lVar9,0);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    uVar1 = *(undefined4 *)(param_1 + 0x21c);
    FUN_0556ad3c(lVar9,param_2,param_3 & 1,0);
    lVar21 = *(long *)(lVar9 + 0x70);
    uVar10 = FUN_04f6ebb4(*(undefined8 *)(param_1 + 0x90),0);
    if (((uVar10 & 1) == 0) || (uVar10 = FUN_04f6ebb4(lVar21,0), (uVar10 & 1) == 0)) {
      uVar10 = FUN_04f6ebb4(*(undefined8 *)(param_1 + 0x90),0);
      if ((uVar10 & 1) == 0) {
        uVar22 = FUN_05546520(param_1);
        uVar10 = FUN_04f6ebb4(uVar22,0);
        lVar12 = *(long *)(lVar9 + 0x28);
        if ((uVar10 & 1) == 0) {
          uVar11 = *(undefined8 *)(param_1 + 0x90);
          uVar22 = FUN_05546520(param_1);
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          lVar12 = FUN_05585154(lVar12,uVar11,uVar22,0);
        }
        else {
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          iVar8 = FUN_0558c670(lVar12,*(undefined8 *)(param_1 + 0x90),0);
          if (iVar8 < 0) goto LAB_0555a2b4;
          if (*(long *)(lVar9 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          lVar12 = FUN_0558c44c(*(long *)(lVar9 + 0x28),iVar8,0);
        }
      }
      else {
        if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        uVar22 = **(undefined8 **)(*(long *)(PTR_DAT_067c9338 + 0x90) + 0xb8);
        uVar7 = FUN_04f73d7c(lVar21,0x3a,0);
        if (-1 < (int)uVar7) {
          uVar22 = FUN_04f71378(lVar21,0,uVar7,0);
        }
        uVar11 = FUN_04f71378(lVar21,uVar7 + 1,*(int *)(lVar21 + 0x10) + ~uVar7,0);
        if (*(long *)(lVar9 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8(0,uVar11);
        }
        lVar12 = FUN_05585154(*(long *)(lVar9 + 0x28),uVar11,uVar22,0);
      }
      puVar4 = 
      UnityEngine_XR_Hands_XRHandSkeletonDriver_CalculateJointTransformLocalPoses_00000096_PostfixBurstDelegate_TypeInfo
      ;
      if (lVar12 == 0) {
LAB_0555a2b4:
        uVar10 = FUN_04f6ebb4(*(undefined8 *)(param_1 + 0x90),0);
        if ((uVar10 & 1) == 0) {
          lVar9 = FUN_05546520(param_1);
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          if (*(int *)(lVar9 + 0x10) < 1) {
            lVar21 = *(long *)(param_1 + 0x90);
          }
          else {
            uVar22 = FUN_05546520(param_1);
            uVar20 = *(undefined8 *)(param_1 + 0x90);
            uVar11 = thunk_FUN_02f6ef30(PTR_DAT_067ce970);
            lVar21 = FUN_04f6f6b4(uVar22,uVar11,uVar20,0);
          }
        }
        uVar22 = FUN_055673dc(lVar21,0);
        uVar11 = thunk_FUN_02f6ef30(
                                   UnityEngine_XR_Interaction_Toolkit_UI_CanvasOptimizer_CanvasState_CanvasScalerSettings_TypeInfo
                                   );
                    /* WARNING: Subroutine does not return */
        FUN_02f0888c(uVar22,uVar11);
      }
      *(undefined4 *)(lVar12 + 0x21c) = uVar1;
      lVar21 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
      FUN_03abf108(lVar21,*(undefined8 *)
                           UnityEngine_XR_Hands_XRHandSkeletonDriver_CalculateJointTransformLocalPoses_00000096_BurstDirectCall_TypeInfo
                  );
      if (lVar21 == 0) {
LAB_0555a2ac:
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      lVar17 = *(long *)(lVar21 + 0x10);
      lVar18 = *(long *)
                UnityEngine_XR_Hands_ProviderImplementation_XRHandProviderUtility_SubsystemUpdater_TypeInfo
      ;
      *(int *)(lVar21 + 0x1c) = *(int *)(lVar21 + 0x1c) + 1;
      if (lVar17 == 0) goto LAB_0555a2ac;
      uVar7 = *(uint *)(lVar21 + 0x18);
      if (uVar7 < *(uint *)(lVar17 + 0x18)) {
        *(uint *)(lVar21 + 0x18) = uVar7 + 1;
        *(long *)(lVar17 + (long)(int)uVar7 * 8 + 0x20) = lVar12;
      }
      else {
        FUN_03abf904(lVar21,lVar12,
                     *(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
      }
      FUN_055570fc(param_1,lVar12,lVar21);
      lVar17 = thunk_FUN_02f45270(*(undefined8 *)
                                   System_Xml_XmlBaseReader_XmlAttributeTextNode_TypeInfo);
      uVar22 = FUN_03abf108(lVar17,*(undefined8 *)
                                    System_Xml_XmlBaseReader_XmlAtomicTextNode_TypeInfo);
      FUN_0555a8a0(uVar22,lVar21,lVar17);
      if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      if (*(int *)(lVar17 + 0x18) == 0) {
        plVar13 = *(long **)(param_1 + 0x40);
        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        iVar8 = (**(code **)(*plVar13 + 0x1c8))(plVar13,*(undefined8 *)(*plVar13 + 0x1d0));
        if (((iVar8 == 0) && (FUN_05547d40(lVar12,param_1,0,0), *(long *)(param_1 + 0x20) == 0)) &&
           (*(long *)(param_1 + 0x98) == 0)) {
          uVar22 = FUN_05546520(lVar12);
          *(undefined8 *)(param_1 + 0x98) = uVar22;
        }
      }
      else {
        uVar10 = FUN_04f6ebb4(*(undefined8 *)(param_1 + 0x90),0);
        if ((uVar10 & 1) != 0) {
          FUN_0554d940(param_1,*(undefined8 *)(lVar12 + 0x90));
          uVar22 = FUN_05546520(lVar12);
          uVar10 = FUN_04f6ebb4(uVar22,0);
          if ((uVar10 & 1) == 0) {
            uVar22 = FUN_05546520(lVar12);
            FUN_05548958(param_1,uVar22);
          }
        }
        lVar18 = *(long *)(param_1 + 0x20);
        if (lVar18 == 0) {
          uVar22 = *(undefined8 *)(lVar9 + 0x40);
          lVar18 = thunk_FUN_02f45270(*(undefined8 *)puVar3);
          FUN_055685b4(lVar18,uVar22,0);
          if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          System_Xml_XmlUTF8TextReader__ReadCData
                    (lVar18,*(undefined8 *)(lVar9 + 0x60),*(undefined1 *)(lVar9 + 0x68),0);
          FUN_0556b7d8(lVar18,*(undefined1 *)(lVar9 + 0x59),0);
          FUN_0556c608(lVar18,*(undefined8 *)(lVar9 + 0x50),0);
          *(undefined8 *)(lVar18 + 0x70) = *(undefined8 *)(lVar9 + 0x70);
          System_Xml_XmlDictionaryWriter_XmlWrappedWriter__WriteBase64
                    (lVar18,*(undefined4 *)(lVar9 + 0x78),0);
          if (*(long *)(lVar18 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          FUN_0558cc18(*(long *)(lVar18 + 0x28),param_1,0);
          lVar18 = *(long *)(param_1 + 0x20);
        }
        FUN_05550898(param_1,lVar12,lVar18,0);
        FUN_03ac039c(&local_d8,lVar21,
                     *(undefined8 *)
                      UnityEngine_XR_Interaction_Toolkit_Inputs_XRTransformStabilizer_StabilizeOptimalRotation_00001217_BurstDirectCall_TypeInfo
                    );
        puVar6 = 
        UnityEngine_XR_Interaction_Toolkit_Inputs_XRTransformStabilizer_StabilizePosition_00001216_PostfixBurstDelegate_TypeInfo
        ;
        puVar5 = 
        UnityEngine_XR_Interaction_Toolkit_Inputs_XRTransformStabilizer_CalculateStabilizedLerp_00001218_PostfixBurstDelegate_TypeInfo
        ;
        puVar4 = 
        UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_IsWithinRadius_00000965_PostfixBurstDelegate_TypeInfo
        ;
        puVar3 = PTR_DAT_067c91b8;
        pplStack_78 = pplStack_d0;
        local_80 = local_d8;
        local_70 = local_c8;
        while (uVar10 = FUN_04aff1b0(&local_80,
                                     *(undefined8 *)
                                      UnityEngine_XR_Interaction_Toolkit_Inputs_XRTransformStabilizer_CalculateRotationParams_00001219_PostfixBurstDelegate_TypeInfo
                                    ), plVar13 = local_70, (uVar10 & 1) != 0) {
          if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          if (local_70 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          lVar12 = *(long *)(*(long *)(param_1 + 0x20) + 0x28);
          lVar18 = local_70[0x12];
          uVar22 = FUN_05546520(local_70);
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          lVar12 = FUN_05585154(lVar12,lVar18,uVar22,0);
          lVar18 = *(long *)(lVar9 + 0x28);
          lVar23 = plVar13[0x12];
          uVar22 = FUN_05546520(plVar13);
          if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          lVar18 = FUN_05585154(lVar18,lVar23,uVar22,0);
          if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          plVar13 = *(long **)(lVar18 + 0x48);
          if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          plVar13 = (long *)(**(code **)(*plVar13 + 0x1e8))
                                      (plVar13,*(undefined8 *)(*plVar13 + 0x1f0));
          pplStack_d0 = &local_88;
          local_d8 = (long *)0x0;
          local_c8 = &local_90;
joined_r0x05559980:
          local_88 = plVar13;
          if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          lVar18 = *plVar13;
          uVar10 = (ulong)*(ushort *)(lVar18 + 0x12e);
          if (uVar10 != 0) {
            piVar19 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
            do {
              if (*(long *)(piVar19 + -2) == *(long *)puVar3) {
                puVar14 = (undefined8 *)(lVar18 + (long)*piVar19 * 0x10 + 0x138);
                goto LAB_055599d0;
              }
              uVar10 = uVar10 - 1;
              piVar19 = piVar19 + 4;
            } while (uVar10 != 0);
          }
          puVar14 = (undefined8 *)FUN_02f421d0(plVar13,*(long *)puVar3,0);
LAB_055599d0:
          uVar10 = (*(code *)*puVar14)(plVar13,puVar14[1]);
          plVar13 = local_88;
          if ((uVar10 & 1) != 0) {
            if (local_88 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f089c8();
            }
            lVar18 = *local_88;
            uVar10 = (ulong)*(ushort *)(lVar18 + 0x12e);
            if (uVar10 != 0) {
              piVar19 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
              do {
                if (*(long *)(piVar19 + -2) == *(long *)puVar3) {
                  puVar14 = (undefined8 *)(lVar18 + (long)(*piVar19 + 1) * 0x10 + 0x138);
                  goto LAB_05559a38;
                }
                uVar10 = uVar10 - 1;
                piVar19 = piVar19 + 4;
              } while (uVar10 != 0);
            }
            puVar14 = (undefined8 *)FUN_02f421d0(local_88,*(long *)puVar3,1);
LAB_05559a38:
            plVar15 = (long *)(*(code *)*puVar14)(plVar13,puVar14[1]);
            plVar13 = local_88;
            if (plVar15 != (long *)0x0) {
              lVar18 = *plVar15;
              bVar2 = *(byte *)(*(long *)puVar6 + 0x130);
              if ((*(byte *)(lVar18 + 0x130) < bVar2) ||
                 (*(long *)(*(long *)(lVar18 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)puVar6)) {
                    /* WARNING: Subroutine does not return */
                FUN_02f08d48(plVar15);
              }
              lVar23 = *(long *)puVar4;
              bVar2 = *(byte *)(lVar23 + 0x130);
              if ((bVar2 <= *(byte *)(lVar18 + 0x130)) &&
                 (*(long *)(*(long *)(lVar18 + 200) + (ulong)bVar2 * 8 + -8) == lVar23)) {
                lVar18 = (**(code **)(lVar18 + 0x1b8))(plVar15,*(undefined8 *)(lVar18 + 0x1c0));
                lVar23 = (**(code **)(*plVar15 + 0x2c8))(plVar15,*(undefined8 *)(*plVar15 + 0x2d0));
                plVar13 = local_88;
                if (lVar18 != lVar23) {
                  uVar22 = (**(code **)(*plVar15 + 0x1b8))
                                     (plVar15,*(undefined8 *)(*plVar15 + 0x1c0));
                  uVar10 = FUN_03abfc98(lVar21,uVar22,*(undefined8 *)puVar5);
                  plVar13 = local_88;
                  if ((uVar10 & 1) != 0) {
                    uVar22 = (**(code **)(*plVar15 + 0x2c8))
                                       (plVar15,*(undefined8 *)(*plVar15 + 0x2d0));
                    uVar10 = FUN_03abfc98(lVar21,uVar22,*(undefined8 *)puVar5);
                    plVar13 = local_88;
                    if ((uVar10 & 1) != 0) {
                      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_02f089c8();
                      }
                      plVar15 = (long *)(**(code **)(*plVar15 + 0x1e8))
                                                  (plVar15,*(undefined8 *)(lVar12 + 0x20),
                                                   *(undefined8 *)(*plVar15 + 0x1f0));
                      if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_02f089c8();
                      }
                      lVar18 = *(long *)puVar4;
                      lVar23 = *plVar15;
                      bVar2 = *(byte *)(lVar18 + 0x130);
                      if ((*(byte *)(lVar23 + 0x130) < bVar2) ||
                         (*(long *)(*(long *)(lVar23 + 200) + (ulong)bVar2 * 8 + -8) != lVar18)) {
                    /* WARNING: Subroutine does not return */
                        FUN_02f08d48(plVar15);
                      }
                      lVar18 = *(long *)(lVar12 + 0x48);
                      uVar22 = (**(code **)(lVar23 + 0x178))
                                         (plVar15,*(undefined8 *)(lVar23 + 0x180));
                      if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_02f089c8(uVar22,uVar22);
                      }
                      uVar10 = FUN_0557c9f0(lVar18,uVar22,0);
                      plVar13 = local_88;
                      if ((uVar10 & 1) == 0) {
                        if (*(long *)(lVar12 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_02f089c8();
                        }
                        FUN_0557b64c(*(long *)(lVar12 + 0x48),plVar15,0);
                        plVar13 = local_88;
                      }
                    }
                  }
                }
              }
            }
            goto joined_r0x05559980;
          }
          plVar13 = (long *)thunk_FUN_02f45174(local_88,*(undefined8 *)PTR_DAT_067c91b0);
          *local_c8 = (long)plVar13;
          if (plVar13 != (long *)0x0) {
            lVar12 = *plVar13;
            uVar10 = (ulong)*(ushort *)(lVar12 + 0x12e);
            if (uVar10 != 0) {
              piVar19 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              do {
                if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_067c91b0) {
                  puVar14 = (undefined8 *)(lVar12 + (long)*piVar19 * 0x10 + 0x138);
                  goto LAB_05559c2c;
                }
                uVar10 = uVar10 - 1;
                piVar19 = piVar19 + 4;
              } while (uVar10 != 0);
            }
            puVar14 = (undefined8 *)FUN_02f421d0(plVar13,*(long *)PTR_DAT_067c91b0,0);
LAB_05559c2c:
            (*(code *)*puVar14)(plVar13,puVar14[1]);
          }
        }
        FUN_04aff1ac(&local_80,
                     *(undefined8 *)
                      UnityEngine_XR_Interaction_Toolkit_Inputs_XRTransformStabilizer_CalculateRotationParams_00001219_BurstDirectCall_TypeInfo
                    );
        FUN_03ac039c(&local_d8,lVar17,
                     *(undefined8 *)
                      Unity_Burst_BurstCompiler_BurstCompilerHelper_IsBurstEnabled_00000145_PostfixBurstDelegate_TypeInfo
                    );
        puVar4 = Unity_Burst_BurstCompiler_BurstCompilerHelper_IsBurstEnabledDelegate_TypeInfo;
        pplStack_a8 = pplStack_d0;
        local_b0 = local_d8;
        local_a0 = local_c8;
        local_d8 = (long *)0x0;
        pplStack_d0 = &local_b0;
        while (uVar10 = FUN_04aff1b0(&local_b0,*(undefined8 *)puVar4), plVar13 = local_a0,
              (uVar10 & 1) != 0) {
          if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          if (local_a0 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          plVar15 = *(long **)(*(long *)(param_1 + 0x20) + 0x30);
          uVar22 = (**(code **)(*local_a0 + 0x1c8))(local_a0,*(undefined8 *)(*local_a0 + 0x1d0));
          if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8(uVar22,uVar22);
          }
          uVar10 = (**(code **)(*plVar15 + 0x248))(plVar15,uVar22,*(undefined8 *)(*plVar15 + 0x250))
          ;
          if ((uVar10 & 1) == 0) {
            lVar9 = *(long *)(param_1 + 0x20);
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f089c8();
            }
            lVar12 = *(long *)(lVar9 + 0x30);
            uVar22 = FUN_05584b3c(plVar13,lVar9,0);
            if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f089c8(uVar22,uVar22);
            }
            FUN_055854fc(lVar12,uVar22,0);
          }
        }
        FUN_04aff1ac(&local_b0,
                     *(undefined8 *)
                      UnityEngine_UIElements_BackgroundSize_PropertyBag_YProperty_TypeInfo);
        FUN_03ac039c(&local_d8,lVar21,
                     *(undefined8 *)
                      UnityEngine_XR_Interaction_Toolkit_Inputs_XRTransformStabilizer_StabilizeOptimalRotation_00001217_BurstDirectCall_TypeInfo
                    );
        puVar4 = System_Collections_Generic_List<BodyPoseData_JointData>_TypeInfo;
        pplStack_78 = pplStack_d0;
        local_80 = local_d8;
        local_70 = local_c8;
        while (uVar10 = FUN_04aff1b0(&local_80,
                                     *(undefined8 *)
                                      UnityEngine_XR_Interaction_Toolkit_Inputs_XRTransformStabilizer_CalculateRotationParams_00001219_PostfixBurstDelegate_TypeInfo
                                    ), plVar13 = local_70, (uVar10 & 1) != 0) {
          if (local_70 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          plVar15 = (long *)local_70[8];
          if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          plVar15 = (long *)(**(code **)(*plVar15 + 0x1e8))
                                      (plVar15,*(undefined8 *)(*plVar15 + 0x1f0));
          pplStack_d0 = &local_88;
          local_d8 = (long *)0x0;
          local_c8 = &local_90;
joined_r0x05559ea8:
          local_88 = plVar15;
          if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          lVar9 = *plVar15;
          uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar10 != 0) {
            piVar19 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar19 + -2) == *(long *)puVar3) {
                puVar14 = (undefined8 *)(lVar9 + (long)*piVar19 * 0x10 + 0x138);
                goto LAB_05559ef8;
              }
              uVar10 = uVar10 - 1;
              piVar19 = piVar19 + 4;
            } while (uVar10 != 0);
          }
          puVar14 = (undefined8 *)FUN_02f421d0(plVar15,*(long *)puVar3,0);
LAB_05559ef8:
          uVar10 = (*(code *)*puVar14)(plVar15,puVar14[1]);
          plVar15 = local_88;
          if ((uVar10 & 1) != 0) {
            if (local_88 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f089c8();
            }
            lVar9 = *local_88;
            uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar10 != 0) {
              piVar19 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar19 + -2) == *(long *)puVar3) {
                  puVar14 = (undefined8 *)(lVar9 + (long)(*piVar19 + 1) * 0x10 + 0x138);
                  goto LAB_05559f60;
                }
                uVar10 = uVar10 - 1;
                piVar19 = piVar19 + 4;
              } while (uVar10 != 0);
            }
            puVar14 = (undefined8 *)FUN_02f421d0(local_88,*(long *)puVar3,1);
LAB_05559f60:
            plVar16 = (long *)(*(code *)*puVar14)(plVar15,puVar14[1]);
            if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f089c8();
            }
            bVar2 = *(byte *)(*(long *)puVar4 + 0x130);
            if ((*(byte *)(*plVar16 + 0x130) < bVar2) ||
               (*(long *)(*(long *)(*plVar16 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)puVar4)) {
                    /* WARNING: Subroutine does not return */
              FUN_02f08d48(plVar16);
            }
            lVar9 = FUN_0555f7d8(plVar16,0);
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f089c8();
            }
            if (*(int *)(lVar9 + 0x10) != 0) {
              if (plVar16[0xb] == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f089c8();
              }
              lVar9 = *(long *)(plVar16[0xb] + 0x40);
              if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f089c8();
              }
              uVar7 = *(uint *)(lVar9 + 0x18);
              if (0 < (int)uVar7) {
                lVar12 = 0;
                do {
                  if (uVar7 <= (uint)lVar12) {
                    /* WARNING: Subroutine does not return */
                    FUN_02f089d0();
                  }
                  lVar17 = *(long *)(lVar9 + 0x20 + lVar12 * 8);
                  if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02f089c8();
                  }
                  uVar10 = FUN_03abfc98(lVar21,*(undefined8 *)(lVar17 + 0x78),*(undefined8 *)puVar5)
                  ;
                  plVar15 = local_88;
                  if ((uVar10 & 1) == 0) goto joined_r0x05559ea8;
                  uVar7 = *(uint *)(lVar9 + 0x18);
                  lVar12 = lVar12 + 1;
                } while ((int)lVar12 < (int)uVar7);
              }
            }
            if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f089c8();
            }
            lVar9 = *(long *)(*(long *)(param_1 + 0x20) + 0x28);
            lVar12 = plVar13[0x12];
            uVar22 = FUN_05546520(plVar13);
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f089c8();
            }
            lVar9 = FUN_05585154(lVar9,lVar12,uVar22,0);
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f089c8();
            }
            if (*(long *)(lVar9 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f089c8();
            }
            lVar9 = FUN_0557e3c8(*(long *)(lVar9 + 0x40),plVar16[6],0);
            uVar22 = FUN_0555f7d8(plVar16,0);
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f089c8(uVar22,uVar22);
            }
            FUN_0555c54c(lVar9,uVar22,0);
            plVar15 = local_88;
            goto joined_r0x05559ea8;
          }
          plVar13 = (long *)thunk_FUN_02f45174(local_88,*(undefined8 *)PTR_DAT_067c91b0);
          *local_c8 = (long)plVar13;
          if (plVar13 != (long *)0x0) {
            lVar9 = *plVar13;
            uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar10 != 0) {
              piVar19 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_067c91b0) {
                  puVar14 = (undefined8 *)(lVar9 + (long)*piVar19 * 0x10 + 0x138);
                  goto LAB_0555a110;
                }
                uVar10 = uVar10 - 1;
                piVar19 = piVar19 + 4;
              } while (uVar10 != 0);
            }
            puVar14 = (undefined8 *)FUN_02f421d0(plVar13,*(long *)PTR_DAT_067c91b0,0);
LAB_0555a110:
            (*(code *)*puVar14)(plVar13,puVar14[1]);
          }
        }
        FUN_04aff1ac(&local_80,
                     *(undefined8 *)
                      UnityEngine_XR_Interaction_Toolkit_Inputs_XRTransformStabilizer_CalculateRotationParams_00001219_BurstDirectCall_TypeInfo
                    );
      }
    }
    puVar3 = PTR_DAT_067c9f00;
    lVar9 = *(long *)PTR_DAT_067c9f00;
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
      lVar9 = *(long *)puVar3;
    }
    if (**(long **)(lVar9 + 0xb8) != 0) {
      FUN_0557aac0(**(long **)(lVar9 + 0xb8),*local_b8,0);
      if (local_c0 == 0) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_02f089c0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


