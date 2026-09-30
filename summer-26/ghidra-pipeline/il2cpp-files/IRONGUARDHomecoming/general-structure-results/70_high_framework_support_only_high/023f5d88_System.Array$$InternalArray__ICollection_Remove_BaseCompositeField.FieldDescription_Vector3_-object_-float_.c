/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Remove<BaseCompositeField.FieldDescription<Vector3,-object,-float>>
ENTRY_POINT: 023f5d88
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_10;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x023f6024) */

long System_Array__InternalArray__ICollection_Remove<BaseCompositeField_FieldDescription<Vector3,_object,_float>>
               (long *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *unaff_x20;
  long unaff_x21;
  undefined8 uVar9;
  
  if (*(int *)(*param_1 + 0xe0) == 0) {
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
  if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar5 = *unaff_x20;
  uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) ==
          *(long *)Method_System_Runtime_Remoting_ConfigHandler_ReadPreload__) {
        puVar2 = (undefined8 *)(lVar5 + (long)(*piVar8 + 8) * 0x10 + 0x138);
        goto LAB_023f5e20;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar2 = (undefined8 *)FUN_01ecb238();
LAB_023f5e20:
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
  if ((uVar7 & 1) == 0) {
    uVar9 = *(undefined8 *)(*(long *)(unaff_x21 + 0x38) + 0x20);
    if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar9 = FUN_03579868(uVar9,0);
    if (*(int *)(*(long *)Method_System_Runtime_Remoting_ConfigHandler_ReadClientActivated__ + 0xe0)
        == 0) {
      thunk_FUN_01ee6d7c();
    }
    plVar3 = (long *)FUN_0390bc14(uVar9,0);
    lVar5 = *(long *)(*(long *)(unaff_x21 + 0x38) + 8);
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
      lVar5 = (**(code **)(lVar6 + 0x178))(plVar3);
      lVar6 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x18);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_01ecaf44(lVar6);
      }
      if (lVar5 == 0) {
        lVar4 = 0;
      }
      else {
        lVar4 = thunk_FUN_01f116d0(lVar5,lVar6);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08cfc(lVar5,lVar6);
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
  lVar5 = *plVar1;
  uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) ==
          *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
        puVar2 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_023f5fe8;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar2 = (undefined8 *)
           FUN_01ecb238(plVar1,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_023f5fe8:
  (*(code *)*puVar2)(plVar1,puVar2[1]);
  return lVar4;
}


