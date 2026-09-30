/*
FUNCTION_NAME: Meta.WitAi.Json.JsonConvert$$SerializeToken<WitEntityKeywordInfo>
ENTRY_POINT: 04ab8be4
PROGRAM: m3ar-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


long Meta_WitAi_Json_JsonConvert__SerializeToken<WitEntityKeywordInfo>(void)

{
  undefined *puVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long unaff_x19;
  long lVar7;
  uint unaff_w20;
  uint unaff_w21;
  undefined8 uVar8;
  long unaff_x25;
  
  uVar3 = FUN_074f3c94();
  uVar3 = FUN_04a8d7e4(uVar3,*(undefined8 *)PTR_DAT_08f8b168);
  lVar6 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x18);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0406aaec(lVar6);
  }
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_0408f364(lVar6);
  }
  lVar6 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x18);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0406aaec();
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
  if (lVar6 == 0) {
    lVar6 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x18);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_0406aaec();
    }
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    lVar6 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x18);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_0406aaec();
    }
    uVar8 = **(undefined8 **)(lVar6 + 0xb8);
    lVar6 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08f8b190);
    FUN_053442e0(lVar6,uVar8,*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x20),0);
    lVar4 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x18);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0406aaec();
    }
    *(long *)(*(long *)(lVar4 + 0xb8) + 8) = lVar6;
    if ((*(ushort *)(*(long *)(*(long *)(unaff_x19 + 0x38) + 0x18) + 0x135) & 1) == 0) {
      FUN_0406aaec();
    }
  }
  uVar2 = FUN_04ac8d8c(uVar3,lVar6,*(undefined8 *)PTR_DAT_08f8b180);
  puVar1 = PTR_DAT_08f8b170;
  lVar6 = *(long *)PTR_DAT_08f8b170;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_0408f364();
    lVar6 = *(long *)puVar1;
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x10);
  uVar3 = **(undefined8 **)(unaff_x19 + 0x38);
  if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_0408f364(*(long *)(unaff_x25 + 0xe0));
  }
  uVar3 = FUN_074f3c94(uVar3,0);
  if (lVar6 != 0) {
    uVar3 = FUN_0729d440(lVar6,uVar3,(uVar2 | unaff_w21) & 1,0);
    uVar8 = **(undefined8 **)(unaff_x19 + 0x38);
    if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    uVar8 = FUN_074f3c94(uVar8,0);
    if (*(int *)(*(long *)PTR_DAT_08f8b178 + 0xe4) == 0) {
      thunk_FUN_0408f364(*(long *)PTR_DAT_08f8b178);
    }
    plVar5 = (long *)FUN_072abbf8(uVar3,uVar8,unaff_w20 & 1,0,(uVar2 | unaff_w21) & 1,0);
    lVar6 = 0;
    if (plVar5 != (long *)0x0) {
      uVar3 = (**(code **)(*plVar5 + 0xa08))(plVar5,*(undefined8 *)(*plVar5 + 0xa10));
      lVar4 = FUN_072bb7e0(uVar3,0,0);
      lVar7 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
      if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_0406aaec(lVar7);
      }
      if (lVar4 == 0) {
        lVar6 = 0;
      }
      else {
        lVar6 = thunk_FUN_0406ddbc(lVar4,lVar7);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04031c0c(lVar4,lVar7);
        }
      }
    }
    return lVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


