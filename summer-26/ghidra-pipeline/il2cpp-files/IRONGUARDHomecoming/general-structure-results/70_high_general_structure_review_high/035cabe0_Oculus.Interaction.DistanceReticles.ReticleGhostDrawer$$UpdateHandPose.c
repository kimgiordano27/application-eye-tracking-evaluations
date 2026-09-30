/*
FUNCTION_NAME: Oculus.Interaction.DistanceReticles.ReticleGhostDrawer$$UpdateHandPose
ENTRY_POINT: 035cabe0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_4;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


ulong Oculus_Interaction_DistanceReticles_ReticleGhostDrawer__UpdateHandPose
                (ulong *param_1,ulong *param_2)

{
  long lVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 035caaa4 with catch @ 035cabe4
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 035caa88 with catch @ 035cabe8
                       catch(type#1 @ 042b3198) { ... } // from try @ 035cabd4 with catch @ 035cabe8
                        */
  if ((DAT_04833675 & 1) == 0) {
                    /* try { // try from 035cac00 to 036cac03 has its CatchHandler @ 035cac14 */
    thunk_FUN_01efb3a4(Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass10_0_<DOColor>b__1__);
    DAT_04833675 = 1;
  }
                    /* catch() { ... } // from try @ 035cac00 with catch @ 035cac14 */
  uVar5 = param_1[1];
  uVar2 = (uint)param_2[1];
  uVar10 = (ulong)uVar2;
  if (uVar5 < uVar10) {
    uVar9 = 0;
                    /* try { // try from 035cac28 to 036cac33 has its CatchHandler @ 035cac48 */
    goto LAB_035cace0;
  }
                    /* try { // try from 035cac34 to 036cac3f has its CatchHandler @ 035ca964 */
  uVar6 = *param_2;
  uVar9 = 0;
  if (uVar10 != 0) {
    uVar9 = uVar5 / uVar10;
  }
                    /* try { // try from 035cac40 to 036cac47 has its CatchHandler @ 035cac48 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 035cac28 with catch @ 035cac48
                       catch(type#2 @ 00000000) { ... } // from try @ 035cac40 with catch @ 035cac48
                        */
  if (*(int *)(*(long *)Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass10_0_<DOColor>b__1__ +
              0xe0) == 0) {
                    /* catch() { ... } // from try @ 035cac6c with catch @ 035cac4c
                       catch() { ... } // from try @ 035cac9c with catch @ 035cac4c
                       catch() { ... } // from try @ 035cacd8 with catch @ 035cac4c */
    thunk_FUN_01ee6d7c();
  }
  uVar10 = (uVar9 & 0xffffffff) * (ulong)(uint)uVar6;
                    /* try { // try from 035cac64 to 036cac6b has its CatchHandler @ 035cac80 */
  lVar1 = (uVar9 & 0xffffffff) * (ulong)*(uint *)((long)param_2 + 4) + (uVar10 >> 0x20);
  uVar10 = uVar10 & 0xffffffff | lVar1 << 0x20;
                    /* try { // try from 035cac6c to 036cac97 has its CatchHandler @ 035cac4c */
  uVar6 = *param_1 - uVar10;
  uVar7 = (uint)((ulong)lVar1 >> 0x20);
  uVar4 = ((int)uVar5 - uVar2 * (int)uVar9) - uVar7;
  if (CARRY8(uVar10,uVar6)) {
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 035cac64 with catch @ 035cac80
                        */
    uVar4 = uVar4 - 1;
    if (~uVar7 <= uVar4) {
LAB_035cac9c:
                    /* try { // try from 035cac9c to 036caccb has its CatchHandler @ 035cac4c */
      uVar8 = *param_2;
      uVar5 = (*param_1 + uVar8) - uVar10;
      do {
        uVar6 = uVar5;
        uVar4 = uVar4 + uVar2;
        uVar9 = (ulong)((int)uVar9 - 1);
                    /* catch() { ... } // from try @ 035cac98 with catch @ 035cacc8 */
        if ((uVar6 < uVar8) && (bVar3 = uVar4 < uVar2, uVar4 = uVar4 + 1, bVar3)) break;
                    /* try { // try from 035caccc to 036cacd7 has its CatchHandler @ 035cacec */
        uVar5 = uVar6 + uVar8;
      } while (uVar2 <= uVar4);
    }
  }
  else {
                    /* try { // try from 035cac98 to 036cac9b has its CatchHandler @ 035cacc8 */
    if (CARRY4(uVar7,uVar4)) goto LAB_035cac9c;
  }
                    /* try { // try from 035cacd8 to 036cace3 has its CatchHandler @ 035cac4c */
  *param_1 = uVar6;
  *(uint *)(param_1 + 1) = uVar4;
LAB_035cace0:
                    /* try { // try from 035cace4 to 036caceb has its CatchHandler @ 035cacec */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 035caccc with catch @ 035cacec
                       catch(type#2 @ 00000000) { ... } // from try @ 035cace4 with catch @ 035cacec
                        */
  return uVar9 & 0xffffffff;
}


