/*
FUNCTION_NAME: Meta.WitAi.Json.JsonConvert$$DeserializeToken
ENTRY_POINT: 07205bc8
PROGRAM: m3ar-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_8;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Meta_WitAi_Json_JsonConvert__DeserializeToken(void)

{
  uint uVar1;
  ushort uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long unaff_x19;
  long unaff_x21;
  int iVar8;
  
  lVar3 = FUN_047e1fa8();
  lVar7 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0406aaec(lVar7);
  }
  FUN_04b96ea4(lVar3,*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0xb8));
  lVar7 = *(long *)(unaff_x21 + 0x20);
  if (*(char *)(unaff_x21 + 0x18) == '\0') {
    if (lVar7 == 0) goto LAB_07205e7c;
    iVar8 = *(int *)(unaff_x21 + 0xc);
  }
  else {
    if (lVar7 == 0) goto LAB_07205e7c;
    if ((*(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
      FUN_0406aaec();
    }
    iVar8 = *(int *)(lVar7 + 0x1c) + ~*(uint *)(unaff_x21 + 0xc);
  }
  do {
    lVar4 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0406aaec();
    }
    uVar5 = FUN_05b735e0(lVar7,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x118));
    lVar4 = *(long *)(unaff_x19 + 0x20);
    if ((uVar5 & 1) != 0) {
LAB_07205df4:
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_0406aaec();
      }
      uVar5 = FUN_05b735e0(lVar7,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x118));
      if ((uVar5 & 1) != 0) {
        return;
      }
      if ((*(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
        FUN_0406aaec();
      }
      if (lVar3 != 0) {
        lVar4 = *(long *)(unaff_x19 + 0x20);
        if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_0406aaec();
        }
        FUN_06060e58(lVar3,lVar7,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x110));
        return;
      }
      break;
    }
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      FUN_0406aaec();
    }
    lVar6 = FUN_07205edc();
    if (lVar6 == 0) break;
    lVar4 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      FUN_0406aaec();
      lVar4 = *(long *)(unaff_x19 + 0x20);
    }
    if (iVar8 == *(int *)(lVar6 + 0x1c)) goto LAB_07205df4;
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      FUN_0406aaec();
    }
    lVar4 = FUN_07205edc();
    if (lVar4 == 0) break;
    if ((*(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
      FUN_0406aaec();
    }
    uVar2 = *(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135);
    if (iVar8 < *(int *)(lVar4 + 0x1c)) {
      if ((uVar2 & 1) == 0) {
        FUN_0406aaec();
      }
      if (lVar3 == 0) break;
      lVar4 = *(long *)(unaff_x19 + 0x20);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_0406aaec();
      }
      FUN_06060e58(lVar3,lVar7,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x110));
      if ((*(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
        FUN_0406aaec();
      }
      lVar7 = FUN_07205edc();
    }
    else {
      if ((uVar2 & 1) == 0) {
        FUN_0406aaec();
      }
      lVar7 = FUN_07205edc();
      if (lVar7 == 0) break;
      uVar2 = *(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135);
      if ((uVar2 & 1) == 0) {
        FUN_0406aaec();
        uVar2 = *(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135);
      }
      uVar1 = *(uint *)(lVar7 + 0x1c);
      if ((uVar2 & 1) == 0) {
        FUN_0406aaec();
      }
      iVar8 = iVar8 + ~uVar1;
      lVar7 = FUN_07205e80();
    }
  } while (lVar7 != 0);
LAB_07205e7c:
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


