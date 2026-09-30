/*
FUNCTION_NAME: System.Xml.XmlTextReaderImpl$$ThrowUnclosedElements
ENTRY_POINT: 01e1d218
PROGRAM: Lovesick-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;data_collection
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;ui_or_gameplay_sink_hits_2;strong_file_logging_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_2
*/


void System_Xml_XmlTextReaderImpl__ThrowUnclosedElements(void)

{
  bool bVar1;
  ushort uVar2;
  undefined4 uVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  ushort uVar7;
  undefined1 auVar8 [12];
  undefined *puVar9;
  undefined *puVar10;
  byte bVar11;
  undefined2 uVar12;
  ulong uVar13;
  long lVar14;
  long *plVar15;
  uint uVar16;
  long lVar17;
  long lVar18;
  uint uVar19;
  undefined4 uVar20;
  long *unaff_x19;
  long lVar21;
  int iVar22;
  undefined4 unaff_w22;
  undefined8 unaff_x23;
  short sVar23;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 uVar24;
  undefined8 uVar25;
  long unaff_x28;
  long unaff_x29;
  undefined1 auVar26 [16];
  undefined1 auStack_100 [256];
  
  puVar10 = OVRPlugin_OVRP_1_95_0_TypeInfo;
  puVar9 = PTR_DAT_033f3600;
  auVar26._8_8_ = unaff_x27;
  auVar26._0_8_ = unaff_x26;
  auVar8 = auVar26._0_12_;
  uVar13 = FUN_01e18f5c(unaff_x29 + -0x88);
  if ((uVar13 & 1) == 0) {
    if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    lVar14 = *(long *)puVar10;
    lVar21 = *(long *)(lVar14 + 0x20);
    if ((*(byte *)(lVar21 + 0x132) & 1) == 0) {
      lVar21 = FUN_00d5941c();
    }
    lVar21 = *(long *)(*(long *)(lVar21 + 0xc0) + 8);
    if ((*(byte *)(lVar21 + 0x132) & 1) == 0) {
      lVar21 = FUN_00d5941c();
    }
    if (*(int *)(lVar21 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    lVar21 = *(long *)(lVar14 + 0x20);
    if ((*(byte *)(lVar21 + 0x132) & 1) == 0) {
      lVar21 = FUN_00d5941c();
    }
    lVar21 = *(long *)(*(long *)(lVar21 + 0xc0) + 8);
    if ((*(byte *)(lVar21 + 0x132) & 1) == 0) {
      lVar21 = FUN_00d5941c();
    }
    puVar9 = Method_RCG_Lovesick_ControllerMapping_TempoReleased__;
    plVar15 = (long *)**(long **)(lVar21 + 0xb8);
    if (plVar15 == (long *)0x0) goto LAB_01e1d7c8;
    uVar24 = (**(code **)(*plVar15 + 0x178))
                       (plVar15,*(undefined4 *)(unaff_x29 + -0x8c),*(undefined8 *)(*plVar15 + 0x180)
                       );
    auVar26 = FUN_013aeef8(uVar24,*(undefined8 *)puVar9);
    auVar8 = auVar26._0_12_;
    if (*(int *)(*unaff_x19 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    *(undefined8 *)(unaff_x29 + -200) = uVar24;
    FUN_01e18eac(unaff_x29 + -0x88,auVar26._0_8_,auVar26._8_8_,unaff_x29 + -0x8c,0,0);
  }
  else {
    *(undefined8 *)(unaff_x29 + -200) = 0;
  }
  uVar5 = *(uint *)(unaff_x29 + -0x8c);
  lVar21 = *(long *)
            Method_MotelSand_<FanBrokenVibration>d__24_System_Collections_IEnumerator_Reset__;
  if (auVar8._8_4_ < uVar5) {
    FUN_01792d54(0);
  }
  lVar17 = *(long *)(lVar21 + 0x20);
  uVar7 = *(ushort *)(lVar17 + 0x132);
  lVar14 = lVar17;
  if ((uVar7 & 1) == 0) {
    lVar17 = FUN_00d5941c(lVar17);
    uVar7 = *(ushort *)(*(long *)(lVar21 + 0x20) + 0x132);
    lVar14 = *(long *)(lVar21 + 0x20);
  }
  lVar17 = *(long *)(lVar17 + 0xc0);
  *(undefined4 *)(unaff_x29 + -0xbc) = unaff_w22;
  *(undefined8 *)(unaff_x29 + -0xe0) = unaff_x23;
  uVar24 = **(undefined8 **)(lVar17 + 0x40);
  if ((uVar7 & 1) == 0) {
    lVar14 = FUN_00d5941c(lVar14);
  }
  lVar14 = *(long *)(*(long *)(lVar14 + 0xc0) + 0x40);
  *(undefined4 *)(unaff_x29 + -0x5c) = 0;
  *(long *)(unaff_x29 + -0x78) = auVar8._0_8_;
  *(long *)(unaff_x29 + -0x70) = unaff_x29 + -0x5c;
  puVar9 = Method_TMPro_TMP_MaterialManager_<>c__DisplayClass13_0_<ReleaseBaseMaterial>b__0__;
  (**(code **)(lVar14 + 0x10))(uVar24,lVar14,0,unaff_x29 + -0x78,unaff_x29 + -0x68);
  lVar14 = *(long *)(unaff_x29 + -0x68);
  if ((*(byte *)(*(long *)(lVar21 + 0x20) + 0x132) & 1) == 0) {
    FUN_00d5941c();
  }
  memset(auStack_100,0,0x100);
  uVar24 = *(undefined8 *)puVar9;
  *(undefined8 *)(unaff_x29 + -0x78) = 0;
  *(undefined8 *)(unaff_x29 + -0x70) = 0;
  FUN_00bd76c4(unaff_x29 + -0x78,auStack_100,0x80,uVar24);
  uVar13 = *(ulong *)(unaff_x29 + -0x70);
  iVar22 = uVar5 - 1;
  *(undefined4 *)(unaff_x29 + -0x98) = 0;
  *(undefined8 *)(unaff_x29 + -0xb0) = 0;
  *(undefined8 *)(unaff_x29 + -0xa8) = *(undefined8 *)(unaff_x29 + -0x78);
  *(ulong *)(unaff_x29 + -0xa0) = uVar13;
  if (-1 < iVar22) {
    bVar11 = *(byte *)(lVar14 + iVar22);
    uVar7 = (ushort)bVar11;
    if (0xf7 < bVar11) {
      uVar7 = bVar11 + 0x10;
    }
    uVar2 = uVar7 & 0xff;
    if ((0xf7 < bVar11) || (uVar2 < 8)) {
      if (uVar2 < 10) {
        sVar23 = uVar2 + 0x30;
      }
      else if ((*(uint *)(unaff_x29 + -0xb4) & 0xffff) == 0x58) {
        sVar23 = (uVar7 & 0xf) + 0x37;
      }
      else {
        sVar23 = (uVar7 & 0xf) + 0x57;
      }
      if (DAT_0377fb39 == '\0') {
        thunk_FUN_00d48444(StringLiteral_4591);
        uVar19 = *(uint *)(unaff_x29 + -0x98);
        uVar13 = (ulong)*(uint *)(unaff_x29 + -0xa0);
        DAT_0377fb39 = '\x01';
      }
      else {
        uVar19 = 0;
      }
      if ((int)uVar19 < (int)(uint)uVar13) {
        if ((uint)uVar13 <= uVar19) {
LAB_01e1d7c4:
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        *(short *)(*(long *)(unaff_x29 + -0xa8) + (long)(int)uVar19 * 2) = sVar23;
        *(uint *)(unaff_x29 + -0x98) = uVar19 + 1;
      }
      else {
        FUN_01e234c8(unaff_x29 + -0xb0,sVar23);
      }
      iVar22 = uVar5 - 2;
      if (iVar22 < 0) goto LAB_01e1d670;
    }
    uVar19 = iVar22 * 2 + 2;
    if (DAT_0377fb3a == '\0') {
      thunk_FUN_00d48444(StringLiteral_3573);
      thunk_FUN_00d48444(StringLiteral_4591);
      DAT_0377fb3a = '\x01';
    }
    uVar16 = *(uint *)(unaff_x29 + -0xa0);
    uVar6 = *(uint *)(unaff_x29 + -0x98);
    *(long *)(unaff_x29 + -0xe8) = unaff_x28;
    if ((int)(uVar16 - uVar19) < (int)uVar6) {
      FUN_01e23208(unaff_x29 + -0xb0,uVar19);
      uVar16 = *(uint *)(unaff_x29 + -0xa0);
    }
    lVar21 = *(long *)StringLiteral_3573;
    *(uint *)(unaff_x29 + -0x98) = uVar6 + uVar19;
    if ((uVar16 < uVar6) || (uVar16 - uVar6 < uVar19)) {
      FUN_01792d54(0);
    }
    lVar18 = *(long *)(lVar21 + 0x20);
    uVar24 = *(undefined8 *)(unaff_x29 + -0xa8);
    uVar7 = *(ushort *)(lVar18 + 0x132);
    lVar17 = lVar18;
    if ((uVar7 & 1) == 0) {
      lVar18 = FUN_00d5941c(lVar18);
      uVar7 = *(ushort *)(*(long *)(lVar21 + 0x20) + 0x132);
      lVar17 = *(long *)(lVar21 + 0x20);
    }
    uVar25 = **(undefined8 **)(*(long *)(lVar18 + 0xc0) + 0x40);
    if ((uVar7 & 1) == 0) {
      lVar17 = FUN_00d5941c(lVar17);
    }
    lVar17 = *(long *)(*(long *)(lVar17 + 0xc0) + 0x40);
    *(uint *)(unaff_x29 + -0x5c) = uVar6;
    *(undefined8 *)(unaff_x29 + -0x78) = uVar24;
    *(long *)(unaff_x29 + -0x70) = unaff_x29 + -0x5c;
    plVar15 = (long *)StringLiteral_5790;
    puVar9 = Method_CW_Common_CwHelper_<>c_<_cctor>b__11_0__;
    (**(code **)(lVar17 + 0x10))(uVar25,lVar17,0,unaff_x29 + -0x78,unaff_x29 + -0x68);
    lVar17 = *(long *)(unaff_x29 + -0x68);
    if ((*(byte *)(*(long *)(lVar21 + 0x20) + 0x132) & 1) == 0) {
      FUN_00d5941c();
    }
    unaff_x28 = *(long *)(unaff_x29 + -0xe8);
    uVar16 = 0;
    if ((*(uint *)(unaff_x29 + -0xb4) & 0xffff) != 0x78) {
      plVar15 = (long *)puVar9;
    }
    lVar21 = *plVar15;
    uVar13 = (long)iVar22;
    do {
      if ((uVar5 <= uVar13) || (uVar19 <= uVar16)) goto LAB_01e1d7c4;
      if (lVar21 == 0) goto LAB_01e1d7c8;
      bVar11 = *(byte *)(lVar14 + uVar13);
      uVar12 = FUN_015fa29c(lVar21,bVar11 >> 4,0);
      *(undefined2 *)(lVar17 + (long)(int)uVar16 * 2) = uVar12;
      if (uVar19 <= uVar16 + 1) goto LAB_01e1d7c4;
      uVar12 = FUN_015fa29c(lVar21,bVar11 & 0xf,0);
      *(undefined2 *)(lVar17 + (long)(int)(uVar16 + 1) * 2) = uVar12;
      uVar16 = uVar16 + 2;
      bVar1 = 0 < (long)uVar13;
      uVar13 = uVar13 - 1;
    } while (bVar1);
  }
LAB_01e1d670:
  if (*(int *)(unaff_x29 + -0x98) < *(int *)(unaff_x29 + -0xbc)) {
    uVar20 = 0x66;
    if ((*(uint *)(unaff_x29 + -0xb4) & 0xffff) != 0x78) {
      uVar20 = 0x46;
    }
    uVar3 = 0x30;
    if ((int)*(undefined8 *)(unaff_x29 + -0xe0) < 0) {
      uVar3 = uVar20;
    }
    FUN_01e1d7e0(unaff_x29 + -0xb0,0,uVar3,*(int *)(unaff_x29 + -0xbc) - *(int *)(unaff_x29 + -0x98)
                );
  }
  puVar9 = OVRPlugin_OVRP_1_95_0_TypeInfo;
  lVar21 = *(long *)(unaff_x29 + -200);
  if (lVar21 != 0) {
    if (*(int *)(*(long *)PTR_DAT_033f3600 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    lVar17 = *(long *)puVar9;
    lVar14 = *(long *)(lVar17 + 0x20);
    if ((*(byte *)(lVar14 + 0x132) & 1) == 0) {
      lVar14 = FUN_00d5941c();
    }
    lVar14 = *(long *)(*(long *)(lVar14 + 0xc0) + 8);
    if ((*(byte *)(lVar14 + 0x132) & 1) == 0) {
      lVar14 = FUN_00d5941c();
    }
    if (*(int *)(lVar14 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    lVar14 = *(long *)(lVar17 + 0x20);
    if ((*(byte *)(lVar14 + 0x132) & 1) == 0) {
      lVar14 = FUN_00d5941c();
    }
    lVar14 = *(long *)(*(long *)(lVar14 + 0xc0) + 8);
    if ((*(byte *)(lVar14 + 0x132) & 1) == 0) {
      lVar14 = FUN_00d5941c();
    }
    plVar15 = (long *)**(long **)(lVar14 + 0xb8);
    if (plVar15 == (long *)0x0) {
LAB_01e1d7c8:
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    (**(code **)(*plVar15 + 0x188))(plVar15,lVar21,0,*(undefined8 *)(*plVar15 + 400));
  }
  pbVar4 = *(byte **)(unaff_x29 + 0x18);
  if ((*(uint *)(unaff_x29 + -0xb8) & 1) == 0) {
    **(undefined4 **)(unaff_x29 + 0x10) = 0;
    *pbVar4 = 0;
    uVar24 = FUN_01e1ddf8(unaff_x29 + -0xb0);
  }
  else {
    bVar11 = FUN_01e1daf4(unaff_x29 + -0xb0,*(undefined8 *)(unaff_x29 + -0xd8),
                          *(undefined8 *)(unaff_x29 + -0xd0));
    uVar24 = 0;
    *pbVar4 = bVar11 & 1;
  }
  if (*(long *)(unaff_x28 + 0x28) != *(long *)(unaff_x29 + -0x58)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar24);
  }
  return;
}


