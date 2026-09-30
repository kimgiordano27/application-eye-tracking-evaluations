/*
FUNCTION_NAME: FUN_05f710ac
ENTRY_POINT: 05f710ac
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_8;telemetry_or_network_hits_3
*/


uint FUN_05f710ac(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined8 local_b8;
  undefined8 *puStack_b0;
  undefined8 local_a8;
  long lStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  long lStack_78;
  undefined8 local_70;
  
  puVar2 = Method_System_Runtime_CompilerServices_TaskAwaiter<HttpClientResponse>_GetResult__;
  if ((DAT_06dc445c & 1) == 0) {
    FUN_02d965b8(PTR_DAT_069fb930);
    FUN_02d965b8(Method_System_Tuple<string,_string>_get_Item1__);
    FUN_02d965b8(Method_System_Tuple<Vector3,_float>__ctor__);
    FUN_02d965b8(Method_System_Tuple<Vector3,_float>_get_Item2__);
    FUN_02d965b8(Method_System_Tuple<Vector3,_Vector3>_get_Item2__);
    FUN_02d965b8(Method_System_Tuple<bool,_bool,_bool,_bool>__ctor__);
    FUN_02d965b8(
                Method_System_Tuple<OVRGLTFAnimatinonNode_ThumbstickDirection,_OVRGLTFAnimatinonNode_ThumbstickDirection>_get_Item2__
                );
    FUN_02d965b8(Method_System_Runtime_CompilerServices_TaskAwaiter<HttpClientResponse>_GetResult__)
    ;
    FUN_02d965b8(
                Method_System_Tuple<Socket_AwaitableSocketAsyncEventArgs,_Action<object>,_object>_get_Item1__
                );
    FUN_02d965b8(
                Method_System_Tuple<Socket_AwaitableSocketAsyncEventArgs,_Action<object>,_object>_get_Item3__
                );
    FUN_02d965b8(PTR_DAT_069fb9d8);
    FUN_02d965b8(Method_System_Tuple<bool,_bool,_bool,_bool>_get_Item1__);
    FUN_02d965b8(Method_UnityEngine_TextCore_Text_TextProcessingStack<int>_Pop__);
    FUN_02d965b8(Method_System_Tuple<bool,_bool,_bool,_bool>_get_Item2__);
    FUN_02d965b8(Method_UnityEngine_TextCore_Text_TextProcessingStack<int>_Push__);
    FUN_02d965b8(Method_UnityEngine_TextCore_Text_TextProcessingStack<int>_Remove__);
    DAT_06dc445c = 1;
  }
  local_70 = 0;
  uStack_88 = 0;
  local_90 = 0;
  lStack_78 = 0;
  local_80 = 0;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  if (DAT_06dc43e7 == '\0') {
    FUN_02d965b8(Method_System_Runtime_CompilerServices_TaskAwaiter<HttpClientResponse>_GetResult__)
    ;
    DAT_06dc43e7 = '\x01';
  }
  lVar5 = *(long *)puVar2;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02df485c();
    lVar5 = *(long *)puVar2;
  }
  puVar4 = 
  Method_System_Tuple<Socket_AwaitableSocketAsyncEventArgs,_Action<object>,_object>_get_Item3__;
  lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
  if ((lVar5 == 0) || (*(long *)(param_1 + 0x98) == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  iVar1 = *(int *)(lVar5 + 0x16c);
  FUN_04e93a24(&local_b8,*(long *)(param_1 + 0x98),
               *(undefined8 *)Method_System_Tuple<string,_string>_get_Item1__);
  local_70 = local_98;
  uStack_88 = puStack_b0;
  local_90 = local_b8;
  lStack_78 = lStack_a0;
  local_80 = local_a8;
  local_b8 = 0;
  puStack_b0 = &local_90;
  do {
    uVar6 = FUN_05232904(&local_90,*(undefined8 *)Method_System_Tuple<Vector3,_float>_get_Item2__);
    lVar5 = lStack_78;
    uVar9 = local_80;
    if ((uVar6 & 1) == 0) {
LAB_05f71534:
      FUN_05232a24(&local_90,*(undefined8 *)Method_System_Tuple<Vector3,_float>__ctor__);
      return ((uint)uVar6 ^ 1) & 1;
    }
    FUN_05f70bf0(uVar6,param_2,lStack_78,*(undefined8 *)(param_1 + 0x1a0));
    puVar3 = 
    Method_System_Tuple<Socket_AwaitableSocketAsyncEventArgs,_Action<object>,_object>_get_Item1__;
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    if (DAT_06dc43e7 == '\0') {
      FUN_02d965b8(puVar2);
      DAT_06dc43e7 = '\x01';
    }
    lVar7 = *(long *)puVar2;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      lVar7 = *(long *)puVar2;
    }
    if (*(long *)(*(long *)(lVar7 + 0xb8) + 8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    if (*(char *)(lVar5 + 0x30) == '\0') {
      lVar5 = FUN_02d966a4(*(undefined8 *)PTR_DAT_069fb9d8,5);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      if (*(int *)(lVar5 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96868();
      }
      *(undefined8 *)(lVar5 + 0x20) =
           *(undefined8 *)Method_UnityEngine_TextCore_Text_TextProcessingStack<int>_Push__;
      LeanTween__value();
      if ((*(uint *)(lVar5 + 0x18) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96868();
      }
      *(undefined8 *)(lVar5 + 0x28) = uVar9;
      LeanTween__value((undefined8 *)(lVar5 + 0x28),uVar9);
      if (*(uint *)(lVar5 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96868();
      }
      *(undefined8 *)(lVar5 + 0x30) =
           *(undefined8 *)Method_UnityEngine_TextCore_Text_TextProcessingStack<int>_Pop__;
      LeanTween__value();
      if ((*(uint *)(lVar5 + 0x18) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96868();
      }
      *(undefined8 *)(lVar5 + 0x38) = *(undefined8 *)(param_1 + 0x158);
      LeanTween__value();
      if (*(uint *)(lVar5 + 0x18) < 5) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96868();
      }
      *(undefined8 *)(lVar5 + 0x40) =
           *(undefined8 *)Method_UnityEngine_TextCore_Text_TextProcessingStack<int>_Remove__;
      LeanTween__value();
      uVar9 = FUN_0536dde4(lVar5,0);
      if (*(int *)(*(long *)PTR_DAT_069fb930 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      FUN_0630bbe4(uVar9,0);
      goto LAB_05f71534;
    }
    auVar10 = FUN_037b4f0c(param_1,*(undefined8 *)(lVar5 + 0x18),*(undefined8 *)(param_1 + 0x1a0),
                           *(undefined8 *)puVar3);
    if (iVar1 == 2) {
      auVar11 = FUN_037b4f0c(param_1,*(undefined8 *)(lVar5 + 0x20),*(undefined8 *)(param_1 + 0x1a0),
                             *(undefined8 *)puVar3);
    }
    else {
      auVar11 = ZEXT816(0);
    }
    if (*(char *)(param_1 + 0xec) == '\0') {
      auVar12 = ZEXT816(0);
    }
    else {
      auVar12 = FUN_037b4f0c(param_1,*(undefined8 *)(lVar5 + 0x28),*(undefined8 *)(param_1 + 0x1a0),
                             *(undefined8 *)puVar3);
    }
    uVar8 = FUN_05f720f0(param_1,auVar10._0_8_,auVar10._8_8_,auVar11._0_8_,auVar11._8_8_,
                         auVar12._0_8_,auVar12._8_8_,uVar9,*(undefined8 *)(param_1 + 0x1a0));
    if ((uVar8 & 1) == 0) {
      uVar9 = FUN_0536d554(*(undefined8 *)Method_System_Tuple<bool,_bool,_bool,_bool>_get_Item2__,
                           uVar9,*(undefined8 *)
                                  Method_System_Tuple<bool,_bool,_bool,_bool>_get_Item1__,0);
      if (*(int *)(*(long *)PTR_DAT_069fb930 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      FUN_0630bbe4(uVar9,0);
      goto LAB_05f71534;
    }
    FUN_037b5df8(param_1,auVar10._0_8_,auVar10._8_8_,*(undefined8 *)puVar4);
    if (iVar1 == 2) {
      FUN_037b5df8(param_1,auVar11._0_8_,auVar11._8_8_,*(undefined8 *)puVar4);
    }
    if (*(char *)(param_1 + 0xec) != '\0') {
      FUN_037b5df8(param_1,auVar12._0_8_,auVar12._8_8_,*(undefined8 *)puVar4);
    }
  } while( true );
}


