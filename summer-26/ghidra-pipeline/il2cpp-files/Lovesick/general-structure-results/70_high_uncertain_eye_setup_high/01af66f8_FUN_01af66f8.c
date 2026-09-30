/*
FUNCTION_NAME: FUN_01af66f8
ENTRY_POINT: 01af66f8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_01af66f8(int param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined8 local_50;
  undefined4 local_48;
  
  if ((DAT_0377d12e & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_5227);
    thunk_FUN_00d48444(OVRPlugin_OVRP_1_122_0_TypeInfo);
    DAT_0377d12e = 1;
  }
  local_48 = 0;
                    /* try { // try from 01af6748 to 01bf6773 has its CatchHandler @ 01af6924 */
  local_50 = 0;
  if (DAT_03774d76 == '\0') {
    thunk_FUN_00d48444(
                      Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                      );
    DAT_03774d76 = '\x01';
  }
  puVar3 = StringLiteral_5227;
  puVar2 = Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__;
  puVar1 = OVRPlugin_OVRP_1_122_0_TypeInfo;
                    /* try { // try from 01af6774 to 01bf677f has its CatchHandler @ 01af687c */
                    /* try { // try from 01af6780 to 01bf683b has its CatchHandler @ 01af61c0 */
  local_50 = **(undefined8 **)
               (*(long *)
                 Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__ +
               0xb8);
  local_48 = *(undefined4 *)
              (*(undefined8 **)
                (*(long *)
                  Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__ +
                0xb8) + 1);
  if (param_1 < 3) {
    if (param_1 == 1) {
                    /* catch() { ... } // from try @ 01af6510 with catch @ 01af6884 */
      lVar4 = *(long *)StringLiteral_5227;
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar4 = *(long *)puVar3;
      }
                    /* try { // try from 01af689c to 01bf689f has its CatchHandler @ 01af6918 */
      uVar8 = *(undefined4 *)(*(long *)(lVar4 + 0xb8) + 0x18);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar1);
      }
      uVar5 = 4;
      uVar7 = 0xc;
    }
    else {
      if (param_1 != 2) {
        return;
      }
      lVar4 = *(long *)StringLiteral_5227;
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar4 = *(long *)puVar3;
      }
      uVar8 = *(undefined4 *)(*(long *)(lVar4 + 0xb8) + 0x18);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar1);
      }
      uVar5 = 5;
                    /* try { // try from 01af683c to 01bf683f has its CatchHandler @ 01af6864 */
      uVar7 = 0xd;
                    /* try { // try from 01af6840 to 01bf6843 has its CatchHandler @ 01af61c0 */
    }
  }
  else if (param_1 == 0x20) {
                    /* try { // try from 01af6844 to 01bf6847 has its CatchHandler @ 01af6860 */
    lVar4 = *(long *)StringLiteral_5227;
                    /* try { // try from 01af6848 to 01bf684b has its CatchHandler @ 01af685c */
                    /* try { // try from 01af684c to 01bf689b has its CatchHandler @ 01af61c0 */
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar4 = *(long *)puVar3;
    }
                    /* catch() { ... } // from try @ 01af6848 with catch @ 01af685c */
                    /* catch() { ... } // from try @ 01af6844 with catch @ 01af6860 */
                    /* catch() { ... } // from try @ 01af683c with catch @ 01af6864 */
    uVar8 = *(undefined4 *)(*(long *)(lVar4 + 0xb8) + 0x18);
                    /* catch() { ... } // from try @ 01af65d4 with catch @ 01af6868 */
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar1);
    }
                    /* catch() { ... } // from try @ 01af65bc with catch @ 01af6874 */
                    /* catch() { ... } // from try @ 01af65ac with catch @ 01af6878 */
    uVar5 = 4;
                    /* catch() { ... } // from try @ 01af6774 with catch @ 01af687c */
    uVar7 = 3;
                    /* catch() { ... } // from try @ 01af656c with catch @ 01af6880 */
  }
  else {
    if (param_1 != 0x40) {
      return;
    }
    lVar4 = *(long *)StringLiteral_5227;
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar4 = *(long *)puVar3;
    }
    uVar8 = *(undefined4 *)(*(long *)(lVar4 + 0xb8) + 0x18);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar1);
    }
    uVar5 = 5;
    uVar7 = 4;
  }
  uVar6 = FUN_01aa0670(uVar5,0,uVar7,uVar8,&local_50,0);
  if ((uVar6 & 1) == 0) {
    if (DAT_03774d76 == '\0') {
      thunk_FUN_00d48444(
                        Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                        );
      DAT_03774d76 = '\x01';
    }
    uVar5 = *(undefined8 *)puVar2;
  }
  return;
}


