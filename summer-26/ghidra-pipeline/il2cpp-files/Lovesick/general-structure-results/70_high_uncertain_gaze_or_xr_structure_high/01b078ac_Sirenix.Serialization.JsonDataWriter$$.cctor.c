/*
FUNCTION_NAME: Sirenix.Serialization.JsonDataWriter$$.cctor
ENTRY_POINT: 01b078ac
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


void Sirenix_Serialization_JsonDataWriter___cctor(void)

{
  int iVar1;
  char cVar2;
  undefined *puVar3;
  byte bVar4;
  uint uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x24;
  long *unaff_x25;
  long unaff_x26;
  long unaff_x27;
  
                    /* try { // try from 01b078b4 to 01c078bb has its CatchHandler @ 01b07934 */
  uVar7 = FUN_015f5b28();
                    /* try { // try from 01b078c4 to 01c078cb has its CatchHandler @ 01b07938 */
  lVar8 = thunk_FUN_00d48444(StringLiteral_302);
                    /* try { // try from 01b078cc to 01c07927 has its CatchHandler @ 01b077e8 */
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  FUN_026610e4(uVar7,0);
  lVar8 = *unaff_x20;
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar8 = *unaff_x20;
  }
  if (*(char *)(*(long *)(lVar8 + 0xb8) + 0xfd) == '\0') {
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar6 = FUN_01aff7c8();
    if ((uVar6 & 1) != 0) {
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_02660dac(*(undefined8 *)Method_System_Linq_Enumerable_Any<object>__,0);
      lVar8 = *unaff_x20;
      if (*(int *)(lVar8 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar8);
        lVar8 = *unaff_x20;
      }
      lVar9 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x30);
      if (lVar9 != 0) {
        if (*(int *)(lVar8 + 0xe0) == 0) {
          thunk_FUN_00d32864(lVar8);
          lVar9 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x30);
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
        }
        (**(code **)(lVar9 + 0x18))(*(undefined8 *)(lVar9 + 0x40),*(undefined8 *)(lVar9 + 0x28));
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
  uVar7 = FUN_01b14884(0);
  FUN_01b02a9c(uVar7,(uint)uVar7 & 1);
  if ((*(char *)(*(long *)(*unaff_x20 + 0xb8) + 0x17a) != '\0') &&
     (uVar6 = FUN_01b029c4(), (uVar6 & 1) == 0)) {
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_02660dac(*(undefined8 *)Method_Autohand_Hand_<OnEnable>b__76_1__,0);
    lVar8 = *unaff_x20;
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar8);
      lVar8 = *unaff_x20;
    }
    lVar9 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x48);
    if (lVar9 != 0) {
      if (*(int *)(lVar8 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar8);
        lVar9 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x48);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
      }
      (**(code **)(lVar9 + 0x18))(*(undefined8 *)(lVar9 + 0x40),*(undefined8 *)(lVar9 + 0x28));
    }
  }
  lVar8 = *unaff_x20;
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar8 = *unaff_x20;
  }
  if ((*(char *)(*(long *)(lVar8 + 0xb8) + 0x17a) == '\0') &&
     (uVar6 = FUN_01b029c4(), (uVar6 & 1) != 0)) {
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_02660dac(*(undefined8 *)Method_UnityEngine_Component_GetComponent<Rigidbody>__,0);
    lVar8 = *unaff_x20;
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar8);
      lVar8 = *unaff_x20;
    }
    lVar9 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x40);
    if (lVar9 != 0) {
      if (*(int *)(lVar8 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar8);
        lVar9 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x40);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
      }
      (**(code **)(lVar9 + 0x18))(*(undefined8 *)(lVar9 + 0x40),*(undefined8 *)(lVar9 + 0x28));
    }
  }
  bVar4 = FUN_01b029c4();
  lVar8 = *unaff_x20;
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_00d32864(lVar8);
    lVar8 = *unaff_x20;
  }
  *(byte *)(*(long *)(lVar8 + 0xb8) + 0x17a) = bVar4 & 1;
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar5 = FUN_01b15174(0);
  FUN_01affa34(uVar5 & 1);
  if (*(char *)(*(long *)(*unaff_x20 + 0xb8) + 0x100) != '\0') {
    if (*(int *)(*unaff_x20 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar6 = FUN_01aff95c();
    if ((uVar6 & 1) == 0) {
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_02660dac(*(undefined8 *)
                    Method_UnityEngine_InputSystem_HID_HID_HIDDeviceDescriptorBuilder_WithPhysicalMinMax__
                   ,0);
      lVar8 = *unaff_x20;
      if (*(int *)(lVar8 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar8);
        lVar8 = *unaff_x20;
      }
      lVar9 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x58);
      if (lVar9 != 0) {
        if (*(int *)(lVar8 + 0xe0) == 0) {
          thunk_FUN_00d32864(lVar8);
          lVar9 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x58);
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
        }
        (**(code **)(lVar9 + 0x18))(*(undefined8 *)(lVar9 + 0x40),*(undefined8 *)(lVar9 + 0x28));
      }
    }
  }
  lVar8 = *unaff_x20;
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar8 = *unaff_x20;
  }
  if (*(char *)(*(long *)(lVar8 + 0xb8) + 0x100) == '\0') {
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar6 = FUN_01aff95c();
    if ((uVar6 & 1) != 0) {
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_02660dac(*(undefined8 *)Method_System_Collections_Generic_Stack<Random_State>_Pop__,0);
      lVar8 = *unaff_x20;
      if (*(int *)(lVar8 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar8);
        lVar8 = *unaff_x20;
      }
      lVar9 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x50);
      if (lVar9 != 0) {
        if (*(int *)(lVar8 + 0xe0) == 0) {
          thunk_FUN_00d32864(lVar8);
          lVar9 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x50);
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
        }
        (**(code **)(lVar9 + 0x18))(*(undefined8 *)(lVar9 + 0x40),*(undefined8 *)(lVar9 + 0x28));
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
    lVar8 = *unaff_x20;
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar8);
      lVar8 = *unaff_x20;
    }
    lVar9 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x68);
    if (lVar9 != 0) {
      if (*(int *)(lVar8 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar8);
        lVar9 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x68);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
      }
      (**(code **)(lVar9 + 0x18))(*(undefined8 *)(lVar9 + 0x40),*(undefined8 *)(lVar9 + 0x28));
    }
  }
  lVar8 = *unaff_x20;
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar8 = *unaff_x20;
  }
  if ((bVar4 & 1 & (*(byte *)(*(long *)(lVar8 + 0xb8) + 0x101) ^ 0xff)) != 0) {
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_02660dac(*(undefined8 *)PTR_DAT_033f5390,0);
    lVar8 = *unaff_x20;
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar8);
      lVar8 = *unaff_x20;
    }
    lVar9 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x60);
    if (lVar9 != 0) {
      if (*(int *)(lVar8 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar8);
        lVar9 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x60);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
      }
      (**(code **)(lVar9 + 0x18))(*(undefined8 *)(lVar9 + 0x40),*(undefined8 *)(lVar9 + 0x28));
    }
  }
  lVar8 = *unaff_x20;
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar8 = *unaff_x20;
  }
  *(byte *)(*(long *)(lVar8 + 0xb8) + 0x101) = bVar4 & 1;
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar7 = FUN_01b14b4c(0);
  lVar8 = *unaff_x20;
  lVar9 = *(long *)(lVar8 + 0xb8);
  cVar2 = *(char *)(lVar9 + 0x17b);
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_00d32864(lVar8);
    lVar9 = *(long *)(*unaff_x20 + 0xb8);
    if (cVar2 == '\0') goto LAB_01b068d0;
LAB_01b06810:
    uVar6 = FUN_015fe7e8(uVar7,*(undefined8 *)(lVar9 + 0x180),0);
    if ((uVar6 & 1) != 0) {
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_02660dac(*(undefined8 *)
                    Method_System_Collections_Generic_List_Enumerator<LocomotionVignetteProvider>_MoveNext__
                   ,0);
      lVar8 = *unaff_x20;
      if (*(int *)(lVar8 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar8);
        lVar8 = *unaff_x20;
      }
      lVar9 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x70);
      if (lVar9 != 0) {
        if (*(int *)(lVar8 + 0xe0) == 0) {
          thunk_FUN_00d32864(lVar8);
          lVar9 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x70);
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
        }
        (**(code **)(lVar9 + 0x18))(*(undefined8 *)(lVar9 + 0x40),*(undefined8 *)(lVar9 + 0x28));
      }
      lVar8 = *unaff_x20;
      if (*(int *)(lVar8 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar8 = *unaff_x20;
      }
      *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x180) = uVar7;
    }
  }
  else {
    if (cVar2 != '\0') goto LAB_01b06810;
LAB_01b068d0:
    *(undefined8 *)(lVar9 + 0x180) = uVar7;
    *(undefined1 *)(lVar9 + 0x17b) = 1;
  }
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar7 = FUN_01b14e60(0);
  lVar8 = *unaff_x20;
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_00d32864(lVar8);
    lVar8 = *unaff_x20;
    lVar9 = *(long *)(lVar8 + 0xb8);
    cVar2 = *(char *)(lVar9 + 0x17c);
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar8);
      lVar8 = *unaff_x20;
      lVar9 = *(long *)(lVar8 + 0xb8);
      goto joined_r0x01b06ce8;
    }
    if (cVar2 == '\0') goto LAB_01b069e4;
LAB_01b06910:
    uVar6 = FUN_015fe7e8(uVar7,*(undefined8 *)(lVar9 + 0x188),0);
    if ((uVar6 & 1) == 0) {
      lVar8 = *unaff_x20;
    }
    else {
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_02660dac(*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vcgezq_s64__,0);
      lVar8 = *unaff_x20;
      if (*(int *)(lVar8 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar8);
        lVar8 = *unaff_x20;
      }
      lVar9 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x78);
      if (lVar9 != 0) {
        if (*(int *)(lVar8 + 0xe0) == 0) {
          thunk_FUN_00d32864(lVar8);
          lVar9 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x78);
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
        }
        (**(code **)(lVar9 + 0x18))(*(undefined8 *)(lVar9 + 0x40),*(undefined8 *)(lVar9 + 0x28));
      }
      lVar8 = *unaff_x20;
      if (*(int *)(lVar8 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar8);
        lVar8 = *unaff_x20;
      }
      *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x188) = uVar7;
    }
  }
  else {
    lVar9 = *(long *)(lVar8 + 0xb8);
    cVar2 = *(char *)(lVar9 + 0x17c);
joined_r0x01b06ce8:
    if (cVar2 != '\0') goto LAB_01b06910;
LAB_01b069e4:
    *(undefined8 *)(lVar9 + 0x188) = uVar7;
    *(undefined1 *)(lVar9 + 0x17c) = 1;
  }
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_00d32864(lVar8);
    lVar8 = *unaff_x20;
  }
  if (*(char *)(*(long *)(lVar8 + 0xb8) + 400) != '\0') {
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar8);
    }
    if (*(char *)(unaff_x27 + 0xea4) == '\0') {
      thunk_FUN_00d48444(System_Data_DataColumnCollection_TypeInfo);
      *(undefined1 *)(unaff_x27 + 0xea4) = 1;
    }
    lVar8 = *unaff_x20;
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar8 = *unaff_x20;
    }
    lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x10);
    if (lVar8 == 0) goto LAB_01b06e0c;
    uVar6 = FUN_01b81bcc(lVar8,0);
    if ((uVar6 & 1) == 0) {
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_02660dac(*(undefined8 *)Method_Autohand_Demo_OpenXRTeleporterLink_FinishTeleportAction__,0
                  );
      lVar8 = *unaff_x20;
      if (*(int *)(lVar8 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar8);
        lVar8 = *unaff_x20;
      }
      lVar9 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x88);
      if (lVar9 != 0) {
        if (*(int *)(lVar8 + 0xe0) == 0) {
          thunk_FUN_00d32864(lVar8);
          lVar9 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x88);
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
        }
        (**(code **)(lVar9 + 0x18))(*(undefined8 *)(lVar9 + 0x40),*(undefined8 *)(lVar9 + 0x28));
      }
    }
  }
  lVar8 = *unaff_x20;
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar8 = *unaff_x20;
  }
  if (*(char *)(*(long *)(lVar8 + 0xb8) + 400) == '\0') {
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    if (*(char *)(unaff_x27 + 0xea4) == '\0') {
      thunk_FUN_00d48444(System_Data_DataColumnCollection_TypeInfo);
      *(undefined1 *)(unaff_x27 + 0xea4) = 1;
    }
    lVar8 = *unaff_x20;
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar8 = *unaff_x20;
    }
    lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x10);
    if (lVar8 == 0) goto LAB_01b06e0c;
    uVar6 = FUN_01b81bcc(lVar8,0);
    if ((uVar6 & 1) != 0) {
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_02660dac(*(undefined8 *)OVRPlugin_OVRP_1_96_0_TypeInfo,0);
      lVar8 = *unaff_x20;
      if (*(int *)(lVar8 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar8);
        lVar8 = *unaff_x20;
      }
      lVar9 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x80);
      if (lVar9 != 0) {
        if (*(int *)(lVar8 + 0xe0) == 0) {
          thunk_FUN_00d32864(lVar8);
          lVar9 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x80);
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
        }
        (**(code **)(lVar9 + 0x18))(*(undefined8 *)(lVar9 + 0x40),*(undefined8 *)(lVar9 + 0x28));
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
  lVar8 = *unaff_x20;
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar8 = *unaff_x20;
  }
  lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x10);
  if (lVar8 != 0) {
    bVar4 = FUN_01b81bcc(lVar8,0);
    lVar8 = *unaff_x20;
    *(byte *)(*(long *)(lVar8 + 0xb8) + 400) = bVar4 & 1;
    if (*(char *)(unaff_x26 + 0xd82) == '\0') {
      thunk_FUN_00d48444();
      lVar8 = *unaff_x20;
      *(undefined1 *)(unaff_x26 + 0xd82) = 1;
    }
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar8);
      lVar8 = *unaff_x20;
    }
    lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 8);
    if (lVar8 != 0) {
      FUN_01aaf220(lVar8,0);
      iVar1 = *(int *)(unaff_x19 + 0x118);
      lVar8 = *(long *)(*unaff_x20 + 0xb8);
      if (*(int *)(lVar8 + 0x174) != iVar1) {
        if (*(int *)(*unaff_x20 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar8 = *(long *)(*unaff_x20 + 0xb8);
        }
        *(int *)(lVar8 + 0x174) = iVar1;
        if (iVar1 == 2) {
          if (*(int *)(*unaff_x24 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          FUN_01b1a050(1,0);
          uVar7 = 1;
        }
        else {
          if (iVar1 == 1) {
            if (*(int *)(*unaff_x24 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar7 = 1;
          }
          else {
            if (iVar1 != 0) goto LAB_01b06d3c;
            if (*(int *)(*unaff_x24 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar7 = 0;
          }
          FUN_01b1a050(uVar7,0);
          uVar7 = 0;
        }
        FUN_01b1a11c(uVar7,0);
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


