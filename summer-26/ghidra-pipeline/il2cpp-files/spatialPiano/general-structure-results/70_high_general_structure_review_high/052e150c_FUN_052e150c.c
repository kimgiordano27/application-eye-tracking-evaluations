/*
FUNCTION_NAME: FUN_052e150c
ENTRY_POINT: 052e150c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;data_collection;telemetry
EVIDENCE: weak_xr_or_state_hits_5;validity_or_gating_hits_21;strong_file_logging_hits_2;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x052e1f1c) */
/* WARNING: Removing unreachable block (ram,0x052e1fc0) */
/* WARNING: Removing unreachable block (ram,0x052e1fdc) */
/* WARNING: Removing unreachable block (ram,0x052e1d1c) */

void FUN_052e150c(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  undefined4 *puVar11;
  undefined8 *puVar12;
  ulong uVar13;
  int *piVar14;
  long lVar15;
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  undefined8 uVar19;
  float fVar20;
  long local_a0;
  long **local_98;
  long *local_90;
  long *local_88;
  long *local_78;
  
  if ((DAT_06bbb025 & 1) == 0) {
    FUN_02f08768(
                UnityEngine_XR_Interaction_Toolkit_Locomotion_Climbing_ClimbSettingsDatumProperty_TypeInfo
                );
    FUN_02f08768(Oculus_Interaction_Surfaces_ClippedPlaneSurface_TypeInfo);
    FUN_02f08768(UnityEngine_UI_ClipperRegistry_TypeInfo);
    FUN_02f08768(System_Net_CloseExState_TypeInfo);
    FUN_02f08768(System_Linq_Expressions_CoalesceConversionBinaryExpression_TypeInfo);
    FUN_02f08768(System_Linq_Expressions_Interpreter_CoalescingBranchInstruction_TypeInfo);
    FUN_02f08768(PTR_DAT_067c91b0);
    FUN_02f08768(System_Security_CodeAccessPermission_TypeInfo);
    FUN_02f08768(System_Xml_Serialization_CodeIdentifier_TypeInfo);
    FUN_02f08768(System_Threading_CancellationCallbackCoreWorkArguments_TypeInfo);
    FUN_02f08768(System_Globalization_CodePageDataItem_TypeInfo);
    FUN_02f08768(Mono_Globalization_Unicode_CodePointIndexer_TypeInfo);
    FUN_02f08768(System_Threading_CancellationCallbackInfo_TypeInfo);
    FUN_02f08768(PTR_DAT_067c91b8);
    FUN_02f08768(PTR_DAT_067d1a98);
    FUN_02f08768(PTR_DAT_067c8f20);
    FUN_02f08768(System_Runtime_Serialization_CodeTypeReference_TypeInfo);
    FUN_02f08768(UnityEditor_Analytics_CollabOperationAnalytic_TypeInfo);
    FUN_02f08768(System_ComponentModel_CollectionChangeEventArgs_TypeInfo);
    FUN_02f08768(System_ComponentModel_CollectionChangeEventHandler_TypeInfo);
    FUN_02f08768(System_Runtime_Serialization_CollectionDataContract_TypeInfo);
    FUN_02f08768(System_Runtime_Serialization_CollectionDataContractAttribute_TypeInfo);
    FUN_02f08768(PTR_DAT_067cbf00);
    DAT_06bbb025 = 1;
  }
  puVar2 = System_ComponentModel_CollectionChangeEventArgs_TypeInfo;
  local_78 = (long *)0x0;
  local_90 = (long *)0x0;
  local_88 = (long *)0x0;
  if (DAT_06bb42c1 == '\0') {
    FUN_02f08768(PTR_DAT_067c8f78);
    DAT_06bb42c1 = '\x01';
  }
  uVar19 = **(undefined8 **)(*(long *)PTR_DAT_067c8f78 + 0xb8);
  fVar20 = *(float *)(*(undefined8 **)(*(long *)PTR_DAT_067c8f78 + 0xb8) + 1);
  uVar7 = FUN_052e20ac(param_1);
  lVar10 = *(long *)puVar2;
  if (*(int *)(lVar10 + 0xe4) == 0) {
    thunk_FUN_02f6670c(lVar10);
    lVar10 = *(long *)puVar2;
  }
  puVar3 = 
  UnityEngine_XR_Interaction_Toolkit_Locomotion_Climbing_ClimbSettingsDatumProperty_TypeInfo;
  puVar12 = *(undefined8 **)(lVar10 + 0xb8);
  lVar15 = puVar12[1];
  if (lVar15 == 0) {
    if (*(int *)(lVar10 + 0xe4) == 0) {
      thunk_FUN_02f6670c(lVar10);
      puVar12 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
    }
    uVar16 = *puVar12;
    lVar15 = thunk_FUN_02f45270(*(undefined8 *)System_Net_CloseExState_TypeInfo);
    FUN_04dfde1c(lVar15,uVar16,
                 *(undefined8 *)System_Runtime_Serialization_CodeTypeReference_TypeInfo,0);
    *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8) = lVar15;
  }
  uVar7 = FUN_03396044(uVar7,lVar15,*(undefined8 *)puVar3);
  lVar10 = *(long *)puVar2;
  if (*(int *)(lVar10 + 0xe4) == 0) {
    thunk_FUN_02f6670c(lVar10);
    lVar10 = *(long *)puVar2;
  }
  puVar3 = Oculus_Interaction_Surfaces_ClippedPlaneSurface_TypeInfo;
  puVar12 = *(undefined8 **)(lVar10 + 0xb8);
  lVar15 = puVar12[3];
  if (lVar15 == 0) {
    if (*(int *)(lVar10 + 0xe4) == 0) {
      thunk_FUN_02f6670c(lVar10);
      puVar12 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
    }
    uVar16 = *puVar12;
    lVar15 = thunk_FUN_02f45270(*(undefined8 *)UnityEngine_UI_ClipperRegistry_TypeInfo);
    FUN_04e02ad4(lVar15,uVar16,*(undefined8 *)UnityEditor_Analytics_CollabOperationAnalytic_TypeInfo
                 ,0);
    *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18) = lVar15;
  }
  plVar8 = (long *)FUN_0339ccdc(uVar7,lVar15,*(undefined8 *)puVar3);
  if (plVar8 != (long *)0x0) {
    lVar10 = *plVar8;
    uVar13 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)System_Security_CodeAccessPermission_TypeInfo) {
          puVar12 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
          goto FUN_052e1830;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar12 = (undefined8 *)
              FUN_02f421d0(plVar8,*(long *)System_Security_CodeAccessPermission_TypeInfo,0);
FUN_052e1830:
    plVar8 = (long *)(*(code *)*puVar12)(plVar8,puVar12[1]);
    puVar5 = System_Linq_Expressions_CoalesceConversionBinaryExpression_TypeInfo;
    puVar4 = PTR_DAT_067d1a98;
    puVar3 = PTR_DAT_067c90a8;
    puVar2 = PTR_DAT_067c8f20;
    local_98 = &local_78;
    local_a0 = 0;
joined_r0x052e1848:
    local_78 = plVar8;
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    lVar10 = *plVar8;
    uVar13 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_067c91b8) {
          puVar12 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
          goto OVR_OpenVR_CVRApplications__GetApplicationProcessId;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar12 = (undefined8 *)FUN_02f421d0(plVar8,*(long *)PTR_DAT_067c91b8,0);
OVR_OpenVR_CVRApplications__GetApplicationProcessId:
    uVar13 = (*(code *)*puVar12)(plVar8,puVar12[1]);
    plVar8 = local_78;
    if ((uVar13 & 1) != 0) {
      if (local_78 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      lVar10 = *local_78;
      uVar13 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) ==
              *(long *)Mono_Globalization_Unicode_CodePointIndexer_TypeInfo) {
            puVar12 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_052e1938;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar12 = (undefined8 *)
                FUN_02f421d0(local_78,*(long *)Mono_Globalization_Unicode_CodePointIndexer_TypeInfo,
                             0);
LAB_052e1938:
      lVar10 = (*(code *)*puVar12)(plVar8,puVar12[1]);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      plVar8 = *(long **)(lVar10 + 0x18);
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      lVar15 = *plVar8;
      uVar13 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) ==
              *(long *)System_Threading_CancellationCallbackCoreWorkArguments_TypeInfo) {
            puVar12 = (undefined8 *)(lVar15 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_052e19a8;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar12 = (undefined8 *)
                FUN_02f421d0(plVar8,*(long *)
                                     System_Threading_CancellationCallbackCoreWorkArguments_TypeInfo
                             ,0);
LAB_052e19a8:
      plVar8 = (long *)(*(code *)*puVar12)(plVar8,puVar12[1]);
      uVar7 = uVar19;
      fVar18 = fVar20;
      do {
        local_88 = plVar8;
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        lVar15 = *plVar8;
        uVar13 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_067c91b8) {
              puVar12 = (undefined8 *)(lVar15 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_052e1a28;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar12 = (undefined8 *)FUN_02f421d0(plVar8,*(long *)PTR_DAT_067c91b8,0);
LAB_052e1a28:
        uVar13 = (*(code *)*puVar12)(plVar8,puVar12[1]);
        plVar8 = local_88;
        if ((uVar13 & 1) == 0) goto LAB_052e1b88;
        if (local_88 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        lVar15 = *local_88;
        uVar13 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) ==
                *(long *)System_Threading_CancellationCallbackInfo_TypeInfo) {
              puVar12 = (undefined8 *)(lVar15 + (long)*piVar14 * 0x10 + 0x138);
              goto OVR_OpenVR_CVRApplications__GetApplicationLaunchArguments;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar12 = (undefined8 *)
                  FUN_02f421d0(local_88,*(long *)System_Threading_CancellationCallbackInfo_TypeInfo,
                               0);
OVR_OpenVR_CVRApplications__GetApplicationLaunchArguments:
        uVar9 = (*(code *)*puVar12)(plVar8,puVar12[1]);
        uVar16 = *(undefined8 *)(param_1 + 0x60);
        uVar1 = *(undefined8 *)(param_1 + 0x68);
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        lVar15 = FUN_03497c3c(uVar16,uVar1,*(undefined8 *)puVar4);
        if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        lVar15 = FUN_033d919c(lVar15,*(undefined8 *)puVar5);
        if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        uVar16 = *(undefined8 *)(param_1 + 0x28);
        uVar6 = *(undefined4 *)(lVar10 + 0x10);
        *(undefined1 *)(lVar15 + 0x70) = 1;
        *(undefined8 *)(lVar15 + 0x68) = uVar9;
        *(undefined4 *)(lVar15 + 100) = uVar6;
        *(undefined8 *)(lVar15 + 0x50) = uVar16;
        lVar15 = FUN_060ed7ac(lVar15,0);
        if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        FUN_06100490(*(undefined4 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x8c),
                     *(undefined4 *)(param_1 + 0x90),lVar15,0);
        if (DAT_06bb42c3 == '\0') {
          FUN_02f08768(puVar3);
          DAT_06bb42c3 = '\x01';
        }
        puVar11 = *(undefined4 **)(*(long *)puVar3 + 0xb8);
        FUN_06100000(*puVar11,puVar11[1],puVar11[2],puVar11[3],lVar15,0);
        fVar17 = (float)((ulong)uVar7 >> 0x20);
        FUN_060ff160(uVar7,fVar17,fVar18,lVar15,0);
        uVar7 = CONCAT44(fVar17 + (float)((ulong)*(undefined8 *)(param_1 + 0x7c) >> 0x20),
                         (float)uVar7 + (float)*(undefined8 *)(param_1 + 0x7c));
        fVar18 = fVar18 + *(float *)(param_1 + 0x84);
        plVar8 = local_88;
      } while( true );
    }
    plVar8 = *local_98;
    if (plVar8 == (long *)0x0) goto LAB_052e1d0c;
    lVar10 = *plVar8;
    uVar13 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar13 == 0) goto LAB_052e1ce4;
    piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    goto LAB_052e1ccc;
  }
  goto LAB_052e1fd4;
LAB_052e1b88:
  if (local_88 != (long *)0x0) {
    lVar10 = *local_88;
    uVar13 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_067c91b0) {
          puVar12 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_052e1bec;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar12 = (undefined8 *)FUN_02f421d0(local_88,*(long *)PTR_DAT_067c91b0,0);
LAB_052e1bec:
    (*(code *)*puVar12)(plVar8,puVar12[1]);
  }
  uVar19 = CONCAT44((float)((ulong)uVar19 >> 0x20) +
                    (float)((ulong)*(undefined8 *)(param_1 + 0x70) >> 0x20),
                    (float)uVar19 + (float)*(undefined8 *)(param_1 + 0x70));
  fVar20 = fVar20 + *(float *)(param_1 + 0x78);
  plVar8 = local_78;
  goto joined_r0x052e1848;
  while( true ) {
    uVar13 = uVar13 - 1;
    piVar14 = piVar14 + 4;
    if (uVar13 == 0) break;
LAB_052e1ccc:
    if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_067c91b0) {
      puVar12 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
      goto OVR_OpenVR_CVRChaperone__GetCalibrationState;
    }
  }
LAB_052e1ce4:
  puVar12 = (undefined8 *)FUN_02f421d0(plVar8,*(long *)PTR_DAT_067c91b0,0);
OVR_OpenVR_CVRChaperone__GetCalibrationState:
  (*(code *)*puVar12)(plVar8,puVar12[1]);
LAB_052e1d0c:
  if (local_a0 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c0();
  }
  if ((*(long *)(param_1 + 0x30) != 0) &&
     (plVar8 = *(long **)(*(long *)(param_1 + 0x30) + 0x40), plVar8 != (long *)0x0)) {
    lVar10 = *plVar8;
    uVar13 = (ulong)*(ushort *)(lVar10 + 0x12e);
    uVar19 = *(undefined8 *)PTR_DAT_067cbf00;
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)System_Xml_Serialization_CodeIdentifier_TypeInfo) {
          puVar12 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_052e1d90;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar12 = (undefined8 *)
              FUN_02f421d0(plVar8,*(long *)System_Xml_Serialization_CodeIdentifier_TypeInfo,0);
LAB_052e1d90:
    puVar2 = System_Globalization_CodePageDataItem_TypeInfo;
    local_90 = (long *)(*(code *)*puVar12)(plVar8,puVar12[1]);
    local_98 = &local_90;
    local_a0 = 0;
    do {
      plVar8 = local_90;
      if (local_90 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      lVar10 = *local_90;
      uVar13 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_067c91b8) {
            puVar12 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_052e1e10;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar12 = (undefined8 *)FUN_02f421d0(local_90,*(long *)PTR_DAT_067c91b8,0);
LAB_052e1e10:
      uVar13 = (*(code *)*puVar12)(plVar8,puVar12[1]);
      plVar8 = local_90;
      if ((uVar13 & 1) == 0) {
        if (local_90 == (long *)0x0) goto OVR_OpenVR_CVRChaperoneSetup__CommitWorkingCopy;
        lVar10 = *local_90;
        uVar13 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar13 == 0) goto LAB_052e1ee8;
        piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        goto LAB_052e1ed0;
      }
      if (local_90 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      lVar10 = *local_90;
      uVar13 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)puVar2) {
            puVar12 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_052e1e74;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar12 = (undefined8 *)FUN_02f421d0(local_90,*(long *)puVar2,0);
LAB_052e1e74:
      lVar10 = (*(code *)*puVar12)(plVar8,puVar12[1]);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      uVar19 = FUN_04f65260(uVar19,*(undefined8 *)(lVar10 + 0x18),0);
    } while( true );
  }
  goto LAB_052e1fd4;
  while( true ) {
    uVar13 = uVar13 - 1;
    piVar14 = piVar14 + 4;
    if (uVar13 == 0) break;
LAB_052e1ed0:
    if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_067c91b0) {
      puVar12 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_052e1f04;
    }
  }
LAB_052e1ee8:
  puVar12 = (undefined8 *)FUN_02f421d0(local_90,*(long *)PTR_DAT_067c91b0,0);
LAB_052e1f04:
  (*(code *)*puVar12)(plVar8,puVar12[1]);
OVR_OpenVR_CVRChaperoneSetup__CommitWorkingCopy:
  if (*(long *)(param_1 + 0x30) != 0) {
    plVar8 = *(long **)(param_1 + 0x98);
    uVar6 = FUN_052dadec();
    local_a0 = CONCAT44(local_a0._4_4_,uVar6);
    uVar7 = thunk_FUN_02f44ec4(*(undefined8 *)
                                System_Linq_Expressions_Interpreter_CoalescingBranchInstruction_TypeInfo
                               ,&local_a0);
    uVar19 = FUN_04f70018(*(undefined8 *)
                           System_Runtime_Serialization_CollectionDataContractAttribute_TypeInfo,
                          uVar7,uVar19,0);
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 0x558))(plVar8,uVar19,*(undefined8 *)(*plVar8 + 0x560));
      return;
    }
  }
LAB_052e1fd4:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


