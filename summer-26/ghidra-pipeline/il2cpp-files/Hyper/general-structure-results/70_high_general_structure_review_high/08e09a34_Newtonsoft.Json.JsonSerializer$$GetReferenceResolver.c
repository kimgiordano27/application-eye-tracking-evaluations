/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$GetReferenceResolver
ENTRY_POINT: 08e09a34
PROGRAM: Hyper-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializer__GetReferenceResolver(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long unaff_x19;
  long lVar7;
  long lVar8;
  undefined8 *unaff_x22;
  long *unaff_x24;
  
  lVar7 = *(long *)(unaff_x19 + 0x28);
  uVar3 = thunk_FUN_04983f60();
  FUN_08cc3ad0();
  if (lVar7 != 0) {
    FUN_05291894(lVar7,uVar3,0);
    lVar7 = *unaff_x24;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_049a583c();
      lVar7 = *unaff_x24;
    }
    puVar2 = PTR_DAT_0ac0a0f8;
    puVar6 = *(undefined8 **)(lVar7 + 0xb8);
    lVar8 = puVar6[2];
    if (lVar8 == 0) {
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_049a583c();
        puVar6 = *(undefined8 **)(*unaff_x24 + 0xb8);
      }
      uVar3 = *puVar6;
      lVar8 = thunk_FUN_04983f60(*unaff_x22);
      FUN_08cc3ad0(lVar8,uVar3,*(undefined8 *)PTR_DAT_0ac6a4b8,0);
      plVar4 = (long *)(*(long *)(*unaff_x24 + 0xb8) + 0x10);
      *plVar4 = lVar8;
      thunk_FUN_049ee3d8(plVar4,lVar8);
    }
    puVar1 = PTR_DAT_0ac09e20;
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    uVar3 = FUN_09b8bbb0(lVar8,0);
    uVar5 = FUN_08aa1c24();
    FUN_05b466fc(uVar3,uVar5,*(undefined8 *)puVar1);
    if ((*(long *)(unaff_x19 + 0x48) != 0) &&
       (lVar7 = FUN_0a178414(*(long *)(unaff_x19 + 0x48),0), lVar7 != 0)) {
      FUN_0a17ba14(lVar7,0,0);
      lVar7 = *unaff_x24;
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_049a583c();
        lVar7 = *unaff_x24;
      }
      puVar6 = *(undefined8 **)(lVar7 + 0xb8);
      lVar8 = puVar6[3];
      if (lVar8 == 0) {
        if (*(int *)(lVar7 + 0xe4) == 0) {
          thunk_FUN_049a583c();
          puVar6 = *(undefined8 **)(*unaff_x24 + 0xb8);
        }
        uVar3 = *puVar6;
        lVar8 = thunk_FUN_04983f60(*unaff_x22);
        FUN_08cc3ad0(lVar8,uVar3,*(undefined8 *)PTR_DAT_0ac6a4c0,0);
        plVar4 = (long *)(*(long *)(*unaff_x24 + 0xb8) + 0x18);
        *plVar4 = lVar8;
        thunk_FUN_049ee3d8(plVar4,lVar8);
      }
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      uVar3 = FUN_09b8bbb0(lVar8,0);
      uVar5 = FUN_08aa1c24();
      FUN_05b466fc(uVar3,uVar5,*(undefined8 *)puVar1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


