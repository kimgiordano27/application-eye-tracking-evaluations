/*
FUNCTION_NAME: DA_Assets.FCU.RequestSender.<TryParseResponse>d__16<FigmaImageRequest>$$System.IDisposable.Dispose
ENTRY_POINT: 06f13e58
PROGRAM: cac-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_4
*/


void DA_Assets_FCU_RequestSender_<TryParseResponse>d__16<FigmaImageRequest>__System_IDisposable_Dispose
               (long param_1)

{
  int iVar1;
  long lVar2;
  
                    /* catch() { ... } // from try @ 06f13944 with catch @ 06f13e58 */
  iVar1 = *(int *)(param_1 + 0x20);
  if (0 < iVar1) {
    lVar2 = *(long *)(param_1 + 0x10);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f1362c();
    }
    FUN_074d9400(lVar2,0,*(undefined4 *)(lVar2 + 0x18),0);
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0xffffffff00000000;
    FUN_074d9400(*(undefined8 *)(param_1 + 0x18),0,iVar1,0);
  }
  *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
  return;
}


