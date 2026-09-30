/*
FUNCTION_NAME: System.Array$$Empty<OVRPlugin.Vector3f>
ENTRY_POINT: 040824a0
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__Empty<OVRPlugin_Vector3f>(void)

{
  uint uVar1;
  undefined1 in_CY;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  int *piVar7;
  long unaff_x19;
  long unaff_x20;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  uint unaff_w24;
  long *unaff_x25;
  long *unaff_x26;
  
  while( true ) {
    if ((bool)in_CY) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7bc();
    }
    lVar8 = *(long *)(unaff_x19 + (long)(int)unaff_w24 * 8 + 0x20);
                    /* try { // try from 040824b0 to 041824b3 has its CatchHandler @ 040824f0 */
                    /* try { // try from 040824b4 to 041824b7 has its CatchHandler @ 040824e8 */
    if ((lVar8 == 0) || (plVar9 = *(long **)(unaff_x20 + 0x28), plVar9 == (long *)0x0)) break;
                    /* try { // try from 040824b8 to 041824bb has its CatchHandler @ 040824f0 */
    lVar3 = *plVar9;
                    /* try { // try from 040824bc to 041824bf has its CatchHandler @ 04081f48 */
    uVar10 = *(undefined8 *)(lVar8 + 0x18);
                    /* try { // try from 040824c0 to 041824c3 has its CatchHandler @ 040824d8 */
                    /* try { // try from 040824c4 to 041824cb has its CatchHandler @ 04081f48 */
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
                    /* try { // try from 040824cc to 041824d3 has its CatchHandler @ 040824e0 */
      piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
                    /* catch() { ... } // from try @ 040821d4 with catch @ 040824d4
                       try { // try from 040824d4 to 0418250b has its CatchHandler @ 04081f48 */
                    /* catch() { ... } // from try @ 040824c0 with catch @ 040824d8 */
                    /* catch() { ... } // from try @ 04082198 with catch @ 040824dc */
        if (*(long *)(piVar7 + -2) == *unaff_x25) {
          puVar2 = (undefined8 *)(lVar3 + (long)(*piVar7 + 1) * 0x10 + 0x138);
          goto LAB_0408250c;
        }
                    /* catch() { ... } // from try @ 040821f8 with catch @ 040824e0
                       catch() { ... } // from try @ 040824cc with catch @ 040824e0 */
        uVar5 = uVar5 - 1;
                    /* catch() { ... } // from try @ 04082314 with catch @ 040824e4 */
        piVar7 = piVar7 + 4;
                    /* catch() { ... } // from try @ 040824b4 with catch @ 040824e8 */
      } while (uVar5 != 0);
    }
                    /* catch() { ... } // from try @ 040822b8 with catch @ 040824ec */
                    /* catch() { ... } // from try @ 040824b0 with catch @ 040824f0
                       catch() { ... } // from try @ 040824b8 with catch @ 040824f0 */
                    /* catch() { ... } // from try @ 04082334 with catch @ 040824f4 */
    puVar2 = (undefined8 *)FUN_0377596c(plVar9,*unaff_x25,1);
LAB_0408250c:
    (*(code *)*puVar2)(plVar9,uVar10,lVar8,puVar2[1]);
    lVar3 = *(long *)(unaff_x20 + 0x30);
    if (lVar3 == 0) break;
    lVar4 = *(long *)(lVar3 + 0x10);
    lVar6 = *unaff_x26;
    *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
    if (lVar4 == 0) break;
    uVar1 = *(uint *)(lVar3 + 0x18);
    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
      *(uint *)(lVar3 + 0x18) = uVar1 + 1;
      plVar9 = (long *)(lVar4 + (long)(int)uVar1 * 8 + 0x20);
      *plVar9 = lVar8;
      thunk_FUN_037aeb94(plVar9,lVar8);
    }
    else {
      FUN_049ceef4(lVar3,lVar8,*(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
    }
    unaff_w24 = unaff_w24 + 1;
    if ((int)*(uint *)(unaff_x19 + 0x18) <= (int)unaff_w24) {
      return;
    }
    in_CY = *(uint *)(unaff_x19 + 0x18) <= unaff_w24;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


