/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalBase$$get_DefaultReferenceMappings
ENTRY_POINT: 05dd47a8
PROGRAM: vandalizer-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_12;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8
Newtonsoft_Json_Serialization_JsonSerializerInternalBase__get_DefaultReferenceMappings(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  uint unaff_w21;
  
                    /* try { // try from 05dd47a8 to 05ed488f has its CatchHandler @ 05dd47a8
                       catch() { ... } // from try @ 05dd47a8 with catch @ 05dd47a8
                       catch() { ... } // from try @ 05dd4b24 with catch @ 05dd47a8
                       catch() { ... } // from try @ 05dd4b6c with catch @ 05dd47a8 */
  FUN_031f20f4();
  FUN_031f20f4(PTR_DAT_075eb8b0);
  FUN_031f20f4(PTR_DAT_075eb8b8);
  FUN_031f20f4(PTR_DAT_075eb8c0);
  FUN_031f20f4(PTR_DAT_075eb8c8);
  FUN_031f20f4(PTR_DAT_075eb8d0);
  FUN_031f20f4(PTR_DAT_075eb8d8);
  FUN_031f20f4(PTR_DAT_075eb8e0);
  *(undefined1 *)(unaff_x20 + 0x398) = 1;
  puVar1 = PTR_DAT_075e2eb0;
  if ((int)unaff_w21 < 0x51) {
    if ((int)unaff_w21 < 0x12) {
      switch(unaff_w21) {
      case 2:
        uVar2 = FUN_05c7ecc4(*(undefined8 *)PTR_DAT_075eb8d8);
        uVar3 = thunk_FUN_0322f148(*(undefined8 *)PTR_DAT_075e2730);
        FUN_05db7fac(uVar3,uVar2);
        return uVar3;
      case 3:
        uVar2 = FUN_05c7ecc4(*(undefined8 *)PTR_DAT_075eb860);
        uVar3 = thunk_FUN_0322f148(*(undefined8 *)PTR_DAT_075e2728);
        Newtonsoft_Json_Utilities_ConvertUtils__TryConvert(uVar3,uVar2,0);
        return uVar3;
      case 4:
        lVar5 = *(long *)PTR_DAT_075e2eb0;
        if (*(int *)(lVar5 + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
          lVar5 = *(long *)puVar1;
        }
        if (*(char *)(*(long *)(lVar5 + 0xb8) + 8) != '\0') {
          if (*(int *)(lVar5 + 0xe4) == 0) {
            Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
          }
          FUN_031f20a4();
        }
        uVar2 = thunk_FUN_0322f148(*(undefined8 *)PTR_DAT_0759e018);
        uVar3 = *(undefined8 *)PTR_DAT_075eb8e0;
        uVar4 = 0x80070004;
        break;
      case 5:
        uVar2 = FUN_05c7ecc4(*(undefined8 *)PTR_DAT_075eb850);
        uVar3 = thunk_FUN_0322f148(*(undefined8 *)PTR_DAT_075b2bf0);
        FUN_05e1fec4(uVar3,uVar2,0);
        return uVar3;
      case 6:
        uVar3 = FUN_05c7ecc4(*(undefined8 *)PTR_DAT_075eb878);
        uVar2 = thunk_FUN_0322f148(*(undefined8 *)PTR_DAT_0759e018);
        uVar4 = 0x80070006;
        break;
      default:
        goto switchD_05dd4938_caseD_7;
      case 0xf:
        uVar3 = FUN_05c7ecc4(*(undefined8 *)PTR_DAT_075eb898);
        uVar2 = thunk_FUN_0322f148(*(undefined8 *)PTR_DAT_0759e018);
        uVar4 = 0x8007000f;
        break;
      case 0x11:
        uVar2 = thunk_FUN_0322f148(*(undefined8 *)PTR_DAT_0759e018);
        uVar3 = *(undefined8 *)PTR_DAT_075eb8a0;
        uVar4 = 0x11;
LAB_05dd4dd4:
        uVar4 = uVar4 | 0x80070000;
      }
      goto LAB_05dd4c28;
    }
    if ((int)unaff_w21 < 0x21) {
      if (unaff_w21 != 0x1d) {
        if (unaff_w21 == 0x20) {
          uVar3 = FUN_05c7ecc4(*(undefined8 *)PTR_DAT_075eb890);
          uVar2 = thunk_FUN_0322f148(*(undefined8 *)PTR_DAT_0759e018);
          uVar4 = 0x80070020;
          goto LAB_05dd4c28;
        }
        goto switchD_05dd4938_caseD_7;
      }
      uVar3 = FUN_05c7ecc4(*(undefined8 *)PTR_DAT_075eb8a8);
      uVar2 = thunk_FUN_0322f148(*(undefined8 *)PTR_DAT_0759e018);
      uVar4 = 0x1d;
    }
    else if (unaff_w21 == 0x21) {
      uVar3 = FUN_05c7ecc4(*(undefined8 *)PTR_DAT_075eb8d0);
      uVar2 = thunk_FUN_0322f148(*(undefined8 *)PTR_DAT_0759e018);
      uVar4 = 0x21;
    }
    else if (unaff_w21 == 0x27) {
      uVar3 = FUN_05c7ecc4(*(undefined8 *)PTR_DAT_075eb8c0);
      uVar2 = thunk_FUN_0322f148(*(undefined8 *)PTR_DAT_0759e018);
      uVar4 = 0x27;
    }
    else {
      if (unaff_w21 != 0x50) goto switchD_05dd4938_caseD_7;
                    /* try { // try from 05dd4890 to 05ed48ab has its CatchHandler @ 05dd48dc */
      uVar3 = FUN_05c7ecc4(*(undefined8 *)PTR_DAT_075eb858);
      uVar2 = thunk_FUN_0322f148(*(undefined8 *)PTR_DAT_0759e018);
      uVar4 = 0x50;
    }
  }
  else {
    if (0x91 < (int)unaff_w21) {
      if (unaff_w21 == 0xce) {
        uVar2 = FUN_05c7ecc4(*(undefined8 *)PTR_DAT_075eb8c8);
        uVar3 = thunk_FUN_0322f148(*(undefined8 *)PTR_DAT_075e2738);
        FUN_05dbbba0(uVar3,uVar2,0);
        return uVar3;
      }
      if (unaff_w21 == 0x10b) {
        uVar2 = thunk_FUN_0322f148(*(undefined8 *)PTR_DAT_0759e018);
        uVar3 = *(undefined8 *)PTR_DAT_075eb8b8;
        uVar4 = 0x10b;
        goto LAB_05dd4dd4;
      }
      if (unaff_w21 == 6000) {
        uVar2 = thunk_FUN_0322f148(*(undefined8 *)PTR_DAT_0759e018);
        uVar4 = 0x80071770;
        uVar3 = *(undefined8 *)PTR_DAT_075eb870;
        goto LAB_05dd4c28;
      }
switchD_05dd4938_caseD_7:
      uVar2 = thunk_FUN_0322ed78(*(undefined8 *)PTR_DAT_075eb848,&stack0x0000000c);
      uVar3 = FUN_05c89614(*(undefined8 *)PTR_DAT_075eb868,uVar2);
      uVar2 = thunk_FUN_0322f148(*(undefined8 *)PTR_DAT_0759e018);
      uVar4 = unaff_w21 | 0x80070000;
      goto LAB_05dd4c28;
    }
    if (unaff_w21 == 0x52) {
      uVar3 = FUN_05c7ecc4(*(undefined8 *)PTR_DAT_075eb880);
      uVar2 = thunk_FUN_0322f148(*(undefined8 *)PTR_DAT_0759e018);
      uVar4 = 0x52;
    }
    else if (unaff_w21 == 0x57) {
      lVar6 = *(long *)PTR_DAT_075a41d0;
      lVar5 = *(long *)(lVar6 + 0x38);
      if (lVar5 == 0) {
        FUN_0322bf50(lVar6);
        lVar5 = *(long *)(lVar6 + 0x38);
      }
      lVar5 = *(long *)(lVar5 + 0x10);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_0322bef4();
      }
      if (*(int *)(lVar5 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      }
      lVar5 = *(long *)(*(long *)(lVar6 + 0x38) + 0x10);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_0322bef4();
      }
      uVar3 = FUN_05c8969c(*(undefined8 *)PTR_DAT_075eb888,**(undefined8 **)(lVar5 + 0xb8),0);
      uVar2 = thunk_FUN_0322f148(*(undefined8 *)PTR_DAT_0759e018);
      uVar4 = 0x57;
    }
    else {
      if (unaff_w21 != 0x91) goto switchD_05dd4938_caseD_7;
      uVar3 = FUN_05c7ecc4(*(undefined8 *)PTR_DAT_075eb8b0);
      uVar2 = thunk_FUN_0322f148(*(undefined8 *)PTR_DAT_0759e018);
      uVar4 = 0x91;
    }
  }
  uVar4 = uVar4 | 0x80070000;
LAB_05dd4c28:
  FUN_05db849c(uVar2,uVar3,uVar4,0);
  return uVar2;
}


