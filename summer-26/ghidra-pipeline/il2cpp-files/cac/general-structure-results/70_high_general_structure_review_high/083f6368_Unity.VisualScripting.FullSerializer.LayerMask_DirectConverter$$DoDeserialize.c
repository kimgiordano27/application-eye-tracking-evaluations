/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.LayerMask_DirectConverter$$DoDeserialize
ENTRY_POINT: 083f6368
PROGRAM: cac-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_1;ray_or_cast_sink_hits_2;telemetry_or_network_hits_4
*/


void Unity_VisualScripting_FullSerializer_LayerMask_DirectConverter__DoDeserialize(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long unaff_x19;
  undefined8 uVar5;
  ulong unaff_d8;
  double dVar6;
  
                    /* try { // try from 083f6370 to 084f6377 has its CatchHandler @ 083f64b4 */
  FUN_03f13384(PTR_DAT_0910b5c0);
  FUN_03f13384(PTR_DAT_0910c388);
                    /* try { // try from 083f6384 to 084f638b has its CatchHandler @ 083f64b0 */
  FUN_03f13384(PTR_DAT_0918a128);
  FUN_03f13384(PTR_DAT_0918a258);
                    /* try { // try from 083f6398 to 084f63ab has its CatchHandler @ 083f64d4 */
  *(undefined1 *)(unaff_x19 + 0xf0d) = 1;
  puVar3 = PTR_DAT_0918a258;
  puVar2 = PTR_DAT_0918a128;
  puVar1 = PTR_DAT_0910c388;
                    /* try { // try from 083f63ac to 084f63ff has its CatchHandler @ 083f5f38 */
  if (0x7fe < (unaff_d8 >> 0x34 & 0x7ff)) {
    if (*(int *)(*(long *)PTR_DAT_0910b5c0 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    FUN_08791e24(*(undefined8 *)puVar3,0);
    return;
  }
  lVar4 = *(long *)PTR_DAT_0918a128;
                    /* try { // try from 083f6400 to 084f6407 has its CatchHandler @ 083f6474 */
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_03f6fea8();
    lVar4 = *(long *)puVar2;
  }
                    /* try { // try from 083f6414 to 084f6433 has its CatchHandler @ 083f6478 */
  dVar6 = *(double *)(*(long *)(lVar4 + 0xb8) + 0x28);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_03f6fea8(*(long *)puVar1);
  }
  uVar5 = FUN_074b6688(dVar6,0);
                    /* try { // try from 083f6450 to 084f6453 has its CatchHandler @ 083f64cc */
                    /* try { // try from 083f6454 to 084f6457 has its CatchHandler @ 083f64ac */
                    /* try { // try from 083f6458 to 084f645b has its CatchHandler @ 083f64a0 */
                    /* try { // try from 083f645c to 084f645f has its CatchHandler @ 083f649c */
                    /* try { // try from 083f6460 to 084f6463 has its CatchHandler @ 083f6494 */
  FUN_074b6538(-dVar6,uVar5,0);
  return;
}


