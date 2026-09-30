/*
FUNCTION_NAME: Sirenix.Serialization.JsonDataWriter$$GetDataDump
ENTRY_POINT: 01b07364
PROGRAM: Lovesick-libil2cpp.so
SCORE: 71
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_3;validity_or_gating_hits_6;functionality_data_collection_or_telemetry_hits_1
*/


void Sirenix_Serialization_JsonDataWriter__GetDataDump(void)

{
  int iVar1;
  char cVar2;
  undefined *puVar3;
  byte bVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x24;
  long *unaff_x25;
  long unaff_x26;
  long unaff_x27;
  
  uVar6 = FUN_015f5b28();
  lVar7 = thunk_FUN_00d48444(StringLiteral_302);
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  FUN_026610e4(uVar6,0);
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
    uVar5 = FUN_01b81bcc(lVar7,0);
    if ((uVar5 & 1) != 0) {
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
          uVar6 = 1;
        }
        else {
          if (iVar1 == 1) {
            if (*(int *)(*unaff_x24 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar6 = 1;
          }
          else {
            if (iVar1 != 0) goto LAB_01b06d3c;
            if (*(int *)(*unaff_x24 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar6 = 0;
          }
          FUN_01b1a050(uVar6,0);
          uVar6 = 0;
        }
        FUN_01b1a11c(uVar6,0);
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


