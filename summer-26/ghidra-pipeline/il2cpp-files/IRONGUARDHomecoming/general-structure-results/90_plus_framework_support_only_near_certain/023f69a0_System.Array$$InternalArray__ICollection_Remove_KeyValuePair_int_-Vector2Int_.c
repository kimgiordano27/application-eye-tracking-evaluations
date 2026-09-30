/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Remove<KeyValuePair<int,-Vector2Int>>
ENTRY_POINT: 023f69a0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_10;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Removing unreachable block (ram,0x023f6c54) */
/* WARNING: Removing unreachable block (ram,0x023f6b80) */
/* WARNING: Removing unreachable block (ram,0x023f6c60) */
/* WARNING: Removing unreachable block (ram,0x023f6bfc) */

void System_Array__InternalArray__ICollection_Remove<KeyValuePair<int,_Vector2Int>>(void)

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
  size_t unaff_x20;
  void *unaff_x21;
  void *unaff_x22;
  long unaff_x23;
  long unaff_x24;
  undefined4 unaff_w25;
  long unaff_x27;
  long unaff_x29;
  
  memset(unaff_x22,0,unaff_x20);
                    /* try { // try from 023f69bc to 024f69e3 has its CatchHandler @ 023f69f8 */
  plVar2 = (long *)FUN_0391ef4c(unaff_x29 + -0x20,unaff_w25);
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
    *(void **)(unaff_x29 + -0x10) = unaff_x21;
    (*(code *)puVar5[2])(uVar3,puVar5,0,unaff_x29 + -0x18);
    memcpy(unaff_x22,unaff_x21,unaff_x20);
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
    *(void **)(unaff_x29 + -0x10) = unaff_x21;
                    /* try { // try from 023f69e4 to 024f69ef has its CatchHandler @ 023f65ac */
    (*(code *)puVar5[2])(uVar3,puVar5,0,unaff_x29 + -0x18);
    memcpy(unaff_x22,unaff_x21,unaff_x20);
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
  memcpy(unaff_x21,unaff_x22,unaff_x20);
  memcpy(unaff_x19,unaff_x21,unaff_x20);
  if (*(long *)(unaff_x27 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


