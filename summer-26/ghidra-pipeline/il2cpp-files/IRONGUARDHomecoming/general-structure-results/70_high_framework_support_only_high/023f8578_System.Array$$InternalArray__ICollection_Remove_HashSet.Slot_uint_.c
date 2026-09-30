/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Remove<HashSet.Slot<uint>>
ENTRY_POINT: 023f8578
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_6;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x023f8884) */

void System_Array__InternalArray__ICollection_Remove<HashSet_Slot<uint>>(undefined8 *param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 *puVar5;
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
  
  lVar1 = (*(code *)*param_1)();
  if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  *(long *)(lVar1 + 0x40) = unaff_x19[3];
  thunk_FUN_01f51358();
  if (*(int *)(*(long *)Method_System_Runtime_Remoting_ConfigHandler_ReadChannel__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar2 = FUN_0394f2dc(0);
  if ((uVar2 & 1) == 0) {
    uVar3 = *(undefined8 *)(*(long *)(unaff_x24 + 0x38) + 0x20);
    if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar3 = FUN_03579868(uVar3,0);
    if (*(int *)(*(long *)Method_System_Runtime_Remoting_ConfigHandler_ReadClientActivated__ + 0xe0)
        == 0) {
      thunk_FUN_01ee6d7c();
    }
    plVar4 = (long *)FUN_0390bc14(uVar3,0);
    lVar1 = *(long *)(*(long *)(unaff_x24 + 0x38) + 8);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_01ecaf44();
    }
    if (plVar4 != (long *)0x0) {
      if ((*(byte *)(lVar1 + 0x130) <= *(byte *)(*plVar4 + 0x130)) &&
         (*(long *)(*(long *)(*plVar4 + 200) + (ulong)*(byte *)(lVar1 + 0x130) * 8 + -8) == lVar1))
      {
        lVar1 = *(long *)(unaff_x24 + 0x38);
        if (-1 < *(int *)(*(long *)(lVar1 + 0x10) + 0x28)) {
          unaff_x22 = (void *)(unaff_x29 + -0x20);
        }
        memcpy(unaff_x23,unaff_x22,unaff_x25);
        puVar5 = *(undefined8 **)(lVar1 + 0x18);
        uVar3 = *puVar5;
        if (-1 < *(int *)(*(long *)(lVar1 + 0x10) + 0x28)) {
          unaff_x23 = (undefined8 *)*unaff_x23;
        }
        *(undefined8 **)(unaff_x29 + -0x18) = unaff_x23;
        *(long **)(unaff_x29 + -0x10) = unaff_x21;
        (*(code *)puVar5[2])(uVar3,puVar5,plVar4,unaff_x29 + -0x18);
        goto LAB_023f8720;
      }
    }
    lVar1 = *(long *)(unaff_x24 + 0x38);
    if (-1 < *(int *)(*(long *)(lVar1 + 0x10) + 0x28)) {
      unaff_x22 = (void *)(unaff_x29 + -0x20);
    }
    memcpy(unaff_x23,unaff_x22,unaff_x25);
    uVar3 = thunk_FUN_01f113fc(*(undefined8 *)(lVar1 + 0x10));
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c(uVar3,uVar3);
    }
    FUN_0390f94c(plVar4);
  }
  else {
    if (*(int *)(*(long *)Method_System_Runtime_Remoting_ConfigHandler_ReadClientActivated__ + 0xe0)
        == 0) {
      thunk_FUN_01ee6d7c();
    }
    lVar1 = (**(code **)**(undefined8 **)(unaff_x24 + 0x38))();
    lVar7 = *(long *)(unaff_x24 + 0x38);
    if (-1 < *(int *)(*(long *)(lVar7 + 0x10) + 0x28)) {
      unaff_x22 = (void *)(unaff_x29 + -0x20);
    }
    memcpy(unaff_x23,unaff_x22,unaff_x25);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    puVar5 = *(undefined8 **)(lVar7 + 0x18);
    uVar3 = *puVar5;
    if (-1 < *(int *)(*(long *)(lVar7 + 0x10) + 0x28)) {
      unaff_x23 = (undefined8 *)*unaff_x23;
    }
    *(undefined8 **)(unaff_x29 + -0x18) = unaff_x23;
    *(long **)(unaff_x29 + -0x10) = unaff_x21;
    (*(code *)puVar5[2])(uVar3,puVar5,lVar1,unaff_x29 + -0x18);
  }
LAB_023f8720:
  lVar1 = *unaff_x21;
  uVar2 = (ulong)*(ushort *)(lVar1 + 0x12e);
  if (uVar2 != 0) {
    piVar6 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *unaff_x28) {
        puVar5 = (undefined8 *)(lVar1 + (long)(*piVar6 + 8) * 0x10 + 0x138);
        goto 
        System_Array__InternalArray__ICollection_Remove<StylePropertyAnimationSystem_Values_StyleData<Color>>
        ;
      }
      uVar2 = uVar2 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar2 != 0);
  }
  puVar5 = (undefined8 *)FUN_01ecb238();

  System_Array__InternalArray__ICollection_Remove<StylePropertyAnimationSystem_Values_StyleData<Color>>
  :
  (*(code *)*puVar5)();
  if (unaff_x19[3] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  *unaff_x20 = *(undefined8 *)(unaff_x19[3] + 0x18);
  thunk_FUN_01f51358();
  lVar1 = *unaff_x19;
  uVar2 = (ulong)*(ushort *)(lVar1 + 0x12e);
  if (uVar2 != 0) {
    piVar6 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) ==
          *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
        puVar5 = (undefined8 *)(lVar1 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_023f87ec;
      }
      uVar2 = uVar2 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar2 != 0);
  }
  puVar5 = (undefined8 *)FUN_01ecb238();
LAB_023f87ec:
  (*(code *)*puVar5)();
  if (*(long *)(unaff_x27 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


