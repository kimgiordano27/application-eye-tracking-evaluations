/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$add_Error
ENTRY_POINT: 061de810
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializer__add_Error
               (ulong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x19;
  long unaff_x23;
  undefined8 *puVar6;
  undefined8 in_stack_00000000;
  undefined4 in_stack_00000008;
  undefined4 uStack000000000000000c;
  
  puVar6 = *(undefined8 **)(unaff_x23 + 0x2c0);
                    /* try { // try from 061de814 to 062de81f has its CatchHandler @ 061de834 */
                    /* try { // try from 061de820 to 062de82b has its CatchHandler @ 061de130 */
  if ((param_1 & 1) == 0) {
                    /* try { // try from 061de82c to 062de833 has its CatchHandler @ 061de834 */
    FUN_0373b518(PTR_DAT_07d882c0);
                    /* catch() { ... } // from try @ 061de478 with catch @ 061de834
                       catch() { ... } // from try @ 061de5a0 with catch @ 061de834
                       catch() { ... } // from try @ 061de670 with catch @ 061de834
                       catch() { ... } // from try @ 061de740 with catch @ 061de834
                       catch() { ... } // from try @ 061de7d4 with catch @ 061de834
                       catch() { ... } // from try @ 061de814 with catch @ 061de834
                       catch() { ... } // from try @ 061de82c with catch @ 061de834 */
    *(undefined1 *)(unaff_x19 + 0x5e1) = 1;
  }
  plVar2 = (long *)RootMotion_FinalIK_Finger___ctor(*puVar6,3);
  puVar1 = PTR_DAT_07d86548;
  uStack000000000000000c = param_4;
  lVar3 = thunk_FUN_037784fc(*(undefined8 *)(PTR_DAT_07d86548 + 0x48),&stack0x0000000c);
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  if ((lVar3 != 0) &&
     (lVar4 = thunk_FUN_037787d0(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0)) {
LAB_061de940:
    uVar5 = thunk_FUN_037854c8();
                    /* WARNING: Subroutine does not return */
    FUN_0373b680(uVar5,0);
  }
  if ((int)plVar2[3] != 0) {
    plVar2[4] = lVar3;
    thunk_FUN_037aeb94(plVar2 + 4,lVar3);
    in_stack_00000008 = param_5;
    lVar3 = thunk_FUN_037784fc(*(undefined8 *)(puVar1 + 0x48),&stack0x00000008);
    if ((lVar3 != 0) &&
       (lVar4 = thunk_FUN_037787d0(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0))
    goto LAB_061de940;
    if (1 < *(uint *)(plVar2 + 3)) {
      plVar2[5] = lVar3;
      thunk_FUN_037aeb94(plVar2 + 5,lVar3);
      in_stack_00000000._4_4_ = param_6;
      lVar3 = thunk_FUN_037784fc(*(undefined8 *)(puVar1 + 0x48),(long)&stack0x00000000 + 4);
      if ((lVar3 != 0) &&
         (lVar4 = thunk_FUN_037787d0(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0))
      goto LAB_061de940;
      if (2 < *(uint *)(plVar2 + 3)) {
        plVar2[6] = lVar3;
        thunk_FUN_037aeb94(plVar2 + 6,lVar3);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7bc();
}


