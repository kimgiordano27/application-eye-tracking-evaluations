/*
FUNCTION_NAME: FUN_02e199e8
ENTRY_POINT: 02e199e8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_02e199e8(long param_1,long param_2,long param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  
  puVar1 = Method_Unity_VisualScripting_BinaryOperatorHandler_Handle<byte,_short>__;
  if ((DAT_048317d4 & 1) == 0) {
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
    DAT_048317d4 = 1;
  }
  uVar4 = thunk_FUN_01f117cc(*(undefined8 *)puVar1);
  FUN_035ac8e8(uVar4,0);
  FUN_01bc5360(param_1,*(long *)(**(long **)(*(long *)(param_4 + 0x20) + 0xc0) + 0x80) + 0x60,uVar4)
  ;
  FUN_034a3b8c(param_1,0);
  puVar2 = Method_System_Threading_ExecutionContext_GetObjectData__;
  puVar1 = Method_Unity_VisualScripting_StaticFunctionInvoker<Quaternion,_Quaternion,_bool>__ctor__;
  if (param_2 == 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar4 = thunk_FUN_01f117cc();
    uVar9 = thunk_FUN_01efb3a4(Method_UnityEngine_EventSystems_ExecuteEvents_Execute__);
    FUN_034efd20(uVar4,uVar9,0);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar4,param_4);
  }
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  FUN_01bc5360(param_1,*(undefined8 *)(**(long **)(*(long *)(param_4 + 0x20) + 0xc0) + 0x80),param_2
              );
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar4 = FUN_034d1098(param_2,0);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(*(long *)puVar2);
  }
  uVar4 = FUN_034c9d44(uVar4,0);
  FUN_01bc5360(param_1,*(long *)(**(long **)(*(long *)(param_4 + 0x20) + 0xc0) + 0x80) + 0x20,uVar4)
  ;
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
  FUN_01bc5360(param_1,*(long *)(**(long **)(*(long *)(param_4 + 0x20) + 0xc0) + 0x80) + 0x40,
               param_3);
  puVar6 = (undefined8 *)
           thunk_FUN_01ee7388(param_1,*(long *)(**(long **)(*(long *)(param_4 + 0x20) + 0xc0) + 0x80
                                               ) + 0x20);
  uVar4 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 8))
                    (param_1,*puVar6,0);
  FUN_01bc5360(param_1,*(long *)(**(long **)(*(long *)(param_4 + 0x20) + 0xc0) + 0x80) + 0xa0,uVar4)
  ;
  puVar6 = (undefined8 *)
           thunk_FUN_01ee7388(param_1,*(long *)(**(long **)(*(long *)(param_4 + 0x20) + 0xc0) + 0x80
                                               ) + 0xa0);
  uVar7 = FUN_035ad140(*puVar6,0,0);
  if ((uVar7 & 1) != 0) {
    FUN_01bc5068(param_1,*(long *)(**(long **)(*(long *)(param_4 + 0x20) + 0xc0) + 0x80) + 0xc0,1);
  }
  puVar6 = (undefined8 *)
           thunk_FUN_01ee7388(param_1,*(long *)(**(long **)(*(long *)(param_4 + 0x20) + 0xc0) + 0x80
                                               ) + 0x20);
  FUN_01bc5360(param_1,*(long *)(**(long **)(*(long *)(param_4 + 0x20) + 0xc0) + 0x80) + 0x80,
               *puVar6);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  lVar10 = *(long *)Method_UnityEngine_EventSystems_ExecuteEvents_Execute__;
  lVar5 = *(long *)(lVar10 + 0x20);
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
  lVar5 = *(long *)(lVar10 + 0x20);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_01ecaf44();
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_01ecaf44();
  }
  plVar8 = (long *)**(long **)(lVar5 + 0xb8);
  if (plVar8 != (long *)0x0) {
    uVar4 = (**(code **)(*plVar8 + 0x178))(plVar8,0x1000,*(undefined8 *)(*plVar8 + 0x180));
    FUN_01bc5360(param_1,*(long *)(**(long **)(*(long *)(param_4 + 0x20) + 0xc0) + 0x80) + 0x140,
                 uVar4);
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
      lVar10 = *(long *)Method_UnityEngine_EventSystems_ExecuteEvents_Execute__;
      lVar5 = *(long *)(lVar10 + 0x20);
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
      lVar5 = *(long *)(lVar10 + 0x20);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_01ecaf44();
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_01ecaf44();
      }
      plVar8 = (long *)**(long **)(lVar5 + 0xb8);
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar4 = (**(code **)(*plVar8 + 0x178))(plVar8,iVar3,*(undefined8 *)(*plVar8 + 0x180));
    }
    FUN_01bc5360(param_1,*(long *)(**(long **)(*(long *)(param_4 + 0x20) + 0xc0) + 0x80) + 0x160,
                 uVar4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


