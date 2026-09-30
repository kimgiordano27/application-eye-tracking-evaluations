/*
FUNCTION_NAME: Unity.Services.Vivox.vx_sdk_config_t$$Dispose
ENTRY_POINT: 05ff34bc
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_3
*/


void Unity_Services_Vivox_vx_sdk_config_t__Dispose(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long unaff_x19;
  undefined8 *unaff_x21;
  long *plVar10;
  
  uVar4 = FUN_05362cb4(param_2,*param_1);
  *(undefined8 *)(unaff_x19 + 0x70) = uVar4;
  LeanTween__value();
  uVar4 = FUN_05362cb4();
  *(undefined8 *)(unaff_x19 + 0x78) = uVar4;
  LeanTween__value();
  uVar4 = FUN_05362cb4();
  *(undefined8 *)(unaff_x19 + 0x80) = uVar4;
  LeanTween__value();
  uVar4 = FUN_05362cb4();
  *(undefined8 *)(unaff_x19 + 0x90) = uVar4;
  LeanTween__value();
  uVar4 = FUN_05362cb4();
  *(undefined8 *)(unaff_x19 + 0x88) = uVar4;
  LeanTween__value();
  uVar4 = FUN_05362cb4();
  *(undefined8 *)(unaff_x19 + 0x98) = uVar4;
  LeanTween__value();
  lVar5 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069ff510);
  FUN_04e92874(lVar5,*(undefined8 *)PTR_DAT_069ff508);
  plVar10 = (long *)*unaff_x21;
  if (plVar10 != (long *)0x0) {
    lVar7 = *plVar10;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) ==
            *(long *)
             Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<string>,_SessionsManager_<Authenticate>d__52>__
           ) {
          puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_05ff361c;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)
             FUN_02dd004c(plVar10,*(long *)
                                   Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<string>,_SessionsManager_<Authenticate>d__52>__
                          ,0);
LAB_05ff361c:
    uVar4 = (*(code *)*puVar6)(plVar10,puVar6[1]);
    puVar3 = 
    Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_Client_<WebsocketCloseListener>d__50>__
    ;
    puVar2 = System_Net_Http_Headers_TryParseListDelegate<MediaTypeWithQualityHeaderValue>_TypeInfo;
    puVar1 = PTR_DAT_06a22ce8;
    if (lVar5 != 0) {
      FUN_04e935dc(lVar5,*(undefined8 *)
                          Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<CustomMatchmaking_RoomOperationResult>,_LocalMatchmaking_<OnColocationSessionFound>d__18>__
                   ,uVar4,*(undefined8 *)
                           System_Net_Http_Headers_TryParseListDelegate<MediaTypeWithQualityHeaderValue>_TypeInfo
                  );
      FUN_04e935dc(lVar5,*(undefined8 *)puVar3,*(undefined8 *)puVar1,*(undefined8 *)puVar2);
      *(long *)(unaff_x19 + 0xa0) = lVar5;
      LeanTween__value((long *)(unaff_x19 + 0xa0),lVar5);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


