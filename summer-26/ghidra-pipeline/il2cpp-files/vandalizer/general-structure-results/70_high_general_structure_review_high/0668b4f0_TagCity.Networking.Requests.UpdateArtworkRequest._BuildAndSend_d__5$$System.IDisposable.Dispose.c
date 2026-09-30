/*
FUNCTION_NAME: TagCity.Networking.Requests.UpdateArtworkRequest.<BuildAndSend>d__5$$System.IDisposable.Dispose
ENTRY_POINT: 0668b4f0
PROGRAM: vandalizer-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_4;frame_or_lifecycle_behavior
*/


long TagCity_Networking_Requests_UpdateArtworkRequest_<BuildAndSend>d__5__System_IDisposable_Dispose
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  
  FUN_066965e4();
  puVar2 = PTR_DAT_07617118;
  puVar1 = PTR_DAT_075b2ef0;
  if (param_1 != 0) {
    FUN_066964a0(param_1,0);
    lVar4 = *(long *)puVar1;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar4);
      lVar4 = *(long *)puVar1;
    }
    uVar5 = *(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x48);
    uVar3 = thunk_FUN_0322f148(*(undefined8 *)puVar2);
    FUN_066af748(uVar3,1,uVar5,param_1,0);
    FUN_0668b5d8();
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


