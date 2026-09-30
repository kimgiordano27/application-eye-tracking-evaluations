/*
FUNCTION_NAME: Meta.WitAi.Json.JsonConvert$$DeserializeObjectAsync<object>
ENTRY_POINT: 04ab7e40
PROGRAM: m3ar-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


long Meta_WitAi_Json_JsonConvert__DeserializeObjectAsync<object>(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  int in_w11;
  long unaff_x19;
  long lVar5;
  long unaff_x20;
  undefined8 uVar6;
  long unaff_x25;
  
  if (in_w11 == 0) {
    thunk_FUN_0408f364(param_1);
  }
  FUN_074f3c94();
  if (unaff_x20 != 0) {
    lVar2 = FUN_0729d440();
    puVar1 = PTR_DAT_08f8b170;
    if (lVar2 == 0) {
      lVar2 = *(long *)PTR_DAT_08f8b170;
      if (*(int *)(lVar2 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        lVar2 = *(long *)puVar1;
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x10);
      uVar6 = **(undefined8 **)(unaff_x19 + 0x38);
      if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_0408f364(*(long *)(unaff_x25 + 0xe0));
      }
      uVar6 = FUN_074f3c94(uVar6,0);
      if (lVar2 == 0) goto LAB_04ab82b0;
      lVar2 = FUN_0729d440(lVar2,uVar6,0,0);
    }
    uVar6 = **(undefined8 **)(unaff_x19 + 0x38);
    if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    uVar6 = FUN_074f3c94(uVar6,0);
    if (*(int *)(*(long *)PTR_DAT_08f8b178 + 0xe4) == 0) {
      thunk_FUN_0408f364(*(long *)PTR_DAT_08f8b178);
    }
    plVar3 = (long *)FUN_072abbf8(lVar2,uVar6,1,1,0,0);
    lVar2 = 0;
    if (plVar3 != (long *)0x0) {
      uVar6 = (**(code **)(*plVar3 + 0xa08))(plVar3,*(undefined8 *)(*plVar3 + 0xa10));
      lVar4 = FUN_072bb7e0(uVar6,0,0);
      lVar5 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_0406aaec(lVar5);
      }
      if (lVar4 == 0) {
        lVar2 = 0;
      }
      else {
        lVar2 = thunk_FUN_0406ddbc(lVar4,lVar5);
        if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04031c0c(lVar4,lVar5);
        }
      }
    }
    return lVar2;
  }
LAB_04ab82b0:
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


