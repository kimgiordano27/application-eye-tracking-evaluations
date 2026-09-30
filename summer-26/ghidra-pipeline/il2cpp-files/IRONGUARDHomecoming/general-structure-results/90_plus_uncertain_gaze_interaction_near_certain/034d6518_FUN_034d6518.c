/*
FUNCTION_NAME: FUN_034d6518
ENTRY_POINT: 034d6518
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 174
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_16;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x034d6944) */

void FUN_034d6518(long *param_1,ulong param_2,ulong param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined8 uVar11;
  uint uVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  
  if ((DAT_04832d5a & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_LowLevel_Unsafe_UnsafeAppendBuffer_Add<int>__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_System_Collections_Generic_Stack<Tween>_Clear__);
    thunk_FUN_01efb3a4(Method_System_Collections_Generic_Stack<Tween>_Pop__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(
                      Method_Unity_VisualScripting_StaticFunctionInvoker<Quaternion,_Quaternion,_bool>__ctor__
                      );
    thunk_FUN_01efb3a4(Method_System_Threading_ExecutionContext_Run__);
    DAT_04832d5a = 1;
  }
  if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar5 = FUN_034d5380(param_1);
  if ((uVar5 >> 10 & 1) != 0) {
    (**(code **)(*param_1 + 0x1b8))(param_1,*(undefined8 *)(*param_1 + 0x1c0));
    System_Threading_SpinLock__ExitSlowPath();
    return;
  }
  if ((param_2 & 1) != 0) {
    (**(code **)(*param_1 + 0x1b8))(param_1,*(undefined8 *)(*param_1 + 0x1c0));
    plVar7 = (long *)FUN_034d2618();
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar13 = *plVar7;
    uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) ==
            *(long *)Method_System_Collections_Generic_Stack<Tween>_Clear__) {
          puVar8 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_034d6654;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar8 = (undefined8 *)
             FUN_01ecb238(plVar7,*(long *)Method_System_Collections_Generic_Stack<Tween>_Clear__,0);
LAB_034d6654:
    plVar7 = (long *)(*(code *)*puVar8)(plVar7,puVar8[1]);
    puVar4 = Method_Unity_Collections_LowLevel_Unsafe_UnsafeAppendBuffer_Add<int>__;
    puVar3 = 
    Method_Unity_VisualScripting_StaticFunctionInvoker<Quaternion,_Quaternion,_bool>__ctor__;
    puVar2 = Method_System_Collections_Generic_Stack<Tween>_Pop__;
    puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    do {
      lVar13 = *plVar7;
      uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)puVar1) {
            puVar8 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_034d66dc;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar8 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar1,0);
LAB_034d66dc:
      uVar14 = (*(code *)*puVar8)(plVar7,puVar8[1]);
      if ((uVar14 & 1) == 0) {
        if (plVar7 == (long *)0x0) break;
        lVar13 = *plVar7;
        uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar14 == 0) goto LAB_034d684c;
        piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        goto LAB_034d6834;
      }
      lVar13 = *plVar7;
      uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
            puVar8 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_034d6738;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar8 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar2,0);
LAB_034d6738:
      uVar9 = (*(code *)*puVar8)(plVar7,puVar8[1]);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      FUN_034d51f0(uVar9);
      uVar14 = FUN_034d6ba8();
      if ((uVar14 & 1) == 0) {
        plVar10 = (long *)thunk_FUN_01f117cc(*(undefined8 *)puVar4);
        FUN_034d2a7c(plVar10,uVar9);
        if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar14 = (**(code **)(*plVar10 + 0x1d8))(plVar10,*(undefined8 *)(*plVar10 + 0x1e0));
        if ((uVar14 & 1) == 0) {
          System_Threading_SpinLock__ExitSlowPath(uVar9);
        }
        else {
          FUN_034d6518(plVar10,1,0);
        }
      }
    } while( true );
  }
  goto LAB_034d6884;
  while( true ) {
    uVar14 = uVar14 - 1;
    piVar15 = piVar15 + 4;
    if (uVar14 == 0) break;
LAB_034d6834:
    if (*(long *)(piVar15 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar8 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_034d6868;
    }
  }
LAB_034d684c:
  puVar8 = (undefined8 *)
           FUN_01ecb238(plVar7,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_034d6868:
  (*(code *)*puVar8)(plVar7,puVar8[1]);
LAB_034d6884:
  uVar9 = (**(code **)(*param_1 + 0x1b8))(param_1,*(undefined8 *)(*param_1 + 0x1c0));
  puVar1 = Method_System_Threading_ExecutionContext_Run__;
  if (*(int *)(*(long *)Method_System_Threading_ExecutionContext_Run__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(*(long *)Method_System_Threading_ExecutionContext_Run__);
  }
  iVar6 = FUN_033f15f0(uVar9,0);
  if (-1 < iVar6) {
    return;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar9 = FUN_033f0bb8(0);
  uVar5 = (uint)uVar9;
  if ((int)uVar5 < 0x10020) {
    if (uVar5 == 0x10002) goto LAB_034d696c;
    uVar12 = 0x1f;
  }
  else {
    if (uVar5 == 0x1002d) {
      if ((param_3 & 1) == 0) {
        return;
      }
      goto LAB_034d69dc;
    }
    if (uVar5 == 0x10048) goto LAB_034d696c;
    uVar12 = 0x42;
  }
  if (uVar5 == (uVar12 | 0x10000)) {
LAB_034d696c:
    FUN_01bc50c0(param_1);
    uVar9 = (**(code **)(*param_1 + 0x1b8))(param_1,*(undefined8 *)(*param_1 + 0x1c0));
    uVar11 = thunk_FUN_01efb3a4(Method_UnityEngine_Bindings_NativeHeaderAttribute__ctor__);
    uVar9 = FUN_033f0c40(uVar11,uVar9,0);
    thunk_FUN_01efb3a4(Method_Sirenix_Serialization_IDataReader_ReadPrimitiveArray<int>__);
    uVar11 = thunk_FUN_01f117cc();
    FUN_034c6a10(uVar11,uVar9,0);
    uVar9 = thunk_FUN_01efb3a4(
                              Method_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_SizeOf<CommandBuilder_LineData>__
                              );
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar11,uVar9);
  }
LAB_034d69dc:
  FUN_01bc50c0(param_1);
  uVar11 = (**(code **)(*param_1 + 0x1b8))(param_1,*(undefined8 *)(*param_1 + 0x1c0));
  uVar9 = FUN_033f0654(uVar9,uVar11,1,0);
  uVar11 = thunk_FUN_01efb3a4(
                             Method_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_SizeOf<CommandBuilder_LineData>__
                             );
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar9,uVar11);
}


