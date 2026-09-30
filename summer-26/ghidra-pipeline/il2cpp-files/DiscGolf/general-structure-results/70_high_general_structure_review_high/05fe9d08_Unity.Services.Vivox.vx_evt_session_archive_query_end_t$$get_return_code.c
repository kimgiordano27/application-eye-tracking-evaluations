/*
FUNCTION_NAME: Unity.Services.Vivox.vx_evt_session_archive_query_end_t$$get_return_code
ENTRY_POINT: 05fe9d08
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_3;frame_or_lifecycle_behavior
*/


void Unity_Services_Vivox_vx_evt_session_archive_query_end_t__get_return_code(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  uint in_w8;
  long unaff_x19;
  int iVar7;
  int unaff_w22;
  undefined8 uVar8;
  ulong uVar9;
  
  puVar2 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<TokenResponse>,_WrappedMatchmakerService_<DeleteBackfillTicketAsync>d__13>__
  ;
  if ((int)in_w8 < 1) {
    iVar7 = 0;
  }
  else {
    iVar7 = 0;
    uVar9 = 0;
    do {
      if (in_w8 <= uVar9) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96868();
      }
      lVar4 = *(long *)(unaff_x19 + 0x70);
      if (lVar4 == 0) goto LAB_05fe9f1c;
      if (iVar7 < *(int *)(lVar4 + 0x18)) {
        uVar8 = *(undefined8 *)(param_1 + 0x20 + uVar9 * 8);
        lVar4 = FUN_0400ff1c(lVar4,iVar7,*(undefined8 *)puVar2);
        uVar5 = thunk_FUN_02dd3144(*(undefined8 *)
                                    Method_UnityEngine_InputSystem_Utilities_InlinedArray<Action<IMECompositionString>>_Remove__
                                  );
        FUN_03b75afc();
        if (lVar4 == 0) goto LAB_05fe9f1c;
        *(undefined8 *)(lVar4 + 0x78) = uVar5;
        LeanTween__value((undefined8 *)(lVar4 + 0x78),uVar5);
        uVar5 = thunk_FUN_02dd3144(*(undefined8 *)
                                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<Task>,_ChannelSession_<DisconnectAsync>d__49>__
                                  );
        FUN_04cca6e0();
        *(undefined8 *)(lVar4 + 0x80) = uVar5;
        LeanTween__value((undefined8 *)(lVar4 + 0x80),uVar5);
        uVar5 = 0;
        if (iVar7 < unaff_w22 + -1) {
          if (*(long *)(unaff_x19 + 0x70) == 0) goto LAB_05fe9f1c;
          uVar5 = FUN_0400ff1c(*(long *)(unaff_x19 + 0x70),iVar7 + 1,*(undefined8 *)puVar2);
        }
        *(undefined8 *)(lVar4 + 0x50) = uVar5;
        LeanTween__value();
        if (iVar7 < 1) {
          uVar5 = 0;
        }
        else {
          if (*(long *)(unaff_x19 + 0x70) == 0) goto LAB_05fe9f1c;
          uVar5 = FUN_0400ff1c(*(long *)(unaff_x19 + 0x70),iVar7 + -1,*(undefined8 *)puVar2);
        }
        *(undefined8 *)(lVar4 + 0x48) = uVar5;
        LeanTween__value();
        *(long *)(lVar4 + 0x40) = unaff_x19;
        LeanTween__value((long *)(lVar4 + 0x40));
        plVar6 = *(long **)(lVar4 + 0x60);
        *(int *)(lVar4 + 0x88) = iVar7;
        if (plVar6 == (long *)0x0) goto LAB_05fe9f1c;
        (**(code **)(*plVar6 + 0x5e8))(plVar6,uVar8,*(undefined8 *)(*plVar6 + 0x5f0));
        FUN_05fe26bc(lVar4);
        iVar7 = iVar7 + 1;
      }
      in_w8 = *(uint *)(param_1 + 0x18);
      uVar9 = uVar9 + 1;
    } while ((long)uVar9 < (long)(int)in_w8);
  }
  puVar3 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<TokenResponse>,_WrappedMatchmakerService_<UpdateBackfillTicketAsync>d__14>__
  ;
  puVar1 = PTR_DAT_06a0d728;
  lVar4 = *(long *)(unaff_x19 + 0x70);
  while (lVar4 != 0) {
    if (*(int *)(lVar4 + 0x18) <= iVar7) {
      return;
    }
    lVar4 = FUN_0400ff1c(lVar4,iVar7,*(undefined8 *)puVar2);
    if (lVar4 == 0) break;
    uVar5 = FUN_0634bbcc(lVar4,0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_02df485c(*(long *)puVar1);
    }
    FUN_05f8a28c(uVar5,0);
    if (*(long *)(unaff_x19 + 0x70) == 0) break;
    FUN_0400ff70(*(long *)(unaff_x19 + 0x70),iVar7,0,*(undefined8 *)puVar3);
    iVar7 = iVar7 + 1;
    lVar4 = *(long *)(unaff_x19 + 0x70);
  }
LAB_05fe9f1c:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


