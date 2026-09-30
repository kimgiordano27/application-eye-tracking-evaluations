/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Fusion.CustomMatchmakingFusion.<GetSessionList>d__25$$SetStateMachine
ENTRY_POINT: 052f2588
PROGRAM: Untangled-libil2cpp.so
SCORE: 92
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MultiplayerBlocks_Fusion_CustomMatchmakingFusion_<GetSessionList>d__25__SetStateMachine
               (float param_1,float param_2,float param_3)

{
  undefined8 uVar1;
  long *unaff_x19;
  long *unaff_x20;
  long lVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  
  if (DAT_071babf8 == '\0') {
    FUN_02f07e70(PTR_DAT_06d03010);
    DAT_071babf8 = '\x01';
  }
                    /* try { // try from 052f25c4 to 053f26df has its CatchHandler @ 052f25c4
                       catch() { ... } // from try @ 052f25c4 with catch @ 052f25c4
                       catch() { ... } // from try @ 052f27a8 with catch @ 052f25c4
                       catch() { ... } // from try @ 052f287c with catch @ 052f25c4
                       catch() { ... } // from try @ 052f2920 with catch @ 052f25c4 */
  if (*(int *)(*(long *)PTR_DAT_06d03010 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  if (*unaff_x20 != 0) {
    fVar3 = (float)FUN_06741734(*unaff_x20,0);
    fVar4 = (float)FUN_066d1758(0);
    fVar4 = (SQRT(param_3 * param_3 + param_1 * param_1 + param_2 * param_2) * fVar3) / fVar4;
    *(float *)(unaff_x19 + 5) = fVar4;
    if (unaff_x19[4] != 0) {
      lVar2 = *(long *)(unaff_x19[4] + 0x28);
      fVar3 = (float)(**(code **)(*unaff_x19 + 0x178))();
      if (lVar2 != 0) {
        uVar1 = FUN_0668cbb8(fVar4 / fVar3,lVar2,0);
        lVar2 = unaff_x19[4];
        if (lVar2 != 0) {
          (**(code **)(*unaff_x19 + 0x1a8))
                    (*(undefined4 *)(lVar2 + 0x30),uVar1,*(undefined4 *)(lVar2 + 0x34));
          uVar5 = FUN_066cf260(0);
          *(undefined4 *)((long)unaff_x19 + 0x2c) = uVar5;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


