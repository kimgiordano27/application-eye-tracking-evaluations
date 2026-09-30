/*
FUNCTION_NAME: FUN_014c8d74
ENTRY_POINT: 014c8d74
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure;functionality_data_collection_or_telemetry_hits_2
*/


void FUN_014c8d74(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
                    /* try { // try from 014c8d74 to 015c8d7f has its CatchHandler @ 014c8d94 */
  puVar1 = StringLiteral_14055;
                    /* try { // try from 014c8d80 to 015c8dbb has its CatchHandler @ 014c8b60 */
                    /* catch(type#1 @ 03274860) { ... } // from try @ 014c8d70 with catch @ 014c8d88
                        */
                    /* catch(type#1 @ 03274860) { ... } // from try @ 014c8d1c with catch @ 014c8d8c
                        */
  if ((DAT_03776e70 & 1) == 0) {
                    /* catch(type#1 @ 03274860) { ... } // from try @ 014c8d6c with catch @ 014c8d90
                        */
                    /* catch(type#1 @ 03274860) { ... } // from try @ 014c8d74 with catch @ 014c8d94
                        */
                    /* catch(type#1 @ 03274860) { ... } // from try @ 014c8c30 with catch @ 014c8d98
                        */
    thunk_FUN_00d48444(
                      Method_UnityEngine_XR_ARFoundation_ARMeshManager_GetComponentInParentIncludingInactive<ARSessionOrigin>__
                      );
                    /* catch(type#1 @ 03274860) { ... } // from try @ 014c8c68 with catch @ 014c8d9c
                        */
                    /* catch(type#1 @ 03274860) { ... } // from try @ 014c8ca4 with catch @ 014c8da0
                        */
                    /* catch(type#1 @ 03274860) { ... } // from try @ 014c8c84 with catch @ 014c8da4
                        */
    thunk_FUN_00d48444(Method_UnityEngine_Rendering_DebugUI_Field<int>_set_setter__);
    thunk_FUN_00d48444(Method_SilhouetteWindow_SilhouetteOffsetMessagePair_SetOffset__);
                    /* try { // try from 014c8dbc to 015c8dbf has its CatchHandler @ 014c8dd0 */
    thunk_FUN_00d48444(StringLiteral_14055);
    thunk_FUN_00d48444(StringLiteral_557);
                    /* catch() { ... } // from try @ 014c8dbc with catch @ 014c8dd0 */
    DAT_03776e70 = 1;
  }
  lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
  puVar2 = StringLiteral_557;
  puVar1 = Method_UnityEngine_Rendering_DebugUI_Field<int>_set_setter__;
                    /* try { // try from 014c8ddc to 015c8de7 has its CatchHandler @ 014c8dfc */
  if (lVar3 != 0) {
                    /* try { // try from 014c8de8 to 015c8df3 has its CatchHandler @ 014c8b60 */
                    /* try { // try from 014c8df4 to 015c8dfb has its CatchHandler @ 014c8dfc */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 014c8ddc with catch @ 014c8dfc
                       catch(type#2 @ 00000000) { ... } // from try @ 014c8df4 with catch @ 014c8dfc
                        */
    FUN_013c7300(lVar3,*(undefined8 *)
                        Method_SilhouetteWindow_SilhouetteOffsetMessagePair_SetOffset__);
    **(long **)(*(long *)puVar2 + 0xb8) = lVar3;
    lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    if (lVar3 != 0) {
      FUN_013925ac(lVar3,1000,
                   *(undefined8 *)
                    Method_UnityEngine_XR_ARFoundation_ARMeshManager_GetComponentInParentIncludingInactive<ARSessionOrigin>__
                  );
      *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8) = lVar3;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


