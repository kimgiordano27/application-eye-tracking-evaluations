/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$DeserializeXNode
ENTRY_POINT: 07108a30
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonConvert__DeserializeXNode(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  long unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  
  if (cRam0000000009842bf6 == '\0') {
    FUN_03d2d2b0(PTR_DAT_091fc120);
    cRam0000000009842bf6 = '\x01';
  }
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
  if (*(int *)(unaff_x23 + 0x18) != 1) {
    if (*(int *)(unaff_x23 + 0x18) == 0) {
      if (DAT_09836d82 == '\0') {
        FUN_03d2d2b0(PTR_DAT_091a8170);
        DAT_09836d82 = '\x01';
      }
      if (unaff_x21 == 0) {
        uVar1 = 0;
        uVar3 = 0;
      }
      else {
        uVar1 = FUN_06fd0380();
        uVar3 = *(undefined4 *)(unaff_x21 + 0x10);
      }
      if (*(int *)(*(long *)PTR_DAT_0920fa70 + 0xe0) == 0) {
        thunk_FUN_03db619c();
      }
      FUN_07108be8(uVar1,uVar3);
      return;
    }
    thunk_FUN_03d1e194(PTR_DAT_091ab0b0);
    uVar1 = thunk_FUN_03d2ef40();
    uVar2 = thunk_FUN_03d1e194(PTR_DAT_091b0848);
    FUN_070ccddc(uVar1,uVar2,0);
    uVar2 = thunk_FUN_03d1e194(PTR_DAT_0920faa8);
                    /* WARNING: Subroutine does not return */
    FUN_03d2d414(uVar1,uVar2);
  }
  if (DAT_09836d82 == '\0') {
    FUN_03d2d2b0(PTR_DAT_091a8170);
    DAT_09836d82 = '\x01';
  }
  if (unaff_x21 == 0) {
    uVar1 = 0;
    uVar3 = 0;
  }
  else {
    uVar1 = FUN_06fd0380();
    uVar3 = *(undefined4 *)(unaff_x21 + 0x10);
  }
  if (*(int *)(*(long *)PTR_DAT_0920fa70 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
  FUN_07108c70(uVar1,uVar3);
  return;
}


