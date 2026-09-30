/*
FUNCTION_NAME: FUN_072cf3bc
ENTRY_POINT: 072cf3bc
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_7;weak_xr_or_state_hits_7;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_7
*/


/* WARNING: Removing unreachable block (ram,0x072cfba4) */

void FUN_072cf3bc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 uVar8;
  ulong uVar9;
  int *piVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  
  if ((DAT_08268b01 & 1) == 0) {
    FUN_0373b518(OVRUnityHumanoidSkeletonRetargeter_JointAdjustment___TypeInfo);
    FUN_0373b518(PTR_DAT_07d960d8);
    FUN_0373b518(PTR_DAT_07d96220);
    FUN_0373b518(PTR_DAT_07d86440);
    FUN_0373b518(UnityEngine_TextCore_RichTextTagParser_TagTypeInfo___TypeInfo);
    FUN_0373b518(RootMotion_FinalIK_RotationLimitPolygonal_LimitPoint___TypeInfo);
    FUN_0373b518(PTR_DAT_07d896f8);
    FUN_0373b518(PTR_DAT_07d8e018);
    FUN_0373b518(PTR_DAT_07d8e020);
    FUN_0373b518(PTR_DAT_07d89700);
    FUN_0373b518(PTR_DAT_07d963a8);
    FUN_0373b518(RootMotion_FinalIK_RotationLimitPolygonal_ReachCone___TypeInfo);
    FUN_0373b518(OVRPlugin_BodyJointLocation___TypeInfo);
    FUN_0373b518(UnityEngine_Rendering_STP_HistoryContext___TypeInfo);
    FUN_0373b518(UnityEngine_Rendering_STP_PerViewConfig___TypeInfo);
    FUN_0373b518(
                UnityEngine_Rendering_Universal_ScreenSpaceAmbientOcclusionPass_ShaderPasses___TypeInfo
                );
    DAT_08268b01 = 1;
  }
  lVar5 = FUN_072ced48();
  puVar4 = OVRUnityHumanoidSkeletonRetargeter_JointAdjustment___TypeInfo;
  if (lVar5 != 0) {
    uVar11 = *(undefined8 *)(lVar5 + 0x30);
    if (*(int *)(*(long *)PTR_DAT_07d960d8 + 0xe4) == 0) {
      thunk_FUN_03798b70(*(long *)PTR_DAT_07d960d8);
    }
    uVar11 = FUN_03efdf84(uVar11,*(undefined8 *)puVar4);
    if (DAT_08268bf0 == '\0') {
      FUN_0373b518(OVRPlugin_Bone___TypeInfo);
      DAT_08268bf0 = '\x01';
    }
    puVar4 = OVRPlugin_Bone___TypeInfo;
    puVar6 = (undefined8 *)(*(long *)(*(long *)OVRPlugin_Bone___TypeInfo + 0xb8) + 0x10);
    *puVar6 = uVar11;
    thunk_FUN_037aeb94(puVar6,uVar11);
    if (DAT_08268bee == '\0') {
      FUN_0373b518(OVRPlugin_Bone___TypeInfo);
      DAT_08268bee = '\x01';
    }
    puVar1 = OVRPlugin_BodyJointLocation___TypeInfo;
    FUN_072cff44(*(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x10));
    if (DAT_08268bed == '\0') {
      FUN_0373b518(OVRPlugin_Bone___TypeInfo);
      DAT_08268bed = '\x01';
    }
    lVar5 = *(long *)puVar1;
    uVar11 = *(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 8);
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar5 = *(long *)puVar1;
    }
    puVar2 = UnityEngine_TextCore_RichTextTagParser_TagTypeInfo___TypeInfo;
    lVar12 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x10);
    if (lVar12 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar5 = *(long *)puVar1;
      }
      uVar13 = **(undefined8 **)(lVar5 + 0xb8);
      lVar12 = thunk_FUN_037788cc(*(undefined8 *)
                                   RootMotion_FinalIK_RotationLimitPolygonal_LimitPoint___TypeInfo);
      FUN_044a4918(lVar12,uVar13,
                   *(undefined8 *)RootMotion_FinalIK_RotationLimitPolygonal_ReachCone___TypeInfo,0);
      plVar7 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10);
      *plVar7 = lVar12;
      thunk_FUN_037aeb94(plVar7,lVar12);
    }
    plVar7 = (long *)FUN_03f6a6a8(uVar11,lVar12,*(undefined8 *)puVar2);
    if (plVar7 != (long *)0x0) {
      lVar5 = *plVar7;
      uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_07d8e018) {
            puVar6 = (undefined8 *)(lVar5 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_072cf674;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar6 = (undefined8 *)FUN_0377596c(plVar7,*(long *)PTR_DAT_07d8e018,0);
LAB_072cf674:
      plVar7 = (long *)(*(code *)*puVar6)(plVar7,puVar6[1]);
      puVar3 = PTR_DAT_07d96220;
      puVar2 = PTR_DAT_07d8e020;
      puVar1 = PTR_DAT_07d89700;
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
LAB_072cf6a4:
      do {
        lVar5 = *plVar7;
        uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
              puVar6 = (undefined8 *)(lVar5 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_072cf6f0;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar6 = (undefined8 *)FUN_0377596c(plVar7,*(long *)puVar1,0);
LAB_072cf6f0:
        uVar9 = (*(code *)*puVar6)(plVar7,puVar6[1]);
        if ((uVar9 & 1) == 0) {
          if (plVar7 == (long *)0x0) {
            return;
          }
          lVar5 = *plVar7;
          uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar9 == 0) goto LAB_072cfb14;
          piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          goto LAB_072cfafc;
        }
        lVar5 = *plVar7;
        uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
              puVar6 = (undefined8 *)(lVar5 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_072cf74c;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar6 = (undefined8 *)FUN_0377596c(plVar7,*(long *)puVar2,0);
LAB_072cf74c:
        uVar11 = (*(code *)*puVar6)(plVar7,puVar6[1]);
        if (DAT_08268bee == '\0') {
          FUN_0373b518(puVar4);
          DAT_08268bee = '\x01';
        }
        lVar5 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x10);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        uVar9 = FUN_072d0368(lVar5,uVar11);
        if ((uVar9 & 1) == 0) {
          if (DAT_08268bee == '\0') {
            FUN_0373b518(puVar4);
            DAT_08268bee = '\x01';
          }
          lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
          lVar12 = *(long *)(lVar5 + 0x10);
          if (DAT_08268bed == '\0') {
            FUN_0373b518(puVar4);
            DAT_08268bed = '\x01';
            lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
          }
          if (*(long *)(lVar5 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0373b7b4();
          }
          uVar13 = FUN_072d0cc0(*(long *)(lVar5 + 8),uVar11);
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0373b7b4();
          }
          FUN_072d0de0(lVar12,uVar11,uVar13);
          goto LAB_072cf6a4;
        }
        if (DAT_08268bee == '\0') {
          FUN_0373b518(puVar4);
          DAT_08268bee = '\x01';
        }
        lVar5 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x10);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        lVar5 = FUN_072d0cc0(lVar5,uVar11);
        if (lVar5 == 0) {
          if (DAT_08268bed == '\0') {
            FUN_0373b518(puVar4);
            DAT_08268bed = '\x01';
          }
          lVar5 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 8);
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0373b7b4();
          }
          lVar5 = FUN_072d0cc0(lVar5,uVar11);
          if (lVar5 != 0) {
            if (DAT_08268bed == '\0') {
              FUN_0373b518(puVar4);
              DAT_08268bed = '\x01';
            }
            lVar5 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 8);
            if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_0373b7b4();
            }
            lVar5 = FUN_072d0cc0(lVar5,uVar11);
            if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_0373b7b4();
            }
            uVar13 = thunk_FUN_0374b7cc(lVar5,0);
            if (*(int *)(*(long *)PTR_DAT_07d963a8 + 0xe4) == 0) {
              thunk_FUN_03798b70();
            }
            uVar9 = FUN_072bed4c(uVar13,0);
            if ((uVar9 & 1) == 0) {
              uVar11 = FUN_060c1430(*(undefined8 *)
                                     UnityEngine_Rendering_Universal_ScreenSpaceAmbientOcclusionPass_ShaderPasses___TypeInfo
                                    ,uVar11,*(undefined8 *)
                                             UnityEngine_Rendering_STP_HistoryContext___TypeInfo,0);
              if (*(int *)(*(long *)PTR_DAT_07d86440 + 0xe4) == 0) {
                thunk_FUN_03798b70();
              }
              FUN_0755a078(uVar11,0);
              goto LAB_072cf6a4;
            }
          }
          if (DAT_08268bee == '\0') {
            FUN_0373b518(puVar4);
            DAT_08268bee = '\x01';
          }
          lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
          lVar12 = *(long *)(lVar5 + 0x10);
          if (DAT_08268bed == '\0') {
            FUN_0373b518(puVar4);
            DAT_08268bed = '\x01';
            lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
          }
          if (*(long *)(lVar5 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0373b7b4();
          }
          uVar13 = FUN_072d0cc0(*(long *)(lVar5 + 8),uVar11);
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0373b7b4();
          }
          FUN_072d0de0(lVar12,uVar11,uVar13);
          goto LAB_072cf6a4;
        }
        if (DAT_08268bed == '\0') {
          FUN_0373b518(puVar4);
          DAT_08268bed = '\x01';
        }
        lVar5 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 8);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        uVar13 = FUN_072d0cc0(lVar5,uVar11);
        if (DAT_08268bee == '\0') {
          FUN_0373b518(puVar4);
          DAT_08268bee = '\x01';
        }
        lVar5 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x10);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        lVar5 = FUN_072d0cc0(lVar5,uVar11);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        uVar8 = thunk_FUN_0374b7cc(lVar5,0);
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_03798b70();
        }
        uVar9 = FUN_0723c690(uVar13,uVar8,1,0);
        if ((uVar9 & 1) == 0) {
          if (DAT_08268bee == '\0') {
            FUN_0373b518(puVar4);
            DAT_08268bee = '\x01';
          }
          lVar5 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x10);
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0373b7b4();
          }
          lVar5 = FUN_072d0cc0(lVar5,uVar11);
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0373b7b4();
          }
          uVar13 = thunk_FUN_0374b7cc(lVar5,0);
          uVar11 = FUN_060c1fd4(*(undefined8 *)UnityEngine_Rendering_STP_PerViewConfig___TypeInfo,
                                uVar11,uVar13,0);
          if (*(int *)(*(long *)PTR_DAT_07d86440 + 0xe4) == 0) {
            thunk_FUN_03798b70();
          }
          FUN_0755a078(uVar11,0);
        }
        else {
          if (DAT_08268bee == '\0') {
            FUN_0373b518(puVar4);
            DAT_08268bee = '\x01';
          }
          lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
          lVar12 = *(long *)(lVar5 + 0x10);
          if (DAT_08268bed == '\0') {
            FUN_0373b518(puVar4);
            DAT_08268bed = '\x01';
            lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
          }
          if (*(long *)(lVar5 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0373b7b4();
          }
          uVar13 = FUN_072d0cc0(*(long *)(lVar5 + 8),uVar11);
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0373b7b4();
          }
          FUN_072d0de0(lVar12,uVar11,uVar13);
        }
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
LAB_072cfafc:
    if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_07d896f8) {
      puVar6 = (undefined8 *)(lVar5 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_072cfb30;
    }
  }
LAB_072cfb14:
  puVar6 = (undefined8 *)FUN_0377596c(plVar7,*(long *)PTR_DAT_07d896f8,0);
LAB_072cfb30:
  (*(code *)*puVar6)(plVar7,puVar6[1]);
  return;
}


