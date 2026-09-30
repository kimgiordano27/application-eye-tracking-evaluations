/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Contains<OVRPlugin.Vector4s>
ENTRY_POINT: 023d8164
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_2;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_1
*/


undefined8
System_Array__InternalArray__ICollection_Contains<OVRPlugin_Vector4s>
          (long param_1,undefined8 param_2)

{
  undefined2 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long lVar5;
  int iVar6;
  long lVar7;
  long *unaff_x23;
  ulong in_stack_00000018;
  undefined8 in_stack_00000028;
  
  uVar2 = FUN_03579868(**(undefined8 **)(param_1 + 0x4f0),0);
  uVar3 = FUN_03582560(param_2,uVar2,0);
  if ((uVar3 & 1) == 0) {
    (**(code **)(*unaff_x21 + 0x628))();
    in_stack_00000028._4_2_ = *(ushort *)(unaff_x21 + 7);
    if (((in_stack_00000028._4_2_ & 0xff00) == 0xe00) && ((in_stack_00000028._4_2_ & 0xff) != 0)) {
      lVar5 = unaff_x21[8];
      if (*(int *)(*(long *)Method_System_Nullable<AxisAlignedBox_BoxSurface>__ctor__ + 0xe0) == 0)
      {
        thunk_FUN_01ee6d7c();
      }
      uVar2 = FUN_03532f80(0);
      uVar3 = FUN_0356a664(lVar5,0x1ff,uVar2,&stack0x00000018,0);
      if ((uVar3 & 1) != 0) {
        FUN_038f09fc();
        FUN_038d84c4();
        uVar3 = in_stack_00000018;
        lVar5 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x18);
        if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_01ecaf44();
        }
        lVar5 = FUN_01f08890(lVar5,uVar3 & 0xffffffff);
        *unaff_x19 = lVar5;
        thunk_FUN_01f51358();
        lVar5 = unaff_x21[0xb];
        uVar2 = **(undefined8 **)(unaff_x20 + 0x38);
        if (*(int *)(*unaff_x23 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar2 = FUN_03579868(uVar2,0);
        if (lVar5 == 0) goto LAB_023d8640;
        lVar5 = FUN_02b6b264(lVar5,uVar2,
                             *(undefined8 *)
                              Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<FocusEvent>__
                            );
        lVar7 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x20);
        if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_01ecaf44(lVar7);
        }
        if (lVar5 == 0) {
          if (0 < (long)in_stack_00000018) goto LAB_023d8640;
        }
        else {
          lVar4 = thunk_FUN_01f116d0(lVar5,lVar7);
          if (lVar4 == 0) goto LAB_023d81f0;
          if (0 < (long)in_stack_00000018) {
            lVar5 = 0;
            iVar6 = 1;
            do {
              lVar7 = *unaff_x19;
              uVar1 = (**(code **)(lVar4 + 0x18))
                                (*(undefined8 *)(lVar4 + 0x40),*(undefined8 *)(lVar4 + 0x28));
              if (lVar7 == 0) goto LAB_023d8640;
              if (*(uint *)(lVar7 + 0x18) <= iVar6 - 1U) goto LAB_023d8644;
              *(undefined2 *)(lVar7 + lVar5 * 2 + 0x20) = uVar1;
              lVar5 = (long)iVar6;
              lVar7 = (long)iVar6;
              iVar6 = iVar6 + 1;
            } while (lVar7 < (long)in_stack_00000018);
          }
        }
        (**(code **)(*unaff_x21 + 0x478))();
        goto LAB_023d8554;
      }
      lVar5 = FUN_038d7894();
      if ((lVar5 == 0) || (lVar5 = FUN_0390b368(lVar5,0), lVar5 == 0)) goto LAB_023d8640;
      lVar5 = FUN_0390b70c(lVar5,0);
      uVar2 = FUN_0340ebc0(*(undefined8 *)
                            Method_Unity_Collections_ConcurrentMask_TryAllocate<Long1024>__,
                           unaff_x21[8],
                           *(undefined8 *)
                            Method_Unity_Collections_ConcurrentMask_TryFree<Long1024>__,0);
    }
    else {
      lVar5 = FUN_038d7894();
      if ((lVar5 == 0) || (lVar5 = FUN_0390b368(lVar5,0), lVar5 == 0)) goto LAB_023d8640;
      lVar5 = FUN_0390b70c(lVar5,0);
      lVar7 = FUN_01f08890(*(undefined8 *)
                            Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__
                           ,5);
      if (lVar7 == 0) goto LAB_023d8640;
      if (*(int *)(lVar7 + 0x18) == 0) {
LAB_023d8644:
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      *(undefined8 *)(lVar7 + 0x20) =
           *(undefined8 *)Method_System_Runtime_Remoting_ConfigHandler_GetNotNull__;
      thunk_FUN_01f51358((undefined8 *)(lVar7 + 0x20));
      uVar2 = FUN_0359ff90();
      if (*(uint *)(lVar7 + 0x18) < 2) goto LAB_023d8644;
      *(undefined8 *)(lVar7 + 0x28) = uVar2;
      thunk_FUN_01f51358((undefined8 *)(lVar7 + 0x28),uVar2);
      if (*(uint *)(lVar7 + 0x18) < 3) goto LAB_023d8644;
      *(undefined8 *)(lVar7 + 0x30) =
           *(undefined8 *)Method_System_Runtime_Remoting_ConfigHandler_OnStartElement__;
      thunk_FUN_01f51358((undefined8 *)(lVar7 + 0x30));
      in_stack_00000028._4_2_ = *(ushort *)(unaff_x21 + 7);
      uVar2 = FUN_0332bb08((long)&stack0x00000028 + 4,
                           *(undefined8 *)
                            Method_UnityEngine_UIElements_ComputedTransitionUtils_GetWrappingTransitionData<TimeValue>__
                          );
      if (*(uint *)(lVar7 + 0x18) < 4) goto LAB_023d8644;
      *(undefined8 *)(lVar7 + 0x38) = uVar2;
      thunk_FUN_01f51358((undefined8 *)(lVar7 + 0x38),uVar2);
      if (*(uint *)(lVar7 + 0x18) < 5) goto LAB_023d8644;
      *(undefined8 *)(lVar7 + 0x40) =
           *(undefined8 *)Method_Unity_Collections_ConcurrentMask_TryFree<Long1024>__;
      thunk_FUN_01f51358();
      uVar2 = FUN_0340efe8(lVar7,0);
    }
    if (lVar5 == 0) {
LAB_023d8640:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    FUN_0390b840(lVar5,uVar2,0);
    (**(code **)(*unaff_x21 + 0x5e8))();
    lVar5 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x18);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01ecaf44();
    }
    lVar5 = FUN_01f08890(lVar5,0);
    *unaff_x19 = lVar5;
    thunk_FUN_01f51358();
    uVar2 = 0;
  }
  else {
    lVar5 = unaff_x21[8];
    if (*(int *)(*(long *)Method_Unity_Collections_ConcurrentMask_TryAllocate<Long1024>__ + 0xe0) ==
        0) {
      thunk_FUN_01ee6d7c();
    }
    lVar5 = FUN_0391b5b8(lVar5,0);
    lVar7 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x10);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_01ecaf44(lVar7);
    }
    if (lVar5 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01f116d0(lVar5,lVar7);
      if (lVar4 == 0) {
LAB_023d81f0:
                    /* WARNING: Subroutine does not return */
        FUN_01f08cfc(lVar5,lVar7);
      }
    }
    *unaff_x19 = lVar4;
    lVar7 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x10);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_01ecaf44(lVar7);
    }
    if ((lVar5 != 0) && (lVar4 = thunk_FUN_01f116d0(lVar5,lVar7), lVar4 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc(lVar5,lVar7);
    }
    thunk_FUN_01f51358();
LAB_023d8554:
    uVar2 = 1;
  }
  return uVar2;
}


