/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Qpl.Annotation>$$Copy
ENTRY_POINT: 047df904
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


int Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__Copy
              (long param_1,undefined4 param_2,int param_3,long param_4)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
  
  plVar8 = *(long **)(param_1 + 0x20);
  if (plVar8 != (long *)0x0) {
                    /* try { // try from 047df928 to 048df92b has its CatchHandler @ 047df944 */
    lVar4 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x18);
                    /* try { // try from 047df92c to 048df92f has its CatchHandler @ 047df940 */
                    /* try { // try from 047df930 to 048df967 has its CatchHandler @ 047df470 */
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
                    /* catch(type#1 @ 07542bc8) { ... } // from try @ 047df854 with catch @ 047df93c
                        */
      lVar4 = FUN_0367c9fc(lVar4);
                    /* catch(type#1 @ 07542bc8) { ... } // from try @ 047df92c with catch @ 047df940
                        */
    }
                    /* catch(type#1 @ 07542bc8) { ... } // from try @ 047df928 with catch @ 047df944
                        */
    lVar5 = *plVar8;
                    /* catch(type#1 @ 07542bc8) { ... } // from try @ 047df794 with catch @ 047df948
                        */
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
                    /* catch(type#1 @ 07542bc8) { ... } // from try @ 047df7e0 with catch @ 047df94c
                        */
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar4) {
          puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 1) * 0x10 + 0x138);
          goto LAB_047df990;
        }
        uVar6 = uVar6 - 1;
                    /* try { // try from 047df968 to 048df96b has its CatchHandler @ 047df978 */
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
                    /* catch() { ... } // from try @ 047df968 with catch @ 047df978 */
    puVar3 = (undefined8 *)FUN_0367cd30(plVar8,lVar4,1);
                    /* try { // try from 047df97c to 048df983 has its CatchHandler @ 047df98c */
LAB_047df990:
    uVar2 = (*(code *)*puVar3)(plVar8,param_2,puVar3[1]);
    if (param_3 == 0) {
      if (*(long *)(param_1 + 0x10) == 0) goto LAB_047df9cc;
      param_3 = *(int *)(*(long *)(param_1 + 0x10) + 0x18);
    }
    iVar1 = 0;
    if (param_3 != 0) {
      iVar1 = (int)(uVar2 & 0x7fffffff) / param_3;
    }
    return (uVar2 & 0x7fffffff) - iVar1 * param_3;
  }
LAB_047df9cc:
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


