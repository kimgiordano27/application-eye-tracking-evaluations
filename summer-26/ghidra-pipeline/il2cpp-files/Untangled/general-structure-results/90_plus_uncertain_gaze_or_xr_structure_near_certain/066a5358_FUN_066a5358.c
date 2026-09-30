/*
FUNCTION_NAME: FUN_066a5358
ENTRY_POINT: 066a5358
PROGRAM: Untangled-libil2cpp.so
SCORE: 94
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_4;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


void FUN_066a5358(long param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long local_60;
  long local_58 [2];
  uint local_48;
  uint local_34;
  
  local_34 = param_5;
  if (((param_2 & 0x1f0) != 0) && (uVar1 = FUN_066d0c78(0), (uVar1 & 1) == 0)) {
    local_58[0] = thunk_FUN_02f239f0(OVRLocatable_TypeInfo);
    local_58[1] = 0xffffffffffffffff;
    local_48 = param_2;
    uVar2 = FUN_05638848(local_58,0);
    uVar5 = thunk_FUN_02f239f0(OVRManager_TypeInfo);
    uVar2 = FUN_05458458(uVar5,uVar2,0);
LAB_066a55b4:
    thunk_FUN_02f239f0(PTR_DAT_06d02080);
    uVar5 = thunk_FUN_02ef1808();
    FUN_0555e840(uVar5,uVar2,0);
LAB_066a55d8:
    uVar2 = thunk_FUN_02f239f0(UnityEngine_EventSystems_OVRInputModule_TypeInfo);
                    /* WARNING: Subroutine does not return */
    FUN_02f07f94(uVar5,uVar2);
  }
  if ((int)param_4 < 1) {
    thunk_FUN_02f239f0(PTR_DAT_06d02080);
    uVar5 = thunk_FUN_02ef1808();
    uVar2 = thunk_FUN_02f239f0(OVRHandTest_TypeInfo);
    puVar3 = PTR_DAT_06d04c48;
  }
  else {
    if ((int)param_5 < 1) {
      thunk_FUN_02f239f0(PTR_DAT_06d02080);
      uVar5 = thunk_FUN_02ef1808();
      puVar3 = OVRHaptics_TypeInfo;
    }
    else {
      if ((((param_2 >> 1 & 1) != 0) && (param_5 != 2)) && (param_5 != 4)) {
        uVar2 = FUN_055ff450(&local_34,0);
        uVar5 = thunk_FUN_02f239f0(OVRMarkerPayload_TypeInfo);
        uVar2 = FUN_05458458(uVar5,uVar2,0);
        thunk_FUN_02f239f0(PTR_DAT_06d02080);
        uVar5 = thunk_FUN_02ef1808();
        uVar4 = thunk_FUN_02f239f0(PTR_DAT_06d38360);
        FUN_05558580(uVar5,uVar2,uVar4,0);
        goto LAB_066a55d8;
      }
      if ((param_2 < 0x10) || ((param_5 & 3) == 0)) {
        lVar6 = (ulong)param_5 * (ulong)param_4;
        local_60 = FUN_066cf7d4(0);
        puVar3 = PTR_DAT_06d040b0;
        if (lVar6 - local_60 == 0 || lVar6 < local_60) {
          if (((param_2 >> 3 & 1) == 0) || ((param_3 & 1) == 0)) {
            if (DAT_071d17d0 == (code *)0x0) {
              DAT_071d17d0 = (code *)FUN_02f07e34(
                                                 "UnityEngine.GraphicsBuffer::InitBuffer(UnityEngine.GraphicsBuffer/Target,UnityEngine.GraphicsBuffer/UsageFlags,System.Int32,System.Int32)"
                                                 );
            }
            uVar2 = (*DAT_071d17d0)(param_2,param_3,param_4,param_5);
            *(undefined8 *)(param_1 + 0x10) = uVar2;
            return;
          }
          thunk_FUN_02f239f0(PTR_DAT_06d02080);
          uVar5 = thunk_FUN_02ef1808();
          uVar2 = thunk_FUN_02f239f0(OVRInput_TypeInfo);
          FUN_0555e840(uVar5,uVar2,0);
          goto LAB_066a555c;
        }
        local_58[0] = lVar6;
        uVar2 = thunk_FUN_02f239f0(PTR_DAT_06d040b0);
        uVar2 = thunk_FUN_02ef1438(uVar2,local_58);
        uVar5 = thunk_FUN_02f239f0(puVar3);
        uVar5 = thunk_FUN_02ef1438(uVar5,&local_60);
        uVar4 = thunk_FUN_02f239f0(OVRHumanBodyBonesMappingsInterface_TypeInfo);
        uVar2 = FUN_05465b44(uVar4,uVar2,uVar5,0);
        goto LAB_066a55b4;
      }
      thunk_FUN_02f239f0(PTR_DAT_06d02080);
      uVar5 = thunk_FUN_02ef1808();
      puVar3 = OVRHapticsClip_TypeInfo;
    }
    uVar2 = thunk_FUN_02f239f0(puVar3);
    puVar3 = PTR_DAT_06d38360;
  }
  uVar4 = thunk_FUN_02f239f0(puVar3);
  FUN_05558580(uVar5,uVar2,uVar4,0);
LAB_066a555c:
  uVar2 = thunk_FUN_02f239f0(UnityEngine_EventSystems_OVRInputModule_TypeInfo);
                    /* WARNING: Subroutine does not return */
  FUN_02f07f94(uVar5,uVar2);
}


