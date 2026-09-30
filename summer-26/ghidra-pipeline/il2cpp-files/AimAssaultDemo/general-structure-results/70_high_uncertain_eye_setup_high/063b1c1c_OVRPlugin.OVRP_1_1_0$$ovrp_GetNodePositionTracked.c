/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_GetNodePositionTracked
ENTRY_POINT: 063b1c1c
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_1_0__ovrp_GetNodePositionTracked(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x20;
  
  puVar1 = PTR_DAT_07d867b8;
  if ((*(byte *)(unaff_x20 + 0x6d0) & 1) == 0) {
    FUN_0373b518(PTR_DAT_07db70b8);
                    /* try { // try from 063b1c38 to 064b1c3b has its CatchHandler @ 063b1cdc */
    FUN_0373b518(PTR_DAT_07d867b8);
                    /* try { // try from 063b1c48 to 064b1c4f has its CatchHandler @ 063b1cd8 */
    *(undefined1 *)(unaff_x20 + 0x6d0) = 1;
  }
                    /* try { // try from 063b1c50 to 064b1cb7 has its CatchHandler @ 063b1a44 */
  lVar3 = RootMotion_FinalIK_Finger___ctor(*(undefined8 *)puVar1,2);
  puVar2 = PTR_DAT_07db70b8;
  if (lVar3 != 0) {
    if (1 < *(uint *)(lVar3 + 0x18)) {
      *(undefined1 *)(lVar3 + 0x21) = 0x7f;
      **(long **)(*(long *)puVar2 + 0xb8) = lVar3;
      thunk_FUN_037aeb94(*(undefined8 *)(*(long *)puVar2 + 0xb8));
      lVar3 = RootMotion_FinalIK_Finger___ctor(*(undefined8 *)puVar1,2);
      if (lVar3 == 0) goto LAB_063b1d6c;
      if ((*(int *)(lVar3 + 0x18) != 0) &&
         (*(undefined1 *)(lVar3 + 0x20) = 0xc2, *(int *)(lVar3 + 0x18) != 1)) {
        *(undefined1 *)(lVar3 + 0x21) = 0xdf;
        *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8) = lVar3;
        thunk_FUN_037aeb94();
        lVar3 = RootMotion_FinalIK_Finger___ctor(*(undefined8 *)puVar1,2);
        if (lVar3 == 0) goto LAB_063b1d6c;
        if ((*(int *)(lVar3 + 0x18) != 0) &&
           (*(undefined1 *)(lVar3 + 0x20) = 0xe0, *(int *)(lVar3 + 0x18) != 1)) {
          *(undefined1 *)(lVar3 + 0x21) = 0xef;
          *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10) = lVar3;
          thunk_FUN_037aeb94();
          lVar3 = RootMotion_FinalIK_Finger___ctor(*(undefined8 *)puVar1,2);
          if (lVar3 == 0) goto LAB_063b1d6c;
          if ((*(int *)(lVar3 + 0x18) != 0) &&
             (*(undefined1 *)(lVar3 + 0x20) = 0xf0, *(int *)(lVar3 + 0x18) != 1)) {
            *(undefined1 *)(lVar3 + 0x21) = 0xf4;
            *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18) = lVar3;
            thunk_FUN_037aeb94();
            return;
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_0373b7bc();
  }
LAB_063b1d6c:
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


