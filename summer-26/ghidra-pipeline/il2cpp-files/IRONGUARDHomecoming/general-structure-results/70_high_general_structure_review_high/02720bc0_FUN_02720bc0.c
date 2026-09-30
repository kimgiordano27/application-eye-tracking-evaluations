/*
FUNCTION_NAME: FUN_02720bc0
ENTRY_POINT: 02720bc0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 81
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_1;frame_or_lifecycle_behavior
*/


void FUN_02720bc0(long param_1,int param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined1 *__dest;
  ulong __n;
  ulong uVar8;
  undefined1 *__s;
  undefined1 *__dest_00;
  ulong __n_00;
  undefined1 *__s_00;
  long *plVar9;
  long lVar10;
  undefined1 auStack_80 [8];
  long local_78;
  int local_6c;
  long local_68;
  
  local_78 = tpidr_el0;
                    /* try { // try from 02720be4 to 02820c4b has its CatchHandler @ 02720d08 */
  local_68 = *(long *)(local_78 + 0x28);
  lVar10 = *(long *)(*(long *)(param_3 + 0x20) + 0xc0);
  __n_00 = (ulong)*(uint *)(*(long *)(lVar10 + 0x58) + 0xfc);
  __n = (ulong)*(uint *)(*(long *)(lVar10 + 0x68) + 0xfc);
  uVar7 = __n_00 + 0xf & 0x1fffffff0;
  __dest_00 = auStack_80 + -uVar7;
  uVar8 = __n + 0xf & 0x1fffffff0;
  __dest = __dest_00 + -uVar8;
  __s_00 = __dest + -uVar7;
  memset(__s_00,0,__n_00);
  __s = __s_00 + -uVar8;
  memset(__s,0,__n);
  if ((param_2 < 0) || (*(int *)(param_1 + 0x20) <= param_2)) {
    local_6c = param_2;
    uVar3 = thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__)
    ;
    uVar3 = thunk_FUN_01f113fc(uVar3,&local_6c);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
    uVar4 = thunk_FUN_01f117cc();
    uVar5 = thunk_FUN_01efb3a4(
                              Method_Oculus_Platform_Callback_SetNotificationCallback<PartyUpdateNotification>__
                              );
    uVar6 = thunk_FUN_01efb3a4(
                              Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<MouseMoveEvent>__
                              );
    FUN_034f48f0(uVar4,uVar5,uVar3,uVar6,0);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar4,param_3);
  }
  iVar2 = *(int *)(param_1 + 0x20) + -1;
  *(int *)(param_1 + 0x20) = iVar2;
  if (iVar2 - param_2 != 0 && param_2 <= iVar2) {
    FUN_0358d498(*(undefined8 *)(param_1 + 0x10),param_2 + 1,*(undefined8 *)(param_1 + 0x10),param_2
                 ,iVar2 - param_2,0);
    FUN_0358d498(*(undefined8 *)(param_1 + 0x18),param_2 + 1,*(undefined8 *)(param_1 + 0x18),param_2
                 ,*(int *)(param_1 + 0x20) - param_2,0);
    lVar10 = *(long *)(*(long *)(param_3 + 0x20) + 0xc0);
  }
  uVar7 = FUN_01f09344(*(undefined8 *)(lVar10 + 0x128));
  if ((uVar7 & 1) != 0) {
    plVar9 = *(long **)(param_1 + 0x10);
    uVar1 = *(uint *)(param_1 + 0x20);
    memset(__s_00,0,__n_00);
    memcpy(__dest_00,__s_00,__n_00);
    if (plVar9 == (long *)0x0) goto LAB_02720edc;
    if (*(uint *)(plVar9 + 3) <= uVar1) goto LAB_02720ed8;
    memcpy((void *)((long)plVar9 + (ulong)*(uint *)(*plVar9 + 0x104) * (long)(int)uVar1 + 0x20),
           __dest_00,__n_00);
    lVar10 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x58);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_01ecaf44();
    }
    if (*(uint *)(plVar9 + 3) <= uVar1) goto LAB_02720ed8;
    FUN_01f087b0(lVar10,(long)plVar9 + (ulong)*(uint *)(*plVar9 + 0x104) * (long)(int)uVar1 + 0x20,
                 __dest_00);
  }
  uVar7 = FUN_01f09344(*(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x130));
  if ((uVar7 & 1) != 0) {
    plVar9 = *(long **)(param_1 + 0x18);
    uVar1 = *(uint *)(param_1 + 0x20);
    memset(__s,0,__n);
    memcpy(__dest,__s,__n);
    if (plVar9 == (long *)0x0) {
LAB_02720edc:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if (uVar1 < *(uint *)(plVar9 + 3)) {
      memcpy((void *)((long)plVar9 + (ulong)*(uint *)(*plVar9 + 0x104) * (long)(int)uVar1 + 0x20),
             __dest,__n);
      lVar10 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x68);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_01ecaf44();
      }
      if (uVar1 < *(uint *)(plVar9 + 3)) {
        FUN_01f087b0(lVar10,(long)plVar9 +
                            (ulong)*(uint *)(*plVar9 + 0x104) * (long)(int)uVar1 + 0x20,__dest);
        goto LAB_02720e28;
      }
    }
LAB_02720ed8:
                    /* WARNING: Subroutine does not return */
    FUN_01f08a44();
  }
LAB_02720e28:
  *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
  if (*(long *)(local_78 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


