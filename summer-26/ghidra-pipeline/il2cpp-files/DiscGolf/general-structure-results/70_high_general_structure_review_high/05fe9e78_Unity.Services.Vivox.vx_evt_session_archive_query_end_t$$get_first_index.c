/*
FUNCTION_NAME: Unity.Services.Vivox.vx_evt_session_archive_query_end_t$$get_first_index
ENTRY_POINT: 05fe9e78
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


void Unity_Services_Vivox_vx_evt_session_archive_query_end_t__get_first_index(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x19;
  int unaff_w20;
  int iVar6;
  long unaff_x21;
  undefined8 uVar7;
  undefined8 *unaff_x25;
  ulong unaff_x26;
  int unaff_w28;
  long unaff_x29;
  
  do {
    FUN_05fe26bc(param_1);
    puVar2 = 
    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<TokenResponse>,_WrappedMatchmakerService_<UpdateBackfillTicketAsync>d__14>__
    ;
    puVar1 = PTR_DAT_06a0d728;
    iVar6 = unaff_w20 + 1;
    do {
      unaff_x26 = unaff_x26 + 1;
      if ((long)(int)*(uint *)(unaff_x21 + 0x18) <= (long)unaff_x26) {
        lVar4 = *(long *)(unaff_x19 + 0x70);
        if (lVar4 != 0) goto LAB_05fe9eb0;
        goto LAB_05fe9f1c;
      }
      if (*(uint *)(unaff_x21 + 0x18) <= unaff_x26) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96868();
      }
      lVar4 = *(long *)(unaff_x19 + 0x70);
      if (lVar4 == 0) goto LAB_05fe9f1c;
    } while (*(int *)(lVar4 + 0x18) <= iVar6);
    uVar7 = *(undefined8 *)(unaff_x29 + unaff_x26 * 8);
    param_1 = FUN_0400ff1c(lVar4,iVar6,*unaff_x25);
    uVar5 = thunk_FUN_02dd3144(*(undefined8 *)
                                Method_UnityEngine_InputSystem_Utilities_InlinedArray<Action<IMECompositionString>>_Remove__
                              );
    FUN_03b75afc();
    if (param_1 == 0) goto LAB_05fe9f1c;
    *(undefined8 *)(param_1 + 0x78) = uVar5;
    LeanTween__value((undefined8 *)(param_1 + 0x78),uVar5);
    uVar5 = thunk_FUN_02dd3144(*(undefined8 *)
                                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<Task>,_ChannelSession_<DisconnectAsync>d__49>__
                              );
    FUN_04cca6e0();
    *(undefined8 *)(param_1 + 0x80) = uVar5;
    LeanTween__value((undefined8 *)(param_1 + 0x80),uVar5);
    uVar5 = 0;
    if (iVar6 < unaff_w28) {
      if (*(long *)(unaff_x19 + 0x70) == 0) goto LAB_05fe9f1c;
      uVar5 = FUN_0400ff1c(*(long *)(unaff_x19 + 0x70),unaff_w20 + 2,*unaff_x25);
    }
    *(undefined8 *)(param_1 + 0x50) = uVar5;
    LeanTween__value();
    if (iVar6 < 1) {
      uVar5 = 0;
    }
    else {
      if (*(long *)(unaff_x19 + 0x70) == 0) goto LAB_05fe9f1c;
      uVar5 = FUN_0400ff1c(*(long *)(unaff_x19 + 0x70),unaff_w20,*unaff_x25);
    }
    *(undefined8 *)(param_1 + 0x48) = uVar5;
    LeanTween__value();
    *(long *)(param_1 + 0x40) = unaff_x19;
    LeanTween__value((long *)(param_1 + 0x40));
    plVar3 = *(long **)(param_1 + 0x60);
    *(int *)(param_1 + 0x88) = iVar6;
    if (plVar3 == (long *)0x0) goto LAB_05fe9f1c;
    (**(code **)(*plVar3 + 0x5e8))(plVar3,uVar7,*(undefined8 *)(*plVar3 + 0x5f0));
    unaff_w20 = iVar6;
  } while( true );
  while( true ) {
    uVar5 = FUN_0634bbcc(lVar4,0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_02df485c(*(long *)puVar1);
    }
    FUN_05f8a28c(uVar5,0);
    if (*(long *)(unaff_x19 + 0x70) == 0) break;
    FUN_0400ff70(*(long *)(unaff_x19 + 0x70),iVar6,0,*(undefined8 *)puVar2);
    lVar4 = *(long *)(unaff_x19 + 0x70);
    iVar6 = iVar6 + 1;
    if (lVar4 == 0) break;
LAB_05fe9eb0:
    if (*(int *)(lVar4 + 0x18) <= iVar6) {
      return;
    }
    lVar4 = FUN_0400ff1c(lVar4,iVar6,*unaff_x25);
    if (lVar4 == 0) break;
  }
LAB_05fe9f1c:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


