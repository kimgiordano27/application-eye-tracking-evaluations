/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Remove<ConcurrentQueue.Segment.Slot<object>>
ENTRY_POINT: 023f8530
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_6;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x023f8884) */

void System_Array__InternalArray__ICollection_Remove<ConcurrentQueue_Segment_Slot<object>>
               (long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  long in_x9;
  int *piVar6;
  long *unaff_x19;
  undefined8 *unaff_x20;
  long *unaff_x21;
  void *unaff_x22;
  undefined8 *unaff_x23;
  long unaff_x24;
  long lVar7;
  size_t unaff_x25;
  long unaff_x27;
  long *unaff_x28;
  long unaff_x29;
  
  if (in_x9 != 0) {
    piVar6 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *unaff_x28) {
        puVar1 = (undefined8 *)(param_1 + (long)(*piVar6 + 5) * 0x10 + 0x138);
        goto System_Array__InternalArray__ICollection_Remove<HashSet_Slot<uint>>;
      }
      in_x9 = in_x9 + -1;
      piVar6 = piVar6 + 4;
    } while (in_x9 != 0);
  }
  puVar1 = (undefined8 *)FUN_01ecb238();
System_Array__InternalArray__ICollection_Remove<HashSet_Slot<uint>>:
  lVar2 = (*(code *)*puVar1)();
  if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  *(long *)(lVar2 + 0x40) = unaff_x19[3];
  thunk_FUN_01f51358();
  if (*(int *)(*(long *)Method_System_Runtime_Remoting_ConfigHandler_ReadChannel__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar3 = FUN_0394f2dc(0);
  if ((uVar3 & 1) == 0) {
    uVar4 = *(undefined8 *)(*(long *)(unaff_x24 + 0x38) + 0x20);
    if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar4 = FUN_03579868(uVar4,0);
    if (*(int *)(*(long *)Method_System_Runtime_Remoting_ConfigHandler_ReadClientActivated__ + 0xe0)
        == 0) {
      thunk_FUN_01ee6d7c();
    }
    plVar5 = (long *)FUN_0390bc14(uVar4,0);
    lVar2 = *(long *)(*(long *)(unaff_x24 + 0x38) + 8);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01ecaf44();
    }
    if (plVar5 != (long *)0x0) {
      if ((*(byte *)(lVar2 + 0x130) <= *(byte *)(*plVar5 + 0x130)) &&
         (*(long *)(*(long *)(*plVar5 + 200) + (ulong)*(byte *)(lVar2 + 0x130) * 8 + -8) == lVar2))
      {
        lVar2 = *(long *)(unaff_x24 + 0x38);
        if (-1 < *(int *)(*(long *)(lVar2 + 0x10) + 0x28)) {
          unaff_x22 = (void *)(unaff_x29 + -0x20);
        }
        memcpy(unaff_x23,unaff_x22,unaff_x25);
        puVar1 = *(undefined8 **)(lVar2 + 0x18);
        uVar4 = *puVar1;
        if (-1 < *(int *)(*(long *)(lVar2 + 0x10) + 0x28)) {
          unaff_x23 = (undefined8 *)*unaff_x23;
        }
        *(undefined8 **)(unaff_x29 + -0x18) = unaff_x23;
        *(long **)(unaff_x29 + -0x10) = unaff_x21;
        (*(code *)puVar1[2])(uVar4,puVar1,plVar5,unaff_x29 + -0x18);
        goto LAB_023f8720;
      }
    }
    lVar2 = *(long *)(unaff_x24 + 0x38);
    if (-1 < *(int *)(*(long *)(lVar2 + 0x10) + 0x28)) {
      unaff_x22 = (void *)(unaff_x29 + -0x20);
    }
    memcpy(unaff_x23,unaff_x22,unaff_x25);
    uVar4 = thunk_FUN_01f113fc(*(undefined8 *)(lVar2 + 0x10));
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c(uVar4,uVar4);
    }
    FUN_0390f94c(plVar5);
  }
  else {
    if (*(int *)(*(long *)Method_System_Runtime_Remoting_ConfigHandler_ReadClientActivated__ + 0xe0)
        == 0) {
      thunk_FUN_01ee6d7c();
    }
    lVar2 = (**(code **)**(undefined8 **)(unaff_x24 + 0x38))();
    lVar7 = *(long *)(unaff_x24 + 0x38);
    if (-1 < *(int *)(*(long *)(lVar7 + 0x10) + 0x28)) {
      unaff_x22 = (void *)(unaff_x29 + -0x20);
    }
    memcpy(unaff_x23,unaff_x22,unaff_x25);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    puVar1 = *(undefined8 **)(lVar7 + 0x18);
    uVar4 = *puVar1;
    if (-1 < *(int *)(*(long *)(lVar7 + 0x10) + 0x28)) {
      unaff_x23 = (undefined8 *)*unaff_x23;
    }
    *(undefined8 **)(unaff_x29 + -0x18) = unaff_x23;
    *(long **)(unaff_x29 + -0x10) = unaff_x21;
    (*(code *)puVar1[2])(uVar4,puVar1,lVar2,unaff_x29 + -0x18);
  }
LAB_023f8720:
  lVar2 = *unaff_x21;
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar3 != 0) {
    piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *unaff_x28) {
        puVar1 = (undefined8 *)(lVar2 + (long)(*piVar6 + 8) * 0x10 + 0x138);
        goto 
        System_Array__InternalArray__ICollection_Remove<StylePropertyAnimationSystem_Values_StyleData<Color>>
        ;
      }
      uVar3 = uVar3 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)FUN_01ecb238();

  System_Array__InternalArray__ICollection_Remove<StylePropertyAnimationSystem_Values_StyleData<Color>>
  :
  (*(code *)*puVar1)();
  if (unaff_x19[3] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  *unaff_x20 = *(undefined8 *)(unaff_x19[3] + 0x18);
  thunk_FUN_01f51358();
  lVar2 = *unaff_x19;
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar3 != 0) {
    piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) ==
          *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
        puVar1 = (undefined8 *)(lVar2 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_023f87ec;
      }
      uVar3 = uVar3 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)FUN_01ecb238();
LAB_023f87ec:
  (*(code *)*puVar1)();
  if (*(long *)(unaff_x27 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


