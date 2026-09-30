/*
FUNCTION_NAME: FUN_023f8994
ENTRY_POINT: 023f8994
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 111
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_6;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x023f8b94) */

undefined8
FUN_023f8994(void *****param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,long param_5
            )

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  void **__dest;
  void ****local_a0;
  void **local_98;
  undefined8 uStack_90;
  undefined4 *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 local_6c;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  plVar6 = *(long **)(param_5 + 0x38);
  local_a0 = param_1;
  if (plVar6 == (long *)0x0) {
    thunk_FUN_01efb3a4(Method_System_Runtime_Remoting_ConfigHandler_ReadProvider__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    plVar6 = *(long **)(param_5 + 0x38);
    if (plVar6 == (long *)0x0) {
      FUN_01ecafa0(param_5);
      plVar6 = *(long **)(param_5 + 0x38);
    }
  }
  uVar1 = *(uint *)(*plVar6 + 0xfc);
  __dest = (void **)((long)&local_a0 - ((ulong)uVar1 + 0xf & 0x1fffffff0));
  if (*(int *)(*(long *)Method_System_Runtime_Remoting_ConfigHandler_ReadProvider__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  plVar6 = (long *)FUN_03910d44(0,0);
  if (-1 < *(int *)(**(long **)(param_5 + 0x38) + 0x28)) {
    param_1 = &local_a0;
  }
  memcpy(__dest,param_1,(ulong)uVar1);
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  if (plVar6[3] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uStack_90 = FUN_039109dc(plVar6[3],0);
  puVar5 = (undefined8 *)(*(long **)(param_5 + 0x38))[1];
  if (-1 < *(int *)(**(long **)(param_5 + 0x38) + 0x28)) {
    __dest = *__dest;
  }
  local_88 = &local_6c;
  local_98 = __dest;
  uStack_80 = param_3;
  local_78 = param_4;
  local_6c = param_2;
  (*(code *)puVar5[2])(*puVar5,puVar5,0,&local_98,param_4);
  if (plVar6[3] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  plVar3 = (long *)FUN_039109dc(plVar6[3],0);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar4 = (**(code **)(*plVar3 + 0x3b8))(plVar3,*(undefined8 *)(*plVar3 + 0x3c0));
  lVar7 = *plVar6;
  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) ==
          *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
        puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_023f8b4c;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar5 = (undefined8 *)
           FUN_01ecb238(plVar6,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_023f8b4c:
  (*(code *)*puVar5)(plVar6,puVar5[1]);
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
}


