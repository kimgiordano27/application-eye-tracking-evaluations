/*
FUNCTION_NAME: FUN_01b05858
ENTRY_POINT: 01b05858
PROGRAM: Lovesick-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_21;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_01b05858(long param_1)

{
  bool bVar1;
  char cVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  byte bVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  undefined4 uVar16;
  long lVar17;
  ulong uVar18;
  long *plVar19;
  long *plVar20;
  long lVar21;
  undefined8 uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined4 local_7c;
  int local_78;
  int iStack_74;
  
  puVar4 = System_Data_DataColumnCollection_TypeInfo;
  if ((DAT_0377d20f & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_302);
    thunk_FUN_00d48444(StringLiteral_5227);
    thunk_FUN_00d48444(System_Data_DataColumnCollection_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033f02a8);
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033ea8a0);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<TMP_Glyph>_get_Item__);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List_Enumerator<LocomotionVignetteProvider>_MoveNext__
                      );
    thunk_FUN_00d48444(StringLiteral_13695);
    thunk_FUN_00d48444(
                      Method_UnityEngine_InputSystem_InputSystem_RegisterLayout<OpenVROculusTouchController>__
                      );
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
    DAT_0377d20f = 1;
  }
  lVar17 = *(long *)puVar4;
  local_78 = 0;
  iStack_74 = 0;
  local_7c = 0;
  if (*(int *)(lVar17 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar17 = *(long *)puVar4;
  }
  puVar3 = PTR_DAT_033f02a8;
  if (*(char *)(*(long *)(lVar17 + 0xb8) + 0x1b4) == '\0') {
    if (*(int *)(lVar17 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    lVar17 = FUN_01b05384();
    lVar21 = FUN_01b05520();
    if (lVar17 == 0) {
      return;
    }
    if (lVar21 == 0) {
      return;
    }
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar18 = FUN_01b13ca4(0);
    if ((uVar18 & 1) == 0) {
      return;
    }
    FUN_01b0311c(param_1);
  }
  puVar7 = StringLiteral_302;
  if ((*(char *)(param_1 + 0x2c) != '\0') &&
     (iVar9 = FUN_02681fdc(0),
     puVar5 = 
     Method_UnityEngine_InputSystem_InputSystem_RegisterLayout<OpenVROculusTouchController>__,
     iVar9 == 0x15)) {
    if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_026610e4(*(undefined8 *)puVar5,0);
    *(undefined1 *)(param_1 + 0x2c) = 0;
  }
  FUN_01b05234();
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar18 = FUN_01b152ac(0);
  puVar5 = Method_System_Collections_Generic_List<TEdge>__ctor__;
  if ((uVar18 & 1) != 0) {
    if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_02660dac(*(undefined8 *)puVar5,0);
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    if (DAT_0377a363 == '\0') {
      thunk_FUN_00d48444(System_Data_DataColumnCollection_TypeInfo);
      DAT_0377a363 = '\x01';
    }
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_01b07b44();
    FUN_01b07c4c();
    FUN_0269e53c(0);
  }
  if (*(char *)(param_1 + 0x2c) != '\0') {
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar18 = FUN_01b2e418(&local_78,0);
    if ((uVar18 & 1) != 0) {
      iVar10 = FUN_0289a700(0);
      fVar23 = (float)FUN_0289a7fc(0);
      iVar9 = -0x80000000;
      if (fVar23 * (float)iVar10 != INFINITY) {
        iVar9 = (int)(fVar23 * (float)iVar10);
      }
      iVar11 = FUN_0289a728(0);
      fVar23 = (float)FUN_0289a7fc(0);
      iVar10 = -0x80000000;
      if (fVar23 * (float)iVar11 != INFINITY) {
        iVar10 = (int)(fVar23 * (float)iVar11);
      }
      iVar11 = iVar9 + 0x20;
      if (local_78 <= iVar9 + 0x20) {
        iVar11 = local_78;
      }
      bVar1 = iVar9 + -0x20 <= local_78;
      local_78 = iVar9 + -0x20;
      if (bVar1) {
        local_78 = iVar11;
      }
      iVar9 = iVar10 + 0x20;
      if (iStack_74 <= iVar10 + 0x20) {
        iVar9 = iStack_74;
      }
      bVar1 = iVar10 + -0x20 <= iStack_74;
      iStack_74 = iVar10 + -0x20;
      if (bVar1) {
        iStack_74 = iVar9;
      }
      iVar9 = FUN_0289a700(0);
      fVar23 = (*(float *)(param_1 + 0x30) * (float)iVar9) / *(float *)(param_1 + 0x34);
      iVar10 = -0x80000000;
      iVar9 = iVar10;
      if (fVar23 != INFINITY) {
        iVar9 = (int)fVar23;
      }
      iVar11 = FUN_0289a728(0);
      iVar13 = local_78;
      fVar23 = (*(float *)(param_1 + 0x30) * (float)iVar11) / *(float *)(param_1 + 0x34);
      iVar11 = iVar10;
      if (fVar23 != INFINITY) {
        iVar11 = (int)fVar23;
      }
      iVar12 = FUN_0289a700(0);
      iVar14 = iStack_74;
      if (iVar13 <= iVar12) {
        iVar12 = iVar13;
      }
      if (iVar9 <= iVar13) {
        iVar9 = iVar12;
      }
      iVar13 = FUN_0289a728(0);
      if (iVar14 <= iVar13) {
        iVar13 = iVar14;
      }
      if (iVar11 <= iVar14) {
        iVar11 = iVar13;
      }
      iVar13 = FUN_0289a700(0);
      fVar23 = (float)iVar9 / (float)iVar13;
      iVar12 = FUN_0289a728(0);
      iVar14 = FUN_0289a728(0);
      iVar13 = iVar10;
      if (fVar23 * (float)iVar14 != INFINITY) {
        iVar13 = (int)(fVar23 * (float)iVar14);
      }
      fVar24 = fVar23;
      if (iVar13 != iVar11) {
        fVar26 = (float)iVar11 / (float)iVar12;
        iVar11 = FUN_0289a700(0);
        if (fVar26 * (float)iVar11 != INFINITY) {
          iVar10 = (int)(fVar26 * (float)iVar11);
        }
        fVar24 = fVar26;
        if ((iVar10 != iVar9) && (fVar24 = fVar23, fVar26 <= fVar23)) {
          fVar24 = fVar26;
        }
      }
      FUN_0289a84c(fVar24,0);
      FUN_02681124(fVar24,fVar24,0);
    }
  }
  if (*(char *)(param_1 + 0x114) != '\0') {
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar18 = FUN_01b15308(0);
    if ((uVar18 & 1) != 0) {
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      if (DAT_0377cd82 == '\0') {
        thunk_FUN_00d48444(System_Data_DataColumnCollection_TypeInfo);
        DAT_0377cd82 = '\x01';
      }
      lVar17 = *(long *)puVar4;
      if (*(int *)(lVar17 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar17 = *(long *)puVar4;
      }
      lVar17 = *(long *)(*(long *)(lVar17 + 0xb8) + 8);
      if (lVar17 == 0) goto LAB_01b06e0c;
      FUN_01aaf4dc(lVar17,0);
    }
  }
  iVar9 = FUN_01b02810(param_1);
  if (iVar9 != *(int *)(param_1 + 0x10c)) {
    FUN_01b028a0(param_1);
  }
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  if (DAT_0377cea4 == '\0') {
    thunk_FUN_00d48444(System_Data_DataColumnCollection_TypeInfo);
    DAT_0377cea4 = '\x01';
  }
  lVar17 = *(long *)puVar4;
  if (*(int *)(lVar17 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar17 = *(long *)puVar4;
  }
  lVar17 = *(long *)(*(long *)(lVar17 + 0xb8) + 0x10);
  if (lVar17 == 0) goto LAB_01b06e0c;
  Sirenix_Utilities_DeepReflection_PathStep___ctor(lVar17,*(undefined1 *)(param_1 + 0x110),0);
  cVar2 = *(char *)(param_1 + 0x111);
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  puVar5 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  FUN_01b14294(cVar2 != '\0',0);
  FUN_01b14544(*(undefined1 *)(param_1 + 0x112),0);
  plVar19 = (long *)FUN_026ae324(0);
  if (plVar19 == (long *)0x0) {
LAB_01b05e50:
    plVar19 = (long *)0x0;
  }
  else {
    bVar8 = *(byte *)(*(long *)Method_System_Collections_Generic_List<TMP_Glyph>_get_Item__ + 300);
    if (*(byte *)(*plVar19 + 300) < bVar8) goto LAB_01b05e50;
    if (*(long *)(*(long *)(*plVar19 + 200) + (ulong)bVar8 * 8 + -8) !=
        *(long *)Method_System_Collections_Generic_List<TMP_Glyph>_get_Item__) {
      plVar19 = (long *)0x0;
    }
  }
  if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar18 = FUN_02681b9c(plVar19,0,0);
  if ((uVar18 & 1) == 0) {
    iVar9 = FUN_0267a510(0);
  }
  else {
    if (plVar19 == (long *)0x0) goto LAB_01b06e0c;
    iVar9 = (int)plVar19[0xc];
  }
  if (*(char *)(param_1 + 0x20) != '\0') {
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    if (DAT_0377cd82 == '\0') {
      thunk_FUN_00d48444(System_Data_DataColumnCollection_TypeInfo);
      DAT_0377cd82 = '\x01';
    }
    lVar17 = *(long *)puVar4;
    if (*(int *)(lVar17 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar17 = *(long *)puVar4;
    }
    lVar17 = *(long *)(*(long *)(lVar17 + 0xb8) + 8);
    if (lVar17 == 0) goto LAB_01b06e0c;
    iVar10 = FUN_01aafc7c(lVar17,0);
    if (iVar9 != iVar10) {
      plVar20 = (long *)FUN_00da4fb8(*(undefined8 *)PTR_DAT_033ea8a0,5);
      puVar6 = StringLiteral_11058;
      if (plVar20 == (long *)0x0) goto LAB_01b06e0c;
      if ((*(long *)StringLiteral_11058 != 0) &&
         (lVar17 = thunk_FUN_00d6225c(*(long *)StringLiteral_11058,*(undefined8 *)(*plVar20 + 0x40))
         , lVar17 == 0)) {
LAB_01b06e14:
        uVar22 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
        FUN_00da5038(uVar22,0);
      }
      if ((int)plVar20[3] == 0) goto LAB_01b06e10;
      plVar20[4] = *(long *)puVar6;
      local_7c = FUN_0267a510(0);
      lVar17 = FUN_0176eb1c(&local_7c,0);
      if ((lVar17 != 0) &&
         (lVar21 = thunk_FUN_00d6225c(lVar17,*(undefined8 *)(*plVar20 + 0x40)), lVar21 == 0))
      goto LAB_01b06e14;
      puVar6 = StringLiteral_13695;
      uVar15 = *(uint *)(plVar20 + 3);
      if (uVar15 < 2) {
LAB_01b06e10:
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      plVar20[5] = lVar17;
      lVar17 = *(long *)puVar6;
      if (lVar17 != 0) {
        lVar17 = thunk_FUN_00d6225c(lVar17,*(undefined8 *)(*plVar20 + 0x40));
        if (lVar17 == 0) goto LAB_01b06e14;
        uVar15 = *(uint *)(plVar20 + 3);
      }
      if (uVar15 < 3) goto LAB_01b06e10;
      plVar20[6] = *(long *)puVar6;
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      if (DAT_0377cd82 == '\0') {
        thunk_FUN_00d48444(System_Data_DataColumnCollection_TypeInfo);
        DAT_0377cd82 = '\x01';
      }
      lVar17 = *(long *)puVar4;
      if (*(int *)(lVar17 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar17 = *(long *)puVar4;
      }
      lVar17 = *(long *)(*(long *)(lVar17 + 0xb8) + 8);
      if (lVar17 == 0) goto LAB_01b06e0c;
      local_7c = FUN_01aafc7c(lVar17,0);
      lVar17 = FUN_0176eb1c(&local_7c,0);
      if ((lVar17 != 0) &&
         (lVar21 = thunk_FUN_00d6225c(lVar17,*(undefined8 *)(*plVar20 + 0x40)), lVar21 == 0))
      goto LAB_01b06e14;
      puVar6 = Method_SmackAJack_<StopGameCoroutine>d__33_System_Collections_IEnumerator_Reset__;
      uVar15 = *(uint *)(plVar20 + 3);
      if (uVar15 < 4) goto LAB_01b06e10;
      plVar20[7] = lVar17;
      lVar17 = *(long *)puVar6;
      if (lVar17 != 0) {
        lVar17 = thunk_FUN_00d6225c(lVar17,*(undefined8 *)(*plVar20 + 0x40));
        if (lVar17 == 0) goto LAB_01b06e14;
        uVar15 = *(uint *)(plVar20 + 3);
      }
      if (uVar15 < 5) goto LAB_01b06e10;
      plVar20[8] = *(long *)puVar6;
      uVar22 = FUN_01600844(plVar20,0);
      if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar7);
      }
      FUN_02660dac(uVar22,0);
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar18 = FUN_02681b9c(plVar19,0,0);
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar4);
      }
      if (DAT_0377cd82 == '\0') {
        thunk_FUN_00d48444(System_Data_DataColumnCollection_TypeInfo);
        DAT_0377cd82 = '\x01';
      }
      lVar17 = *(long *)puVar4;
      if (*(int *)(lVar17 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar17 = *(long *)puVar4;
      }
      lVar17 = *(long *)(*(long *)(lVar17 + 0xb8) + 8);
      if (lVar17 == 0) goto LAB_01b06e0c;
      uVar22 = FUN_01aafc7c(lVar17,0);
      if ((uVar18 & 1) == 0) {
        FUN_0267a538(uVar22,0);
      }
      else {
        if (plVar19 == (long *)0x0) goto LAB_01b06e0c;
        *(int *)(plVar19 + 0xc) = (int)uVar22;
      }
    }
  }
  bVar8 = FUN_01affc04(param_1);
  if ((bVar8 & 1) != *(byte *)(param_1 + 0x21)) {
    Sirenix_Serialization_BinaryDataWriter_<>c__<_cctor>b__70_3
              (param_1,*(byte *)(param_1 + 0x21) != 0);
  }
  fVar23 = DAT_028aa020;
  fVar24 = *(float *)(param_1 + 0x50) - *(float *)(param_1 + 0x50);
  fVar26 = *(float *)(param_1 + 0x54) - *(float *)(param_1 + 0x54);
  fVar25 = *(float *)(param_1 + 0x58) - *(float *)(param_1 + 0x58);
  if (DAT_028aa020 <= fVar25 * fVar25 + fVar24 * fVar24 + fVar26 * fVar26) {
    FUN_01affe88(param_1);
  }
  fVar24 = *(float *)(param_1 + 0x5c) - *(float *)(param_1 + 0x5c);
  fVar26 = *(float *)(param_1 + 0x60) - *(float *)(param_1 + 0x60);
  fVar25 = *(float *)(param_1 + 100) - *(float *)(param_1 + 100);
  if (fVar23 <= fVar25 * fVar25 + fVar24 * fVar24 + fVar26 * fVar26) {
    FUN_01afff7c(param_1);
  }
  lVar17 = *(long *)puVar4;
  if (*(int *)(lVar17 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar17 = *(long *)puVar4;
  }
  if (*(char *)(*(long *)(lVar17 + 0xb8) + 0xfd) != '\0') {
    if (*(int *)(lVar17 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar18 = FUN_01aff7c8();
    if ((uVar18 & 1) == 0) {
      if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_02660dac(*(undefined8 *)
                    Method_System_Collections_Generic_List<IronMaidenNeedle>_get_Item__,0);
      lVar17 = *(long *)puVar4;
      if (*(int *)(lVar17 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar17);
        lVar17 = *(long *)puVar4;
      }
      lVar21 = *(long *)(*(long *)(lVar17 + 0xb8) + 0x38);
      if (lVar21 != 0) {
        if (*(int *)(lVar17 + 0xe0) == 0) {
          thunk_FUN_00d32864(lVar17);
          lVar21 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x38);
          if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
        }
        (**(code **)(lVar21 + 0x18))(*(undefined8 *)(lVar21 + 0x40),*(undefined8 *)(lVar21 + 0x28));
      }
    }
  }
  lVar17 = *(long *)puVar4;
  if (*(int *)(lVar17 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar17 = *(long *)puVar4;
  }
  if (*(char *)(*(long *)(lVar17 + 0xb8) + 0xfd) == '\0') {
    if (*(int *)(lVar17 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar18 = FUN_01aff7c8();
    if ((uVar18 & 1) != 0) {
      if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_02660dac(*(undefined8 *)Method_System_Linq_Enumerable_Any<object>__,0);
      lVar17 = *(long *)puVar4;
      if (*(int *)(lVar17 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar17);
        lVar17 = *(long *)puVar4;
      }
      lVar21 = *(long *)(*(long *)(lVar17 + 0xb8) + 0x30);
      if (lVar21 != 0) {
        if (*(int *)(lVar17 + 0xe0) == 0) {
          thunk_FUN_00d32864(lVar17);
          lVar21 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x30);
          if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
        }
        (**(code **)(lVar21 + 0x18))(*(undefined8 *)(lVar21 + 0x40),*(undefined8 *)(lVar21 + 0x28));
      }
    }
  }
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  bVar8 = FUN_01aff7c8();
  *(byte *)(*(long *)(*(long *)puVar4 + 0xb8) + 0xfd) = bVar8 & 1;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar22 = FUN_01b14884(0);
  FUN_01b02a9c(uVar22,(uint)uVar22 & 1);
  if ((*(char *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x17a) != '\0') &&
     (uVar18 = FUN_01b029c4(), (uVar18 & 1) == 0)) {
    if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_02660dac(*(undefined8 *)Method_Autohand_Hand_<OnEnable>b__76_1__,0);
    lVar17 = *(long *)puVar4;
    if (*(int *)(lVar17 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar17);
      lVar17 = *(long *)puVar4;
    }
    lVar21 = *(long *)(*(long *)(lVar17 + 0xb8) + 0x48);
    if (lVar21 != 0) {
      if (*(int *)(lVar17 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar17);
        lVar21 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x48);
        if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
      }
      (**(code **)(lVar21 + 0x18))(*(undefined8 *)(lVar21 + 0x40),*(undefined8 *)(lVar21 + 0x28));
    }
  }
  lVar17 = *(long *)puVar4;
  if (*(int *)(lVar17 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar17 = *(long *)puVar4;
  }
  if ((*(char *)(*(long *)(lVar17 + 0xb8) + 0x17a) == '\0') &&
     (uVar18 = FUN_01b029c4(), (uVar18 & 1) != 0)) {
    if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_02660dac(*(undefined8 *)Method_UnityEngine_Component_GetComponent<Rigidbody>__,0);
    lVar17 = *(long *)puVar4;
    if (*(int *)(lVar17 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar17);
      lVar17 = *(long *)puVar4;
    }
    lVar21 = *(long *)(*(long *)(lVar17 + 0xb8) + 0x40);
    if (lVar21 != 0) {
      if (*(int *)(lVar17 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar17);
        lVar21 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x40);
        if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
      }
      (**(code **)(lVar21 + 0x18))(*(undefined8 *)(lVar21 + 0x40),*(undefined8 *)(lVar21 + 0x28));
    }
  }
  bVar8 = FUN_01b029c4();
  lVar17 = *(long *)puVar4;
  if (*(int *)(lVar17 + 0xe0) == 0) {
    thunk_FUN_00d32864(lVar17);
    lVar17 = *(long *)puVar4;
  }
  *(byte *)(*(long *)(lVar17 + 0xb8) + 0x17a) = bVar8 & 1;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar15 = FUN_01b15174(0);
  FUN_01affa34(uVar15 & 1);
  if (*(char *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x100) != '\0') {
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar18 = FUN_01aff95c();
    if ((uVar18 & 1) == 0) {
      if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_02660dac(*(undefined8 *)
                    Method_UnityEngine_InputSystem_HID_HID_HIDDeviceDescriptorBuilder_WithPhysicalMinMax__
                   ,0);
      lVar17 = *(long *)puVar4;
      if (*(int *)(lVar17 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar17);
        lVar17 = *(long *)puVar4;
      }
      lVar21 = *(long *)(*(long *)(lVar17 + 0xb8) + 0x58);
      if (lVar21 != 0) {
        if (*(int *)(lVar17 + 0xe0) == 0) {
          thunk_FUN_00d32864(lVar17);
          lVar21 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x58);
          if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
        }
        (**(code **)(lVar21 + 0x18))(*(undefined8 *)(lVar21 + 0x40),*(undefined8 *)(lVar21 + 0x28));
      }
    }
  }
  lVar17 = *(long *)puVar4;
  if (*(int *)(lVar17 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar17 = *(long *)puVar4;
  }
  if (*(char *)(*(long *)(lVar17 + 0xb8) + 0x100) == '\0') {
    if (*(int *)(lVar17 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar18 = FUN_01aff95c();
    if ((uVar18 & 1) != 0) {
      if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_02660dac(*(undefined8 *)Method_System_Collections_Generic_Stack<Random_State>_Pop__,0);
      lVar17 = *(long *)puVar4;
      if (*(int *)(lVar17 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar17);
        lVar17 = *(long *)puVar4;
      }
      lVar21 = *(long *)(*(long *)(lVar17 + 0xb8) + 0x50);
      if (lVar21 != 0) {
        if (*(int *)(lVar17 + 0xe0) == 0) {
          thunk_FUN_00d32864(lVar17);
          lVar21 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x50);
          if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
        }
        (**(code **)(lVar21 + 0x18))(*(undefined8 *)(lVar21 + 0x40),*(undefined8 *)(lVar21 + 0x28));
      }
    }
  }
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  bVar8 = FUN_01aff95c();
  *(byte *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x100) = bVar8 & 1;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  bVar8 = FUN_01b151d0(0);
  if (((bVar8 & 1) == 0) && (*(char *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x101) != '\0')) {
    if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_02660dac(*(undefined8 *)Method_UnityEngine_GameObject_AddComponent<TMP_SubMeshUI>__,0);
    lVar17 = *(long *)puVar4;
    if (*(int *)(lVar17 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar17);
      lVar17 = *(long *)puVar4;
    }
    lVar21 = *(long *)(*(long *)(lVar17 + 0xb8) + 0x68);
    if (lVar21 != 0) {
      if (*(int *)(lVar17 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar17);
        lVar21 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x68);
        if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
      }
      (**(code **)(lVar21 + 0x18))(*(undefined8 *)(lVar21 + 0x40),*(undefined8 *)(lVar21 + 0x28));
    }
  }
  lVar17 = *(long *)puVar4;
  if (*(int *)(lVar17 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar17 = *(long *)puVar4;
  }
  if ((bVar8 & 1 & (*(byte *)(*(long *)(lVar17 + 0xb8) + 0x101) ^ 0xff)) != 0) {
    if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_02660dac(*(undefined8 *)PTR_DAT_033f5390,0);
    lVar17 = *(long *)puVar4;
    if (*(int *)(lVar17 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar17);
      lVar17 = *(long *)puVar4;
    }
    lVar21 = *(long *)(*(long *)(lVar17 + 0xb8) + 0x60);
    if (lVar21 != 0) {
      if (*(int *)(lVar17 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar17);
        lVar21 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x60);
        if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
      }
      (**(code **)(lVar21 + 0x18))(*(undefined8 *)(lVar21 + 0x40),*(undefined8 *)(lVar21 + 0x28));
    }
  }
  lVar17 = *(long *)puVar4;
  if (*(int *)(lVar17 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar17 = *(long *)puVar4;
  }
  *(byte *)(*(long *)(lVar17 + 0xb8) + 0x101) = bVar8 & 1;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar22 = FUN_01b14b4c(0);
  lVar17 = *(long *)puVar4;
  lVar21 = *(long *)(lVar17 + 0xb8);
  cVar2 = *(char *)(lVar21 + 0x17b);
  if (*(int *)(lVar17 + 0xe0) == 0) {
    thunk_FUN_00d32864(lVar17);
    lVar21 = *(long *)(*(long *)puVar4 + 0xb8);
    if (cVar2 != '\0') goto LAB_01b06810;
LAB_01b068d0:
    *(undefined8 *)(lVar21 + 0x180) = uVar22;
    *(undefined1 *)(lVar21 + 0x17b) = 1;
  }
  else {
    if (cVar2 == '\0') goto LAB_01b068d0;
LAB_01b06810:
    uVar18 = FUN_015fe7e8(uVar22,*(undefined8 *)(lVar21 + 0x180),0);
    if ((uVar18 & 1) != 0) {
      if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_02660dac(*(undefined8 *)
                    Method_System_Collections_Generic_List_Enumerator<LocomotionVignetteProvider>_MoveNext__
                   ,0);
      lVar17 = *(long *)puVar4;
      if (*(int *)(lVar17 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar17);
        lVar17 = *(long *)puVar4;
      }
      lVar21 = *(long *)(*(long *)(lVar17 + 0xb8) + 0x70);
      if (lVar21 != 0) {
        if (*(int *)(lVar17 + 0xe0) == 0) {
          thunk_FUN_00d32864(lVar17);
          lVar21 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x70);
          if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
        }
        (**(code **)(lVar21 + 0x18))(*(undefined8 *)(lVar21 + 0x40),*(undefined8 *)(lVar21 + 0x28));
      }
      lVar17 = *(long *)puVar4;
      if (*(int *)(lVar17 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar17 = *(long *)puVar4;
      }
      *(undefined8 *)(*(long *)(lVar17 + 0xb8) + 0x180) = uVar22;
    }
  }
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar22 = FUN_01b14e60(0);
  lVar17 = *(long *)puVar4;
  if (*(int *)(lVar17 + 0xe0) == 0) {
    thunk_FUN_00d32864(lVar17);
    lVar17 = *(long *)puVar4;
    lVar21 = *(long *)(lVar17 + 0xb8);
    cVar2 = *(char *)(lVar21 + 0x17c);
    if (*(int *)(lVar17 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar17);
      lVar17 = *(long *)puVar4;
      lVar21 = *(long *)(lVar17 + 0xb8);
      goto joined_r0x01b06ce8;
    }
    if (cVar2 != '\0') goto LAB_01b06910;
LAB_01b069e4:
    *(undefined8 *)(lVar21 + 0x188) = uVar22;
    *(undefined1 *)(lVar21 + 0x17c) = 1;
  }
  else {
    lVar21 = *(long *)(lVar17 + 0xb8);
    cVar2 = *(char *)(lVar21 + 0x17c);
joined_r0x01b06ce8:
    if (cVar2 == '\0') goto LAB_01b069e4;
LAB_01b06910:
    uVar18 = FUN_015fe7e8(uVar22,*(undefined8 *)(lVar21 + 0x188),0);
    if ((uVar18 & 1) == 0) {
      lVar17 = *(long *)puVar4;
    }
    else {
      if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_02660dac(*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vcgezq_s64__,0);
      lVar17 = *(long *)puVar4;
      if (*(int *)(lVar17 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar17);
        lVar17 = *(long *)puVar4;
      }
      lVar21 = *(long *)(*(long *)(lVar17 + 0xb8) + 0x78);
      if (lVar21 != 0) {
        if (*(int *)(lVar17 + 0xe0) == 0) {
          thunk_FUN_00d32864(lVar17);
          lVar21 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x78);
          if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
        }
        (**(code **)(lVar21 + 0x18))(*(undefined8 *)(lVar21 + 0x40),*(undefined8 *)(lVar21 + 0x28));
      }
      lVar17 = *(long *)puVar4;
      if (*(int *)(lVar17 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar17);
        lVar17 = *(long *)puVar4;
      }
      *(undefined8 *)(*(long *)(lVar17 + 0xb8) + 0x188) = uVar22;
    }
  }
  if (*(int *)(lVar17 + 0xe0) == 0) {
    thunk_FUN_00d32864(lVar17);
    lVar17 = *(long *)puVar4;
  }
  if (*(char *)(*(long *)(lVar17 + 0xb8) + 400) != '\0') {
    if (*(int *)(lVar17 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar17);
    }
    if (DAT_0377cea4 == '\0') {
      thunk_FUN_00d48444(System_Data_DataColumnCollection_TypeInfo);
      DAT_0377cea4 = '\x01';
    }
    lVar17 = *(long *)puVar4;
    if (*(int *)(lVar17 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar17 = *(long *)puVar4;
    }
    lVar17 = *(long *)(*(long *)(lVar17 + 0xb8) + 0x10);
    if (lVar17 == 0) goto LAB_01b06e0c;
    uVar18 = FUN_01b81bcc(lVar17,0);
    if ((uVar18 & 1) == 0) {
      if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_02660dac(*(undefined8 *)Method_Autohand_Demo_OpenXRTeleporterLink_FinishTeleportAction__,0
                  );
      lVar17 = *(long *)puVar4;
      if (*(int *)(lVar17 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar17);
        lVar17 = *(long *)puVar4;
      }
      lVar21 = *(long *)(*(long *)(lVar17 + 0xb8) + 0x88);
      if (lVar21 != 0) {
        if (*(int *)(lVar17 + 0xe0) == 0) {
          thunk_FUN_00d32864(lVar17);
          lVar21 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x88);
          if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
        }
        (**(code **)(lVar21 + 0x18))(*(undefined8 *)(lVar21 + 0x40),*(undefined8 *)(lVar21 + 0x28));
      }
    }
  }
  lVar17 = *(long *)puVar4;
  if (*(int *)(lVar17 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar17 = *(long *)puVar4;
  }
  if (*(char *)(*(long *)(lVar17 + 0xb8) + 400) == '\0') {
    if (*(int *)(lVar17 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    if (DAT_0377cea4 == '\0') {
      thunk_FUN_00d48444(System_Data_DataColumnCollection_TypeInfo);
      DAT_0377cea4 = '\x01';
    }
    lVar17 = *(long *)puVar4;
    if (*(int *)(lVar17 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar17 = *(long *)puVar4;
    }
    lVar17 = *(long *)(*(long *)(lVar17 + 0xb8) + 0x10);
    if (lVar17 == 0) goto LAB_01b06e0c;
    uVar18 = FUN_01b81bcc(lVar17,0);
    if ((uVar18 & 1) != 0) {
      if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_02660dac(*(undefined8 *)OVRPlugin_OVRP_1_96_0_TypeInfo,0);
      lVar17 = *(long *)puVar4;
      if (*(int *)(lVar17 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar17);
        lVar17 = *(long *)puVar4;
      }
      lVar21 = *(long *)(*(long *)(lVar17 + 0xb8) + 0x80);
      if (lVar21 != 0) {
        if (*(int *)(lVar17 + 0xe0) == 0) {
          thunk_FUN_00d32864(lVar17);
          lVar21 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x80);
          if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
        }
        (**(code **)(lVar21 + 0x18))(*(undefined8 *)(lVar21 + 0x40),*(undefined8 *)(lVar21 + 0x28));
      }
    }
  }
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  if (DAT_0377cea4 == '\0') {
    thunk_FUN_00d48444(System_Data_DataColumnCollection_TypeInfo);
    DAT_0377cea4 = '\x01';
  }
  lVar17 = *(long *)puVar4;
  if (*(int *)(lVar17 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar17 = *(long *)puVar4;
  }
  lVar17 = *(long *)(*(long *)(lVar17 + 0xb8) + 0x10);
  if (lVar17 != 0) {
    bVar8 = FUN_01b81bcc(lVar17,0);
    lVar17 = *(long *)puVar4;
    *(byte *)(*(long *)(lVar17 + 0xb8) + 400) = bVar8 & 1;
    if (DAT_0377cd82 == '\0') {
      thunk_FUN_00d48444(puVar4);
      lVar17 = *(long *)puVar4;
      DAT_0377cd82 = '\x01';
    }
    if (*(int *)(lVar17 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar17);
      lVar17 = *(long *)puVar4;
    }
    lVar17 = *(long *)(*(long *)(lVar17 + 0xb8) + 8);
    if (lVar17 != 0) {
      FUN_01aaf220(lVar17,0);
      iVar9 = *(int *)(param_1 + 0x118);
      lVar17 = *(long *)(*(long *)puVar4 + 0xb8);
      if (*(int *)(lVar17 + 0x174) != iVar9) {
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar17 = *(long *)(*(long *)puVar4 + 0xb8);
        }
        *(int *)(lVar17 + 0x174) = iVar9;
        if (iVar9 == 2) {
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          FUN_01b1a050(1,0);
          uVar22 = 1;
        }
        else {
          if (iVar9 == 1) {
            if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar22 = 1;
          }
          else {
            if (iVar9 != 0) goto LAB_01b06d3c;
            if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar22 = 0;
          }
          FUN_01b1a050(uVar22,0);
          uVar22 = 0;
        }
        FUN_01b1a11c(uVar22,0);
      }
LAB_01b06d3c:
      puVar7 = StringLiteral_5227;
      cVar2 = *(char *)(param_1 + 0x11e);
      if (*(char *)(param_1 + 0x11d) != cVar2) {
        *(char *)(param_1 + 0x11d) = cVar2;
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_01b1ac3c(cVar2 != '\0',0);
      }
      if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_01af4b7c(0);
      FUN_01b07e1c(param_1);
      uVar22 = FUN_0268fd4c(param_1,0);
      uVar16 = FUN_01b02810(param_1);
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar4);
      }
      FUN_01b091c8(param_1,uVar22,uVar16);
      FUN_01b0968c(*(undefined1 *)(param_1 + 0x101));
      FUN_01b09924(param_1);
      return;
    }
  }
LAB_01b06e0c:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


