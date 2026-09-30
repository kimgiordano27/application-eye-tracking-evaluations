/*
FUNCTION_NAME: OVRPlugin$$get_audioInId
ENTRY_POINT: 05317724
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__get_audioInId(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  int *piVar7;
  int iVar8;
  long *plVar9;
  float fVar10;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  puVar1 = PTR_DAT_067c8f20;
                    /* try { // try from 05317734 to 0541775b has its CatchHandler @ 05317888 */
  if ((DAT_06bbb213 & 1) == 0) {
    FUN_02f08768(System_Predicate<Terrain>_TypeInfo);
    FUN_02f08768(UnityEngine_Rendering_Universal_DecalDrawScreenSpaceSystem_TypeInfo);
    FUN_02f08768(PTR_DAT_067c8f20);
    DAT_06bbb213 = 1;
  }
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
                    /* try { // try from 053177a4 to 054177cb has its CatchHandler @ 0531788c */
  uVar4 = FUN_060f245c(param_2,0,0);
  puVar2 = UnityEngine_Rendering_Universal_DecalDrawScreenSpaceSystem_TypeInfo;
  puVar1 = System_Predicate<Terrain>_TypeInfo;
  if ((uVar4 & 1) == 0) {
    if (param_2 == 0) {
LAB_05317898:
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    iVar8 = 0;
    do {
      uStack_58 = *(undefined8 *)(param_2 + 200);
      local_60 = *(undefined8 *)(param_2 + 0xc0);
      local_50 = *(undefined8 *)(param_2 + 0xd0);
                    /* try { // try from 053177d4 to 054177d7 has its CatchHandler @ 053177e0 */
                    /* try { // try from 053177d8 to 05417807 has its CatchHandler @ 0531730c */
                    /* catch() { ... } // from try @ 053176b0 with catch @ 053177dc */
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                    /* catch() { ... } // from try @ 053177d4 with catch @ 053177e0 */
        thunk_FUN_02f6670c();
      }
                    /* catch() { ... } // from try @ 053176d0 with catch @ 053177e4 */
                    /* catch() { ... } // from try @ 05317688 with catch @ 053177e8 */
                    /* catch() { ... } // from try @ 05317624 with catch @ 053177ec */
      iVar3 = FUN_05334430(&local_60,iVar8,0);
      if (iVar3 != 0) {
        plVar9 = *(long **)(param_1 + 0x130);
        if (plVar9 == (long *)0x0) goto LAB_05317898;
        lVar6 = *plVar9;
                    /* try { // try from 05317808 to 0541780b has its CatchHandler @ 05317858 */
        uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar4 != 0) {
          piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
                    /* try { // try from 05317844 to 05417847 has its CatchHandler @ 05317880 */
                    /* try { // try from 05317848 to 0541784b has its CatchHandler @ 0531787c */
              puVar5 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_0531784c;
            }
            uVar4 = uVar4 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar4 != 0);
        }
                    /* try { // try from 05317830 to 05417837 has its CatchHandler @ 0531796c */
        puVar5 = (undefined8 *)FUN_02f421d0(plVar9,*(long *)puVar2,0);
                    /* try { // try from 0531783c to 05417843 has its CatchHandler @ 05317884 */
LAB_0531784c:
                    /* try { // try from 0531784c to 0541784f has its CatchHandler @ 05317878 */
                    /* try { // try from 05317850 to 05417853 has its CatchHandler @ 0531730c */
                    /* try { // try from 05317854 to 05417857 has its CatchHandler @ 05317870 */
                    /* catch() { ... } // from try @ 05317808 with catch @ 05317858
                       try { // try from 05317858 to 054178b3 has its CatchHandler @ 0531730c */
        fVar10 = (float)(*(code *)*puVar5)(plVar9,iVar8,puVar5[1]);
                    /* catch() { ... } // from try @ 05317508 with catch @ 05317864 */
        if (*(float *)(param_2 + 0xd8) < fVar10) {
          return 1;
                    /* catch() { ... } // from try @ 053175bc with catch @ 05317890 */
                    /* catch() { ... } // from try @ 0531755c with catch @ 05317894 */
        }
      }
                    /* catch() { ... } // from try @ 053174f0 with catch @ 05317868 */
      iVar8 = iVar8 + 1;
                    /* catch() { ... } // from try @ 053174d4 with catch @ 0531786c */
                    /* catch() { ... } // from try @ 05317854 with catch @ 05317870 */
    } while (iVar8 != 5);
  }
                    /* catch() { ... } // from try @ 053174a4 with catch @ 05317874 */
                    /* catch() { ... } // from try @ 0531784c with catch @ 05317878 */
                    /* catch() { ... } // from try @ 05317848 with catch @ 0531787c */
                    /* catch() { ... } // from try @ 05317844 with catch @ 05317880 */
                    /* catch() { ... } // from try @ 0531783c with catch @ 05317884 */
                    /* catch() { ... } // from try @ 05317734 with catch @ 05317888 */
                    /* catch() { ... } // from try @ 053177a4 with catch @ 0531788c */
  return 0;
}


