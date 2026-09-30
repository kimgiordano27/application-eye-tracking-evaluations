/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader.<>c$$<PopulateObject>b__42_1
ENTRY_POINT: 055d92fc
PROGRAM: beastcraft-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_15;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8
Newtonsoft_Json_Serialization_JsonSerializerInternalReader_<>c__<PopulateObject>b__42_1(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  long lVar5;
  undefined8 *puVar6;
  uint unaff_w19;
  long lVar7;
  long unaff_x21;
  
  FUN_02e3ca1c(PTR_DAT_06a835f8);
  FUN_02e3ca1c(PTR_DAT_06a83600);
  FUN_02e3ca1c(PTR_DAT_06a83608);
  FUN_02e3ca1c(PTR_DAT_06a83610);
  *(undefined1 *)(unaff_x21 + 0x61a) = 1;
  puVar1 = PTR_DAT_06a7aba8;
  if ((int)unaff_w19 < 0x51) {
    if (0x11 < (int)unaff_w19) {
      if ((int)unaff_w19 < 0x21) {
        if (unaff_w19 != 0x1d) {
          if (unaff_w19 == 0x20) {
            uVar3 = FUN_054838b8(*(undefined8 *)PTR_DAT_06a835c0);
            uVar2 = thunk_FUN_02e78ab8(*(undefined8 *)PTR_DAT_06a33d30);
            uVar4 = 0x80070020;
            goto LAB_055d97a4;
          }
          goto LAB_055d957c;
        }
        uVar3 = FUN_054838b8(*(undefined8 *)PTR_DAT_06a835d8);
        uVar2 = thunk_FUN_02e78ab8(*(undefined8 *)PTR_DAT_06a33d30);
        uVar4 = 0x1d;
      }
      else if (unaff_w19 == 0x21) {
        uVar3 = FUN_054838b8(*(undefined8 *)PTR_DAT_06a83600);
        uVar2 = thunk_FUN_02e78ab8(*(undefined8 *)PTR_DAT_06a33d30);
        uVar4 = 0x21;
      }
      else if (unaff_w19 == 0x27) {
        uVar3 = FUN_054838b8(*(undefined8 *)PTR_DAT_06a835f0);
        uVar2 = thunk_FUN_02e78ab8(*(undefined8 *)PTR_DAT_06a33d30);
        uVar4 = 0x27;
      }
      else {
        if (unaff_w19 != 0x50) goto LAB_055d957c;
        uVar3 = FUN_054838b8(*(undefined8 *)PTR_DAT_06a83588);
        uVar2 = thunk_FUN_02e78ab8(*(undefined8 *)PTR_DAT_06a33d30);
        uVar4 = 0x50;
      }
      uVar4 = uVar4 | 0x80070000;
      goto LAB_055d97a4;
    }
    if ((int)unaff_w19 < 5) {
      if (unaff_w19 == 2) {
        uVar2 = FUN_054838b8(*(undefined8 *)PTR_DAT_06a83608);
        uVar3 = thunk_FUN_02e78ab8(*(undefined8 *)PTR_DAT_06a7a468);
        Newtonsoft_Json_Utilities_StringUtils__Trim(uVar3,uVar2);
        return uVar3;
      }
      if (unaff_w19 == 3) {
        uVar2 = FUN_054838b8(*(undefined8 *)PTR_DAT_06a83590);
        uVar3 = thunk_FUN_02e78ab8(*(undefined8 *)PTR_DAT_06a7a460);
        FUN_055bae4c(uVar3,uVar2,0);
        return uVar3;
      }
      if (unaff_w19 == 4) {
        lVar5 = *(long *)PTR_DAT_06a7aba8;
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_02e9a04c();
          lVar5 = *(long *)puVar1;
        }
        if (*(char *)(*(long *)(lVar5 + 0xb8) + 8) != '\0') {
          if (*(int *)(lVar5 + 0xe4) == 0) {
            thunk_FUN_02e9a04c();
          }
          FUN_02e3c9cc();
        }
        uVar2 = thunk_FUN_02e78ab8(*(undefined8 *)PTR_DAT_06a33d30);
        uVar3 = *(undefined8 *)PTR_DAT_06a83610;
        uVar4 = 0x80070004;
        goto LAB_055d97a4;
      }
    }
    else if ((int)unaff_w19 < 0xf) {
      if (unaff_w19 == 5) {
        uVar2 = FUN_054838b8(*(undefined8 *)PTR_DAT_06a83580);
        uVar3 = thunk_FUN_02e78ab8(*(undefined8 *)PTR_DAT_06a374b0);
        FUN_05624314(uVar3,uVar2,0);
        return uVar3;
      }
      if (unaff_w19 == 6) {
        uVar3 = FUN_054838b8(*(undefined8 *)PTR_DAT_06a835a8);
        uVar2 = thunk_FUN_02e78ab8(*(undefined8 *)PTR_DAT_06a33d30);
        uVar4 = 0x80070006;
        goto LAB_055d97a4;
      }
    }
    else {
      if (unaff_w19 == 0xf) {
        uVar3 = FUN_054838b8(*(undefined8 *)PTR_DAT_06a835c8);
        uVar2 = thunk_FUN_02e78ab8(*(undefined8 *)PTR_DAT_06a33d30);
        uVar4 = 0x8007000f;
        goto LAB_055d97a4;
      }
      if (unaff_w19 == 0x11) {
        uVar2 = thunk_FUN_02e78ab8(*(undefined8 *)PTR_DAT_06a33d30);
        uVar3 = *(undefined8 *)PTR_DAT_06a835d0;
        uVar4 = 0x11;
        goto LAB_055d95dc;
      }
    }
LAB_055d957c:
    uVar2 = thunk_FUN_02e786f0(*(undefined8 *)PTR_DAT_06a83578,&stack0x0000000c);
    uVar3 = FUN_0548df04(*(undefined8 *)PTR_DAT_06a83598,uVar2);
  }
  else {
    if (0x91 < unaff_w19) {
      if (unaff_w19 == 0xce) {
        uVar2 = FUN_054838b8(*(undefined8 *)PTR_DAT_06a835f8);
        uVar3 = thunk_FUN_02e78ab8(*(undefined8 *)PTR_DAT_06a7a470);
        FUN_055bed04(uVar3,uVar2,0);
        return uVar3;
      }
      if (unaff_w19 == 0x10b) {
        uVar2 = thunk_FUN_02e78ab8(*(undefined8 *)PTR_DAT_06a33d30);
        uVar3 = *(undefined8 *)PTR_DAT_06a835e8;
        uVar4 = 0x10b;
LAB_055d95dc:
        uVar4 = uVar4 | 0x80070000;
        goto LAB_055d97a4;
      }
      if (unaff_w19 == 6000) {
        uVar2 = thunk_FUN_02e78ab8(*(undefined8 *)PTR_DAT_06a33d30);
        uVar4 = 0x80071770;
        uVar3 = *(undefined8 *)PTR_DAT_06a835a0;
        goto LAB_055d97a4;
      }
      goto LAB_055d957c;
    }
    uVar4 = unaff_w19 & 0xff;
    puVar6 = (undefined8 *)PTR_DAT_06a835b0;
    if (uVar4 == 0x52) {
LAB_055d96ac:
      uVar3 = FUN_054838b8(*puVar6);
    }
    else {
      if (uVar4 != 0x57) {
        puVar6 = (undefined8 *)PTR_DAT_06a835e0;
        if (uVar4 != 0x91) goto LAB_055d957c;
        goto LAB_055d96ac;
      }
      lVar7 = *(long *)PTR_DAT_06a33998;
      lVar5 = *(long *)(lVar7 + 0x38);
      if (lVar5 == 0) {
        FUN_02e756e8(lVar7);
        lVar5 = *(long *)(lVar7 + 0x38);
      }
      lVar5 = *(long *)(lVar5 + 0x10);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_02e7568c();
      }
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_02e9a04c();
      }
      lVar5 = *(long *)(*(long *)(lVar7 + 0x38) + 0x10);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_02e7568c();
      }
      uVar3 = FUN_0548df8c(*(undefined8 *)PTR_DAT_06a835b8,**(undefined8 **)(lVar5 + 0xb8),0);
    }
  }
  uVar2 = thunk_FUN_02e78ab8(*(undefined8 *)PTR_DAT_06a33d30);
  uVar4 = unaff_w19 | 0x80070000;
LAB_055d97a4:
  FUN_055bbb10(uVar2,uVar3,uVar4,0);
  return uVar2;
}


