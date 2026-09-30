/*
FUNCTION_NAME: Meta.WitAi.Json.JsonConvert$$SerializeObject<object>
ENTRY_POINT: 04ab8600
PROGRAM: m3ar-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


long Meta_WitAi_Json_JsonConvert__SerializeObject<object>(undefined8 *param_1)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  int in_w9;
  long unaff_x19;
  long lVar6;
  uint unaff_w20;
  uint unaff_w21;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x25;
  
  uVar7 = *param_1;
  if (in_w9 == 0) {
    thunk_FUN_0408f364();
  }
  uVar7 = FUN_074f3c94(uVar7,0);
  uVar7 = FUN_04a8d7e4(uVar7,*(undefined8 *)PTR_DAT_08f8b168);
  lVar5 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x18);
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_0406aaec(lVar5);
  }
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_0408f364(lVar5);
  }
  lVar5 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x18);
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_0406aaec();
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
  if (lVar5 == 0) {
    lVar5 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x18);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_0406aaec();
    }
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    lVar5 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x18);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_0406aaec();
    }
    uVar8 = **(undefined8 **)(lVar5 + 0xb8);
    lVar5 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08f8b190);
    FUN_053442e0(lVar5,uVar8,*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x20),0);
    lVar3 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x18);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0406aaec();
    }
    *(long *)(*(long *)(lVar3 + 0xb8) + 8) = lVar5;
    if ((*(ushort *)(*(long *)(*(long *)(unaff_x19 + 0x38) + 0x18) + 0x135) & 1) == 0) {
      FUN_0406aaec();
    }
  }
  uVar2 = FUN_04ac8d8c(uVar7,lVar5,*(undefined8 *)PTR_DAT_08f8b180);
  puVar1 = PTR_DAT_08f8b170;
  lVar5 = *(long *)PTR_DAT_08f8b170;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_0408f364();
    lVar5 = *(long *)puVar1;
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x10);
  uVar7 = **(undefined8 **)(unaff_x19 + 0x38);
  if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_0408f364(*(long *)(unaff_x25 + 0xe0));
  }
  uVar7 = FUN_074f3c94(uVar7,0);
  if (lVar5 != 0) {
    uVar7 = FUN_0729d440(lVar5,uVar7,(uVar2 | unaff_w21) & 1,0);
    uVar8 = **(undefined8 **)(unaff_x19 + 0x38);
    if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    uVar8 = FUN_074f3c94(uVar8,0);
    if (*(int *)(*(long *)PTR_DAT_08f8b178 + 0xe4) == 0) {
      thunk_FUN_0408f364(*(long *)PTR_DAT_08f8b178);
    }
    plVar4 = (long *)FUN_072abbf8(uVar7,uVar8,unaff_w20 & 1,0,(uVar2 | unaff_w21) & 1,0);
    lVar5 = 0;
    if (plVar4 != (long *)0x0) {
      uVar7 = (**(code **)(*plVar4 + 0xa08))(plVar4,*(undefined8 *)(*plVar4 + 0xa10));
      lVar3 = FUN_072bb7e0(uVar7,0,0);
      lVar6 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_0406aaec(lVar6);
      }
      if (lVar3 == 0) {
        lVar5 = 0;
      }
      else {
        lVar5 = thunk_FUN_0406ddbc(lVar3,lVar6);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04031c0c(lVar3,lVar6);
        }
      }
    }
    return lVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


