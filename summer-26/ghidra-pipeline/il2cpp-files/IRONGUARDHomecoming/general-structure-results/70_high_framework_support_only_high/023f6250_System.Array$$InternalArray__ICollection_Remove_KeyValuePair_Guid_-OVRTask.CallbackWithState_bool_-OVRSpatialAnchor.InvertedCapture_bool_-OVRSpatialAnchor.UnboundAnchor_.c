/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Remove<KeyValuePair<Guid,-OVRTask.CallbackWithState<bool,-OVRSpatialAnchor.InvertedCapture<bool,-OVRSpatialAnchor.UnboundAnchor>>>>
ENTRY_POINT: 023f6250
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_6;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x023f64a4) */
/* WARNING: Removing unreachable block (ram,0x023f651c) */

void System_Array__InternalArray__ICollection_Remove<KeyValuePair<Guid,_OVRTask_CallbackWithState<bool,_OVRSpatialAnchor_InvertedCapture<bool,_OVRSpatialAnchor_UnboundAnchor>>>>
               (undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  void *pvVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  void *unaff_x19;
  long *unaff_x20;
  size_t unaff_x21;
  void *unaff_x22;
  void *unaff_x23;
  long *unaff_x24;
  long unaff_x25;
  undefined8 uVar8;
  long unaff_x27;
  long unaff_x29;
  
  FUN_03937bf8(param_1,param_2,0);
  if (unaff_x24 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar4 = *unaff_x24;
  uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) ==
          *(long *)Method_System_Runtime_Remoting_ConfigHandler_ReadPreload__) {
        puVar1 = (undefined8 *)(lVar4 + (long)(*piVar7 + 8) * 0x10 + 0x138);
        goto LAB_023f62b4;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar1 = (undefined8 *)FUN_01ecb238();
LAB_023f62b4:
  lVar4 = (*(code *)*puVar1)();
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  *(long *)(lVar4 + 0x50) = unaff_x20[3];
  thunk_FUN_01f51358();
  if (*(int *)(*(long *)Method_System_Runtime_Remoting_ConfigHandler_ReadChannel__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar6 = FUN_0394f2dc(0);
  pvVar3 = unaff_x22;
  if ((uVar6 & 1) == 0) {
    uVar8 = *(undefined8 *)(*(long *)(unaff_x25 + 0x38) + 0x20);
    if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar8 = FUN_03579868(uVar8,0);
    if (*(int *)(*(long *)Method_System_Runtime_Remoting_ConfigHandler_ReadClientActivated__ + 0xe0)
        == 0) {
      thunk_FUN_01ee6d7c();
    }
    plVar2 = (long *)FUN_0390bc14(uVar8,0);
    lVar4 = *(long *)(*(long *)(unaff_x25 + 0x38) + 8);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01ecaf44();
    }
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar5 = *plVar2;
    if ((*(byte *)(lVar5 + 0x130) < *(byte *)(lVar4 + 0x130)) ||
       (*(long *)(*(long *)(lVar5 + 200) + (ulong)*(byte *)(lVar4 + 0x130) * 8 + -8) != lVar4)) {
      uVar8 = (**(code **)(lVar5 + 0x178))(plVar2);
      lVar4 = *(long *)(*(long *)(unaff_x25 + 0x38) + 0x18);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_01ecaf44(lVar4);
      }
      pvVar3 = (void *)FUN_01f08934(uVar8,lVar4);
    }
    else {
      *(long **)(unaff_x29 + -0x18) = unaff_x24;
      *(void **)(unaff_x29 + -0x10) = unaff_x22;
      lVar4 = *(long *)(lVar5 + 0x1a0);
      (**(code **)(lVar4 + 0x10))(*(undefined8 *)(lVar4 + 8),lVar4,plVar2,unaff_x29 + -0x18);
    }
  }
  else {
    if (*(int *)(*(long *)Method_System_Runtime_Remoting_ConfigHandler_ReadClientActivated__ + 0xe0)
        == 0) {
      thunk_FUN_01ee6d7c();
    }
    plVar2 = (long *)(**(code **)**(undefined8 **)(unaff_x25 + 0x38))();
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar4 = *plVar2;
    *(long **)(unaff_x29 + -0x18) = unaff_x24;
    *(void **)(unaff_x29 + -0x10) = unaff_x22;
    lVar4 = *(long *)(lVar4 + 0x1a0);
    (**(code **)(lVar4 + 0x10))(*(undefined8 *)(lVar4 + 8),lVar4,plVar2,unaff_x29 + -0x18);
  }
  memcpy(unaff_x23,pvVar3,unaff_x21);
  lVar4 = *unaff_x20;
  uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) ==
          *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
        puVar1 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_023f648c;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar1 = (undefined8 *)FUN_01ecb238();
LAB_023f648c:
  (*(code *)*puVar1)();
  memcpy(unaff_x22,unaff_x23,unaff_x21);
  memcpy(unaff_x19,unaff_x22,unaff_x21);
  if (*(long *)(unaff_x27 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


