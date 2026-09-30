/*
FUNCTION_NAME: Oculus.Interaction.UnityCanvas.CanvasMesh$$UpdateImposter
ENTRY_POINT: 018c1040
PROGRAM: Lovesick-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void Oculus_Interaction_UnityCanvas_CanvasMesh__UpdateImposter(long *param_1)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 *unaff_x19;
  int unaff_w20;
  long *unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  long *plVar15;
  long unaff_x25;
  long unaff_x26;
  long *plVar16;
  double dVar17;
  double dVar18;
  undefined1 auVar19 [16];
  undefined8 in_stack_00000008;
  ulong in_stack_00000010;
  long in_stack_00000018;
  undefined8 uVar6;
  
  puVar3 = OVRSpectatorModeDomeTest_<TimerCoroutine>d__20_TypeInfo;
  puVar2 = PTR_DAT_033f2f78;
  plVar15 = *(long **)(unaff_x23 + 0x770);
  plVar16 = *(long **)(unaff_x26 + 0x1b8);
  if (((((unaff_x22 == (long *)0x0) || (*unaff_x22 != *param_1)) &&
       ((unaff_x21 == (long *)0x0 || (*unaff_x21 != *param_1)))) &&
      ((unaff_x22 == (long *)0x0 || (*unaff_x22 != *plVar16)))) &&
     ((unaff_x21 == (long *)0x0 || (*unaff_x21 != *plVar16)))) {
    if ((((unaff_x22 != (long *)0x0) &&
         (*unaff_x22 == *(long *)System_Runtime_InteropServices_InAttribute_TypeInfo)) ||
        ((unaff_x21 != (long *)0x0 &&
         (*unaff_x21 == *(long *)System_Runtime_InteropServices_InAttribute_TypeInfo)))) ||
       (((unaff_x22 != (long *)0x0 && (*unaff_x22 == *(long *)PTR_DAT_033f2f78)) ||
        ((unaff_x21 != (long *)0x0 && (*unaff_x21 == *(long *)PTR_DAT_033f2f78)))))) {
      if ((unaff_x22 == (long *)0x0) || (unaff_x21 == (long *)0x0)) goto LAB_018c1618;
      if (*(int *)(*(long *)Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__ + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_01731954(0);
      if (*(int *)(*plVar15 + 0xe0) == 0) {
        thunk_FUN_00d32864(*plVar15);
      }
      dVar17 = (double)FUN_01700318();
      FUN_01731954(0);
      dVar18 = (double)FUN_01700318();
      if (unaff_w20 < 0x2b) {
        if (unaff_w20 < 0xd) {
          if (unaff_w20 == 0) goto LAB_018c16ac;
          if (unaff_w20 == 0xc) goto LAB_018c1670;
        }
        else {
          if (unaff_w20 == 0x1a) goto LAB_018c16a0;
          if (unaff_w20 == 0x2a) goto LAB_018c14bc;
        }
        goto LAB_018c16d0;
      }
      if (unaff_w20 < 0x42) {
        if (unaff_w20 == 0x3f) {
LAB_018c16ac:
          lVar8 = *(long *)puVar2;
          auVar19._8_8_ = in_stack_00000010;
          auVar19._0_8_ = dVar17 + dVar18;
        }
        else {
          if (unaff_w20 != 0x41) goto LAB_018c16d0;
LAB_018c1670:
          lVar8 = *(long *)puVar2;
          auVar19._8_8_ = in_stack_00000010;
          auVar19._0_8_ = dVar17 / dVar18;
        }
      }
      else if (unaff_w20 == 0x45) {
LAB_018c16a0:
        lVar8 = *(long *)puVar2;
        auVar19._8_8_ = in_stack_00000010;
        auVar19._0_8_ = dVar17 * dVar18;
      }
      else {
        if (unaff_w20 != 0x49) goto LAB_018c16d0;
LAB_018c14bc:
        lVar8 = *(long *)puVar2;
        auVar19._8_8_ = in_stack_00000010;
        auVar19._0_8_ = dVar17 - dVar18;
      }
      goto LAB_018c152c;
    }
    if (unaff_x22 == (long *)0x0) {
      lVar8 = *(long *)Method_TMPro_SetPropertyUtility_SetStruct<char>__;
      lVar9 = *(long *)OVRSpectatorModeDomeTest_<TimerCoroutine>d__20_TypeInfo;
      lVar10 = *(long *)Method_System_Data_Common_UInt32Storage_Aggregate__;
      lVar11 = *(long *)
                Method_System_Threading_Tasks_Task<DestructibleMeshComponent_MeshSegmentationResult>_ContinueWith__
      ;
      lVar12 = *(long *)StringLiteral_7239;
      lVar13 = *(long *)UnityEngine_Texture2D___TypeInfo;
LAB_018c1550:
      if ((unaff_x21 == (long *)0x0) ||
         (((lVar14 = *unaff_x21,
           lVar14 != *(long *)
                      Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__ &&
           (lVar14 != lVar8)) &&
          ((lVar14 != lVar9 &&
           ((((lVar14 != lVar10 && (lVar14 != lVar11)) && (lVar14 != lVar12)) && (lVar14 != lVar13))
           )))))) goto LAB_018c16d0;
    }
    else {
      lVar14 = *unaff_x22;
      if ((((lVar14 != *(long *)
                        Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__)
           && (lVar8 = *(long *)Method_TMPro_SetPropertyUtility_SetStruct<char>__, lVar14 != lVar8))
          && (lVar9 = *(long *)OVRSpectatorModeDomeTest_<TimerCoroutine>d__20_TypeInfo,
             lVar14 != lVar9)) &&
         (((lVar10 = *(long *)Method_System_Data_Common_UInt32Storage_Aggregate__, lVar14 != lVar10
           && (lVar11 = *(long *)
                         Method_System_Threading_Tasks_Task<DestructibleMeshComponent_MeshSegmentationResult>_ContinueWith__
              , lVar14 != lVar11)) &&
          ((lVar12 = *(long *)StringLiteral_7239, lVar14 != lVar12 &&
           (lVar13 = *(long *)UnityEngine_Texture2D___TypeInfo, lVar14 != lVar13))))))
      goto LAB_018c1550;
    }
    if ((unaff_x22 == (long *)0x0) || (unaff_x21 == (long *)0x0)) goto LAB_018c1618;
    if (*(int *)(*(long *)Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__ + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_01731954(0);
    if (*(int *)(*plVar15 + 0xe0) == 0) {
      thunk_FUN_00d32864(*plVar15);
    }
    lVar9 = FUN_016ff5a8();
    FUN_01731954(0);
    lVar10 = FUN_016ff5a8();
    if (unaff_w20 < 0x2b) {
      if (unaff_w20 < 0xd) {
        if (unaff_w20 == 0) goto LAB_018c1700;
        if (unaff_w20 == 0xc) goto LAB_018c16e8;
      }
      else {
        if (unaff_w20 == 0x1a) goto LAB_018c16f4;
        if (unaff_w20 == 0x2a) goto LAB_018c1694;
      }
LAB_018c16d0:
      uVar5 = 0;
      *unaff_x19 = 0;
      goto LAB_018c1620;
    }
    if (unaff_w20 < 0x42) {
      if (unaff_w20 == 0x3f) {
LAB_018c1700:
        lVar8 = *(long *)puVar3;
        auVar19._8_8_ = in_stack_00000010;
        auVar19._0_8_ = lVar10 + lVar9;
      }
      else {
        if (unaff_w20 != 0x41) goto LAB_018c16d0;
LAB_018c16e8:
        lVar8 = *(long *)puVar3;
        auVar1._8_8_ = 0;
        auVar1._0_8_ = in_stack_00000010;
        auVar19 = auVar1 << 0x40;
        if (lVar10 != 0) {
          auVar19._8_8_ = in_stack_00000010;
          auVar19._0_8_ = lVar9 / lVar10;
        }
      }
    }
    else if (unaff_w20 == 0x45) {
LAB_018c16f4:
      lVar8 = *(long *)puVar3;
      auVar19._8_8_ = in_stack_00000010;
      auVar19._0_8_ = lVar10 * lVar9;
    }
    else {
      if (unaff_w20 != 0x49) goto LAB_018c16d0;
LAB_018c1694:
      lVar8 = *(long *)puVar3;
      auVar19._8_8_ = in_stack_00000010;
      auVar19._0_8_ = lVar9 - lVar10;
    }
LAB_018c152c:
    _in_stack_00000008 = auVar19;
    uVar5 = thunk_FUN_00d61fa0(lVar8,&stack0x00000008);
    *unaff_x19 = uVar5;
  }
  else {
    if ((unaff_x22 != (long *)0x0) && (unaff_x21 != (long *)0x0)) {
      if (*(int *)(*(long *)Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__ + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_01731954(0);
      if (*(int *)(*plVar15 + 0xe0) == 0) {
        thunk_FUN_00d32864(*plVar15);
      }
      auVar19 = FUN_017004ec();
      uVar6 = auVar19._8_8_;
      uVar5 = auVar19._0_8_;
      FUN_01731954(0);
      auVar19 = FUN_017004ec();
      uVar7 = auVar19._8_8_;
      uVar4 = auVar19._0_8_;
      if (0x2a < unaff_w20) {
        if (unaff_w20 < 0x42) {
          if (unaff_w20 != 0x3f) {
            if (unaff_w20 == 0x41) {
LAB_018c1420:
              if (*(int *)(*plVar16 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              auVar19 = FUN_017d22e0(uVar5,uVar6,uVar4,uVar7,0);
              goto LAB_018c151c;
            }
            goto LAB_018c16d0;
          }
LAB_018c14f4:
          if (*(int *)(*plVar16 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          auVar19 = FUN_017d20c8(uVar5,uVar6,uVar4,uVar7,0);
        }
        else if (unaff_w20 == 0x45) {
LAB_018c14c8:
          if (*(int *)(*plVar16 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          auVar19 = FUN_017d2230(uVar5,uVar6,uVar4,uVar7,0);
        }
        else {
          if (unaff_w20 != 0x49) goto LAB_018c16d0;
LAB_018c1388:
          if (*(int *)(*plVar16 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          auVar19 = FUN_017d217c(uVar5,uVar6,uVar4,uVar7,0);
        }
LAB_018c151c:
        lVar8 = *plVar16;
        goto LAB_018c152c;
      }
      if (unaff_w20 < 0xd) {
        if (unaff_w20 == 0) goto LAB_018c14f4;
        if (unaff_w20 == 0xc) goto LAB_018c1420;
      }
      else {
        if (unaff_w20 == 0x1a) goto LAB_018c14c8;
        if (unaff_w20 == 0x2a) goto LAB_018c1388;
      }
      goto LAB_018c16d0;
    }
LAB_018c1618:
    *unaff_x19 = 0;
  }
  uVar5 = 1;
LAB_018c1620:
  if (*(long *)(unaff_x25 + 0x28) != in_stack_00000018) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar5);
  }
  return;
}


