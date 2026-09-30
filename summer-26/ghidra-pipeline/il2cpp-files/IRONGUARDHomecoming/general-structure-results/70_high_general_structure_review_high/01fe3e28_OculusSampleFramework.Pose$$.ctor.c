/*
FUNCTION_NAME: OculusSampleFramework.Pose$$.ctor
ENTRY_POINT: 01fe3e28
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 72
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_10
*/


void OculusSampleFramework_Pose___ctor(int *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x21;
  
  if ((*(byte *)(unaff_x21 + 0xe3f) & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_Meta_Voice_NLPAudioRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults>_OnInit__
                      );
    *(undefined1 *)(unaff_x21 + 0xe3f) = 1;
  }
  if (*param_1 != 0) {
    FUN_01fe3c6c(param_1,param_2,1);
    lVar4 = *(long *)(param_1 + 0x20);
    if (lVar4 != 0) {
      iVar1 = *(int *)(lVar4 + 0x18);
      *(undefined4 *)(lVar4 + 0x18) = 0;
      *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
      if (0 < iVar1) {
        FUN_0358d1e4(*(undefined8 *)(lVar4 + 0x10),0,iVar1,0);
      }
      *param_1 = 0;
      FUN_04035fe0(param_1 + 0x1c,0);
      FUN_04035fe0(param_1 + 0x18,0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  thunk_FUN_01efb3a4(Method_Unity_VisualScripting_MoveTowards<float>__ctor__);
  uVar2 = thunk_FUN_01f117cc();
  FUN_0356ad6c(uVar2,0);
  uVar3 = thunk_FUN_01efb3a4(
                            Method_Meta_Voice_NLPAudioRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults>_OnPartialResponse__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar2,uVar3);
}


