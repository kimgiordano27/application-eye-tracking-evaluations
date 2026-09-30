/*
FUNCTION_NAME: UnityEngine.TouchScreenKeyboard$$set_hideInput
ENTRY_POINT: 03f7ab70
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 175
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_5;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_3;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_interaction_sink;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x03f7ad64) */

void UnityEngine_TouchScreenKeyboard__set_hideInput(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long *unaff_x19;
  ulong unaff_x20;
  long unaff_x22;
  
  puVar5 = PTR_DAT_04581508;
  puVar4 = Method_Unity_VisualScripting_GraphPointer_GetElementData<ToggleValue_Data>__;
  puVar3 = Method_UnityEngine_GameObject_GetComponent<Renderer>__;
  puVar2 = Method_System_Collections_Generic_Stack<Tween>_Pop__;
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar9 = *unaff_x19;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
          puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto UnityEngine_TouchScreenKeyboard__set_active;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238();
UnityEngine_TouchScreenKeyboard__set_active:
    uVar10 = (*(code *)*puVar6)();
    if ((uVar10 & 1) == 0) {
      if (unaff_x19 == (long *)0x0) {
        return;
      }
      lVar9 = *unaff_x19;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 == 0) goto LAB_03f7ad08;
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      break;
    }
    lVar9 = *unaff_x19;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
          puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_03f7ac44;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238();
LAB_03f7ac44:
    uVar7 = (*(code *)*puVar6)();
    lVar9 = *(long *)(unaff_x22 + 0x30);
    if ((unaff_x20 & 1) == 0) {
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar10 = FUN_02b6b4d8(lVar9,uVar7,*(undefined8 *)puVar4);
      if ((uVar10 & 1) == 0) {
        lVar9 = *(long *)(unaff_x22 + 0x30);
        uVar8 = FUN_03f7a66c();
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        FUN_02b6b2e4(lVar9,uVar7,uVar8,*(undefined8 *)puVar5);
      }
    }
    else {
      uVar8 = FUN_03f7a66c();
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      FUN_02b6b2d0(lVar9,uVar7,uVar8,*(undefined8 *)puVar3);
    }
  } while( true );
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
    if (*(long *)(piVar11 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
      goto UnityEngine_TouchScreenKeyboard__get_selection;
    }
  }
LAB_03f7ad08:
  puVar6 = (undefined8 *)FUN_01ecb238();
UnityEngine_TouchScreenKeyboard__get_selection:
  (*(code *)*puVar6)();
  return;
}


