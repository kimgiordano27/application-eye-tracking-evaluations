/*
FUNCTION_NAME: OVRPlugin.OVRP_1_21_0$$ovrp_GetTiledMultiResLevel
ENTRY_POINT: 033f137c
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


ulong OVRPlugin_OVRP_1_21_0__ovrp_GetTiledMultiResLevel(ulong param_1)

{
  long lVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  ulong *unaff_x19;
  long unaff_x20;
  ulong uVar9;
  ulong *unaff_x21;
  ulong uVar10;
  
  if ((param_1 & 1) == 0) {
    FUN_01d7d918(StringLiteral_9323);
                    /* try { // try from 033f1390 to 034f13af has its CatchHandler @ 033f10e0 */
    *(undefined1 *)(unaff_x20 + 0xb72) = 1;
  }
  uVar5 = unaff_x19[1];
  uVar2 = (uint)unaff_x21[1];
  uVar10 = (ulong)uVar2;
  if (uVar5 < uVar10) {
    uVar9 = 0;
    goto LAB_033f1460;
  }
                    /* try { // try from 033f13b0 to 034f13bf has its CatchHandler @ 033f13c0 */
  uVar6 = *unaff_x21;
  uVar9 = 0;
  if (uVar10 != 0) {
    uVar9 = uVar5 / uVar10;
  }
                    /* catch() { ... } // from try @ 033f1378 with catch @ 033f13c0
                       catch() { ... } // from try @ 033f13b0 with catch @ 033f13c0 */
                    /* try { // try from 033f13c4 to 034f13c7 has its CatchHandler @ 033f13d0 */
                    /* try { // try from 033f13c8 to 034f13d3 has its CatchHandler @ 033f10e0 */
  if (*(int *)(*(long *)StringLiteral_9323 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 033f1354 with catch @ 033f13d0
                       catch(type#2 @ 00000000) { ... } // from try @ 033f13c4 with catch @ 033f13d0
                        */
  uVar10 = (uVar9 & 0xffffffff) * (ulong)(uint)uVar6;
  lVar1 = (uVar9 & 0xffffffff) * (ulong)*(uint *)((long)unaff_x21 + 4) + (uVar10 >> 0x20);
  uVar10 = uVar10 & 0xffffffff | lVar1 << 0x20;
  uVar6 = *unaff_x19 - uVar10;
  uVar7 = (uint)((ulong)lVar1 >> 0x20);
  uVar4 = ((int)uVar5 - uVar2 * (int)uVar9) - uVar7;
  if (CARRY8(uVar10,uVar6)) {
    uVar4 = uVar4 - 1;
    if (~uVar7 <= uVar4) {
LAB_033f141c:
      uVar8 = *unaff_x21;
      uVar5 = (*unaff_x19 + uVar8) - uVar10;
      do {
        uVar6 = uVar5;
        uVar4 = uVar4 + uVar2;
        uVar9 = (ulong)((int)uVar9 - 1);
        if ((uVar6 < uVar8) && (bVar3 = uVar4 < uVar2, uVar4 = uVar4 + 1, bVar3)) break;
        uVar5 = uVar6 + uVar8;
      } while (uVar2 <= uVar4);
    }
  }
  else if (CARRY4(uVar7,uVar4)) goto LAB_033f141c;
  *unaff_x19 = uVar6;
  *(uint *)(unaff_x19 + 1) = uVar4;
LAB_033f1460:
  return uVar9 & 0xffffffff;
}


