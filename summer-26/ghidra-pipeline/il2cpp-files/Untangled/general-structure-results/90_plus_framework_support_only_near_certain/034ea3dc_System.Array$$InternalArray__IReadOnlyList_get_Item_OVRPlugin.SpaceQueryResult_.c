/*
FUNCTION_NAME: System.Array$$InternalArray__IReadOnlyList_get_Item<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 034ea3dc
PROGRAM: Untangled-libil2cpp.so
SCORE: 107
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__IReadOnlyList_get_Item<OVRPlugin_SpaceQueryResult>
               (long param_1,long *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 *puVar4;
  long unaff_x19;
  long lVar5;
  
  if (param_1 != 0) {
    lVar5 = *(long *)(unaff_x19 + 0x40);
    uVar2 = FUN_066c67b0(param_1,0);
    if (lVar5 != 0) {
                    /* try { // try from 034ea3fc to 035ea3ff has its CatchHandler @ 034ea414 */
                    /* try { // try from 034ea400 to 035ea403 has its CatchHandler @ 034ea0d0 */
                    /* try { // try from 034ea404 to 035ea407 has its CatchHandler @ 034ea410 */
      FUN_066d51a4(lVar5,uVar2,0);
                    /* try { // try from 034ea408 to 035ea437 has its CatchHandler @ 034ea0d0 */
      if (*(long *)(unaff_x19 + 0x38) != 0) {
                    /* catch(type#1 @ 069384f8) { ... } // from try @ 034ea404 with catch @ 034ea410
                        */
                    /* catch(type#1 @ 069384f8) { ... } // from try @ 034ea3fc with catch @ 034ea414
                        */
                    /* catch(type#1 @ 069384f8) { ... } // from try @ 034ea36c with catch @ 034ea418
                        */
        FUN_068eb204(*(long *)(unaff_x19 + 0x38),0,0);
                    /* catch(type#1 @ 069384f8) { ... } // from try @ 034ea340 with catch @ 034ea41c
                        */
                    /* catch(type#1 @ 069384f8) { ... } // from try @ 034ea2e4 with catch @ 034ea420
                        */
        lVar5 = *(long *)(unaff_x19 + 0x40);
        if (DAT_071bac5b == '\0') {
          FUN_02f07e70(PTR_DAT_06d02c10);
                    /* try { // try from 034ea438 to 035ea43b has its CatchHandler @ 034ea448 */
          DAT_071bac5b = '\x01';
        }
        puVar1 = PTR_DAT_06d02c10;
        if (lVar5 != 0) {
                    /* catch() { ... } // from try @ 034ea438 with catch @ 034ea448 */
          lVar3 = *(long *)(*(long *)PTR_DAT_06d02c10 + 0xb8);
          FUN_066d4f80(*(undefined4 *)(lVar3 + 0xc),*(undefined4 *)(lVar3 + 0x10),
                       *(undefined4 *)(lVar3 + 0x14),lVar5,0);
          lVar5 = *(long *)(unaff_x19 + 0x40);
          if (DAT_071babf5 == '\0') {
            FUN_02f07e70(PTR_DAT_06d02c10);
            DAT_071babf5 = '\x01';
          }
          if (lVar5 != 0) {
            puVar4 = *(undefined4 **)(*(long *)puVar1 + 0xb8);
            FUN_066d3f5c(*puVar4,puVar4[1],puVar4[2],lVar5,0);
            if (param_2 != (long *)0x0) {
              if (*param_2 != *(long *)PTR_DAT_06d05858) {
                    /* WARNING: Subroutine does not return */
                FUN_02f08440(param_2);
              }
            }
            if (DAT_071babf5 == '\0') {
              FUN_02f07e70(PTR_DAT_06d02c10);
              DAT_071babf5 = '\x01';
            }
            if (param_2 != (long *)0x0) {
              puVar4 = *(undefined4 **)(*(long *)puVar1 + 0xb8);
              FUN_066d3f5c(*puVar4,puVar4[1],puVar4[2],param_2,0);
              if (DAT_071babf5 == '\0') {
                FUN_02f07e70(PTR_DAT_06d02c10);
                DAT_071babf5 = '\x01';
              }
              FUN_066d3bd8(**(undefined4 **)(*(long *)puVar1 + 0xb8),
                           (*(undefined4 **)(*(long *)puVar1 + 0xb8))[1],param_2,0);
              *(undefined8 *)(unaff_x19 + 0x48) = 0;
              thunk_FUN_02f411dc((undefined8 *)(unaff_x19 + 0x48),0);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


