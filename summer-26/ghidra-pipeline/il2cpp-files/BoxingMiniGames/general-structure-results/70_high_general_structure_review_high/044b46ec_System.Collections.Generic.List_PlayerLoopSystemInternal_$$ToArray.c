/*
FUNCTION_NAME: System.Collections.Generic.List<PlayerLoopSystemInternal>$$ToArray
ENTRY_POINT: 044b46ec
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_1
*/


void System_Collections_Generic_List<PlayerLoopSystemInternal>__ToArray
               (long param_1,long param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    Newtonsoft_Json_JsonSerializerSettings__set_TypeNameHandling(0x22);
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if (1 < iVar1) {
    uVar3 = *(undefined8 *)(param_1 + 0x10);
                    /* try { // try from 044b4724 to 045b4733 has its CatchHandler @ 044b4734 */
    lVar2 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x1b0);
                    /* catch() { ... } // from try @ 044b46cc with catch @ 044b4734
                       catch() { ... } // from try @ 044b4724 with catch @ 044b4734 */
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
                    /* try { // try from 044b4738 to 045b473b has its CatchHandler @ 044b4744 */
      lVar2 = FUN_0367c9fc();
    }
                    /* try { // try from 044b473c to 045b4747 has its CatchHandler @ 044b4440 */
    if (*(int *)(lVar2 + 0xe4) == 0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 044b4738 with catch @ 044b4744
                        */
      thunk_FUN_036a1978();
    }
    FUN_044298d0(uVar3,0,iVar1,param_2,
                 *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x1a8));
  }
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
  return;
}


