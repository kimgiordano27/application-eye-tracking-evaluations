/*
FUNCTION_NAME: OVRManager$$StaticShutdownMixedRealityCapture
ENTRY_POINT: 076b42fc
PROGRAM: m3ar-libil2cpp.so
SCORE: 81
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;frame_or_lifecycle_behavior;functionality_gaze_retrieval_or_extraction
*/


void OVRManager__StaticShutdownMixedRealityCapture(void)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  int iVar5;
  long unaff_x19;
  undefined8 unaff_x20;
  ulong unaff_x21;
  undefined8 *unaff_x23;
  void *unaff_x24;
  undefined2 unaff_w25;
  long unaff_x26;
  float fVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
                    /* try { // try from 076b42fc to 077b4307 has its CatchHandler @ 076b43d8 */
  *(char *)(unaff_x26 + 0xc0b) = (char)unaff_w25;
                    /* try { // try from 076b430c to 077b4317 has its CatchHandler @ 076b43cc */
  uVar8 = *unaff_x23;
                    /* try { // try from 076b431c to 077b4327 has its CatchHandler @ 076b43d0 */
  uVar7 = **(undefined8 **)(*(long *)PTR_DAT_08f65578 + 0xb8);
  *(undefined2 *)(unaff_x19 + 0x184) = unaff_w25;
                    /* try { // try from 076b432c to 077b4337 has its CatchHandler @ 076b42a0 */
  unaff_x23[2] = uVar8;
  unaff_x23[1] = uVar7;
  memcpy((void *)(unaff_x19 + 0xc0),unaff_x24,0x70);
                    /* try { // try from 076b4338 to 077b4393 has its CatchHandler @ 076b4090 */
  FUN_0889eef8();
  puVar1 = PTR_DAT_08f65598;
  uVar7 = *(undefined8 *)(unaff_x19 + 0x20);
  if (*(int *)(*(long *)PTR_DAT_08f65598 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  uVar3 = FUN_0858816c(uVar7);
  if ((uVar3 & 1) != 0) {
    FUN_0889d004();
    *(undefined8 *)(unaff_x19 + 0x20) = unaff_x20;
  }
  puVar2 = PTR_DAT_08f8b308;
                    /* try { // try from 076b4394 to 077b43b3 has its CatchHandler @ 076b43c0 */
  if (*(int *)(*(long *)PTR_DAT_08f8b308 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  if (DAT_095481c0 == '\0') {
                    /* try { // try from 076b43b8 to 077b43bb has its CatchHandler @ 076b43d8 */
                    /* try { // try from 076b43bc to 077b43bf has its CatchHandler @ 076b43d4 */
    FUN_0403162c(PTR_DAT_08f8b308);
                    /* catch() { ... } // from try @ 076b4394 with catch @ 076b43c0
                       try { // try from 076b43c0 to 077b43ef has its CatchHandler @ 076b4090 */
                    /* catch() { ... } // from try @ 076b42d0 with catch @ 076b43c4 */
    DAT_095481c0 = '\x01';
  }
                    /* catch() { ... } // from try @ 076b42d4 with catch @ 076b43c8 */
                    /* catch() { ... } // from try @ 076b430c with catch @ 076b43cc */
                    /* catch() { ... } // from try @ 076b431c with catch @ 076b43d0 */
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                    /* catch() { ... } // from try @ 076b43bc with catch @ 076b43d4 */
    thunk_FUN_0408f364();
                    /* catch() { ... } // from try @ 076b42fc with catch @ 076b43d8
                       catch() { ... } // from try @ 076b43b8 with catch @ 076b43d8 */
  }
                    /* try { // try from 076b43f0 to 077b4407 has its CatchHandler @ 076b4480 */
  uVar7 = FUN_04b257fc();
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0408f364(*(long *)puVar1);
  }
  uVar3 = FUN_08589e5c(uVar7,0,0);
  if ((uVar3 & 1) != 0) {
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    uVar7 = OVRPassthroughColorLut__IsValidLutUpdate<Color32>();
  }
  fVar6 = (float)FUN_08594c50(0);
  uVar8 = *(undefined8 *)(unaff_x19 + 0x30);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  uVar3 = FUN_08589e5c(uVar7,uVar8,0);
  if ((uVar3 & 1) == 0) {
    *(undefined4 *)(unaff_x19 + 0x178) = 1;
  }
  else {
    if (DAT_01a2edb8 <= fVar6 - *(float *)(unaff_x19 + 0x174)) {
      iVar5 = 1;
    }
    else {
      iVar5 = *(int *)(unaff_x19 + 0x178) + 1;
    }
    *(int *)(unaff_x19 + 0x178) = iVar5;
    *(float *)(unaff_x19 + 0x174) = fVar6;
  }
  FUN_0889841c();
  lVar4 = *(long *)puVar2;
  *(undefined8 *)(unaff_x19 + 0x38) = unaff_x20;
  *(float *)(unaff_x19 + 0x174) = fVar6;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  uVar7 = OVRPassthroughColorLut__IsValidLutUpdate<Color32>();
  lVar4 = *(long *)puVar1;
  *(undefined8 *)(unaff_x19 + 0x40) = uVar7;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0408f364(lVar4);
  }
  uVar3 = FUN_0858816c(uVar7,0,0);
  if ((uVar3 & 1) != 0) {
    uVar7 = *(undefined8 *)(unaff_x19 + 0x40);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    if (DAT_095481c1 == '\0') {
      FUN_0403162c(PTR_DAT_08f8b308);
      DAT_095481c1 = '\x01';
    }
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    FUN_04b24f08(uVar7);
  }
  puVar1 = PTR_DAT_08f8b308;
  if ((unaff_x21 & 1) != 0) {
    uVar7 = *(undefined8 *)(unaff_x19 + 0x28);
    if (*(int *)(*(long *)PTR_DAT_08f8b308 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    if (DAT_095481c2 == '\0') {
      FUN_0403162c(PTR_DAT_08f8b308);
      DAT_095481c2 = '\x01';
    }
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    FUN_04b24f08(uVar7);
    uVar7 = OVRPassthroughColorLut__IsValidLutUpdate<Color32>();
    puVar2 = PTR_DAT_08f65598;
    uVar8 = *(undefined8 *)(unaff_x19 + 0x28);
    if (*(int *)(*(long *)PTR_DAT_08f65598 + 0xe4) == 0) {
      thunk_FUN_0408f364(*(long *)PTR_DAT_08f65598);
    }
    uVar3 = FUN_08589e5c(uVar8,uVar7,0);
    if (((uVar3 & 1) != 0) && (*(char *)(unaff_x19 + 0x138) != '\0')) {
      uVar7 = *(undefined8 *)(unaff_x19 + 0x28);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      if (DAT_095481c3 == '\0') {
        FUN_0403162c(PTR_DAT_08f8b308);
        DAT_095481c3 = '\x01';
      }
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      FUN_04b24f08(uVar7);
    }
    uVar7 = *(undefined8 *)(unaff_x19 + 0x40);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    uVar3 = FUN_0858816c(uVar7,0,0);
    if (((uVar3 & 1) != 0) && (*(char *)(unaff_x19 + 0x185) != '\0')) {
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      if (DAT_095481c4 == '\0') {
        FUN_0403162c(PTR_DAT_08f8b308);
        DAT_095481c4 = '\x01';
      }
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      FUN_04b257fc();
    }
    *(undefined1 *)(unaff_x19 + 0x138) = 0;
    FUN_0889841c();
    lVar4 = *(long *)puVar2;
    uVar7 = *(undefined8 *)(unaff_x19 + 0x40);
    *(undefined8 *)(unaff_x19 + 0x38) = 0;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    uVar3 = FUN_0858816c(uVar7,0,0);
    if (((uVar3 & 1) != 0) && (*(char *)(unaff_x19 + 0x185) != '\0')) {
      uVar7 = *(undefined8 *)(unaff_x19 + 0x40);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      if (DAT_095481c5 == '\0') {
        FUN_0403162c(PTR_DAT_08f8b308);
        DAT_095481c5 = '\x01';
      }
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      FUN_04b24f08(uVar7);
    }
    lVar4 = *(long *)puVar1;
    uVar7 = *(undefined8 *)(unaff_x19 + 0x20);
    *(undefined1 *)(unaff_x19 + 0x185) = 0;
    *(undefined8 *)(unaff_x19 + 0x40) = 0;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    if (DAT_095481c6 == '\0') {
      FUN_0403162c(PTR_DAT_08f8b308);
      DAT_095481c6 = '\x01';
    }
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    FUN_04b257fc(uVar7);
    *(undefined8 *)(unaff_x19 + 0x20) = 0;
  }
  return;
}


