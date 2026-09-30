/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.ActionBasedSnapTurnProvider$$set_leftHandSnapTurnAction
ENTRY_POINT: 072cf4d8
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_21;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_6
*/


/* WARNING: Removing unreachable block (ram,0x072cfba4) */

void UnityEngine_XR_Interaction_Toolkit_ActionBasedSnapTurnProvider__set_leftHandSnapTurnAction
               (void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  ulong uVar10;
  int *piVar11;
  long lVar12;
  undefined8 uVar13;
  
  uVar5 = FUN_03efdf84();
  if (DAT_08268bf0 == '\0') {
    FUN_0373b518(OVRPlugin_Bone___TypeInfo);
    DAT_08268bf0 = '\x01';
  }
  puVar4 = OVRPlugin_Bone___TypeInfo;
  puVar6 = (undefined8 *)(*(long *)(*(long *)OVRPlugin_Bone___TypeInfo + 0xb8) + 0x10);
  *puVar6 = uVar5;
  thunk_FUN_037aeb94(puVar6,uVar5);
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
  lVar7 = *(long *)puVar1;
  uVar5 = *(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 8);
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar7 = *(long *)puVar1;
  }
  puVar2 = UnityEngine_TextCore_RichTextTagParser_TagTypeInfo___TypeInfo;
  lVar12 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x10);
  if (lVar12 == 0) {
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar7 = *(long *)puVar1;
    }
    uVar13 = **(undefined8 **)(lVar7 + 0xb8);
    lVar12 = thunk_FUN_037788cc(*(undefined8 *)
                                 RootMotion_FinalIK_RotationLimitPolygonal_LimitPoint___TypeInfo);
    FUN_044a4918(lVar12,uVar13,
                 *(undefined8 *)RootMotion_FinalIK_RotationLimitPolygonal_ReachCone___TypeInfo,0);
    plVar8 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10);
    *plVar8 = lVar12;
    thunk_FUN_037aeb94(plVar8,lVar12);
  }
  plVar8 = (long *)FUN_03f6a6a8(uVar5,lVar12,*(undefined8 *)puVar2);
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  lVar7 = *plVar8;
  uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_07d8e018) {
        puVar6 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
        goto LAB_072cf674;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar6 = (undefined8 *)FUN_0377596c(plVar8,*(long *)PTR_DAT_07d8e018,0);
LAB_072cf674:
  plVar8 = (long *)(*(code *)*puVar6)(plVar8,puVar6[1]);
  puVar3 = PTR_DAT_07d96220;
  puVar2 = PTR_DAT_07d8e020;
  puVar1 = PTR_DAT_07d89700;
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
LAB_072cf6a4:
  do {
    lVar7 = *plVar8;
    uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
          puVar6 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_072cf6f0;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)FUN_0377596c(plVar8,*(long *)puVar1,0);
LAB_072cf6f0:
    uVar10 = (*(code *)*puVar6)(plVar8,puVar6[1]);
    if ((uVar10 & 1) == 0) {
      if (plVar8 == (long *)0x0) {
        return;
      }
      lVar7 = *plVar8;
      uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar10 == 0) goto LAB_072cfb14;
      piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      break;
    }
    lVar7 = *plVar8;
    uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
          puVar6 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_072cf74c;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)FUN_0377596c(plVar8,*(long *)puVar2,0);
LAB_072cf74c:
    uVar5 = (*(code *)*puVar6)(plVar8,puVar6[1]);
    if (DAT_08268bee == '\0') {
      FUN_0373b518(puVar4);
      DAT_08268bee = '\x01';
    }
    lVar7 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x10);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    uVar10 = FUN_072d0368(lVar7,uVar5);
    if ((uVar10 & 1) == 0) {
      if (DAT_08268bee == '\0') {
        FUN_0373b518(puVar4);
        DAT_08268bee = '\x01';
      }
      lVar7 = *(long *)(*(long *)puVar4 + 0xb8);
      lVar12 = *(long *)(lVar7 + 0x10);
      if (DAT_08268bed == '\0') {
        FUN_0373b518(puVar4);
        DAT_08268bed = '\x01';
        lVar7 = *(long *)(*(long *)puVar4 + 0xb8);
      }
      if (*(long *)(lVar7 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      uVar13 = FUN_072d0cc0(*(long *)(lVar7 + 8),uVar5);
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      FUN_072d0de0(lVar12,uVar5,uVar13);
      goto LAB_072cf6a4;
    }
    if (DAT_08268bee == '\0') {
      FUN_0373b518(puVar4);
      DAT_08268bee = '\x01';
    }
    lVar7 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x10);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    lVar7 = FUN_072d0cc0(lVar7,uVar5);
    if (lVar7 == 0) {
      if (DAT_08268bed == '\0') {
        FUN_0373b518(puVar4);
        DAT_08268bed = '\x01';
      }
      lVar7 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 8);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      lVar7 = FUN_072d0cc0(lVar7,uVar5);
      if (lVar7 != 0) {
        if (DAT_08268bed == '\0') {
          FUN_0373b518(puVar4);
          DAT_08268bed = '\x01';
        }
        lVar7 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 8);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        lVar7 = FUN_072d0cc0(lVar7,uVar5);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        uVar13 = thunk_FUN_0374b7cc(lVar7,0);
        if (*(int *)(*(long *)PTR_DAT_07d963a8 + 0xe4) == 0) {
          thunk_FUN_03798b70();
        }
        uVar10 = FUN_072bed4c(uVar13,0);
        if ((uVar10 & 1) == 0) {
          uVar5 = FUN_060c1430(*(undefined8 *)
                                UnityEngine_Rendering_Universal_ScreenSpaceAmbientOcclusionPass_ShaderPasses___TypeInfo
                               ,uVar5,*(undefined8 *)
                                       UnityEngine_Rendering_STP_HistoryContext___TypeInfo,0);
          if (*(int *)(*(long *)PTR_DAT_07d86440 + 0xe4) == 0) {
            thunk_FUN_03798b70();
          }
          FUN_0755a078(uVar5,0);
          goto LAB_072cf6a4;
        }
      }
      if (DAT_08268bee == '\0') {
        FUN_0373b518(puVar4);
        DAT_08268bee = '\x01';
      }
      lVar7 = *(long *)(*(long *)puVar4 + 0xb8);
      lVar12 = *(long *)(lVar7 + 0x10);
      if (DAT_08268bed == '\0') {
        FUN_0373b518(puVar4);
        DAT_08268bed = '\x01';
        lVar7 = *(long *)(*(long *)puVar4 + 0xb8);
      }
      if (*(long *)(lVar7 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      uVar13 = FUN_072d0cc0(*(long *)(lVar7 + 8),uVar5);
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      FUN_072d0de0(lVar12,uVar5,uVar13);
      goto LAB_072cf6a4;
    }
    if (DAT_08268bed == '\0') {
      FUN_0373b518(puVar4);
      DAT_08268bed = '\x01';
    }
    lVar7 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 8);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    uVar13 = FUN_072d0cc0(lVar7,uVar5);
    if (DAT_08268bee == '\0') {
      FUN_0373b518(puVar4);
      DAT_08268bee = '\x01';
    }
    lVar7 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x10);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    lVar7 = FUN_072d0cc0(lVar7,uVar5);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    uVar9 = thunk_FUN_0374b7cc(lVar7,0);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    uVar10 = FUN_0723c690(uVar13,uVar9,1,0);
    if ((uVar10 & 1) == 0) {
      if (DAT_08268bee == '\0') {
        FUN_0373b518(puVar4);
        DAT_08268bee = '\x01';
      }
      lVar7 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x10);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      lVar7 = FUN_072d0cc0(lVar7,uVar5);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      uVar13 = thunk_FUN_0374b7cc(lVar7,0);
      uVar5 = FUN_060c1fd4(*(undefined8 *)UnityEngine_Rendering_STP_PerViewConfig___TypeInfo,uVar5,
                           uVar13,0);
      if (*(int *)(*(long *)PTR_DAT_07d86440 + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      FUN_0755a078(uVar5,0);
    }
    else {
      if (DAT_08268bee == '\0') {
        FUN_0373b518(puVar4);
        DAT_08268bee = '\x01';
      }
      lVar7 = *(long *)(*(long *)puVar4 + 0xb8);
      lVar12 = *(long *)(lVar7 + 0x10);
      if (DAT_08268bed == '\0') {
        FUN_0373b518(puVar4);
        DAT_08268bed = '\x01';
        lVar7 = *(long *)(*(long *)puVar4 + 0xb8);
      }
      if (*(long *)(lVar7 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      uVar13 = FUN_072d0cc0(*(long *)(lVar7 + 8),uVar5);
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      FUN_072d0de0(lVar12,uVar5,uVar13);
    }
  } while( true );
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
    if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_07d896f8) {
      puVar6 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_072cfb30;
    }
  }
LAB_072cfb14:
  puVar6 = (undefined8 *)FUN_0377596c(plVar8,*(long *)PTR_DAT_07d896f8,0);
LAB_072cfb30:
  (*(code *)*puVar6)(plVar8,puVar6[1]);
  return;
}


