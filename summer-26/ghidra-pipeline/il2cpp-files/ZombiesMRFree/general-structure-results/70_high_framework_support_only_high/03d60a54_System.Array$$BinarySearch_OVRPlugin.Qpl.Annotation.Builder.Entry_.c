/*
FUNCTION_NAME: System.Array$$BinarySearch<OVRPlugin.Qpl.Annotation.Builder.Entry>
ENTRY_POINT: 03d60a54
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__BinarySearch<OVRPlugin_Qpl_Annotation_Builder_Entry>(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x19;
  int unaff_w23;
  int unaff_w24;
  long unaff_x25;
  long lVar6;
  
  if (unaff_x25 == 0) {
                    /* try { // try from 03d60b34 to 03e60b37 has its CatchHandler @ 03d60b50 */
    thunk_FUN_03037804(PTR_DAT_06f7c188);
    uVar4 = thunk_FUN_0301080c();
    uVar5 = thunk_FUN_03037804(PTR_DAT_06f98f28);
                    /* catch() { ... } // from try @ 03d60b34 with catch @ 03d60b50 */
    FUN_05a5e9c8(uVar4,uVar5,0);
  }
  else if ((unaff_w24 < 0) || (unaff_w23 < 0)) {
    puVar1 = PTR_DAT_06f6e3c0;
    if (-1 < unaff_w23) {
      puVar1 = PTR_DAT_06f7fad8;
    }
    uVar5 = thunk_FUN_03037804(puVar1);
    thunk_FUN_03037804(PTR_DAT_06f7a510);
                    /* try { // try from 03d60b90 to 03e60bb7 has its CatchHandler @ 03d60bcc */
    uVar4 = thunk_FUN_0301080c();
    uVar3 = thunk_FUN_03037804(PTR_DAT_06f98f48);
    FUN_05a61b10(uVar4,uVar5,uVar3,0);
                    /* try { // try from 03d60bb8 to 03e60bc3 has its CatchHandler @ 03d60570 */
  }
  else {
    if (unaff_w24 <= *(int *)(unaff_x25 + 0x18) - unaff_w23) {
      lVar2 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x10);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_02feb2c4();
      }
      if (*(int *)(lVar2 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      lVar6 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
      lVar2 = *(long *)(lVar6 + 0x20);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_02feb2c4();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x48);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_02feb2c4();
      }
      if (*(int *)(lVar2 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      lVar2 = *(long *)(lVar6 + 0x20);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
                    /* try { // try from 03d60ad4 to 03e60ad7 has its CatchHandler @ 03d60b18 */
        lVar2 = FUN_02feb2c4();
      }
                    /* try { // try from 03d60ad8 to 03e60adb has its CatchHandler @ 03d60b10 */
                    /* try { // try from 03d60adc to 03e60adf has its CatchHandler @ 03d60b18 */
      lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x48);
                    /* try { // try from 03d60ae0 to 03e60ae3 has its CatchHandler @ 03d60570 */
                    /* try { // try from 03d60ae4 to 03e60ae7 has its CatchHandler @ 03d60b00 */
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
                    /* try { // try from 03d60ae8 to 03e60aef has its CatchHandler @ 03d60570 */
        lVar2 = FUN_02feb2c4();
      }
                    /* try { // try from 03d60af0 to 03e60af7 has its CatchHandler @ 03d60afc */
      if (**(long **)(lVar2 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02fe94e8();
      }
                    /* catch() { ... } // from try @ 03d607fc with catch @ 03d60af8
                       try { // try from 03d60af8 to 03e60b33 has its CatchHandler @ 03d60570 */
                    /* catch() { ... } // from try @ 03d60af0 with catch @ 03d60afc */
                    /* catch() { ... } // from try @ 03d60ae4 with catch @ 03d60b00 */
                    /* catch() { ... } // from try @ 03d60820 with catch @ 03d60b04 */
                    /* catch() { ... } // from try @ 03d607c0 with catch @ 03d60b08 */
                    /* catch() { ... } // from try @ 03d60938 with catch @ 03d60b0c */
                    /* catch() { ... } // from try @ 03d60ad8 with catch @ 03d60b10 */
                    /* catch() { ... } // from try @ 03d608dc with catch @ 03d60b14 */
                    /* catch() { ... } // from try @ 03d60ad4 with catch @ 03d60b18
                       catch() { ... } // from try @ 03d60adc with catch @ 03d60b18 */
                    /* catch() { ... } // from try @ 03d60958 with catch @ 03d60b1c */
      FUN_05430dc4();
      return;
    }
                    /* try { // try from 03d60bc4 to 03e60bcb has its CatchHandler @ 03d60bcc */
    thunk_FUN_03037804(PTR_DAT_06f6d8e8);
                    /* catch() { ... } // from try @ 03d60b90 with catch @ 03d60bcc
                       catch() { ... } // from try @ 03d60bc4 with catch @ 03d60bcc */
    uVar4 = thunk_FUN_0301080c();
                    /* try { // try from 03d60bd0 to 03e60e27 has its CatchHandler @ 03d60bd0
                       catch() { ... } // from try @ 03d60bd0 with catch @ 03d60bd0
                       catch() { ... } // from try @ 03d61058 with catch @ 03d60bd0
                       catch() { ... } // from try @ 03d611b4 with catch @ 03d60bd0
                       catch() { ... } // from try @ 03d611bc with catch @ 03d60bd0
                       catch() { ... } // from try @ 03d611cc with catch @ 03d60bd0
                       catch() { ... } // from try @ 03d6128c with catch @ 03d60bd0 */
    uVar5 = thunk_FUN_03037804(PTR_DAT_06f98f50);
    FUN_05a64d00(uVar4,uVar5,0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe93c0(uVar4);
}


