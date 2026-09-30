/*
FUNCTION_NAME: FUN_061c0000
ENTRY_POINT: 061c0000
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 143
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction;data_collection
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;strong_file_logging_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void FUN_061c0000(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  undefined4 uVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  undefined8 uVar14;
  long lVar15;
  
  if ((DAT_06bcb2e5 & 1) == 0) {
    FUN_02f08768(StringLiteral_1730);
    FUN_02f08768(OVRVirtualKeyboard_CommitTextUnityEvent_TypeInfo);
    FUN_02f08768(Method_UnityEngine_TextCore_Text_TextInfo_IndexOf__);
    FUN_02f08768(StringLiteral_1731);
    FUN_02f08768(StringLiteral_1732);
    FUN_02f08768(Method_System_IO_Compression_GZipStream_set_Position__);
    FUN_02f08768(StringLiteral_1733);
    FUN_02f08768(Method_System_IO_TextReader_Read__);
    FUN_02f08768(Method_System_Reflection_Emit_PropertyBuilder_SetValue__);
    FUN_02f08768(Method_System_IO_TextReader_Read__);
    FUN_02f08768(StringLiteral_1734);
    FUN_02f08768(StringLiteral_1735);
    FUN_02f08768(Method_UnityEngine_UIElements_TextSelectingManipulator_OnCursorIndexChange__);
    FUN_02f08768(OVRPlugin_OVRP_1_95_0_TypeInfo);
    FUN_02f08768(StringLiteral_1736);
    FUN_02f08768(StringLiteral_1737);
    FUN_02f08768(StringLiteral_1738);
    FUN_02f08768(Method_System_IO_TextWriter_Write__);
    FUN_02f08768(OVRPlugin_OVRP_1_94_0_TypeInfo);
    FUN_02f08768(StringLiteral_1739);
    FUN_02f08768(StringLiteral_1740);
    FUN_02f08768(StringLiteral_1741);
    FUN_02f08768(StringLiteral_1663);
    FUN_02f08768(StringLiteral_1702);
    FUN_02f08768(StringLiteral_1742);
    DAT_06bcb2e5 = 1;
  }
  plVar11 = *(long **)(param_1 + 0xa8);
  if (plVar11 != (long *)0x0) {
    iVar9 = (**(code **)(*plVar11 + 0x188))(plVar11,*(undefined8 *)(*plVar11 + 400));
    plVar11 = *(long **)(param_1 + 0xa8);
    *(float *)(param_1 + 0xb0) = (float)iVar9;
    if (plVar11 != (long *)0x0) {
      iVar9 = (**(code **)(*plVar11 + 0x1a8))(plVar11,*(undefined8 *)(*plVar11 + 0x1b0));
      *(float *)(param_1 + 0xb4) = (float)iVar9;
      if (*(long *)(param_1 + 0x40) == 0) {
        uVar14 = thunk_FUN_02f45270(*(undefined8 *)Method_System_IO_TextWriter_Write__);
        FUN_049a5c84(uVar14,*(undefined8 *)
                             Method_UnityEngine_UIElements_TextSelectingManipulator_OnCursorIndexChange__
                    );
        *(undefined8 *)(param_1 + 0x40) = uVar14;
      }
      else {
        FUN_049a6730(*(long *)(param_1 + 0x40),*(undefined8 *)Method_System_IO_TextReader_Read__);
      }
      if (*(long *)(param_1 + 0xd0) == 0) {
        uVar14 = thunk_FUN_02f45270(*(undefined8 *)StringLiteral_1740);
        FUN_049b5ff0(uVar14,*(undefined8 *)StringLiteral_1736);
        *(undefined8 *)(param_1 + 0xd0) = uVar14;
      }
      else {
        FUN_049b6ab4(*(long *)(param_1 + 0xd0),*(undefined8 *)StringLiteral_1732);
      }
      puVar8 = StringLiteral_1742;
      puVar7 = StringLiteral_1734;
      puVar6 = StringLiteral_1730;
      puVar5 = StringLiteral_1702;
      puVar4 = Method_System_IO_TextReader_Read__;
      puVar3 = Method_UnityEngine_TextCore_Text_TextInfo_IndexOf__;
      puVar2 = Method_System_Reflection_Emit_PropertyBuilder_SetValue__;
      lVar12 = *(long *)(param_1 + 200);
      if (lVar12 != 0) {
        iVar9 = 0;
        do {
          if (*(int *)(lVar12 + 0x18) <= iVar9) {
            if (*(long *)(param_1 + 0x38) == 0) {
              uVar14 = thunk_FUN_02f45270(*(undefined8 *)OVRPlugin_OVRP_1_94_0_TypeInfo);
              FUN_0484e604(uVar14,*(undefined8 *)OVRPlugin_OVRP_1_95_0_TypeInfo);
              *(undefined8 *)(param_1 + 0x38) = uVar14;
            }
            else {
              FUN_0484f0b0(*(long *)(param_1 + 0x38),
                           *(undefined8 *)Method_System_IO_Compression_GZipStream_set_Position__);
            }
            puVar6 = StringLiteral_1738;
            puVar4 = StringLiteral_1735;
            puVar3 = StringLiteral_1731;
            if (*(long *)(param_1 + 0xc0) == 0) {
              uVar14 = thunk_FUN_02f45270(*(undefined8 *)StringLiteral_1739);
              FUN_049b5ff0(uVar14,*(undefined8 *)StringLiteral_1737);
              *(undefined8 *)(param_1 + 0xc0) = uVar14;
            }
            else {
              FUN_049b6ab4(*(long *)(param_1 + 0xc0),*(undefined8 *)StringLiteral_1733);
            }
            lVar12 = *(long *)(param_1 + 0xb8);
            if (lVar12 != 0) {
              iVar9 = 0;
              goto LAB_061c03b0;
            }
            break;
          }
          lVar12 = FUN_03abf644(lVar12,iVar9,*(undefined8 *)puVar8);
          if (lVar12 == 0) break;
          uVar10 = FUN_061900e0(lVar12,0);
          if (*(long *)(param_1 + 0x40) == 0) break;
          uVar13 = FUN_049a679c(*(long *)(param_1 + 0x40),uVar10,*(undefined8 *)puVar4);
          if ((uVar13 & 1) == 0) {
            if (*(long *)(param_1 + 0x40) == 0) break;
            FUN_049a65b0(*(long *)(param_1 + 0x40),uVar10,iVar9,*(undefined8 *)puVar3);
          }
          if (*(long *)(param_1 + 0xd0) == 0) break;
          uVar13 = FUN_049b6b20(*(long *)(param_1 + 0xd0),uVar10,*(undefined8 *)puVar7);
          if ((uVar13 & 1) == 0) {
            if (*(long *)(param_1 + 0xd0) == 0) break;
            FUN_049b692c(*(long *)(param_1 + 0xd0),uVar10,lVar12,*(undefined8 *)puVar6);
          }
          lVar12 = *(long *)(param_1 + 200);
          iVar9 = iVar9 + 1;
        } while (lVar12 != 0);
      }
    }
  }
  goto LAB_061c04cc;
LAB_061c03b0:
  do {
    if (*(int *)(lVar12 + 0x18) <= iVar9) {
      *(undefined1 *)(param_1 + 0xe0) = 0;
      return;
    }
    lVar12 = FUN_03abf644(lVar12,iVar9,*(undefined8 *)puVar5);
    if (lVar12 != 0) {
      if (*(long *)(param_1 + 0xd0) == 0) break;
      uVar10 = *(undefined4 *)(lVar12 + 0x28);
      uVar13 = FUN_049b6b20(*(long *)(param_1 + 0xd0),uVar10,*(undefined8 *)puVar7);
      if ((uVar13 & 1) != 0) {
        if (*(long *)(param_1 + 0xd0) == 0) break;
        uVar14 = FUN_049b688c(*(long *)(param_1 + 0xd0),uVar10,*(undefined8 *)puVar6);
        lVar15 = *(long *)(param_1 + 0xb8);
        *(long *)(lVar12 + 0x18) = param_1;
        *(undefined8 *)(lVar12 + 0x20) = uVar14;
        if ((lVar15 == 0) ||
           (lVar15 = FUN_03abf644(lVar15,iVar9,*(undefined8 *)puVar5), lVar15 == 0)) break;
        uVar10 = FUN_061d197c(*(undefined8 *)(lVar15 + 0x30),0);
        if (*(long *)(param_1 + 0x38) == 0) break;
        uVar13 = FUN_0484f11c(*(long *)(param_1 + 0x38),uVar10,*(undefined8 *)puVar2);
        if ((uVar13 & 1) == 0) {
          if (*(long *)(param_1 + 0x38) == 0) break;
          FUN_0484ef30(*(long *)(param_1 + 0x38),uVar10,iVar9,
                       *(undefined8 *)OVRVirtualKeyboard_CommitTextUnityEvent_TypeInfo);
        }
        if ((*(long *)(param_1 + 0xb8) == 0) ||
           (lVar15 = FUN_03abf644(*(long *)(param_1 + 0xb8),iVar9,*(undefined8 *)puVar5),
           lVar15 == 0)) break;
        iVar1 = *(int *)(lVar15 + 0x14);
        if (iVar1 != 0xfffe) {
          if (*(long *)(param_1 + 0xc0) == 0) break;
          uVar13 = FUN_049b6b20(*(long *)(param_1 + 0xc0),iVar1,*(undefined8 *)puVar4);
          if ((uVar13 & 1) == 0) {
            if (*(long *)(param_1 + 0xc0) == 0) break;
            FUN_049b692c(*(long *)(param_1 + 0xc0),iVar1,lVar12,*(undefined8 *)puVar3);
          }
        }
      }
    }
    lVar12 = *(long *)(param_1 + 0xb8);
    iVar9 = iVar9 + 1;
  } while (lVar12 != 0);
LAB_061c04cc:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


