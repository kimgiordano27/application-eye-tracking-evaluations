/*
FUNCTION_NAME: Sirenix.Serialization.JsonDataWriter$$WriteTypeEntry
ENTRY_POINT: 01b05adc
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_21;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_1
*/


void Sirenix_Serialization_JsonDataWriter__WriteTypeEntry(void)

{
  bool bVar1;
  char cVar2;
  undefined *puVar3;
  undefined *puVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  ulong uVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  long lVar17;
  undefined8 uVar18;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x24;
  long *unaff_x25;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined8 in_stack_00000010;
  int iStack0000000000000018;
  int iStack000000000000001c;
  
  thunk_FUN_00d32864();
  uVar13 = FUN_01b2e418(&stack0x00000018,0);
  if ((uVar13 & 1) != 0) {
    iVar6 = FUN_0289a700(0);
    fVar19 = (float)FUN_0289a7fc(0);
    iVar8 = -0x80000000;
    if (fVar19 * (float)iVar6 != INFINITY) {
      iVar8 = (int)(fVar19 * (float)iVar6);
    }
    iVar7 = FUN_0289a728(0);
    fVar19 = (float)FUN_0289a7fc(0);
    iVar6 = -0x80000000;
    if (fVar19 * (float)iVar7 != INFINITY) {
      iVar6 = (int)(fVar19 * (float)iVar7);
    }
    iVar7 = iVar8 + 0x20;
    if (iStack0000000000000018 <= iVar8 + 0x20) {
      iVar7 = iStack0000000000000018;
    }
    bVar1 = iVar8 + -0x20 <= iStack0000000000000018;
    iStack0000000000000018 = iVar8 + -0x20;
    if (bVar1) {
      iStack0000000000000018 = iVar7;
    }
    iVar8 = iVar6 + 0x20;
    if (iStack000000000000001c <= iVar6 + 0x20) {
      iVar8 = iStack000000000000001c;
    }
    bVar1 = iVar6 + -0x20 <= iStack000000000000001c;
    iStack000000000000001c = iVar6 + -0x20;
    if (bVar1) {
      iStack000000000000001c = iVar8;
    }
    iVar8 = FUN_0289a700(0);
    fVar19 = (*(float *)(unaff_x19 + 0x30) * (float)iVar8) / *(float *)(unaff_x19 + 0x34);
    iVar6 = -0x80000000;
    iVar8 = iVar6;
    if (fVar19 != INFINITY) {
      iVar8 = (int)fVar19;
    }
    iVar7 = FUN_0289a728(0);
    iVar10 = iStack0000000000000018;
    fVar19 = (*(float *)(unaff_x19 + 0x30) * (float)iVar7) / *(float *)(unaff_x19 + 0x34);
    iVar7 = iVar6;
    if (fVar19 != INFINITY) {
      iVar7 = (int)fVar19;
    }
    iVar9 = FUN_0289a700(0);
    iVar11 = iStack000000000000001c;
    if (iVar10 <= iVar9) {
      iVar9 = iVar10;
    }
    if (iVar8 <= iVar10) {
      iVar8 = iVar9;
    }
    iVar10 = FUN_0289a728(0);
    if (iVar11 <= iVar10) {
      iVar10 = iVar11;
    }
    if (iVar7 <= iVar11) {
      iVar7 = iVar10;
    }
    iVar10 = FUN_0289a700(0);
    fVar19 = (float)iVar8 / (float)iVar10;
    iVar9 = FUN_0289a728(0);
    iVar11 = FUN_0289a728(0);
    iVar10 = iVar6;
    if (fVar19 * (float)iVar11 != INFINITY) {
      iVar10 = (int)(fVar19 * (float)iVar11);
    }
    fVar20 = fVar19;
    if (iVar10 != iVar7) {
      fVar22 = (float)iVar7 / (float)iVar9;
      iVar7 = FUN_0289a700(0);
      if (fVar22 * (float)iVar7 != INFINITY) {
        iVar6 = (int)(fVar22 * (float)iVar7);
      }
      fVar20 = fVar22;
      if ((iVar6 != iVar8) && (fVar20 = fVar19, fVar22 <= fVar19)) {
        fVar20 = fVar22;
      }
    }
    FUN_0289a84c(fVar20,0);
    FUN_02681124(fVar20,fVar20,0);
  }
  if (*(char *)(unaff_x19 + 0x114) != '\0') {
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar13 = FUN_01b15308(0);
    if ((uVar13 & 1) != 0) {
      if (*(int *)(*unaff_x20 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      if (DAT_0377cd82 == '\0') {
        thunk_FUN_00d48444(System_Data_DataColumnCollection_TypeInfo);
        DAT_0377cd82 = '\x01';
      }
      lVar14 = *unaff_x20;
      if (*(int *)(lVar14 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar14 = *unaff_x20;
      }
      lVar14 = *(long *)(*(long *)(lVar14 + 0xb8) + 8);
      if (lVar14 == 0) goto LAB_01b06e0c;
      FUN_01aaf4dc(lVar14,0);
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
  lVar14 = *unaff_x20;
  if (*(int *)(lVar14 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar14 = *unaff_x20;
  }
  lVar14 = *(long *)(*(long *)(lVar14 + 0xb8) + 0x10);
  if (lVar14 == 0) goto LAB_01b06e0c;
  Sirenix_Utilities_DeepReflection_PathStep___ctor(lVar14,*(undefined1 *)(unaff_x19 + 0x110),0);
  cVar2 = *(char *)(unaff_x19 + 0x111);
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  puVar3 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  FUN_01b14294(cVar2 != '\0',0);
  FUN_01b14544(*(undefined1 *)(unaff_x19 + 0x112),0);
  plVar15 = (long *)FUN_026ae324(0);
  if (plVar15 == (long *)0x0) {
LAB_01b05e50:
    plVar15 = (long *)0x0;
  }
  else {
    bVar5 = *(byte *)(*(long *)Method_System_Collections_Generic_List<TMP_Glyph>_get_Item__ + 300);
    if (*(byte *)(*plVar15 + 300) < bVar5) goto LAB_01b05e50;
    if (*(long *)(*(long *)(*plVar15 + 200) + (ulong)bVar5 * 8 + -8) !=
        *(long *)Method_System_Collections_Generic_List<TMP_Glyph>_get_Item__) {
      plVar15 = (long *)0x0;
    }
  }
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar13 = FUN_02681b9c(plVar15,0,0);
  if ((uVar13 & 1) == 0) {
    iVar8 = FUN_0267a510(0);
  }
  else {
    if (plVar15 == (long *)0x0) goto LAB_01b06e0c;
    iVar8 = (int)plVar15[0xc];
  }
  if (*(char *)(unaff_x19 + 0x20) != '\0') {
    if (*(int *)(*unaff_x20 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    if (DAT_0377cd82 == '\0') {
      thunk_FUN_00d48444(System_Data_DataColumnCollection_TypeInfo);
      DAT_0377cd82 = '\x01';
    }
    lVar14 = *unaff_x20;
    if (*(int *)(lVar14 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar14 = *unaff_x20;
    }
    lVar14 = *(long *)(*(long *)(lVar14 + 0xb8) + 8);
    if (lVar14 == 0) goto LAB_01b06e0c;
    iVar6 = FUN_01aafc7c(lVar14,0);
    if (iVar8 != iVar6) {
      plVar16 = (long *)FUN_00da4fb8(*(undefined8 *)PTR_DAT_033ea8a0,5);
      puVar4 = StringLiteral_11058;
      if (plVar16 == (long *)0x0) goto LAB_01b06e0c;
      if ((*(long *)StringLiteral_11058 != 0) &&
         (lVar14 = thunk_FUN_00d6225c(*(long *)StringLiteral_11058,*(undefined8 *)(*plVar16 + 0x40))
         , lVar14 == 0)) {
LAB_01b06e14:
        uVar18 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
        FUN_00da5038(uVar18,0);
      }
      if ((int)plVar16[3] == 0) goto LAB_01b06e10;
      plVar16[4] = *(long *)puVar4;
      in_stack_00000010._4_4_ = FUN_0267a510(0);
      lVar14 = FUN_0176eb1c((long)&stack0x00000010 + 4,0);
      if ((lVar14 != 0) &&
         (lVar17 = thunk_FUN_00d6225c(lVar14,*(undefined8 *)(*plVar16 + 0x40)), lVar17 == 0))
      goto LAB_01b06e14;
      puVar4 = StringLiteral_13695;
      uVar12 = *(uint *)(plVar16 + 3);
      if (uVar12 < 2) {
LAB_01b06e10:
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      plVar16[5] = lVar14;
      lVar14 = *(long *)puVar4;
      if (lVar14 != 0) {
        lVar14 = thunk_FUN_00d6225c(lVar14,*(undefined8 *)(*plVar16 + 0x40));
        if (lVar14 == 0) goto LAB_01b06e14;
        uVar12 = *(uint *)(plVar16 + 3);
      }
      if (uVar12 < 3) goto LAB_01b06e10;
      plVar16[6] = *(long *)puVar4;
      if (*(int *)(*unaff_x20 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      if (DAT_0377cd82 == '\0') {
        thunk_FUN_00d48444(System_Data_DataColumnCollection_TypeInfo);
        DAT_0377cd82 = '\x01';
      }
      lVar14 = *unaff_x20;
      if (*(int *)(lVar14 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar14 = *unaff_x20;
      }
      lVar14 = *(long *)(*(long *)(lVar14 + 0xb8) + 8);
      if (lVar14 == 0) goto LAB_01b06e0c;
      in_stack_00000010._4_4_ = FUN_01aafc7c(lVar14,0);
      lVar14 = FUN_0176eb1c((long)&stack0x00000010 + 4,0);
      if ((lVar14 != 0) &&
         (lVar17 = thunk_FUN_00d6225c(lVar14,*(undefined8 *)(*plVar16 + 0x40)), lVar17 == 0))
      goto LAB_01b06e14;
      puVar4 = Method_SmackAJack_<StopGameCoroutine>d__33_System_Collections_IEnumerator_Reset__;
      uVar12 = *(uint *)(plVar16 + 3);
      if (uVar12 < 4) goto LAB_01b06e10;
      plVar16[7] = lVar14;
      lVar14 = *(long *)puVar4;
      if (lVar14 != 0) {
        lVar14 = thunk_FUN_00d6225c(lVar14,*(undefined8 *)(*plVar16 + 0x40));
        if (lVar14 == 0) goto LAB_01b06e14;
        uVar12 = *(uint *)(plVar16 + 3);
      }
      if (uVar12 < 5) goto LAB_01b06e10;
      plVar16[8] = *(long *)puVar4;
      uVar18 = FUN_01600844(plVar16,0);
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_00d32864(*unaff_x25);
      }
      FUN_02660dac(uVar18,0);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar13 = FUN_02681b9c(plVar15,0,0);
      if (*(int *)(*unaff_x20 + 0xe0) == 0) {
        thunk_FUN_00d32864(*unaff_x20);
      }
      if (DAT_0377cd82 == '\0') {
        thunk_FUN_00d48444(System_Data_DataColumnCollection_TypeInfo);
        DAT_0377cd82 = '\x01';
      }
      lVar14 = *unaff_x20;
      if (*(int *)(lVar14 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar14 = *unaff_x20;
      }
      lVar14 = *(long *)(*(long *)(lVar14 + 0xb8) + 8);
      if (lVar14 == 0) goto LAB_01b06e0c;
      uVar18 = FUN_01aafc7c(lVar14,0);
      if ((uVar13 & 1) == 0) {
        FUN_0267a538(uVar18,0);
      }
      else {
        if (plVar15 == (long *)0x0) goto LAB_01b06e0c;
        *(int *)(plVar15 + 0xc) = (int)uVar18;
      }
    }
  }
  bVar5 = FUN_01affc04();
  if ((bVar5 & 1) != *(byte *)(unaff_x19 + 0x21)) {
    Sirenix_Serialization_BinaryDataWriter_<>c__<_cctor>b__70_3();
  }
  fVar19 = DAT_028aa020;
  fVar20 = *(float *)(unaff_x19 + 0x50) - *(float *)(unaff_x19 + 0x50);
  fVar22 = *(float *)(unaff_x19 + 0x54) - *(float *)(unaff_x19 + 0x54);
  fVar21 = *(float *)(unaff_x19 + 0x58) - *(float *)(unaff_x19 + 0x58);
  if (DAT_028aa020 <= fVar21 * fVar21 + fVar20 * fVar20 + fVar22 * fVar22) {
    FUN_01affe88();
  }
  fVar20 = *(float *)(unaff_x19 + 0x5c) - *(float *)(unaff_x19 + 0x5c);
  fVar22 = *(float *)(unaff_x19 + 0x60) - *(float *)(unaff_x19 + 0x60);
  fVar21 = *(float *)(unaff_x19 + 100) - *(float *)(unaff_x19 + 100);
  if (fVar19 <= fVar21 * fVar21 + fVar20 * fVar20 + fVar22 * fVar22) {
    FUN_01afff7c();
  }
  lVar14 = *unaff_x20;
  if (*(int *)(lVar14 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar14 = *unaff_x20;
  }
  if (*(char *)(*(long *)(lVar14 + 0xb8) + 0xfd) != '\0') {
    if (*(int *)(lVar14 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar13 = FUN_01aff7c8();
    if ((uVar13 & 1) == 0) {
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_02660dac(*(undefined8 *)
                    Method_System_Collections_Generic_List<IronMaidenNeedle>_get_Item__,0);
      lVar14 = *unaff_x20;
      if (*(int *)(lVar14 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar14);
        lVar14 = *unaff_x20;
      }
      lVar17 = *(long *)(*(long *)(lVar14 + 0xb8) + 0x38);
      if (lVar17 != 0) {
        if (*(int *)(lVar14 + 0xe0) == 0) {
          thunk_FUN_00d32864(lVar14);
          lVar17 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x38);
          if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
        }
        (**(code **)(lVar17 + 0x18))(*(undefined8 *)(lVar17 + 0x40),*(undefined8 *)(lVar17 + 0x28));
      }
    }
  }
  lVar14 = *unaff_x20;
  if (*(int *)(lVar14 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar14 = *unaff_x20;
  }
  if (*(char *)(*(long *)(lVar14 + 0xb8) + 0xfd) == '\0') {
    if (*(int *)(lVar14 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar13 = FUN_01aff7c8();
    if ((uVar13 & 1) != 0) {
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_02660dac(*(undefined8 *)Method_System_Linq_Enumerable_Any<object>__,0);
      lVar14 = *unaff_x20;
      if (*(int *)(lVar14 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar14);
        lVar14 = *unaff_x20;
      }
      lVar17 = *(long *)(*(long *)(lVar14 + 0xb8) + 0x30);
      if (lVar17 != 0) {
        if (*(int *)(lVar14 + 0xe0) == 0) {
          thunk_FUN_00d32864(lVar14);
          lVar17 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x30);
          if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
        }
        (**(code **)(lVar17 + 0x18))(*(undefined8 *)(lVar17 + 0x40),*(undefined8 *)(lVar17 + 0x28));
      }
    }
  }
  if (*(int *)(*unaff_x20 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  bVar5 = FUN_01aff7c8();
  *(byte *)(*(long *)(*unaff_x20 + 0xb8) + 0xfd) = bVar5 & 1;
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar18 = FUN_01b14884(0);
  FUN_01b02a9c(uVar18,(uint)uVar18 & 1);
  if ((*(char *)(*(long *)(*unaff_x20 + 0xb8) + 0x17a) != '\0') &&
     (uVar13 = FUN_01b029c4(), (uVar13 & 1) == 0)) {
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_02660dac(*(undefined8 *)Method_Autohand_Hand_<OnEnable>b__76_1__,0);
    lVar14 = *unaff_x20;
    if (*(int *)(lVar14 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar14);
      lVar14 = *unaff_x20;
    }
    lVar17 = *(long *)(*(long *)(lVar14 + 0xb8) + 0x48);
    if (lVar17 != 0) {
      if (*(int *)(lVar14 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar14);
        lVar17 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x48);
        if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
      }
      (**(code **)(lVar17 + 0x18))(*(undefined8 *)(lVar17 + 0x40),*(undefined8 *)(lVar17 + 0x28));
    }
  }
  lVar14 = *unaff_x20;
  if (*(int *)(lVar14 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar14 = *unaff_x20;
  }
  if ((*(char *)(*(long *)(lVar14 + 0xb8) + 0x17a) == '\0') &&
     (uVar13 = FUN_01b029c4(), (uVar13 & 1) != 0)) {
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_02660dac(*(undefined8 *)Method_UnityEngine_Component_GetComponent<Rigidbody>__,0);
    lVar14 = *unaff_x20;
    if (*(int *)(lVar14 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar14);
      lVar14 = *unaff_x20;
    }
    lVar17 = *(long *)(*(long *)(lVar14 + 0xb8) + 0x40);
    if (lVar17 != 0) {
      if (*(int *)(lVar14 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar14);
        lVar17 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x40);
        if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
      }
      (**(code **)(lVar17 + 0x18))(*(undefined8 *)(lVar17 + 0x40),*(undefined8 *)(lVar17 + 0x28));
    }
  }
  bVar5 = FUN_01b029c4();
  lVar14 = *unaff_x20;
  if (*(int *)(lVar14 + 0xe0) == 0) {
    thunk_FUN_00d32864(lVar14);
    lVar14 = *unaff_x20;
  }
  *(byte *)(*(long *)(lVar14 + 0xb8) + 0x17a) = bVar5 & 1;
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar12 = FUN_01b15174(0);
  FUN_01affa34(uVar12 & 1);
  if (*(char *)(*(long *)(*unaff_x20 + 0xb8) + 0x100) != '\0') {
    if (*(int *)(*unaff_x20 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar13 = FUN_01aff95c();
    if ((uVar13 & 1) == 0) {
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_02660dac(*(undefined8 *)
                    Method_UnityEngine_InputSystem_HID_HID_HIDDeviceDescriptorBuilder_WithPhysicalMinMax__
                   ,0);
      lVar14 = *unaff_x20;
      if (*(int *)(lVar14 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar14);
        lVar14 = *unaff_x20;
      }
      lVar17 = *(long *)(*(long *)(lVar14 + 0xb8) + 0x58);
      if (lVar17 != 0) {
        if (*(int *)(lVar14 + 0xe0) == 0) {
          thunk_FUN_00d32864(lVar14);
          lVar17 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x58);
          if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
        }
        (**(code **)(lVar17 + 0x18))(*(undefined8 *)(lVar17 + 0x40),*(undefined8 *)(lVar17 + 0x28));
      }
    }
  }
  lVar14 = *unaff_x20;
  if (*(int *)(lVar14 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar14 = *unaff_x20;
  }
  if (*(char *)(*(long *)(lVar14 + 0xb8) + 0x100) == '\0') {
    if (*(int *)(lVar14 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar13 = FUN_01aff95c();
    if ((uVar13 & 1) != 0) {
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_02660dac(*(undefined8 *)Method_System_Collections_Generic_Stack<Random_State>_Pop__,0);
      lVar14 = *unaff_x20;
      if (*(int *)(lVar14 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar14);
        lVar14 = *unaff_x20;
      }
      lVar17 = *(long *)(*(long *)(lVar14 + 0xb8) + 0x50);
      if (lVar17 != 0) {
        if (*(int *)(lVar14 + 0xe0) == 0) {
          thunk_FUN_00d32864(lVar14);
          lVar17 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x50);
          if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
        }
        (**(code **)(lVar17 + 0x18))(*(undefined8 *)(lVar17 + 0x40),*(undefined8 *)(lVar17 + 0x28));
      }
    }
  }
  if (*(int *)(*unaff_x20 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  bVar5 = FUN_01aff95c();
  *(byte *)(*(long *)(*unaff_x20 + 0xb8) + 0x100) = bVar5 & 1;
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  bVar5 = FUN_01b151d0(0);
  if (((bVar5 & 1) == 0) && (*(char *)(*(long *)(*unaff_x20 + 0xb8) + 0x101) != '\0')) {
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_02660dac(*(undefined8 *)Method_UnityEngine_GameObject_AddComponent<TMP_SubMeshUI>__,0);
    lVar14 = *unaff_x20;
    if (*(int *)(lVar14 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar14);
      lVar14 = *unaff_x20;
    }
    lVar17 = *(long *)(*(long *)(lVar14 + 0xb8) + 0x68);
    if (lVar17 != 0) {
      if (*(int *)(lVar14 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar14);
        lVar17 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x68);
        if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
      }
      (**(code **)(lVar17 + 0x18))(*(undefined8 *)(lVar17 + 0x40),*(undefined8 *)(lVar17 + 0x28));
    }
  }
  lVar14 = *unaff_x20;
  if (*(int *)(lVar14 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar14 = *unaff_x20;
  }
  if ((bVar5 & 1 & (*(byte *)(*(long *)(lVar14 + 0xb8) + 0x101) ^ 0xff)) != 0) {
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_02660dac(*(undefined8 *)PTR_DAT_033f5390,0);
    lVar14 = *unaff_x20;
    if (*(int *)(lVar14 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar14);
      lVar14 = *unaff_x20;
    }
    lVar17 = *(long *)(*(long *)(lVar14 + 0xb8) + 0x60);
    if (lVar17 != 0) {
      if (*(int *)(lVar14 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar14);
        lVar17 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x60);
        if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
      }
      (**(code **)(lVar17 + 0x18))(*(undefined8 *)(lVar17 + 0x40),*(undefined8 *)(lVar17 + 0x28));
    }
  }
  lVar14 = *unaff_x20;
  if (*(int *)(lVar14 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar14 = *unaff_x20;
  }
  *(byte *)(*(long *)(lVar14 + 0xb8) + 0x101) = bVar5 & 1;
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar18 = FUN_01b14b4c(0);
  lVar14 = *unaff_x20;
  lVar17 = *(long *)(lVar14 + 0xb8);
  cVar2 = *(char *)(lVar17 + 0x17b);
  if (*(int *)(lVar14 + 0xe0) == 0) {
    thunk_FUN_00d32864(lVar14);
    lVar17 = *(long *)(*unaff_x20 + 0xb8);
    if (cVar2 == '\0') goto LAB_01b068d0;
LAB_01b06810:
    uVar13 = FUN_015fe7e8(uVar18,*(undefined8 *)(lVar17 + 0x180),0);
    if ((uVar13 & 1) != 0) {
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_02660dac(*(undefined8 *)
                    Method_System_Collections_Generic_List_Enumerator<LocomotionVignetteProvider>_MoveNext__
                   ,0);
      lVar14 = *unaff_x20;
      if (*(int *)(lVar14 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar14);
        lVar14 = *unaff_x20;
      }
      lVar17 = *(long *)(*(long *)(lVar14 + 0xb8) + 0x70);
      if (lVar17 != 0) {
        if (*(int *)(lVar14 + 0xe0) == 0) {
          thunk_FUN_00d32864(lVar14);
          lVar17 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x70);
          if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
        }
        (**(code **)(lVar17 + 0x18))(*(undefined8 *)(lVar17 + 0x40),*(undefined8 *)(lVar17 + 0x28));
      }
      lVar14 = *unaff_x20;
      if (*(int *)(lVar14 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar14 = *unaff_x20;
      }
      *(undefined8 *)(*(long *)(lVar14 + 0xb8) + 0x180) = uVar18;
    }
  }
  else {
    if (cVar2 != '\0') goto LAB_01b06810;
LAB_01b068d0:
    *(undefined8 *)(lVar17 + 0x180) = uVar18;
    *(undefined1 *)(lVar17 + 0x17b) = 1;
  }
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar18 = FUN_01b14e60(0);
  lVar14 = *unaff_x20;
  if (*(int *)(lVar14 + 0xe0) == 0) {
    thunk_FUN_00d32864(lVar14);
    lVar14 = *unaff_x20;
    lVar17 = *(long *)(lVar14 + 0xb8);
    cVar2 = *(char *)(lVar17 + 0x17c);
    if (*(int *)(lVar14 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar14);
      lVar14 = *unaff_x20;
      lVar17 = *(long *)(lVar14 + 0xb8);
      goto joined_r0x01b06ce8;
    }
    if (cVar2 == '\0') goto LAB_01b069e4;
LAB_01b06910:
    uVar13 = FUN_015fe7e8(uVar18,*(undefined8 *)(lVar17 + 0x188),0);
    if ((uVar13 & 1) == 0) {
      lVar14 = *unaff_x20;
    }
    else {
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_02660dac(*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vcgezq_s64__,0);
      lVar14 = *unaff_x20;
      if (*(int *)(lVar14 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar14);
        lVar14 = *unaff_x20;
      }
      lVar17 = *(long *)(*(long *)(lVar14 + 0xb8) + 0x78);
      if (lVar17 != 0) {
        if (*(int *)(lVar14 + 0xe0) == 0) {
          thunk_FUN_00d32864(lVar14);
          lVar17 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x78);
          if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
        }
        (**(code **)(lVar17 + 0x18))(*(undefined8 *)(lVar17 + 0x40),*(undefined8 *)(lVar17 + 0x28));
      }
      lVar14 = *unaff_x20;
      if (*(int *)(lVar14 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar14);
        lVar14 = *unaff_x20;
      }
      *(undefined8 *)(*(long *)(lVar14 + 0xb8) + 0x188) = uVar18;
    }
  }
  else {
    lVar17 = *(long *)(lVar14 + 0xb8);
    cVar2 = *(char *)(lVar17 + 0x17c);
joined_r0x01b06ce8:
    if (cVar2 != '\0') goto LAB_01b06910;
LAB_01b069e4:
    *(undefined8 *)(lVar17 + 0x188) = uVar18;
    *(undefined1 *)(lVar17 + 0x17c) = 1;
  }
  if (*(int *)(lVar14 + 0xe0) == 0) {
    thunk_FUN_00d32864(lVar14);
    lVar14 = *unaff_x20;
  }
  if (*(char *)(*(long *)(lVar14 + 0xb8) + 400) != '\0') {
    if (*(int *)(lVar14 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar14);
    }
    if (DAT_0377cea4 == '\0') {
      thunk_FUN_00d48444(System_Data_DataColumnCollection_TypeInfo);
      DAT_0377cea4 = '\x01';
    }
    lVar14 = *unaff_x20;
    if (*(int *)(lVar14 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar14 = *unaff_x20;
    }
    lVar14 = *(long *)(*(long *)(lVar14 + 0xb8) + 0x10);
    if (lVar14 == 0) goto LAB_01b06e0c;
    uVar13 = FUN_01b81bcc(lVar14,0);
    if ((uVar13 & 1) == 0) {
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_02660dac(*(undefined8 *)Method_Autohand_Demo_OpenXRTeleporterLink_FinishTeleportAction__,0
                  );
      lVar14 = *unaff_x20;
      if (*(int *)(lVar14 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar14);
        lVar14 = *unaff_x20;
      }
      lVar17 = *(long *)(*(long *)(lVar14 + 0xb8) + 0x88);
      if (lVar17 != 0) {
        if (*(int *)(lVar14 + 0xe0) == 0) {
          thunk_FUN_00d32864(lVar14);
          lVar17 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x88);
          if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
        }
        (**(code **)(lVar17 + 0x18))(*(undefined8 *)(lVar17 + 0x40),*(undefined8 *)(lVar17 + 0x28));
      }
    }
  }
  lVar14 = *unaff_x20;
  if (*(int *)(lVar14 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar14 = *unaff_x20;
  }
  if (*(char *)(*(long *)(lVar14 + 0xb8) + 400) == '\0') {
    if (*(int *)(lVar14 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    if (DAT_0377cea4 == '\0') {
      thunk_FUN_00d48444(System_Data_DataColumnCollection_TypeInfo);
      DAT_0377cea4 = '\x01';
    }
    lVar14 = *unaff_x20;
    if (*(int *)(lVar14 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar14 = *unaff_x20;
    }
    lVar14 = *(long *)(*(long *)(lVar14 + 0xb8) + 0x10);
    if (lVar14 == 0) goto LAB_01b06e0c;
    uVar13 = FUN_01b81bcc(lVar14,0);
    if ((uVar13 & 1) != 0) {
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_02660dac(*(undefined8 *)OVRPlugin_OVRP_1_96_0_TypeInfo,0);
      lVar14 = *unaff_x20;
      if (*(int *)(lVar14 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar14);
        lVar14 = *unaff_x20;
      }
      lVar17 = *(long *)(*(long *)(lVar14 + 0xb8) + 0x80);
      if (lVar17 != 0) {
        if (*(int *)(lVar14 + 0xe0) == 0) {
          thunk_FUN_00d32864(lVar14);
          lVar17 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x80);
          if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
        }
        (**(code **)(lVar17 + 0x18))(*(undefined8 *)(lVar17 + 0x40),*(undefined8 *)(lVar17 + 0x28));
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
  lVar14 = *unaff_x20;
  if (*(int *)(lVar14 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar14 = *unaff_x20;
  }
  lVar14 = *(long *)(*(long *)(lVar14 + 0xb8) + 0x10);
  if (lVar14 != 0) {
    bVar5 = FUN_01b81bcc(lVar14,0);
    lVar14 = *unaff_x20;
    *(byte *)(*(long *)(lVar14 + 0xb8) + 400) = bVar5 & 1;
    if (DAT_0377cd82 == '\0') {
      thunk_FUN_00d48444();
      lVar14 = *unaff_x20;
      DAT_0377cd82 = '\x01';
    }
    if (*(int *)(lVar14 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar14);
      lVar14 = *unaff_x20;
    }
    lVar14 = *(long *)(*(long *)(lVar14 + 0xb8) + 8);
    if (lVar14 != 0) {
      FUN_01aaf220(lVar14,0);
      iVar8 = *(int *)(unaff_x19 + 0x118);
      lVar14 = *(long *)(*unaff_x20 + 0xb8);
      if (*(int *)(lVar14 + 0x174) != iVar8) {
        if (*(int *)(*unaff_x20 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar14 = *(long *)(*unaff_x20 + 0xb8);
        }
        *(int *)(lVar14 + 0x174) = iVar8;
        if (iVar8 == 2) {
          if (*(int *)(*unaff_x24 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          FUN_01b1a050(1,0);
          uVar18 = 1;
        }
        else {
          if (iVar8 == 1) {
            if (*(int *)(*unaff_x24 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar18 = 1;
          }
          else {
            if (iVar8 != 0) goto LAB_01b06d3c;
            if (*(int *)(*unaff_x24 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar18 = 0;
          }
          FUN_01b1a050(uVar18,0);
          uVar18 = 0;
        }
        FUN_01b1a11c(uVar18,0);
      }
LAB_01b06d3c:
      puVar3 = StringLiteral_5227;
      cVar2 = *(char *)(unaff_x19 + 0x11e);
      if (*(char *)(unaff_x19 + 0x11d) != cVar2) {
        *(char *)(unaff_x19 + 0x11d) = cVar2;
        if (*(int *)(*unaff_x24 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_01b1ac3c(cVar2 != '\0',0);
      }
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
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


