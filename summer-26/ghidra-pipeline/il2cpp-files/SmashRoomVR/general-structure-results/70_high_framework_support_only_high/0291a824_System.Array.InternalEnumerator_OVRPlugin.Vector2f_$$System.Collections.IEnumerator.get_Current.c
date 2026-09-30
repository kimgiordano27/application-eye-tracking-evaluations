/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.Vector2f>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 0291a824
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_InternalEnumerator<OVRPlugin_Vector2f>__System_Collections_IEnumerator_get_Current
               (long param_1,uint param_2,int param_3,int param_4,long param_5,long param_6)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  if (param_1 == 0) {
LAB_0291a9b8:
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  uVar7 = *(uint *)(param_1 + 0x18);
  iVar2 = param_4 + -1;
  uVar3 = iVar2 + param_2;
  if (uVar3 < uVar7) {
    uVar5 = *(undefined8 *)(param_1 + (long)(int)uVar3 * 8 + 0x20);
    iVar1 = param_3;
    if (param_3 < 0) {
      iVar1 = param_3 + 1;
    }
    if ((int)param_2 <= iVar1 >> 1) {
      do {
        uVar7 = param_2 * 2;
        if ((int)uVar7 < param_3) {
          uVar3 = uVar7 + param_4;
          if ((*(uint *)(param_1 + 0x18) <= uVar3 - 1) || (*(uint *)(param_1 + 0x18) <= uVar3))
          goto LAB_0291a9b4;
          if (param_5 == 0) goto LAB_0291a9b8;
          uVar8 = *(undefined8 *)(param_1 + (long)(int)(uVar3 - 1) * 8 + 0x20);
          uVar9 = *(undefined8 *)(param_1 + (long)(int)uVar3 * 8 + 0x20);
          if ((*(byte *)(*(long *)(param_6 + 0x20) + 0x135) & 1) == 0) {
            FUN_01ae9e74();
          }
          uVar3 = (**(code **)(param_5 + 0x18))
                            (*(undefined8 *)(param_5 + 0x40),uVar8,uVar9,
                             *(undefined8 *)(param_5 + 0x28));
          uVar7 = uVar7 | uVar3 >> 0x1f;
        }
        uVar3 = iVar2 + uVar7;
        if (*(uint *)(param_1 + 0x18) <= uVar3) goto LAB_0291a9b4;
        puVar6 = (undefined8 *)(param_1 + (long)(int)uVar3 * 8 + 0x20);
        uVar8 = *puVar6;
        if (param_5 == 0) goto LAB_0291a9b8;
        if ((*(byte *)(*(long *)(param_6 + 0x20) + 0x135) & 1) == 0) {
          FUN_01ae9e74();
        }
        iVar4 = (**(code **)(param_5 + 0x18))
                          (*(undefined8 *)(param_5 + 0x40),uVar5,uVar8,
                           *(undefined8 *)(param_5 + 0x28));
        if (-1 < iVar4) {
          uVar3 = iVar2 + param_2;
          break;
        }
        if ((*(uint *)(param_1 + 0x18) <= uVar3) || (*(uint *)(param_1 + 0x18) <= iVar2 + param_2))
        goto LAB_0291a9b4;
        *(undefined8 *)(param_1 + (long)(int)(iVar2 + param_2) * 8 + 0x20) = *puVar6;
        param_2 = uVar7;
      } while ((int)uVar7 <= iVar1 >> 1);
      uVar7 = *(uint *)(param_1 + 0x18);
    }
    if (uVar3 < uVar7) {
      *(undefined8 *)(param_1 + (long)(int)uVar3 * 8 + 0x20) = uVar5;
      return;
    }
  }
LAB_0291a9b4:
                    /* WARNING: Subroutine does not return */
  FUN_01b48180();
}


