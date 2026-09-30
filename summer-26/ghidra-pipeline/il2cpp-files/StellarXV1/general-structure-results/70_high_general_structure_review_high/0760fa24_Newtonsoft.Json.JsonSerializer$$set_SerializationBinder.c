/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$set_SerializationBinder
ENTRY_POINT: 0760fa24
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializer__set_SerializationBinder(ulong param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x19;
  long unaff_x21;
  undefined8 *puVar5;
  undefined8 in_stack_00000008;
  
  puVar5 = *(undefined8 **)(unaff_x21 + 0x40);
  if ((param_1 & 1) == 0) {
    FUN_04077588(PTR_DAT_09287040);
    *(undefined1 *)(unaff_x19 + 0xdc4) = 1;
  }
  plVar1 = (long *)FUN_04077674(*puVar5,1);
                    /* try { // try from 0760fa58 to 0770fa5b has its CatchHandler @ 0760fa78 */
                    /* try { // try from 0760fa5c to 0770fa5f has its CatchHandler @ 0760fa70 */
                    /* try { // try from 0760fa60 to 0770fa67 has its CatchHandler @ 0760fa84 */
  lVar2 = thunk_FUN_040b4b34(*(undefined8 *)(PTR_DAT_09285980 + 0x68),&stack0x00000008);
                    /* try { // try from 0760fa68 to 0770fa9f has its CatchHandler @ 0760f494 */
  if (plVar1 != (long *)0x0) {
                    /* catch(type#1 @ 08d635d8) { ... } // from try @ 0760fa5c with catch @ 0760fa70
                        */
                    /* catch(type#1 @ 08d635d8) { ... } // from try @ 0760f8d4 with catch @ 0760fa74
                        */
                    /* catch(type#1 @ 08d635d8) { ... } // from try @ 0760fa58 with catch @ 0760fa78
                        */
                    /* catch(type#1 @ 08d635d8) { ... } // from try @ 0760f894 with catch @ 0760fa7c
                        */
                    /* catch(type#1 @ 08d635d8) { ... } // from try @ 0760f830 with catch @ 0760fa80
                        */
                    /* catch(type#1 @ 08d635d8) { ... } // from try @ 0760fa60 with catch @ 0760fa84
                        */
    if ((lVar2 != 0) &&
       (lVar3 = thunk_FUN_040b4e00(lVar2,*(undefined8 *)(*plVar1 + 0x40)), lVar3 == 0)) {
      uVar4 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
      FUN_040776f4(uVar4,0);
    }
    if ((int)plVar1[3] != 0) {
      plVar1[4] = lVar2;
      thunk_FUN_040ec700(plVar1 + 4,lVar2);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_04077838();
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 0760faa0 with catch @ 0760fab0 */
  FUN_04077830();
}


