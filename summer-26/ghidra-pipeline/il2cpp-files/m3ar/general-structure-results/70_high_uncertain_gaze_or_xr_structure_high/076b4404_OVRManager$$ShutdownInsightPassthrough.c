/*
FUNCTION_NAME: OVRManager$$ShutdownInsightPassthrough
ENTRY_POINT: 076b4404
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


void OVRManager__ShutdownInsightPassthrough(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  int iVar5;
  long unaff_x19;
  undefined8 unaff_x20;
  ulong unaff_x21;
  undefined8 unaff_x22;
  undefined8 uVar6;
  undefined8 uVar7;
  long *unaff_x24;
  long *unaff_x25;
  float fVar8;
  
                    /* try { // try from 076b4408 to 077b446f has its CatchHandler @ 076b4090 */
  if (*(int *)(param_1 + 0xe4) == 0) {
    thunk_FUN_0408f364(param_1);
  }
  uVar3 = FUN_08589e5c();
  if ((uVar3 & 1) != 0) {
    if (*(int *)(*unaff_x24 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    unaff_x22 = OVRPassthroughColorLut__IsValidLutUpdate<Color32>();
  }
  fVar8 = (float)FUN_08594c50(0);
  uVar7 = *(undefined8 *)(unaff_x19 + 0x30);
  if (*(int *)(*unaff_x25 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
                    /* try { // try from 076b4470 to 077b447f has its CatchHandler @ 076b4480 */
  uVar3 = FUN_08589e5c(unaff_x22,uVar7,0);
                    /* catch() { ... } // from try @ 076b43f0 with catch @ 076b4480
                       catch() { ... } // from try @ 076b4470 with catch @ 076b4480 */
  if ((uVar3 & 1) == 0) {
    *(undefined4 *)(unaff_x19 + 0x178) = 1;
  }
  else {
                    /* try { // try from 076b4484 to 077b4487 has its CatchHandler @ 076b4490 */
                    /* try { // try from 076b4488 to 077b4493 has its CatchHandler @ 076b4090 */
                    /* catch() { ... } // from try @ 076b4484 with catch @ 076b4490 */
    if (DAT_01a2edb8 <= fVar8 - *(float *)(unaff_x19 + 0x174)) {
      iVar5 = 1;
    }
    else {
      iVar5 = *(int *)(unaff_x19 + 0x178) + 1;
    }
    *(int *)(unaff_x19 + 0x178) = iVar5;
    *(float *)(unaff_x19 + 0x174) = fVar8;
  }
  FUN_0889841c();
  lVar4 = *unaff_x24;
  *(undefined8 *)(unaff_x19 + 0x38) = unaff_x20;
  *(float *)(unaff_x19 + 0x174) = fVar8;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  uVar7 = OVRPassthroughColorLut__IsValidLutUpdate<Color32>();
  lVar4 = *unaff_x25;
  *(undefined8 *)(unaff_x19 + 0x40) = uVar7;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0408f364(lVar4);
  }
  uVar3 = FUN_0858816c(uVar7,0,0);
  if ((uVar3 & 1) != 0) {
    uVar7 = *(undefined8 *)(unaff_x19 + 0x40);
    if (*(int *)(*unaff_x24 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    if (DAT_095481c1 == '\0') {
      FUN_0403162c(PTR_DAT_08f8b308);
      DAT_095481c1 = '\x01';
    }
    if (*(int *)(*unaff_x24 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    FUN_04b24f08(uVar7);
  }
  puVar2 = PTR_DAT_08f8b308;
  if ((unaff_x21 & 1) != 0) {
    uVar7 = *(undefined8 *)(unaff_x19 + 0x28);
    if (*(int *)(*(long *)PTR_DAT_08f8b308 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    if (DAT_095481c2 == '\0') {
      FUN_0403162c(PTR_DAT_08f8b308);
      DAT_095481c2 = '\x01';
    }
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    FUN_04b24f08(uVar7);
    uVar7 = OVRPassthroughColorLut__IsValidLutUpdate<Color32>();
    puVar1 = PTR_DAT_08f65598;
    uVar6 = *(undefined8 *)(unaff_x19 + 0x28);
    if (*(int *)(*(long *)PTR_DAT_08f65598 + 0xe4) == 0) {
      thunk_FUN_0408f364(*(long *)PTR_DAT_08f65598);
    }
    uVar3 = FUN_08589e5c(uVar6,uVar7,0);
    if (((uVar3 & 1) != 0) && (*(char *)(unaff_x19 + 0x138) != '\0')) {
      uVar7 = *(undefined8 *)(unaff_x19 + 0x28);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      if (DAT_095481c3 == '\0') {
        FUN_0403162c(PTR_DAT_08f8b308);
        DAT_095481c3 = '\x01';
      }
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      FUN_04b24f08(uVar7);
    }
    uVar7 = *(undefined8 *)(unaff_x19 + 0x40);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    uVar3 = FUN_0858816c(uVar7,0,0);
    if (((uVar3 & 1) != 0) && (*(char *)(unaff_x19 + 0x185) != '\0')) {
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      if (DAT_095481c4 == '\0') {
        FUN_0403162c(PTR_DAT_08f8b308);
        DAT_095481c4 = '\x01';
      }
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      FUN_04b257fc();
    }
    *(undefined1 *)(unaff_x19 + 0x138) = 0;
    FUN_0889841c();
    lVar4 = *(long *)puVar1;
    uVar7 = *(undefined8 *)(unaff_x19 + 0x40);
    *(undefined8 *)(unaff_x19 + 0x38) = 0;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    uVar3 = FUN_0858816c(uVar7,0,0);
    if (((uVar3 & 1) != 0) && (*(char *)(unaff_x19 + 0x185) != '\0')) {
      uVar7 = *(undefined8 *)(unaff_x19 + 0x40);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      if (DAT_095481c5 == '\0') {
        FUN_0403162c(PTR_DAT_08f8b308);
        DAT_095481c5 = '\x01';
      }
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      FUN_04b24f08(uVar7);
    }
    lVar4 = *(long *)puVar2;
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
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    FUN_04b257fc(uVar7);
    *(undefined8 *)(unaff_x19 + 0x20) = 0;
  }
  return;
}


