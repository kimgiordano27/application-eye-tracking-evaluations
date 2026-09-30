/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$Equals
ENTRY_POINT: 05ea3310
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 93
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__Equals(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  undefined8 uVar4;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0xc0) + 0x30);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_040b1acc();
  }
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  lVar1 = *(long *)(unaff_x21 + 0x20);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_040b1acc();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x30);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_040b1acc();
  }
                    /* try { // try from 05ea3364 to 05fa3373 has its CatchHandler @ 05ea3374 */
  uVar4 = **(undefined8 **)(lVar1 + 0xb8);
                    /* catch() { ... } // from try @ 05ea328c with catch @ 05ea3374
                       catch() { ... } // from try @ 05ea32c4 with catch @ 05ea3374
                       catch() { ... } // from try @ 05ea32f0 with catch @ 05ea3374
                       catch() { ... } // from try @ 05ea3364 with catch @ 05ea3374 */
  uVar2 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092a4f40);
                    /* try { // try from 05ea3378 to 05fa337b has its CatchHandler @ 05ea3384 */
  lVar1 = *(long *)(unaff_x21 + 0x20);
                    /* try { // try from 05ea337c to 05fa3387 has its CatchHandler @ 05ea31d4 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 05ea3378 with catch @ 05ea3384
                        */
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_040b1acc(lVar1);
  }
  FUN_076ddf8c(uVar2,uVar4,*(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0x78),0);
  lVar1 = *(long *)(unaff_x21 + 0x20);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_040b1acc();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x30);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_040b1acc();
  }
  lVar3 = *(long *)(unaff_x21 + 0x20);
  *(undefined8 *)(*(long *)(lVar1 + 0xb8) + 0x18) = uVar2;
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_040b1acc();
  }
  lVar1 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x30);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_040b1acc();
  }
  thunk_FUN_040ec700(*(long *)(lVar1 + 0xb8) + 0x18,uVar2);
  FUN_05217a68(*unaff_x19,unaff_x19[1],*(undefined8 *)PTR_DAT_092ba5e8);
                    /* WARNING: Could not recover jumptable at 0x05ea3454. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*unaff_x20 + 0x188))();
  return;
}


