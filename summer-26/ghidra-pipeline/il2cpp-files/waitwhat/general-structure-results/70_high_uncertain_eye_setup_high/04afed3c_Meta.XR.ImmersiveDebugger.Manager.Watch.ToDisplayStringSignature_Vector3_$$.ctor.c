/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch.ToDisplayStringSignature<Vector3>$$.ctor
ENTRY_POINT: 04afed3c
PROGRAM: waitwhat-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_Watch_ToDisplayStringSignature<Vector3>___ctor
               (undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  long lVar4;
  long lVar5;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  do {
    lVar2 = FUN_05974b90(lVar4,param_2,0);
    lVar5 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 8);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_031c09d4(lVar5);
    }
    if (lVar2 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = thunk_FUN_031c3cac(lVar2,lVar5);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03189058(lVar2,lVar5);
      }
    }
    lVar2 = FUN_031c05a4((long *)(unaff_x20 + 0x10),lVar3,lVar4);
    bVar1 = lVar2 != lVar4;
    lVar4 = lVar2;
  } while (bVar1);
  return;
}


