/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsSerializer$$Invoke_OnBeforeDeserialize
ENTRY_POINT: 0677b0a4
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_6
*/


long Unity_VisualScripting_FullSerializer_fsSerializer__Invoke_OnBeforeDeserialize
               (undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  uint in_w8;
  long unaff_x19;
  
                    /* catch() { ... } // from try @ 0677adbc with catch @ 0677b0a4 */
                    /* catch() { ... } // from try @ 0677afb0 with catch @ 0677b0a8 */
  *(undefined4 *)(unaff_x19 + 0x34) = 0;
                    /* catch() { ... } // from try @ 0677ad94 with catch @ 0677b0ac */
  *(undefined8 *)(unaff_x19 + 0x2c) = param_1;
  puVar2 = PTR_DAT_06f6d960;
  uVar1 = DAT_0136afb0;
                    /* catch() { ... } // from try @ 0677afac with catch @ 0677b0b0 */
  if (2 < in_w8) {
                    /* catch() { ... } // from try @ 0677afa8 with catch @ 0677b0b4 */
                    /* catch() { ... } // from try @ 0677ae50 with catch @ 0677b0b8 */
                    /* catch() { ... } // from try @ 0677ae78 with catch @ 0677b0bc */
                    /* catch() { ... } // from try @ 0677ae88 with catch @ 0677b0c0 */
                    /* catch() { ... } // from try @ 0677afa4 with catch @ 0677b0c4 */
    *(undefined4 *)(unaff_x19 + 0x40) = 0;
                    /* catch() { ... } // from try @ 0677aeac with catch @ 0677b0c8 */
    *(undefined8 *)(unaff_x19 + 0x38) = uVar1;
                    /* catch() { ... } // from try @ 0677ad30 with catch @ 0677b0cc */
                    /* catch() { ... } // from try @ 0677afa0 with catch @ 0677b0d0 */
                    /* catch() { ... } // from try @ 0677ad24 with catch @ 0677b0d4 */
    lVar3 = FUN_02fe9340(*(undefined8 *)puVar2,3);
                    /* catch() { ... } // from try @ 0677af9c with catch @ 0677b0d8 */
    if (lVar3 != 0) {
                    /* try { // try from 0677b0e8 to 0687b0eb has its CatchHandler @ 0677b0f8 */
                    /* try { // try from 0677b0ec to 0687b0ff has its CatchHandler @ 0677aad4 */
                    /* catch() { ... } // from try @ 0677b0e8 with catch @ 0677b0f8 */
      if ((*(uint *)(lVar3 + 0x18) < 2) ||
         (*(undefined4 *)(lVar3 + 0x24) = 1, puVar2 = PTR_DAT_06f70788, *(uint *)(lVar3 + 0x18) == 2
         )) goto LAB_0677b164;
                    /* try { // try from 0677b100 to 0687b107 has its CatchHandler @ 0677b108 */
                    /* catch() { ... } // from try @ 0677b034 with catch @ 0677b108
                       catch() { ... } // from try @ 0677b100 with catch @ 0677b108 */
      *(undefined4 *)(lVar3 + 0x28) = 2;
      lVar4 = thunk_FUN_0301080c(*(undefined8 *)puVar2);
      FUN_068d5b94(lVar4,0);
      if (lVar4 != 0) {
        FUN_068d5c14(lVar4,0,0);
        FUN_068d72e0(lVar4);
        FUN_068d95cc(lVar4,lVar3,0);
        return lVar4;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02fe94e8();
  }
LAB_0677b164:
                    /* WARNING: Subroutine does not return */
  FUN_02fe94f0();
}


