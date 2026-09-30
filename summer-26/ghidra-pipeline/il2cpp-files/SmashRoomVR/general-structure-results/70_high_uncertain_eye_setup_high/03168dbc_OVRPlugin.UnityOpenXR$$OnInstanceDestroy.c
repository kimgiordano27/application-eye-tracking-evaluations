/*
FUNCTION_NAME: OVRPlugin.UnityOpenXR$$OnInstanceDestroy
ENTRY_POINT: 03168dbc
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_UnityOpenXR__OnInstanceDestroy(long param_1)

{
  ulong in_x9;
  long unaff_x19;
  long *unaff_x20;
  undefined1 unaff_w21;
  long unaff_x22;
  long *unaff_x23;
  ulong unaff_x24;
  ulong uVar1;
  long unaff_x25;
  ulong unaff_x26;
  float fVar2;
  float unaff_s9;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  while ((uVar1 = unaff_x24, unaff_x26 < in_x9 && (uVar1 < in_x9))) {
    param_1 = param_1 + unaff_x22;
    fVar3 = *(float *)(param_1 + -0x38);
    fVar2 = *(float *)(param_1 + -0x34);
    fVar5 = *(float *)(param_1 + -0x3c);
    fVar7 = *(float *)(param_1 + -0x1c);
    fVar6 = *(float *)(param_1 + -0x18);
    fVar4 = *(float *)(param_1 + -0x14);
                    /* try { // try from 03168de4 to 03268df3 has its CatchHandler @ 03168e64 */
    if (*(char *)(unaff_x25 + 0x25c) == '\0') {
      thunk_FUN_01ad9084();
      *(undefined1 *)(unaff_x25 + 0x25c) = unaff_w21;
    }
    if (*(int *)(*unaff_x23 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
                    /* try { // try from 03168e04 to 03268e0b has its CatchHandler @ 03168e60 */
    param_1 = *unaff_x20;
    if (param_1 == 0) {
LAB_03168ea0:
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
                    /* try { // try from 03168e14 to 03268e1f has its CatchHandler @ 03168e5c */
    if ((*(uint *)(param_1 + 0x18) <= unaff_x26) || (*(uint *)(param_1 + 0x18) <= uVar1)) break;
                    /* try { // try from 03168e20 to 03268e7b has its CatchHandler @ 03168da4 */
    fVar5 = fVar5 - fVar7;
    fVar3 = fVar3 - fVar6;
    fVar2 = fVar2 - fVar4;
    *(float *)(param_1 + unaff_x22) =
         SQRT(fVar5 * fVar5 + fVar3 * fVar3 + fVar2 * fVar2) / unaff_s9 +
         ((float *)(param_1 + unaff_x22))[-8];
                    /* catch(type#1 @ 03b4f5b8) { ... } // from try @ 03168e14 with catch @ 03168e5c
                        */
                    /* catch(type#1 @ 03b4f5b8) { ... } // from try @ 03168e04 with catch @ 03168e60
                        */
    unaff_x22 = unaff_x22 + 0x20;
                    /* catch(type#1 @ 03b4f5b8) { ... } // from try @ 03168de4 with catch @ 03168e64
                        */
    if ((long)*(int *)(unaff_x19 + 0x50) <= (long)(uVar1 + 1)) {
      return;
    }
    if (param_1 == 0) goto LAB_03168ea0;
    unaff_x24 = uVar1 + 1;
    unaff_x26 = uVar1;
    in_x9 = (ulong)*(uint *)(param_1 + 0x18);
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03168e9c to 03268ea7 has its CatchHandler @ 03168ebc */
  FUN_01b48180();
}


