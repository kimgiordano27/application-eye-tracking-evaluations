/*
FUNCTION_NAME: FUN_055473cc
ENTRY_POINT: 055473cc
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_5;validity_or_gating_hits_20;telemetry_or_network_hits_9
*/


void FUN_055473cc(long param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined4 param_5
                 )

{
  uint uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  byte bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  long lVar20;
  ulong uVar21;
  int iVar22;
  undefined8 uVar23;
  uint uVar24;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  
  puVar5 = PTR_DAT_067c9fd8;
  if ((DAT_06bbf782 & 1) == 0) {
    FUN_02f08768(PTR_DAT_067ddbb0);
    FUN_02f08768(PTR_DAT_067d4730);
    FUN_02f08768(
                UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_FastCalculateRadiusOffset_00000963_PostfixBurstDelegate_TypeInfo
                );
    FUN_02f08768(PTR_DAT_067ddb30);
    FUN_02f08768(PTR_DAT_067c9fd8);
    FUN_02f08768(
                UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_FastComputeNewTrackedPose_00000964_BurstDirectCall_TypeInfo
                );
    FUN_02f08768(
                UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_FastComputeNewTrackedPose_00000964_PostfixBurstDelegate_TypeInfo
                );
    FUN_02f08768(PTR_DAT_067d78c8);
    FUN_02f08768(UnityEngine_XR_ARSubsystems_XRPlaneSubsystemDescriptor_Cinfo_TypeInfo);
    FUN_02f08768(UnityEngine_XR_ARSubsystems_XRPointCloudSubsystemDescriptor_Cinfo_TypeInfo);
    FUN_02f08768(
                UnityEngine_XR_Interaction_Toolkit_Filtering_XRPokeLogic_CalculateInteractionPoint_000010BE_BurstDirectCall_TypeInfo
                );
    FUN_02f08768(
                UnityEngine_XR_Interaction_Toolkit_Filtering_XRPokeLogic_CalculateInteractionPoint_000010BE_PostfixBurstDelegate_TypeInfo
                );
    FUN_02f08768(
                UnityEngine_XR_Interaction_Toolkit_Filtering_XRPokeLogic_CalculatePokeParams_000010BD_BurstDirectCall_TypeInfo
                );
    FUN_02f08768(
                UnityEngine_XR_Interaction_Toolkit_Filtering_XRPokeLogic_CalculatePokeParams_000010BD_PostfixBurstDelegate_TypeInfo
                );
    FUN_02f08768(
                UnityEngine_XR_Interaction_Toolkit_Filtering_XRPokeLogic_IsVelocitySufficient_000010C0_BurstDirectCall_TypeInfo
                );
    DAT_06bbf782 = 1;
  }
  lVar11 = *(long *)puVar5;
  uVar2 = *(undefined1 *)(param_1 + 0x16e);
  uVar3 = *(undefined1 *)(param_1 + 0x16c);
  *(undefined1 *)(param_1 + 0x16e) = 0;
  iVar8 = *(int *)(lVar11 + 0xe4);
  *(undefined1 *)(param_1 + 0x16c) = 1;
  if (iVar8 == 0) {
    thunk_FUN_02f6670c();
  }
  uVar12 = FUN_050656a0(0);
  puVar5 = PTR_DAT_067c9338;
  local_64 = param_5;
  uVar13 = thunk_FUN_02f44ec4(*(undefined8 *)(PTR_DAT_067c9338 + 0x48),&local_64);
  uVar13 = FUN_04f70148(uVar12,*(undefined8 *)
                                UnityEngine_XR_Interaction_Toolkit_Filtering_XRPokeLogic_CalculatePokeParams_000010BD_PostfixBurstDelegate_TypeInfo
                        ,uVar13,0);
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8(uVar13,uVar13);
  }
  iVar8 = FUN_04fec85c(param_2,uVar13,0);
  local_68 = param_5;
  uVar13 = thunk_FUN_02f44ec4(*(undefined8 *)(puVar5 + 0x48),&local_68);
  uVar13 = FUN_04f70148(uVar12,*(undefined8 *)
                                UnityEngine_XR_Interaction_Toolkit_Filtering_XRPokeLogic_CalculateInteractionPoint_000010BE_PostfixBurstDelegate_TypeInfo
                        ,uVar13,0);
  iVar9 = FUN_04fec85c(param_2,uVar13,0);
  local_6c = param_5;
  uVar13 = thunk_FUN_02f44ec4(*(undefined8 *)(puVar5 + 0x48),&local_6c);
  uVar13 = FUN_04f70148(uVar12,*(undefined8 *)
                                UnityEngine_XR_ARSubsystems_XRPlaneSubsystemDescriptor_Cinfo_TypeInfo
                        ,uVar13,0);
  uVar23 = *(undefined8 *)
            UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_FastCalculateRadiusOffset_00000963_PostfixBurstDelegate_TypeInfo
  ;
  if (*(int *)(*(long *)(puVar5 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  uVar23 = FUN_050e4454(uVar23,0);
  plVar14 = (long *)FUN_04feade0(param_2,uVar13,uVar23,0);
  puVar6 = PTR_DAT_067ddb30;
  if (plVar14 != (long *)0x0) {
    if (*plVar14 != *(long *)PTR_DAT_067ddb30) {
                    /* WARNING: Subroutine does not return */
      FUN_02f08d48(plVar14);
    }
  }
  local_70 = param_5;
  uVar13 = thunk_FUN_02f44ec4(*(undefined8 *)(puVar5 + 0x48),&local_70);
  uVar13 = FUN_04f70148(uVar12,*(undefined8 *)
                                UnityEngine_XR_Interaction_Toolkit_Filtering_XRPokeLogic_CalculateInteractionPoint_000010BE_BurstDirectCall_TypeInfo
                        ,uVar13,0);
  puVar7 = PTR_DAT_067ddbb0;
  uVar23 = FUN_050e4454(*(undefined8 *)PTR_DAT_067ddbb0,0);
  plVar15 = (long *)FUN_04feade0(param_2,uVar13,uVar23,0);
  puVar5 = PTR_DAT_067d4730;
  if (plVar15 != (long *)0x0) {
    bVar4 = *(byte *)(*(long *)PTR_DAT_067d4730 + 0x130);
    if ((*(byte *)(*plVar15 + 0x130) < bVar4) ||
       (*(long *)(*(long *)(*plVar15 + 200) + (ulong)bVar4 * 8 + -8) != *(long *)PTR_DAT_067d4730))
    {
                    /* WARNING: Subroutine does not return */
      FUN_02f08d48(plVar15);
    }
  }
  local_74 = param_5;
  uVar13 = thunk_FUN_02f44ec4(*(undefined8 *)(PTR_DAT_067c9338 + 0x48),&local_74);
  uVar13 = FUN_04f70148(uVar12,*(undefined8 *)
                                UnityEngine_XR_ARSubsystems_XRPointCloudSubsystemDescriptor_Cinfo_TypeInfo
                        ,uVar13,0);
  uVar23 = FUN_050e4454(*(undefined8 *)puVar7,0);
  plVar16 = (long *)FUN_04feade0(param_2,uVar13,uVar23,0);
  if (plVar16 != (long *)0x0) {
    bVar4 = *(byte *)(*(long *)puVar5 + 0x130);
    if ((*(byte *)(*plVar16 + 0x130) < bVar4) ||
       (*(long *)(*(long *)(*plVar16 + 200) + (ulong)bVar4 * 8 + -8) != *(long *)puVar5)) {
                    /* WARNING: Subroutine does not return */
      FUN_02f08d48(plVar16);
    }
  }
  local_78 = param_5;
  uVar13 = thunk_FUN_02f44ec4(*(undefined8 *)(PTR_DAT_067c9338 + 0x48),&local_78);
  uVar13 = FUN_04f70148(uVar12,*(undefined8 *)
                                UnityEngine_XR_Interaction_Toolkit_Filtering_XRPokeLogic_IsVelocitySufficient_000010C0_BurstDirectCall_TypeInfo
                        ,uVar13,0);
  uVar23 = FUN_050e4454(*(undefined8 *)
                         UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_FastComputeNewTrackedPose_00000964_PostfixBurstDelegate_TypeInfo
                        ,0);
  plVar17 = (long *)FUN_04feade0(param_2,uVar13,uVar23,0);
  puVar5 = PTR_DAT_067d78c8;
  if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  lVar11 = *plVar17;
  bVar4 = *(byte *)(*(long *)PTR_DAT_067d78c8 + 0x130);
  if ((*(byte *)(lVar11 + 0x130) < bVar4) ||
     (*(long *)(*(long *)(lVar11 + 200) + (ulong)bVar4 * 8 + -8) != *(long *)PTR_DAT_067d78c8)) {
                    /* WARNING: Subroutine does not return */
    FUN_02f08d48(plVar17);
  }
  (**(code **)(lVar11 + 1000))(plVar17,param_1,*(undefined8 *)(lVar11 + 0x3f0));
  local_7c = param_5;
  uVar13 = thunk_FUN_02f44ec4(*(undefined8 *)(PTR_DAT_067c9338 + 0x48),&local_7c);
  uVar12 = FUN_04f70148(uVar12,*(undefined8 *)
                                UnityEngine_XR_Interaction_Toolkit_Filtering_XRPokeLogic_CalculatePokeParams_000010BD_BurstDirectCall_TypeInfo
                        ,uVar13,0);
  uVar13 = FUN_050e4454(*(undefined8 *)
                         UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_FastComputeNewTrackedPose_00000964_PostfixBurstDelegate_TypeInfo
                        ,0);
  plVar18 = (long *)FUN_04feade0(param_2,uVar12,uVar13,0);
  if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  lVar11 = *plVar18;
  bVar4 = *(byte *)(*(long *)puVar5 + 0x130);
  if ((*(byte *)(lVar11 + 0x130) < bVar4) ||
     (*(long *)(*(long *)(lVar11 + 200) + (ulong)bVar4 * 8 + -8) != *(long *)puVar5)) {
                    /* WARNING: Subroutine does not return */
    FUN_02f08d48(plVar18);
  }
  (**(code **)(lVar11 + 1000))(plVar18,param_1,*(undefined8 *)(lVar11 + 0x3f0));
  if (0 < iVar9) {
    plVar19 = *(long **)(param_1 + 0x40);
    if (plVar19 != (long *)0x0) {
      iVar22 = 0;
      do {
        iVar10 = (**(code **)(*plVar19 + 0x1c8))(plVar19,*(undefined8 *)(*plVar19 + 0x1d0));
        if (iVar10 <= iVar22) {
          plVar15 = (long *)FUN_02f0880c(*(undefined8 *)
                                          UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_FastComputeNewTrackedPose_00000964_BurstDirectCall_TypeInfo
                                         ,iVar9);
          if (iVar8 < 1) goto LAB_05547b00;
          uVar24 = 0;
          iVar9 = 0;
          iVar22 = 2;
          goto LAB_05547974;
        }
        if (*(long *)(param_1 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        lVar11 = FUN_0557e298(*(long *)(param_1 + 0x40),iVar22,0);
        if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        uVar12 = (**(code **)(*plVar15 + 0x2e8))(plVar15,iVar22,*(undefined8 *)(*plVar15 + 0x2f0));
        if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        plVar19 = (long *)(**(code **)(*plVar16 + 0x2e8))
                                    (plVar16,iVar22,*(undefined8 *)(*plVar16 + 0x2f0));
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        if (plVar19 != (long *)0x0) {
          if (*plVar19 != *(long *)puVar6) {
                    /* WARNING: Subroutine does not return */
            FUN_02f08d48(plVar19);
          }
        }
        FUN_05562b70(lVar11,uVar12,plVar19,0);
        plVar19 = *(long **)(param_1 + 0x40);
        iVar22 = iVar22 + 1;
      } while (plVar19 != (long *)0x0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  goto LAB_05547b20;
LAB_05547974:
  do {
    lVar11 = FUN_0554b200(param_1);
    if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    lVar20 = 0;
    if ((lVar11 != 0) &&
       (lVar20 = thunk_FUN_02f45174(lVar11,*(undefined8 *)(*plVar15 + 0x40)), lVar20 == 0)) {
      uVar12 = thunk_FUN_02f52b60();
                    /* WARNING: Subroutine does not return */
      FUN_02f0888c(uVar12,0);
    }
    if (*(uint *)(plVar15 + 3) <= uVar24) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089d0();
    }
    plVar15[(long)(int)uVar24 + 4] = lVar11;
    iVar10 = FUN_0554b254(lVar20,plVar14,iVar22 + -2);
    if (iVar10 < 5) {
      if (iVar10 == 2) {
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        *(uint *)(lVar11 + 0x20) = uVar24;
      }
      else {
        if (iVar10 != 4) goto LAB_05547a54;
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        *(undefined4 *)(lVar11 + 0x20) = 0xffffffff;
      }
      *(uint *)(lVar11 + 0x24) = uVar24;
LAB_05547a50:
      uVar24 = uVar24 + 1;
    }
    else {
      if (iVar10 == 8) {
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        *(uint *)(lVar11 + 0x20) = uVar24;
        *(undefined4 *)(lVar11 + 0x24) = 0xffffffff;
        goto LAB_05547a50;
      }
      if (iVar10 == 0x10) {
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        uVar1 = uVar24 + 1;
        *(uint *)(lVar11 + 0x20) = uVar24;
        *(uint *)(lVar11 + 0x24) = uVar1;
        lVar20 = thunk_FUN_02f45174(lVar11,*(undefined8 *)(*plVar15 + 0x40));
        if (lVar20 == 0) {
          uVar12 = thunk_FUN_02f52b60();
                    /* WARNING: Subroutine does not return */
          FUN_02f0888c(uVar12,0);
        }
        if (*(uint *)(plVar15 + 3) <= uVar1) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089d0();
        }
        uVar24 = uVar24 + 2;
        plVar15[(long)(int)uVar1 + 4] = lVar11;
      }
    }
LAB_05547a54:
    if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    uVar21 = thunk_FUN_0507f55c(plVar14,iVar22,0);
    if ((uVar21 & 1) == 0) {
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      *(undefined4 *)(lVar11 + 0x28) = 0xffffffff;
    }
    else {
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      *(uint *)(lVar11 + 0x28) = uVar24;
      lVar20 = thunk_FUN_02f45174(lVar11,*(undefined8 *)(*plVar15 + 0x40));
      if (lVar20 == 0) {
        uVar12 = thunk_FUN_02f52b60();
                    /* WARNING: Subroutine does not return */
        FUN_02f0888c(uVar12,0);
      }
      if (*(uint *)(plVar15 + 3) <= uVar24) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089d0();
      }
      lVar20 = (long)(int)uVar24;
      uVar24 = uVar24 + 1;
      plVar15[lVar20 + 4] = lVar11;
    }
    if (*(long *)(param_1 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    FUN_0558b584(*(long *)(param_1 + 0x38),lVar11,0);
    FUN_0558807c(lVar11,*(undefined8 *)(param_1 + 0x30),0);
    *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + 1;
    FUN_0554b2fc(param_1,iVar9,plVar17,plVar18);
    iVar9 = iVar9 + 1;
    iVar22 = iVar22 + 3;
  } while (iVar8 != iVar9);
LAB_05547b00:
  if (*(long *)(param_1 + 0x68) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  FUN_055a9520(*(long *)(param_1 + 0x68),plVar15,0);
  FUN_05555f64(param_1,0);
LAB_05547b20:
  *(undefined1 *)(param_1 + 0x16e) = uVar2;
  *(undefined1 *)(param_1 + 0x16c) = uVar3;
  return;
}


