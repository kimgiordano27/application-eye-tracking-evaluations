/*
FUNCTION_NAME: Sirenix.Serialization.JsonTextReader$$Dispose
ENTRY_POINT: 01b07ae4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 91
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_4;validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_2;functionality_data_collection_or_telemetry_hits_1
*/


void Sirenix_Serialization_JsonTextReader__Dispose(void)

{
  int iVar1;
  char cVar2;
  undefined *puVar3;
  byte bVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long unaff_x19;
  long *unaff_x20;
  undefined1 unaff_w23;
  long *unaff_x24;
  long *unaff_x25;
  long unaff_x26;
  long unaff_x27;
  
                    /* try { // try from 01b07ae4 to 01c07b0b has its CatchHandler @ 01b079a0 */
  lVar7 = thunk_FUN_00d48444();
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  FUN_026610e4();
  lVar7 = *unaff_x20;
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar7 = *unaff_x20;
  }
  *(undefined1 *)(*(long *)(lVar7 + 0xb8) + 0x101) = unaff_w23;
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar5 = FUN_01b14b4c(0);
  lVar7 = *unaff_x20;
  lVar8 = *(long *)(lVar7 + 0xb8);
  cVar2 = *(char *)(lVar8 + 0x17b);
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_00d32864(lVar7);
    lVar8 = *(long *)(*unaff_x20 + 0xb8);
    if (cVar2 == '\0') goto LAB_01b068d0;
LAB_01b06810:
    uVar6 = FUN_015fe7e8(uVar5,*(undefined8 *)(lVar8 + 0x180),0);
    if ((uVar6 & 1) != 0) {
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
      *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x180) = uVar5;
    }
  }
  else {
    if (cVar2 != '\0') goto LAB_01b06810;
LAB_01b068d0:
    *(undefined8 *)(lVar8 + 0x180) = uVar5;
    *(undefined1 *)(lVar8 + 0x17b) = 1;
  }
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar5 = FUN_01b14e60(0);
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
    uVar6 = FUN_015fe7e8(uVar5,*(undefined8 *)(lVar8 + 0x188),0);
    if ((uVar6 & 1) == 0) {
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
      *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x188) = uVar5;
    }
  }
  else {
    lVar8 = *(long *)(lVar7 + 0xb8);
    cVar2 = *(char *)(lVar8 + 0x17c);
joined_r0x01b06ce8:
    if (cVar2 != '\0') goto LAB_01b06910;
LAB_01b069e4:
    *(undefined8 *)(lVar8 + 0x188) = uVar5;
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
    uVar6 = FUN_01b81bcc(lVar7,0);
    if ((uVar6 & 1) == 0) {
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
    uVar6 = FUN_01b81bcc(lVar7,0);
    if ((uVar6 & 1) != 0) {
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
    bVar4 = FUN_01b81bcc(lVar7,0);
    lVar7 = *unaff_x20;
    *(byte *)(*(long *)(lVar7 + 0xb8) + 400) = bVar4 & 1;
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
          uVar5 = 1;
        }
        else {
          if (iVar1 == 1) {
            if (*(int *)(*unaff_x24 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar5 = 1;
          }
          else {
            if (iVar1 != 0) goto LAB_01b06d3c;
            if (*(int *)(*unaff_x24 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar5 = 0;
          }
          FUN_01b1a050(uVar5,0);
          uVar5 = 0;
        }
        FUN_01b1a11c(uVar5,0);
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


