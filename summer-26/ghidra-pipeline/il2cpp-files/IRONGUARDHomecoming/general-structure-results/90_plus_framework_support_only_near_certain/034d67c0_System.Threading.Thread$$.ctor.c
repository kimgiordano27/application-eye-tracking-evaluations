/*
FUNCTION_NAME: System.Threading.Thread$$.ctor
ENTRY_POINT: 034d67c0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 172
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_6;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_interaction_sink;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x034d6b7c) */

void System_Threading_Thread___ctor(undefined8 param_1,int param_2)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  int *piVar12;
  long *unaff_x19;
  ulong unaff_x20;
  uint uVar13;
  long *unaff_x21;
  int iVar14;
  long *unaff_x25;
  long *unaff_x26;
  long *unaff_x27;
  undefined8 *unaff_x28;
  
  if (param_2 == 1) {
    puVar4 = (undefined8 *)__cxa_begin_catch(param_1);
    uVar5 = thunk_FUN_01efb3a4();
    uVar6 = thunk_FUN_01ef6ec0(uVar5,*(undefined8 *)*puVar4);
    if ((uVar6 & 1) == 0) {
      puVar8 = (undefined8 *)__cxa_allocate_exception(8);
      *puVar8 = *puVar4;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar8,&
                         PTR_Method_System_Collections_Generic_List<OVRSkeletonRenderer_CapsuleVisualization>_get_Count___042b3198
                  ,0);
    }
    __cxa_end_catch();
    do {
      lVar10 = *unaff_x21;
      uVar6 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar6 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *unaff_x25) {
            puVar4 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_034d66dc;
          }
          uVar6 = uVar6 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)FUN_01ecb238();
LAB_034d66dc:
      uVar6 = (*(code *)*puVar4)();
      if ((uVar6 & 1) == 0) {
        lVar10 = 0;
        iVar14 = 10;
        iVar2 = 10;
        goto joined_r0x034d6810;
      }
      lVar10 = *unaff_x21;
      uVar6 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar6 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *unaff_x26) {
            puVar4 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_034d6738;
          }
          uVar6 = uVar6 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)FUN_01ecb238();
LAB_034d6738:
      uVar5 = (*(code *)*puVar4)();
      if (*(int *)(*unaff_x27 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      FUN_034d51f0(uVar5);
      uVar6 = FUN_034d6ba8();
      if ((uVar6 & 1) == 0) {
        plVar3 = (long *)thunk_FUN_01f117cc(*unaff_x28);
        FUN_034d2a7c(plVar3,uVar5);
        if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar6 = (**(code **)(*plVar3 + 0x1d8))(plVar3,*(undefined8 *)(*plVar3 + 0x1e0));
        if ((uVar6 & 1) == 0) {
          System_Threading_SpinLock__ExitSlowPath(uVar5);
        }
        else {
          FUN_034d6518(plVar3,1,0);
        }
      }
    } while( true );
  }
  if (param_2 == 1) {
    plVar3 = (long *)__cxa_begin_catch(param_1);
    lVar10 = *plVar3;
    __cxa_end_catch();
    iVar14 = 0;
    iVar2 = 0;
joined_r0x034d6810:
    if (unaff_x21 != (long *)0x0) {
      lVar11 = *unaff_x21;
      uVar6 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar6 != 0) {
        piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar4 = (undefined8 *)(lVar11 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_034d6868;
          }
          uVar6 = uVar6 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)FUN_01ecb238();
LAB_034d6868:
      (*(code *)*puVar4)();
      iVar2 = iVar14;
    }
    if (lVar10 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01eed990(lVar10);
    }
    if ((iVar2 != 0) && (iVar2 != 10)) {
      return;
    }
  }
  else {
    if (unaff_x21 != (long *)0x0) {
      lVar10 = *unaff_x21;
      uVar6 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar6 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar4 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
            goto code_r0x034d6b14;
          }
          uVar6 = uVar6 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)FUN_01ecb238();
code_r0x034d6b14:
      (*(code *)*puVar4)();
    }
    if (param_2 != 1) {
                    /* WARNING: Subroutine does not return */
      FUN_01fbfd14(param_1);
    }
    puVar4 = (undefined8 *)__cxa_begin_catch(param_1);
    uVar5 = thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<AssetFileDeleteResult>_get_Data__);
    uVar6 = thunk_FUN_01ef6ec0(uVar5,*(undefined8 *)*puVar4);
    if ((uVar6 & 1) == 0) {
      puVar8 = (undefined8 *)__cxa_allocate_exception(8);
      *puVar8 = *puVar4;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar8,&
                         PTR_Method_System_Collections_Generic_List<OVRSkeletonRenderer_CapsuleVisualization>_get_Count___042b3198
                  ,0);
    }
    __cxa_end_catch();
  }
  uVar5 = (**(code **)(*unaff_x19 + 0x1b8))();
  puVar1 = Method_System_Threading_ExecutionContext_Run__;
  if (*(int *)(*(long *)Method_System_Threading_ExecutionContext_Run__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(*(long *)Method_System_Threading_ExecutionContext_Run__);
  }
  iVar2 = FUN_033f15f0(uVar5,0);
  if (-1 < iVar2) {
    return;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar5 = FUN_033f0bb8(0);
  uVar13 = (uint)uVar5;
  if ((int)uVar13 < 0x10020) {
    if (uVar13 == 0x10002) goto LAB_034d696c;
    uVar9 = 0x1f;
  }
  else {
    if (uVar13 == 0x1002d) {
      if ((unaff_x20 & 1) == 0) {
        return;
      }
      goto LAB_034d69dc;
    }
    if (uVar13 == 0x10048) goto LAB_034d696c;
    uVar9 = 0x42;
  }
  if (uVar13 == (uVar9 | 0x10000)) {
LAB_034d696c:
    FUN_01bc50c0();
    uVar5 = (**(code **)(*unaff_x19 + 0x1b8))();
    uVar7 = thunk_FUN_01efb3a4(Method_UnityEngine_Bindings_NativeHeaderAttribute__ctor__);
    uVar5 = FUN_033f0c40(uVar7,uVar5,0);
    thunk_FUN_01efb3a4(Method_Sirenix_Serialization_IDataReader_ReadPrimitiveArray<int>__);
    uVar7 = thunk_FUN_01f117cc();
    FUN_034c6a10(uVar7,uVar5,0);
    uVar5 = thunk_FUN_01efb3a4(
                              Method_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_SizeOf<CommandBuilder_LineData>__
                              );
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar7,uVar5);
  }
LAB_034d69dc:
  FUN_01bc50c0();
  uVar7 = (**(code **)(*unaff_x19 + 0x1b8))();
  uVar5 = FUN_033f0654(uVar5,uVar7,1,0);
  uVar7 = thunk_FUN_01efb3a4(
                            Method_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_SizeOf<CommandBuilder_LineData>__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar5,uVar7);
}


