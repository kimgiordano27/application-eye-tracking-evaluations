/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Remove<KeyValuePair<int,-ReflectionProbeManager.CachedProbe>>
ENTRY_POINT: 023f6a30
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_10;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Removing unreachable block (ram,0x023f6c54) */
/* WARNING: Removing unreachable block (ram,0x023f6b80) */
/* WARNING: Removing unreachable block (ram,0x023f6c60) */
/* WARNING: Removing unreachable block (ram,0x023f6bfc) */

void System_Array__InternalArray__ICollection_Remove<KeyValuePair<int,_ReflectionProbeManager_CachedProbe>>
               (undefined8 *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  void *unaff_x19;
  size_t unaff_x20;
  void *unaff_x21;
  void *unaff_x22;
  long unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  long unaff_x27;
  long unaff_x29;
  
  plVar1 = (long *)FUN_029da4a8(*param_1);
  if (*(int *)(*unaff_x26 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  FUN_029dad5c(plVar1,*(undefined8 *)Method_System_Runtime_Remoting_ConfigHandler_ValidatePath__);
  if (unaff_x25 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar4 = *unaff_x25;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) ==
          *(long *)Method_System_Runtime_Remoting_ConfigHandler_ReadPreload__) {
        puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 9) * 0x10 + 0x138);
        goto 
        System_Array__InternalArray__ICollection_Remove<KeyValuePair<Int32Enum,_BodySkeletonMapping_JointInfo<Int32Enum>>>
        ;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar2 = (undefined8 *)FUN_01ecb238();

  System_Array__InternalArray__ICollection_Remove<KeyValuePair<Int32Enum,_BodySkeletonMapping_JointInfo<Int32Enum>>>
  :
  (*(code *)*puVar2)();
  puVar2 = (undefined8 *)**(undefined8 **)(unaff_x24 + 0x38);
  uVar3 = *puVar2;
  *(long **)(unaff_x29 + -0x18) = unaff_x25;
  *(void **)(unaff_x29 + -0x10) = unaff_x21;
  (*(code *)puVar2[2])(uVar3,puVar2,0,unaff_x29 + -0x18);
  memcpy(unaff_x22,unaff_x21,unaff_x20);
  if (plVar1 != (long *)0x0) {
    lVar4 = *plVar1;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_023f6b68;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)
             FUN_01ecb238(plVar1,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_023f6b68:
    (*(code *)*puVar2)(plVar1,puVar2[1]);
  }
  plVar1 = *(long **)(unaff_x29 + -0x20);
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar4 = *plVar1;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) ==
          *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
        puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_023f6be4;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar2 = (undefined8 *)
           FUN_01ecb238(plVar1,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_023f6be4:
  (*(code *)*puVar2)(plVar1,puVar2[1]);
  memcpy(unaff_x21,unaff_x22,unaff_x20);
  memcpy(unaff_x19,unaff_x21,unaff_x20);
  if (*(long *)(unaff_x27 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


