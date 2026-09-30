/*
FUNCTION_NAME: Sirenix.Serialization.JsonDataWriter$$WriteEntry
ENTRY_POINT: 01b05900
PROGRAM: Lovesick-libil2cpp.so
SCORE: 83
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_21;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_1
*/


void Sirenix_Serialization_JsonDataWriter__WriteEntry(long param_1)

{
  bool bVar1;
  char cVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  long lVar15;
  ulong uVar16;
  long *plVar17;
  long *plVar18;
  long lVar19;
  undefined8 uVar20;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined4 uStack0000000000000014;
  int iStack0000000000000018;
  int iStack000000000000001c;
  
  thunk_FUN_00d48444(*(undefined8 *)(param_1 + 0x738));
  thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vcgezq_s64__);
  thunk_FUN_00d48444(Method_System_Linq_Enumerable_Any<object>__);
  thunk_FUN_00d48444(Method_System_Collections_Generic_List<TEdge>__ctor__);
  thunk_FUN_00d48444(
                    Method_SmackAJack_<StopGameCoroutine>d__33_System_Collections_IEnumerator_Reset__
                    );
  thunk_FUN_00d48444(Method_Autohand_Demo_OpenXRTeleporterLink_FinishTeleportAction__);
  thunk_FUN_00d48444(Method_Autohand_Hand_<OnEnable>b__76_1__);
  thunk_FUN_00d48444(OVRPlugin_OVRP_1_96_0_TypeInfo);
  thunk_FUN_00d48444(StringLiteral_11058);
  thunk_FUN_00d48444(Method_System_Collections_Generic_Stack<Random_State>_Pop__);
  thunk_FUN_00d48444(Method_UnityEngine_GameObject_AddComponent<TMP_SubMeshUI>__);
  thunk_FUN_00d48444(PTR_DAT_033f5390);
  thunk_FUN_00d48444(Method_UnityEngine_Component_GetComponent<Rigidbody>__);
  thunk_FUN_00d48444(Method_System_Collections_Generic_List<IronMaidenNeedle>_get_Item__);
  thunk_FUN_00d48444(
                    Method_UnityEngine_InputSystem_HID_HID_HIDDeviceDescriptorBuilder_WithPhysicalMinMax__
                    );
  *(undefined1 *)(unaff_x21 + 0x20f) = 1;
  lVar15 = *unaff_x20;
  iStack0000000000000018 = 0;
  iStack000000000000001c = 0;
  uStack0000000000000014 = 0;
  if (*(int *)(lVar15 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar15 = *unaff_x20;
  }
  puVar3 = PTR_DAT_033f02a8;
  if (*(char *)(*(long *)(lVar15 + 0xb8) + 0x1b4) == '\0') {
    if (*(int *)(lVar15 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    lVar15 = FUN_01b05384();
    lVar19 = FUN_01b05520();
    if (lVar15 == 0) {
      return;
    }
    if (lVar19 == 0) {
      return;
    }
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar16 = FUN_01b13ca4(0);
    if ((uVar16 & 1) == 0) {
      return;
    }
    FUN_01b0311c();
  }
  puVar6 = StringLiteral_302;
  if ((*(char *)(unaff_x19 + 0x2c) != '\0') &&
     (iVar8 = FUN_02681fdc(0),
     puVar4 = 
     Method_UnityEngine_InputSystem_InputSystem_RegisterLayout<OpenVROculusTouchController>__,
     iVar8 == 0x15)) {
    if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_026610e4(*(undefined8 *)puVar4,0);
    *(undefined1 *)(unaff_x19 + 0x2c) = 0;
  }
  FUN_01b05234();
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar16 = FUN_01b152ac(0);
  puVar4 = Method_System_Collections_Generic_List<TEdge>__ctor__;
  if ((uVar16 & 1) != 0) {
    if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_02660dac(*(undefined8 *)puVar4,0);
    if (*(int *)(*unaff_x20 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    if (DAT_0377a363 == '\0') {
      thunk_FUN_00d48444(System_Data_DataColumnCollection_TypeInfo);
      DAT_0377a363 = '\x01';
    }
    if (*(int *)(*unaff_x20 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_01b07b44();
    FUN_01b07c4c();
    FUN_0269e53c(0);
  }
  if (*(char *)(unaff_x19 + 0x2c) != '\0') {
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar16 = FUN_01b2e418(&stack0x00000018,0);
    if ((uVar16 & 1) != 0) {
      iVar9 = FUN_0289a700(0);
      fVar21 = (float)FUN_0289a7fc(0);
      iVar8 = -0x80000000;
      if (fVar21 * (float)iVar9 != INFINITY) {
        iVar8 = (int)(fVar21 * (float)iVar9);
      }
      iVar10 = FUN_0289a728(0);
      fVar21 = (float)FUN_0289a7fc(0);
      iVar9 = -0x80000000;
      if (fVar21 * (float)iVar10 != INFINITY) {
        iVar9 = (int)(fVar21 * (float)iVar10);
      }
      iVar10 = iVar8 + 0x20;
      if (iStack0000000000000018 <= iVar8 + 0x20) {
        iVar10 = iStack0000000000000018;
      }
      bVar1 = iVar8 + -0x20 <= iStack0000000000000018;
      iStack0000000000000018 = iVar8 + -0x20;
      if (bVar1) {
        iStack0000000000000018 = iVar10;
      }
      iVar8 = iVar9 + 0x20;
      if (iStack000000000000001c <= iVar9 + 0x20) {
        iVar8 = iStack000000000000001c;
      }
      bVar1 = iVar9 + -0x20 <= iStack000000000000001c;
      iStack000000000000001c = iVar9 + -0x20;
      if (bVar1) {
        iStack000000000000001c = iVar8;
      }
      iVar8 = FUN_0289a700(0);
      fVar21 = (*(float *)(unaff_x19 + 0x30) * (float)iVar8) / *(float *)(unaff_x19 + 0x34);
      iVar9 = -0x80000000;
      iVar8 = iVar9;
      if (fVar21 != INFINITY) {
        iVar8 = (int)fVar21;
      }
      iVar10 = FUN_0289a728(0);
      iVar12 = iStack0000000000000018;
      fVar21 = (*(float *)(unaff_x19 + 0x30) * (float)iVar10) / *(float *)(unaff_x19 + 0x34);
      iVar10 = iVar9;
      if (fVar21 != INFINITY) {
        iVar10 = (int)fVar21;
      }
      iVar11 = FUN_0289a700(0);
      iVar13 = iStack000000000000001c;
      if (iVar12 <= iVar11) {
        iVar11 = iVar12;
      }
      if (iVar8 <= iVar12) {
        iVar8 = iVar11;
      }
      iVar12 = FUN_0289a728(0);
      if (iVar13 <= iVar12) {
        iVar12 = iVar13;
      }
      if (iVar10 <= iVar13) {
        iVar10 = iVar12;
      }
      iVar12 = FUN_0289a700(0);
      fVar21 = (float)iVar8 / (float)iVar12;
      iVar11 = FUN_0289a728(0);
      iVar13 = FUN_0289a728(0);
      iVar12 = iVar9;
      if (fVar21 * (float)iVar13 != INFINITY) {
        iVar12 = (int)(fVar21 * (float)iVar13);
      }
      fVar22 = fVar21;
      if (iVar12 != iVar10) {
        fVar24 = (float)iVar10 / (float)iVar11;
        iVar10 = FUN_0289a700(0);
        if (fVar24 * (float)iVar10 != INFINITY) {
          iVar9 = (int)(fVar24 * (float)iVar10);
        }
        fVar22 = fVar24;
        if ((iVar9 != iVar8) && (fVar22 = fVar21, fVar24 <= fVar21)) {
          fVar22 = fVar24;
        }
      }
      FUN_0289a84c(fVar22,0);
      FUN_02681124(fVar22,fVar22,0);
    }
  }
  if (*(char *)(unaff_x19 + 0x114) != '\0') {
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar16 = FUN_01b15308(0);
    if ((uVar16 & 1) != 0) {
      if (*(int *)(*unaff_x20 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      if (DAT_0377cd82 == '\0') {
        thunk_FUN_00d48444(System_Data_DataColumnCollection_TypeInfo);
        DAT_0377cd82 = '\x01';
      }
      lVar15 = *unaff_x20;
      if (*(int *)(lVar15 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar15 = *unaff_x20;
      }
      lVar15 = *(long *)(*(long *)(lVar15 + 0xb8) + 8);
      if (lVar15 == 0) goto LAB_01b06e0c;
      FUN_01aaf4dc(lVar15,0);
    }
  }
  iVar8 = FUN_01b02810();
  if (iVar8 != *(int *)(unaff_x19 + 0x10c)) {
    FUN_01b028a0();
  }
  if (*(int *)(*unaff_x20 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  if (DAT_0377cea4 == '\0') {
    thunk_FUN_00d48444(System_Data_DataColumnCollection_TypeInfo);
    DAT_0377cea4 = '\x01';
  }
  lVar15 = *unaff_x20;
  if (*(int *)(lVar15 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar15 = *unaff_x20;
  }
  lVar15 = *(long *)(*(long *)(lVar15 + 0xb8) + 0x10);
  if (lVar15 == 0) goto LAB_01b06e0c;
  Sirenix_Utilities_DeepReflection_PathStep___ctor(lVar15,*(undefined1 *)(unaff_x19 + 0x110),0);
  cVar2 = *(char *)(unaff_x19 + 0x111);
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  puVar4 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  FUN_01b14294(cVar2 != '\0',0);
  FUN_01b14544(*(undefined1 *)(unaff_x19 + 0x112),0);
  plVar17 = (long *)FUN_026ae324(0);
  if (plVar17 == (long *)0x0) {
LAB_01b05e50:
    plVar17 = (long *)0x0;
  }
  else {
    bVar7 = *(byte *)(*(long *)Method_System_Collections_Generic_List<TMP_Glyph>_get_Item__ + 300);
    if (*(byte *)(*plVar17 + 300) < bVar7) goto LAB_01b05e50;
    if (*(long *)(*(long *)(*plVar17 + 200) + (ulong)bVar7 * 8 + -8) !=
        *(long *)Method_System_Collections_Generic_List<TMP_Glyph>_get_Item__) {
      plVar17 = (long *)0x0;
    }
  }
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar16 = FUN_02681b9c(plVar17,0,0);
  if ((uVar16 & 1) == 0) {
    iVar8 = FUN_0267a510(0);
  }
  else {
    if (plVar17 == (long *)0x0) goto LAB_01b06e0c;
    iVar8 = (int)plVar17[0xc];
  }
  if (*(char *)(unaff_x19 + 0x20) != '\0') {
    if (*(int *)(*unaff_x20 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    if (DAT_0377cd82 == '\0') {
      thunk_FUN_00d48444(System_Data_DataColumnCollection_TypeInfo);
      DAT_0377cd82 = '\x01';
    }
    lVar15 = *unaff_x20;
    if (*(int *)(lVar15 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar15 = *unaff_x20;
    }
    lVar15 = *(long *)(*(long *)(lVar15 + 0xb8) + 8);
    if (lVar15 == 0) goto LAB_01b06e0c;
    iVar9 = FUN_01aafc7c(lVar15,0);
    if (iVar8 != iVar9) {
      plVar18 = (long *)FUN_00da4fb8(*(undefined8 *)PTR_DAT_033ea8a0,5);
      puVar5 = StringLiteral_11058;
      if (plVar18 == (long *)0x0) goto LAB_01b06e0c;
      if ((*(long *)StringLiteral_11058 != 0) &&
         (lVar15 = thunk_FUN_00d6225c(*(long *)StringLiteral_11058,*(undefined8 *)(*plVar18 + 0x40))
         , lVar15 == 0)) {
LAB_01b06e14:
        uVar20 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
        FUN_00da5038(uVar20,0);
      }
      if ((int)plVar18[3] == 0) goto LAB_01b06e10;
      plVar18[4] = *(long *)puVar5;
      uStack0000000000000014 = FUN_0267a510(0);
      lVar15 = FUN_0176eb1c(&stack0x00000014,0);
      if ((lVar15 != 0) &&
         (lVar19 = thunk_FUN_00d6225c(lVar15,*(undefined8 *)(*plVar18 + 0x40)), lVar19 == 0))
      goto LAB_01b06e14;
      puVar5 = StringLiteral_13695;
      uVar14 = *(uint *)(plVar18 + 3);
      if (uVar14 < 2) {
LAB_01b06e10:
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      plVar18[5] = lVar15;
      lVar15 = *(long *)puVar5;
      if (lVar15 != 0) {
        lVar15 = thunk_FUN_00d6225c(lVar15,*(undefined8 *)(*plVar18 + 0x40));
        if (lVar15 == 0) goto LAB_01b06e14;
        uVar14 = *(uint *)(plVar18 + 3);
      }
      if (uVar14 < 3) goto LAB_01b06e10;
      plVar18[6] = *(long *)puVar5;
      if (*(int *)(*unaff_x20 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      if (DAT_0377cd82 == '\0') {
        thunk_FUN_00d48444(System_Data_DataColumnCollection_TypeInfo);
        DAT_0377cd82 = '\x01';
      }
      lVar15 = *unaff_x20;
      if (*(int *)(lVar15 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar15 = *unaff_x20;
      }
      lVar15 = *(long *)(*(long *)(lVar15 + 0xb8) + 8);
      if (lVar15 == 0) goto LAB_01b06e0c;
      uStack0000000000000014 = FUN_01aafc7c(lVar15,0);
      lVar15 = FUN_0176eb1c(&stack0x00000014,0);
      if ((lVar15 != 0) &&
         (lVar19 = thunk_FUN_00d6225c(lVar15,*(undefined8 *)(*plVar18 + 0x40)), lVar19 == 0))
      goto LAB_01b06e14;
      puVar5 = Method_SmackAJack_<StopGameCoroutine>d__33_System_Collections_IEnumerator_Reset__;
      uVar14 = *(uint *)(plVar18 + 3);
      if (uVar14 < 4) goto LAB_01b06e10;
      plVar18[7] = lVar15;
      lVar15 = *(long *)puVar5;
      if (lVar15 != 0) {
        lVar15 = thunk_FUN_00d6225c(lVar15,*(undefined8 *)(*plVar18 + 0x40));
        if (lVar15 == 0) goto LAB_01b06e14;
        uVar14 = *(uint *)(plVar18 + 3);
      }
      if (uVar14 < 5) goto LAB_01b06e10;
      plVar18[8] = *(long *)puVar5;
      uVar20 = FUN_01600844(plVar18,0);
      if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar6);
      }
      FUN_02660dac(uVar20,0);
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar16 = FUN_02681b9c(plVar17,0,0);
      if (*(int *)(*unaff_x20 + 0xe0) == 0) {
        thunk_FUN_00d32864(*unaff_x20);
      }
      if (DAT_0377cd82 == '\0') {
        thunk_FUN_00d48444(System_Data_DataColumnCollection_TypeInfo);
        DAT_0377cd82 = '\x01';
      }
      lVar15 = *unaff_x20;
      if (*(int *)(lVar15 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar15 = *unaff_x20;
      }
      lVar15 = *(long *)(*(long *)(lVar15 + 0xb8) + 8);
      if (lVar15 == 0) goto LAB_01b06e0c;
      uVar20 = FUN_01aafc7c(lVar15,0);
      if ((uVar16 & 1) == 0) {
        FUN_0267a538(uVar20,0);
      }
      else {
        if (plVar17 == (long *)0x0) goto LAB_01b06e0c;
        *(int *)(plVar17 + 0xc) = (int)uVar20;
      }
    }
  }
  bVar7 = FUN_01affc04();
  if ((bVar7 & 1) != *(byte *)(unaff_x19 + 0x21)) {
    Sirenix_Serialization_BinaryDataWriter_<>c__<_cctor>b__70_3();
  }
  fVar21 = DAT_028aa020;
  fVar22 = *(float *)(unaff_x19 + 0x50) - *(float *)(unaff_x19 + 0x50);
  fVar24 = *(float *)(unaff_x19 + 0x54) - *(float *)(unaff_x19 + 0x54);
  fVar23 = *(float *)(unaff_x19 + 0x58) - *(float *)(unaff_x19 + 0x58);
  if (DAT_028aa020 <= fVar23 * fVar23 + fVar22 * fVar22 + fVar24 * fVar24) {
    FUN_01affe88();
  }
  fVar22 = *(float *)(unaff_x19 + 0x5c) - *(float *)(unaff_x19 + 0x5c);
  fVar24 = *(float *)(unaff_x19 + 0x60) - *(float *)(unaff_x19 + 0x60);
  fVar23 = *(float *)(unaff_x19 + 100) - *(float *)(unaff_x19 + 100);
  if (fVar21 <= fVar23 * fVar23 + fVar22 * fVar22 + fVar24 * fVar24) {
    FUN_01afff7c();
  }
  lVar15 = *unaff_x20;
  if (*(int *)(lVar15 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar15 = *unaff_x20;
  }
  if (*(char *)(*(long *)(lVar15 + 0xb8) + 0xfd) != '\0') {
    if (*(int *)(lVar15 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar16 = FUN_01aff7c8();
    if ((uVar16 & 1) == 0) {
      if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_02660dac(*(undefined8 *)
                    Method_System_Collections_Generic_List<IronMaidenNeedle>_get_Item__,0);
      lVar15 = *unaff_x20;
      if (*(int *)(lVar15 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar15);
        lVar15 = *unaff_x20;
      }
      lVar19 = *(long *)(*(long *)(lVar15 + 0xb8) + 0x38);
      if (lVar19 != 0) {
        if (*(int *)(lVar15 + 0xe0) == 0) {
          thunk_FUN_00d32864(lVar15);
          lVar19 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x38);
          if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
        }
        (**(code **)(lVar19 + 0x18))(*(undefined8 *)(lVar19 + 0x40),*(undefined8 *)(lVar19 + 0x28));
      }
    }
  }
  lVar15 = *unaff_x20;
  if (*(int *)(lVar15 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar15 = *unaff_x20;
  }
  if (*(char *)(*(long *)(lVar15 + 0xb8) + 0xfd) == '\0') {
    if (*(int *)(lVar15 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar16 = FUN_01aff7c8();
    if ((uVar16 & 1) != 0) {
      if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_02660dac(*(undefined8 *)Method_System_Linq_Enumerable_Any<object>__,0);
      lVar15 = *unaff_x20;
      if (*(int *)(lVar15 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar15);
        lVar15 = *unaff_x20;
      }
      lVar19 = *(long *)(*(long *)(lVar15 + 0xb8) + 0x30);
      if (lVar19 != 0) {
        if (*(int *)(lVar15 + 0xe0) == 0) {
          thunk_FUN_00d32864(lVar15);
          lVar19 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x30);
          if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
        }
        (**(code **)(lVar19 + 0x18))(*(undefined8 *)(lVar19 + 0x40),*(undefined8 *)(lVar19 + 0x28));
      }
    }
  }
  if (*(int *)(*unaff_x20 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  bVar7 = FUN_01aff7c8();
  *(byte *)(*(long *)(*unaff_x20 + 0xb8) + 0xfd) = bVar7 & 1;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar20 = FUN_01b14884(0);
  FUN_01b02a9c(uVar20,(uint)uVar20 & 1);
  if ((*(char *)(*(long *)(*unaff_x20 + 0xb8) + 0x17a) != '\0') &&
     (uVar16 = FUN_01b029c4(), (uVar16 & 1) == 0)) {
    if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_02660dac(*(undefined8 *)Method_Autohand_Hand_<OnEnable>b__76_1__,0);
    lVar15 = *unaff_x20;
    if (*(int *)(lVar15 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar15);
      lVar15 = *unaff_x20;
    }
    lVar19 = *(long *)(*(long *)(lVar15 + 0xb8) + 0x48);
    if (lVar19 != 0) {
      if (*(int *)(lVar15 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar15);
        lVar19 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x48);
        if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
      }
      (**(code **)(lVar19 + 0x18))(*(undefined8 *)(lVar19 + 0x40),*(undefined8 *)(lVar19 + 0x28));
    }
  }
  lVar15 = *unaff_x20;
  if (*(int *)(lVar15 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar15 = *unaff_x20;
  }
  if ((*(char *)(*(long *)(lVar15 + 0xb8) + 0x17a) == '\0') &&
     (uVar16 = FUN_01b029c4(), (uVar16 & 1) != 0)) {
    if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_02660dac(*(undefined8 *)Method_UnityEngine_Component_GetComponent<Rigidbody>__,0);
    lVar15 = *unaff_x20;
    if (*(int *)(lVar15 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar15);
      lVar15 = *unaff_x20;
    }
    lVar19 = *(long *)(*(long *)(lVar15 + 0xb8) + 0x40);
    if (lVar19 != 0) {
      if (*(int *)(lVar15 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar15);
        lVar19 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x40);
        if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
      }
      (**(code **)(lVar19 + 0x18))(*(undefined8 *)(lVar19 + 0x40),*(undefined8 *)(lVar19 + 0x28));
    }
  }
  bVar7 = FUN_01b029c4();
  lVar15 = *unaff_x20;
  if (*(int *)(lVar15 + 0xe0) == 0) {
    thunk_FUN_00d32864(lVar15);
    lVar15 = *unaff_x20;
  }
  *(byte *)(*(long *)(lVar15 + 0xb8) + 0x17a) = bVar7 & 1;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar14 = FUN_01b15174(0);
  FUN_01affa34(uVar14 & 1);
  if (*(char *)(*(long *)(*unaff_x20 + 0xb8) + 0x100) != '\0') {
    if (*(int *)(*unaff_x20 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar16 = FUN_01aff95c();
    if ((uVar16 & 1) == 0) {
      if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_02660dac(*(undefined8 *)
                    Method_UnityEngine_InputSystem_HID_HID_HIDDeviceDescriptorBuilder_WithPhysicalMinMax__
                   ,0);
      lVar15 = *unaff_x20;
      if (*(int *)(lVar15 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar15);
        lVar15 = *unaff_x20;
      }
      lVar19 = *(long *)(*(long *)(lVar15 + 0xb8) + 0x58);
      if (lVar19 != 0) {
        if (*(int *)(lVar15 + 0xe0) == 0) {
          thunk_FUN_00d32864(lVar15);
          lVar19 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x58);
          if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
        }
        (**(code **)(lVar19 + 0x18))(*(undefined8 *)(lVar19 + 0x40),*(undefined8 *)(lVar19 + 0x28));
      }
    }
  }
  lVar15 = *unaff_x20;
  if (*(int *)(lVar15 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar15 = *unaff_x20;
  }
  if (*(char *)(*(long *)(lVar15 + 0xb8) + 0x100) == '\0') {
    if (*(int *)(lVar15 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar16 = FUN_01aff95c();
    if ((uVar16 & 1) != 0) {
      if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_02660dac(*(undefined8 *)Method_System_Collections_Generic_Stack<Random_State>_Pop__,0);
      lVar15 = *unaff_x20;
      if (*(int *)(lVar15 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar15);
        lVar15 = *unaff_x20;
      }
      lVar19 = *(long *)(*(long *)(lVar15 + 0xb8) + 0x50);
      if (lVar19 != 0) {
        if (*(int *)(lVar15 + 0xe0) == 0) {
          thunk_FUN_00d32864(lVar15);
          lVar19 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x50);
          if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
        }
        (**(code **)(lVar19 + 0x18))(*(undefined8 *)(lVar19 + 0x40),*(undefined8 *)(lVar19 + 0x28));
      }
    }
  }
  if (*(int *)(*unaff_x20 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  bVar7 = FUN_01aff95c();
  *(byte *)(*(long *)(*unaff_x20 + 0xb8) + 0x100) = bVar7 & 1;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  bVar7 = FUN_01b151d0(0);
  if (((bVar7 & 1) == 0) && (*(char *)(*(long *)(*unaff_x20 + 0xb8) + 0x101) != '\0')) {
    if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_02660dac(*(undefined8 *)Method_UnityEngine_GameObject_AddComponent<TMP_SubMeshUI>__,0);
    lVar15 = *unaff_x20;
    if (*(int *)(lVar15 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar15);
      lVar15 = *unaff_x20;
    }
    lVar19 = *(long *)(*(long *)(lVar15 + 0xb8) + 0x68);
    if (lVar19 != 0) {
      if (*(int *)(lVar15 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar15);
        lVar19 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x68);
        if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
      }
      (**(code **)(lVar19 + 0x18))(*(undefined8 *)(lVar19 + 0x40),*(undefined8 *)(lVar19 + 0x28));
    }
  }
  lVar15 = *unaff_x20;
  if (*(int *)(lVar15 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar15 = *unaff_x20;
  }
  if ((bVar7 & 1 & (*(byte *)(*(long *)(lVar15 + 0xb8) + 0x101) ^ 0xff)) != 0) {
    if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_02660dac(*(undefined8 *)PTR_DAT_033f5390,0);
    lVar15 = *unaff_x20;
    if (*(int *)(lVar15 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar15);
      lVar15 = *unaff_x20;
    }
    lVar19 = *(long *)(*(long *)(lVar15 + 0xb8) + 0x60);
    if (lVar19 != 0) {
      if (*(int *)(lVar15 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar15);
        lVar19 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x60);
        if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
      }
      (**(code **)(lVar19 + 0x18))(*(undefined8 *)(lVar19 + 0x40),*(undefined8 *)(lVar19 + 0x28));
    }
  }
  lVar15 = *unaff_x20;
  if (*(int *)(lVar15 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar15 = *unaff_x20;
  }
  *(byte *)(*(long *)(lVar15 + 0xb8) + 0x101) = bVar7 & 1;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar20 = FUN_01b14b4c(0);
  lVar15 = *unaff_x20;
  lVar19 = *(long *)(lVar15 + 0xb8);
  cVar2 = *(char *)(lVar19 + 0x17b);
  if (*(int *)(lVar15 + 0xe0) == 0) {
    thunk_FUN_00d32864(lVar15);
    lVar19 = *(long *)(*unaff_x20 + 0xb8);
    if (cVar2 != '\0') goto LAB_01b06810;
LAB_01b068d0:
    *(undefined8 *)(lVar19 + 0x180) = uVar20;
    *(undefined1 *)(lVar19 + 0x17b) = 1;
  }
  else {
    if (cVar2 == '\0') goto LAB_01b068d0;
LAB_01b06810:
    uVar16 = FUN_015fe7e8(uVar20,*(undefined8 *)(lVar19 + 0x180),0);
    if ((uVar16 & 1) != 0) {
      if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_02660dac(*(undefined8 *)
                    Method_System_Collections_Generic_List_Enumerator<LocomotionVignetteProvider>_MoveNext__
                   ,0);
      lVar15 = *unaff_x20;
      if (*(int *)(lVar15 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar15);
        lVar15 = *unaff_x20;
      }
      lVar19 = *(long *)(*(long *)(lVar15 + 0xb8) + 0x70);
      if (lVar19 != 0) {
        if (*(int *)(lVar15 + 0xe0) == 0) {
          thunk_FUN_00d32864(lVar15);
          lVar19 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x70);
          if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
        }
        (**(code **)(lVar19 + 0x18))(*(undefined8 *)(lVar19 + 0x40),*(undefined8 *)(lVar19 + 0x28));
      }
      lVar15 = *unaff_x20;
      if (*(int *)(lVar15 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar15 = *unaff_x20;
      }
      *(undefined8 *)(*(long *)(lVar15 + 0xb8) + 0x180) = uVar20;
    }
  }
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar20 = FUN_01b14e60(0);
  lVar15 = *unaff_x20;
  if (*(int *)(lVar15 + 0xe0) == 0) {
    thunk_FUN_00d32864(lVar15);
    lVar15 = *unaff_x20;
    lVar19 = *(long *)(lVar15 + 0xb8);
    cVar2 = *(char *)(lVar19 + 0x17c);
    if (*(int *)(lVar15 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar15);
      lVar15 = *unaff_x20;
      lVar19 = *(long *)(lVar15 + 0xb8);
      goto joined_r0x01b06ce8;
    }
    if (cVar2 != '\0') goto LAB_01b06910;
LAB_01b069e4:
    *(undefined8 *)(lVar19 + 0x188) = uVar20;
    *(undefined1 *)(lVar19 + 0x17c) = 1;
  }
  else {
    lVar19 = *(long *)(lVar15 + 0xb8);
    cVar2 = *(char *)(lVar19 + 0x17c);
joined_r0x01b06ce8:
    if (cVar2 == '\0') goto LAB_01b069e4;
LAB_01b06910:
    uVar16 = FUN_015fe7e8(uVar20,*(undefined8 *)(lVar19 + 0x188),0);
    if ((uVar16 & 1) == 0) {
      lVar15 = *unaff_x20;
    }
    else {
      if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_02660dac(*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vcgezq_s64__,0);
      lVar15 = *unaff_x20;
      if (*(int *)(lVar15 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar15);
        lVar15 = *unaff_x20;
      }
      lVar19 = *(long *)(*(long *)(lVar15 + 0xb8) + 0x78);
      if (lVar19 != 0) {
        if (*(int *)(lVar15 + 0xe0) == 0) {
          thunk_FUN_00d32864(lVar15);
          lVar19 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x78);
          if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
        }
        (**(code **)(lVar19 + 0x18))(*(undefined8 *)(lVar19 + 0x40),*(undefined8 *)(lVar19 + 0x28));
      }
      lVar15 = *unaff_x20;
      if (*(int *)(lVar15 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar15);
        lVar15 = *unaff_x20;
      }
      *(undefined8 *)(*(long *)(lVar15 + 0xb8) + 0x188) = uVar20;
    }
  }
  if (*(int *)(lVar15 + 0xe0) == 0) {
    thunk_FUN_00d32864(lVar15);
    lVar15 = *unaff_x20;
  }
  if (*(char *)(*(long *)(lVar15 + 0xb8) + 400) != '\0') {
    if (*(int *)(lVar15 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar15);
    }
    if (DAT_0377cea4 == '\0') {
      thunk_FUN_00d48444(System_Data_DataColumnCollection_TypeInfo);
      DAT_0377cea4 = '\x01';
    }
    lVar15 = *unaff_x20;
    if (*(int *)(lVar15 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar15 = *unaff_x20;
    }
    lVar15 = *(long *)(*(long *)(lVar15 + 0xb8) + 0x10);
    if (lVar15 == 0) goto LAB_01b06e0c;
    uVar16 = FUN_01b81bcc(lVar15,0);
    if ((uVar16 & 1) == 0) {
      if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_02660dac(*(undefined8 *)Method_Autohand_Demo_OpenXRTeleporterLink_FinishTeleportAction__,0
                  );
      lVar15 = *unaff_x20;
      if (*(int *)(lVar15 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar15);
        lVar15 = *unaff_x20;
      }
      lVar19 = *(long *)(*(long *)(lVar15 + 0xb8) + 0x88);
      if (lVar19 != 0) {
        if (*(int *)(lVar15 + 0xe0) == 0) {
          thunk_FUN_00d32864(lVar15);
          lVar19 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x88);
          if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
        }
        (**(code **)(lVar19 + 0x18))(*(undefined8 *)(lVar19 + 0x40),*(undefined8 *)(lVar19 + 0x28));
      }
    }
  }
  lVar15 = *unaff_x20;
  if (*(int *)(lVar15 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar15 = *unaff_x20;
  }
  if (*(char *)(*(long *)(lVar15 + 0xb8) + 400) == '\0') {
    if (*(int *)(lVar15 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    if (DAT_0377cea4 == '\0') {
      thunk_FUN_00d48444(System_Data_DataColumnCollection_TypeInfo);
      DAT_0377cea4 = '\x01';
    }
    lVar15 = *unaff_x20;
    if (*(int *)(lVar15 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar15 = *unaff_x20;
    }
    lVar15 = *(long *)(*(long *)(lVar15 + 0xb8) + 0x10);
    if (lVar15 == 0) goto LAB_01b06e0c;
    uVar16 = FUN_01b81bcc(lVar15,0);
    if ((uVar16 & 1) != 0) {
      if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_02660dac(*(undefined8 *)OVRPlugin_OVRP_1_96_0_TypeInfo,0);
      lVar15 = *unaff_x20;
      if (*(int *)(lVar15 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar15);
        lVar15 = *unaff_x20;
      }
      lVar19 = *(long *)(*(long *)(lVar15 + 0xb8) + 0x80);
      if (lVar19 != 0) {
        if (*(int *)(lVar15 + 0xe0) == 0) {
          thunk_FUN_00d32864(lVar15);
          lVar19 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x80);
          if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
        }
        (**(code **)(lVar19 + 0x18))(*(undefined8 *)(lVar19 + 0x40),*(undefined8 *)(lVar19 + 0x28));
      }
    }
  }
  if (*(int *)(*unaff_x20 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  if (DAT_0377cea4 == '\0') {
    thunk_FUN_00d48444(System_Data_DataColumnCollection_TypeInfo);
    DAT_0377cea4 = '\x01';
  }
  lVar15 = *unaff_x20;
  if (*(int *)(lVar15 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar15 = *unaff_x20;
  }
  lVar15 = *(long *)(*(long *)(lVar15 + 0xb8) + 0x10);
  if (lVar15 != 0) {
    bVar7 = FUN_01b81bcc(lVar15,0);
    lVar15 = *unaff_x20;
    *(byte *)(*(long *)(lVar15 + 0xb8) + 400) = bVar7 & 1;
    if (DAT_0377cd82 == '\0') {
      thunk_FUN_00d48444();
      lVar15 = *unaff_x20;
      DAT_0377cd82 = '\x01';
    }
    if (*(int *)(lVar15 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar15);
      lVar15 = *unaff_x20;
    }
    lVar15 = *(long *)(*(long *)(lVar15 + 0xb8) + 8);
    if (lVar15 != 0) {
      FUN_01aaf220(lVar15,0);
      iVar8 = *(int *)(unaff_x19 + 0x118);
      lVar15 = *(long *)(*unaff_x20 + 0xb8);
      if (*(int *)(lVar15 + 0x174) != iVar8) {
        if (*(int *)(*unaff_x20 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar15 = *(long *)(*unaff_x20 + 0xb8);
        }
        *(int *)(lVar15 + 0x174) = iVar8;
        if (iVar8 == 2) {
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          FUN_01b1a050(1,0);
          uVar20 = 1;
        }
        else {
          if (iVar8 == 1) {
            if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar20 = 1;
          }
          else {
            if (iVar8 != 0) goto LAB_01b06d3c;
            if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar20 = 0;
          }
          FUN_01b1a050(uVar20,0);
          uVar20 = 0;
        }
        FUN_01b1a11c(uVar20,0);
      }
LAB_01b06d3c:
      puVar6 = StringLiteral_5227;
      cVar2 = *(char *)(unaff_x19 + 0x11e);
      if (*(char *)(unaff_x19 + 0x11d) != cVar2) {
        *(char *)(unaff_x19 + 0x11d) = cVar2;
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_01b1ac3c(cVar2 != '\0',0);
      }
      if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_01af4b7c(0);
      FUN_01b07e1c();
      FUN_0268fd4c();
      FUN_01b02810();
      if (*(int *)(*unaff_x20 + 0xe0) == 0) {
        thunk_FUN_00d32864(*unaff_x20);
      }
      FUN_01b091c8();
      FUN_01b0968c(*(undefined1 *)(unaff_x19 + 0x101));
      FUN_01b09924();
      return;
    }
  }
LAB_01b06e0c:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


