/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.Vector4f>$$get_Current
ENTRY_POINT: 0426d158
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool System_Array_InternalEnumerator<OVRPlugin_Vector4f>__get_Current(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  uint unaff_w19;
  long *unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  undefined8 *unaff_x23;
  
  lVar3 = *(long *)(param_1 + 0x48);
                    /* try { // try from 0426d164 to 0436d167 has its CatchHandler @ 0426d19c */
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_0367c9fc(lVar3);
    unaff_x22 = (long *)*unaff_x23;
  }
  lVar4 = *unaff_x22;
                    /* try { // try from 0426d17c to 0436d18b has its CatchHandler @ 0426d190 */
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
                    /* catch() { ... } // from try @ 0426cde0 with catch @ 0426d18c
                       try { // try from 0426d18c to 0436d1f7 has its CatchHandler @ 0426cbc8 */
                    /* catch() { ... } // from try @ 0426d020 with catch @ 0426d190
                       catch() { ... } // from try @ 0426d17c with catch @ 0426d190 */
      if (*(long *)(piVar6 + -2) == lVar3) {
                    /* catch() { ... } // from try @ 0426d11c with catch @ 0426d1b4 */
                    /* catch() { ... } // from try @ 0426d104 with catch @ 0426d1b8 */
                    /* catch() { ... } // from try @ 0426cfac with catch @ 0426d1bc */
        puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_0426d1c0;
      }
      uVar5 = uVar5 - 1;
                    /* catch() { ... } // from try @ 0426cd28 with catch @ 0426d19c
                       catch() { ... } // from try @ 0426d164 with catch @ 0426d19c */
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar2 = (undefined8 *)FUN_0367cd30(unaff_x22,lVar3,0);
                    /* catch() { ... } // from try @ 0426cf5c with catch @ 0426d1b0 */
LAB_0426d1c0:
                    /* catch() { ... } // from try @ 0426cfd4 with catch @ 0426d1c0 */
  uVar1 = (*(code *)*puVar2)(unaff_x22,puVar2[1]);
                    /* catch() { ... } // from try @ 0426ce50 with catch @ 0426d1d4 */
  if (unaff_w19 < uVar1) {
                    /* catch() { ... } // from try @ 0426ce9c with catch @ 0426d1d8
                       catch() { ... } // from try @ 0426cf34 with catch @ 0426d1d8 */
    if ((*(ushort *)(*(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x60) + 0x135) & 1)
        == 0) {
      FUN_0367c9fc();
    }
    lVar3 = thunk_FUN_0367fe20();
                    /* try { // try from 0426d1f8 to 0436d1fb has its CatchHandler @ 0426d204 */
                    /* catch() { ... } // from try @ 0426d1f8 with catch @ 0426d204 */
    FUN_0440c67c(lVar3,*(undefined8 *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x68));
                    /* try { // try from 0426d20c to 0436d213 has its CatchHandler @ 0426d260 */
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
                    /* try { // try from 0426d214 to 0436d22b has its CatchHandler @ 0426cbc8 */
    *(uint *)(lVar3 + 0x18) = unaff_w19;
    *(undefined1 *)(lVar3 + 0x1c) = 0;
    *unaff_x20 = lVar3;
  }
  else {
    *unaff_x20 = 0;
                    /* try { // try from 0426d22c to 0436d22f has its CatchHandler @ 0426d234 */
  }
  thunk_FUN_036b7ad0();
  return unaff_w19 < uVar1;
}


