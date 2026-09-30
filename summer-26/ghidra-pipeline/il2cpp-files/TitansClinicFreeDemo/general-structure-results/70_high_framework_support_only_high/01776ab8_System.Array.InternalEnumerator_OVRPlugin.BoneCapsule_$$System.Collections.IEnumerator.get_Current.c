/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.BoneCapsule>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 01776ab8
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_InternalEnumerator<OVRPlugin_BoneCapsule>__System_Collections_IEnumerator_get_Current
               (long param_1,int param_2,int param_3,long param_4,long param_5)

{
  ulong uVar1;
  char cVar2;
  char cVar3;
  char in_NG;
  char in_OV;
  int iVar4;
  undefined8 uVar5;
  uint uVar6;
  ulong uVar7;
  char *pcVar8;
  
  if (in_NG != in_OV) {
    if (param_1 == 0) {
LAB_01776bb4:
                    /* WARNING: Subroutine does not return */
      FUN_01230ca0();
    }
    uVar5 = *(undefined8 *)(param_1 + 0x18);
    uVar7 = (long)param_2;
    do {
      uVar1 = uVar7 + 1;
      if ((uint)uVar5 <= (uint)uVar1) {
LAB_01776bb0:
                    /* WARNING: Subroutine does not return */
        FUN_01230ca8();
      }
      cVar3 = *(char *)(param_1 + uVar1 + 0x20);
      if ((long)param_2 <= (long)uVar7) {
        do {
          uVar6 = (uint)uVar7;
          if ((uint)uVar5 <= uVar6) goto LAB_01776bb0;
          pcVar8 = (char *)(param_1 + (int)uVar6 + 0x20);
          cVar2 = *pcVar8;
          if (param_4 == 0) goto LAB_01776bb4;
          if ((*(byte *)(*(long *)(param_5 + 0x20) + 0x135) & 1) == 0) {
            FUN_0122e748();
          }
          iVar4 = (**(code **)(param_4 + 0x18))
                            (*(undefined8 *)(param_4 + 0x40),cVar3 != '\0',cVar2 != '\0',
                             *(undefined8 *)(param_4 + 0x28));
          uVar5 = *(undefined8 *)(param_1 + 0x18);
          if (-1 < iVar4) break;
          if (((uint)uVar5 <= uVar6) || ((uint)uVar5 <= uVar6 + 1)) goto LAB_01776bb0;
          uVar7 = (ulong)(uVar6 - 1);
          *(char *)(param_1 + (int)(uVar6 + 1) + 0x20) = *pcVar8;
        } while (param_2 <= (int)(uVar6 - 1));
      }
      uVar6 = (int)uVar7 + 1;
      if ((uint)uVar5 <= uVar6) goto LAB_01776bb0;
      *(char *)(param_1 + (int)uVar6 + 0x20) = cVar3;
      uVar7 = uVar1;
    } while (uVar1 != (long)param_3);
  }
  return;
}


