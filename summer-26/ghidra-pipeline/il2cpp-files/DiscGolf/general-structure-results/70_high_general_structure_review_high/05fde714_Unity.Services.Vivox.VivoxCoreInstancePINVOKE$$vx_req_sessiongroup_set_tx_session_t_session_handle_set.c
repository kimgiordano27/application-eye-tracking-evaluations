/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_sessiongroup_set_tx_session_t_session_handle_set
ENTRY_POINT: 05fde714
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_5;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_9
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_sessiongroup_set_tx_session_t_session_handle_set
               (ulong param_1,void *param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  char cVar9;
  bool bVar10;
  long lVar11;
  undefined4 *unaff_x19;
  long unaff_x20;
  long unaff_x22;
  long lVar12;
  ulong uVar13;
  undefined8 uVar14;
  
  if ((param_1 & 1) == 0) {
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<JoinAllocation>,_DaHandler_<JoinSessionAsync>d__12>__
                );
    FUN_02d965b8(
                Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_LengthSafe<InputControlScheme>__
                );
    FUN_02d965b8(Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_LengthSafe<uint>__);
    FUN_02d965b8(
                Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Select<string,_InternedString>__
                );
    *(undefined1 *)(unaff_x22 + 0x894) = 1;
  }
  uVar14 = DAT_010fc8f0;
  uVar3 = *unaff_x19;
  *(undefined4 *)((long)param_2 + 0x298) = uVar3;
  *(undefined4 *)((long)param_2 + 0x29c) = uVar3;
  *(undefined8 *)((long)param_2 + 0x2a0) = uVar14;
  *(undefined4 *)((long)param_2 + 0x2a8) = 0;
  memset((void *)((long)param_2 + 0xd0),0,0x1c8);
  uVar14 = *(undefined8 *)(unaff_x19 + 0x19);
  uVar4 = *(undefined1 *)((long)unaff_x19 + 0x7d);
  uVar5 = *(undefined1 *)(unaff_x19 + 2);
  *(undefined8 *)((long)param_2 + 0x2b4) = *(undefined8 *)(unaff_x19 + 0x1b);
  *(undefined8 *)((long)param_2 + 0x2ac) = uVar14;
  *(undefined1 *)((long)param_2 + 0x2c0) = uVar4;
  *(undefined1 *)((long)param_2 + 0x2c1) = uVar5;
  memset(param_2,0,200);
  cVar9 = DAT_06dc487b;
  *(undefined8 *)((long)param_2 + 200) = 0xffffffff00000000;
  if (cVar9 == '\0') {
    FUN_02d965b8(Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_SwapElements<PlayerInput>__);
    DAT_06dc487b = '\x01';
  }
  puVar7 = Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_SwapElements<PlayerInput>__;
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  iVar1 = unaff_x19[0xe];
  uVar2 = unaff_x19[0xf];
  uVar13 = (ulong)uVar2;
  lVar12 = *(long *)
            Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_SwapElements<PlayerInput>__;
  lVar11 = *(long *)(lVar12 + 0x38);
  if (lVar11 == 0) {
    FUN_02dcfd74(lVar12);
    lVar11 = *(long *)(lVar12 + 0x38);
  }
  lVar11 = FUN_036ee4c4(*(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(lVar11 + 0x10));
  puVar8 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<JoinAllocation>,_DaHandler_<JoinSessionAsync>d__12>__
  ;
  puVar6 = Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_LengthSafe<uint>__;
  if ((int)uVar2 < 0) {
    FUN_05508bc8(0);
  }
  else if (uVar2 != 0) {
    lVar11 = lVar11 + (long)iVar1 * 0x18;
    do {
      if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      FUN_03b53408((long)param_2 + 0xd0,lVar11,*(undefined8 *)puVar8);
      uVar13 = uVar13 - 1;
      lVar11 = lVar11 + 0x18;
    } while (uVar13 != 0);
  }
  if (DAT_06dc487e == '\0') {
    FUN_02d965b8(Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_SwapElements<PlayerInput>__);
    DAT_06dc487e = '\x01';
  }
  lVar12 = *(long *)puVar7;
  iVar1 = unaff_x19[0x10];
  uVar2 = unaff_x19[0x11];
  uVar13 = (ulong)uVar2;
  lVar11 = *(long *)(lVar12 + 0x38);
  if (lVar11 == 0) {
    FUN_02dcfd74(lVar12);
    lVar11 = *(long *)(lVar12 + 0x38);
  }
  lVar11 = FUN_036ee4c4(*(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(lVar11 + 0x10));
  puVar6 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<JoinAllocation>,_DaHandler_<JoinSessionAsync>d__12>__
  ;
  puVar7 = Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_LengthSafe<uint>__;
  if ((int)uVar2 < 0) {
    FUN_05508bc8(0);
  }
  else if (uVar2 != 0) {
    lVar11 = lVar11 + (long)iVar1 * 0x18;
    do {
      if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      FUN_03b53408((long)param_2 + 0xd0,lVar11,*(undefined8 *)puVar6);
      uVar13 = uVar13 - 1;
      lVar11 = lVar11 + 0x18;
    } while (uVar13 != 0);
  }
  if (((int)unaff_x19[0x18] < 1) || (*(char *)((long)param_2 + 0x2c1) != '\0')) {
    *(undefined4 *)((long)param_2 + 700) = 0xffffffff;
  }
  else {
    if (*(int *)(*(long *)Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_LengthSafe<uint>__ +
                0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    cVar9 = DAT_06dc4937;
    *(undefined4 *)((long)param_2 + 700) = *(undefined4 *)((long)param_2 + 400);
    if (cVar9 == '\0') {
      FUN_02d965b8(Method_Unity_Services_Vivox_AsyncNoResult_SetComplete__);
      DAT_06dc4937 = '\x01';
    }
    if ((*(ushort *)
          (*(long *)(*(long *)Method_Unity_Services_Vivox_AsyncNoResult_SetComplete__ + 0x20) +
          0x135) & 1) == 0) {
      FUN_02dcfd18();
    }
    FUN_03b53408((long)param_2 + 0xd0);
  }
  bVar10 = false;
  if (*(char *)((long)unaff_x19 + 0x7f) != '\0') {
    bVar10 = *(char *)((long)param_2 + 0x2c1) == '\0';
  }
  uVar14 = *(undefined8 *)(unaff_x19 + 4);
  *(bool *)((long)param_2 + 0x2c2) = bVar10;
  *(undefined8 *)((long)param_2 + 0x2c4) = uVar14;
  *(undefined4 *)((long)param_2 + 0x2cc) = unaff_x19[6];
  FUN_05fdea24();
  return;
}


