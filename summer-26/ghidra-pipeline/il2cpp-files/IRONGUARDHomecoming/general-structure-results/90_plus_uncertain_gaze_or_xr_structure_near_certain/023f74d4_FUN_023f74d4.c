/*
FUNCTION_NAME: FUN_023f74d4
ENTRY_POINT: 023f74d4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 117
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_10;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Removing unreachable block (ram,0x023f785c) */
/* WARNING: Removing unreachable block (ram,0x023f7788) */
/* WARNING: Removing unreachable block (ram,0x023f7868) */
/* WARNING: Removing unreachable block (ram,0x023f7804) */

void FUN_023f74d4(undefined8 param_1,undefined4 param_2,undefined8 param_3,long param_4,
                 void *param_5,long param_6)

{
  long lVar1;
  undefined *puVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  ulong __n;
  undefined1 *__src;
  undefined1 *__s;
  undefined1 auStack_90 [8];
  long *local_88;
  long *local_80;
  undefined8 uStack_78;
  undefined1 *local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  lVar7 = *(long *)(param_6 + 0x38);
  if (lVar7 == 0) {
    thunk_FUN_01efb3a4(Method_System_Runtime_Remoting_ConfigHandler_ReadServiceWellKnown__);
    thunk_FUN_01efb3a4(Method_System_Runtime_Remoting_ConfigHandler_ValidatePath__);
    thunk_FUN_01efb3a4(Method_System_Configuration_ConfigurationElement_IsModified__);
    thunk_FUN_01efb3a4(Method_System_Runtime_Remoting_ConfigHandler_ReadPreload__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    lVar7 = *(long *)(param_6 + 0x38);
    if (lVar7 == 0) {
      FUN_01ecafa0(param_6);
      lVar7 = *(long *)(param_6 + 0x38);
    }
  }
  __n = (ulong)*(uint *)(*(long *)(lVar7 + 8) + 0xfc);
  uVar8 = __n + 0xf & 0x1fffffff0;
  __src = auStack_90 + -uVar8;
  __s = __src + -uVar8;
  local_88 = (long *)0x0;
  memset(__s,0,__n);
  plVar3 = (long *)FUN_0391ef4c(&local_88,param_2,param_1,param_4,0);
  puVar2 = Method_System_Configuration_ConfigurationElement_IsModified__;
  local_80 = plVar3;
  uStack_78 = param_3;
  local_70 = __src;
  if (param_4 == 0) {
    if (*(int *)(*(long *)Method_System_Configuration_ConfigurationElement_IsModified__ + 0xe0) == 0
       ) {
      thunk_FUN_01ee6d7c();
    }
    plVar4 = (long *)FUN_029da4a8(*(undefined8 *)
                                   Method_System_Runtime_Remoting_ConfigHandler_ReadServiceWellKnown__
                                 );
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar5 = FUN_029dad5c(plVar4,*(undefined8 *)
                                 Method_System_Runtime_Remoting_ConfigHandler_ValidatePath__);
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar7 = *plVar3;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) ==
            *(long *)Method_System_Runtime_Remoting_ConfigHandler_ReadPreload__) {
          puVar6 = (undefined8 *)(lVar7 + (long)(*piVar9 + 9) * 0x10 + 0x138);
          goto LAB_023f76c0;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)
             FUN_01ecb238(plVar3,*(long *)Method_System_Runtime_Remoting_ConfigHandler_ReadPreload__
                          ,9);
LAB_023f76c0:
    (*(code *)*puVar6)(plVar3,uVar5,puVar6[1]);
    puVar6 = (undefined8 *)**(undefined8 **)(param_6 + 0x38);
    (*(code *)puVar6[2])(*puVar6,puVar6,0,&local_80,__src);
    memcpy(__s,__src,__n);
    if (plVar4 != (long *)0x0) {
      lVar7 = *plVar4;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_023f776c;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar6 = (undefined8 *)
               FUN_01ecb238(plVar4,*(long *)
                                    Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                            ,0);
LAB_023f776c:
      (*(code *)*puVar6)(plVar4,puVar6[1]);
    }
  }
  else {
    puVar6 = (undefined8 *)**(undefined8 **)(param_6 + 0x38);
    (*(code *)puVar6[2])(*puVar6,puVar6,0,&local_80,__src);
    memcpy(__s,__src,__n);
  }
  plVar3 = local_88;
  if (local_88 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar7 = *local_88;
  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) ==
          *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
        puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_023f77ec;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar6 = (undefined8 *)
           FUN_01ecb238(local_88,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_023f77ec:
  (*(code *)*puVar6)(plVar3,puVar6[1]);
  memcpy(__src,__s,__n);
  memcpy(param_5,__src,__n);
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


