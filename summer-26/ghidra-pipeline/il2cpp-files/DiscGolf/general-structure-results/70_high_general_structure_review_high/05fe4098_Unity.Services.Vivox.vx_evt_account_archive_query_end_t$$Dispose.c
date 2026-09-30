/*
FUNCTION_NAME: Unity.Services.Vivox.vx_evt_account_archive_query_end_t$$Dispose
ENTRY_POINT: 05fe4098
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
               (undefined8 *param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  int *piVar10;
  long unaff_x19;
  long unaff_x21;
  undefined8 unaff_x22;
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
    lVar12 = param_1[1];
    if (lVar12 == 0) {
      if (*(int *)(param_2 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        param_1 = *(undefined8 **)(*unaff_x25 + 0xb8);
      }
      uVar13 = *param_1;
      lVar12 = thunk_FUN_02dd3144(*unaff_x26);
      FUN_03b7820c(lVar12,uVar13,*unaff_x29,0);
      plVar4 = (long *)(*(long *)(*unaff_x25 + 0xb8) + 8);
      *plVar4 = lVar12;
      LeanTween__value(plVar4,lVar12);
      unaff_x24 = (undefined8 *)
                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_LobbyChannel_<UnsubscribeAsync>d__13>__
      ;
    }
    iVar2 = FUN_0360265c(unaff_x22,lVar12,*unaff_x24);
    if (iVar2 != 0) {
      uVar11 = *(undefined8 *)(unaff_x19 + 0x30);
      uVar13 = FUN_0634bb04();
      if (*(int *)(*(long *)PTR_DAT_069fb990 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      lVar12 = FUN_0376b3f0(uVar11,uVar13,0,
                            *(undefined8 *)
                             Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_LoginSession_<DeleteChannelSessionAsync>d__119>__
                           );
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar12 = FUN_0634bbcc(lVar12,0);
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      thunk_FUN_063544b0(lVar12,*(undefined8 *)(unaff_x21 + 0x18),0);
      lVar5 = FUN_0364c2b0(lVar12,*(undefined8 *)PTR_DAT_069fc490);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      FUN_0635cb54(lVar5,0);
      FUN_0635d604(lVar5,1,0);
      lVar5 = FUN_0364c2b0(lVar12,*(undefined8 *)
                                   Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_LobbyHandler_<ReconnectToLobbyAsync>d__87>__
                          );
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      FUN_05fe4534(lVar5,unaff_x21);
      *(long *)(lVar5 + 0x38) = unaff_x19;
      LeanTween__value();
      lVar6 = *(long *)(unaff_x19 + 0x40);
      if (lVar6 == 0) {
LAB_05fe43a4:
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar8 = *(long *)(lVar6 + 0x10);
      lVar9 = *(long *)
               Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_LobbyHandler_<SendHeartbeatAsync>d__105>__
      ;
      *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
      if (lVar8 == 0) goto LAB_05fe43a4;
      uVar1 = *(uint *)(lVar6 + 0x18);
      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
        *(uint *)(lVar6 + 0x18) = uVar1 + 1;
        plVar4 = (long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
        *plVar4 = lVar5;
        LeanTween__value(plVar4,lVar5);
      }
      else {
        FUN_040101ec(lVar6,lVar5,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
      }
      lVar12 = FUN_0364c2b0(lVar12,*(undefined8 *)
                                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_LobbyHandler_<LobbyUnsubscribeCallbacksAsync>d__65>__
                           );
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      FUN_05fe457c();
      uVar7 = FUN_0634eb94(0,0,0);
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
    }
    do {
      if (in_stack_00000048 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar12 = *in_stack_00000048;
      uVar7 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar7 != 0) {
        piVar10 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *unaff_x27) {
            puVar3 = (undefined8 *)(lVar12 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_05fe3ff4;
          }
          uVar7 = uVar7 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined8 *)FUN_02dd004c(in_stack_00000048,*unaff_x27,0);
LAB_05fe3ff4:
      uVar7 = (*(code *)*puVar3)(in_stack_00000048,puVar3[1]);
      if ((uVar7 & 1) == 0) {
        if (in_stack_00000048 == (long *)0x0) goto LAB_05fe4354;
        lVar12 = *in_stack_00000048;
        uVar7 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar7 == 0) goto LAB_05fe432c;
        piVar10 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        goto LAB_05fe4314;
      }
      if (in_stack_00000048 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar12 = *in_stack_00000048;
      uVar7 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar7 != 0) {
        piVar10 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *unaff_x28) {
            puVar3 = (undefined8 *)(lVar12 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_05fe4058;
          }
          uVar7 = uVar7 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined8 *)FUN_02dd004c(in_stack_00000048,*unaff_x28,0);
LAB_05fe4058:
      unaff_x21 = (*(code *)*puVar3)(in_stack_00000048,puVar3[1]);
      if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      uVar7 = FUN_05f480b8(unaff_x21,0);
    } while ((uVar7 & 1) != 0);
    param_2 = *unaff_x25;
    unaff_x22 = *(undefined8 *)(unaff_x21 + 0x28);
    if (*(int *)(param_2 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      param_2 = *unaff_x25;
    }
    param_1 = *(undefined8 **)(param_2 + 0xb8);
  } while( true );
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar10 = piVar10 + 4;
    if (uVar7 == 0) break;
LAB_05fe4314:
    if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_069fbff0) {
      puVar3 = (undefined8 *)(lVar12 + (long)*piVar10 * 0x10 + 0x138);
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


