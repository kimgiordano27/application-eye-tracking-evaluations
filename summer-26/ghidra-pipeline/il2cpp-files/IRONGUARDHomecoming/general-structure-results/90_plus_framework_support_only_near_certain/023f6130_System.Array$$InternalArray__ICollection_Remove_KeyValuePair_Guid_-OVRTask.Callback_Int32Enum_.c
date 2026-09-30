/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Remove<KeyValuePair<Guid,-OVRTask.Callback<Int32Enum>>>
ENTRY_POINT: 023f6130
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 91
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_12;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x023f64a4) */
/* WARNING: Removing unreachable block (ram,0x023f651c) */

void System_Array__InternalArray__ICollection_Remove<KeyValuePair<Guid,_OVRTask_Callback<Int32Enum>>>
               (long *param_1,undefined8 param_2,void *param_3,long param_4)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  ulong __n;
  undefined1 *__dest;
  undefined1 *__s;
  undefined8 uVar10;
  undefined1 auStack_80 [8];
  long *local_78;
  undefined1 *puStack_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  lVar6 = *(long *)(param_4 + 0x38);
  if (lVar6 == 0) {
    thunk_FUN_01efb3a4(Method_System_Runtime_Remoting_ConfigHandler_ReadInteropXml__);
    thunk_FUN_01efb3a4(Method_System_Runtime_Remoting_ConfigHandler_ReadLifetine__);
    thunk_FUN_01efb3a4(Method_System_Runtime_Remoting_ConfigHandler_ReadChannel__);
    thunk_FUN_01efb3a4(Method_System_Runtime_Remoting_ConfigHandler_ReadPreload__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_System_Runtime_Remoting_ConfigHandler_ReadClientActivated__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    lVar6 = *(long *)(param_4 + 0x38);
    if (lVar6 == 0) {
      FUN_01ecafa0(param_4);
      lVar6 = *(long *)(param_4 + 0x38);
    }
  }
  __n = (ulong)*(uint *)(*(long *)(lVar6 + 0x18) + 0xfc);
  uVar8 = __n + 0xf & 0x1fffffff0;
  __dest = auStack_80 + -uVar8;
  __s = __dest + -uVar8;
  memset(__s,0,__n);
  if (*(int *)(*(long *)Method_System_Runtime_Remoting_ConfigHandler_ReadLifetine__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  plVar2 = (long *)FUN_029da4a8(*(undefined8 *)
                                 Method_System_Runtime_Remoting_ConfigHandler_ReadInteropXml__);
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  if (plVar2[3] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  FUN_03937bf8(plVar2[3],param_2,0);
  if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar6 = *param_1;
  uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) ==
          *(long *)Method_System_Runtime_Remoting_ConfigHandler_ReadPreload__) {
        puVar3 = (undefined8 *)(lVar6 + (long)(*piVar9 + 8) * 0x10 + 0x138);
        goto LAB_023f62b4;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar3 = (undefined8 *)
           FUN_01ecb238(param_1,*(long *)Method_System_Runtime_Remoting_ConfigHandler_ReadPreload__,
                        8);
LAB_023f62b4:
  lVar6 = (*(code *)*puVar3)(param_1,puVar3[1]);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  *(long *)(lVar6 + 0x50) = plVar2[3];
  thunk_FUN_01f51358();
  if (*(int *)(*(long *)Method_System_Runtime_Remoting_ConfigHandler_ReadChannel__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar8 = FUN_0394f2dc(0);
  puVar5 = __dest;
  if ((uVar8 & 1) == 0) {
    uVar10 = *(undefined8 *)(*(long *)(param_4 + 0x38) + 0x20);
    if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar10 = FUN_03579868(uVar10,0);
    if (*(int *)(*(long *)Method_System_Runtime_Remoting_ConfigHandler_ReadClientActivated__ + 0xe0)
        == 0) {
      thunk_FUN_01ee6d7c();
    }
    plVar4 = (long *)FUN_0390bc14(uVar10,0);
    lVar6 = *(long *)(*(long *)(param_4 + 0x38) + 8);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_01ecaf44();
    }
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar7 = *plVar4;
    if ((*(byte *)(lVar7 + 0x130) < *(byte *)(lVar6 + 0x130)) ||
       (*(long *)(*(long *)(lVar7 + 200) + (ulong)*(byte *)(lVar6 + 0x130) * 8 + -8) != lVar6)) {
      uVar10 = (**(code **)(lVar7 + 0x178))(plVar4,param_1,*(undefined8 *)(lVar7 + 0x180));
      lVar6 = *(long *)(*(long *)(param_4 + 0x38) + 0x18);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_01ecaf44(lVar6);
      }
      puVar5 = (undefined1 *)FUN_01f08934(uVar10,lVar6,__dest);
    }
    else {
      lVar6 = *(long *)(lVar7 + 0x1a0);
      local_78 = param_1;
      puStack_70 = __dest;
      (**(code **)(lVar6 + 0x10))(*(undefined8 *)(lVar6 + 8),lVar6,plVar4,&local_78,__dest);
    }
  }
  else {
    if (*(int *)(*(long *)Method_System_Runtime_Remoting_ConfigHandler_ReadClientActivated__ + 0xe0)
        == 0) {
      thunk_FUN_01ee6d7c();
    }
    plVar4 = (long *)(**(code **)**(undefined8 **)(param_4 + 0x38))();
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar6 = *(long *)(*plVar4 + 0x1a0);
    local_78 = param_1;
    puStack_70 = __dest;
    (**(code **)(lVar6 + 0x10))(*(undefined8 *)(lVar6 + 8),lVar6,plVar4,&local_78,__dest);
  }
  memcpy(__s,puVar5,__n);
  lVar6 = *plVar2;
  uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) ==
          *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
        puVar3 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_023f648c;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar3 = (undefined8 *)
           FUN_01ecb238(plVar2,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_023f648c:
  (*(code *)*puVar3)(plVar2,puVar3[1]);
  memcpy(__dest,__s,__n);
  memcpy(param_3,__dest,__n);
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


