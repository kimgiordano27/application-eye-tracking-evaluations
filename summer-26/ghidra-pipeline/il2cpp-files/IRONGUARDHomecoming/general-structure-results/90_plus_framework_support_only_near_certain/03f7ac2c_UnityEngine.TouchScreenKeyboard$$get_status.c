/*
FUNCTION_NAME: UnityEngine.TouchScreenKeyboard$$get_status
ENTRY_POINT: 03f7ac2c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 128
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_3;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03f7ad64) */

void UnityEngine_TouchScreenKeyboard__get_status(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  int *piVar5;
  long *unaff_x19;
  ulong unaff_x20;
  long unaff_x22;
  long lVar6;
  undefined8 *unaff_x25;
  long *unaff_x26;
  long *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  
code_r0x03f7ac2c:
  puVar1 = (undefined8 *)FUN_01ecb238();
  do {
    uVar2 = (*(code *)*puVar1)();
    lVar6 = *(long *)(unaff_x22 + 0x30);
    if ((unaff_x20 & 1) == 0) {
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar4 = FUN_02b6b4d8(lVar6,uVar2,*unaff_x29);
      if ((uVar4 & 1) == 0) {
        lVar6 = *(long *)(unaff_x22 + 0x30);
        uVar3 = FUN_03f7a66c();
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        FUN_02b6b2e4(lVar6,uVar2,uVar3,*unaff_x25);
      }
    }
    else {
      uVar3 = FUN_03f7a66c();
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      FUN_02b6b2d0(lVar6,uVar2,uVar3,*unaff_x28);
    }
    lVar6 = *unaff_x19;
    uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x26) {
          puVar1 = (undefined8 *)(lVar6 + (long)*piVar5 * 0x10 + 0x138);
          goto UnityEngine_TouchScreenKeyboard__set_active;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_01ecb238();
UnityEngine_TouchScreenKeyboard__set_active:
    uVar4 = (*(code *)*puVar1)();
    if ((uVar4 & 1) == 0) {
      if (unaff_x19 == (long *)0x0) {
        return;
      }
      lVar6 = *unaff_x19;
      uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar4 == 0) goto LAB_03f7ad08;
      piVar5 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      break;
    }
    lVar6 = *unaff_x19;
    uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar4 == 0) goto code_r0x03f7ac2c;
    piVar5 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    while (*(long *)(piVar5 + -2) != *unaff_x27) {
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
      if (uVar4 == 0) goto code_r0x03f7ac2c;
    }
    puVar1 = (undefined8 *)(lVar6 + (long)*piVar5 * 0x10 + 0x138);
  } while( true );
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar5 = piVar5 + 4;
    if (uVar4 == 0) break;
    if (*(long *)(piVar5 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar1 = (undefined8 *)(lVar6 + (long)*piVar5 * 0x10 + 0x138);
      goto UnityEngine_TouchScreenKeyboard__get_selection;
    }
  }
LAB_03f7ad08:
  puVar1 = (undefined8 *)FUN_01ecb238();
UnityEngine_TouchScreenKeyboard__get_selection:
  (*(code *)*puVar1)();
  return;
}


