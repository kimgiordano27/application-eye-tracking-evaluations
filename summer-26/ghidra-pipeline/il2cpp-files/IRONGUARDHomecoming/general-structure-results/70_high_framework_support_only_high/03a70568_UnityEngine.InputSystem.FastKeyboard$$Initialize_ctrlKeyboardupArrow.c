/*
FUNCTION_NAME: UnityEngine.InputSystem.FastKeyboard$$Initialize_ctrlKeyboardupArrow
ENTRY_POINT: 03a70568
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03a70748) */

uint UnityEngine_InputSystem_FastKeyboard__Initialize_ctrlKeyboardupArrow(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  long in_x10;
  int *piVar10;
  long *unaff_x19;
  ulong unaff_x20;
  
  lVar8 = *unaff_x19;
  uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == **(long **)(in_x10 + 0x400)) {
        puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_03a705b8;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar5 = (undefined8 *)FUN_01ecb238();
LAB_03a705b8:
  puVar3 = Method_System_Collections_Generic_Stack<Tween>_Pop__;
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  plVar6 = (long *)(*(code *)*puVar5)();
  uVar4 = 1;
  do {
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar8 = *plVar6;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_03a70634;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar2,0);
LAB_03a70634:
    uVar9 = (*(code *)*puVar5)(plVar6,puVar5[1]);
    if ((uVar9 & 1) == 0) break;
    lVar8 = *plVar6;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar3) {
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_03a70690;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar3,0);
LAB_03a70690:
    uVar7 = (*(code *)*puVar5)(plVar6,puVar5[1]);
    uVar4 = FUN_0340eec4(uVar7,0);
    if (((uVar4 & 1) == 0) || ((unaff_x20 & 1) != 0)) break;
  } while( true );
  if (plVar6 != (long *)0x0) {
    lVar8 = *plVar6;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_03a70714;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar1,0);
LAB_03a70714:
    (*(code *)*puVar5)(plVar6,puVar5[1]);
  }
  return uVar4 & 1;
}


