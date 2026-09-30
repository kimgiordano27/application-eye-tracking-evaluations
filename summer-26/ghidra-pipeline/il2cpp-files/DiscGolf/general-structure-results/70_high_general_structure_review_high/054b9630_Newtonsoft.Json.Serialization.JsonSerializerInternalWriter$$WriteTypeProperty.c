/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$WriteTypeProperty
ENTRY_POINT: 054b9630
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_15;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__WriteTypeProperty(void)

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
  
  FUN_02d965b8();
  FUN_02d965b8(PTR_DAT_06a21920);
  FUN_02d965b8(PTR_DAT_06a21928);
  FUN_02d965b8(PTR_DAT_06a21930);
  FUN_02d965b8(PTR_DAT_06a21938);
  FUN_02d965b8(PTR_DAT_06a21940);
  FUN_02d965b8(PTR_DAT_06a21948);
  FUN_02d965b8(PTR_DAT_06a21950);
  FUN_02d965b8(PTR_DAT_06a21958);
  FUN_02d965b8(PTR_DAT_06a21960);
  FUN_02d965b8(PTR_DAT_06a21968);
  FUN_02d965b8(PTR_DAT_06a21970);
  FUN_02d965b8(PTR_DAT_06a21978);
  FUN_02d965b8(PTR_DAT_06a21980);
  *(undefined1 *)(unaff_x21 + 0xcff) = 1;
  puVar1 = PTR_DAT_06a18a98;
                    /* try { // try from 054b96d8 to 055b96ff has its CatchHandler @ 054b98b4 */
  if ((int)unaff_w19 < 0x51) {
    if (0x11 < (int)unaff_w19) {
                    /* try { // try from 054b973c to 055b9763 has its CatchHandler @ 054b98b0 */
      if ((int)unaff_w19 < 0x21) {
        if (unaff_w19 != 0x1d) {
          if (unaff_w19 == 0x20) {
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 054b984c with catch @ 054b98a8
                        */
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 054b97a8 with catch @ 054b98ac
                        */
            uVar3 = FUN_0536388c(*(undefined8 *)PTR_DAT_06a21930);
            uVar2 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_06a18320);
            uVar4 = 0x80070020;
            goto LAB_054b9b48;
          }
          goto LAB_054b9920;
        }
        uVar3 = FUN_0536388c(*(undefined8 *)PTR_DAT_06a21948);
        uVar2 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_06a18320);
        uVar4 = 0x1d;
      }
      else if (unaff_w19 == 0x21) {
        uVar3 = FUN_0536388c(*(undefined8 *)PTR_DAT_06a21970);
        uVar2 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_06a18320);
        uVar4 = 0x21;
      }
      else if (unaff_w19 == 0x27) {
        uVar3 = FUN_0536388c(*(undefined8 *)PTR_DAT_06a21960);
        uVar2 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_06a18320);
        uVar4 = 0x27;
      }
      else {
        if (unaff_w19 != 0x50) goto LAB_054b9920;
        uVar3 = FUN_0536388c(*(undefined8 *)PTR_DAT_06a218f8);
        uVar2 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_06a18320);
        uVar4 = 0x50;
      }
      uVar4 = uVar4 | 0x80070000;
      goto LAB_054b9b48;
    }
    if ((int)unaff_w19 < 5) {
      if (unaff_w19 == 2) {
        uVar2 = FUN_0536388c(*(undefined8 *)PTR_DAT_06a21978);
        uVar3 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_06a18318);
        FUN_0549b780(uVar3,uVar2);
        return uVar3;
      }
      if (unaff_w19 == 3) {
        uVar2 = FUN_0536388c(*(undefined8 *)PTR_DAT_06a21900);
        uVar3 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_06a18310);
        FUN_0549afa4(uVar3,uVar2,0);
        return uVar3;
      }
      if (unaff_w19 == 4) {
        lVar5 = *(long *)PTR_DAT_06a18a98;
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_02df485c();
                    /* try { // try from 054b984c to 055b984f has its CatchHandler @ 054b98a8 */
          lVar5 = *(long *)puVar1;
        }
                    /* try { // try from 054b9850 to 055b98cf has its CatchHandler @ 054b95a8 */
        if (*(char *)(*(long *)(lVar5 + 0xb8) + 8) != '\0') {
          if (*(int *)(lVar5 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          FUN_02d96568();
        }
        uVar2 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_06a18320);
        uVar3 = *(undefined8 *)PTR_DAT_06a21980;
        uVar4 = 0x80070004;
        goto LAB_054b9b48;
      }
    }
    else if ((int)unaff_w19 < 0xf) {
      if (unaff_w19 == 5) {
        uVar2 = FUN_0536388c(*(undefined8 *)PTR_DAT_06a218f0);
        uVar3 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_06a18330);
        FUN_05506a50(uVar3,uVar2,0);
        return uVar3;
      }
      if (unaff_w19 == 6) {
        uVar3 = FUN_0536388c(*(undefined8 *)PTR_DAT_06a21918);
        uVar2 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_06a18320);
        uVar4 = 0x80070006;
        goto LAB_054b9b48;
      }
    }
    else {
      if (unaff_w19 == 0xf) {
        uVar3 = FUN_0536388c(*(undefined8 *)PTR_DAT_06a21938);
        uVar2 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_06a18320);
                    /* try { // try from 054b9c28 to 055b9db7 has its CatchHandler @ 054b9c28
                       catch() { ... } // from try @ 054b9c28 with catch @ 054b9c28
                       catch() { ... } // from try @ 054ba264 with catch @ 054b9c28
                       catch() { ... } // from try @ 054ba2a4 with catch @ 054b9c28
                       catch() { ... } // from try @ 054ba2d0 with catch @ 054b9c28
                       catch() { ... } // from try @ 054ba3a4 with catch @ 054b9c28
                       catch() { ... } // from try @ 054ba45c with catch @ 054b9c28
                       catch() { ... } // from try @ 054ba46c with catch @ 054b9c28
                       catch() { ... } // from try @ 054ba4a0 with catch @ 054b9c28
                       catch() { ... } // from try @ 054ba4f0 with catch @ 054b9c28
                       catch() { ... } // from try @ 054ba570 with catch @ 054b9c28 */
        uVar4 = 0x8007000f;
        goto LAB_054b9b48;
      }
      if (unaff_w19 == 0x11) {
        uVar2 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_06a18320);
        uVar3 = *(undefined8 *)PTR_DAT_06a21940;
        uVar4 = 0x11;
        goto LAB_054b9980;
      }
    }
LAB_054b9920:
    uVar2 = thunk_FUN_02dd2d7c(*(undefined8 *)PTR_DAT_06a218e8,&stack0x0000000c);
    uVar3 = FUN_0536e0dc(*(undefined8 *)PTR_DAT_06a21908,uVar2);
  }
  else {
    if (0x91 < unaff_w19) {
      if (unaff_w19 == 0xce) {
        uVar2 = FUN_0536388c(*(undefined8 *)PTR_DAT_06a21968);
        uVar3 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_06a18328);
        FUN_0549f394(uVar3,uVar2,0);
        return uVar3;
      }
      if (unaff_w19 == 0x10b) {
        uVar2 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_06a18320);
        uVar3 = *(undefined8 *)PTR_DAT_06a21958;
        uVar4 = 0x10b;
LAB_054b9980:
        uVar4 = uVar4 | 0x80070000;
        goto LAB_054b9b48;
      }
      if (unaff_w19 == 6000) {
        uVar2 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_06a18320);
        uVar4 = 0x80071770;
        uVar3 = *(undefined8 *)PTR_DAT_06a21910;
        goto LAB_054b9b48;
      }
      goto LAB_054b9920;
    }
    uVar4 = unaff_w19 & 0xff;
    puVar6 = (undefined8 *)PTR_DAT_06a21920;
    if (uVar4 == 0x52) {
LAB_054b9a50:
      uVar3 = FUN_0536388c(*puVar6);
    }
    else {
      if (uVar4 != 0x57) {
                    /* try { // try from 054b97a8 to 055b97ab has its CatchHandler @ 054b98ac */
        puVar6 = (undefined8 *)PTR_DAT_06a21950;
                    /* try { // try from 054b97ac to 055b984b has its CatchHandler @ 054b95a8 */
        if (uVar4 != 0x91) goto LAB_054b9920;
        goto LAB_054b9a50;
      }
      lVar7 = *(long *)PTR_DAT_06a01b98;
      lVar5 = *(long *)(lVar7 + 0x38);
      if (lVar5 == 0) {
        FUN_02dcfd74(lVar7);
        lVar5 = *(long *)(lVar7 + 0x38);
      }
      lVar5 = *(long *)(lVar5 + 0x10);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_02dcfd18();
      }
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      lVar5 = *(long *)(*(long *)(lVar7 + 0x38) + 0x10);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_02dcfd18();
      }
      uVar3 = FUN_0536e164(*(undefined8 *)PTR_DAT_06a21928,**(undefined8 **)(lVar5 + 0xb8),0);
    }
  }
  uVar2 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_06a18320);
  uVar4 = unaff_w19 | 0x80070000;
LAB_054b9b48:
  FUN_0549bc68(uVar2,uVar3,uVar4,0);
  return uVar2;
}


