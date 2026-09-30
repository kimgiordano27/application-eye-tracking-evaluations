/*
FUNCTION_NAME: System.Array$$InternalArray__IReadOnlyList_get_Item<OVRPlugin.Bone>
ENTRY_POINT: 034ea078
PROGRAM: Untangled-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__IReadOnlyList_get_Item<OVRPlugin_Bone>
               (undefined1 param_1 [16],float param_2,long param_3,undefined8 param_4,
               undefined4 param_5,undefined8 param_6)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  float fVar6;
  
  if ((DAT_071bd02f & 1) == 0) {
    FUN_02f07e70(PTR_DAT_06d36a20);
    FUN_02f07e70(PTR_DAT_06d36a28);
    FUN_02f07e70(PTR_DAT_06d026a8);
                    /* try { // try from 034ea0d0 to 035ea2e3 has its CatchHandler @ 034ea0d0
                       catch() { ... } // from try @ 034ea0d0 with catch @ 034ea0d0
                       catch() { ... } // from try @ 034ea37c with catch @ 034ea0d0
                       catch() { ... } // from try @ 034ea400 with catch @ 034ea0d0
                       catch() { ... } // from try @ 034ea408 with catch @ 034ea0d0
                       catch() { ... } // from try @ 034ea4b0 with catch @ 034ea0d0 */
    DAT_071bd02f = 1;
  }
  lVar5 = *(long *)(param_3 + 0x30);
  *(undefined4 *)(param_3 + 0x70) = param_5;
  FUN_034eacb8(param_3);
  puVar2 = PTR_DAT_06d36a28;
  if (lVar5 != 0) {
    FUN_066d3bd8(lVar5,0);
    lVar5 = *(long *)(param_3 + 0x30);
    iVar1 = **(int **)(*(long *)puVar2 + 0xb8);
    if (2 < iVar1) {
      iVar1 = 3;
    }
    if (lVar5 != 0) {
      fVar6 = (float)FUN_066d3b48(lVar5,0);
      if (DAT_071bd04b == '\0') {
        FUN_02f07e70(PTR_DAT_06d03888);
        DAT_071bd04b = '\x01';
      }
      FUN_066d3bd8(fVar6 + (float)iVar1 * 50.0 *
                           *(float *)(*(long *)(*(long *)PTR_DAT_06d03888 + 0xb8) + 0x18),
                   param_2 + (float)iVar1 * 50.0 *
                             *(float *)(*(long *)(*(long *)PTR_DAT_06d03888 + 0xb8) + 0x1c),lVar5,0)
      ;
      if ((*(long *)(param_3 + 0x60) != 0) &&
         (lVar5 = *(long *)(*(long *)(param_3 + 0x60) + 0x100), lVar5 != 0)) {
        FUN_066dbaf4(lVar5,0);
        if ((*(long *)(param_3 + 0x60) != 0) &&
           (lVar5 = *(long *)(*(long *)(param_3 + 0x60) + 0x100), lVar5 != 0)) {
          FUN_066dbc80(lVar5,param_6,0);
          if ((*(long *)(param_3 + 0x58) != 0) &&
             (lVar5 = *(long *)(*(long *)(param_3 + 0x58) + 0x100), lVar5 != 0)) {
            FUN_066dbaf4(lVar5,0);
            puVar2 = PTR_DAT_06d36a20;
            if (*(long *)(param_3 + 0x58) != 0) {
              lVar5 = *(long *)(*(long *)(param_3 + 0x58) + 0x100);
              uVar3 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d026a8);
              FUN_066dbbb0(uVar3,param_3,*(undefined8 *)puVar2,0);
              if (lVar5 != 0) {
                FUN_066dbc80(lVar5,uVar3,0);
                if (*(long *)(param_3 + 0x68) != 0) {
                  puVar4 = (undefined8 *)(*(long *)(param_3 + 0x68) + 0x58);
                  *puVar4 = param_4;
                  thunk_FUN_02f411dc(puVar4,param_4);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


