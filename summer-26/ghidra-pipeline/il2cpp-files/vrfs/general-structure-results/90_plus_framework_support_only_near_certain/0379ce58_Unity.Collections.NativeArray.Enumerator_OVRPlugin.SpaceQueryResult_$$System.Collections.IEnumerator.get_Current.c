/*
FUNCTION_NAME: Unity.Collections.NativeArray.Enumerator<OVRPlugin.SpaceQueryResult>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 0379ce58
PROGRAM: vrfs-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray_Enumerator<OVRPlugin_SpaceQueryResult>__System_Collections_IEnumerator_get_Current
               (undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  long unaff_x21;
  long *plVar5;
  
  *(undefined8 *)(unaff_x20 + 0x30) = param_2;
  thunk_FUN_01656ef8();
                    /* try { // try from 0379ce64 to 0389ce83 has its CatchHandler @ 0379cde4 */
  uVar2 = FUN_0379b818();
  *(undefined8 *)(unaff_x20 + 0x38) = uVar2;
  thunk_FUN_01656ef8();
  if (unaff_x21 == 0) {
                    /* try { // try from 0379ce84 to 0389ce87 has its CatchHandler @ 0379ce88 */
                    /* catch(type#1 @ 06a5a440) { ... } // from try @ 0379ce44 with catch @ 0379ce88
                       catch(type#1 @ 06a5a440) { ... } // from try @ 0379ce84 with catch @ 0379ce88
                       try { // try from 0379ce88 to 0389ce9f has its CatchHandler @ 0379cde4 */
    unaff_x21 = thunk_FUN_015d056c(*(undefined8 *)PTR_DAT_06de27e8);
    if (unaff_x21 == 0) goto LAB_0379cf4c;
                    /* try { // try from 0379cea0 to 0389ceb7 has its CatchHandler @ 0379cee4 */
    FUN_02782444(unaff_x21,*(undefined8 *)PTR_DAT_06e01ac0);
  }
  puVar1 = PTR_DAT_06df1e08;
  plVar5 = (long *)(unaff_x20 + 0x40);
  *plVar5 = unaff_x21;
                    /* try { // try from 0379ceb8 to 0389ced3 has its CatchHandler @ 0379cde4 */
  thunk_FUN_01656ef8(plVar5,unaff_x21);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_016466fc();
  }
  lVar3 = FUN_047a50f0(0);
  if (lVar3 != 0) {
    lVar3 = *plVar5;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_016466fc();
    }
    lVar4 = FUN_047a50f0(0);
    if ((lVar4 == 0) || (lVar3 == 0)) {
LAB_0379cf4c:
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    FUN_02783288(lVar3,*(undefined8 *)PTR_DAT_06de5db0,*(undefined8 *)(lVar4 + 0x40),
                 *(undefined8 *)PTR_DAT_06e5ebe8);
  }
  FUN_0379cf50();
  return;
}


