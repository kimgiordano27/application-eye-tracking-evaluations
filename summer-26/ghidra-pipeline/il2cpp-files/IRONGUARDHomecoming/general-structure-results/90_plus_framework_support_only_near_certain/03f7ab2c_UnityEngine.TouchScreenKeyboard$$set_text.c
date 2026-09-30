/*
FUNCTION_NAME: UnityEngine.TouchScreenKeyboard$$set_text
ENTRY_POINT: 03f7ab2c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 181
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_6;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_6;ui_or_gameplay_sink_hits_3;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_interaction_sink;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x03f7ad64) */

void UnityEngine_TouchScreenKeyboard__set_text(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long in_x9;
  ulong uVar11;
  int *in_x10;
  int *piVar12;
  ulong unaff_x20;
  long unaff_x22;
  
  do {
    if (*(long *)(in_x10 + -2) == param_3) {
      puVar6 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
      goto LAB_03f7ab60;
    }
    in_x9 = in_x9 + -1;
    in_x10 = in_x10 + 4;
  } while (in_x9 != 0);
  puVar6 = (undefined8 *)FUN_01ecb238();
LAB_03f7ab60:
  plVar7 = (long *)(*(code *)*puVar6)();
  puVar5 = PTR_DAT_04581508;
  puVar4 = Method_Unity_VisualScripting_GraphPointer_GetElementData<ToggleValue_Data>__;
  puVar3 = Method_UnityEngine_GameObject_GetComponent<Renderer>__;
  puVar2 = Method_System_Collections_Generic_Stack<Tween>_Pop__;
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
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
        if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
          puVar6 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto UnityEngine_TouchScreenKeyboard__set_active;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar1,0);
UnityEngine_TouchScreenKeyboard__set_active:
    uVar11 = (*(code *)*puVar6)(plVar7,puVar6[1]);
    if ((uVar11 & 1) == 0) {
      if (plVar7 == (long *)0x0) {
        return;
      }
      lVar10 = *plVar7;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 == 0) goto LAB_03f7ad08;
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      break;
    }
    lVar10 = *plVar7;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
          puVar6 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_03f7ac44;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar2,0);
LAB_03f7ac44:
    uVar8 = (*(code *)*puVar6)(plVar7,puVar6[1]);
    lVar10 = *(long *)(unaff_x22 + 0x30);
    if ((unaff_x20 & 1) == 0) {
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar11 = FUN_02b6b4d8(lVar10,uVar8,*(undefined8 *)puVar4);
      if ((uVar11 & 1) == 0) {
        lVar10 = *(long *)(unaff_x22 + 0x30);
        uVar9 = FUN_03f7a66c();
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        FUN_02b6b2e4(lVar10,uVar8,uVar9,*(undefined8 *)puVar5);
      }
    }
    else {
      uVar9 = FUN_03f7a66c();
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      FUN_02b6b2d0(lVar10,uVar8,uVar9,*(undefined8 *)puVar3);
    }
  } while( true );
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar12 = piVar12 + 4;
    if (uVar11 == 0) break;
    if (*(long *)(piVar12 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar6 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
      goto UnityEngine_TouchScreenKeyboard__get_selection;
    }
  }
LAB_03f7ad08:
  puVar6 = (undefined8 *)
           FUN_01ecb238(plVar7,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
UnityEngine_TouchScreenKeyboard__get_selection:
  (*(code *)*puVar6)(plVar7,puVar6[1]);
  return;
}


