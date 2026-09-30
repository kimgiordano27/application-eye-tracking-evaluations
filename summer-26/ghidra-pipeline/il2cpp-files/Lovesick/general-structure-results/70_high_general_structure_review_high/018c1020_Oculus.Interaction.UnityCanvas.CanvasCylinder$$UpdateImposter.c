/*
FUNCTION_NAME: Oculus.Interaction.UnityCanvas.CanvasCylinder$$UpdateImposter
ENTRY_POINT: 018c1020
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


void Oculus_Interaction_UnityCanvas_CanvasCylinder__UpdateImposter(long param_1)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined8 *unaff_x19;
  int unaff_w20;
  long *unaff_x21;
  long *unaff_x22;
  long unaff_x25;
  long *unaff_x26;
  double dVar17;
  double dVar18;
  undefined1 auVar19 [16];
  undefined8 in_stack_00000008;
  ulong in_stack_00000010;
  long in_stack_00000018;
  
  puVar5 = Method_Unity_Burst_Intrinsics_Arm_Neon_vpmaxqd_f64__;
  puVar4 = OVRSpectatorModeDomeTest_<TimerCoroutine>d__20_TypeInfo;
  puVar3 = System_Collections_Generic_IList<ProBuilderMesh>_TypeInfo;
  puVar2 = PTR_DAT_033f2f78;
  if ((unaff_x21 == (long *)0x0) || (*unaff_x21 != param_1)) {
    if ((((unaff_x22 != (long *)0x0) &&
         (*unaff_x22 == *(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vtrn1_s16__)) ||
        (((unaff_x21 != (long *)0x0 &&
          (*unaff_x21 == *(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vtrn1_s16__)) ||
         ((unaff_x22 != (long *)0x0 &&
          (*unaff_x22 == *(long *)System_Collections_Generic_IList<ProBuilderMesh>_TypeInfo)))))) ||
       ((unaff_x21 != (long *)0x0 &&
        (*unaff_x21 == *(long *)System_Collections_Generic_IList<ProBuilderMesh>_TypeInfo)))) {
      if ((unaff_x22 == (long *)0x0) || (unaff_x21 == (long *)0x0)) goto LAB_018c1618;
      if (*(int *)(*(long *)Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__ + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_01731954(0);
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar5);
      }
      auVar19 = FUN_017004ec();
      uVar8 = auVar19._8_8_;
      uVar7 = auVar19._0_8_;
      FUN_01731954(0);
      auVar19 = FUN_017004ec();
      uVar9 = auVar19._8_8_;
      uVar6 = auVar19._0_8_;
      unaff_x26 = (long *)puVar3;
      if (0x2a < unaff_w20) {
        if (unaff_w20 < 0x42) {
          if (unaff_w20 != 0x3f) {
            if (unaff_w20 == 0x41) {
LAB_018c1420:
              if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              auVar19 = FUN_017d22e0(uVar7,uVar8,uVar6,uVar9,0);
              goto LAB_018c151c;
            }
            goto LAB_018c16d0;
          }
LAB_018c14f4:
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          auVar19 = FUN_017d20c8(uVar7,uVar8,uVar6,uVar9,0);
        }
        else if (unaff_w20 == 0x45) {
LAB_018c14c8:
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          auVar19 = FUN_017d2230(uVar7,uVar8,uVar6,uVar9,0);
        }
        else {
          if (unaff_w20 != 0x49) goto LAB_018c16d0;
LAB_018c1388:
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          auVar19 = FUN_017d217c(uVar7,uVar8,uVar6,uVar9,0);
        }
LAB_018c151c:
        lVar12 = *unaff_x26;
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
    if (((((unaff_x22 != (long *)0x0) &&
          (*unaff_x22 == *(long *)System_Runtime_InteropServices_InAttribute_TypeInfo)) ||
         ((unaff_x21 != (long *)0x0 &&
          (*unaff_x21 == *(long *)System_Runtime_InteropServices_InAttribute_TypeInfo)))) ||
        ((unaff_x22 != (long *)0x0 && (*unaff_x22 == *(long *)PTR_DAT_033f2f78)))) ||
       ((unaff_x21 != (long *)0x0 && (*unaff_x21 == *(long *)PTR_DAT_033f2f78)))) {
      if ((unaff_x22 == (long *)0x0) || (unaff_x21 == (long *)0x0)) goto LAB_018c1618;
      if (*(int *)(*(long *)Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__ + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_01731954(0);
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar5);
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
        if (unaff_w20 != 0x3f) {
          if (unaff_w20 == 0x41) {
LAB_018c1670:
            lVar12 = *(long *)puVar2;
            auVar19._8_8_ = in_stack_00000010;
            auVar19._0_8_ = dVar17 / dVar18;
            goto LAB_018c152c;
          }
          goto LAB_018c16d0;
        }
LAB_018c16ac:
        lVar12 = *(long *)puVar2;
        auVar19._8_8_ = in_stack_00000010;
        auVar19._0_8_ = dVar17 + dVar18;
      }
      else if (unaff_w20 == 0x45) {
LAB_018c16a0:
        lVar12 = *(long *)puVar2;
        auVar19._8_8_ = in_stack_00000010;
        auVar19._0_8_ = dVar17 * dVar18;
      }
      else {
        if (unaff_w20 != 0x49) goto LAB_018c16d0;
LAB_018c14bc:
        lVar12 = *(long *)puVar2;
        auVar19._8_8_ = in_stack_00000010;
        auVar19._0_8_ = dVar17 - dVar18;
      }
      goto LAB_018c152c;
    }
    if (unaff_x22 == (long *)0x0) {
      lVar10 = *(long *)Method_TMPro_SetPropertyUtility_SetStruct<char>__;
      lVar11 = *(long *)OVRSpectatorModeDomeTest_<TimerCoroutine>d__20_TypeInfo;
      lVar12 = *(long *)Method_System_Data_Common_UInt32Storage_Aggregate__;
      lVar13 = *(long *)
                Method_System_Threading_Tasks_Task<DestructibleMeshComponent_MeshSegmentationResult>_ContinueWith__
      ;
      lVar14 = *(long *)StringLiteral_7239;
      lVar15 = *(long *)UnityEngine_Texture2D___TypeInfo;
LAB_018c1550:
      if ((unaff_x21 == (long *)0x0) ||
         ((((lVar16 = *unaff_x21,
            lVar16 != *(long *)
                       Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__ &&
            (lVar16 != lVar10)) &&
           ((lVar16 != lVar11 && (((lVar16 != lVar12 && (lVar16 != lVar13)) && (lVar16 != lVar14))))
           )) && (lVar16 != lVar15)))) goto LAB_018c16d0;
    }
    else {
      lVar16 = *unaff_x22;
      if (((((lVar16 != *(long *)
                         Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__)
            && (lVar10 = *(long *)Method_TMPro_SetPropertyUtility_SetStruct<char>__,
               lVar16 != lVar10)) &&
           (lVar11 = *(long *)OVRSpectatorModeDomeTest_<TimerCoroutine>d__20_TypeInfo,
           lVar16 != lVar11)) &&
          ((lVar12 = *(long *)Method_System_Data_Common_UInt32Storage_Aggregate__, lVar16 != lVar12
           && (lVar13 = *(long *)
                         Method_System_Threading_Tasks_Task<DestructibleMeshComponent_MeshSegmentationResult>_ContinueWith__
              , lVar16 != lVar13)))) &&
         ((lVar14 = *(long *)StringLiteral_7239, lVar16 != lVar14 &&
          (lVar15 = *(long *)UnityEngine_Texture2D___TypeInfo, lVar16 != lVar15))))
      goto LAB_018c1550;
    }
    if ((unaff_x22 == (long *)0x0) || (unaff_x21 == (long *)0x0)) goto LAB_018c1618;
    if (*(int *)(*(long *)Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__ + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_01731954(0);
    if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar5);
    }
    lVar10 = FUN_016ff5a8();
    FUN_01731954(0);
    lVar11 = FUN_016ff5a8();
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
      uVar7 = 0;
      *unaff_x19 = 0;
      goto LAB_018c1620;
    }
    if (unaff_w20 < 0x42) {
      if (unaff_w20 != 0x3f) {
        if (unaff_w20 == 0x41) {
LAB_018c16e8:
          lVar12 = *(long *)puVar4;
          auVar1._8_8_ = 0;
          auVar1._0_8_ = in_stack_00000010;
          auVar19 = auVar1 << 0x40;
          if (lVar11 != 0) {
            auVar19._8_8_ = in_stack_00000010;
            auVar19._0_8_ = lVar10 / lVar11;
          }
          goto LAB_018c152c;
        }
        goto LAB_018c16d0;
      }
LAB_018c1700:
      lVar12 = *(long *)puVar4;
      auVar19._8_8_ = in_stack_00000010;
      auVar19._0_8_ = lVar11 + lVar10;
    }
    else if (unaff_w20 == 0x45) {
LAB_018c16f4:
      lVar12 = *(long *)puVar4;
      auVar19._8_8_ = in_stack_00000010;
      auVar19._0_8_ = lVar11 * lVar10;
    }
    else {
      if (unaff_w20 != 0x49) goto LAB_018c16d0;
LAB_018c1694:
      lVar12 = *(long *)puVar4;
      auVar19._8_8_ = in_stack_00000010;
      auVar19._0_8_ = lVar10 - lVar11;
    }
LAB_018c152c:
    _in_stack_00000008 = auVar19;
    uVar7 = thunk_FUN_00d61fa0(lVar12,&stack0x00000008);
    *unaff_x19 = uVar7;
  }
  else {
    if ((unaff_x22 != (long *)0x0) && (unaff_x21 != (long *)0x0)) {
      if (*(int *)(*(long *)
                    Method_System_Collections_Generic_List<IntegratedSubsystemDescriptor>_GetEnumerator__
                  + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      auVar19 = FUN_0184da2c();
      uVar8 = auVar19._8_8_;
      uVar7 = auVar19._0_8_;
      auVar19 = FUN_0184da2c();
      uVar9 = auVar19._8_8_;
      uVar6 = auVar19._0_8_;
      if (unaff_w20 < 0x2b) {
        if (unaff_w20 < 0xd) {
          if (unaff_w20 == 0) goto LAB_018c1478;
          if (unaff_w20 == 0xc) goto LAB_018c13d4;
        }
        else {
          if (unaff_w20 == 0x1a) goto LAB_018c144c;
          if (unaff_w20 == 0x2a) goto LAB_018c1344;
        }
      }
      else if (unaff_w20 < 0x42) {
        if (unaff_w20 == 0x3f) {
LAB_018c1478:
          if (*(int *)(*unaff_x26 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          auVar19 = FUN_01e1a92c(uVar7,uVar8,uVar6,uVar9,0);
          goto LAB_018c151c;
        }
        if (unaff_w20 == 0x41) {
LAB_018c13d4:
          if (*(int *)(*unaff_x26 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          auVar19 = FUN_01e1adf0(uVar7,uVar8,uVar6,uVar9,0);
          goto LAB_018c151c;
        }
      }
      else {
        if (unaff_w20 == 0x45) {
LAB_018c144c:
          if (*(int *)(*unaff_x26 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          auVar19 = FUN_01e1a9d8(uVar7,uVar8,uVar6,uVar9,0);
          goto LAB_018c151c;
        }
        if (unaff_w20 == 0x49) {
LAB_018c1344:
          if (*(int *)(*unaff_x26 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          auVar19 = FUN_01e1949c(uVar7,uVar8,uVar6,uVar9,0);
          goto LAB_018c151c;
        }
      }
      goto LAB_018c16d0;
    }
LAB_018c1618:
    *unaff_x19 = 0;
  }
  uVar7 = 1;
LAB_018c1620:
  if (*(long *)(unaff_x25 + 0x28) != in_stack_00000018) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar7);
  }
  return;
}


