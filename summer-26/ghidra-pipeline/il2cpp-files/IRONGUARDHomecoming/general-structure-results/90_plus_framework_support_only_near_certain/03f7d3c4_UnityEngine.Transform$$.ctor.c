/*
FUNCTION_NAME: UnityEngine.Transform$$.ctor
ENTRY_POINT: 03f7d3c4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 91
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_13;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x03f7d6bc) */

void UnityEngine_Transform___ctor(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long *unaff_x19;
  undefined8 unaff_x21;
  
  if (*(int *)(*unaff_x19 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  plVar7 = (long *)FUN_03f9e4a0();
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar10 = *plVar7;
  uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == *(long *)Method_System_Collections_Generic_Stack<Tween>_Clear__
         ) {
        puVar8 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
        goto LAB_03f7d43c;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  puVar8 = (undefined8 *)
           FUN_01ecb238(plVar7,*(long *)Method_System_Collections_Generic_Stack<Tween>_Clear__,0);
LAB_03f7d43c:
  plVar7 = (long *)(*(code *)*puVar8)(plVar7,puVar8[1]);
  puVar6 = Method_System_Linq_Enumerable_SequenceEqual<string>__;
  puVar5 = Method_Unity_VisualScripting_BinaryOperatorHandler_Handle<double,_float>__;
  puVar4 = Method_Unity_VisualScripting_StaticFunctionInvoker<Vector2,_Vector2,_Vector2>__ctor__;
  puVar3 = Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__;
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  puVar1 = Method_Unity_Collections_NativeArray<byte>_ToArray__;
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar10 = *plVar7;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
          puVar8 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_03f7d4cc;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar8 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar2,0);
LAB_03f7d4cc:
    uVar11 = (*(code *)*puVar8)(plVar7,puVar8[1]);
    if ((uVar11 & 1) == 0) {
      if (plVar7 == (long *)0x0) {
        return;
      }
      lVar10 = *plVar7;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 == 0) goto LAB_03f7d650;
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      break;
    }
    lVar10 = *plVar7;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)Method_System_Collections_Generic_Stack<Tween>_Pop__
           ) {
          puVar8 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_03f7d530;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar8 = (undefined8 *)
             FUN_01ecb238(plVar7,*(long *)Method_System_Collections_Generic_Stack<Tween>_Pop__,0);
LAB_03f7d530:
    uVar9 = (*(code *)*puVar8)(plVar7,puVar8[1]);
    lVar10 = FUN_01f08890(*(undefined8 *)puVar3,5);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if (*(int *)(lVar10 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    *(undefined8 *)(lVar10 + 0x20) = *(undefined8 *)puVar4;
    thunk_FUN_01f51358();
    if (*(uint *)(lVar10 + 0x18) < 2) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    *(undefined8 *)(lVar10 + 0x28) = unaff_x21;
    thunk_FUN_01f51358();
    if (*(uint *)(lVar10 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    *(undefined8 *)(lVar10 + 0x30) = *(undefined8 *)puVar6;
    thunk_FUN_01f51358();
    if (*(uint *)(lVar10 + 0x18) < 4) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    *(undefined8 *)(lVar10 + 0x38) = uVar9;
    thunk_FUN_01f51358((undefined8 *)(lVar10 + 0x38),uVar9);
    if (*(uint *)(lVar10 + 0x18) < 5) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    *(undefined8 *)(lVar10 + 0x40) = *(undefined8 *)puVar5;
    thunk_FUN_01f51358();
    uVar9 = FUN_0340efe8(lVar10,0);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    FUN_0403f3d4(uVar9);
  } while( true );
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar12 = piVar12 + 4;
    if (uVar11 == 0) break;
    if (*(long *)(piVar12 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar8 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
      goto UnityEngine_Transform__get_localRotation;
    }
  }
LAB_03f7d650:
  puVar8 = (undefined8 *)
           FUN_01ecb238(plVar7,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
UnityEngine_Transform__get_localRotation:
  (*(code *)*puVar8)(plVar7,puVar8[1]);
  return;
}


