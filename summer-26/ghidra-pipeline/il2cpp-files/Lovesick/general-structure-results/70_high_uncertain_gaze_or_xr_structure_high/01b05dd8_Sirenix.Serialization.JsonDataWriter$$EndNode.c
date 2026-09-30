/*
FUNCTION_NAME: Sirenix.Serialization.JsonDataWriter$$EndNode
ENTRY_POINT: 01b05dd8
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


void Sirenix_Serialization_JsonDataWriter__EndNode(long param_1)

{
  char cVar1;
  float fVar2;
  undefined *puVar3;
  undefined *puVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  undefined8 uVar14;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x24;
  long *unaff_x25;
  long unaff_x26;
  long unaff_x27;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 in_stack_00000010;
  
  if (*(long *)(param_1 + 0x10) == 0) goto LAB_01b06e0c;
  Sirenix_Utilities_DeepReflection_PathStep___ctor
            (*(long *)(param_1 + 0x10),*(undefined1 *)(unaff_x19 + 0x110),0);
  cVar1 = *(char *)(unaff_x19 + 0x111);
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  puVar3 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  FUN_01b14294(cVar1 != '\0',0);
  FUN_01b14544(*(undefined1 *)(unaff_x19 + 0x112),0);
  plVar9 = (long *)FUN_026ae324(0);
  if (plVar9 == (long *)0x0) {
LAB_01b05e50:
    plVar9 = (long *)0x0;
  }
  else {
    bVar5 = *(byte *)(*(long *)Method_System_Collections_Generic_List<TMP_Glyph>_get_Item__ + 300);
    if (*(byte *)(*plVar9 + 300) < bVar5) goto LAB_01b05e50;
    if (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar5 * 8 + -8) !=
        *(long *)Method_System_Collections_Generic_List<TMP_Glyph>_get_Item__) {
      plVar9 = (long *)0x0;
    }
  }
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar10 = FUN_02681b9c(plVar9,0,0);
  if ((uVar10 & 1) == 0) {
    iVar6 = FUN_0267a510(0);
  }
  else {
    if (plVar9 == (long *)0x0) goto LAB_01b06e0c;
    iVar6 = (int)plVar9[0xc];
  }
  if (*(char *)(unaff_x19 + 0x20) != '\0') {
    if (*(int *)(*unaff_x20 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    if (*(char *)(unaff_x26 + 0xd82) == '\0') {
      thunk_FUN_00d48444(System_Data_DataColumnCollection_TypeInfo);
      *(undefined1 *)(unaff_x26 + 0xd82) = 1;
    }
    lVar11 = *unaff_x20;
    if (*(int *)(lVar11 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar11 = *unaff_x20;
    }
    lVar11 = *(long *)(*(long *)(lVar11 + 0xb8) + 8);
    if (lVar11 == 0) goto LAB_01b06e0c;
    iVar7 = FUN_01aafc7c(lVar11,0);
    if (iVar6 != iVar7) {
      plVar12 = (long *)FUN_00da4fb8(*(undefined8 *)PTR_DAT_033ea8a0,5);
      puVar4 = StringLiteral_11058;
      if (plVar12 == (long *)0x0) goto LAB_01b06e0c;
      if ((*(long *)StringLiteral_11058 != 0) &&
         (lVar11 = thunk_FUN_00d6225c(*(long *)StringLiteral_11058,*(undefined8 *)(*plVar12 + 0x40))
         , lVar11 == 0)) {
LAB_01b06e14:
        uVar14 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
        FUN_00da5038(uVar14,0);
      }
      if ((int)plVar12[3] == 0) goto LAB_01b06e10;
      plVar12[4] = *(long *)puVar4;
      in_stack_00000010._4_4_ = FUN_0267a510(0);
      lVar11 = FUN_0176eb1c((long)&stack0x00000010 + 4,0);
      if ((lVar11 != 0) &&
         (lVar13 = thunk_FUN_00d6225c(lVar11,*(undefined8 *)(*plVar12 + 0x40)), lVar13 == 0))
      goto LAB_01b06e14;
      puVar4 = StringLiteral_13695;
      uVar8 = *(uint *)(plVar12 + 3);
      if (uVar8 < 2) {
LAB_01b06e10:
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      plVar12[5] = lVar11;
      lVar11 = *(long *)puVar4;
      if (lVar11 != 0) {
        lVar11 = thunk_FUN_00d6225c(lVar11,*(undefined8 *)(*plVar12 + 0x40));
        if (lVar11 == 0) goto LAB_01b06e14;
        uVar8 = *(uint *)(plVar12 + 3);
      }
      if (uVar8 < 3) goto LAB_01b06e10;
      plVar12[6] = *(long *)puVar4;
      if (*(int *)(*unaff_x20 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      if (*(char *)(unaff_x26 + 0xd82) == '\0') {
        thunk_FUN_00d48444(System_Data_DataColumnCollection_TypeInfo);
        *(undefined1 *)(unaff_x26 + 0xd82) = 1;
      }
      lVar11 = *unaff_x20;
      if (*(int *)(lVar11 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar11 = *unaff_x20;
      }
      lVar11 = *(long *)(*(long *)(lVar11 + 0xb8) + 8);
      if (lVar11 == 0) goto LAB_01b06e0c;
      in_stack_00000010._4_4_ = FUN_01aafc7c(lVar11,0);
      lVar11 = FUN_0176eb1c((long)&stack0x00000010 + 4,0);
      if ((lVar11 != 0) &&
         (lVar13 = thunk_FUN_00d6225c(lVar11,*(undefined8 *)(*plVar12 + 0x40)), lVar13 == 0))
      goto LAB_01b06e14;
      puVar4 = Method_SmackAJack_<StopGameCoroutine>d__33_System_Collections_IEnumerator_Reset__;
      uVar8 = *(uint *)(plVar12 + 3);
      if (uVar8 < 4) goto LAB_01b06e10;
      plVar12[7] = lVar11;
      lVar11 = *(long *)puVar4;
      if (lVar11 != 0) {
        lVar11 = thunk_FUN_00d6225c(lVar11,*(undefined8 *)(*plVar12 + 0x40));
        if (lVar11 == 0) goto LAB_01b06e14;
        uVar8 = *(uint *)(plVar12 + 3);
      }
      if (uVar8 < 5) goto LAB_01b06e10;
      plVar12[8] = *(long *)puVar4;
      uVar14 = FUN_01600844(plVar12,0);
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_00d32864(*unaff_x25);
      }
      FUN_02660dac(uVar14,0);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar10 = FUN_02681b9c(plVar9,0,0);
      if (*(int *)(*unaff_x20 + 0xe0) == 0) {
        thunk_FUN_00d32864(*unaff_x20);
      }
      if (*(char *)(unaff_x26 + 0xd82) == '\0') {
        thunk_FUN_00d48444(System_Data_DataColumnCollection_TypeInfo);
        *(undefined1 *)(unaff_x26 + 0xd82) = 1;
      }
      lVar11 = *unaff_x20;
      if (*(int *)(lVar11 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar11 = *unaff_x20;
      }
      lVar11 = *(long *)(*(long *)(lVar11 + 0xb8) + 8);
      if (lVar11 == 0) goto LAB_01b06e0c;
      uVar14 = FUN_01aafc7c(lVar11,0);
      if ((uVar10 & 1) == 0) {
        FUN_0267a538(uVar14,0);
      }
      else {
        if (plVar9 == (long *)0x0) goto LAB_01b06e0c;
        *(int *)(plVar9 + 0xc) = (int)uVar14;
      }
    }
  }
  bVar5 = FUN_01affc04();
  if ((bVar5 & 1) != *(byte *)(unaff_x19 + 0x21)) {
    Sirenix_Serialization_BinaryDataWriter_<>c__<_cctor>b__70_3();
  }
  fVar2 = DAT_028aa020;
  fVar15 = *(float *)(unaff_x19 + 0x50) - *(float *)(unaff_x19 + 0x50);
  fVar16 = *(float *)(unaff_x19 + 0x54) - *(float *)(unaff_x19 + 0x54);
  fVar17 = *(float *)(unaff_x19 + 0x58) - *(float *)(unaff_x19 + 0x58);
  if (DAT_028aa020 <= fVar17 * fVar17 + fVar15 * fVar15 + fVar16 * fVar16) {
    FUN_01affe88();
  }
  fVar15 = *(float *)(unaff_x19 + 0x5c) - *(float *)(unaff_x19 + 0x5c);
  fVar16 = *(float *)(unaff_x19 + 0x60) - *(float *)(unaff_x19 + 0x60);
  fVar17 = *(float *)(unaff_x19 + 100) - *(float *)(unaff_x19 + 100);
  if (fVar2 <= fVar17 * fVar17 + fVar15 * fVar15 + fVar16 * fVar16) {
    FUN_01afff7c();
  }
  lVar11 = *unaff_x20;
  if (*(int *)(lVar11 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar11 = *unaff_x20;
  }
  if (*(char *)(*(long *)(lVar11 + 0xb8) + 0xfd) != '\0') {
    if (*(int *)(lVar11 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar10 = FUN_01aff7c8();
    if ((uVar10 & 1) == 0) {
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_02660dac(*(undefined8 *)
                    Method_System_Collections_Generic_List<IronMaidenNeedle>_get_Item__,0);
      lVar11 = *unaff_x20;
      if (*(int *)(lVar11 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar11);
        lVar11 = *unaff_x20;
      }
      lVar13 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x38);
      if (lVar13 != 0) {
        if (*(int *)(lVar11 + 0xe0) == 0) {
          thunk_FUN_00d32864(lVar11);
          lVar13 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x38);
          if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
        }
        (**(code **)(lVar13 + 0x18))(*(undefined8 *)(lVar13 + 0x40),*(undefined8 *)(lVar13 + 0x28));
      }
    }
  }
  lVar11 = *unaff_x20;
  if (*(int *)(lVar11 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar11 = *unaff_x20;
  }
  if (*(char *)(*(long *)(lVar11 + 0xb8) + 0xfd) == '\0') {
    if (*(int *)(lVar11 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar10 = FUN_01aff7c8();
    if ((uVar10 & 1) != 0) {
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_02660dac(*(undefined8 *)Method_System_Linq_Enumerable_Any<object>__,0);
      lVar11 = *unaff_x20;
      if (*(int *)(lVar11 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar11);
        lVar11 = *unaff_x20;
      }
      lVar13 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x30);
      if (lVar13 != 0) {
        if (*(int *)(lVar11 + 0xe0) == 0) {
          thunk_FUN_00d32864(lVar11);
          lVar13 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x30);
          if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
        }
        (**(code **)(lVar13 + 0x18))(*(undefined8 *)(lVar13 + 0x40),*(undefined8 *)(lVar13 + 0x28));
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
  uVar14 = FUN_01b14884(0);
  FUN_01b02a9c(uVar14,(uint)uVar14 & 1);
  if ((*(char *)(*(long *)(*unaff_x20 + 0xb8) + 0x17a) != '\0') &&
     (uVar10 = FUN_01b029c4(), (uVar10 & 1) == 0)) {
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_02660dac(*(undefined8 *)Method_Autohand_Hand_<OnEnable>b__76_1__,0);
    lVar11 = *unaff_x20;
    if (*(int *)(lVar11 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar11);
      lVar11 = *unaff_x20;
    }
    lVar13 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x48);
    if (lVar13 != 0) {
      if (*(int *)(lVar11 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar11);
        lVar13 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x48);
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
      }
      (**(code **)(lVar13 + 0x18))(*(undefined8 *)(lVar13 + 0x40),*(undefined8 *)(lVar13 + 0x28));
    }
  }
  lVar11 = *unaff_x20;
  if (*(int *)(lVar11 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar11 = *unaff_x20;
  }
  if ((*(char *)(*(long *)(lVar11 + 0xb8) + 0x17a) == '\0') &&
     (uVar10 = FUN_01b029c4(), (uVar10 & 1) != 0)) {
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_02660dac(*(undefined8 *)Method_UnityEngine_Component_GetComponent<Rigidbody>__,0);
    lVar11 = *unaff_x20;
    if (*(int *)(lVar11 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar11);
      lVar11 = *unaff_x20;
    }
    lVar13 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x40);
    if (lVar13 != 0) {
      if (*(int *)(lVar11 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar11);
        lVar13 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x40);
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
      }
      (**(code **)(lVar13 + 0x18))(*(undefined8 *)(lVar13 + 0x40),*(undefined8 *)(lVar13 + 0x28));
    }
  }
  bVar5 = FUN_01b029c4();
  lVar11 = *unaff_x20;
  if (*(int *)(lVar11 + 0xe0) == 0) {
    thunk_FUN_00d32864(lVar11);
    lVar11 = *unaff_x20;
  }
  *(byte *)(*(long *)(lVar11 + 0xb8) + 0x17a) = bVar5 & 1;
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar8 = FUN_01b15174(0);
  FUN_01affa34(uVar8 & 1);
  if (*(char *)(*(long *)(*unaff_x20 + 0xb8) + 0x100) != '\0') {
    if (*(int *)(*unaff_x20 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar10 = FUN_01aff95c();
    if ((uVar10 & 1) == 0) {
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_02660dac(*(undefined8 *)
                    Method_UnityEngine_InputSystem_HID_HID_HIDDeviceDescriptorBuilder_WithPhysicalMinMax__
                   ,0);
      lVar11 = *unaff_x20;
      if (*(int *)(lVar11 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar11);
        lVar11 = *unaff_x20;
      }
      lVar13 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x58);
      if (lVar13 != 0) {
        if (*(int *)(lVar11 + 0xe0) == 0) {
          thunk_FUN_00d32864(lVar11);
          lVar13 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x58);
          if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
        }
        (**(code **)(lVar13 + 0x18))(*(undefined8 *)(lVar13 + 0x40),*(undefined8 *)(lVar13 + 0x28));
      }
    }
  }
  lVar11 = *unaff_x20;
  if (*(int *)(lVar11 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar11 = *unaff_x20;
  }
  if (*(char *)(*(long *)(lVar11 + 0xb8) + 0x100) == '\0') {
    if (*(int *)(lVar11 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar10 = FUN_01aff95c();
    if ((uVar10 & 1) != 0) {
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_02660dac(*(undefined8 *)Method_System_Collections_Generic_Stack<Random_State>_Pop__,0);
      lVar11 = *unaff_x20;
      if (*(int *)(lVar11 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar11);
        lVar11 = *unaff_x20;
      }
      lVar13 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x50);
      if (lVar13 != 0) {
        if (*(int *)(lVar11 + 0xe0) == 0) {
          thunk_FUN_00d32864(lVar11);
          lVar13 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x50);
          if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
        }
        (**(code **)(lVar13 + 0x18))(*(undefined8 *)(lVar13 + 0x40),*(undefined8 *)(lVar13 + 0x28));
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
    lVar11 = *unaff_x20;
    if (*(int *)(lVar11 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar11);
      lVar11 = *unaff_x20;
    }
    lVar13 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x68);
    if (lVar13 != 0) {
      if (*(int *)(lVar11 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar11);
        lVar13 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x68);
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
      }
      (**(code **)(lVar13 + 0x18))(*(undefined8 *)(lVar13 + 0x40),*(undefined8 *)(lVar13 + 0x28));
    }
  }
  lVar11 = *unaff_x20;
  if (*(int *)(lVar11 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar11 = *unaff_x20;
  }
  if ((bVar5 & 1 & (*(byte *)(*(long *)(lVar11 + 0xb8) + 0x101) ^ 0xff)) != 0) {
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_02660dac(*(undefined8 *)PTR_DAT_033f5390,0);
    lVar11 = *unaff_x20;
    if (*(int *)(lVar11 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar11);
      lVar11 = *unaff_x20;
    }
    lVar13 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x60);
    if (lVar13 != 0) {
      if (*(int *)(lVar11 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar11);
        lVar13 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x60);
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
      }
      (**(code **)(lVar13 + 0x18))(*(undefined8 *)(lVar13 + 0x40),*(undefined8 *)(lVar13 + 0x28));
    }
  }
  lVar11 = *unaff_x20;
  if (*(int *)(lVar11 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar11 = *unaff_x20;
  }
  *(byte *)(*(long *)(lVar11 + 0xb8) + 0x101) = bVar5 & 1;
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar14 = FUN_01b14b4c(0);
  lVar11 = *unaff_x20;
  lVar13 = *(long *)(lVar11 + 0xb8);
  cVar1 = *(char *)(lVar13 + 0x17b);
  if (*(int *)(lVar11 + 0xe0) == 0) {
    thunk_FUN_00d32864(lVar11);
    lVar13 = *(long *)(*unaff_x20 + 0xb8);
    if (cVar1 == '\0') goto LAB_01b068d0;
LAB_01b06810:
    uVar10 = FUN_015fe7e8(uVar14,*(undefined8 *)(lVar13 + 0x180),0);
    if ((uVar10 & 1) != 0) {
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_02660dac(*(undefined8 *)
                    Method_System_Collections_Generic_List_Enumerator<LocomotionVignetteProvider>_MoveNext__
                   ,0);
      lVar11 = *unaff_x20;
      if (*(int *)(lVar11 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar11);
        lVar11 = *unaff_x20;
      }
      lVar13 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x70);
      if (lVar13 != 0) {
        if (*(int *)(lVar11 + 0xe0) == 0) {
          thunk_FUN_00d32864(lVar11);
          lVar13 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x70);
          if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
        }
        (**(code **)(lVar13 + 0x18))(*(undefined8 *)(lVar13 + 0x40),*(undefined8 *)(lVar13 + 0x28));
      }
      lVar11 = *unaff_x20;
      if (*(int *)(lVar11 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar11 = *unaff_x20;
      }
      *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0x180) = uVar14;
    }
  }
  else {
    if (cVar1 != '\0') goto LAB_01b06810;
LAB_01b068d0:
    *(undefined8 *)(lVar13 + 0x180) = uVar14;
    *(undefined1 *)(lVar13 + 0x17b) = 1;
  }
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar14 = FUN_01b14e60(0);
  lVar11 = *unaff_x20;
  if (*(int *)(lVar11 + 0xe0) == 0) {
    thunk_FUN_00d32864(lVar11);
    lVar11 = *unaff_x20;
    lVar13 = *(long *)(lVar11 + 0xb8);
    cVar1 = *(char *)(lVar13 + 0x17c);
    if (*(int *)(lVar11 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar11);
      lVar11 = *unaff_x20;
      lVar13 = *(long *)(lVar11 + 0xb8);
      goto joined_r0x01b06ce8;
    }
    if (cVar1 == '\0') goto LAB_01b069e4;
LAB_01b06910:
    uVar10 = FUN_015fe7e8(uVar14,*(undefined8 *)(lVar13 + 0x188),0);
    if ((uVar10 & 1) == 0) {
      lVar11 = *unaff_x20;
    }
    else {
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_02660dac(*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vcgezq_s64__,0);
      lVar11 = *unaff_x20;
      if (*(int *)(lVar11 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar11);
        lVar11 = *unaff_x20;
      }
      lVar13 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x78);
      if (lVar13 != 0) {
        if (*(int *)(lVar11 + 0xe0) == 0) {
          thunk_FUN_00d32864(lVar11);
          lVar13 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x78);
          if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
        }
        (**(code **)(lVar13 + 0x18))(*(undefined8 *)(lVar13 + 0x40),*(undefined8 *)(lVar13 + 0x28));
      }
      lVar11 = *unaff_x20;
      if (*(int *)(lVar11 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar11);
        lVar11 = *unaff_x20;
      }
      *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0x188) = uVar14;
    }
  }
  else {
    lVar13 = *(long *)(lVar11 + 0xb8);
    cVar1 = *(char *)(lVar13 + 0x17c);
joined_r0x01b06ce8:
    if (cVar1 != '\0') goto LAB_01b06910;
LAB_01b069e4:
    *(undefined8 *)(lVar13 + 0x188) = uVar14;
    *(undefined1 *)(lVar13 + 0x17c) = 1;
  }
  if (*(int *)(lVar11 + 0xe0) == 0) {
    thunk_FUN_00d32864(lVar11);
    lVar11 = *unaff_x20;
  }
  if (*(char *)(*(long *)(lVar11 + 0xb8) + 400) != '\0') {
    if (*(int *)(lVar11 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar11);
    }
    if (*(char *)(unaff_x27 + 0xea4) == '\0') {
      thunk_FUN_00d48444(System_Data_DataColumnCollection_TypeInfo);
      *(undefined1 *)(unaff_x27 + 0xea4) = 1;
    }
    lVar11 = *unaff_x20;
    if (*(int *)(lVar11 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar11 = *unaff_x20;
    }
    lVar11 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x10);
    if (lVar11 == 0) goto LAB_01b06e0c;
    uVar10 = FUN_01b81bcc(lVar11,0);
    if ((uVar10 & 1) == 0) {
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_02660dac(*(undefined8 *)Method_Autohand_Demo_OpenXRTeleporterLink_FinishTeleportAction__,0
                  );
      lVar11 = *unaff_x20;
      if (*(int *)(lVar11 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar11);
        lVar11 = *unaff_x20;
      }
      lVar13 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x88);
      if (lVar13 != 0) {
        if (*(int *)(lVar11 + 0xe0) == 0) {
          thunk_FUN_00d32864(lVar11);
          lVar13 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x88);
          if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
        }
        (**(code **)(lVar13 + 0x18))(*(undefined8 *)(lVar13 + 0x40),*(undefined8 *)(lVar13 + 0x28));
      }
    }
  }
  lVar11 = *unaff_x20;
  if (*(int *)(lVar11 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar11 = *unaff_x20;
  }
  if (*(char *)(*(long *)(lVar11 + 0xb8) + 400) == '\0') {
    if (*(int *)(lVar11 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    if (*(char *)(unaff_x27 + 0xea4) == '\0') {
      thunk_FUN_00d48444(System_Data_DataColumnCollection_TypeInfo);
      *(undefined1 *)(unaff_x27 + 0xea4) = 1;
    }
    lVar11 = *unaff_x20;
    if (*(int *)(lVar11 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar11 = *unaff_x20;
    }
    lVar11 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x10);
    if (lVar11 == 0) goto LAB_01b06e0c;
    uVar10 = FUN_01b81bcc(lVar11,0);
    if ((uVar10 & 1) != 0) {
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_02660dac(*(undefined8 *)OVRPlugin_OVRP_1_96_0_TypeInfo,0);
      lVar11 = *unaff_x20;
      if (*(int *)(lVar11 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar11);
        lVar11 = *unaff_x20;
      }
      lVar13 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x80);
      if (lVar13 != 0) {
        if (*(int *)(lVar11 + 0xe0) == 0) {
          thunk_FUN_00d32864(lVar11);
          lVar13 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x80);
          if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
        }
        (**(code **)(lVar13 + 0x18))(*(undefined8 *)(lVar13 + 0x40),*(undefined8 *)(lVar13 + 0x28));
      }
    }
  }
  if (*(int *)(*unaff_x20 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  if (*(char *)(unaff_x27 + 0xea4) == '\0') {
    thunk_FUN_00d48444(System_Data_DataColumnCollection_TypeInfo);
    *(undefined1 *)(unaff_x27 + 0xea4) = 1;
  }
  lVar11 = *unaff_x20;
  if (*(int *)(lVar11 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar11 = *unaff_x20;
  }
  lVar11 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x10);
  if (lVar11 != 0) {
    bVar5 = FUN_01b81bcc(lVar11,0);
    lVar11 = *unaff_x20;
    *(byte *)(*(long *)(lVar11 + 0xb8) + 400) = bVar5 & 1;
    if (*(char *)(unaff_x26 + 0xd82) == '\0') {
      thunk_FUN_00d48444();
      lVar11 = *unaff_x20;
      *(undefined1 *)(unaff_x26 + 0xd82) = 1;
    }
    if (*(int *)(lVar11 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar11);
      lVar11 = *unaff_x20;
    }
    lVar11 = *(long *)(*(long *)(lVar11 + 0xb8) + 8);
    if (lVar11 != 0) {
      FUN_01aaf220(lVar11,0);
      iVar6 = *(int *)(unaff_x19 + 0x118);
      lVar11 = *(long *)(*unaff_x20 + 0xb8);
      if (*(int *)(lVar11 + 0x174) != iVar6) {
        if (*(int *)(*unaff_x20 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar11 = *(long *)(*unaff_x20 + 0xb8);
        }
        *(int *)(lVar11 + 0x174) = iVar6;
        if (iVar6 == 2) {
          if (*(int *)(*unaff_x24 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          FUN_01b1a050(1,0);
          uVar14 = 1;
        }
        else {
          if (iVar6 == 1) {
            if (*(int *)(*unaff_x24 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar14 = 1;
          }
          else {
            if (iVar6 != 0) goto LAB_01b06d3c;
            if (*(int *)(*unaff_x24 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar14 = 0;
          }
          FUN_01b1a050(uVar14,0);
          uVar14 = 0;
        }
        FUN_01b1a11c(uVar14,0);
      }
LAB_01b06d3c:
      puVar3 = StringLiteral_5227;
      cVar1 = *(char *)(unaff_x19 + 0x11e);
      if (*(char *)(unaff_x19 + 0x11d) != cVar1) {
        *(char *)(unaff_x19 + 0x11d) = cVar1;
        if (*(int *)(*unaff_x24 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_01b1ac3c(cVar1 != '\0',0);
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


