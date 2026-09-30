/*
FUNCTION_NAME: Skonec.MainGameTurnManager.<WaitUntillAllRequestChangeState>d__89$$System.IDisposable.Dispose
ENTRY_POINT: 03dc5c20
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void Skonec_MainGameTurnManager_<WaitUntillAllRequestChangeState>d__89__System_IDisposable_Dispose
               (undefined8 param_1)

{
  long lVar1;
  undefined8 *in_x9;
  long unaff_x19;
  
  FUN_085e6648(param_1,*in_x9,0);
  lVar1 = *(long *)(unaff_x19 + 0x30);
  if ((lVar1 != 0) && (*(long *)(unaff_x19 + 0x80) != 0)) {
    FUN_085b5e58(*(undefined4 *)(lVar1 + 100),*(undefined4 *)(lVar1 + 0x68),
                 *(undefined4 *)(lVar1 + 0x6c),*(undefined4 *)(lVar1 + 0x70),
                 *(long *)(unaff_x19 + 0x80),*(undefined8 *)PTR_DAT_08e6aae0,0);
    lVar1 = *(long *)(unaff_x19 + 0x30);
    if ((lVar1 != 0) && (*(long *)(unaff_x19 + 0x80) != 0)) {
      FUN_085b5e58(*(undefined4 *)(lVar1 + 0x74),*(undefined4 *)(lVar1 + 0x78),
                   *(undefined4 *)(lVar1 + 0x7c),*(undefined4 *)(lVar1 + 0x80),
                   *(long *)(unaff_x19 + 0x80),*(undefined8 *)PTR_DAT_08e6aaf8,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


