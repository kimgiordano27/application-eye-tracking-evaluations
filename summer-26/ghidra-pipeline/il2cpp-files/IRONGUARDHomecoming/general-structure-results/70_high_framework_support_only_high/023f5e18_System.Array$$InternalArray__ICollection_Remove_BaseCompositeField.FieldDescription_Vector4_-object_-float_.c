/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Remove<BaseCompositeField.FieldDescription<Vector4,-object,-float>>
ENTRY_POINT: 023f5e18
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_8;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x023f6024) */

long System_Array__InternalArray__ICollection_Remove<BaseCompositeField_FieldDescription<Vector4,_object,_float>>
               (long param_1)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  int in_w9;
  int *piVar7;
  long *unaff_x19;
  long unaff_x21;
  undefined8 uVar8;
  
  lVar1 = (**(code **)(param_1 + (long)in_w9 * 0x10 + 0x138))();
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  *(long *)(lVar1 + 0x50) = unaff_x19[3];
  thunk_FUN_01f51358();
  if (*(int *)(*(long *)Method_System_Runtime_Remoting_ConfigHandler_ReadChannel__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar2 = FUN_0394f2dc(0);
  if ((uVar2 & 1) == 0) {
    uVar8 = *(undefined8 *)(*(long *)(unaff_x21 + 0x38) + 0x20);
    if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar8 = FUN_03579868(uVar8,0);
    if (*(int *)(*(long *)Method_System_Runtime_Remoting_ConfigHandler_ReadClientActivated__ + 0xe0)
        == 0) {
      thunk_FUN_01ee6d7c();
    }
    plVar3 = (long *)FUN_0390bc14(uVar8,0);
    lVar1 = *(long *)(*(long *)(unaff_x21 + 0x38) + 8);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_01ecaf44();
    }
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar6 = *plVar3;
    if ((*(byte *)(lVar6 + 0x130) < *(byte *)(lVar1 + 0x130)) ||
       (*(long *)(*(long *)(lVar6 + 200) + (ulong)*(byte *)(lVar1 + 0x130) * 8 + -8) != lVar1)) {
      lVar1 = (**(code **)(lVar6 + 0x178))(plVar3);
      lVar6 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x18);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_01ecaf44(lVar6);
      }
      if (lVar1 == 0) {
        lVar4 = 0;
      }
      else {
        lVar4 = thunk_FUN_01f116d0(lVar1,lVar6);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08cfc(lVar1,lVar6);
        }
      }
    }
    else {
      lVar4 = (**(code **)(lVar6 + 0x198))(plVar3);
    }
  }
  else {
    if (*(int *)(*(long *)Method_System_Runtime_Remoting_ConfigHandler_ReadClientActivated__ + 0xe0)
        == 0) {
      thunk_FUN_01ee6d7c();
    }
    plVar3 = (long *)FUN_023f9e30(**(undefined8 **)(unaff_x21 + 0x38));
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar4 = (**(code **)(*plVar3 + 0x198))();
  }
  lVar1 = *unaff_x19;
  uVar2 = (ulong)*(ushort *)(lVar1 + 0x12e);
  if (uVar2 != 0) {
    piVar7 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) ==
          *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
        puVar5 = (undefined8 *)(lVar1 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_023f5fe8;
      }
      uVar2 = uVar2 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar2 != 0);
  }
  puVar5 = (undefined8 *)FUN_01ecb238();
LAB_023f5fe8:
  (*(code *)*puVar5)();
  return lVar4;
}


