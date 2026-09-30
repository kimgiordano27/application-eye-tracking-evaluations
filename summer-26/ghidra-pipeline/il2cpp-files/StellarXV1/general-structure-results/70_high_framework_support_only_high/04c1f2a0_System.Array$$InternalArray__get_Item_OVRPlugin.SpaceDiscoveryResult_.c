/*
FUNCTION_NAME: System.Array$$InternalArray__get_Item<OVRPlugin.SpaceDiscoveryResult>
ENTRY_POINT: 04c1f2a0
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


int System_Array__InternalArray__get_Item<OVRPlugin_SpaceDiscoveryResult>(void)

{
  undefined1 in_ZR;
  int iVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x19;
  long *unaff_x20;
  undefined8 unaff_x21;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000028;
  
  while( true ) {
    if ((bool)in_ZR) {
                    /* try { // try from 04c1f2b0 to 04d1f2bf has its CatchHandler @ 04c1f3a4 */
      iVar1 = thunk_FUN_04086950();
                    /* try { // try from 04c1f2dc to 04d1f303 has its CatchHandler @ 04c1f3ac */
      return iVar1 + -1;
    }
    memcpy(&stack0x00000028,(void *)(unaff_x24 + unaff_x23 * (ulong)*(uint *)(*unaff_x20 + 0x104)),
           (ulong)*(uint *)(*unaff_x20 + 0x104));
    in_stack_00000018 = unaff_x21;
    thunk_FUN_040b4b34(*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 8),&stack0x00000018);
    lVar3 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      FUN_040b1acc(lVar3);
    }
    uVar2 = thunk_FUN_076d5148();
    if ((uVar2 & 1) != 0) break;
    unaff_x23 = unaff_x23 + 1;
    in_ZR = unaff_x25 == unaff_x23;
  }
  iVar1 = thunk_FUN_04086950();
  return iVar1 + (int)unaff_x23;
}


