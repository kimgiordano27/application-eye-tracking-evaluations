/*
FUNCTION_NAME: System.Threading.ThreadHelper$$.cctor
ENTRY_POINT: 034d6724
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x034d6944) */

void System_Threading_ThreadHelper___cctor(void)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 uVar7;
  uint uVar8;
  long lVar9;
  int *piVar10;
  long *unaff_x19;
  ulong unaff_x20;
  uint uVar11;
  long *unaff_x21;
  long *unaff_x25;
  long *unaff_x26;
  long *unaff_x27;
  undefined8 *unaff_x28;
  
code_r0x034d6724:
  puVar3 = (undefined8 *)FUN_01ecb238();
  do {
    uVar4 = (*(code *)*puVar3)();
    if (*(int *)(*unaff_x27 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    FUN_034d51f0(uVar4);
    uVar5 = FUN_034d6ba8();
    if ((uVar5 & 1) == 0) {
      plVar6 = (long *)thunk_FUN_01f117cc(*unaff_x28);
      FUN_034d2a7c(plVar6,uVar4);
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
                    /* try { // try from 034d6780 to 035d6787 has its CatchHandler @ 034d7478 */
      uVar5 = (**(code **)(*plVar6 + 0x1d8))(plVar6,*(undefined8 *)(*plVar6 + 0x1e0));
                    /* try { // try from 034d6790 to 035d6797 has its CatchHandler @ 034d7458 */
      if ((uVar5 & 1) == 0) {
        System_Threading_SpinLock__ExitSlowPath(uVar4);
      }
      else {
                    /* try { // try from 034d6798 to 035d693b has its CatchHandler @ 034d5824 */
        FUN_034d6518(plVar6,1,0);
      }
    }
    lVar9 = *unaff_x21;
    uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar5 != 0) {
      piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *unaff_x25) {
          puVar3 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_034d66dc;
        }
        uVar5 = uVar5 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238();
LAB_034d66dc:
    uVar5 = (*(code *)*puVar3)();
    if ((uVar5 & 1) == 0) {
      if (unaff_x21 == (long *)0x0) goto LAB_034d6874;
      lVar9 = *unaff_x21;
      uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar5 == 0) goto LAB_034d684c;
      piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      break;
    }
    lVar9 = *unaff_x21;
    uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar5 == 0) goto code_r0x034d6724;
    piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    while (*(long *)(piVar10 + -2) != *unaff_x26) {
      uVar5 = uVar5 - 1;
      piVar10 = piVar10 + 4;
      if (uVar5 == 0) goto code_r0x034d6724;
    }
    puVar3 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
  } while( true );
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar10 = piVar10 + 4;
    if (uVar5 == 0) break;
    if (*(long *)(piVar10 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar3 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_034d6868;
    }
  }
LAB_034d684c:
  puVar3 = (undefined8 *)FUN_01ecb238();
LAB_034d6868:
  (*(code *)*puVar3)();
LAB_034d6874:
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
  uVar11 = (uint)uVar4;
  if ((int)uVar11 < 0x10020) {
    if (uVar11 == 0x10002) goto LAB_034d696c;
    uVar8 = 0x1f;
  }
  else {
    if (uVar11 == 0x1002d) {
      if ((unaff_x20 & 1) == 0) {
        return;
      }
      goto LAB_034d69dc;
    }
    if (uVar11 == 0x10048) goto LAB_034d696c;
    uVar8 = 0x42;
  }
  if (uVar11 == (uVar8 | 0x10000)) {
LAB_034d696c:
    FUN_01bc50c0();
    uVar4 = (**(code **)(*unaff_x19 + 0x1b8))();
    uVar7 = thunk_FUN_01efb3a4(Method_UnityEngine_Bindings_NativeHeaderAttribute__ctor__);
    uVar4 = FUN_033f0c40(uVar7,uVar4,0);
    thunk_FUN_01efb3a4(Method_Sirenix_Serialization_IDataReader_ReadPrimitiveArray<int>__);
    uVar7 = thunk_FUN_01f117cc();
    FUN_034c6a10(uVar7,uVar4,0);
    uVar4 = thunk_FUN_01efb3a4(
                              Method_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_SizeOf<CommandBuilder_LineData>__
                              );
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar7,uVar4);
  }
LAB_034d69dc:
  FUN_01bc50c0();
  uVar7 = (**(code **)(*unaff_x19 + 0x1b8))();
  uVar4 = FUN_033f0654(uVar4,uVar7,1,0);
  uVar7 = thunk_FUN_01efb3a4(
                            Method_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_SizeOf<CommandBuilder_LineData>__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar4,uVar7);
}


