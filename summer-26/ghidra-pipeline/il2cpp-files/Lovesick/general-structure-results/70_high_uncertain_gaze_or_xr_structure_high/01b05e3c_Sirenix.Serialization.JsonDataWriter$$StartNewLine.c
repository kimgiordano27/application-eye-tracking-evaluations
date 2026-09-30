/*
FUNCTION_NAME: Sirenix.Serialization.JsonDataWriter$$StartNewLine
ENTRY_POINT: 01b05e3c
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


void Sirenix_Serialization_JsonDataWriter__StartNewLine(long *param_1,long param_2)

{
  char cVar1;
  float fVar2;
  undefined *puVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  undefined8 uVar12;
  long in_x9;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x24;
  long *unaff_x25;
  long unaff_x26;
  long unaff_x27;
  long *unaff_x28;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 in_stack_00000010;
  
  bVar4 = *(byte *)(*param_1 + 300);
  if (*(byte *)(in_x9 + 300) < bVar4) {
    param_2 = 0;
  }
  else if (*(long *)(*(long *)(in_x9 + 200) + (ulong)bVar4 * 8 + -8) != *param_1) {
    param_2 = 0;
  }
  if (*(int *)(*unaff_x28 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar8 = FUN_02681b9c(param_2,0,0);
  if ((uVar8 & 1) == 0) {
    iVar5 = FUN_0267a510(0);
  }
  else {
    if (param_2 == 0) goto LAB_01b06e0c;
    iVar5 = *(int *)(param_2 + 0x60);
  }
  if (*(char *)(unaff_x19 + 0x20) != '\0') {
    if (*(int *)(*unaff_x20 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    if (*(char *)(unaff_x26 + 0xd82) == '\0') {
      thunk_FUN_00d48444(System_Data_DataColumnCollection_TypeInfo);
      *(undefined1 *)(unaff_x26 + 0xd82) = 1;
    }
    lVar9 = *unaff_x20;
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar9 = *unaff_x20;
    }
    lVar9 = *(long *)(*(long *)(lVar9 + 0xb8) + 8);
    if (lVar9 == 0) goto LAB_01b06e0c;
    iVar6 = FUN_01aafc7c(lVar9,0);
    if (iVar5 != iVar6) {
      plVar10 = (long *)FUN_00da4fb8(*(undefined8 *)PTR_DAT_033ea8a0,5);
      puVar3 = StringLiteral_11058;
      if (plVar10 == (long *)0x0) goto LAB_01b06e0c;
      if ((*(long *)StringLiteral_11058 != 0) &&
         (lVar9 = thunk_FUN_00d6225c(*(long *)StringLiteral_11058,*(undefined8 *)(*plVar10 + 0x40)),
         lVar9 == 0)) {
LAB_01b06e14:
        uVar12 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
        FUN_00da5038(uVar12,0);
      }
      if ((int)plVar10[3] == 0) goto LAB_01b06e10;
      plVar10[4] = *(long *)puVar3;
      in_stack_00000010._4_4_ = FUN_0267a510(0);
      lVar9 = FUN_0176eb1c((long)&stack0x00000010 + 4,0);
      if ((lVar9 != 0) &&
         (lVar11 = thunk_FUN_00d6225c(lVar9,*(undefined8 *)(*plVar10 + 0x40)), lVar11 == 0))
      goto LAB_01b06e14;
      puVar3 = StringLiteral_13695;
      uVar7 = *(uint *)(plVar10 + 3);
      if (uVar7 < 2) {
LAB_01b06e10:
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      plVar10[5] = lVar9;
      lVar9 = *(long *)puVar3;
      if (lVar9 != 0) {
        lVar9 = thunk_FUN_00d6225c(lVar9,*(undefined8 *)(*plVar10 + 0x40));
        if (lVar9 == 0) goto LAB_01b06e14;
        uVar7 = *(uint *)(plVar10 + 3);
      }
      if (uVar7 < 3) goto LAB_01b06e10;
      plVar10[6] = *(long *)puVar3;
      if (*(int *)(*unaff_x20 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      if (*(char *)(unaff_x26 + 0xd82) == '\0') {
        thunk_FUN_00d48444(System_Data_DataColumnCollection_TypeInfo);
        *(undefined1 *)(unaff_x26 + 0xd82) = 1;
      }
      lVar9 = *unaff_x20;
      if (*(int *)(lVar9 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar9 = *unaff_x20;
      }
      lVar9 = *(long *)(*(long *)(lVar9 + 0xb8) + 8);
      if (lVar9 == 0) goto LAB_01b06e0c;
      in_stack_00000010._4_4_ = FUN_01aafc7c(lVar9,0);
      lVar9 = FUN_0176eb1c((long)&stack0x00000010 + 4,0);
      if ((lVar9 != 0) &&
         (lVar11 = thunk_FUN_00d6225c(lVar9,*(undefined8 *)(*plVar10 + 0x40)), lVar11 == 0))
      goto LAB_01b06e14;
      puVar3 = Method_SmackAJack_<StopGameCoroutine>d__33_System_Collections_IEnumerator_Reset__;
      uVar7 = *(uint *)(plVar10 + 3);
      if (uVar7 < 4) goto LAB_01b06e10;
      plVar10[7] = lVar9;
      lVar9 = *(long *)puVar3;
      if (lVar9 != 0) {
        lVar9 = thunk_FUN_00d6225c(lVar9,*(undefined8 *)(*plVar10 + 0x40));
        if (lVar9 == 0) goto LAB_01b06e14;
        uVar7 = *(uint *)(plVar10 + 3);
      }
      if (uVar7 < 5) goto LAB_01b06e10;
      plVar10[8] = *(long *)puVar3;
      uVar12 = FUN_01600844(plVar10,0);
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_00d32864(*unaff_x25);
      }
      FUN_02660dac(uVar12,0);
      if (*(int *)(*unaff_x28 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar8 = FUN_02681b9c(param_2,0,0);
      if (*(int *)(*unaff_x20 + 0xe0) == 0) {
        thunk_FUN_00d32864(*unaff_x20);
      }
      if (*(char *)(unaff_x26 + 0xd82) == '\0') {
        thunk_FUN_00d48444(System_Data_DataColumnCollection_TypeInfo);
        *(undefined1 *)(unaff_x26 + 0xd82) = 1;
      }
      lVar9 = *unaff_x20;
      if (*(int *)(lVar9 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar9 = *unaff_x20;
      }
      lVar9 = *(long *)(*(long *)(lVar9 + 0xb8) + 8);
      if (lVar9 == 0) goto LAB_01b06e0c;
      uVar12 = FUN_01aafc7c(lVar9,0);
      if ((uVar8 & 1) == 0) {
        FUN_0267a538(uVar12,0);
      }
      else {
        if (param_2 == 0) goto LAB_01b06e0c;
        *(int *)(param_2 + 0x60) = (int)uVar12;
      }
    }
  }
  bVar4 = FUN_01affc04();
  if ((bVar4 & 1) != *(byte *)(unaff_x19 + 0x21)) {
    Sirenix_Serialization_BinaryDataWriter_<>c__<_cctor>b__70_3();
  }
  fVar2 = DAT_028aa020;
  fVar13 = *(float *)(unaff_x19 + 0x50) - *(float *)(unaff_x19 + 0x50);
  fVar14 = *(float *)(unaff_x19 + 0x54) - *(float *)(unaff_x19 + 0x54);
  fVar15 = *(float *)(unaff_x19 + 0x58) - *(float *)(unaff_x19 + 0x58);
  if (DAT_028aa020 <= fVar15 * fVar15 + fVar13 * fVar13 + fVar14 * fVar14) {
    FUN_01affe88();
  }
  fVar13 = *(float *)(unaff_x19 + 0x5c) - *(float *)(unaff_x19 + 0x5c);
  fVar14 = *(float *)(unaff_x19 + 0x60) - *(float *)(unaff_x19 + 0x60);
  fVar15 = *(float *)(unaff_x19 + 100) - *(float *)(unaff_x19 + 100);
  if (fVar2 <= fVar15 * fVar15 + fVar13 * fVar13 + fVar14 * fVar14) {
    FUN_01afff7c();
  }
  lVar9 = *unaff_x20;
  if (*(int *)(lVar9 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar9 = *unaff_x20;
  }
  if (*(char *)(*(long *)(lVar9 + 0xb8) + 0xfd) != '\0') {
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar8 = FUN_01aff7c8();
    if ((uVar8 & 1) == 0) {
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_02660dac(*(undefined8 *)
                    Method_System_Collections_Generic_List<IronMaidenNeedle>_get_Item__,0);
      lVar9 = *unaff_x20;
      if (*(int *)(lVar9 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar9);
        lVar9 = *unaff_x20;
      }
      lVar11 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x38);
      if (lVar11 != 0) {
        if (*(int *)(lVar9 + 0xe0) == 0) {
          thunk_FUN_00d32864(lVar9);
          lVar11 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x38);
          if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
        }
        (**(code **)(lVar11 + 0x18))(*(undefined8 *)(lVar11 + 0x40),*(undefined8 *)(lVar11 + 0x28));
      }
    }
  }
  lVar9 = *unaff_x20;
  if (*(int *)(lVar9 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar9 = *unaff_x20;
  }
  if (*(char *)(*(long *)(lVar9 + 0xb8) + 0xfd) == '\0') {
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar8 = FUN_01aff7c8();
    if ((uVar8 & 1) != 0) {
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_02660dac(*(undefined8 *)Method_System_Linq_Enumerable_Any<object>__,0);
      lVar9 = *unaff_x20;
      if (*(int *)(lVar9 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar9);
        lVar9 = *unaff_x20;
      }
      lVar11 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x30);
      if (lVar11 != 0) {
        if (*(int *)(lVar9 + 0xe0) == 0) {
          thunk_FUN_00d32864(lVar9);
          lVar11 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x30);
          if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
        }
        (**(code **)(lVar11 + 0x18))(*(undefined8 *)(lVar11 + 0x40),*(undefined8 *)(lVar11 + 0x28));
      }
    }
  }
  if (*(int *)(*unaff_x20 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  bVar4 = FUN_01aff7c8();
  *(byte *)(*(long *)(*unaff_x20 + 0xb8) + 0xfd) = bVar4 & 1;
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar12 = FUN_01b14884(0);
  FUN_01b02a9c(uVar12,(uint)uVar12 & 1);
  if ((*(char *)(*(long *)(*unaff_x20 + 0xb8) + 0x17a) != '\0') &&
     (uVar8 = FUN_01b029c4(), (uVar8 & 1) == 0)) {
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_02660dac(*(undefined8 *)Method_Autohand_Hand_<OnEnable>b__76_1__,0);
    lVar9 = *unaff_x20;
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar9);
      lVar9 = *unaff_x20;
    }
    lVar11 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x48);
    if (lVar11 != 0) {
      if (*(int *)(lVar9 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar9);
        lVar11 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x48);
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
      }
      (**(code **)(lVar11 + 0x18))(*(undefined8 *)(lVar11 + 0x40),*(undefined8 *)(lVar11 + 0x28));
    }
  }
  lVar9 = *unaff_x20;
  if (*(int *)(lVar9 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar9 = *unaff_x20;
  }
  if ((*(char *)(*(long *)(lVar9 + 0xb8) + 0x17a) == '\0') &&
     (uVar8 = FUN_01b029c4(), (uVar8 & 1) != 0)) {
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_02660dac(*(undefined8 *)Method_UnityEngine_Component_GetComponent<Rigidbody>__,0);
    lVar9 = *unaff_x20;
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar9);
      lVar9 = *unaff_x20;
    }
    lVar11 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x40);
    if (lVar11 != 0) {
      if (*(int *)(lVar9 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar9);
        lVar11 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x40);
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
      }
      (**(code **)(lVar11 + 0x18))(*(undefined8 *)(lVar11 + 0x40),*(undefined8 *)(lVar11 + 0x28));
    }
  }
  bVar4 = FUN_01b029c4();
  lVar9 = *unaff_x20;
  if (*(int *)(lVar9 + 0xe0) == 0) {
    thunk_FUN_00d32864(lVar9);
    lVar9 = *unaff_x20;
  }
  *(byte *)(*(long *)(lVar9 + 0xb8) + 0x17a) = bVar4 & 1;
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar7 = FUN_01b15174(0);
  FUN_01affa34(uVar7 & 1);
  if (*(char *)(*(long *)(*unaff_x20 + 0xb8) + 0x100) != '\0') {
    if (*(int *)(*unaff_x20 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar8 = FUN_01aff95c();
    if ((uVar8 & 1) == 0) {
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_02660dac(*(undefined8 *)
                    Method_UnityEngine_InputSystem_HID_HID_HIDDeviceDescriptorBuilder_WithPhysicalMinMax__
                   ,0);
      lVar9 = *unaff_x20;
      if (*(int *)(lVar9 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar9);
        lVar9 = *unaff_x20;
      }
      lVar11 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x58);
      if (lVar11 != 0) {
        if (*(int *)(lVar9 + 0xe0) == 0) {
          thunk_FUN_00d32864(lVar9);
          lVar11 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x58);
          if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
        }
        (**(code **)(lVar11 + 0x18))(*(undefined8 *)(lVar11 + 0x40),*(undefined8 *)(lVar11 + 0x28));
      }
    }
  }
  lVar9 = *unaff_x20;
  if (*(int *)(lVar9 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar9 = *unaff_x20;
  }
  if (*(char *)(*(long *)(lVar9 + 0xb8) + 0x100) == '\0') {
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar8 = FUN_01aff95c();
    if ((uVar8 & 1) != 0) {
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_02660dac(*(undefined8 *)Method_System_Collections_Generic_Stack<Random_State>_Pop__,0);
      lVar9 = *unaff_x20;
      if (*(int *)(lVar9 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar9);
        lVar9 = *unaff_x20;
      }
      lVar11 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x50);
      if (lVar11 != 0) {
        if (*(int *)(lVar9 + 0xe0) == 0) {
          thunk_FUN_00d32864(lVar9);
          lVar11 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x50);
          if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
        }
        (**(code **)(lVar11 + 0x18))(*(undefined8 *)(lVar11 + 0x40),*(undefined8 *)(lVar11 + 0x28));
      }
    }
  }
  if (*(int *)(*unaff_x20 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  bVar4 = FUN_01aff95c();
  *(byte *)(*(long *)(*unaff_x20 + 0xb8) + 0x100) = bVar4 & 1;
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  bVar4 = FUN_01b151d0(0);
  if (((bVar4 & 1) == 0) && (*(char *)(*(long *)(*unaff_x20 + 0xb8) + 0x101) != '\0')) {
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_02660dac(*(undefined8 *)Method_UnityEngine_GameObject_AddComponent<TMP_SubMeshUI>__,0);
    lVar9 = *unaff_x20;
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar9);
      lVar9 = *unaff_x20;
    }
    lVar11 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x68);
    if (lVar11 != 0) {
      if (*(int *)(lVar9 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar9);
        lVar11 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x68);
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
      }
      (**(code **)(lVar11 + 0x18))(*(undefined8 *)(lVar11 + 0x40),*(undefined8 *)(lVar11 + 0x28));
    }
  }
  lVar9 = *unaff_x20;
  if (*(int *)(lVar9 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar9 = *unaff_x20;
  }
  if ((bVar4 & 1 & (*(byte *)(*(long *)(lVar9 + 0xb8) + 0x101) ^ 0xff)) != 0) {
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_02660dac(*(undefined8 *)PTR_DAT_033f5390,0);
    lVar9 = *unaff_x20;
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar9);
      lVar9 = *unaff_x20;
    }
    lVar11 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x60);
    if (lVar11 != 0) {
      if (*(int *)(lVar9 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar9);
        lVar11 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x60);
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
      }
      (**(code **)(lVar11 + 0x18))(*(undefined8 *)(lVar11 + 0x40),*(undefined8 *)(lVar11 + 0x28));
    }
  }
  lVar9 = *unaff_x20;
  if (*(int *)(lVar9 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar9 = *unaff_x20;
  }
  *(byte *)(*(long *)(lVar9 + 0xb8) + 0x101) = bVar4 & 1;
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar12 = FUN_01b14b4c(0);
  lVar9 = *unaff_x20;
  lVar11 = *(long *)(lVar9 + 0xb8);
  cVar1 = *(char *)(lVar11 + 0x17b);
  if (*(int *)(lVar9 + 0xe0) == 0) {
    thunk_FUN_00d32864(lVar9);
    lVar11 = *(long *)(*unaff_x20 + 0xb8);
    if (cVar1 == '\0') goto LAB_01b068d0;
LAB_01b06810:
    uVar8 = FUN_015fe7e8(uVar12,*(undefined8 *)(lVar11 + 0x180),0);
    if ((uVar8 & 1) != 0) {
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_02660dac(*(undefined8 *)
                    Method_System_Collections_Generic_List_Enumerator<LocomotionVignetteProvider>_MoveNext__
                   ,0);
      lVar9 = *unaff_x20;
      if (*(int *)(lVar9 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar9);
        lVar9 = *unaff_x20;
      }
      lVar11 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x70);
      if (lVar11 != 0) {
        if (*(int *)(lVar9 + 0xe0) == 0) {
          thunk_FUN_00d32864(lVar9);
          lVar11 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x70);
          if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
        }
        (**(code **)(lVar11 + 0x18))(*(undefined8 *)(lVar11 + 0x40),*(undefined8 *)(lVar11 + 0x28));
      }
      lVar9 = *unaff_x20;
      if (*(int *)(lVar9 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar9 = *unaff_x20;
      }
      *(undefined8 *)(*(long *)(lVar9 + 0xb8) + 0x180) = uVar12;
    }
  }
  else {
    if (cVar1 != '\0') goto LAB_01b06810;
LAB_01b068d0:
    *(undefined8 *)(lVar11 + 0x180) = uVar12;
    *(undefined1 *)(lVar11 + 0x17b) = 1;
  }
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar12 = FUN_01b14e60(0);
  lVar9 = *unaff_x20;
  if (*(int *)(lVar9 + 0xe0) == 0) {
    thunk_FUN_00d32864(lVar9);
    lVar9 = *unaff_x20;
    lVar11 = *(long *)(lVar9 + 0xb8);
    cVar1 = *(char *)(lVar11 + 0x17c);
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar9);
      lVar9 = *unaff_x20;
      lVar11 = *(long *)(lVar9 + 0xb8);
      goto joined_r0x01b06ce8;
    }
    if (cVar1 == '\0') goto LAB_01b069e4;
LAB_01b06910:
    uVar8 = FUN_015fe7e8(uVar12,*(undefined8 *)(lVar11 + 0x188),0);
    if ((uVar8 & 1) == 0) {
      lVar9 = *unaff_x20;
    }
    else {
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_02660dac(*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vcgezq_s64__,0);
      lVar9 = *unaff_x20;
      if (*(int *)(lVar9 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar9);
        lVar9 = *unaff_x20;
      }
      lVar11 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x78);
      if (lVar11 != 0) {
        if (*(int *)(lVar9 + 0xe0) == 0) {
          thunk_FUN_00d32864(lVar9);
          lVar11 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x78);
          if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
        }
        (**(code **)(lVar11 + 0x18))(*(undefined8 *)(lVar11 + 0x40),*(undefined8 *)(lVar11 + 0x28));
      }
      lVar9 = *unaff_x20;
      if (*(int *)(lVar9 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar9);
        lVar9 = *unaff_x20;
      }
      *(undefined8 *)(*(long *)(lVar9 + 0xb8) + 0x188) = uVar12;
    }
  }
  else {
    lVar11 = *(long *)(lVar9 + 0xb8);
    cVar1 = *(char *)(lVar11 + 0x17c);
joined_r0x01b06ce8:
    if (cVar1 != '\0') goto LAB_01b06910;
LAB_01b069e4:
    *(undefined8 *)(lVar11 + 0x188) = uVar12;
    *(undefined1 *)(lVar11 + 0x17c) = 1;
  }
  if (*(int *)(lVar9 + 0xe0) == 0) {
    thunk_FUN_00d32864(lVar9);
    lVar9 = *unaff_x20;
  }
  if (*(char *)(*(long *)(lVar9 + 0xb8) + 400) != '\0') {
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar9);
    }
    if (*(char *)(unaff_x27 + 0xea4) == '\0') {
      thunk_FUN_00d48444(System_Data_DataColumnCollection_TypeInfo);
      *(undefined1 *)(unaff_x27 + 0xea4) = 1;
    }
    lVar9 = *unaff_x20;
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar9 = *unaff_x20;
    }
    lVar9 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x10);
    if (lVar9 == 0) goto LAB_01b06e0c;
    uVar8 = FUN_01b81bcc(lVar9,0);
    if ((uVar8 & 1) == 0) {
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_02660dac(*(undefined8 *)Method_Autohand_Demo_OpenXRTeleporterLink_FinishTeleportAction__,0
                  );
      lVar9 = *unaff_x20;
      if (*(int *)(lVar9 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar9);
        lVar9 = *unaff_x20;
      }
      lVar11 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x88);
      if (lVar11 != 0) {
        if (*(int *)(lVar9 + 0xe0) == 0) {
          thunk_FUN_00d32864(lVar9);
          lVar11 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x88);
          if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
        }
        (**(code **)(lVar11 + 0x18))(*(undefined8 *)(lVar11 + 0x40),*(undefined8 *)(lVar11 + 0x28));
      }
    }
  }
  lVar9 = *unaff_x20;
  if (*(int *)(lVar9 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar9 = *unaff_x20;
  }
  if (*(char *)(*(long *)(lVar9 + 0xb8) + 400) == '\0') {
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    if (*(char *)(unaff_x27 + 0xea4) == '\0') {
      thunk_FUN_00d48444(System_Data_DataColumnCollection_TypeInfo);
      *(undefined1 *)(unaff_x27 + 0xea4) = 1;
    }
    lVar9 = *unaff_x20;
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar9 = *unaff_x20;
    }
    lVar9 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x10);
    if (lVar9 == 0) goto LAB_01b06e0c;
    uVar8 = FUN_01b81bcc(lVar9,0);
    if ((uVar8 & 1) != 0) {
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_02660dac(*(undefined8 *)OVRPlugin_OVRP_1_96_0_TypeInfo,0);
      lVar9 = *unaff_x20;
      if (*(int *)(lVar9 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar9);
        lVar9 = *unaff_x20;
      }
      lVar11 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x80);
      if (lVar11 != 0) {
        if (*(int *)(lVar9 + 0xe0) == 0) {
          thunk_FUN_00d32864(lVar9);
          lVar11 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x80);
          if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
        }
        (**(code **)(lVar11 + 0x18))(*(undefined8 *)(lVar11 + 0x40),*(undefined8 *)(lVar11 + 0x28));
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
  lVar9 = *unaff_x20;
  if (*(int *)(lVar9 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar9 = *unaff_x20;
  }
  lVar9 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x10);
  if (lVar9 != 0) {
    bVar4 = FUN_01b81bcc(lVar9,0);
    lVar9 = *unaff_x20;
    *(byte *)(*(long *)(lVar9 + 0xb8) + 400) = bVar4 & 1;
    if (*(char *)(unaff_x26 + 0xd82) == '\0') {
      thunk_FUN_00d48444();
      lVar9 = *unaff_x20;
      *(undefined1 *)(unaff_x26 + 0xd82) = 1;
    }
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar9);
      lVar9 = *unaff_x20;
    }
    lVar9 = *(long *)(*(long *)(lVar9 + 0xb8) + 8);
    if (lVar9 != 0) {
      FUN_01aaf220(lVar9,0);
      iVar5 = *(int *)(unaff_x19 + 0x118);
      lVar9 = *(long *)(*unaff_x20 + 0xb8);
      if (*(int *)(lVar9 + 0x174) != iVar5) {
        if (*(int *)(*unaff_x20 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar9 = *(long *)(*unaff_x20 + 0xb8);
        }
        *(int *)(lVar9 + 0x174) = iVar5;
        if (iVar5 == 2) {
          if (*(int *)(*unaff_x24 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          FUN_01b1a050(1,0);
          uVar12 = 1;
        }
        else {
          if (iVar5 == 1) {
            if (*(int *)(*unaff_x24 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar12 = 1;
          }
          else {
            if (iVar5 != 0) goto LAB_01b06d3c;
            if (*(int *)(*unaff_x24 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar12 = 0;
          }
          FUN_01b1a050(uVar12,0);
          uVar12 = 0;
        }
        FUN_01b1a11c(uVar12,0);
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


