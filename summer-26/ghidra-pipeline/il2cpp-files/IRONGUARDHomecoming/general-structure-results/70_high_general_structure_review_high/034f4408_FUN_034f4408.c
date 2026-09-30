/*
FUNCTION_NAME: FUN_034f4408
ENTRY_POINT: 034f4408
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_9;validity_or_gating_hits_7;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_4
*/


void FUN_034f4408(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                 undefined8 *param_5,uint param_6)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar9;
  double dVar10;
  long local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined *puVar8;
  
  puVar8 = Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__;
  local_48 = param_3;
  local_40 = param_2;
  local_38 = param_1;
  if ((DAT_04832e68 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusInEvent>__
                      );
    DAT_04832e68 = 1;
  }
  if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  iVar2 = FUN_0354dfec(&local_38,0);
  if (iVar2 == 0) {
LAB_034f44a4:
    if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    iVar2 = FUN_0354dfec(&local_40,0);
    if (iVar2 == 0) {
LAB_034f44e8:
      local_50 = param_5[2];
      uStack_58 = param_5[1];
      local_60 = *param_5;
      uVar3 = FUN_034f4210(param_4,&local_60);
      uVar7 = local_38;
      uVar5 = local_40;
      if (((uVar3 & 1) != 0) && ((param_6 & 1) == 0)) {
        thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
        uVar5 = thunk_FUN_01f117cc();
        uVar7 = thunk_FUN_01efb3a4(Method_Meta_WitAi_WitService_HandleComplete__);
        puVar8 = Method_Meta_WitAi_WitService_HandlePartialResult__;
        goto LAB_034f48c4;
      }
      if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar3 = FUN_03550074(uVar7,uVar5,0);
      puVar1 = Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusInEvent>__;
      if ((uVar3 & 1) != 0) {
        thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
        uVar5 = thunk_FUN_01f117cc();
        puVar8 = Method_Meta_WitAi_WitService_HandleResult__;
        goto LAB_034f4884;
      }
      if (*(int *)(*(long *)
                    Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusInEvent>__
                  + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      dVar10 = (double)FUN_035815c4(&local_48,0);
      if (dVar10 < -23.0) {
LAB_034f472c:
        local_68 = local_48;
        uVar5 = thunk_FUN_01efb3a4(
                                  Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusInEvent>__
                                  );
        uVar5 = thunk_FUN_01f113fc(uVar5,&local_68);
        thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
        uVar7 = thunk_FUN_01f117cc();
        uVar9 = thunk_FUN_01efb3a4(Method_Meta_WitAi_WitService_<OnMicSampleReady>b__78_2__);
        uVar6 = thunk_FUN_01efb3a4(Method_System_Net_WebOperation_SetPriorityRequest__);
        FUN_034f48f0(uVar7,uVar9,uVar5,uVar6);
        uVar5 = thunk_FUN_01efb3a4(Method_Meta_WitAi_WitService_<SetupRequest>b__67_0__);
                    /* WARNING: Subroutine does not return */
        FUN_01f08910(uVar7,uVar5);
      }
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      dVar10 = (double)FUN_035815c4(&local_48,0);
      if (14.0 < dVar10) goto LAB_034f472c;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar5 = local_38;
      if (0x72884f610 <
          (local_48 * -0x6832fd919f07a5f5 + 0x72884f61000U >> 9 |
          local_48 * -0x6832fd919f07a5f5 << 0x37)) {
        thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
        uVar5 = thunk_FUN_01f117cc();
        uVar7 = thunk_FUN_01efb3a4(Method_System_Net_WebProxy_GetProxy__);
        puVar8 = Method_Meta_WitAi_WitService_<OnMicSampleReady>b__78_2__;
        goto LAB_034f48c4;
      }
      lVar4 = *(long *)puVar8;
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        lVar4 = *(long *)puVar8;
      }
      uVar3 = FUN_0354ff34(uVar5,*(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x10),0);
      if ((uVar3 & 1) != 0) {
        if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        iVar2 = FUN_0354dfec(&local_38,0);
        if (iVar2 == 0) {
          if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          uVar5 = FUN_0354e8f0(&local_38,0);
          lVar4 = *(long *)puVar1;
          if (*(int *)(lVar4 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c(lVar4);
            lVar4 = *(long *)puVar1;
          }
          uVar3 = FUN_035820b0(uVar5,**(undefined8 **)(lVar4 + 0xb8),0);
          if ((uVar3 & 1) != 0) {
            thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
            uVar5 = thunk_FUN_01f117cc();
            puVar8 = Method_Meta_WitAi_WitService_OnFullTranscription__;
            goto LAB_034f4884;
          }
        }
      }
      uVar5 = local_40;
      lVar4 = *(long *)puVar8;
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        lVar4 = *(long *)puVar8;
      }
      uVar3 = FUN_0354ff34(uVar5,*(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x18),0);
      if ((uVar3 & 1) == 0) {
        return;
      }
      if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      iVar2 = FUN_0354dfec(&local_40,0);
      if (iVar2 != 0) {
        return;
      }
      if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar5 = FUN_0354e8f0(&local_40,0);
      lVar4 = *(long *)puVar1;
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(lVar4);
        lVar4 = *(long *)puVar1;
      }
      uVar3 = FUN_035820b0(uVar5,**(undefined8 **)(lVar4 + 0xb8),0);
      if ((uVar3 & 1) == 0) {
        return;
      }
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
      uVar5 = thunk_FUN_01f117cc();
      puVar8 = Method_Meta_WitAi_WitService_OnFullTranscription__;
    }
    else {
      if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      iVar2 = FUN_0354dfec(&local_40,0);
      if (iVar2 == 1) goto LAB_034f44e8;
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
      uVar5 = thunk_FUN_01f117cc();
      puVar8 = Method_Meta_WitAi_WitService_OnByteDataReady__;
    }
    uVar7 = thunk_FUN_01efb3a4(puVar8);
    puVar8 = Method_Meta_WitAi_WitService_OnMicSampleReady__;
  }
  else {
    if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    iVar2 = FUN_0354dfec(&local_38,0);
    if (iVar2 == 1) goto LAB_034f44a4;
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
    uVar5 = thunk_FUN_01f117cc();
    puVar8 = Method_Meta_WitAi_WitService_OnByteDataReady__;
LAB_034f4884:
    uVar7 = thunk_FUN_01efb3a4(puVar8);
    puVar8 = Method_Meta_WitAi_WitService_OnMicLevelChanged__;
  }
LAB_034f48c4:
  uVar9 = thunk_FUN_01efb3a4(puVar8);
  FUN_034efd98(uVar5,uVar7,uVar9);
  uVar7 = thunk_FUN_01efb3a4(Method_Meta_WitAi_WitService_<SetupRequest>b__67_0__);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar5,uVar7);
}


