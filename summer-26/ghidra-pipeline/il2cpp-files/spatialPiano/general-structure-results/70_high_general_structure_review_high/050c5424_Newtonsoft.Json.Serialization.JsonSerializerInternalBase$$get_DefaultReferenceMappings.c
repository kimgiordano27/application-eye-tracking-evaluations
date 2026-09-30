/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalBase$$get_DefaultReferenceMappings
ENTRY_POINT: 050c5424
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined4
Newtonsoft_Json_Serialization_JsonSerializerInternalBase__get_DefaultReferenceMappings(void)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 uVar3;
  long unaff_x19;
  long unaff_x22;
  long unaff_x23;
  undefined1 auVar4 [16];
  undefined4 uStack000000000000000c;
  int iStack0000000000000018;
  int iStack000000000000001c;
  
  FUN_02f08768(PTR_DAT_067db0e0);
  FUN_02f08768(UnityEngine_UIElements_DragAndDropArgs_var);
  *(undefined1 *)(unaff_x23 + 0xaeb) = 1;
  _iStack0000000000000018 = 0;
  uStack000000000000000c = 0;
                    /* try { // try from 050c5450 to 051c54a7 has its CatchHandler @ 050c5938 */
  if (-1 < *(char *)(unaff_x19 + 0x24)) {
    if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    auVar4 = FUN_05030894();
    puVar1 = PTR_DAT_067db0e0;
    uVar3 = auVar4._8_8_;
    if (*(int *)(*(long *)PTR_DAT_067db0e0 + 0xe4) == 0) {
      thunk_FUN_02f6670c(*(long *)PTR_DAT_067db0e0);
      uVar3 = extraout_x1;
    }
    uVar2 = FUN_050c497c(auVar4._0_8_,uVar3,(long)&stack0x00000018 + 4);
    if ((uVar2 & 1) == 0) {
      FUN_05030894();
LAB_050c5560:
      FUN_050cd75c();
      return 0;
    }
    if (iStack000000000000001c == 7) {
      auVar4 = FUN_05030d70();
      uVar3 = auVar4._8_8_;
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                    /* try { // try from 050c54bc to 051c54bf has its CatchHandler @ 050c58c4 */
                    /* try { // try from 050c54c0 to 051c54d3 has its CatchHandler @ 050c58d8 */
        thunk_FUN_02f6670c(*(long *)puVar1);
        uVar3 = extraout_x1_00;
      }
      uVar2 = FUN_050c47c0(auVar4._0_8_,uVar3,&stack0x00000018);
      if ((uVar2 & 1) == 0) {
        FUN_05030d70();
        goto LAB_050c5560;
      }
      if (iStack0000000000000018 == 5) {
                    /* try { // try from 050c54e4 to 051c54e7 has its CatchHandler @ 050c58e8 */
        FUN_050cd5cc();
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_02f6670c(*(long *)puVar1);
        }
                    /* try { // try from 050c5514 to 051c557f has its CatchHandler @ 050c58b4 */
        uVar2 = FUN_050c4b74();
        if ((uVar2 & 1) != 0) {
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          uVar2 = FUN_050c4c38();
          if ((uVar2 & 1) != 0) {
            return 1;
          }
        }
        goto LAB_050c55d8;
      }
    }
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_050c4e1c();
    FUN_050cd5cc();
    uVar2 = FUN_050c4c38();
    if ((uVar2 & 1) != 0) {
      return 1;
    }
  }
LAB_050c55d8:
  FUN_050cd700();
  return 0;
}


