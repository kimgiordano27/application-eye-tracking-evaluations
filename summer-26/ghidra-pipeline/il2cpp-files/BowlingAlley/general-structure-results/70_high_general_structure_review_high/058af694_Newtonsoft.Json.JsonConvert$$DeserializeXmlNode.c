/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$DeserializeXmlNode
ENTRY_POINT: 058af694
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_12;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_JsonConvert__DeserializeXmlNode(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  uint unaff_w21;
  
  thunk_FUN_032e1da0(PTR_DAT_07296d10);
  thunk_FUN_032e1da0(PTR_DAT_07296d18);
  thunk_FUN_032e1da0(PTR_DAT_07296d20);
  thunk_FUN_032e1da0(PTR_DAT_07296d28);
  thunk_FUN_032e1da0(PTR_DAT_07296d30);
  thunk_FUN_032e1da0(PTR_DAT_07296d38);
  thunk_FUN_032e1da0(PTR_DAT_07296d40);
  thunk_FUN_032e1da0(PTR_DAT_07296d48);
  thunk_FUN_032e1da0(PTR_DAT_07296d50);
  thunk_FUN_032e1da0(PTR_DAT_07296d58);
  thunk_FUN_032e1da0(PTR_DAT_07296d60);
  thunk_FUN_032e1da0(PTR_DAT_07296d68);
  thunk_FUN_032e1da0(PTR_DAT_07296d70);
  thunk_FUN_032e1da0(PTR_DAT_07296d78);
  *(undefined1 *)(unaff_x20 + 0xfa5) = 1;
  puVar1 = PTR_DAT_072909f0;
  if ((int)unaff_w21 < 0x51) {
    if ((int)unaff_w21 < 0x12) {
      switch(unaff_w21) {
      case 2:
        uVar2 = FUN_057a25c4(*(undefined8 *)PTR_DAT_07296d70);
        uVar3 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_0727ed90);
        FUN_0586dec0(uVar3,uVar2);
        return uVar3;
      case 3:
        uVar2 = FUN_057a25c4(*(undefined8 *)PTR_DAT_07296cf8);
        uVar3 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_07290250);
        FUN_0586d6e4(uVar3,uVar2,0);
        return uVar3;
      case 4:
        lVar5 = *(long *)PTR_DAT_072909f0;
        if (*(int *)(lVar5 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
          lVar5 = *(long *)puVar1;
        }
        if (*(char *)(*(long *)(lVar5 + 0xb8) + 8) != '\0') {
          if (*(int *)(lVar5 + 0xe0) == 0) {
            thunk_FUN_032cd7c0();
          }
          FUN_03298538();
        }
        uVar2 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_0727ddb8);
        uVar3 = *(undefined8 *)PTR_DAT_07296d78;
        uVar4 = 0x80070004;
        break;
      case 5:
        uVar2 = FUN_057a25c4(*(undefined8 *)PTR_DAT_07296ce8);
        uVar3 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_07290260);
        FUN_05941d10(uVar3,uVar2,0);
        return uVar3;
      case 6:
        uVar3 = FUN_057a25c4(*(undefined8 *)PTR_DAT_07296d10);
        uVar2 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_0727ddb8);
        uVar4 = 0x80070006;
        break;
      default:
        goto switchD_058af874_caseD_7;
      case 0xf:
        uVar3 = FUN_057a25c4(*(undefined8 *)PTR_DAT_07296d30);
        uVar2 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_0727ddb8);
        uVar4 = 0x8007000f;
        break;
      case 0x11:
        uVar2 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_0727ddb8);
        uVar3 = *(undefined8 *)PTR_DAT_07296d38;
        uVar4 = 0x11;
LAB_058afd10:
        uVar4 = uVar4 | 0x80070000;
      }
      goto LAB_058afb64;
    }
    if ((int)unaff_w21 < 0x21) {
      if (unaff_w21 != 0x1d) {
        if (unaff_w21 == 0x20) {
          uVar3 = FUN_057a25c4(*(undefined8 *)PTR_DAT_07296d28);
          uVar2 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_0727ddb8);
          uVar4 = 0x80070020;
          goto LAB_058afb64;
        }
        goto switchD_058af874_caseD_7;
      }
      uVar3 = FUN_057a25c4(*(undefined8 *)PTR_DAT_07296d40);
      uVar2 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_0727ddb8);
      uVar4 = 0x1d;
    }
    else if (unaff_w21 == 0x21) {
      uVar3 = FUN_057a25c4(*(undefined8 *)PTR_DAT_07296d68);
      uVar2 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_0727ddb8);
      uVar4 = 0x21;
    }
    else if (unaff_w21 == 0x27) {
      uVar3 = FUN_057a25c4(*(undefined8 *)PTR_DAT_07296d58);
      uVar2 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_0727ddb8);
      uVar4 = 0x27;
    }
    else {
      if (unaff_w21 != 0x50) goto switchD_058af874_caseD_7;
      uVar3 = FUN_057a25c4(*(undefined8 *)PTR_DAT_07296cf0);
      uVar2 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_0727ddb8);
      uVar4 = 0x50;
    }
  }
  else {
    if (0x91 < (int)unaff_w21) {
      if (unaff_w21 == 0xce) {
        uVar2 = FUN_057a25c4(*(undefined8 *)PTR_DAT_07296d60);
        uVar3 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_07290258);
        FUN_05871a1c(uVar3,uVar2,0);
        return uVar3;
      }
      if (unaff_w21 == 0x10b) {
        uVar2 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_0727ddb8);
        uVar3 = *(undefined8 *)PTR_DAT_07296d50;
        uVar4 = 0x10b;
        goto LAB_058afd10;
      }
      if (unaff_w21 == 6000) {
        uVar2 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_0727ddb8);
        uVar4 = 0x80071770;
        uVar3 = *(undefined8 *)PTR_DAT_07296d08;
        goto LAB_058afb64;
      }
switchD_058af874_caseD_7:
      uVar2 = thunk_FUN_032a52d0(*(undefined8 *)PTR_DAT_07296ce0,&stack0x0000000c);
      uVar3 = FUN_057ab61c(*(undefined8 *)PTR_DAT_07296d00,uVar2);
      uVar2 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_0727ddb8);
      uVar4 = unaff_w21 | 0x80070000;
      goto LAB_058afb64;
    }
    if (unaff_w21 == 0x52) {
      uVar3 = FUN_057a25c4(*(undefined8 *)PTR_DAT_07296d18);
      uVar2 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_0727ddb8);
      uVar4 = 0x52;
    }
    else if (unaff_w21 == 0x57) {
      lVar6 = *(long *)PTR_DAT_0727c9e8;
      lVar5 = *(long *)(lVar6 + 0x38);
      if (lVar5 == 0) {
        FUN_03293514(lVar6);
        lVar5 = *(long *)(lVar6 + 0x38);
      }
      lVar5 = *(long *)(lVar5 + 0x10);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_032934b8();
      }
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      lVar5 = *(long *)(*(long *)(lVar6 + 0x38) + 0x10);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_032934b8();
      }
      uVar3 = FUN_057ab6a4(*(undefined8 *)PTR_DAT_07296d20,**(undefined8 **)(lVar5 + 0xb8),0);
      uVar2 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_0727ddb8);
      uVar4 = 0x57;
    }
    else {
      if (unaff_w21 != 0x91) goto switchD_058af874_caseD_7;
      uVar3 = FUN_057a25c4(*(undefined8 *)PTR_DAT_07296d48);
      uVar2 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_0727ddb8);
      uVar4 = 0x91;
    }
  }
  uVar4 = uVar4 | 0x80070000;
LAB_058afb64:
  FUN_0586e3d0(uVar2,uVar3,uVar4,0);
  return uVar2;
}


