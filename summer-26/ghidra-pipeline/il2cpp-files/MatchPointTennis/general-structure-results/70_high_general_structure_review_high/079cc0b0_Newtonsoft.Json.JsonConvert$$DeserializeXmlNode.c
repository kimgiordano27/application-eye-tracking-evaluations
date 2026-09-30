/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$DeserializeXmlNode
ENTRY_POINT: 079cc0b0
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonConvert__DeserializeXmlNode(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  
  FUN_04447ba8();
  FUN_04447ba8(PTR_DAT_09f42508);
  FUN_04447ba8(PTR_DAT_09f42510);
  FUN_04447ba8(PTR_DAT_09f42518);
  FUN_04447ba8(PTR_DAT_09f42520);
  FUN_04447ba8(PTR_DAT_09f42528);
  *(undefined1 *)(unaff_x20 + 0xcfb) = 1;
  lVar1 = *unaff_x21;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
    lVar1 = *unaff_x21;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x28) == 0) {
    uVar2 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f42520);
    FUN_0731a1e4(uVar2,*(undefined8 *)PTR_DAT_09f42508);
    lVar1 = *unaff_x21;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
      lVar1 = *unaff_x21;
    }
    puVar3 = (undefined8 *)(*(long *)(lVar1 + 0xb8) + 0x28);
    *puVar3 = uVar2;
    thunk_FUN_044bb4b4(puVar3,uVar2);
    uVar2 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f42528);
    FUN_07441bc0(uVar2,*(undefined8 *)PTR_DAT_09f42500);
    puVar3 = (undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x30);
    *puVar3 = uVar2;
    thunk_FUN_044bb4b4(puVar3,uVar2);
    lVar1 = *unaff_x21;
  }
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
    lVar1 = *unaff_x21;
  }
  if ((unaff_x19 != 0) && (lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 0x28), lVar1 != 0)) {
    FUN_0731afc0(lVar1,*(undefined4 *)(unaff_x19 + 0x14));
    lVar1 = *(long *)(*(long *)(*unaff_x21 + 0xb8) + 0x30);
    if (lVar1 != 0) {
      FUN_07442978(lVar1,*(undefined8 *)(unaff_x19 + 0x48));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


