/*
FUNCTION_NAME: UnityEngine.TouchScreenKeyboard$$get_active
ENTRY_POINT: 03f7abac
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 128
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_5;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03f7ad64) */

void UnityEngine_TouchScreenKeyboard__get_active(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong in_x9;
  int *piVar6;
  long *unaff_x19;
  ulong unaff_x20;
  long unaff_x22;
  undefined8 *unaff_x25;
  long *unaff_x26;
  long *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  
  do {
    piVar6 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == param_3) {
        puVar1 = (undefined8 *)(param_1 + (long)*piVar6 * 0x10 + 0x138);
        goto UnityEngine_TouchScreenKeyboard__set_active;
      }
      in_x9 = in_x9 - 1;
      piVar6 = piVar6 + 4;
    } while (in_x9 != 0);
    do {
      puVar1 = (undefined8 *)FUN_01ecb238();
UnityEngine_TouchScreenKeyboard__set_active:
      uVar2 = (*(code *)*puVar1)();
      if ((uVar2 & 1) == 0) {
        if (unaff_x19 == (long *)0x0) {
          return;
        }
        lVar5 = *unaff_x19;
        uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar2 == 0) goto LAB_03f7ad08;
        piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        goto LAB_03f7acf0;
      }
      lVar5 = *unaff_x19;
      uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar2 != 0) {
        piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *unaff_x27) {
            puVar1 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_03f7ac44;
          }
          uVar2 = uVar2 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar2 != 0);
      }
      puVar1 = (undefined8 *)FUN_01ecb238();
LAB_03f7ac44:
      uVar3 = (*(code *)*puVar1)();
      lVar5 = *(long *)(unaff_x22 + 0x30);
      if ((unaff_x20 & 1) == 0) {
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar2 = FUN_02b6b4d8(lVar5,uVar3,*unaff_x29);
        if ((uVar2 & 1) == 0) {
          lVar5 = *(long *)(unaff_x22 + 0x30);
          uVar4 = FUN_03f7a66c();
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          FUN_02b6b2e4(lVar5,uVar3,uVar4,*unaff_x25);
        }
      }
      else {
        uVar4 = FUN_03f7a66c();
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        FUN_02b6b2d0(lVar5,uVar3,uVar4,*unaff_x28);
      }
      param_1 = *unaff_x19;
      param_3 = *unaff_x26;
      in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
    } while (in_x9 == 0);
  } while( true );
  while( true ) {
    uVar2 = uVar2 - 1;
    piVar6 = piVar6 + 4;
    if (uVar2 == 0) break;
LAB_03f7acf0:
    if (*(long *)(piVar6 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar1 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
      goto UnityEngine_TouchScreenKeyboard__get_selection;
    }
  }
LAB_03f7ad08:
  puVar1 = (undefined8 *)FUN_01ecb238();
UnityEngine_TouchScreenKeyboard__get_selection:
  (*(code *)*puVar1)();
  return;
}


