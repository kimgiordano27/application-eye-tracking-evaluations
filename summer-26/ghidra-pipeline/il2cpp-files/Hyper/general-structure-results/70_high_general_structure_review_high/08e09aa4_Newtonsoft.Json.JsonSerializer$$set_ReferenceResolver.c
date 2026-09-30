/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$set_ReferenceResolver
ENTRY_POINT: 08e09aa4
PROGRAM: Hyper-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializer__set_ReferenceResolver(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  long unaff_x19;
  long lVar6;
  undefined8 uVar7;
  undefined8 *unaff_x22;
  long *unaff_x23;
  long *unaff_x24;
  
  uVar7 = *param_1;
  uVar2 = thunk_FUN_04983f60();
  FUN_08cc3ad0(uVar2,uVar7,*(undefined8 *)PTR_DAT_0ac6a4b8,0);
  puVar3 = (undefined8 *)(*(long *)(*unaff_x24 + 0xb8) + 0x10);
  *puVar3 = uVar2;
  thunk_FUN_049ee3d8(puVar3,uVar2);
  puVar1 = PTR_DAT_0ac09e20;
  if (*(int *)(*unaff_x23 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  uVar2 = FUN_09b8bbb0(uVar2,0);
  uVar7 = FUN_08aa1c24();
  FUN_05b466fc(uVar2,uVar7,*(undefined8 *)puVar1);
  if ((*(long *)(unaff_x19 + 0x48) != 0) &&
     (lVar4 = FUN_0a178414(*(long *)(unaff_x19 + 0x48),0), lVar4 != 0)) {
    FUN_0a17ba14(lVar4,0,0);
    lVar4 = *unaff_x24;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_049a583c();
      lVar4 = *unaff_x24;
    }
    puVar3 = *(undefined8 **)(lVar4 + 0xb8);
    lVar6 = puVar3[3];
    if (lVar6 == 0) {
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_049a583c();
        puVar3 = *(undefined8 **)(*unaff_x24 + 0xb8);
      }
      uVar2 = *puVar3;
      lVar6 = thunk_FUN_04983f60(*unaff_x22);
      FUN_08cc3ad0(lVar6,uVar2,*(undefined8 *)PTR_DAT_0ac6a4c0,0);
      plVar5 = (long *)(*(long *)(*unaff_x24 + 0xb8) + 0x18);
      *plVar5 = lVar6;
      thunk_FUN_049ee3d8(plVar5,lVar6);
    }
    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    uVar2 = FUN_09b8bbb0(lVar6,0);
    uVar7 = FUN_08aa1c24();
    FUN_05b466fc(uVar2,uVar7,*(undefined8 *)puVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


