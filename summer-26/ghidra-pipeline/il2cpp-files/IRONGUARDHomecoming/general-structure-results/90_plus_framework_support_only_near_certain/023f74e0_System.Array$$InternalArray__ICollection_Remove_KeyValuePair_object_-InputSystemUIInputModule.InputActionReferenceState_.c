/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Remove<KeyValuePair<object,-InputSystemUIInputModule.InputActionReferenceState>>
ENTRY_POINT: 023f74e0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_12;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Removing unreachable block (ram,0x023f785c) */
/* WARNING: Removing unreachable block (ram,0x023f7788) */
/* WARNING: Removing unreachable block (ram,0x023f7868) */
/* WARNING: Removing unreachable block (ram,0x023f7804) */

void System_Array__InternalArray__ICollection_Remove<KeyValuePair<object,_InputSystemUIInputModule_InputActionReferenceState>>
               (undefined8 param_1,undefined4 param_2,undefined8 param_3,long param_4,void *param_5,
               long param_6)

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
  undefined1 auStack_30 [8];
  long *plStack_28;
  long *plStack_20;
  undefined8 uStack_18;
  undefined1 *puStack_10;
  long lStack_8;
  
  lVar1 = tpidr_el0;
  lStack_8 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 023f750c to 024f7513 has its CatchHandler @ 023f7600 */
  lVar7 = *(long *)(param_6 + 0x38);
                    /* try { // try from 023f7514 to 024f75ef has its CatchHandler @ 023f7360 */
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
  __src = auStack_30 + -uVar8;
  __s = __src + -uVar8;
  plStack_28 = (long *)0x0;
  memset(__s,0,__n);
  plVar3 = (long *)FUN_0391ef4c(&plStack_28,param_2,param_1,param_4,0);
  puVar2 = Method_System_Configuration_ConfigurationElement_IsModified__;
  plStack_20 = plVar3;
  uStack_18 = param_3;
  puStack_10 = __src;
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
    (*(code *)puVar6[2])(*puVar6,puVar6,0,&plStack_20,__src);
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
    (*(code *)puVar6[2])(*puVar6,puVar6,0,&plStack_20,__src);
    memcpy(__s,__src,__n);
  }
  plVar3 = plStack_28;
  if (plStack_28 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar7 = *plStack_28;
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
           FUN_01ecb238(plStack_28,
                        *(long *)
                         Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__,0)
  ;
LAB_023f77ec:
  (*(code *)*puVar6)(plVar3,puVar6[1]);
  memcpy(__src,__s,__n);
  memcpy(param_5,__src,__n);
  if (*(long *)(lVar1 + 0x28) != lStack_8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


