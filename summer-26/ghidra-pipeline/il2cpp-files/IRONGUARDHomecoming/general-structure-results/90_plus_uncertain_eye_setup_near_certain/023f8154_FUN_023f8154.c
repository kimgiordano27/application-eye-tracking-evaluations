/*
FUNCTION_NAME: FUN_023f8154
ENTRY_POINT: 023f8154
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


/* WARNING: Removing unreachable block (ram,0x023f8344) */
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_023f8154(undefined8 *param_1,undefined4 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  undefined8 *puVar10;
  void *apvStack_90 [4];
  undefined4 *local_70;
  undefined8 uStack_68;
  undefined4 local_5c;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  plVar6 = *(long **)(param_4 + 0x38);
  apvStack_90[1] = param_1;
  if (plVar6 == (long *)0x0) {
    thunk_FUN_01efb3a4(Method_System_Runtime_Remoting_ConfigHandler_ReadProvider__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    plVar6 = *(long **)(param_4 + 0x38);
    if (plVar6 == (long *)0x0) {
      FUN_01ecafa0(param_4);
      plVar6 = *(long **)(param_4 + 0x38);
    }
  }
  uVar2 = *(uint *)(*plVar6 + 0xfc);
  puVar10 = (undefined8 *)((long)apvStack_90 - ((ulong)uVar2 + 0xf & 0x1fffffff0));
  if (*(int *)(*(long *)Method_System_Runtime_Remoting_ConfigHandler_ReadProvider__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  plVar6 = (long *)FUN_03910d44(0,0);
  if (-1 < *(int *)(**(long **)(param_4 + 0x38) + 0x28)) {
    param_1 = apvStack_90 + 1;
  }
  memcpy(puVar10,param_1,(ulong)uVar2);
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  if (plVar6[3] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  apvStack_90[3] = (void *)FUN_039109dc(plVar6[3],0);
  puVar1 = (undefined8 *)(*(long **)(param_4 + 0x38))[1];
  if (-1 < *(int *)(**(long **)(param_4 + 0x38) + 0x28)) {
    puVar10 = (undefined8 *)*puVar10;
  }
  local_70 = &local_5c;
  apvStack_90[2] = puVar10;
  uStack_68 = param_3;
  local_5c = param_2;
  (*(code *)puVar1[2])(*puVar1,puVar1,0,apvStack_90 + 2,param_3);
  if (plVar6[3] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  plVar4 = (long *)FUN_039109dc(plVar6[3],0);
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar5 = (**(code **)(*plVar4 + 0x3b8))(plVar4,*(undefined8 *)(*plVar4 + 0x3c0));
  lVar7 = *plVar6;
  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) ==
          *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
        puVar10 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
        goto FUN_023f8300;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar10 = (undefined8 *)
            FUN_01ecb238(plVar6,*(long *)
                                 Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                         ,0);
FUN_023f8300:
  (*(code *)*puVar10)(plVar6,puVar10[1]);
  if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar5;
}


