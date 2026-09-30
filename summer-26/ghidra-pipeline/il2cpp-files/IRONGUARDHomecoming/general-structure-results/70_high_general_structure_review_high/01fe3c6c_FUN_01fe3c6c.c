/*
FUNCTION_NAME: FUN_01fe3c6c
ENTRY_POINT: 01fe3c6c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 83
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_3;telemetry_or_network_hits_19
*/


void FUN_01fe3c6c(int *param_1,long param_2,ulong param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint extraout_w1;
  uint extraout_w1_00;
  int iVar7;
  int iVar8;
  undefined1 auVar9 [16];
  
  if ((DAT_0482ee3e & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_Meta_Voice_NLPAudioRequestEvents<VoiceServiceRequestEvent>_get_OnPartialResponse__
                      );
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_Multiply<Vector3>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_Multiply<Vector4>__ctor__);
    thunk_FUN_01efb3a4(
                      Method_Meta_Voice_NLPAudioRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults>_HandleFinalNlpResponse__
                      );
    DAT_0482ee3e = 1;
  }
  puVar3 = 
  Method_Meta_Voice_NLPAudioRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults>_HandleFinalNlpResponse__
  ;
  puVar2 = Method_Meta_Voice_NLPAudioRequestEvents<VoiceServiceRequestEvent>_get_OnPartialResponse__
  ;
  puVar1 = Method_Unity_VisualScripting_Multiply<Vector4>__ctor__;
  if (*param_1 == 0) {
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_MoveTowards<float>__ctor__);
    uVar5 = thunk_FUN_01f117cc();
    FUN_0356ad6c(uVar5,0);
    uVar6 = thunk_FUN_01efb3a4(
                              Method_Meta_Voice_NLPAudioRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults>_OnFullResponse__
                              );
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar5,uVar6);
  }
  lVar4 = *(long *)(param_1 + 0x20);
  if (lVar4 != 0) {
    iVar7 = 0;
    iVar8 = 0;
    do {
      if (*(int *)(lVar4 + 0x18) <= iVar8) {
        FUN_031bc2b0(lVar4,iVar7,*(int *)(lVar4 + 0x18) - iVar7,*(undefined8 *)puVar2);
        return;
      }
      FUN_031ba788(lVar4,iVar8,*(undefined8 *)puVar1);
      if ((extraout_w1 >> 3 & 1) == 0) {
LAB_01fe3d1c:
        if ((*(long *)(param_1 + 0x20) == 0) ||
           (uVar5 = FUN_031ba788(*(long *)(param_1 + 0x20),iVar8,*(undefined8 *)puVar1),
           param_2 == 0)) break;
        FUN_01fde894(param_2,uVar5);
      }
      else {
        if ((param_3 & 1) != 0) {
          if (*(long *)(param_1 + 0x20) == 0) break;
          FUN_031ba788(*(long *)(param_1 + 0x20),iVar8,*(undefined8 *)puVar1);
          if ((extraout_w1_00 >> 4 & 1) != 0) goto LAB_01fe3d1c;
        }
        lVar4 = *(long *)(param_1 + 0x20);
        if (lVar4 == 0) break;
        auVar9 = FUN_031ba788(lVar4,iVar8,*(undefined8 *)puVar1);
        FUN_031ba7e0(lVar4,iVar7,auVar9._0_8_,auVar9._8_8_,*(undefined8 *)puVar3);
        iVar7 = iVar7 + 1;
      }
      lVar4 = *(long *)(param_1 + 0x20);
      iVar8 = iVar8 + 1;
    } while (lVar4 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


