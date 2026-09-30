/*
FUNCTION_NAME: OVRManager$$StaticInitializeMixedRealityCapture
ENTRY_POINT: 05ff64b4
PROGRAM: vandalizer-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__StaticInitializeMixedRealityCapture
               (ulong param_1,undefined1 param_2 [16],ulong param_3,ulong param_4,long param_5)

{
  undefined *puVar1;
  ulong uVar2;
  uint *puVar3;
  float *unaff_x20;
  long unaff_x21;
  undefined8 uVar4;
  long *unaff_x22;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  ulong uVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  
  if ((param_1 & 1) == 0) {
    FUN_031f20f4(PTR_DAT_0759b2a8);
    FUN_031f20f4(PTR_DAT_075d64f0);
    *(undefined1 *)(unaff_x21 + 0x8a2) = 1;
  }
  puVar1 = PTR_DAT_0759b2a8;
  if (*(int *)(*unaff_x22 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  uVar10 = FUN_06e6836c();
  uVar4 = *(undefined8 *)(param_5 + 0x30);
  uVar2 = param_3;
  uVar16 = param_4;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  fVar12 = (float)uVar2;
  uVar2 = FUN_06e587d8(uVar4,0,0);
                    /* try { // try from 05ff6530 to 060f6533 has its CatchHandler @ 05ff6548 */
  if ((uVar2 & 1) != 0) {
                    /* try { // try from 05ff6534 to 060f6537 has its CatchHandler @ 05ff61b0 */
                    /* try { // try from 05ff6538 to 060f653b has its CatchHandler @ 05ff6544 */
    if (*(long *)(param_5 + 0x30) == 0) goto LAB_05ff67c8;
                    /* try { // try from 05ff653c to 060f6567 has its CatchHandler @ 05ff61b0 */
    fVar21 = unaff_x20[1];
    fVar5 = unaff_x20[2];
    fVar19 = *unaff_x20;
                    /* catch(type#1 @ 0718d318) { ... } // from try @ 05ff6538 with catch @ 05ff6544
                        */
                    /* catch(type#1 @ 0718d318) { ... } // from try @ 05ff6530 with catch @ 05ff6548
                        */
                    /* catch(type#1 @ 0718d318) { ... } // from try @ 05ff6394 with catch @ 05ff654c
                        */
    fVar6 = (float)FUN_06e6a5c4(*(long *)(param_5 + 0x30),0);
    fVar20 = (float)uVar16;
                    /* catch(type#1 @ 0718d318) { ... } // from try @ 05ff635c with catch @ 05ff6550
                        */
                    /* catch(type#1 @ 0718d318) { ... } // from try @ 05ff6300 with catch @ 05ff6554
                        */
                    /* catch(type#1 @ 0718d318) { ... } // from try @ 05ff63a4 with catch @ 05ff6558
                        */
    fVar9 = fVar12;
    fVar13 = fVar20;
    if (*(int *)(*unaff_x22 + 0xe4) == 0) {
                    /* try { // try from 05ff6568 to 060f656b has its CatchHandler @ 05ff657c */
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    fVar7 = (float)FUN_06e6844c();
                    /* catch() { ... } // from try @ 05ff6568 with catch @ 05ff657c */
    if (DAT_07a44545 == '\0') {
      FUN_031f20f4(PTR_DAT_075b9420);
      DAT_07a44545 = '\x01';
    }
                    /* try { // try from 05ff65b4 to 060f65db has its CatchHandler @ 05ff65f0 */
    fVar8 = fVar13 * fVar13 + fVar7 * fVar7 + fVar9 * fVar9;
    fVar19 = fVar19 - fVar6;
    fVar21 = fVar21 - fVar12;
    fVar5 = fVar5 - fVar20;
                    /* try { // try from 05ff65dc to 060f65e7 has its CatchHandler @ 05ff61b0 */
    if (**(float **)(*(long *)PTR_DAT_075b9420 + 0xb8) <= fVar8) {
                    /* try { // try from 05ff65e8 to 060f65ef has its CatchHandler @ 05ff65f0 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 05ff65b4 with catch @ 05ff65f0
                       catch(type#2 @ 00000000) { ... } // from try @ 05ff65e8 with catch @ 05ff65f0
                        */
      fVar12 = fVar5 * fVar13 + fVar19 * fVar7 + fVar21 * fVar9;
      fVar19 = fVar19 - (fVar7 * fVar12) / fVar8;
      fVar21 = fVar21 - (fVar9 * fVar12) / fVar8;
      fVar5 = fVar5 - (fVar13 * fVar12) / fVar8;
    }
    if (DAT_07a3ca81 == '\0') {
      FUN_031f20f4(PTR_DAT_0759b370);
      DAT_07a3ca81 = '\x01';
    }
    if (*(int *)(*(long *)PTR_DAT_0759b370 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    uVar16 = (ulong)(uint)(fVar5 * fVar5);
    fVar12 = SQRT(fVar5 * fVar5 + fVar19 * fVar19 + fVar21 * fVar21);
    if (fVar12 <= DAT_014ba9b8) {
      if (DAT_07a3ca82 == '\0') {
        FUN_031f20f4(PTR_DAT_0759b378);
        DAT_07a3ca82 = '\x01';
      }
      puVar3 = *(uint **)(*(long *)PTR_DAT_0759b378 + 0xb8);
      uVar10 = (ulong)*puVar3;
      param_3 = (ulong)puVar3[1];
      param_4 = (ulong)puVar3[2];
    }
    else {
                    /* try { // try from 05ff667c to 060f67ef has its CatchHandler @ 05ff667c
                       catch() { ... } // from try @ 05ff667c with catch @ 05ff667c
                       catch() { ... } // from try @ 05ff6888 with catch @ 05ff667c
                       catch() { ... } // from try @ 05ff69f4 with catch @ 05ff667c
                       catch() { ... } // from try @ 05ff6a90 with catch @ 05ff667c */
      uVar10 = (ulong)(uint)(fVar19 / fVar12);
      param_3 = (ulong)(uint)(fVar21 / fVar12);
      param_4 = (ulong)(uint)(fVar5 / fVar12);
    }
  }
  if (*(long *)(param_5 + 0x40) != 0) {
    fVar13 = unaff_x20[2];
    uVar2 = (ulong)(uint)fVar13;
    fVar12 = unaff_x20[1];
    fVar5 = *(float *)(*(long *)(param_5 + 0x40) + 0x60);
    fVar9 = *unaff_x20;
    if (*(int *)(*unaff_x22 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    fVar6 = (float)FUN_06e6844c();
    fVar20 = *(float *)(param_5 + 0x58);
    uVar14 = uVar2;
    uVar17 = uVar16;
    uVar4 = FUN_06e6844c();
    uVar15 = param_3;
    uVar18 = param_4;
    uVar11 = FUN_06e461b0(uVar10,param_3,param_4,uVar4,uVar14,uVar17,0);
    if (*(long *)(param_5 + 0x38) != 0) {
      FUN_06e6b790((fVar9 - (float)uVar10 * fVar5) + fVar6 * fVar20,
                   (fVar12 - (float)param_3 * fVar5) + (float)uVar2 * fVar20,
                   (fVar13 - (float)param_4 * fVar5) + (float)uVar16 * fVar20,uVar11,uVar15,uVar18,
                   uVar4,*(long *)(param_5 + 0x38),0);
      return;
    }
  }
LAB_05ff67c8:
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


