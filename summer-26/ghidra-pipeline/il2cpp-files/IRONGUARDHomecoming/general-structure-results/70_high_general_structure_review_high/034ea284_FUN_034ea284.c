/*
FUNCTION_NAME: FUN_034ea284
ENTRY_POINT: 034ea284
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_5;validity_or_gating_hits_8;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_5
*/


void FUN_034ea284(long param_1,long param_2,long param_3,undefined1 *param_4)

{
  uint uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  
                    /* try { // try from 034ea288 to 035ea28b has its CatchHandler @ 034ea600 */
                    /* try { // try from 034ea28c to 035ea29b has its CatchHandler @ 034ea630 */
  if ((DAT_04832e55 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusInEvent>__
                      );
    thunk_FUN_01efb3a4(Method_System_Net_WebConnectionStream_set_WriteTimeout__);
    DAT_04832e55 = 1;
  }
  puVar4 = Method_System_Net_WebConnectionStream_set_WriteTimeout__;
  if (param_1 == 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar7 = thunk_FUN_01f117cc();
    uVar9 = thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_Scroller_ScrollPageDown__);
    FUN_034efd20(uVar7,uVar9);
  }
  else {
    if (*(int *)(param_1 + 0x10) == 0) {
      uVar7 = thunk_FUN_01efb3a4(Method_System_Net_WebOperation_<RegisterRequest>b__48_0__);
      uVar7 = FUN_033f0c40(uVar7,param_1,0);
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
      uVar9 = thunk_FUN_01f117cc();
      uVar5 = thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_Scroller_ScrollPageDown__);
      FUN_034efd98(uVar9,uVar7,uVar5);
      uVar7 = thunk_FUN_01efb3a4(Method_System_Net_WebHeaderCollection_ThrowOnRestrictedHeader__);
                    /* WARNING: Subroutine does not return */
      FUN_01f08910(uVar9,uVar7);
    }
    if (*(int *)(*(long *)Method_System_Net_WebConnectionStream_set_WriteTimeout__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar3 = FUN_034f3488(param_2);
    if ((uVar3 & 1) == 0) {
      if (*(int *)(*(long *)
                    Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusInEvent>__
                  + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      if ((param_2 * -0x6832fd919f07a5f5 + 0x72884f61000U >> 9 |
          param_2 * -0x6832fd919f07a5f5 << 0x37) < 0x72884f611) {
        *param_4 = 0;
        if ((param_3 != 0) && (*(long *)(param_3 + 0x18) != 0)) {
          *param_4 = 1;
          puVar2 = Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__;
          uVar1 = *(uint *)(param_3 + 0x18);
          if (0 < (int)uVar1) {
            lVar10 = 0;
            lVar8 = 0;
            do {
              if (uVar1 <= (uint)lVar10) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a44();
              }
              lVar6 = *(long *)(param_3 + 0x20 + lVar10 * 8);
              if (lVar6 == 0) {
                thunk_FUN_01efb3a4(Method_System_Net_WebHeaderCollection_Remove__);
                uVar7 = thunk_FUN_01f117cc();
                puVar4 = Method_System_Net_WebHeaderCollection_Remove__;
LAB_034ea484:
                uVar9 = thunk_FUN_01efb3a4(puVar4);
                FUN_0356aef8(uVar7,uVar9,0);
                goto LAB_034ea498;
              }
              if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c();
              }
              uVar3 = FUN_034ed00c(param_2,lVar6);
              if ((uVar3 & 1) == 0) {
                thunk_FUN_01efb3a4(Method_System_Net_WebHeaderCollection_Remove__);
                uVar7 = thunk_FUN_01f117cc();
                puVar4 = Method_System_Net_WebHeaderCollection_Set__;
                goto LAB_034ea484;
              }
              if (lVar8 != 0) {
                uVar7 = *(undefined8 *)(lVar6 + 0x10);
                uVar9 = *(undefined8 *)(lVar8 + 0x18);
                if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                  thunk_FUN_01ee6d7c();
                }
                uVar3 = FUN_03550008(uVar7,uVar9,0);
                if ((uVar3 & 1) != 0) {
                  thunk_FUN_01efb3a4(Method_System_Net_WebHeaderCollection_Remove__);
                  uVar7 = thunk_FUN_01f117cc();
                  puVar4 = Method_System_Net_WebHeaderCollection_SetInternal__;
                  goto LAB_034ea484;
                }
              }
              uVar1 = *(uint *)(param_3 + 0x18);
              lVar10 = lVar10 + 1;
              lVar8 = lVar6;
            } while ((int)lVar10 < (int)uVar1);
          }
        }
        return;
      }
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
      uVar7 = thunk_FUN_01f117cc();
      uVar9 = thunk_FUN_01efb3a4(Method_System_Net_WebProxy_GetProxy__);
      uVar5 = thunk_FUN_01efb3a4(Method_System_Net_WebOperation_RegisterRequest__);
      FUN_034efd98(uVar7,uVar9,uVar5);
    }
    else {
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
      uVar7 = thunk_FUN_01f117cc();
      uVar9 = thunk_FUN_01efb3a4(Method_System_Net_WebOperation_RegisterRequest__);
      uVar5 = thunk_FUN_01efb3a4(Method_System_Net_WebOperation_SetPriorityRequest__);
      FUN_034f3578(uVar7,uVar9,uVar5);
    }
  }
LAB_034ea498:
  uVar9 = thunk_FUN_01efb3a4(Method_System_Net_WebHeaderCollection_ThrowOnRestrictedHeader__);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar7,uVar9);
}


