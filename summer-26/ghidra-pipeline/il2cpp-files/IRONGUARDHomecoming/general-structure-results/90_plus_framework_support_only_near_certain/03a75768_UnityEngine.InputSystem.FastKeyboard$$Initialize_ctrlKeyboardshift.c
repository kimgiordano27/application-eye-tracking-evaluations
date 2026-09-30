/*
FUNCTION_NAME: UnityEngine.InputSystem.FastKeyboard$$Initialize_ctrlKeyboardshift
ENTRY_POINT: 03a75768
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_8;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x03a7573c) */
/* WARNING: Removing unreachable block (ram,0x03a758f8) */

void UnityEngine_InputSystem_FastKeyboard__Initialize_ctrlKeyboardshift
               (undefined8 param_1,int param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long lVar13;
  long *unaff_x25;
  long *in_stack_00000008;
  undefined8 in_stack_00000010;
  
  puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  if (param_2 != 1) {
    plVar9 = (long *)thunk_FUN_01f116d0();
    if (plVar9 != (long *)0x0) {
      lVar13 = *plVar9;
      uVar11 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
            puVar5 = (undefined8 *)(lVar13 + (long)*piVar12 * 0x10 + 0x138);
            goto code_r0x03a758e0;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar5 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar3,0);
code_r0x03a758e0:
      (*(code *)*puVar5)(plVar9,puVar5[1]);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01fbfd14(param_1);
  }
  plVar9 = (long *)__cxa_begin_catch(param_1);
  lVar13 = *plVar9;
  __cxa_end_catch();
  puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  plVar9 = (long *)thunk_FUN_01f116d0();
  if (plVar9 != (long *)0x0) {
    lVar10 = *plVar9;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
          puVar5 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_03a754f0;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar3,0);
LAB_03a754f0:
    (*(code *)*puVar5)(plVar9,puVar5[1]);
  }
  if (lVar13 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01eed990(lVar13);
  }
  if (in_stack_00000008 == (long *)0x0) {
    return;
  }
  plVar9 = (long *)(**(code **)(*in_stack_00000008 + 0x388))
                             (in_stack_00000008,*(undefined8 *)(*in_stack_00000008 + 0x390));
  puVar4 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  puVar2 = Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__;
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar10 = *plVar9;
    lVar13 = *(long *)puVar4;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == lVar13) {
          puVar5 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_03a7558c;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(plVar9,lVar13,0);
LAB_03a7558c:
    uVar11 = (*(code *)*puVar5)(plVar9,puVar5[1]);
    if ((uVar11 & 1) == 0) {
      plVar9 = (long *)thunk_FUN_01f116d0(plVar9,*(undefined8 *)puVar3);
      if (plVar9 == (long *)0x0) {
        return;
      }
      lVar13 = *plVar9;
      uVar11 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar11 == 0) goto LAB_03a756b4;
      piVar12 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      break;
    }
    lVar10 = *plVar9;
    lVar13 = *(long *)puVar4;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == lVar13) {
          puVar5 = (undefined8 *)(lVar10 + (long)(*piVar12 + 1) * 0x10 + 0x138);
          goto LAB_03a755ec;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(plVar9,lVar13,1);
LAB_03a755ec:
    plVar6 = (long *)(*(code *)*puVar5)(plVar9,puVar5[1]);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if (*(long *)(*plVar6 + 0x40) != *(long *)(*(long *)puVar2 + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc();
    }
    puVar7 = (undefined4 *)thunk_FUN_01f11920();
    lVar13 = *unaff_x25;
    uVar1 = *puVar7;
    if (*(int *)(lVar13 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar13 = *unaff_x25;
    }
    plVar6 = (long *)**(undefined8 **)(lVar13 + 0xb8);
    in_stack_00000010._4_4_ = uVar1;
    uVar8 = thunk_FUN_01f113fc(*(undefined8 *)puVar2,(long)&stack0x00000010 + 4);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c(uVar8,uVar8);
    }
    (**(code **)(*plVar6 + 0x3a8))(plVar6,uVar8,*(undefined8 *)(*plVar6 + 0x3b0));
  } while( true );
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar12 = piVar12 + 4;
    if (uVar11 == 0) break;
    if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
      puVar5 = (undefined8 *)(lVar13 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_03a756d0;
    }
  }
LAB_03a756b4:
  puVar5 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar3,0);
LAB_03a756d0:
  (*(code *)*puVar5)(plVar9,puVar5[1]);
  return;
}


