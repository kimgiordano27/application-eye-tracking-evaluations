/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE.SWIGExceptionHelper$$SetPendingArgumentNullException
ENTRY_POINT: 05fe2400
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_14;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE_SWIGExceptionHelper__SetPendingArgumentNullException
               (void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long unaff_x19;
  int iVar9;
  long *unaff_x20;
  long lVar10;
  long lVar11;
  ulong uVar12;
  
  LeanTween__value();
  uVar4 = FUN_035ab08c();
  *(undefined8 *)(unaff_x19 + 0x80) = uVar4;
  LeanTween__value((undefined8 *)(unaff_x19 + 0x80),uVar4);
  if ((*unaff_x20 != 0) && (plVar5 = *(long **)(unaff_x19 + 0x60), plVar5 != (long *)0x0)) {
    (**(code **)(*plVar5 + 0x5e8))
              (plVar5,*(undefined8 *)(*unaff_x20 + 0x28),*(undefined8 *)(*plVar5 + 0x5f0));
    puVar2 = 
    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<TokenResponse>,_WrappedMatchmakerService_<DeleteBackfillTicketAsync>d__13>__
    ;
    puVar1 = 
    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<Task>,_ChannelSession_<DisconnectAsync>d__49>__
    ;
    if ((*unaff_x20 != 0) && (lVar11 = *(long *)(*unaff_x20 + 0x60), lVar11 != 0)) {
      if ((int)*(ulong *)(lVar11 + 0x18) < 1) {
        iVar9 = 0;
      }
      else {
        iVar9 = 0;
        uVar12 = 0;
        uVar7 = *(ulong *)(lVar11 + 0x18) & 0xffffffff;
        do {
          if (uVar7 <= uVar12) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96868();
          }
          lVar6 = *(long *)(unaff_x19 + 0x70);
          if (lVar6 == 0) goto LAB_05fe2698;
          if (iVar9 < *(int *)(lVar6 + 0x18)) {
            lVar10 = *(long *)(lVar11 + 0x20 + uVar12 * 8);
            lVar6 = FUN_0400ff1c(lVar6,iVar9,*(undefined8 *)puVar2);
            uVar4 = thunk_FUN_02dd3144(*(undefined8 *)
                                        Method_UnityEngine_InputSystem_Utilities_InlinedArray<Action<IMECompositionString>>_Remove__
                                      );
            FUN_03b75afc();
            if (lVar6 == 0) goto LAB_05fe2698;
            *(undefined8 *)(lVar6 + 0x78) = uVar4;
            LeanTween__value((undefined8 *)(lVar6 + 0x78),uVar4);
            uVar4 = thunk_FUN_02dd3144(*(undefined8 *)puVar1);
            FUN_04cca6e0();
            *(undefined8 *)(lVar6 + 0x80) = uVar4;
            LeanTween__value((undefined8 *)(lVar6 + 0x80),uVar4);
            if ((*(long *)(unaff_x19 + 0x78) == 0) ||
               (lVar8 = *(long *)(*(long *)(unaff_x19 + 0x78) + 0x60), lVar8 == 0))
            goto LAB_05fe2698;
            if (iVar9 < *(int *)(lVar8 + 0x18) + -1) {
              if (*(long *)(unaff_x19 + 0x70) == 0) goto LAB_05fe2698;
              uVar4 = FUN_0400ff1c(*(long *)(unaff_x19 + 0x70),iVar9 + 1,*(undefined8 *)puVar2);
            }
            else {
              uVar4 = 0;
            }
            *(undefined8 *)(lVar6 + 0x50) = uVar4;
            LeanTween__value();
            if (iVar9 < 1) {
              uVar4 = 0;
            }
            else {
              if (*(long *)(unaff_x19 + 0x70) == 0) goto LAB_05fe2698;
              uVar4 = FUN_0400ff1c(*(long *)(unaff_x19 + 0x70),iVar9 + -1,*(undefined8 *)puVar2);
            }
            *(undefined8 *)(lVar6 + 0x48) = uVar4;
            LeanTween__value();
            *(long *)(lVar6 + 0x40) = unaff_x19;
            LeanTween__value((long *)(lVar6 + 0x40));
            *(int *)(lVar6 + 0x88) = iVar9;
            if (lVar10 == 0) goto LAB_05fe2698;
            plVar5 = *(long **)(lVar6 + 0x60);
            uVar4 = FUN_0639f310(lVar10,0);
            if (plVar5 == (long *)0x0) goto LAB_05fe2698;
            (**(code **)(*plVar5 + 0x5e8))(plVar5,uVar4,*(undefined8 *)(*plVar5 + 0x5f0));
            FUN_05fe26bc(lVar6);
            iVar9 = iVar9 + 1;
          }
          uVar7 = (ulong)*(uint *)(lVar11 + 0x18);
          uVar12 = uVar12 + 1;
        } while ((long)uVar12 < (long)(int)*(uint *)(lVar11 + 0x18));
      }
      puVar3 = 
      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<TokenResponse>,_WrappedMatchmakerService_<UpdateBackfillTicketAsync>d__14>__
      ;
      puVar1 = PTR_DAT_06a0d728;
      lVar11 = *(long *)(unaff_x19 + 0x70);
      while (lVar11 != 0) {
        if (*(int *)(lVar11 + 0x18) <= iVar9) {
          return;
        }
        lVar11 = FUN_0400ff1c(lVar11,iVar9,*(undefined8 *)puVar2);
        if (lVar11 == 0) break;
        uVar4 = FUN_0634bbcc(lVar11,0);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_02df485c(*(long *)puVar1);
        }
        FUN_05f8a28c(uVar4,0);
        if (*(long *)(unaff_x19 + 0x70) == 0) break;
        FUN_0400ff70(*(long *)(unaff_x19 + 0x70),iVar9,0,*(undefined8 *)puVar3);
        iVar9 = iVar9 + 1;
        lVar11 = *(long *)(unaff_x19 + 0x70);
      }
    }
  }
LAB_05fe2698:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


