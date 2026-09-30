/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Remove<KeyValuePair<int,-bool>>
ENTRY_POINT: 023f6640
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 91
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_8;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x023f6814) */

void System_Array__InternalArray__ICollection_Remove<KeyValuePair<int,_bool>>
               (undefined8 param_1,undefined4 param_2,undefined8 param_3,void *param_4,long param_5)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  ulong __n;
  void *__src;
  void *__s;
  undefined8 uStack_30;
  undefined4 *puStack_28;
  undefined8 uStack_20;
  void *pvStack_18;
  undefined4 uStack_c;
  long lStack_8;
  
  lVar1 = tpidr_el0;
  lStack_8 = *(long *)(lVar1 + 0x28);
  lVar4 = *(long *)(param_5 + 0x38);
  if (lVar4 == 0) {
    thunk_FUN_01efb3a4(Method_System_Runtime_Remoting_ConfigHandler_ReadProvider__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    lVar4 = *(long *)(param_5 + 0x38);
    if (lVar4 == 0) {
      FUN_01ecafa0(param_5);
      lVar4 = *(long *)(param_5 + 0x38);
    }
  }
  __n = (ulong)*(uint *)(*(long *)(lVar4 + 8) + 0xfc);
  uVar5 = __n + 0xf & 0x1fffffff0;
  __src = (void *)((long)&uStack_30 - uVar5);
  __s = (void *)((long)__src - uVar5);
  memset(__s,0,__n);
  if (*(int *)(*(long *)Method_System_Runtime_Remoting_ConfigHandler_ReadProvider__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  plVar2 = (long *)FUN_03910d44(param_1,0);
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  if (plVar2[3] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uStack_30 = FUN_039109dc(plVar2[3],0);
  puStack_28 = &uStack_c;
  puVar3 = (undefined8 *)**(long **)(param_5 + 0x38);
  uStack_20 = param_3;
  pvStack_18 = __src;
  uStack_c = param_2;
  (*(code *)puVar3[2])(*puVar3,puVar3,0,&uStack_30,__src);
  memcpy(__s,__src,__n);
  lVar4 = *plVar2;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) ==
          *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
        puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_023f67b0;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar3 = (undefined8 *)
           FUN_01ecb238(plVar2,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_023f67b0:
  (*(code *)*puVar3)(plVar2,puVar3[1]);
  memcpy(__src,__s,__n);
  memcpy(param_4,__src,__n);
  if (*(long *)(lVar1 + 0x28) != lStack_8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


