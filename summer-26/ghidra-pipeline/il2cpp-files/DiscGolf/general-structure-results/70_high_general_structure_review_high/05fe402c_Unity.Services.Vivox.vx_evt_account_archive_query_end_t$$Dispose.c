/*
FUNCTION_NAME: Unity.Services.Vivox.vx_evt_account_archive_query_end_t$$Dispose
ENTRY_POINT: 05fe402c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_15;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x05fe43c4) */
/* WARNING: Removing unreachable block (ram,0x05fe42a8) */
/* WARNING: Removing unreachable block (ram,0x05fe43d0) */
/* WARNING: Removing unreachable block (ram,0x05fe42b0) */
/* WARNING: Removing unreachable block (ram,0x05fe43d4) */
/* WARNING: Removing unreachable block (ram,0x05fe42c8) */
/* WARNING: Removing unreachable block (ram,0x05fe42dc) */

void Unity_Services_Vivox_vx_evt_account_archive_query_end_t__Dispose
               (long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined1 in_ZR;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  ulong in_x9;
  long lVar9;
  int *in_x10;
  int *piVar10;
  long unaff_x19;
  long *unaff_x21;
  undefined8 uVar11;
  long lVar12;
  undefined8 *unaff_x24;
  undefined8 uVar13;
  long *unaff_x25;
  undefined8 *unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  undefined8 *unaff_x29;
  long *in_stack_00000048;
  
  do {
    if ((bool)in_ZR) {
      puVar3 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
      goto LAB_05fe4058;
    }
    in_x9 = in_x9 - 1;
    in_x10 = in_x10 + 4;
    if (in_x9 == 0) {
      do {
        puVar3 = (undefined8 *)FUN_02dd004c(unaff_x21,param_3,0);
LAB_05fe4058:
        lVar4 = (*(code *)*puVar3)(unaff_x21,puVar3[1]);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        uVar5 = FUN_05f480b8(lVar4,0);
        if ((uVar5 & 1) == 0) {
          lVar6 = *unaff_x25;
          uVar11 = *(undefined8 *)(lVar4 + 0x28);
          if (*(int *)(lVar6 + 0xe4) == 0) {
            thunk_FUN_02df485c();
            lVar6 = *unaff_x25;
          }
          puVar3 = *(undefined8 **)(lVar6 + 0xb8);
          lVar12 = puVar3[1];
          if (lVar12 == 0) {
            if (*(int *)(lVar6 + 0xe4) == 0) {
              thunk_FUN_02df485c();
              puVar3 = *(undefined8 **)(*unaff_x25 + 0xb8);
            }
            uVar13 = *puVar3;
            lVar12 = thunk_FUN_02dd3144(*unaff_x26);
            FUN_03b7820c(lVar12,uVar13,*unaff_x29,0);
            plVar7 = (long *)(*(long *)(*unaff_x25 + 0xb8) + 8);
            *plVar7 = lVar12;
            LeanTween__value(plVar7,lVar12);
            unaff_x24 = (undefined8 *)
                        Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_LobbyChannel_<UnsubscribeAsync>d__13>__
            ;
          }
          iVar2 = FUN_0360265c(uVar11,lVar12,*unaff_x24);
          if (iVar2 != 0) {
            uVar13 = *(undefined8 *)(unaff_x19 + 0x30);
            uVar11 = FUN_0634bb04();
            if (*(int *)(*(long *)PTR_DAT_069fb990 + 0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            lVar6 = FUN_0376b3f0(uVar13,uVar11,0,
                                 *(undefined8 *)
                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_LoginSession_<DeleteChannelSessionAsync>d__119>__
                                );
            if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            lVar6 = FUN_0634bbcc(lVar6,0);
            if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            thunk_FUN_063544b0(lVar6,*(undefined8 *)(lVar4 + 0x18),0);
            lVar12 = FUN_0364c2b0(lVar6,*(undefined8 *)PTR_DAT_069fc490);
            if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            FUN_0635cb54(lVar12,0);
            FUN_0635d604(lVar12,1,0);
            lVar12 = FUN_0364c2b0(lVar6,*(undefined8 *)
                                         Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_LobbyHandler_<ReconnectToLobbyAsync>d__87>__
                                 );
            if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            FUN_05fe4534(lVar12,lVar4);
            *(long *)(lVar12 + 0x38) = unaff_x19;
            LeanTween__value();
            lVar4 = *(long *)(unaff_x19 + 0x40);
            if (lVar4 == 0) {
LAB_05fe43a4:
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            lVar8 = *(long *)(lVar4 + 0x10);
            lVar9 = *(long *)
                     Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_LobbyHandler_<SendHeartbeatAsync>d__105>__
            ;
            *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
            if (lVar8 == 0) goto LAB_05fe43a4;
            uVar1 = *(uint *)(lVar4 + 0x18);
            if (uVar1 < *(uint *)(lVar8 + 0x18)) {
              *(uint *)(lVar4 + 0x18) = uVar1 + 1;
              plVar7 = (long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
              *plVar7 = lVar12;
              LeanTween__value(plVar7,lVar12);
            }
            else {
              FUN_040101ec(lVar4,lVar12,
                           *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
            }
            lVar4 = FUN_0364c2b0(lVar6,*(undefined8 *)
                                        Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_LobbyHandler_<LobbyUnsubscribeCallbacksAsync>d__65>__
                                );
            if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            FUN_05fe457c();
            uVar5 = FUN_0634eb94(0,0,0);
            if ((uVar5 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
          }
        }
        if (in_stack_00000048 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        lVar4 = *in_stack_00000048;
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar5 != 0) {
          piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *unaff_x27) {
              puVar3 = (undefined8 *)(lVar4 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_05fe3ff4;
            }
            uVar5 = uVar5 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar5 != 0);
        }
        puVar3 = (undefined8 *)FUN_02dd004c(in_stack_00000048,*unaff_x27,0);
LAB_05fe3ff4:
        uVar5 = (*(code *)*puVar3)(in_stack_00000048,puVar3[1]);
        if ((uVar5 & 1) == 0) {
          if (in_stack_00000048 == (long *)0x0) goto LAB_05fe4354;
          lVar4 = *in_stack_00000048;
          uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar5 == 0) goto LAB_05fe432c;
          piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          goto LAB_05fe4314;
        }
        if (in_stack_00000048 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        param_1 = *in_stack_00000048;
        param_3 = *unaff_x28;
        in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
        unaff_x21 = in_stack_00000048;
      } while (in_x9 == 0);
      in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    }
    in_ZR = *(long *)(in_x10 + -2) == param_3;
  } while( true );
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar10 = piVar10 + 4;
    if (uVar5 == 0) break;
LAB_05fe4314:
    if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_069fbff0) {
      puVar3 = (undefined8 *)(lVar4 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_05fe4348;
    }
  }
LAB_05fe432c:
  puVar3 = (undefined8 *)FUN_02dd004c(in_stack_00000048,*(long *)PTR_DAT_069fbff0,0);
LAB_05fe4348:
  (*(code *)*puVar3)(in_stack_00000048,puVar3[1]);
LAB_05fe4354:
  FUN_05fe49f0();
  return;
}


