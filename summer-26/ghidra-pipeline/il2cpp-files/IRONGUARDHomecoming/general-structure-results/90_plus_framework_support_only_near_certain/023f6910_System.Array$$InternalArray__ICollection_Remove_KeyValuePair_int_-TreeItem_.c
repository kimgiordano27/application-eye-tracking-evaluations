/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Remove<KeyValuePair<int,-TreeItem>>
ENTRY_POINT: 023f6910
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


/* WARNING: Removing unreachable block (ram,0x023f6c54) */
/* WARNING: Removing unreachable block (ram,0x023f6b80) */
/* WARNING: Removing unreachable block (ram,0x023f6c60) */
/* WARNING: Removing unreachable block (ram,0x023f6bfc) */

void System_Array__InternalArray__ICollection_Remove<KeyValuePair<int,_TreeItem>>
               (undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
               undefined8 param_5,long param_6)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  void *unaff_x19;
  ulong __n;
  undefined1 *__src;
  undefined1 *__s;
  long unaff_x23;
  long unaff_x24;
  long unaff_x27;
  long unaff_x29;
  
  *(undefined8 *)(unaff_x29 + -8) = param_1;
  lVar6 = *(long *)(param_6 + 0x38);
  if (lVar6 == 0) {
    thunk_FUN_01efb3a4(Method_System_Runtime_Remoting_ConfigHandler_ReadServiceWellKnown__);
                    /* try { // try from 023f6934 to 024f6937 has its CatchHandler @ 023f6940 */
                    /* try { // try from 023f6938 to 024f695f has its CatchHandler @ 023f65ac */
    thunk_FUN_01efb3a4(Method_System_Runtime_Remoting_ConfigHandler_ValidatePath__);
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 023f6934 with catch @ 023f6940
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 023f6804 with catch @ 023f6944
                        */
    thunk_FUN_01efb3a4(Method_System_Configuration_ConfigurationElement_IsModified__);
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 023f67c8 with catch @ 023f6948
                        */
    thunk_FUN_01efb3a4(Method_System_Runtime_Remoting_ConfigHandler_ReadPreload__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    lVar6 = *(long *)(unaff_x24 + 0x38);
    if (lVar6 == 0) {
      FUN_01ecafa0();
      lVar6 = *(long *)(unaff_x24 + 0x38);
    }
  }
  __n = (ulong)*(uint *)(*(long *)(lVar6 + 8) + 0xfc);
  uVar7 = __n + 0xf & 0x1fffffff0;
  __src = &stack0x00000000 + -uVar7;
  __s = __src + -uVar7;
  *(undefined8 *)(unaff_x29 + -0x20) = 0;
  memset(__s,0,__n);
  plVar2 = (long *)FUN_0391ef4c(unaff_x29 + -0x20,param_3,param_2);
  puVar1 = Method_System_Configuration_ConfigurationElement_IsModified__;
  if (unaff_x23 == 0) {
    if (*(int *)(*(long *)Method_System_Configuration_ConfigurationElement_IsModified__ + 0xe0) == 0
       ) {
      thunk_FUN_01ee6d7c();
    }
    plVar4 = (long *)FUN_029da4a8(*(undefined8 *)
                                   Method_System_Runtime_Remoting_ConfigHandler_ReadServiceWellKnown__
                                 );
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar3 = FUN_029dad5c(plVar4,*(undefined8 *)
                                 Method_System_Runtime_Remoting_ConfigHandler_ValidatePath__);
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar6 = *plVar2;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) ==
            *(long *)Method_System_Runtime_Remoting_ConfigHandler_ReadPreload__) {
          puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 9) * 0x10 + 0x138);
          goto 
          System_Array__InternalArray__ICollection_Remove<KeyValuePair<Int32Enum,_BodySkeletonMapping_JointInfo<Int32Enum>>>
          ;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar5 = (undefined8 *)
             FUN_01ecb238(plVar2,*(long *)Method_System_Runtime_Remoting_ConfigHandler_ReadPreload__
                          ,9);

    System_Array__InternalArray__ICollection_Remove<KeyValuePair<Int32Enum,_BodySkeletonMapping_JointInfo<Int32Enum>>>
    :
    (*(code *)*puVar5)(plVar2,uVar3,puVar5[1]);
    puVar5 = (undefined8 *)**(undefined8 **)(unaff_x24 + 0x38);
    uVar3 = *puVar5;
    *(long **)(unaff_x29 + -0x18) = plVar2;
    *(undefined1 **)(unaff_x29 + -0x10) = __src;
    (*(code *)puVar5[2])(uVar3,puVar5,0,unaff_x29 + -0x18,__src);
    memcpy(__s,__src,__n);
    if (plVar4 != (long *)0x0) {
      lVar6 = *plVar4;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_023f6b68;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar5 = (undefined8 *)
               FUN_01ecb238(plVar4,*(long *)
                                    Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                            ,0);
LAB_023f6b68:
      (*(code *)*puVar5)(plVar4,puVar5[1]);
    }
  }
  else {
    puVar5 = (undefined8 *)**(undefined8 **)(unaff_x24 + 0x38);
    uVar3 = *puVar5;
    *(long **)(unaff_x29 + -0x18) = plVar2;
    *(undefined1 **)(unaff_x29 + -0x10) = __src;
    (*(code *)puVar5[2])(uVar3,puVar5,0,unaff_x29 + -0x18,__src);
    memcpy(__s,__src,__n);
  }
  plVar2 = *(long **)(unaff_x29 + -0x20);
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar6 = *plVar2;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) ==
          *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
        puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_023f6be4;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar5 = (undefined8 *)
           FUN_01ecb238(plVar2,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_023f6be4:
  (*(code *)*puVar5)(plVar2,puVar5[1]);
  memcpy(__src,__s,__n);
  memcpy(unaff_x19,__src,__n);
  if (*(long *)(unaff_x27 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


