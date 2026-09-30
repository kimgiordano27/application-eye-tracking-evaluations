/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$Dispose
ENTRY_POINT: 05ea2f0c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 93
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__Dispose(long param_1)

{
  ushort uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar2 = PTR_DAT_092b6dd0;
                    /* catch(type#1 @ 08d635d8) { ... } // from try @ 05ea2e10 with catch @ 05ea2f14
                        */
  if (*(long *)(*(long *)(param_1 + 0xb8) + 0x10) == 0) {
    lVar3 = *(long *)(unaff_x20 + 0x20);
                    /* try { // try from 05ea2f2c to 05fa2f43 has its CatchHandler @ 05ea3018 */
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_040b1acc();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x30);
                    /* try { // try from 05ea2f44 to 05fa2f67 has its CatchHandler @ 05ea2dbc */
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_040b1acc();
    }
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    lVar3 = *(long *)(unaff_x20 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
                    /* try { // try from 05ea2f68 to 05fa2f7f has its CatchHandler @ 05ea3018 */
      lVar3 = FUN_040b1acc();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x30);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
                    /* try { // try from 05ea2f80 to 05fa2f93 has its CatchHandler @ 05ea2dbc */
      lVar3 = FUN_040b1acc();
    }
    lVar5 = *(long *)(unaff_x20 + 0x20);
    uVar6 = **(undefined8 **)(lVar3 + 0xb8);
                    /* try { // try from 05ea2f94 to 05fa2fab has its CatchHandler @ 05ea3018 */
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_040b1acc(lVar5);
    }
                    /* try { // try from 05ea2fac to 05fa3007 has its CatchHandler @ 05ea2dbc */
    if ((*(ushort *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x40) + 0x135) & 1) == 0) {
      FUN_040b1acc();
    }
    uVar4 = thunk_FUN_040b4efc();
    lVar5 = *(long *)(unaff_x20 + 0x20);
    uVar1 = *(ushort *)(lVar5 + 0x135);
    lVar3 = lVar5;
    if ((uVar1 & 1) == 0) {
      lVar5 = FUN_040b1acc(lVar5);
      uVar1 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
      lVar3 = *(long *)(unaff_x20 + 0x20);
    }
    uVar7 = *(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x48);
    if ((uVar1 & 1) == 0) {
      lVar3 = FUN_040b1acc(lVar3);
    }
    FUN_06caf394(uVar4,uVar6,uVar7,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x50));
    lVar3 = *(long *)(unaff_x20 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_040b1acc();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x30);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_040b1acc();
    }
    lVar5 = *(long *)(unaff_x20 + 0x20);
    *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x10) = uVar4;
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_040b1acc();
    }
    lVar3 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x30);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_040b1acc();
    }
    thunk_FUN_040ec700(*(long *)(lVar3 + 0xb8) + 0x10,uVar4);
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  if ((*(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
    FUN_040b1acc();
  }
  FUN_04fd9b00();
  return;
}


