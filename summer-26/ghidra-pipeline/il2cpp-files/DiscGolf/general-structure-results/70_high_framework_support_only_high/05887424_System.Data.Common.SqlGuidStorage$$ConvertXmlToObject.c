/*
FUNCTION_NAME: System.Data.Common.SqlGuidStorage$$ConvertXmlToObject
ENTRY_POINT: 05887424
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 85
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_1;validity_or_gating_hits_10;telemetry_or_network_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_2
*/


void System_Data_Common_SqlGuidStorage__ConvertXmlToObject(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long unaff_x19;
  long *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 uVar9;
  long lVar10;
  long unaff_x24;
  long lStack0000000000000008;
  
  FUN_02d965b8(PTR_DAT_06a10570);
  FUN_02d965b8(Oculus_Avatar2_OvrAvatarEyeTrackingBehaviorOvrPlugin_TypeInfo);
  *(undefined1 *)(unaff_x24 + 0xb03) = 1;
  lStack0000000000000008 = 0;
  FUN_0588c430();
  FUN_0588c430();
  puVar2 = PTR_DAT_069fb9c0;
  uVar9 = *unaff_x21;
  if (*(int *)(*(long *)(PTR_DAT_069fb9c0 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  FUN_054f73b4(uVar9,0);
  if (unaff_x20 == (long *)0x0) goto LAB_05887760;
  uVar4 = (**(code **)(*unaff_x20 + 0x318))();
  puVar3 = Unity_Services_Lobbies_Models_TokenRequest_TypeInfo;
  if ((uVar4 & 1) == 0) {
    uVar9 = FUN_05838210(0);
    uVar8 = thunk_FUN_02dfd288(System_Security_Util_TokenizerStream_TypeInfo);
                    /* WARNING: Subroutine does not return */
    FUN_02d96724(uVar9,uVar8);
  }
  lVar10 = **(long **)(*(long *)Unity_Services_Lobbies_Models_TokenRequest_TypeInfo + 0xb8);
  thunk_FUN_02da4860();
  if (lVar10 == 0) {
    lVar10 = thunk_FUN_02dd3144(*(undefined8 *)System_Net_Http_Headers_Token_TypeInfo);
    FUN_046dc4e4(lVar10,100,*(undefined8 *)UnityEngine_UIElements_ToggleButtonGroupState_TypeInfo);
    thunk_FUN_02da4860();
    **(long **)(*(long *)puVar3 + 0xb8) = lVar10;
    LeanTween__value(*(undefined8 *)(*(long *)puVar3 + 0xb8),lVar10);
    if (lVar10 == 0) goto LAB_05887760;
  }
  uVar4 = FUN_046dc574(lVar10);
  if ((uVar4 & 1) == 0) {
    uVar9 = *(undefined8 *)System_Runtime_Serialization_TokenDataContract_TypeInfo;
    if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    plVar5 = (long *)FUN_054f73b4(uVar9,0);
    lVar6 = FUN_02d966a4(*(undefined8 *)PTR_DAT_069fc720,1);
    if (lVar6 == 0) goto LAB_05887760;
    lVar7 = thunk_FUN_02dd3048();
    if (lVar7 == 0) {
LAB_0588778c:
      uVar9 = thunk_FUN_02de0bec();
                    /* WARNING: Subroutine does not return */
      FUN_02d96724(uVar9,0);
    }
    if (*(int *)(lVar6 + 0x18) == 0) {
LAB_05887788:
                    /* WARNING: Subroutine does not return */
      FUN_02d96868();
    }
    *(long **)(lVar6 + 0x20) = unaff_x20;
    LeanTween__value();
    if ((plVar5 == (long *)0x0) ||
       (lVar6 = (**(code **)(*plVar5 + 0x9c8))(plVar5,lVar6,*(undefined8 *)(*plVar5 + 0x9d0)),
       lVar6 == 0)) goto LAB_05887760;
    plVar5 = (long *)FUN_05502adc(lVar6,*(undefined8 *)Oculus_Avatar2_CAPI_ovrAvatar2Matrix4f_var,0)
    ;
    uVar4 = (**(code **)(*unaff_x20 + 0x648))();
    if ((uVar4 & 1) != 0) {
      lVar10 = FUN_02d966a4(*(undefined8 *)PTR_DAT_069fc180,1);
      if (lVar10 != 0) {
        if ((unaff_x19 != 0) && (lVar6 = thunk_FUN_02dd3048(), lVar6 == 0)) goto LAB_0588778c;
        if (*(int *)(lVar10 + 0x18) == 0) goto LAB_05887788;
        *(long *)(lVar10 + 0x20) = unaff_x19;
        LeanTween__value();
        if (plVar5 != (long *)0x0) {
          plVar5 = (long *)FUN_0541fb58(plVar5,0,lVar10,0);
          if (plVar5 == (long *)0x0) {
            return;
          }
          bVar1 = *(byte *)(*(long *)puVar3 + 0x130);
          if ((bVar1 <= *(byte *)(*plVar5 + 0x130)) &&
             (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)puVar3)) {
            return;
          }
                    /* WARNING: Subroutine does not return */
          FUN_02d96be0();
        }
      }
      goto LAB_05887760;
    }
    uVar9 = *(undefined8 *)System_Security_Util_Tokenizer_TypeInfo;
    if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    uVar9 = FUN_054f73b4(uVar9,0);
    if (plVar5 == (long *)0x0) goto LAB_05887760;
    lVar6 = (**(code **)(*plVar5 + 0x4d8))(plVar5,uVar9,*(undefined8 *)(*plVar5 + 0x4e0));
    if (lVar6 == 0) {
      lStack0000000000000008 = 0;
    }
    else {
      uVar9 = *(undefined8 *)System_Security_Util_TokenizerShortBlock_TypeInfo;
      lStack0000000000000008 = thunk_FUN_02dd3048(lVar6,uVar9);
      if (lStack0000000000000008 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96be0(lVar6,uVar9);
      }
    }
    FUN_046dc630(lVar10);
  }
  if (lStack0000000000000008 != 0) {
    (**(code **)(lStack0000000000000008 + 0x18))(*(undefined8 *)(lStack0000000000000008 + 0x40));
    return;
  }
LAB_05887760:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


