/*
FUNCTION_NAME: FUN_02e18644
ENTRY_POINT: 02e18644
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_02e18644(long param_1,long param_2,long param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  
  puVar1 = Method_Unity_VisualScripting_BinaryOperatorHandler_Handle<byte,_short>__;
  if ((DAT_048317cc & 1) == 0) {
    thunk_FUN_01efb3a4(Method_UnityEngine_EventSystems_ExecuteEvents_Execute__);
    thunk_FUN_01efb3a4(Method_UnityEngine_EventSystems_ExecuteEvents_Execute__);
    thunk_FUN_01efb3a4(Method_UnityEngine_EventSystems_ExecuteEvents_Execute__);
    thunk_FUN_01efb3a4(Method_System_Threading_ExecutionContext_CreateCopy__);
    thunk_FUN_01efb3a4(Method_UnityEngine_EventSystems_ExecuteEvents_Execute__);
    thunk_FUN_01efb3a4(Method_System_Threading_ExecutionContext_GetObjectData__);
    thunk_FUN_01efb3a4(
                      Method_Unity_VisualScripting_StaticFunctionInvoker<Quaternion,_Quaternion,_bool>__ctor__
                      );
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_BinaryOperatorHandler_Handle<byte,_short>__);
    thunk_FUN_01efb3a4(Method_System_Threading_ExecutionContext_Run__);
    DAT_048317cc = 1;
  }
  uVar4 = thunk_FUN_01f117cc(*(undefined8 *)puVar1);
  FUN_035ac8e8(uVar4,0);
  *(undefined8 *)(param_1 + 0x28) = uVar4;
  thunk_FUN_01f51358((undefined8 *)(param_1 + 0x28),uVar4);
  FUN_034a3b8c(param_1,0);
  puVar2 = Method_System_Threading_ExecutionContext_GetObjectData__;
  puVar1 = Method_Unity_VisualScripting_StaticFunctionInvoker<Quaternion,_Quaternion,_bool>__ctor__;
  if (param_2 == 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar4 = thunk_FUN_01f117cc();
    uVar8 = thunk_FUN_01efb3a4(Method_UnityEngine_EventSystems_ExecuteEvents_Execute__);
    FUN_034efd20(uVar4,uVar8,0);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar4,param_4);
  }
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  *(long *)(param_1 + 0x10) = param_2;
  thunk_FUN_01f51358((long *)(param_1 + 0x10),param_2);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar4 = FUN_034d1098(param_2,0);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(*(long *)puVar2);
  }
  uVar4 = FUN_034c9d44(uVar4,0);
  *(undefined8 *)(param_1 + 0x18) = uVar4;
  thunk_FUN_01f51358();
  puVar1 = Method_UnityEngine_EventSystems_ExecuteEvents_Execute__;
  if (param_3 == 0) {
    if (*(int *)(*(long *)Method_UnityEngine_EventSystems_ExecuteEvents_Execute__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    if (DAT_048317e0 == '\0') {
      thunk_FUN_01efb3a4(Method_UnityEngine_EventSystems_ExecuteEvents_Execute__);
      DAT_048317e0 = '\x01';
    }
    lVar5 = *(long *)puVar1;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar5 = *(long *)puVar1;
    }
    param_3 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x10);
  }
  puVar1 = Method_UnityEngine_EventSystems_ExecuteEvents_Execute__;
  *(long *)(param_1 + 0x20) = param_3;
  thunk_FUN_01f51358((long *)(param_1 + 0x20),param_3);
  uVar4 = FUN_02e18bdc(param_1,*(undefined8 *)(param_1 + 0x18),0,
                       *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 8));
  *(undefined8 *)(param_1 + 0x38) = uVar4;
  uVar6 = FUN_035ad140(uVar4,0,0);
  if ((uVar6 & 1) != 0) {
    *(undefined1 *)(param_1 + 0x40) = 1;
  }
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x18);
  thunk_FUN_01f51358();
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  lVar9 = *(long *)Method_UnityEngine_EventSystems_ExecuteEvents_Execute__;
  lVar5 = *(long *)(lVar9 + 0x20);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_01ecaf44();
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_01ecaf44();
  }
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  lVar5 = *(long *)(lVar9 + 0x20);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_01ecaf44();
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_01ecaf44();
  }
  plVar7 = (long *)**(long **)(lVar5 + 0xb8);
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar4 = (**(code **)(*plVar7 + 0x178))(plVar7,0x1000,*(undefined8 *)(*plVar7 + 0x180));
  *(undefined8 *)(param_1 + 0x68) = uVar4;
  thunk_FUN_01f51358();
  if (*(int *)(*(long *)Method_System_Threading_ExecutionContext_Run__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  iVar3 = SystemNative_GetReadDirRBufferSize(0);
  if (iVar3 < 1) {
    uVar4 = 0;
  }
  else {
    if (*(int *)(*(long *)Method_System_Threading_ExecutionContext_CreateCopy__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    lVar9 = *(long *)Method_UnityEngine_EventSystems_ExecuteEvents_Execute__;
    lVar5 = *(long *)(lVar9 + 0x20);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01ecaf44();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01ecaf44();
    }
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    lVar5 = *(long *)(lVar9 + 0x20);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01ecaf44();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01ecaf44();
    }
    plVar7 = (long *)**(long **)(lVar5 + 0xb8);
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar4 = (**(code **)(*plVar7 + 0x178))(plVar7,iVar3,*(undefined8 *)(*plVar7 + 0x180));
  }
  *(undefined8 *)(param_1 + 0x70) = uVar4;
  thunk_FUN_01f51358();
  return;
}


