/*
FUNCTION_NAME: FUN_05ee33e8
ENTRY_POINT: 05ee33e8
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 106
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_7;validity_or_gating_hits_15;ui_or_gameplay_sink_hits_3;functionality_eye_api_context_without_clear_sink_hits_4
*/


void FUN_05ee33e8(long *param_1,float *param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
                    /* try { // try from 05ee3414 to 05fe348b has its CatchHandler @ 05ee36e4 */
  if ((DAT_06b83d3b & 1) == 0) {
    FUN_02d6084c(OVRPlugin_OVRP_1_54_0_TypeInfo);
    FUN_02d6084c(PTR_DAT_067860b8);
    FUN_02d6084c(OVRPlugin_OVRP_1_55_0_TypeInfo);
    FUN_02d6084c(PTR_DAT_06767fc8);
    FUN_02d6084c(PTR_DAT_0675e1b8);
    DAT_06b83d3b = 1;
  }
  uVar2 = FUN_05ee0ffc(param_1);
  lVar4 = param_1[7];
  if (lVar4 == 0)
  goto 
  UnityEngine_XR_OpenXR_Features_Interactions_OculusTouchControllerProfile_OculusTouchController__get_secondaryButton
  ;
  if (*(char *)(lVar4 + 0x38) == '\0') {
    return;
  }
  fVar7 = param_2[5];
  fVar11 = param_2[6];
  if ((uVar2 & 1) != 0) {
    fVar6 = 0.0;
    goto LAB_05ee36f0;
  }
  fVar6 = param_2[4];
  uVar5 = *(undefined8 *)(lVar4 + 0x40);
                    /* try { // try from 05ee3498 to 05fe349f has its CatchHandler @ 05ee36a0 */
  fVar13 = *param_2;
  fVar12 = param_2[1];
  if (DAT_06b72814 == '\0') {
                    /* try { // try from 05ee34ac to 05fe34b3 has its CatchHandler @ 05ee369c */
    FUN_02d6084c(PTR_DAT_0675ebd8);
    DAT_06b72814 = '\x01';
  }
                    /* try { // try from 05ee34c0 to 05fe358b has its CatchHandler @ 05ee36e8 */
  fVar14 = ABS(fVar13);
  fVar10 = fVar14;
  if (fVar14 <= 0.0) {
    fVar10 = 0.0;
  }
  fVar9 = **(float **)(*(long *)PTR_DAT_0675ebd8 + 0xb8) * 8.0;
  fVar8 = fVar10 * DAT_012084b4;
  if (fVar10 * DAT_012084b4 <= fVar9) {
    fVar8 = fVar9;
  }
  if (ABS(0.0 - fVar13) < fVar8) {
    fVar10 = ABS(fVar12);
    if (fVar10 <= 0.0) {
      fVar10 = 0.0;
    }
    fVar8 = fVar10 * DAT_012084b4;
    if (fVar10 * DAT_012084b4 <= fVar9) {
      fVar8 = fVar9;
    }
    if (fVar8 <= ABS(0.0 - fVar12)) goto LAB_05ee3520;
LAB_05ee3564:
    fVar6 = 0.0;
  }
  else {
LAB_05ee3520:
    fVar10 = (float)FUN_0607500c(0);
    if (fVar13 * fVar13 + fVar12 * fVar12 <=
        *(float *)((long)param_1 + 0x5c) * *(float *)((long)param_1 + 0x5c)) goto LAB_05ee3564;
    if (fVar14 <= ABS(fVar12)) {
      if (fVar12 <= 0.0) {
        fVar14 = 4.2039e-45;
      }
      else {
        fVar14 = 1.4013e-45;
      }
    }
    else if (fVar13 <= 0.0) {
      fVar14 = 0.0;
    }
    else {
      fVar14 = 2.8026e-45;
    }
    fVar8 = 0.0;
    if ((fVar6 == 0.0) || (fVar14 != fVar7)) {
LAB_05ee3774:
      plVar3 = (long *)FUN_05ee384c(param_1);
      if (plVar3 == (long *)0x0)
      goto 
      UnityEngine_XR_OpenXR_Features_Interactions_OculusTouchControllerProfile_OculusTouchController__get_secondaryButton
      ;
      (**(code **)(*plVar3 + 0x178))(plVar3,*(undefined8 *)(*plVar3 + 0x180));
      *(float *)(plVar3 + 4) = fVar13;
      *(float *)((long)plVar3 + 0x24) = fVar12;
      *(float *)(plVar3 + 5) = fVar14;
      lVar4 = param_1[0x22];
      if (lVar4 != 0) {
        (**(code **)(lVar4 + 0x18))
                  (*(undefined8 *)(lVar4 + 0x40),uVar5,plVar3,*(undefined8 *)(lVar4 + 0x28));
      }
      puVar1 = PTR_DAT_06767fc8;
      if (*(int *)(*(long *)PTR_DAT_06767fc8 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      if (DAT_06b80b9b == '\0') {
        FUN_02d6084c(PTR_DAT_06767fc8);
        DAT_06b80b9b = '\x01';
      }
      lVar4 = *(long *)puVar1;
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar4 = *(long *)puVar1;
      }
      FUN_033c3938(uVar5,plVar3,*(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x78),
                   *(undefined8 *)PTR_DAT_067860b8);
      uVar2 = (**(code **)(*plVar3 + 0x198))(plVar3,*(undefined8 *)(*plVar3 + 0x1a0));
      fVar6 = (float)((int)fVar8 + 1);
      fVar7 = fVar14;
      fVar11 = fVar10;
      if ((uVar2 & 1) != 0) goto LAB_05ee36f0;
    }
    else {
      if ((int)fVar6 < 2) {
        fVar9 = *(float *)(param_1 + 0xc);
      }
      else {
        fVar9 = *(float *)((long)param_1 + 100);
      }
      fVar8 = fVar6;
      if (fVar11 + fVar9 < fVar10) goto LAB_05ee3774;
    }
  }
  if (*(int *)(*(long *)PTR_DAT_0675e1b8 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar2 = FUN_0606a004(uVar5,0,0);
  if ((uVar2 & 1) != 0) {
    plVar3 = (long *)(**(code **)(*param_1 + 0x268))(param_1,*(undefined8 *)(*param_1 + 0x270));
                    /* try { // try from 05ee35ac to 05fe35b3 has its CatchHandler @ 05ee36e4 */
    if (((uint)param_2[2] & 1) != 0) {
                    /* try { // try from 05ee35b4 to 05fe35b7 has its CatchHandler @ 05ee36b0 */
      lVar4 = param_1[0x23];
                    /* try { // try from 05ee35b8 to 05fe35bb has its CatchHandler @ 05ee36ac */
      if (lVar4 != 0) {
                    /* try { // try from 05ee35bc to 05fe35bf has its CatchHandler @ 05ee36a8 */
                    /* try { // try from 05ee35c0 to 05fe35c3 has its CatchHandler @ 05ee36a4 */
                    /* try { // try from 05ee35c4 to 05fe35c7 has its CatchHandler @ 05ee36e8 */
                    /* try { // try from 05ee35c8 to 05fe35cf has its CatchHandler @ 05ee36d0 */
                    /* try { // try from 05ee35d0 to 05fe35d7 has its CatchHandler @ 05ee36cc */
        (**(code **)(lVar4 + 0x18))
                  (*(undefined8 *)(lVar4 + 0x40),uVar5,plVar3,*(undefined8 *)(lVar4 + 0x28));
      }
      puVar1 = PTR_DAT_06767fc8;
                    /* try { // try from 05ee35d8 to 05fe35df has its CatchHandler @ 05ee36c8 */
                    /* try { // try from 05ee35e0 to 05fe35e7 has its CatchHandler @ 05ee36c4 */
      if (*(int *)(*(long *)PTR_DAT_06767fc8 + 0xe4) == 0) {
                    /* try { // try from 05ee35e8 to 05fe35f3 has its CatchHandler @ 05ee36e8 */
        thunk_FUN_02dbd7b4();
      }
      if (DAT_06b80b9d == '\0') {
                    /* try { // try from 05ee35f8 to 05fe364b has its CatchHandler @ 05ee368c */
        FUN_02d6084c(PTR_DAT_06767fc8);
        DAT_06b80b9d = '\x01';
      }
      lVar4 = *(long *)puVar1;
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar4 = *(long *)puVar1;
      }
      FUN_033c3938(uVar5,plVar3,*(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x80),
                   *(undefined8 *)OVRPlugin_OVRP_1_55_0_TypeInfo);
    }
    if (plVar3 == (long *)0x0) {

      UnityEngine_XR_OpenXR_Features_Interactions_OculusTouchControllerProfile_OculusTouchController__get_secondaryButton
      :
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
                    /* try { // try from 05ee364c to 05fe364f has its CatchHandler @ 05ee3688 */
                    /* try { // try from 05ee3650 to 05fe3653 has its CatchHandler @ 05ee3684 */
    uVar2 = (**(code **)(*plVar3 + 0x198))(plVar3,*(undefined8 *)(*plVar3 + 0x1a0));
                    /* try { // try from 05ee3654 to 05fe3657 has its CatchHandler @ 05ee3680 */
                    /* try { // try from 05ee3658 to 05fe365b has its CatchHandler @ 05ee367c */
                    /* try { // try from 05ee365c to 05fe365f has its CatchHandler @ 05ee36c0 */
    if (((uVar2 & 1) == 0) && (((uint)param_2[3] & 1) != 0)) {
                    /* try { // try from 05ee3660 to 05fe3663 has its CatchHandler @ 05ee36bc */
      lVar4 = param_1[0x24];
                    /* try { // try from 05ee3664 to 05fe3667 has its CatchHandler @ 05ee36dc */
      if (lVar4 != 0) {
                    /* try { // try from 05ee3668 to 05fe366b has its CatchHandler @ 05ee3678 */
                    /* catch() { ... } // from try @ 05ee2f74 with catch @ 05ee366c
                       try { // try from 05ee366c to 05fe36ff has its CatchHandler @ 05ee2bac */
                    /* catch() { ... } // from try @ 05ee2e6c with catch @ 05ee3670 */
                    /* catch() { ... } // from try @ 05ee32b0 with catch @ 05ee3674 */
                    /* catch() { ... } // from try @ 05ee3668 with catch @ 05ee3678 */
                    /* catch() { ... } // from try @ 05ee3658 with catch @ 05ee367c */
        (**(code **)(lVar4 + 0x18))
                  (*(undefined8 *)(lVar4 + 0x40),uVar5,plVar3,*(undefined8 *)(lVar4 + 0x28));
      }
                    /* catch() { ... } // from try @ 05ee3654 with catch @ 05ee3680 */
      puVar1 = PTR_DAT_06767fc8;
                    /* catch() { ... } // from try @ 05ee3650 with catch @ 05ee3684 */
                    /* catch() { ... } // from try @ 05ee364c with catch @ 05ee3688 */
                    /* catch() { ... } // from try @ 05ee35f8 with catch @ 05ee368c */
                    /* catch() { ... } // from try @ 05ee31a4 with catch @ 05ee3690
                       catch() { ... } // from try @ 05ee3318 with catch @ 05ee3690 */
      if (*(int *)(*(long *)PTR_DAT_06767fc8 + 0xe4) == 0) {
                    /* catch() { ... } // from try @ 05ee3274 with catch @ 05ee3694 */
        thunk_FUN_02dbd7b4();
      }
                    /* catch() { ... } // from try @ 05ee3214 with catch @ 05ee3698 */
                    /* catch() { ... } // from try @ 05ee34ac with catch @ 05ee369c */
                    /* catch() { ... } // from try @ 05ee3498 with catch @ 05ee36a0 */
      if (DAT_06b80b9c == '\0') {
                    /* catch() { ... } // from try @ 05ee35c0 with catch @ 05ee36a4 */
                    /* catch() { ... } // from try @ 05ee35bc with catch @ 05ee36a8 */
                    /* catch() { ... } // from try @ 05ee35b8 with catch @ 05ee36ac */
        FUN_02d6084c(PTR_DAT_06767fc8);
                    /* catch() { ... } // from try @ 05ee35b4 with catch @ 05ee36b0 */
                    /* catch() { ... } // from try @ 05ee2f8c with catch @ 05ee36b4 */
        DAT_06b80b9c = '\x01';
      }
                    /* catch() { ... } // from try @ 05ee2e84 with catch @ 05ee36b8 */
      lVar4 = *(long *)puVar1;
                    /* catch() { ... } // from try @ 05ee3134 with catch @ 05ee36bc
                       catch() { ... } // from try @ 05ee31d0 with catch @ 05ee36bc
                       catch() { ... } // from try @ 05ee3660 with catch @ 05ee36bc */
                    /* catch() { ... } // from try @ 05ee309c with catch @ 05ee36c0
                       catch() { ... } // from try @ 05ee3158 with catch @ 05ee36c0
                       catch() { ... } // from try @ 05ee365c with catch @ 05ee36c0 */
      if (*(int *)(lVar4 + 0xe4) == 0) {
                    /* catch() { ... } // from try @ 05ee3004 with catch @ 05ee36c4
                       catch() { ... } // from try @ 05ee30bc with catch @ 05ee36c4
                       catch() { ... } // from try @ 05ee35e0 with catch @ 05ee36c4 */
        thunk_FUN_02dbd7b4();
                    /* catch() { ... } // from try @ 05ee2efc with catch @ 05ee36c8
                       catch() { ... } // from try @ 05ee3024 with catch @ 05ee36c8
                       catch() { ... } // from try @ 05ee35d8 with catch @ 05ee36c8 */
        lVar4 = *(long *)puVar1;
      }
                    /* catch() { ... } // from try @ 05ee2dac with catch @ 05ee36cc
                       catch() { ... } // from try @ 05ee2f20 with catch @ 05ee36cc
                       catch() { ... } // from try @ 05ee35d0 with catch @ 05ee36cc */
                    /* catch() { ... } // from try @ 05ee2df4 with catch @ 05ee36d0
                       catch() { ... } // from try @ 05ee35c8 with catch @ 05ee36d0 */
                    /* catch() { ... } // from try @ 05ee2d1c with catch @ 05ee36d4 */
                    /* catch() { ... } // from try @ 05ee32d0 with catch @ 05ee36d8 */
                    /* catch() { ... } // from try @ 05ee3330 with catch @ 05ee36dc
                       catch() { ... } // from try @ 05ee3664 with catch @ 05ee36dc */
                    /* catch() { ... } // from try @ 05ee339c with catch @ 05ee36e0 */
                    /* catch() { ... } // from try @ 05ee3414 with catch @ 05ee36e4
                       catch() { ... } // from try @ 05ee35ac with catch @ 05ee36e4 */
                    /* catch() { ... } // from try @ 05ee34c0 with catch @ 05ee36e8
                       catch() { ... } // from try @ 05ee35c4 with catch @ 05ee36e8
                       catch() { ... } // from try @ 05ee35e8 with catch @ 05ee36e8 */
      FUN_033c3938(uVar5,plVar3,*(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x88),
                   *(undefined8 *)OVRPlugin_OVRP_1_54_0_TypeInfo);
    }
  }
LAB_05ee36f0:
  param_2[6] = fVar11;
  param_2[2] = 0.0;
  param_2[3] = 0.0;
  *(ulong *)(param_2 + 4) = CONCAT44(fVar7,fVar6);
                    /* try { // try from 05ee3700 to 05fe3717 has its CatchHandler @ 05ee391c */
                    /* try { // try from 05ee3718 to 05fe390b has its CatchHandler @ 05ee2bac */
  return;
}


