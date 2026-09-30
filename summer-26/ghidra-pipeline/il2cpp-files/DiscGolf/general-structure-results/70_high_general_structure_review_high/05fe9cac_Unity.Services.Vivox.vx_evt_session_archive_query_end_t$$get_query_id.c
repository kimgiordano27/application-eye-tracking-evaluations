/*
FUNCTION_NAME: Unity.Services.Vivox.vx_evt_session_archive_query_end_t$$get_query_id
ENTRY_POINT: 05fe9cac
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_3;frame_or_lifecycle_behavior
*/


void Unity_Services_Vivox_vx_evt_session_archive_query_end_t__get_query_id(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  long unaff_x19;
  int iVar10;
  long *unaff_x20;
  long unaff_x21;
  undefined8 uVar11;
  ulong uVar12;
  
  LeanTween__value();
  if ((*unaff_x20 != 0) && (plVar5 = *(long **)(unaff_x21 + -0x20), plVar5 != (long *)0x0)) {
    (**(code **)(*plVar5 + 0x5e8))
              (plVar5,*(undefined8 *)(*unaff_x20 + 0x28),*(undefined8 *)(*plVar5 + 0x5f0));
    if ((*unaff_x20 != 0) && ((lVar6 = FUN_05f4712c(*unaff_x20,0), lVar6 != 0 && (*unaff_x20 != 0)))
       ) {
      iVar1 = *(int *)(lVar6 + 0x18);
      lVar6 = FUN_05f4712c(*unaff_x20,0);
      puVar3 = 
      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<TokenResponse>,_WrappedMatchmakerService_<DeleteBackfillTicketAsync>d__13>__
      ;
      if (lVar6 != 0) {
        if ((int)*(ulong *)(lVar6 + 0x18) < 1) {
          iVar10 = 0;
        }
        else {
          iVar10 = 0;
          uVar12 = 0;
          uVar9 = *(ulong *)(lVar6 + 0x18) & 0xffffffff;
          do {
            if (uVar9 <= uVar12) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96868();
            }
            lVar7 = *(long *)(unaff_x19 + 0x70);
            if (lVar7 == 0) goto LAB_05fe9f1c;
            if (iVar10 < *(int *)(lVar7 + 0x18)) {
              uVar11 = *(undefined8 *)(lVar6 + 0x20 + uVar12 * 8);
              lVar7 = FUN_0400ff1c(lVar7,iVar10,*(undefined8 *)puVar3);
              uVar8 = thunk_FUN_02dd3144(*(undefined8 *)
                                          Method_UnityEngine_InputSystem_Utilities_InlinedArray<Action<IMECompositionString>>_Remove__
                                        );
              FUN_03b75afc();
              if (lVar7 == 0) goto LAB_05fe9f1c;
              *(undefined8 *)(lVar7 + 0x78) = uVar8;
              LeanTween__value((undefined8 *)(lVar7 + 0x78),uVar8);
              uVar8 = thunk_FUN_02dd3144(*(undefined8 *)
                                          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<Task>,_ChannelSession_<DisconnectAsync>d__49>__
                                        );
              FUN_04cca6e0();
              *(undefined8 *)(lVar7 + 0x80) = uVar8;
              LeanTween__value((undefined8 *)(lVar7 + 0x80),uVar8);
              uVar8 = 0;
              if (iVar10 < iVar1 + -1) {
                if (*(long *)(unaff_x19 + 0x70) == 0) goto LAB_05fe9f1c;
                uVar8 = FUN_0400ff1c(*(long *)(unaff_x19 + 0x70),iVar10 + 1,*(undefined8 *)puVar3);
              }
              *(undefined8 *)(lVar7 + 0x50) = uVar8;
              LeanTween__value();
              if (iVar10 < 1) {
                uVar8 = 0;
              }
              else {
                if (*(long *)(unaff_x19 + 0x70) == 0) goto LAB_05fe9f1c;
                uVar8 = FUN_0400ff1c(*(long *)(unaff_x19 + 0x70),iVar10 + -1,*(undefined8 *)puVar3);
              }
              *(undefined8 *)(lVar7 + 0x48) = uVar8;
              LeanTween__value();
              *(long *)(lVar7 + 0x40) = unaff_x19;
              LeanTween__value((long *)(lVar7 + 0x40));
              plVar5 = *(long **)(lVar7 + 0x60);
              *(int *)(lVar7 + 0x88) = iVar10;
              if (plVar5 == (long *)0x0) goto LAB_05fe9f1c;
              (**(code **)(*plVar5 + 0x5e8))(plVar5,uVar11,*(undefined8 *)(*plVar5 + 0x5f0));
              FUN_05fe26bc(lVar7);
              iVar10 = iVar10 + 1;
            }
            uVar9 = (ulong)*(uint *)(lVar6 + 0x18);
            uVar12 = uVar12 + 1;
          } while ((long)uVar12 < (long)(int)*(uint *)(lVar6 + 0x18));
        }
        puVar4 = 
        Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<TokenResponse>,_WrappedMatchmakerService_<UpdateBackfillTicketAsync>d__14>__
        ;
        puVar2 = PTR_DAT_06a0d728;
        lVar6 = *(long *)(unaff_x19 + 0x70);
        while (lVar6 != 0) {
          if (*(int *)(lVar6 + 0x18) <= iVar10) {
            return;
          }
          lVar6 = FUN_0400ff1c(lVar6,iVar10,*(undefined8 *)puVar3);
          if (lVar6 == 0) break;
          uVar8 = FUN_0634bbcc(lVar6,0);
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_02df485c(*(long *)puVar2);
          }
          FUN_05f8a28c(uVar8,0);
          if (*(long *)(unaff_x19 + 0x70) == 0) break;
          FUN_0400ff70(*(long *)(unaff_x19 + 0x70),iVar10,0,*(undefined8 *)puVar4);
          iVar10 = iVar10 + 1;
          lVar6 = *(long *)(unaff_x19 + 0x70);
        }
      }
    }
  }
LAB_05fe9f1c:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


