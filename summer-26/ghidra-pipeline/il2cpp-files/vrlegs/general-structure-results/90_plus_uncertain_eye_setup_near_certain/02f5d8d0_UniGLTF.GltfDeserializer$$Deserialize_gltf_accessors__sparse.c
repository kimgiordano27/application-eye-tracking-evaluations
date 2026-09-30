/*
FUNCTION_NAME: UniGLTF.GltfDeserializer$$Deserialize_gltf_accessors__sparse
ENTRY_POINT: 02f5d8d0
PROGRAM: vrlegs-libil2cpp.so
SCORE: 109
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;telemetry_or_network_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02f5dafc) */

void UniGLTF_GltfDeserializer__Deserialize_gltf_accessors__sparse(void)

{
  byte bVar1;
  undefined *puVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x20;
  long *unaff_x24;
  undefined8 in_stack_00000008;
  
  thunk_FUN_01a58e78();
  plVar3 = *(long **)(*(long *)(*unaff_x24 + 0xb8) + 0x10);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  plVar3 = (long *)(**(code **)(*plVar3 + 0x308))();
  lVar6 = *(long *)PTR_DAT_03d245d8;
  if (plVar3 == (long *)0x0) {
    plVar3 = (long *)thunk_FUN_01a89e68(lVar6);
    FUN_02f5d4f4();
    lVar6 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03d245f0);
    FUN_0219a4f0(lVar6,*(undefined8 *)PTR_DAT_03d245e8);
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    plVar3[8] = lVar6;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar3 + 8,lVar6);
    lVar6 = *unaff_x24;
                    /* try { // try from 02f5d98c to 0305d9bf has its CatchHandler @ 02f5dac0 */
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar6 = *unaff_x24;
    }
    plVar4 = *(long **)(*(long *)(lVar6 + 0xb8) + 0x10);
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    (**(code **)(*plVar4 + 0x318))();
  }
  else {
                    /* try { // try from 02f5d920 to 0305d94b has its CatchHandler @ 02f5dac4 */
    if ((*(byte *)(*plVar3 + 0x130) < *(byte *)(lVar6 + 0x130)) ||
       (*(long *)(*(long *)(*plVar3 + 200) + (ulong)*(byte *)(lVar6 + 0x130) * 8 + -8) != lVar6)) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6ee0(plVar3);
    }
  }
                    /* try { // try from 02f5d9c0 to 0305da4b has its CatchHandler @ 02f5d2ac */
  plVar3[2] = unaff_x20;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  lVar6 = FUN_02f5fe68();
  plVar4 = plVar3 + 3;
  *plVar4 = lVar6;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar4);
  lVar6 = FUN_02f5fdd0();
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 02f5daf8 with catch @ 02f5db0c */
    FUN_01ab6c3c();
  }
  bVar1 = *(byte *)(lVar6 + 0x19);
  *(byte *)((long)plVar3 + 0x2a) = bVar1 ^ 1;
  if (bVar1 == 0) {
    lVar6 = *plVar4;
    uVar5 = FUN_02f5fd68();
    if (*(int *)(*(long *)PTR_DAT_03cc1608 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    lVar6 = FUN_026e58e8(lVar6,uVar5,0);
                    /* try { // try from 02f5da4c to 0305da53 has its CatchHandler @ 02f5dacc */
                    /* try { // try from 02f5da54 to 0305da57 has its CatchHandler @ 02f5dab4 */
    plVar3[4] = lVar6;
                    /* try { // try from 02f5da58 to 0305da5f has its CatchHandler @ 02f5db88 */
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  }
  else {
                    /* try { // try from 02f5da60 to 0305da67 has its CatchHandler @ 02f5dab0 */
                    /* try { // try from 02f5da68 to 0305da6f has its CatchHandler @ 02f5dae0 */
    lVar6 = FUN_02f5fd68();
                    /* try { // try from 02f5da70 to 0305da7b has its CatchHandler @ 02f5db88 */
    plVar3[4] = lVar6;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  }
  puVar2 = PTR_DAT_03cbeeb0;
                    /* try { // try from 02f5da7c to 0305da87 has its CatchHandler @ 02f5dae0 */
                    /* try { // try from 02f5da88 to 0305da9f has its CatchHandler @ 02f5d2ac */
  *(undefined1 *)(plVar3 + 5) = *(undefined1 *)(unaff_x20 + 0x38);
  *(undefined1 *)((long)plVar3 + 0x29) = 1;
  lVar6 = *(long *)puVar2;
  if (*(int *)(lVar6 + 0xe0) == 0) {
                    /* try { // try from 02f5daa0 to 0305daa3 has its CatchHandler @ 02f5daac */
    thunk_FUN_01a58e78();
                    /* try { // try from 02f5daa4 to 0305daf7 has its CatchHandler @ 02f5d2ac */
    lVar6 = *(long *)puVar2;
  }
                    /* catch() { ... } // from try @ 02f5daa0 with catch @ 02f5daac */
                    /* catch() { ... } // from try @ 02f5da60 with catch @ 02f5dab0 */
  plVar3[6] = *(long *)(*(long *)(lVar6 + 0xb8) + 0x18);
                    /* catch() { ... } // from try @ 02f5da54 with catch @ 02f5dab4 */
                    /* catch() { ... } // from try @ 02f5d98c with catch @ 02f5dac0 */
  FUN_02f5dc14();
                    /* catch() { ... } // from try @ 02f5d920 with catch @ 02f5dac4 */
                    /* catch() { ... } // from try @ 02f5d8c4 with catch @ 02f5dac8 */
                    /* catch() { ... } // from try @ 02f5da4c with catch @ 02f5dacc */
  if (in_stack_00000008._4_1_ != '\0') {
                    /* catch() { ... } // from try @ 02f5d770 with catch @ 02f5dad0 */
                    /* catch() { ... } // from try @ 02f5d700 with catch @ 02f5dad4 */
                    /* catch() { ... } // from try @ 02f5d6a4 with catch @ 02f5dad8 */
    OVRManager_<>c__<InitOVRManager>b__424_0();
  }
                    /* catch() { ... } // from try @ 02f5da68 with catch @ 02f5dae0
                       catch() { ... } // from try @ 02f5da7c with catch @ 02f5dae0 */
  return;
}


