/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.Vector3f>$$System.Collections.IEnumerator.Reset
ENTRY_POINT: 0291a9d8
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_InternalEnumerator<OVRPlugin_Vector3f>__System_Collections_IEnumerator_Reset
               (long param_1,int param_2,int param_3,long param_4,long param_5)

{
  ulong uVar1;
  uint uVar2;
  char in_NG;
  char in_OV;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  
  if (in_NG != in_OV) {
    if (param_1 == 0) {
LAB_0291aae0:
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    uVar7 = (long)param_2;
    do {
      uVar1 = uVar7 + 1;
      uVar4 = (uint)*(undefined8 *)(param_1 + 0x18);
      if (uVar4 <= (uint)uVar1) {
LAB_0291aadc:
                    /* WARNING: Subroutine does not return */
        FUN_01b48180();
      }
      uVar5 = *(undefined8 *)(param_1 + uVar1 * 8 + 0x20);
      if ((long)param_2 <= (long)uVar7) {
        if (uVar4 <= (uint)uVar7) goto LAB_0291aadc;
        while( true ) {
          uVar4 = (uint)uVar7;
          puVar8 = (undefined8 *)(param_1 + (long)(int)uVar4 * 8 + 0x20);
          uVar6 = *puVar8;
          if (param_4 == 0) goto LAB_0291aae0;
          if ((*(byte *)(*(long *)(param_5 + 0x20) + 0x135) & 1) == 0) {
            FUN_01ae9e74();
          }
          iVar3 = (**(code **)(param_4 + 0x18))
                            (*(undefined8 *)(param_4 + 0x40),uVar5,uVar6,
                             *(undefined8 *)(param_4 + 0x28));
          if (-1 < iVar3) break;
          if ((*(uint *)(param_1 + 0x18) <= uVar4) || (*(uint *)(param_1 + 0x18) <= uVar4 + 1))
          goto LAB_0291aadc;
          uVar2 = uVar4 - 1;
          uVar7 = (ulong)uVar2;
          *(undefined8 *)(param_1 + (long)(int)(uVar4 + 1) * 8 + 0x20) = *puVar8;
          if ((int)uVar2 < param_2) break;
          if (*(uint *)(param_1 + 0x18) <= uVar2) goto LAB_0291aadc;
        }
        uVar4 = *(uint *)(param_1 + 0x18);
      }
      uVar2 = (int)uVar7 + 1;
      if (uVar4 <= uVar2) goto LAB_0291aadc;
      *(undefined8 *)(param_1 + (long)(int)uVar2 * 8 + 0x20) = uVar5;
      uVar7 = uVar1;
    } while (uVar1 != (long)param_3);
  }
  return;
}


