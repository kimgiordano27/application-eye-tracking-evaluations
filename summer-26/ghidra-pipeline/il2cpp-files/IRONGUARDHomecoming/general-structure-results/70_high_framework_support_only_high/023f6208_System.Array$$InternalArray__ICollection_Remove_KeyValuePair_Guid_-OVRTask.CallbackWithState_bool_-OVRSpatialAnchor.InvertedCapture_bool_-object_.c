/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Remove<KeyValuePair<Guid,-OVRTask.CallbackWithState<bool,-OVRSpatialAnchor.InvertedCapture<bool,-object>>>>
ENTRY_POINT: 023f6208
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_8;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x023f64a4) */
/* WARNING: Removing unreachable block (ram,0x023f651c) */

void System_Array__InternalArray__ICollection_Remove<KeyValuePair<Guid,_OVRTask_CallbackWithState<bool,_OVRSpatialAnchor_InvertedCapture<bool,_object>>>>
               (void *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  void *pvVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  void *unaff_x19;
  size_t unaff_x21;
  void *unaff_x22;
  void *unaff_x23;
  long *unaff_x24;
  long unaff_x25;
  undefined8 uVar9;
  long unaff_x27;
  long unaff_x29;
  
  memset(param_1,0,unaff_x21);
  if (*(int *)(*(long *)Method_System_Runtime_Remoting_ConfigHandler_ReadLifetine__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  plVar1 = (long *)FUN_029da4a8(*(undefined8 *)
                                 Method_System_Runtime_Remoting_ConfigHandler_ReadInteropXml__);
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  if (plVar1[3] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  FUN_03937bf8();
  if (unaff_x24 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar5 = *unaff_x24;
  uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) ==
          *(long *)Method_System_Runtime_Remoting_ConfigHandler_ReadPreload__) {
        puVar2 = (undefined8 *)(lVar5 + (long)(*piVar8 + 8) * 0x10 + 0x138);
        goto LAB_023f62b4;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar2 = (undefined8 *)FUN_01ecb238();
LAB_023f62b4:
  lVar5 = (*(code *)*puVar2)();
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  *(long *)(lVar5 + 0x50) = plVar1[3];
  thunk_FUN_01f51358();
  if (*(int *)(*(long *)Method_System_Runtime_Remoting_ConfigHandler_ReadChannel__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar7 = FUN_0394f2dc(0);
  pvVar4 = unaff_x22;
  if ((uVar7 & 1) == 0) {
    uVar9 = *(undefined8 *)(*(long *)(unaff_x25 + 0x38) + 0x20);
    if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar9 = FUN_03579868(uVar9,0);
    if (*(int *)(*(long *)Method_System_Runtime_Remoting_ConfigHandler_ReadClientActivated__ + 0xe0)
        == 0) {
      thunk_FUN_01ee6d7c();
    }
    plVar3 = (long *)FUN_0390bc14(uVar9,0);
    lVar5 = *(long *)(*(long *)(unaff_x25 + 0x38) + 8);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01ecaf44();
    }
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar6 = *plVar3;
    if ((*(byte *)(lVar6 + 0x130) < *(byte *)(lVar5 + 0x130)) ||
       (*(long *)(*(long *)(lVar6 + 200) + (ulong)*(byte *)(lVar5 + 0x130) * 8 + -8) != lVar5)) {
      uVar9 = (**(code **)(lVar6 + 0x178))(plVar3);
      lVar5 = *(long *)(*(long *)(unaff_x25 + 0x38) + 0x18);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_01ecaf44(lVar5);
      }
      pvVar4 = (void *)FUN_01f08934(uVar9,lVar5);
    }
    else {
      *(long **)(unaff_x29 + -0x18) = unaff_x24;
      *(void **)(unaff_x29 + -0x10) = unaff_x22;
      lVar5 = *(long *)(lVar6 + 0x1a0);
      (**(code **)(lVar5 + 0x10))(*(undefined8 *)(lVar5 + 8),lVar5,plVar3,unaff_x29 + -0x18);
    }
  }
  else {
    if (*(int *)(*(long *)Method_System_Runtime_Remoting_ConfigHandler_ReadClientActivated__ + 0xe0)
        == 0) {
      thunk_FUN_01ee6d7c();
    }
    plVar3 = (long *)(**(code **)**(undefined8 **)(unaff_x25 + 0x38))();
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar5 = *plVar3;
    *(long **)(unaff_x29 + -0x18) = unaff_x24;
    *(void **)(unaff_x29 + -0x10) = unaff_x22;
    lVar5 = *(long *)(lVar5 + 0x1a0);
    (**(code **)(lVar5 + 0x10))(*(undefined8 *)(lVar5 + 8),lVar5,plVar3,unaff_x29 + -0x18);
  }
  memcpy(unaff_x23,pvVar4,unaff_x21);
  lVar5 = *plVar1;
  uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) ==
          *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
        puVar2 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_023f648c;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar2 = (undefined8 *)
           FUN_01ecb238(plVar1,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_023f648c:
  (*(code *)*puVar2)(plVar1,puVar2[1]);
  memcpy(unaff_x22,unaff_x23,unaff_x21);
  memcpy(unaff_x19,unaff_x22,unaff_x21);
  if (*(long *)(unaff_x27 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


