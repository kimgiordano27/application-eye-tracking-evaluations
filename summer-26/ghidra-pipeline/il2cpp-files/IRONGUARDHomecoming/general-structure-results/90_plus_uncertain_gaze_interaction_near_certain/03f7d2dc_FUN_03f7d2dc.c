/*
FUNCTION_NAME: FUN_03f7d2dc
ENTRY_POINT: 03f7d2dc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 174
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_21;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03f7d6bc) */

void FUN_03f7d2dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  int *piVar12;
  undefined8 local_70;
  undefined8 uStack_68;
  
  puVar1 = Method_System_DBNull_System_IConvertible_ToDecimal__;
  local_70 = param_2;
  uStack_68 = param_3;
  if ((DAT_0483b5fa & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<byte>_ToArray__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_System_Collections_Generic_Stack<Tween>_Clear__);
    thunk_FUN_01efb3a4(Method_System_Collections_Generic_Stack<Tween>_Pop__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__
                      );
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_BinaryOperatorHandler_Handle<double,_float>__);
    thunk_FUN_01efb3a4(Method_System_Linq_Enumerable_SequenceEqual<string>__);
    thunk_FUN_01efb3a4(
                      Method_Unity_VisualScripting_StaticFunctionInvoker<Vector2,_Vector2,_Vector2>__ctor__
                      );
    thunk_FUN_01efb3a4(Method_System_DBNull_System_IConvertible_ToDecimal__);
    DAT_0483b5fa = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  FUN_03f9cad4(&local_70,0);
  uVar7 = FUN_03f9e258(&local_70,0);
  if ((uVar7 & 1) == 0) {
    return;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  plVar8 = (long *)FUN_03f9e4a0(&local_70,0);
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar11 = *plVar8;
  uVar7 = (ulong)*(ushort *)(lVar11 + 0x12e);
  if (uVar7 != 0) {
    piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == *(long *)Method_System_Collections_Generic_Stack<Tween>_Clear__
         ) {
        puVar9 = (undefined8 *)(lVar11 + (long)*piVar12 * 0x10 + 0x138);
        goto LAB_03f7d43c;
      }
      uVar7 = uVar7 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar7 != 0);
  }
  puVar9 = (undefined8 *)
           FUN_01ecb238(plVar8,*(long *)Method_System_Collections_Generic_Stack<Tween>_Clear__,0);
LAB_03f7d43c:
  plVar8 = (long *)(*(code *)*puVar9)(plVar8,puVar9[1]);
  puVar6 = Method_System_Linq_Enumerable_SequenceEqual<string>__;
  puVar5 = Method_Unity_VisualScripting_BinaryOperatorHandler_Handle<double,_float>__;
  puVar4 = Method_Unity_VisualScripting_StaticFunctionInvoker<Vector2,_Vector2,_Vector2>__ctor__;
  puVar3 = Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__;
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  puVar1 = Method_Unity_Collections_NativeArray<byte>_ToArray__;
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar11 = *plVar8;
    uVar7 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar7 != 0) {
      piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
          puVar9 = (undefined8 *)(lVar11 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_03f7d4cc;
        }
        uVar7 = uVar7 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar7 != 0);
    }
    puVar9 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar2,0);
LAB_03f7d4cc:
    uVar7 = (*(code *)*puVar9)(plVar8,puVar9[1]);
    if ((uVar7 & 1) == 0) {
      if (plVar8 == (long *)0x0) {
        return;
      }
      lVar11 = *plVar8;
      uVar7 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar7 == 0) goto LAB_03f7d650;
      piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      break;
    }
    lVar11 = *plVar8;
    uVar7 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar7 != 0) {
      piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)Method_System_Collections_Generic_Stack<Tween>_Pop__
           ) {
          puVar9 = (undefined8 *)(lVar11 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_03f7d530;
        }
        uVar7 = uVar7 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar7 != 0);
    }
    puVar9 = (undefined8 *)
             FUN_01ecb238(plVar8,*(long *)Method_System_Collections_Generic_Stack<Tween>_Pop__,0);
LAB_03f7d530:
    uVar10 = (*(code *)*puVar9)(plVar8,puVar9[1]);
    lVar11 = FUN_01f08890(*(undefined8 *)puVar3,5);
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if (*(int *)(lVar11 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    *(undefined8 *)(lVar11 + 0x20) = *(undefined8 *)puVar4;
    thunk_FUN_01f51358();
    if (*(uint *)(lVar11 + 0x18) < 2) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    *(undefined8 *)(lVar11 + 0x28) = param_1;
    thunk_FUN_01f51358((undefined8 *)(lVar11 + 0x28),param_1);
    if (*(uint *)(lVar11 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    *(undefined8 *)(lVar11 + 0x30) = *(undefined8 *)puVar6;
    thunk_FUN_01f51358();
    if (*(uint *)(lVar11 + 0x18) < 4) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    *(undefined8 *)(lVar11 + 0x38) = uVar10;
    thunk_FUN_01f51358((undefined8 *)(lVar11 + 0x38),uVar10);
    if (*(uint *)(lVar11 + 0x18) < 5) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    *(undefined8 *)(lVar11 + 0x40) = *(undefined8 *)puVar5;
    thunk_FUN_01f51358();
    uVar10 = FUN_0340efe8(lVar11,0);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    FUN_0403f3d4(uVar10,param_4,0);
  } while( true );
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar12 = piVar12 + 4;
    if (uVar7 == 0) break;
    if (*(long *)(piVar12 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar9 = (undefined8 *)(lVar11 + (long)*piVar12 * 0x10 + 0x138);
      goto UnityEngine_Transform__get_localRotation;
    }
  }
LAB_03f7d650:
  puVar9 = (undefined8 *)
           FUN_01ecb238(plVar8,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
UnityEngine_Transform__get_localRotation:
  (*(code *)*puVar9)(plVar8,puVar9[1]);
  return;
}


