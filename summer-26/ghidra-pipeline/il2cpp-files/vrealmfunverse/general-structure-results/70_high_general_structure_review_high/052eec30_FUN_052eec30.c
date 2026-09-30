/*
FUNCTION_NAME: FUN_052eec30
ENTRY_POINT: 052eec30
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_8;functionality_data_collection_or_telemetry_hits_3
*/


undefined8 FUN_052eec30(long param_1)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long *plVar12;
  ulong uVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long lVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  
  if ((DAT_066d0294 & 1) == 0) {
    FUN_02b3c81c(
                UnityEngine_XR_Interaction_Toolkit_Utilities_BurstLerpUtility_BezierLerp_00000344_BurstDirectCall_TypeInfo
                );
    FUN_02b3c81c(Unity_Burst_BurstCompiler_<>c_TypeInfo);
    FUN_02b3c81c(UnityEngine_Rendering_DebugUI_Container_TypeInfo);
    FUN_02b3c81c(
                UnityEngine_XR_Interaction_Toolkit_Utilities_BurstLerpUtility_BezierLerp_00000344_PostfixBurstDelegate_TypeInfo
                );
    FUN_02b3c81c(
                UnityEngine_XR_Interaction_Toolkit_Utilities_BurstLerpUtility_BounceOutLerp_00000346_BurstDirectCall_TypeInfo
                );
    FUN_02b3c81c(UnityEngine_Rendering_DebugUI_EnumField_TypeInfo);
    FUN_02b3c81c(UnityEngine_Rendering_DebugDisplaySettingsVolume_WidgetFactory_TypeInfo);
    FUN_02b3c81c(UnityEngine_Rendering_DebugDisplaySettingsUI_<>c__DisplayClass3_0_TypeInfo);
    FUN_02b3c81c(
                UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_FastSafeDivide_0000035A_BurstDirectCall_TypeInfo
                );
    FUN_02b3c81c(PTR_DAT_0631a648);
    DAT_066d0294 = 1;
  }
  puVar10 = (undefined8 *)(param_1 + 0x60);
  *puVar10 = 0;
  thunk_FUN_02bb0e9c(puVar10,0);
  FUN_052f005c(param_1);
  puVar6 = UnityEngine_Rendering_DebugUI_EnumField_TypeInfo;
  puVar5 = 
  UnityEngine_XR_Interaction_Toolkit_Utilities_BurstLerpUtility_BounceOutLerp_00000346_BurstDirectCall_TypeInfo
  ;
  puVar4 = 
  UnityEngine_XR_Interaction_Toolkit_Utilities_BurstLerpUtility_BezierLerp_00000344_BurstDirectCall_TypeInfo
  ;
  uVar17 = DAT_01030878;
  uVar16 = DAT_01030418;
  iVar7 = *(int *)(param_1 + 0x30);
  do {
    if (iVar7 == 0x12) {
LAB_052ef764:
      lVar18 = *(long *)(param_1 + 0x50);
      if (lVar18 != 0) {
        if (*(int *)(lVar18 + 0x18) != 0) {
          *puVar10 = *(undefined8 *)(lVar18 + 0x20);
          thunk_FUN_02bb0e9c(puVar10);
          return *puVar10;
        }
LAB_052ef7b4:
                    /* WARNING: Subroutine does not return */
        FUN_02b3cacc();
      }
LAB_052ef7b0:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
LAB_052eed38:
    while( true ) {
      FUN_052f0130(param_1);
      puVar3 = UnityEngine_Rendering_DebugDisplaySettingsVolume_WidgetFactory_TypeInfo;
      iVar7 = *(int *)(param_1 + 0x30);
      if (8 < iVar7) break;
      if ((iVar7 - 1U < 4) || (iVar7 - 6U < 2)) {
System_Runtime_Serialization_Globals__get_TypeOfOptionalFieldAttribute:
        if (*(int *)(param_1 + 0x58) != 0) {
LAB_052ef7b8:
          FUN_04c103c8(0,*(undefined8 *)(param_1 + 0x20),*(int *)(param_1 + 0x2c),
                       *(int *)(param_1 + 0x28) - *(int *)(param_1 + 0x2c),0);
          uVar16 = FUN_052f07dc();
          goto LAB_052ef888;
        }
        uVar2 = *(int *)(param_1 + 0x40) - 1;
        if (*(int *)(param_1 + 0x40) < 1) {
LAB_052eef54:
          uVar11 = 0;
          *(undefined4 *)(param_1 + 0x58) = 1;
          if (iVar7 < 4) {
            if (iVar7 == 1) {
              if (*(long *)(param_1 + 0x38) != 0) {
                if (uVar2 < *(uint *)(*(long *)(param_1 + 0x38) + 0x18)) {
                  uVar8 = *(undefined4 *)(param_1 + 0x28);
                  uVar9 = *(undefined4 *)(param_1 + 0x2c);
                  uVar19 = *(undefined8 *)(param_1 + 0x48);
                  uVar14 = *(undefined8 *)(param_1 + 0x20);
                  uVar11 = thunk_FUN_02b79644(*(undefined8 *)puVar5);
                  FUN_052f0b1c(uVar11,uVar19,uVar14,uVar9,uVar8);
                  goto LAB_052ef550;
                }
                goto LAB_052ef7b4;
              }
              goto LAB_052ef7b0;
            }
            if (iVar7 == 2) {
              uVar19 = FUN_04c103c8(0,*(undefined8 *)(param_1 + 0x20),*(int *)(param_1 + 0x2c),
                                    *(int *)(param_1 + 0x28) - *(int *)(param_1 + 0x2c),0);
              uVar14 = *(undefined8 *)(param_1 + 0x48);
              uVar11 = thunk_FUN_02b79644(*(undefined8 *)puVar4);
              uVar20 = 2;
            }
            else {
              if (iVar7 != 3) goto LAB_052ef550;
              uVar19 = FUN_04c103c8(0,*(undefined8 *)(param_1 + 0x20),*(int *)(param_1 + 0x2c),
                                    *(int *)(param_1 + 0x28) - *(int *)(param_1 + 0x2c),0);
              uVar14 = *(undefined8 *)(param_1 + 0x48);
              uVar11 = thunk_FUN_02b79644(*(undefined8 *)puVar4);
              uVar20 = 5;
            }
          }
          else if (iVar7 < 7) {
            if (iVar7 == 4) {
              uVar19 = FUN_04c103c8(0,*(undefined8 *)(param_1 + 0x20),*(int *)(param_1 + 0x2c),
                                    *(int *)(param_1 + 0x28) - *(int *)(param_1 + 0x2c),0);
              uVar14 = *(undefined8 *)(param_1 + 0x48);
              uVar11 = thunk_FUN_02b79644(*(undefined8 *)puVar4);
              uVar20 = 4;
            }
            else {
              if (iVar7 != 6) goto LAB_052ef550;
              uVar19 = FUN_04c103c8(0,*(undefined8 *)(param_1 + 0x20),*(int *)(param_1 + 0x2c) + 1,
                                    (*(int *)(param_1 + 0x28) - *(int *)(param_1 + 0x2c)) + -2,0);
              uVar14 = *(undefined8 *)(param_1 + 0x48);
              uVar11 = thunk_FUN_02b79644(*(undefined8 *)puVar4);
              uVar20 = 3;
            }
          }
          else {
            if (iVar7 != 7) {
              if (iVar7 == 0xf) goto LAB_052ef07c;
              goto LAB_052ef550;
            }
            uVar19 = FUN_04c103c8(0,*(undefined8 *)(param_1 + 0x20),*(int *)(param_1 + 0x2c) + 1,
                                  (*(int *)(param_1 + 0x28) - *(int *)(param_1 + 0x2c)) + -2,0);
            uVar14 = *(undefined8 *)(param_1 + 0x48);
            uVar11 = thunk_FUN_02b79644(*(undefined8 *)puVar4);
            uVar20 = 7;
          }
          FUN_052eb314(uVar11,uVar14,uVar20,uVar19,1);
        }
        else {
          lVar18 = *(long *)(param_1 + 0x38);
          if (lVar18 == 0) goto LAB_052ef7b0;
          if (*(uint *)(lVar18 + 0x18) <= uVar2) goto LAB_052ef7b4;
          lVar18 = *(long *)(lVar18 + (ulong)uVar2 * 8 + 0x20);
          if (lVar18 == 0) goto LAB_052ef7b0;
          if ((*(int *)(lVar18 + 0x10) != 3) || (*(int *)(lVar18 + 0x14) != 5)) goto LAB_052eef54;
          if (iVar7 != 0xf) {
            uVar16 = FUN_052ed1bc();
            goto LAB_052ef888;
          }
          *(undefined4 *)(param_1 + 0x58) = 1;
LAB_052ef07c:
          FUN_052f0130(param_1);
          if (*(int *)(param_1 + 0x30) == 9) {
            FUN_052f0130(param_1);
            System_Runtime_Serialization_DataContractSurrogateCaller__GetObjectToSerialize
                      (param_1,1);
            uVar19 = FUN_052f0854(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x2c),
                                  *(undefined4 *)(param_1 + 0x28));
            FUN_052f0130(param_1);
            System_Runtime_Serialization_DataContractSurrogateCaller__GetObjectToSerialize
                      (param_1,10);
            FUN_052f0130(param_1);
            System_Runtime_Serialization_DataContractSurrogateCaller__GetObjectToSerialize
                      (param_1,0x10);
          }
          else {
            System_Runtime_Serialization_DataContractSurrogateCaller__GetObjectToSerialize
                      (param_1,0x10);
            uVar19 = 0;
          }
          FUN_052f0130(param_1);
          System_Runtime_Serialization_DataContractSurrogateCaller__GetObjectToSerialize(param_1,1);
          uVar14 = FUN_052f0854(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x2c),
                                *(undefined4 *)(param_1 + 0x28));
          if (*(long *)(param_1 + 0x38) == 0) goto LAB_052ef7b0;
          if (*(uint *)(*(long *)(param_1 + 0x38) + 0x18) <= *(int *)(param_1 + 0x40) - 1U)
          goto LAB_052ef7b4;
          uVar20 = *(undefined8 *)(param_1 + 0x48);
          uVar11 = thunk_FUN_02b79644(*(undefined8 *)
                                       UnityEngine_Rendering_DebugUI_Container_TypeInfo);
          FUN_052f0abc(uVar11,uVar20,uVar14,uVar19);
        }
LAB_052ef550:
        FUN_052f0b80(param_1,uVar11);
      }
      else {
        if (iVar7 != 8) goto LAB_052ef7d8;
        if (*(int *)(param_1 + 0x58) == 0) {
          thunk_FUN_02ba3594(PTR_DAT_0631da28);
System_Runtime_Serialization_Globals__get_TypeOfXmlNodeArray:
          uVar16 = FUN_052f104c();
          goto LAB_052ef888;
        }
        FUN_052f0580(param_1,3);
        lVar18 = *(long *)(param_1 + 0x38);
        if (lVar18 == 0) goto LAB_052ef7b0;
        uVar2 = *(int *)(param_1 + 0x40) - 1;
        if (*(uint *)(lVar18 + 0x18) <= uVar2) goto LAB_052ef7b4;
        lVar18 = *(long *)(lVar18 + (long)(int)uVar2 * 8 + 0x20);
        if (lVar18 == 0) goto LAB_052ef7b0;
        if (*(int *)(lVar18 + 0x10) != 6) goto LAB_052ef800;
        uVar11 = FUN_052f0c9c(param_1);
        plVar12 = (long *)FUN_052f0c9c(param_1);
        if (plVar12 == (long *)0x0) goto LAB_052ef7b0;
        if (*plVar12 != *(long *)Unity_Burst_BurstCompiler_<>c_TypeInfo) {
LAB_052ef80c:
                    /* WARNING: Subroutine does not return */
          FUN_02b3ce44(plVar12);
        }
        FUN_052c5520(plVar12,uVar11,0);
        FUN_052f0b80(param_1,plVar12);
        *(undefined4 *)(param_1 + 0x58) = 0;
      }
    }
    if (iVar7 < 0xd) {
      if (iVar7 < 0xb) {
        if (iVar7 == 9) {
          if (*(int *)(param_1 + 0x58) == 0) {
            lVar18 = *(long *)(param_1 + 0x38);
            if (lVar18 != 0) {
              uVar2 = *(uint *)(param_1 + 0x40);
              if (uVar2 - 1 < *(uint *)(lVar18 + 0x18)) {
                lVar15 = *(long *)(lVar18 + (long)(int)(uVar2 - 1) * 8 + 0x20);
                if (lVar15 != 0) {
                  if ((*(int *)(lVar15 + 0x10) != 3) || (*(int *)(lVar15 + 0x14) != 5)) {
                    uVar11 = *(undefined8 *)puVar6;
                    *(uint *)(param_1 + 0x40) = uVar2 + 1;
                    lVar15 = thunk_FUN_02b79644(uVar11);
                    FUN_04dbdb8c(lVar15,0);
                    uVar1 = *(uint *)(lVar18 + 0x18);
                    *(undefined8 *)(lVar15 + 0x10) = uVar16;
                    *(undefined4 *)(lVar15 + 0x18) = 2;
                    if (uVar2 < uVar1) {
                      lVar18 = lVar18 + (long)(int)uVar2 * 8;
                      goto LAB_052ef6cc;
                    }
                    goto LAB_052ef7b4;
                  }
                  uVar11 = *(undefined8 *)(param_1 + 0x48);
                  plVar12 = (long *)thunk_FUN_02b79644(*(undefined8 *)
                                                        Unity_Burst_BurstCompiler_<>c_TypeInfo);
                  FUN_052c53c8(plVar12,uVar11,
                               *(undefined8 *)
                                UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_FastSafeDivide_0000035A_BurstDirectCall_TypeInfo
                               ,0);
LAB_052ef688:
                  FUN_052f0b80(param_1,plVar12);
                  uVar2 = *(uint *)(param_1 + 0x40);
                  uVar11 = *(undefined8 *)puVar6;
                  lVar18 = *(long *)(param_1 + 0x38);
                  *(uint *)(param_1 + 0x40) = uVar2 + 1;
                  lVar15 = thunk_FUN_02b79644(uVar11);
                  FUN_04dbdb8c(lVar15,0);
                  *(undefined8 *)(lVar15 + 0x10) = uVar17;
                  *(undefined4 *)(lVar15 + 0x18) = 2;
                  if (lVar18 != 0) {
                    if (uVar2 < *(uint *)(lVar18 + 0x18)) {
                      lVar18 = lVar18 + (long)(int)uVar2 * 8;
                      goto LAB_052ef6cc;
                    }
                    goto LAB_052ef7b4;
                  }
                }
                goto LAB_052ef7b0;
              }
              goto LAB_052ef7b4;
            }
            goto LAB_052ef7b0;
          }
          FUN_052f0580(param_1,0x16);
          *(undefined4 *)(param_1 + 0x58) = 0;
          lVar18 = FUN_052f0c18(param_1);
          if (lVar18 != 0) {
            uVar11 = thunk_FUN_02b4c898(lVar18,0);
            uVar19 = *(undefined8 *)
                      UnityEngine_XR_Interaction_Toolkit_Utilities_BurstLerpUtility_BezierLerp_00000344_PostfixBurstDelegate_TypeInfo
            ;
            if (*(int *)(*(long *)(PTR_DAT_06312310 + 0xe0) + 0xe4) == 0) {
              thunk_FUN_02b9ad44(*(long *)(PTR_DAT_06312310 + 0xe0));
            }
            uVar19 = FUN_04d8a7b0(uVar19,0);
            uVar13 = FUN_04d94540(uVar11,uVar19,0);
            if ((uVar13 & 1) == 0) {
              plVar12 = (long *)FUN_052f0c9c(param_1);
              puVar3 = Unity_Burst_BurstCompiler_<>c_TypeInfo;
              if (plVar12 != (long *)0x0) {
                if (*plVar12 != *(long *)puVar5) goto LAB_052ef808;
                lVar18 = plVar12[3];
                uVar11 = *(undefined8 *)(param_1 + 0x48);
                plVar12 = (long *)thunk_FUN_02b79644(*(undefined8 *)
                                                      Unity_Burst_BurstCompiler_<>c_TypeInfo);
                FUN_052c53c8(plVar12,uVar11,lVar18,0);
                if (plVar12 != (long *)0x0) {
                  if (*plVar12 != *(long *)puVar3) goto LAB_052ef80c;
                  iVar7 = FUN_052c81b8(plVar12,0);
                  if (iVar7 != -1) {
                    plVar12 = (long *)FUN_052f0cd8(param_1,iVar7);
                    goto LAB_052ef63c;
                  }
                  goto LAB_052ef688;
                }
              }
              goto LAB_052ef7b0;
            }
          }
LAB_052ef800:
          uVar16 = System_Runtime_Serialization_InvalidDataContractException___ctor();
          goto LAB_052ef888;
        }
        if (iVar7 != 10) goto LAB_052ef7d8;
        if (*(int *)(param_1 + 0x58) != 0) {
          FUN_052f0580(param_1,3);
        }
        uVar2 = *(int *)(param_1 + 0x40) - 1;
        if (uVar2 == 0 || *(int *)(param_1 + 0x40) < 1) {
          uVar16 = FUN_052f0fb8();
          goto LAB_052ef888;
        }
        lVar18 = *(long *)(param_1 + 0x38);
        *(uint *)(param_1 + 0x40) = uVar2;
        if (lVar18 == 0) goto LAB_052ef7b0;
        if (*(uint *)(lVar18 + 0x18) <= uVar2) goto LAB_052ef7b4;
        lVar18 = *(long *)(lVar18 + (ulong)uVar2 * 8 + 0x20);
        if (*(int *)(param_1 + 0x58) == 0) {
          if (lVar18 == 0) goto LAB_052ef7b0;
          if (*(int *)(lVar18 + 0x10) != 6) goto LAB_052ef884;
        }
        else {
          if (lVar18 == 0) goto LAB_052ef7b0;
          iVar7 = *(int *)(lVar18 + 0x10);
          uVar11 = FUN_052f0c9c(param_1);
          if (iVar7 == 6) {
            plVar12 = (long *)FUN_052f0c9c(param_1);
            if (plVar12 == (long *)0x0) goto LAB_052ef7b0;
            if (*plVar12 != *(long *)Unity_Burst_BurstCompiler_<>c_TypeInfo) {
                    /* WARNING: Subroutine does not return */
              FUN_02b3ce44(plVar12);
            }
            FUN_052c5520(plVar12,uVar11,0);
            FUN_052c59f0(plVar12,0);
          }
          else {
            uVar19 = *(undefined8 *)(param_1 + 0x48);
            plVar12 = (long *)thunk_FUN_02b79644(*(undefined8 *)
                                                  UnityEngine_Rendering_DebugDisplaySettingsUI_<>c__DisplayClass3_0_TypeInfo
                                                );
            FUN_052f0ff8(plVar12,uVar19,0,uVar11);
          }
LAB_052ef63c:
          FUN_052f0b80(param_1,plVar12);
        }
LAB_052ef640:
        *(undefined4 *)(param_1 + 0x58) = 2;
      }
      else {
        if (iVar7 == 0xb) {
          if (*(int *)(param_1 + 0x58) != 0) goto LAB_052ef7b8;
          uVar2 = *(uint *)(param_1 + 0x40);
          uVar11 = *(undefined8 *)puVar6;
          lVar15 = *(long *)(param_1 + 0x38);
          uVar8 = *(undefined4 *)(param_1 + 0x34);
          *(uint *)(param_1 + 0x40) = uVar2 + 1;
          lVar18 = thunk_FUN_02b79644(uVar11);
          FUN_04dbdb8c(lVar18,0);
          *(undefined4 *)(lVar18 + 0x10) = 5;
          *(undefined4 *)(lVar18 + 0x14) = uVar8;
          *(undefined4 *)(lVar18 + 0x18) = 0x18;
          if (lVar15 != 0) {
            if (uVar2 < *(uint *)(lVar15 + 0x18)) {
              plVar12 = (long *)(lVar15 + (long)(int)uVar2 * 8 + 0x20);
              *plVar12 = lVar18;
              thunk_FUN_02bb0e9c(plVar12,lVar18);
              goto LAB_052ef640;
            }
            goto LAB_052ef7b4;
          }
          goto LAB_052ef7b0;
        }
        if (iVar7 != 0xc) goto LAB_052ef7d8;
        uVar8 = *(undefined4 *)(param_1 + 0x34);
LAB_052ef6e4:
        uVar2 = *(uint *)(param_1 + 0x40);
        lVar15 = *(long *)(param_1 + 0x38);
        lVar18 = *(long *)UnityEngine_Rendering_DebugDisplaySettingsVolume_WidgetFactory_TypeInfo;
        *(uint *)(param_1 + 0x40) = uVar2 + 1;
        if (*(int *)(lVar18 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        uVar9 = FUN_052f115c(uVar8);
        lVar18 = thunk_FUN_02b79644(*(undefined8 *)puVar6);
        FUN_04dbdb8c(lVar18,0);
        *(undefined4 *)(lVar18 + 0x10) = 1;
        *(undefined4 *)(lVar18 + 0x14) = uVar8;
        *(undefined4 *)(lVar18 + 0x18) = uVar9;
        if (lVar15 == 0) goto LAB_052ef7b0;
        if (*(uint *)(lVar15 + 0x18) <= uVar2) goto LAB_052ef7b4;
        plVar12 = (long *)(lVar15 + (long)(int)uVar2 * 8 + 0x20);
        *plVar12 = lVar18;
        thunk_FUN_02bb0e9c(plVar12,lVar18);
      }
      goto LAB_052eed38;
    }
    if (iVar7 < 0x10) {
      if (iVar7 != 0xd) {
        if (iVar7 == 0xf)
        goto System_Runtime_Serialization_Globals__get_TypeOfOptionalFieldAttribute;
        goto LAB_052ef7d8;
      }
      if (*(int *)(param_1 + 0x58) == 0) {
        iVar7 = *(int *)(param_1 + 0x34);
        if (iVar7 == 0x10) {
          uVar8 = 1;
        }
        else {
          if (iVar7 != 0xf) {
            thunk_FUN_02ba3594(
                              UnityEngine_Rendering_DebugDisplaySettingsVolume_WidgetFactory_TypeInfo
                              );
            FUN_0275e12c();
            FUN_052f109c(iVar7);
            goto System_Runtime_Serialization_Globals__get_TypeOfXmlNodeArray;
          }
          uVar8 = 2;
        }
        *(undefined4 *)(param_1 + 0x34) = uVar8;
        goto LAB_052ef6e4;
      }
      uVar8 = *(undefined4 *)(param_1 + 0x34);
      *(undefined4 *)(param_1 + 0x58) = 0;
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar8 = FUN_052f115c(uVar8);
      FUN_052f0580(param_1,uVar8);
      uVar2 = *(uint *)(param_1 + 0x40);
      uVar8 = *(undefined4 *)(param_1 + 0x34);
      lVar18 = *(long *)(param_1 + 0x38);
      *(uint *)(param_1 + 0x40) = uVar2 + 1;
      uVar9 = FUN_052f115c(uVar8);
      lVar15 = thunk_FUN_02b79644(*(undefined8 *)puVar6);
      FUN_04dbdb8c(lVar15,0);
      *(undefined4 *)(lVar15 + 0x18) = uVar9;
      *(undefined4 *)(lVar15 + 0x10) = 3;
      *(undefined4 *)(lVar15 + 0x14) = uVar8;
      if (lVar18 == 0) goto LAB_052ef7b0;
      if (*(uint *)(lVar18 + 0x18) <= uVar2) goto LAB_052ef7b4;
      lVar18 = lVar18 + (long)(int)uVar2 * 8;
LAB_052ef6cc:
      *(long *)(lVar18 + 0x20) = lVar15;
      thunk_FUN_02bb0e9c((long *)(lVar18 + 0x20),lVar15);
      goto LAB_052eed38;
    }
    if (iVar7 == 0x10) {
      lVar18 = FUN_052f0c18(param_1);
      if (lVar18 == 0) goto LAB_052ef7d8;
      uVar11 = thunk_FUN_02b4c898(lVar18,0);
      uVar19 = *(undefined8 *)
                UnityEngine_XR_Interaction_Toolkit_Utilities_BurstLerpUtility_BezierLerp_00000344_PostfixBurstDelegate_TypeInfo
      ;
      if (*(int *)(*(long *)(PTR_DAT_06312310 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02b9ad44(*(long *)(PTR_DAT_06312310 + 0xe0));
      }
      uVar19 = FUN_04d8a7b0(uVar19,0);
      uVar13 = FUN_04d938a0(uVar11,uVar19,0);
      if (((uVar13 & 1) == 0) || (FUN_052f0130(param_1), *(int *)(param_1 + 0x30) != 1))
      goto LAB_052ef7d8;
      plVar12 = (long *)FUN_052f0c9c(param_1);
      if (plVar12 == (long *)0x0) goto LAB_052ef7b0;
      if (*plVar12 != *(long *)puVar5) {
LAB_052ef808:
                    /* WARNING: Subroutine does not return */
        FUN_02b3ce44();
      }
      lVar18 = plVar12[3];
      uVar11 = FUN_052f0854(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x2c),
                            *(undefined4 *)(param_1 + 0x28));
      uVar11 = FUN_04c0a5c4(lVar18,*(undefined8 *)PTR_DAT_0631a648,uVar11,0);
      uVar14 = *(undefined8 *)(param_1 + 0x48);
      uVar19 = thunk_FUN_02b79644(*(undefined8 *)puVar5);
      FUN_052f1208(uVar19,uVar14,uVar11);
      FUN_052f0b80(param_1,uVar19);
      goto LAB_052eed38;
    }
    if (iVar7 != 0x12) {
LAB_052ef7d8:
      uVar16 = FUN_04c103c8(0,*(undefined8 *)(param_1 + 0x20),*(int *)(param_1 + 0x2c),
                            *(int *)(param_1 + 0x28) - *(int *)(param_1 + 0x2c),0);
      uVar16 = FUN_052f124c(uVar16,*(int *)(param_1 + 0x2c) + 1);
LAB_052ef888:
      uVar17 = thunk_FUN_02ba3594(UnityEngine_Rendering_DebugUI_FloatField_TypeInfo);
                    /* WARNING: Subroutine does not return */
      FUN_02b3c988(uVar16,uVar17);
    }
    if (*(int *)(param_1 + 0x58) == 0) {
      if (*(int *)(param_1 + 0x44) != 0) {
        uVar16 = *(undefined8 *)(param_1 + 0x38);
        iVar7 = *(int *)(param_1 + 0x40);
        FUN_0275e13c(uVar16);
        FUN_02a9a298(uVar16,(long)(iVar7 + -1));
LAB_052ef884:
        uVar16 = FUN_052f04f4();
        goto LAB_052ef888;
      }
      goto LAB_052ef764;
    }
    FUN_052f0580(param_1,3);
    if (*(int *)(param_1 + 0x40) != 1) {
      uVar16 = FUN_052f079c();
      goto LAB_052ef888;
    }
    iVar7 = *(int *)(param_1 + 0x30);
  } while( true );
}


