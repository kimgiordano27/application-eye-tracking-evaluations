/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$new_vx_req_sessiongroup_set_tx_session_t
ENTRY_POINT: 05fde7ac
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_5;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_6
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__new_vx_req_sessiongroup_set_tx_session_t
               (void *param_1,int param_2,size_t param_3)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  char cVar6;
  bool bVar7;
  long lVar8;
  undefined1 in_w9;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long lVar9;
  long unaff_x23;
  ulong uVar10;
  undefined8 uVar11;
  
  *(undefined1 *)(unaff_x21 + 0x2c1) = in_w9;
  memset(param_1,param_2,param_3);
  cVar6 = DAT_06dc487b;
  *(undefined8 *)(unaff_x21 + 200) = 0xffffffff00000000;
  if (cVar6 == '\0') {
    FUN_02d965b8(Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_SwapElements<PlayerInput>__);
    DAT_06dc487b = '\x01';
  }
  puVar4 = Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_SwapElements<PlayerInput>__;
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  iVar1 = *(int *)(unaff_x19 + 0x38);
  uVar2 = *(uint *)(unaff_x19 + 0x3c);
  uVar10 = (ulong)uVar2;
  lVar9 = *(long *)Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_SwapElements<PlayerInput>__
  ;
  lVar8 = *(long *)(lVar9 + 0x38);
  if (lVar8 == 0) {
    FUN_02dcfd74(lVar9);
    lVar8 = *(long *)(lVar9 + 0x38);
  }
  lVar8 = FUN_036ee4c4(*(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(lVar8 + 0x10));
  puVar5 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<JoinAllocation>,_DaHandler_<JoinSessionAsync>d__12>__
  ;
  puVar3 = Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_LengthSafe<uint>__;
  if ((int)uVar2 < 0) {
    FUN_05508bc8(0);
  }
  else if (uVar2 != 0) {
    lVar8 = lVar8 + (long)iVar1 * 0x18;
    do {
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      FUN_03b53408(unaff_x21 + 0xd0,lVar8,*(undefined8 *)puVar5);
      uVar10 = uVar10 - 1;
      lVar8 = lVar8 + 0x18;
    } while (uVar10 != 0);
  }
  if (DAT_06dc487e == '\0') {
    FUN_02d965b8(Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_SwapElements<PlayerInput>__);
    DAT_06dc487e = '\x01';
  }
  lVar9 = *(long *)puVar4;
  iVar1 = *(int *)(unaff_x19 + 0x40);
  uVar2 = *(uint *)(unaff_x19 + 0x44);
  uVar10 = (ulong)uVar2;
  lVar8 = *(long *)(lVar9 + 0x38);
  if (lVar8 == 0) {
    FUN_02dcfd74(lVar9);
    lVar8 = *(long *)(lVar9 + 0x38);
  }
  lVar8 = FUN_036ee4c4(*(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(lVar8 + 0x10));
  puVar3 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<JoinAllocation>,_DaHandler_<JoinSessionAsync>d__12>__
  ;
  puVar4 = Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_LengthSafe<uint>__;
  if ((int)uVar2 < 0) {
    FUN_05508bc8(0);
  }
  else if (uVar2 != 0) {
    lVar8 = lVar8 + (long)iVar1 * 0x18;
    do {
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      FUN_03b53408(unaff_x21 + 0xd0,lVar8,*(undefined8 *)puVar3);
      uVar10 = uVar10 - 1;
      lVar8 = lVar8 + 0x18;
    } while (uVar10 != 0);
  }
  if ((*(int *)(unaff_x19 + 0x60) < 1) || (*(char *)(unaff_x21 + 0x2c1) != '\0')) {
    *(undefined4 *)(unaff_x21 + 700) = 0xffffffff;
  }
  else {
    if (*(int *)(*(long *)Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_LengthSafe<uint>__ +
                0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    cVar6 = DAT_06dc4937;
    *(undefined4 *)(unaff_x21 + 700) = *(undefined4 *)(unaff_x21 + 400);
    if (cVar6 == '\0') {
      FUN_02d965b8(Method_Unity_Services_Vivox_AsyncNoResult_SetComplete__);
      DAT_06dc4937 = '\x01';
    }
    if ((*(ushort *)
          (*(long *)(*(long *)Method_Unity_Services_Vivox_AsyncNoResult_SetComplete__ + 0x20) +
          0x135) & 1) == 0) {
      FUN_02dcfd18();
    }
    FUN_03b53408(unaff_x21 + 0xd0);
  }
  bVar7 = false;
  if (*(char *)(unaff_x19 + 0x7f) != '\0') {
    bVar7 = *(char *)(unaff_x21 + 0x2c1) == '\0';
  }
  uVar11 = *(undefined8 *)(unaff_x19 + 0x10);
  *(bool *)(unaff_x21 + 0x2c2) = bVar7;
  *(undefined8 *)(unaff_x23 + 0x18) = uVar11;
  *(undefined4 *)(unaff_x21 + 0x2cc) = *(undefined4 *)(unaff_x19 + 0x18);
  FUN_05fdea24();
  return;
}


