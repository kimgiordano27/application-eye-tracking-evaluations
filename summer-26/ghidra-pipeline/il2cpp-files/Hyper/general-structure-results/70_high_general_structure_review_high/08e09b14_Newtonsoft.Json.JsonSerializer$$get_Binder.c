/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$get_Binder
ENTRY_POINT: 08e09b14
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


void Newtonsoft_Json_JsonSerializer__get_Binder(void)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long unaff_x19;
  long lVar5;
  undefined8 uVar6;
  undefined8 *unaff_x22;
  long *unaff_x23;
  long *unaff_x24;
  undefined8 *unaff_x25;
  
  FUN_05b466fc();
  if ((*(long *)(unaff_x19 + 0x48) != 0) &&
     (lVar1 = FUN_0a178414(*(long *)(unaff_x19 + 0x48),0), lVar1 != 0)) {
    FUN_0a17ba14(lVar1,0,0);
    lVar1 = *unaff_x24;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_049a583c();
      lVar1 = *unaff_x24;
    }
    puVar4 = *(undefined8 **)(lVar1 + 0xb8);
    lVar5 = puVar4[3];
    if (lVar5 == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_049a583c();
        puVar4 = *(undefined8 **)(*unaff_x24 + 0xb8);
      }
      uVar6 = *puVar4;
      lVar5 = thunk_FUN_04983f60(*unaff_x22);
      FUN_08cc3ad0(lVar5,uVar6,*(undefined8 *)PTR_DAT_0ac6a4c0,0);
      plVar2 = (long *)(*(long *)(*unaff_x24 + 0xb8) + 0x18);
      *plVar2 = lVar5;
      thunk_FUN_049ee3d8(plVar2,lVar5);
    }
    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    uVar6 = FUN_09b8bbb0(lVar5,0);
    uVar3 = FUN_08aa1c24();
    FUN_05b466fc(uVar6,uVar3,*unaff_x25);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


