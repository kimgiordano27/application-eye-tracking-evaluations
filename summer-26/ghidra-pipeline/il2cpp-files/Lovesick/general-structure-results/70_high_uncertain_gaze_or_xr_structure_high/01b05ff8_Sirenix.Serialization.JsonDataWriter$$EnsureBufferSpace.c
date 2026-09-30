/*
FUNCTION_NAME: Sirenix.Serialization.JsonDataWriter$$EnsureBufferSpace
ENTRY_POINT: 01b05ff8
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


void Sirenix_Serialization_JsonDataWriter__EnsureBufferSpace(void)

{
  int iVar1;
  char cVar2;
  float fVar3;
  undefined *puVar4;
  byte bVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined1 in_w8;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  long *unaff_x24;
  long *unaff_x25;
  long unaff_x26;
  long unaff_x27;
  long *unaff_x28;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 in_stack_00000010;
  
  *(undefined1 *)(unaff_x26 + 0xd82) = in_w8;
  lVar7 = *unaff_x20;
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar7 = *unaff_x20;
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 8);
  if (lVar7 == 0) goto LAB_01b06e0c;
  in_stack_00000010._4_4_ = FUN_01aafc7c(lVar7,0);
  lVar7 = FUN_0176eb1c((long)&stack0x00000010 + 4,0);
  if ((lVar7 != 0) &&
     (lVar8 = thunk_FUN_00d6225c(lVar7,*(undefined8 *)(*unaff_x22 + 0x40)), lVar8 == 0)) {
LAB_01b06e14:
    uVar9 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar9,0);
  }
  puVar4 = Method_SmackAJack_<StopGameCoroutine>d__33_System_Collections_IEnumerator_Reset__;
  uVar6 = *(uint *)(unaff_x22 + 3);
  if (uVar6 < 4) {
LAB_01b06e10:
                    /* WARNING: Subroutine does not return */
    FUN_00da5194();
  }
  unaff_x22[7] = lVar7;
  lVar7 = *(long *)puVar4;
  if (lVar7 != 0) {
    lVar7 = thunk_FUN_00d6225c(lVar7,*(undefined8 *)(*unaff_x22 + 0x40));
    if (lVar7 == 0) goto LAB_01b06e14;
    uVar6 = *(uint *)(unaff_x22 + 3);
  }
  if (uVar6 < 5) goto LAB_01b06e10;
  unaff_x22[8] = *(long *)puVar4;
  uVar9 = FUN_01600844();
  if (*(int *)(*unaff_x25 + 0xe0) == 0) {
    thunk_FUN_00d32864(*unaff_x25);
  }
  FUN_02660dac(uVar9,0);
  if (*(int *)(*unaff_x28 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar10 = FUN_02681b9c();
  if (*(int *)(*unaff_x20 + 0xe0) == 0) {
    thunk_FUN_00d32864(*unaff_x20);
  }
  if (*(char *)(unaff_x26 + 0xd82) == '\0') {
    thunk_FUN_00d48444(System_Data_DataColumnCollection_TypeInfo);
    *(undefined1 *)(unaff_x26 + 0xd82) = 1;
  }
  lVar7 = *unaff_x20;
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar7 = *unaff_x20;
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 8);
  if (lVar7 == 0) goto LAB_01b06e0c;
  uVar9 = FUN_01aafc7c(lVar7,0);
  if ((uVar10 & 1) == 0) {
    FUN_0267a538(uVar9,0);
  }
  else {
    if (unaff_x21 == 0) goto LAB_01b06e0c;
    *(int *)(unaff_x21 + 0x60) = (int)uVar9;
  }
  bVar5 = FUN_01affc04();
  if ((bVar5 & 1) != *(byte *)(unaff_x19 + 0x21)) {
    Sirenix_Serialization_BinaryDataWriter_<>c__<_cctor>b__70_3();
  }
  fVar3 = DAT_028aa020;
  fVar11 = *(float *)(unaff_x19 + 0x50) - *(float *)(unaff_x19 + 0x50);
  fVar12 = *(float *)(unaff_x19 + 0x54) - *(float *)(unaff_x19 + 0x54);
  fVar13 = *(float *)(unaff_x19 + 0x58) - *(float *)(unaff_x19 + 0x58);
  if (DAT_028aa020 <= fVar13 * fVar13 + fVar11 * fVar11 + fVar12 * fVar12) {
    FUN_01affe88();
  }
  fVar11 = *(float *)(unaff_x19 + 0x5c) - *(float *)(unaff_x19 + 0x5c);
  fVar12 = *(float *)(unaff_x19 + 0x60) - *(float *)(unaff_x19 + 0x60);
  fVar13 = *(float *)(unaff_x19 + 100) - *(float *)(unaff_x19 + 100);
  if (fVar3 <= fVar13 * fVar13 + fVar11 * fVar11 + fVar12 * fVar12) {
    FUN_01afff7c();
  }
  lVar7 = *unaff_x20;
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar7 = *unaff_x20;
  }
  if (*(char *)(*(long *)(lVar7 + 0xb8) + 0xfd) != '\0') {
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar10 = FUN_01aff7c8();
    if ((uVar10 & 1) == 0) {
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_02660dac(*(undefined8 *)
                    Method_System_Collections_Generic_List<IronMaidenNeedle>_get_Item__,0);
      lVar7 = *unaff_x20;
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar7);
        lVar7 = *unaff_x20;
      }
      lVar8 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x38);
      if (lVar8 != 0) {
        if (*(int *)(lVar7 + 0xe0) == 0) {
          thunk_FUN_00d32864(lVar7);
          lVar8 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x38);
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
        }
        (**(code **)(lVar8 + 0x18))(*(undefined8 *)(lVar8 + 0x40),*(undefined8 *)(lVar8 + 0x28));
      }
    }
  }
  lVar7 = *unaff_x20;
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar7 = *unaff_x20;
  }
  if (*(char *)(*(long *)(lVar7 + 0xb8) + 0xfd) == '\0') {
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar10 = FUN_01aff7c8();
    if ((uVar10 & 1) != 0) {
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_02660dac(*(undefined8 *)Method_System_Linq_Enumerable_Any<object>__,0);
      lVar7 = *unaff_x20;
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar7);
        lVar7 = *unaff_x20;
      }
      lVar8 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x30);
      if (lVar8 != 0) {
        if (*(int *)(lVar7 + 0xe0) == 0) {
          thunk_FUN_00d32864(lVar7);
          lVar8 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x30);
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
        }
        (**(code **)(lVar8 + 0x18))(*(undefined8 *)(lVar8 + 0x40),*(undefined8 *)(lVar8 + 0x28));
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
  uVar9 = FUN_01b14884(0);
  FUN_01b02a9c(uVar9,(uint)uVar9 & 1);
  if ((*(char *)(*(long *)(*unaff_x20 + 0xb8) + 0x17a) != '\0') &&
     (uVar10 = FUN_01b029c4(), (uVar10 & 1) == 0)) {
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_02660dac(*(undefined8 *)Method_Autohand_Hand_<OnEnable>b__76_1__,0);
    lVar7 = *unaff_x20;
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar7);
      lVar7 = *unaff_x20;
    }
    lVar8 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x48);
    if (lVar8 != 0) {
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar7);
        lVar8 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x48);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
      }
      (**(code **)(lVar8 + 0x18))(*(undefined8 *)(lVar8 + 0x40),*(undefined8 *)(lVar8 + 0x28));
    }
  }
  lVar7 = *unaff_x20;
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar7 = *unaff_x20;
  }
  if ((*(char *)(*(long *)(lVar7 + 0xb8) + 0x17a) == '\0') &&
     (uVar10 = FUN_01b029c4(), (uVar10 & 1) != 0)) {
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_02660dac(*(undefined8 *)Method_UnityEngine_Component_GetComponent<Rigidbody>__,0);
    lVar7 = *unaff_x20;
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar7);
      lVar7 = *unaff_x20;
    }
    lVar8 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x40);
    if (lVar8 != 0) {
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar7);
        lVar8 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x40);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
      }
      (**(code **)(lVar8 + 0x18))(*(undefined8 *)(lVar8 + 0x40),*(undefined8 *)(lVar8 + 0x28));
    }
  }
  bVar5 = FUN_01b029c4();
  lVar7 = *unaff_x20;
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_00d32864(lVar7);
    lVar7 = *unaff_x20;
  }
  *(byte *)(*(long *)(lVar7 + 0xb8) + 0x17a) = bVar5 & 1;
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar6 = FUN_01b15174(0);
  FUN_01affa34(uVar6 & 1);
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
      lVar7 = *unaff_x20;
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar7);
        lVar7 = *unaff_x20;
      }
      lVar8 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x58);
      if (lVar8 != 0) {
        if (*(int *)(lVar7 + 0xe0) == 0) {
          thunk_FUN_00d32864(lVar7);
          lVar8 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x58);
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
        }
        (**(code **)(lVar8 + 0x18))(*(undefined8 *)(lVar8 + 0x40),*(undefined8 *)(lVar8 + 0x28));
      }
    }
  }
  lVar7 = *unaff_x20;
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar7 = *unaff_x20;
  }
  if (*(char *)(*(long *)(lVar7 + 0xb8) + 0x100) == '\0') {
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar10 = FUN_01aff95c();
    if ((uVar10 & 1) != 0) {
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_02660dac(*(undefined8 *)Method_System_Collections_Generic_Stack<Random_State>_Pop__,0);
      lVar7 = *unaff_x20;
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar7);
        lVar7 = *unaff_x20;
      }
      lVar8 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x50);
      if (lVar8 != 0) {
        if (*(int *)(lVar7 + 0xe0) == 0) {
          thunk_FUN_00d32864(lVar7);
          lVar8 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x50);
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
        }
        (**(code **)(lVar8 + 0x18))(*(undefined8 *)(lVar8 + 0x40),*(undefined8 *)(lVar8 + 0x28));
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
    lVar7 = *unaff_x20;
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar7);
      lVar7 = *unaff_x20;
    }
    lVar8 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x68);
    if (lVar8 != 0) {
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar7);
        lVar8 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x68);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
      }
      (**(code **)(lVar8 + 0x18))(*(undefined8 *)(lVar8 + 0x40),*(undefined8 *)(lVar8 + 0x28));
    }
  }
  lVar7 = *unaff_x20;
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar7 = *unaff_x20;
  }
  if ((bVar5 & 1 & (*(byte *)(*(long *)(lVar7 + 0xb8) + 0x101) ^ 0xff)) != 0) {
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_02660dac(*(undefined8 *)PTR_DAT_033f5390,0);
    lVar7 = *unaff_x20;
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar7);
      lVar7 = *unaff_x20;
    }
    lVar8 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x60);
    if (lVar8 != 0) {
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar7);
        lVar8 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x60);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
      }
      (**(code **)(lVar8 + 0x18))(*(undefined8 *)(lVar8 + 0x40),*(undefined8 *)(lVar8 + 0x28));
    }
  }
  lVar7 = *unaff_x20;
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar7 = *unaff_x20;
  }
  *(byte *)(*(long *)(lVar7 + 0xb8) + 0x101) = bVar5 & 1;
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar9 = FUN_01b14b4c(0);
  lVar7 = *unaff_x20;
  lVar8 = *(long *)(lVar7 + 0xb8);
  cVar2 = *(char *)(lVar8 + 0x17b);
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_00d32864(lVar7);
    lVar8 = *(long *)(*unaff_x20 + 0xb8);
    if (cVar2 == '\0') goto LAB_01b068d0;
LAB_01b06810:
    uVar10 = FUN_015fe7e8(uVar9,*(undefined8 *)(lVar8 + 0x180),0);
    if ((uVar10 & 1) != 0) {
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_02660dac(*(undefined8 *)
                    Method_System_Collections_Generic_List_Enumerator<LocomotionVignetteProvider>_MoveNext__
                   ,0);
      lVar7 = *unaff_x20;
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar7);
        lVar7 = *unaff_x20;
      }
      lVar8 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x70);
      if (lVar8 != 0) {
        if (*(int *)(lVar7 + 0xe0) == 0) {
          thunk_FUN_00d32864(lVar7);
          lVar8 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x70);
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
        }
        (**(code **)(lVar8 + 0x18))(*(undefined8 *)(lVar8 + 0x40),*(undefined8 *)(lVar8 + 0x28));
      }
      lVar7 = *unaff_x20;
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar7 = *unaff_x20;
      }
      *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x180) = uVar9;
    }
  }
  else {
    if (cVar2 != '\0') goto LAB_01b06810;
LAB_01b068d0:
    *(undefined8 *)(lVar8 + 0x180) = uVar9;
    *(undefined1 *)(lVar8 + 0x17b) = 1;
  }
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar9 = FUN_01b14e60(0);
  lVar7 = *unaff_x20;
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_00d32864(lVar7);
    lVar7 = *unaff_x20;
    lVar8 = *(long *)(lVar7 + 0xb8);
    cVar2 = *(char *)(lVar8 + 0x17c);
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar7);
      lVar7 = *unaff_x20;
      lVar8 = *(long *)(lVar7 + 0xb8);
      goto joined_r0x01b06ce8;
    }
    if (cVar2 == '\0') goto LAB_01b069e4;
LAB_01b06910:
    uVar10 = FUN_015fe7e8(uVar9,*(undefined8 *)(lVar8 + 0x188),0);
    if ((uVar10 & 1) == 0) {
      lVar7 = *unaff_x20;
    }
    else {
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_02660dac(*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vcgezq_s64__,0);
      lVar7 = *unaff_x20;
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar7);
        lVar7 = *unaff_x20;
      }
      lVar8 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x78);
      if (lVar8 != 0) {
        if (*(int *)(lVar7 + 0xe0) == 0) {
          thunk_FUN_00d32864(lVar7);
          lVar8 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x78);
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
        }
        (**(code **)(lVar8 + 0x18))(*(undefined8 *)(lVar8 + 0x40),*(undefined8 *)(lVar8 + 0x28));
      }
      lVar7 = *unaff_x20;
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar7);
        lVar7 = *unaff_x20;
      }
      *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x188) = uVar9;
    }
  }
  else {
    lVar8 = *(long *)(lVar7 + 0xb8);
    cVar2 = *(char *)(lVar8 + 0x17c);
joined_r0x01b06ce8:
    if (cVar2 != '\0') goto LAB_01b06910;
LAB_01b069e4:
    *(undefined8 *)(lVar8 + 0x188) = uVar9;
    *(undefined1 *)(lVar8 + 0x17c) = 1;
  }
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_00d32864(lVar7);
    lVar7 = *unaff_x20;
  }
  if (*(char *)(*(long *)(lVar7 + 0xb8) + 400) != '\0') {
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar7);
    }
    if (*(char *)(unaff_x27 + 0xea4) == '\0') {
      thunk_FUN_00d48444(System_Data_DataColumnCollection_TypeInfo);
      *(undefined1 *)(unaff_x27 + 0xea4) = 1;
    }
    lVar7 = *unaff_x20;
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar7 = *unaff_x20;
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x10);
    if (lVar7 == 0) goto LAB_01b06e0c;
    uVar10 = FUN_01b81bcc(lVar7,0);
    if ((uVar10 & 1) == 0) {
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_02660dac(*(undefined8 *)Method_Autohand_Demo_OpenXRTeleporterLink_FinishTeleportAction__,0
                  );
      lVar7 = *unaff_x20;
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar7);
        lVar7 = *unaff_x20;
      }
      lVar8 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x88);
      if (lVar8 != 0) {
        if (*(int *)(lVar7 + 0xe0) == 0) {
          thunk_FUN_00d32864(lVar7);
          lVar8 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x88);
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
        }
        (**(code **)(lVar8 + 0x18))(*(undefined8 *)(lVar8 + 0x40),*(undefined8 *)(lVar8 + 0x28));
      }
    }
  }
  lVar7 = *unaff_x20;
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar7 = *unaff_x20;
  }
  if (*(char *)(*(long *)(lVar7 + 0xb8) + 400) == '\0') {
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    if (*(char *)(unaff_x27 + 0xea4) == '\0') {
      thunk_FUN_00d48444(System_Data_DataColumnCollection_TypeInfo);
      *(undefined1 *)(unaff_x27 + 0xea4) = 1;
    }
    lVar7 = *unaff_x20;
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar7 = *unaff_x20;
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x10);
    if (lVar7 == 0) goto LAB_01b06e0c;
    uVar10 = FUN_01b81bcc(lVar7,0);
    if ((uVar10 & 1) != 0) {
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_02660dac(*(undefined8 *)OVRPlugin_OVRP_1_96_0_TypeInfo,0);
      lVar7 = *unaff_x20;
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar7);
        lVar7 = *unaff_x20;
      }
      lVar8 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x80);
      if (lVar8 != 0) {
        if (*(int *)(lVar7 + 0xe0) == 0) {
          thunk_FUN_00d32864(lVar7);
          lVar8 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x80);
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
        }
        (**(code **)(lVar8 + 0x18))(*(undefined8 *)(lVar8 + 0x40),*(undefined8 *)(lVar8 + 0x28));
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
  lVar7 = *unaff_x20;
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar7 = *unaff_x20;
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x10);
  if (lVar7 != 0) {
    bVar5 = FUN_01b81bcc(lVar7,0);
    lVar7 = *unaff_x20;
    *(byte *)(*(long *)(lVar7 + 0xb8) + 400) = bVar5 & 1;
    if (*(char *)(unaff_x26 + 0xd82) == '\0') {
      thunk_FUN_00d48444();
      lVar7 = *unaff_x20;
      *(undefined1 *)(unaff_x26 + 0xd82) = 1;
    }
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar7);
      lVar7 = *unaff_x20;
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 8);
    if (lVar7 != 0) {
      FUN_01aaf220(lVar7,0);
      iVar1 = *(int *)(unaff_x19 + 0x118);
      lVar7 = *(long *)(*unaff_x20 + 0xb8);
      if (*(int *)(lVar7 + 0x174) != iVar1) {
        if (*(int *)(*unaff_x20 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar7 = *(long *)(*unaff_x20 + 0xb8);
        }
        *(int *)(lVar7 + 0x174) = iVar1;
        if (iVar1 == 2) {
          if (*(int *)(*unaff_x24 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          FUN_01b1a050(1,0);
          uVar9 = 1;
        }
        else {
          if (iVar1 == 1) {
            if (*(int *)(*unaff_x24 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar9 = 1;
          }
          else {
            if (iVar1 != 0) goto LAB_01b06d3c;
            if (*(int *)(*unaff_x24 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar9 = 0;
          }
          FUN_01b1a050(uVar9,0);
          uVar9 = 0;
        }
        FUN_01b1a11c(uVar9,0);
      }
LAB_01b06d3c:
      puVar4 = StringLiteral_5227;
      cVar2 = *(char *)(unaff_x19 + 0x11e);
      if (*(char *)(unaff_x19 + 0x11d) != cVar2) {
        *(char *)(unaff_x19 + 0x11d) = cVar2;
        if (*(int *)(*unaff_x24 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_01b1ac3c(cVar2 != '\0',0);
      }
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
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


