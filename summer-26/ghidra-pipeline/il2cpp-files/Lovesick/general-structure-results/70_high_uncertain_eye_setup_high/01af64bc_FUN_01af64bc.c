/*
FUNCTION_NAME: FUN_01af64bc
ENTRY_POINT: 01af64bc
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


void FUN_01af64bc(int param_1)

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
  
  if ((DAT_0377d12d & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_5227);
    thunk_FUN_00d48444(OVRPlugin_OVRP_1_122_0_TypeInfo);
    DAT_0377d12d = 1;
  }
  local_48 = 0;
  local_50 = 0;
                    /* try { // try from 01af6510 to 01bf6537 has its CatchHandler @ 01af6884 */
  if (DAT_03774d76 == '\0') {
    thunk_FUN_00d48444(
                      Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                      );
    DAT_03774d76 = '\x01';
  }
  puVar3 = StringLiteral_5227;
  puVar2 = Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__;
  puVar1 = OVRPlugin_OVRP_1_122_0_TypeInfo;
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
                    /* try { // try from 01af65bc to 01bf65cb has its CatchHandler @ 01af6874 */
    if (param_1 == 1) {
      lVar4 = *(long *)StringLiteral_5227;
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar4 = *(long *)puVar3;
      }
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
                    /* try { // try from 01af65d4 to 01bf65d7 has its CatchHandler @ 01af6868 */
      if (*(int *)(lVar4 + 0xe0) == 0) {
                    /* try { // try from 01af65d8 to 01bf66eb has its CatchHandler @ 01af61c0 */
        thunk_FUN_00d32864();
        lVar4 = *(long *)puVar3;
      }
      uVar8 = *(undefined4 *)(*(long *)(lVar4 + 0xb8) + 0x18);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar1);
      }
      uVar5 = 5;
      uVar7 = 0xd;
    }
  }
  else {
                    /* try { // try from 01af656c to 01bf6593 has its CatchHandler @ 01af6880 */
    if (param_1 == 0x20) {
      lVar4 = *(long *)StringLiteral_5227;
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar4 = *(long *)puVar3;
      }
      uVar8 = *(undefined4 *)(*(long *)(lVar4 + 0xb8) + 0x18);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar1);
      }
      uVar5 = 4;
      uVar7 = 3;
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
                    /* try { // try from 01af65ac to 01bf65b3 has its CatchHandler @ 01af6878 */
      uVar5 = 5;
      uVar7 = 4;
    }
  }
  uVar6 = FUN_01aa0670(uVar5,2,uVar7,uVar8,&local_50,0);
  if ((uVar6 & 1) == 0) {
    if (DAT_03774d76 == '\0') {
      thunk_FUN_00d48444(
                        Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                        );
      DAT_03774d76 = '\x01';
    }
    uVar5 = *(undefined8 *)puVar2;
  }
                    /* try { // try from 01af66ec to 01bf6713 has its CatchHandler @ 01af6928 */
  return;
}


