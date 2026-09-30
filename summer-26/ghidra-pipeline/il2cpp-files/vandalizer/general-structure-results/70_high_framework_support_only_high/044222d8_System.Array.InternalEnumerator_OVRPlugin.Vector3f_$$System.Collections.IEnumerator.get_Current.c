/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.Vector3f>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 044222d8
PROGRAM: vandalizer-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_InternalEnumerator<OVRPlugin_Vector3f>__System_Collections_IEnumerator_get_Current
               (int *param_1,int *param_2,long param_3)

{
  long lVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  undefined8 uVar5;
  
                    /* catch() { ... } // from try @ 044222d0 with catch @ 044222e0 */
                    /* try { // try from 044222ec to 045222f7 has its CatchHandler @ 0442230c */
  if ((*(byte *)(*(long *)(param_3 + 0x20) + 0x135) & 1) == 0) {
                    /* try { // try from 044222f8 to 04522303 has its CatchHandler @ 04421f90 */
    FUN_0322bef4(*(long *)(param_3 + 0x20));
  }
  plVar4 = (long *)(param_1 + 6);
                    /* try { // try from 04422304 to 0452230b has its CatchHandler @ 0442230c */
  if (*plVar4 == 0) {
    iVar3 = 1;
  }
  else {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 044222ec with catch @ 0442230c
                       catch(type#2 @ 00000000) { ... } // from try @ 04422304 with catch @ 0442230c
                        */
    iVar3 = *(int *)(*plVar4 + 0x18) + 1;
  }
  iVar2 = *param_2;
  if ((iVar3 < iVar2) && (iVar2 + -1 != 0 && 0 < iVar2)) {
    lVar1 = *(long *)(param_3 + 0x20);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_0322bef4();
    }
    lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x28);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_0322bef4();
    }
    lVar1 = FUN_031f21dc(lVar1,iVar2 + -1);
    *plVar4 = lVar1;
    thunk_FUN_0329bf60(plVar4,lVar1);
    iVar2 = *param_2;
  }
  *param_1 = iVar2;
  if (0 < iVar2) {
    uVar5 = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
    *(undefined8 *)(param_1 + 2) = uVar5;
    thunk_FUN_0329bf60(param_1 + 2,0);
    if (1 < *param_1) {
      FUN_05e255b0(*(undefined8 *)(param_2 + 6),*plVar4,*param_1 + -1,0);
      return;
    }
  }
  return;
}


