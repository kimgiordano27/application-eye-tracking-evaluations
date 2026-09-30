/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Remove<BaseCompositeField.FieldDescription<Vector3Int,-object,-int>>
ENTRY_POINT: 023f5dd0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_6;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x023f6024) */

long System_Array__InternalArray__ICollection_Remove<BaseCompositeField_FieldDescription<Vector3Int,_object,_int>>
               (long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long in_x10;
  int *piVar7;
  long *unaff_x19;
  long unaff_x21;
  undefined8 uVar8;
  
  uVar6 = (ulong)*(ushort *)(param_1 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == **(long **)(in_x10 + 0x7c8)) {
        puVar1 = (undefined8 *)(param_1 + (long)(*piVar7 + 8) * 0x10 + 0x138);
        goto LAB_023f5e20;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar1 = (undefined8 *)FUN_01ecb238();
LAB_023f5e20:
  lVar2 = (*(code *)*puVar1)();
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  *(long *)(lVar2 + 0x50) = unaff_x19[3];
  thunk_FUN_01f51358();
  if (*(int *)(*(long *)Method_System_Runtime_Remoting_ConfigHandler_ReadChannel__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar6 = FUN_0394f2dc(0);
  if ((uVar6 & 1) == 0) {
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
    lVar2 = *(long *)(*(long *)(unaff_x21 + 0x38) + 8);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01ecaf44();
    }
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar5 = *plVar3;
    if ((*(byte *)(lVar5 + 0x130) < *(byte *)(lVar2 + 0x130)) ||
       (*(long *)(*(long *)(lVar5 + 200) + (ulong)*(byte *)(lVar2 + 0x130) * 8 + -8) != lVar2)) {
      lVar2 = (**(code **)(lVar5 + 0x178))(plVar3);
      lVar5 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x18);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_01ecaf44(lVar5);
      }
      if (lVar2 == 0) {
        lVar4 = 0;
      }
      else {
        lVar4 = thunk_FUN_01f116d0(lVar2,lVar5);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08cfc(lVar2,lVar5);
        }
      }
    }
    else {
      lVar4 = (**(code **)(lVar5 + 0x198))(plVar3);
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
  lVar2 = *unaff_x19;
  uVar6 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) ==
          *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
        puVar1 = (undefined8 *)(lVar2 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_023f5fe8;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar1 = (undefined8 *)FUN_01ecb238();
LAB_023f5fe8:
  (*(code *)*puVar1)();
  return lVar4;
}


