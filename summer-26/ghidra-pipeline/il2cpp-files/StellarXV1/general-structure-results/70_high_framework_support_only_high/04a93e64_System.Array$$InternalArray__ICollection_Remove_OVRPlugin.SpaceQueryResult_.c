/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Remove<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 04a93e64
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 86
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


long System_Array__InternalArray__ICollection_Remove<OVRPlugin_SpaceQueryResult>(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x19;
  
                    /* catch(type#1 @ 08d635d8) { ... } // from try @ 04a93d58 with catch @ 04a93e64
                        */
  lVar1 = *(long *)(param_1 + 0x20);
                    /* catch(type#1 @ 08d635d8) { ... } // from try @ 04a93e34 with catch @ 04a93e68
                        */
                    /* catch(type#1 @ 08d635d8) { ... } // from try @ 04a93d78 with catch @ 04a93e6c
                        */
                    /* catch(type#1 @ 08d635d8) { ... } // from try @ 04a93d04 with catch @ 04a93e70
                        */
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
                    /* catch(type#1 @ 08d635d8) { ... } // from try @ 04a93d20 with catch @ 04a93e74
                       catch(type#1 @ 08d635d8) { ... } // from try @ 04a93da4 with catch @ 04a93e74
                        */
    lVar1 = FUN_040b1acc();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x10);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
                    /* try { // try from 04a93e8c to 04b93ea3 has its CatchHandler @ 04a93efc */
    lVar1 = FUN_040b1acc();
  }
  lVar1 = **(long **)(lVar1 + 0xb8);
  thunk_FUN_04085a30();
  if (lVar1 == 0) {
    lVar1 = *(long *)(unaff_x19 + 0x20);
                    /* try { // try from 04a93ea4 to 04b93eeb has its CatchHandler @ 04a93cc8 */
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_040b1acc();
    }
    lVar1 = FUN_055d8678(*(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0x18));
    thunk_FUN_04085a30();
    lVar2 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_040b1acc();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_040b1acc();
    }
    lVar3 = *(long *)(unaff_x19 + 0x20);
    **(long **)(lVar2 + 0xb8) = lVar1;
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_040b1acc();
    }
    lVar2 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_040b1acc();
    }
    thunk_FUN_040ec700(*(undefined8 *)(lVar2 + 0xb8),lVar1);
  }
  return lVar1;
}


