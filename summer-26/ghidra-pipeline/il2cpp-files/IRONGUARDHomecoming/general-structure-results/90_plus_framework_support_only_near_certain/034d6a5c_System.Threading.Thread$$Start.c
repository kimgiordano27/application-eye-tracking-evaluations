/*
FUNCTION_NAME: System.Threading.Thread$$Start
ENTRY_POINT: 034d6a5c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 121
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior;ordered_structure
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_6;frame_or_lifecycle_behavior;ordered_eye_source_validity_pose_interaction_sink;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x034d687c) */
/* WARNING: Removing unreachable block (ram,0x034d6b7c) */

void System_Threading_Thread__Start(void)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 *puVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long *unaff_x19;
  ulong unaff_x20;
  uint uVar12;
  long *unaff_x21;
  long lVar13;
  int unaff_w24;
  
  if (unaff_w24 == 1) {
    plVar6 = (long *)__cxa_begin_catch();
    lVar13 = *plVar6;
    __cxa_end_catch();
    if (unaff_x21 != (long *)0x0) {
      lVar9 = *unaff_x21;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar3 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_034d6868;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar3 = (undefined8 *)FUN_01ecb238();
LAB_034d6868:
      (*(code *)*puVar3)();
    }
    if (lVar13 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01eed990(lVar13);
    }
  }
  else {
    if (unaff_x21 != (long *)0x0) {
      lVar13 = *unaff_x21;
      uVar10 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar3 = (undefined8 *)(lVar13 + (long)*piVar11 * 0x10 + 0x138);
            goto code_r0x034d6b14;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar3 = (undefined8 *)FUN_01ecb238();
code_r0x034d6b14:
      (*(code *)*puVar3)();
    }
    if (unaff_w24 != 1) {
                    /* WARNING: Subroutine does not return */
      FUN_01fbfd14();
    }
    puVar3 = (undefined8 *)__cxa_begin_catch();
    uVar4 = thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<AssetFileDeleteResult>_get_Data__);
    uVar10 = thunk_FUN_01ef6ec0(uVar4,*(undefined8 *)*puVar3);
    if ((uVar10 & 1) == 0) {
      puVar7 = (undefined8 *)__cxa_allocate_exception(8);
      *puVar7 = *puVar3;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar7,&
                         PTR_Method_System_Collections_Generic_List<OVRSkeletonRenderer_CapsuleVisualization>_get_Count___042b3198
                  ,0);
    }
    __cxa_end_catch();
  }
  uVar4 = (**(code **)(*unaff_x19 + 0x1b8))();
  puVar1 = Method_System_Threading_ExecutionContext_Run__;
  if (*(int *)(*(long *)Method_System_Threading_ExecutionContext_Run__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(*(long *)Method_System_Threading_ExecutionContext_Run__);
  }
  iVar2 = FUN_033f15f0(uVar4,0);
  if (-1 < iVar2) {
    return;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar4 = FUN_033f0bb8(0);
  uVar12 = (uint)uVar4;
  if ((int)uVar12 < 0x10020) {
    if (uVar12 == 0x10002) goto LAB_034d696c;
    uVar8 = 0x1f;
  }
  else {
    if (uVar12 == 0x1002d) {
      if ((unaff_x20 & 1) == 0) {
        return;
      }
      goto LAB_034d69dc;
    }
    if (uVar12 == 0x10048) goto LAB_034d696c;
    uVar8 = 0x42;
  }
  if (uVar12 == (uVar8 | 0x10000)) {
LAB_034d696c:
    FUN_01bc50c0();
    uVar4 = (**(code **)(*unaff_x19 + 0x1b8))();
    uVar5 = thunk_FUN_01efb3a4(Method_UnityEngine_Bindings_NativeHeaderAttribute__ctor__);
    uVar4 = FUN_033f0c40(uVar5,uVar4,0);
    thunk_FUN_01efb3a4(Method_Sirenix_Serialization_IDataReader_ReadPrimitiveArray<int>__);
    uVar5 = thunk_FUN_01f117cc();
    FUN_034c6a10(uVar5,uVar4,0);
    uVar4 = thunk_FUN_01efb3a4(
                              Method_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_SizeOf<CommandBuilder_LineData>__
                              );
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar5,uVar4);
  }
LAB_034d69dc:
  FUN_01bc50c0();
  uVar5 = (**(code **)(*unaff_x19 + 0x1b8))();
  uVar4 = FUN_033f0654(uVar4,uVar5,1,0);
  uVar5 = thunk_FUN_01efb3a4(
                            Method_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_SizeOf<CommandBuilder_LineData>__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar4,uVar5);
}


