/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$SerializeValue
ENTRY_POINT: 055d9a9c
PROGRAM: beastcraft-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_4;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x055d9bc0) */
/* WARNING: Removing unreachable block (ram,0x055d9c74) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializeValue(long param_1)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x19;
  undefined4 unaff_w20;
  undefined8 *unaff_x22;
  undefined8 in_stack_00000020;
  long in_stack_00000028;
  
  if (*(int *)(**(long **)(param_1 + 0xf88) + 0xe4) == 0) {
    thunk_FUN_02e9a04c();
  }
                    /* try { // try from 055d9ab8 to 056d9acb has its CatchHandler @ 055d9bc4 */
  iVar2 = FUN_05606ea0(unaff_w20,8,0);
  puVar1 = PTR_DAT_06a37ec8;
  if (iVar2 < 0x1001) {
    lVar3 = *(long *)PTR_DAT_06a37ec8;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02e9a04c();
      lVar3 = *(long *)puVar1;
    }
    plVar5 = *(long **)(lVar3 + 0xb8);
                    /* try { // try from 055d9aec to 056d9aef has its CatchHandler @ 055d9bb4 */
    if (*plVar5 != 0) {
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_02e9a04c();
        plVar5 = *(long **)(*(long *)puVar1 + 0xb8);
      }
      in_stack_00000028 = plVar5[1];
      in_stack_00000020._4_1_ = '\0';
      FUN_056696f0(in_stack_00000028,(long)&stack0x00000020 + 4,0);
      lVar3 = *(long *)puVar1;
      if (*(int *)(lVar3 + 0xe4) == 0) {
                    /* try { // try from 055d9b3c to 056d9b67 has its CatchHandler @ 055d9b9c */
        thunk_FUN_02e9a04c();
        lVar3 = *(long *)puVar1;
      }
      lVar4 = **(long **)(lVar3 + 0xb8);
      if (lVar4 != 0) {
        if (*(int *)(lVar3 + 0xe4) == 0) {
          thunk_FUN_02e9a04c();
          lVar4 = **(long **)(*(long *)puVar1 + 0xb8);
        }
        *(long *)(unaff_x19 + 0x28) = lVar4;
                    /* try { // try from 055d9b70 to 056d9b73 has its CatchHandler @ 055d9b94 */
        thunk_FUN_02ee2be8();
                    /* try { // try from 055d9b7c to 056d9b7f has its CatchHandler @ 055d9bb0 */
        **(undefined8 **)(*(long *)puVar1 + 0xb8) = 0;
                    /* try { // try from 055d9b80 to 056d9b83 has its CatchHandler @ 055d9bac */
                    /* try { // try from 055d9b84 to 056d9b87 has its CatchHandler @ 055d9ba4 */
                    /* try { // try from 055d9b88 to 056d9b8b has its CatchHandler @ 055d9bb8 */
                    /* try { // try from 055d9b8c to 056d9b8f has its CatchHandler @ 055d9ba0 */
        thunk_FUN_02ee2be8(*(undefined8 *)(*(long *)puVar1 + 0xb8),0);
      }
                    /* try { // try from 055d9b90 to 056d9b93 has its CatchHandler @ 055d9b98 */
                    /* catch() { ... } // from try @ 055d9b70 with catch @ 055d9b94
                       try { // try from 055d9b94 to 056d9bdf has its CatchHandler @ 055d9810 */
                    /* catch() { ... } // from try @ 055d9b90 with catch @ 055d9b98 */
                    /* catch() { ... } // from try @ 055d9b3c with catch @ 055d9b9c */
                    /* catch() { ... } // from try @ 055d9b8c with catch @ 055d9ba0 */
      if (in_stack_00000020._4_1_ != '\0') {
                    /* catch() { ... } // from try @ 055d9b84 with catch @ 055d9ba4 */
                    /* catch() { ... } // from try @ 055d99b0 with catch @ 055d9ba8 */
                    /* catch() { ... } // from try @ 055d9b80 with catch @ 055d9bac */
                    /* catch() { ... } // from try @ 055d9b7c with catch @ 055d9bb0 */
        thunk_FUN_02e4a4d0(in_stack_00000028,0);
      }
    }
  }
                    /* catch() { ... } // from try @ 055d9ab8 with catch @ 055d9bc4 */
  plVar5 = (long *)(unaff_x19 + 0x28);
  if (*plVar5 == 0) {
                    /* try { // try from 055d9be4 to 056d9bff has its CatchHandler @ 055d9810 */
    lVar3 = FUN_02e3cb08(*unaff_x22,iVar2);
    *plVar5 = lVar3;
                    /* catch() { ... } // from try @ 055d9be0 with catch @ 055d9bfc */
    thunk_FUN_02ee2be8(plVar5,lVar3);
  }
  else {
    FUN_05628afc(*plVar5,0,iVar2,0);
                    /* try { // try from 055d9be0 to 056d9be3 has its CatchHandler @ 055d9bfc */
  }
                    /* try { // try from 055d9c00 to 056d9c07 has its CatchHandler @ 055d9c10 */
  *(int *)(unaff_x19 + 0x5c) = iVar2;
                    /* try { // try from 055d9c08 to 056d9c13 has its CatchHandler @ 055d9810 */
                    /* catch() { ... } // from try @ 055d9c00 with catch @ 055d9c10 */
  return;
}


