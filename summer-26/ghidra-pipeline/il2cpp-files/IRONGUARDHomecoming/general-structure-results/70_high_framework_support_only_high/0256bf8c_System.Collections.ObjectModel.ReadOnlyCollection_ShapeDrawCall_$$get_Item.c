/*
FUNCTION_NAME: System.Collections.ObjectModel.ReadOnlyCollection<ShapeDrawCall>$$get_Item
ENTRY_POINT: 0256bf8c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 80
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 System_Collections_ObjectModel_ReadOnlyCollection<ShapeDrawCall>__get_Item(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *unaff_x19;
  long *plVar7;
  long in_stack_00000020;
  long in_stack_00000028;
  
  lVar3 = *unaff_x19;
  uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == param_1) {
        puVar1 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_0256c010;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar1 = (undefined8 *)FUN_01ecb238();
LAB_0256c010:
  uVar2 = (*(code *)*puVar1)();
  *(undefined8 *)(in_stack_00000028 + 0x48) = uVar2;
  thunk_FUN_01f51358();
  plVar7 = *(long **)(in_stack_00000028 + 0x48);
  *(undefined4 *)(in_stack_00000028 + 0x10) = 0xfffffffc;
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar3 = *plVar7;
  uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) ==
          *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__) {
        puVar1 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_0256c094;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar1 = (undefined8 *)
           FUN_01ecb238(plVar7,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                        ,0);
LAB_0256c094:
  uVar5 = (*(code *)*puVar1)(plVar7,puVar1[1]);
  if ((uVar5 & 1) == 0) {
    FUN_0256c2d0();
    *(undefined8 *)(in_stack_00000028 + 0x48) = 0;
    thunk_FUN_01f51358((undefined8 *)(in_stack_00000028 + 0x48),0);
    uVar2 = 0;
  }
  else {
    plVar7 = *(long **)(in_stack_00000028 + 0x48);
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar3 = *(long *)(*(long *)(*(long *)(in_stack_00000020 + 0x20) + 0xc0) + 0x28);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01ecaf44(lVar3);
    }
    lVar4 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar3) {
          puVar1 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_0256c13c;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar1 = (undefined8 *)FUN_01ecb238(plVar7,lVar3,0);
LAB_0256c13c:
    uVar2 = (*(code *)*puVar1)(plVar7,puVar1[1]);
    *(undefined8 *)(in_stack_00000028 + 0x18) = uVar2;
    thunk_FUN_01f51358();
    uVar2 = 1;
    *(undefined4 *)(in_stack_00000028 + 0x10) = 2;
  }
  return uVar2;
}


