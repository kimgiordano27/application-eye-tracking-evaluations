/*
FUNCTION_NAME: FUN_05887354
ENTRY_POINT: 05887354
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 141
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_8;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_3;functionality_data_collection_or_telemetry_hits_3
*/


void FUN_05887354(long *param_1,long param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long local_48;
  
  puVar4 = Oculus_Avatar2_OvrAvatarEyeTrackingBehaviorOvrPlugin_TypeInfo;
  puVar2 = PTR_DAT_06a10570;
  puVar3 = PTR_DAT_06a0f8a8;
  if ((DAT_06dc0b03 & 1) == 0) {
    FUN_02d965b8(UnityEngine_UIElements_Toggle_TypeInfo);
    FUN_02d965b8(UnityEngine_UIElements_ToggleButtonGroup_TypeInfo);
    FUN_02d965b8(UnityEngine_UIElements_ToggleButtonGroupState_TypeInfo);
    FUN_02d965b8(System_Net_Http_Headers_Token_TypeInfo);
    FUN_02d965b8(System_Runtime_Serialization_TokenDataContract_TypeInfo);
    FUN_02d965b8(Unity_Services_Lobbies_Models_TokenRequest_TypeInfo);
    FUN_02d965b8(System_Security_Util_Tokenizer_TypeInfo);
    FUN_02d965b8(System_Security_Util_TokenizerShortBlock_TypeInfo);
    FUN_02d965b8(PTR_DAT_06a0f8a8);
    FUN_02d965b8(PTR_DAT_069fc180);
    FUN_02d965b8(PTR_DAT_069fc720);
    FUN_02d965b8(Oculus_Avatar2_CAPI_ovrAvatar2Matrix4f_var);
    FUN_02d965b8(PTR_DAT_06a10570);
    FUN_02d965b8(Oculus_Avatar2_OvrAvatarEyeTrackingBehaviorOvrPlugin_TypeInfo);
    DAT_06dc0b03 = 1;
  }
  local_48 = 0;
  FUN_0588c430(param_1,*(undefined8 *)puVar4,0);
  FUN_0588c430(param_2,*(undefined8 *)puVar2,0);
  puVar2 = PTR_DAT_069fb9c0;
  uVar11 = *(undefined8 *)puVar3;
  if (*(int *)(*(long *)(PTR_DAT_069fb9c0 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar11 = FUN_054f73b4(uVar11,0);
  if (param_1 == (long *)0x0) goto LAB_05887760;
  uVar5 = (**(code **)(*param_1 + 0x318))(param_1,uVar11,*(undefined8 *)(*param_1 + 800));
  puVar3 = Unity_Services_Lobbies_Models_TokenRequest_TypeInfo;
  if ((uVar5 & 1) == 0) {
    uVar11 = FUN_05838210(0);
    uVar10 = thunk_FUN_02dfd288(System_Security_Util_TokenizerStream_TypeInfo);
                    /* WARNING: Subroutine does not return */
    FUN_02d96724(uVar11,uVar10);
  }
  lVar12 = **(long **)(*(long *)Unity_Services_Lobbies_Models_TokenRequest_TypeInfo + 0xb8);
  thunk_FUN_02da4860();
  if (lVar12 == 0) {
    lVar12 = thunk_FUN_02dd3144(*(undefined8 *)System_Net_Http_Headers_Token_TypeInfo);
    FUN_046dc4e4(lVar12,100,*(undefined8 *)UnityEngine_UIElements_ToggleButtonGroupState_TypeInfo);
    thunk_FUN_02da4860();
    **(long **)(*(long *)puVar3 + 0xb8) = lVar12;
    LeanTween__value(*(undefined8 *)(*(long *)puVar3 + 0xb8),lVar12);
    if (lVar12 == 0) goto LAB_05887760;
  }
  uVar5 = FUN_046dc574(lVar12,param_1,&local_48,
                       *(undefined8 *)UnityEngine_UIElements_ToggleButtonGroup_TypeInfo);
  if ((uVar5 & 1) == 0) {
    uVar11 = *(undefined8 *)System_Runtime_Serialization_TokenDataContract_TypeInfo;
    if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    plVar6 = (long *)FUN_054f73b4(uVar11,0);
    plVar7 = (long *)FUN_02d966a4(*(undefined8 *)PTR_DAT_069fc720,1);
    if (plVar7 == (long *)0x0) goto LAB_05887760;
    lVar8 = thunk_FUN_02dd3048(param_1,*(undefined8 *)(*plVar7 + 0x40));
    if (lVar8 == 0) {
LAB_0588778c:
      uVar11 = thunk_FUN_02de0bec();
                    /* WARNING: Subroutine does not return */
      FUN_02d96724(uVar11,0);
    }
    if ((int)plVar7[3] == 0) {
LAB_05887788:
                    /* WARNING: Subroutine does not return */
      FUN_02d96868();
    }
    plVar7[4] = (long)param_1;
    LeanTween__value(plVar7 + 4,param_1);
    if ((plVar6 == (long *)0x0) ||
       (lVar8 = (**(code **)(*plVar6 + 0x9c8))(plVar6,plVar7,*(undefined8 *)(*plVar6 + 0x9d0)),
       lVar8 == 0)) goto LAB_05887760;
    plVar6 = (long *)FUN_05502adc(lVar8,*(undefined8 *)Oculus_Avatar2_CAPI_ovrAvatar2Matrix4f_var,0)
    ;
    uVar5 = (**(code **)(*param_1 + 0x648))(param_1,*(undefined8 *)(*param_1 + 0x650));
    if ((uVar5 & 1) != 0) {
      plVar7 = (long *)FUN_02d966a4(*(undefined8 *)PTR_DAT_069fc180,1);
      if (plVar7 != (long *)0x0) {
        if ((param_2 != 0) &&
           (lVar12 = thunk_FUN_02dd3048(param_2,*(undefined8 *)(*plVar7 + 0x40)), lVar12 == 0))
        goto LAB_0588778c;
        if ((int)plVar7[3] == 0) goto LAB_05887788;
        plVar7[4] = param_2;
        LeanTween__value(plVar7 + 4,param_2);
        if (plVar6 != (long *)0x0) {
          plVar6 = (long *)FUN_0541fb58(plVar6,0,plVar7,0);
          if (plVar6 == (long *)0x0) {
            return;
          }
          bVar1 = *(byte *)(*(long *)puVar3 + 0x130);
          if ((bVar1 <= *(byte *)(*plVar6 + 0x130)) &&
             (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)puVar3)) {
            return;
          }
                    /* WARNING: Subroutine does not return */
          FUN_02d96be0();
        }
      }
      goto LAB_05887760;
    }
    uVar11 = *(undefined8 *)System_Security_Util_Tokenizer_TypeInfo;
    if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    uVar11 = FUN_054f73b4(uVar11,0);
    if (plVar6 == (long *)0x0) goto LAB_05887760;
    lVar8 = (**(code **)(*plVar6 + 0x4d8))(plVar6,uVar11,*(undefined8 *)(*plVar6 + 0x4e0));
    if (lVar8 == 0) {
      lVar9 = 0;
    }
    else {
      uVar11 = *(undefined8 *)System_Security_Util_TokenizerShortBlock_TypeInfo;
      lVar9 = thunk_FUN_02dd3048(lVar8,uVar11);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96be0(lVar8,uVar11);
      }
    }
    local_48 = lVar9;
    FUN_046dc630(lVar12,param_1,lVar9,*(undefined8 *)UnityEngine_UIElements_Toggle_TypeInfo);
  }
  if (local_48 != 0) {
    (**(code **)(local_48 + 0x18))
              (*(undefined8 *)(local_48 + 0x40),param_2,*(undefined8 *)(local_48 + 0x28));
    return;
  }
LAB_05887760:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


