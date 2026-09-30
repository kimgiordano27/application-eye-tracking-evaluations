/*
FUNCTION_NAME: FUN_059b0914
ENTRY_POINT: 059b0914
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_6;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x059b0c80) */

void FUN_059b0914(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  ulong uVar6;
  int *piVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long local_50;
  long *local_48;
  
  puVar1 = Method_System_Array_Resize<SecondarySpriteTexture>__;
  if ((DAT_066d3a2e & 1) == 0) {
    FUN_02b3c81c(
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<MRUK_LoadDeviceResult>,_ImmersiveSceneDebugger_<>c_<<GetLaunchSpaceSetupDebugger>b__80_0>d>__
                );
    FUN_02b3c81c(Method_System_Array_Resize<SecondarySpriteTexture>__);
    FUN_02b3c81c(Method_Unity_Collections_NativeArray<Plane>_GetSubArray__);
    FUN_02b3c81c(PTR_DAT_06312f78);
    FUN_02b3c81c(
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_FriendsMatchmaking_<OnJoinIntentReceived>d__31>__
                );
    FUN_02b3c81c(
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_FriendsMatchmaking_<OnRoomOperationResult>d__24>__
                );
    FUN_02b3c81c(
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_LocalMatchmaking_<HostOrJoinSessionAutomatically>d__16>__
                );
    FUN_02b3c81c(
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_MetaXRAcousticGeometry_<LoadGeometryFromMemory>d__92>__
                );
    FUN_02b3c81c(
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_MetaXRAcousticMap_<LoadMapFromMemory>d__35>__
                );
    DAT_066d3a2e = 1;
  }
  lVar3 = *(long *)puVar1;
  local_50 = 0;
  local_48 = (long *)0x0;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
    lVar3 = *(long *)puVar1;
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x20);
  if ((lVar3 == 0) || (param_2 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
                    /* try { // try from 059b09ec to 05ab09f3 has its CatchHandler @ 059b0aa4 */
                    /* try { // try from 059b0a08 to 05ab0a0b has its CatchHandler @ 059b0aa0 */
                    /* try { // try from 059b0a0c to 05ab0abf has its CatchHandler @ 059b084c */
  local_48 = (long *)FUN_032fab48(param_2,*(undefined8 *)(lVar3 + 0x20),&local_50,lVar3,
                                  *(undefined8 *)
                                   Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_MetaXRAcousticMap_<LoadMapFromMemory>d__35>__
                                  ,0x1c0,*(undefined8 *)
                                          Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_FriendsMatchmaking_<OnRoomOperationResult>d__24>__
                                 );
  if (local_50 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  *(undefined8 *)(local_50 + 0x10) = param_3;
  thunk_FUN_02bb0e9c((undefined8 *)(local_50 + 0x10),param_3);
  if (local_50 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  *(undefined8 *)(local_50 + 0x18) = param_4;
  thunk_FUN_02bb0e9c((undefined8 *)(local_50 + 0x18),param_4);
  if (local_50 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  *(undefined8 *)(local_50 + 0x20) = param_5;
  thunk_FUN_02bb0e9c((undefined8 *)(local_50 + 0x20),param_5);
  if (local_50 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  *(undefined8 *)(local_50 + 0x28) = param_1;
  thunk_FUN_02bb0e9c((undefined8 *)(local_50 + 0x28),param_1);
  plVar2 = local_48;
  if (local_48 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  lVar3 = *local_48;
  uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 059b0a08 with catch @ 059b0aa0
                        */
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 059b09ec with catch @ 059b0aa4
                        */
      if (*(long *)(piVar7 + -2) ==
          *(long *)Method_Unity_Collections_NativeArray<Plane>_GetSubArray__) {
        puVar4 = (undefined8 *)(lVar3 + (long)(*piVar7 + 0xb) * 0x10 + 0x138);
        goto LAB_059b0ad8;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
                    /* try { // try from 059b0ac0 to 05ab0ac3 has its CatchHandler @ 059b0ae4 */
  puVar4 = (undefined8 *)
           FUN_02b7654c(local_48,*(long *)Method_Unity_Collections_NativeArray<Plane>_GetSubArray__,
                        0xb);
                    /* try { // try from 059b0ac4 to 05ab0ae7 has its CatchHandler @ 059b084c */
LAB_059b0ad8:
                    /* catch() { ... } // from try @ 059b0ac0 with catch @ 059b0ae4 */
  (*(code *)*puVar4)(plVar2,0,puVar4[1]);
  plVar2 = local_48;
  puVar1 = 
  Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_MetaXRAcousticGeometry_<LoadGeometryFromMemory>d__92>__
  ;
                    /* try { // try from 059b0ae8 to 05ab0aef has its CatchHandler @ 059b0af8 */
                    /* try { // try from 059b0af0 to 05ab0afb has its CatchHandler @ 059b084c */
  lVar3 = *(long *)
           Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_MetaXRAcousticGeometry_<LoadGeometryFromMemory>d__92>__
  ;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 059b0ae8 with catch @ 059b0af8
                        */
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
    lVar3 = *(long *)puVar1;
  }
  puVar4 = *(undefined8 **)(lVar3 + 0xb8);
  lVar8 = puVar4[1];
  if (lVar8 == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      puVar4 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
    }
    uVar9 = *puVar4;
    lVar8 = thunk_FUN_02b79644(*(undefined8 *)
                                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<MRUK_LoadDeviceResult>,_ImmersiveSceneDebugger_<>c_<<GetLaunchSpaceSetupDebugger>b__80_0>d>__
                              );
    FUN_03e026bc(lVar8,uVar9,
                 *(undefined8 *)
                  Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_LocalMatchmaking_<HostOrJoinSessionAutomatically>d__16>__
                 ,0);
    plVar5 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
    *plVar5 = lVar8;
    thunk_FUN_02bb0e9c(plVar5,lVar8);
  }
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  lVar3 = *plVar2;
  lVar10 = *(long *)
            Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_FriendsMatchmaking_<OnJoinIntentReceived>d__31>__
  ;
  uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *(long *)(lVar10 + 0x20)) {
        lVar3 = lVar3 + (long)(int)(*piVar7 + (uint)*(ushort *)(lVar10 + 0x50)) * 0x10 + 0x138;
        goto LAB_059b0bcc;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  lVar3 = FUN_02b7654c(plVar2);
LAB_059b0bcc:
  lVar3 = thunk_FUN_02b5b75c(*(undefined8 *)(lVar3 + 8),lVar10);
  (**(code **)(lVar3 + 8))(plVar2,lVar8,lVar3);
  plVar2 = local_48;
  if (local_48 != (long *)0x0) {
    lVar3 = *local_48;
    uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_06312f78) {
          puVar4 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_059b0c50;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_02b7654c(local_48,*(long *)PTR_DAT_06312f78,0);
LAB_059b0c50:
    (*(code *)*puVar4)(plVar2,puVar4[1]);
  }
  return;
}


