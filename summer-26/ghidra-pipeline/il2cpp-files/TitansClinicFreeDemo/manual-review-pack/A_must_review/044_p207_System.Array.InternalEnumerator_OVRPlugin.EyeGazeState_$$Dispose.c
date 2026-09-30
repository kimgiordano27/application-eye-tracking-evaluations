/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.EyeGazeState>$$Dispose
ENTRY_POINT: 01776b50
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 163
LABEL: confirmed_gaze_retrieval_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_runtime_retrieval
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;attempted_use;active_gaze_retrieval
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;attempted_eye_tracking_permission_or_feature_enable;active_gaze_state_retrieval_with_validity_and_pose;functionality_gaze_retrieval_or_extraction
*/


void System_Array_InternalEnumerator<OVRPlugin_EyeGazeState>__Dispose(undefined8 param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  long unaff_x19;
  long unaff_x20;
  int unaff_w21;
  long unaff_x22;
  long unaff_x23;
  ulong unaff_x24;
  ulong unaff_x25;
  ulong uVar5;
  uint uVar6;
  ulong unaff_x26;
  uint unaff_w27;
  char *unaff_x28;
  
  while( true ) {
    uVar6 = (int)unaff_x26 + 1;
    uVar4 = (uint)param_1;
    if (uVar4 <= uVar6) break;
    uVar2 = (int)unaff_x26 - 1;
    *(char *)(unaff_x22 + (int)uVar6 + 0x20) = *unaff_x28;
    unaff_x26 = (ulong)uVar2;
    if (unaff_w21 <= (int)uVar2) goto LAB_01776afc;
    do {
      do {
        uVar5 = unaff_x25;
        uVar6 = (int)unaff_x26 + 1;
        uVar4 = (uint)param_1;
        if (uVar4 <= uVar6) goto LAB_01776bb0;
        *(char *)(unaff_x22 + (int)uVar6 + 0x20) = (char)unaff_w27;
        if (uVar5 == unaff_x24) {
          return;
        }
        unaff_x25 = uVar5 + 1;
        if (uVar4 <= (uint)unaff_x25) goto LAB_01776bb0;
        unaff_w27 = (uint)*(byte *)(unaff_x22 + unaff_x25 + 0x20);
        unaff_x26 = uVar5;
      } while ((long)uVar5 < unaff_x23);
LAB_01776afc:
      uVar6 = (uint)unaff_x26;
      if (uVar4 <= uVar6) goto LAB_01776bb0;
      unaff_x28 = (char *)(unaff_x22 + (int)uVar6 + 0x20);
      cVar1 = *unaff_x28;
      if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01230ca0();
      }
      if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
        FUN_0122e748();
      }
      iVar3 = (**(code **)(unaff_x20 + 0x18))
                        (*(undefined8 *)(unaff_x20 + 0x40),unaff_w27 != 0,cVar1 != '\0',
                         *(undefined8 *)(unaff_x20 + 0x28));
      param_1 = *(undefined8 *)(unaff_x22 + 0x18);
    } while (-1 < iVar3);
    if ((uint)param_1 <= uVar6) break;
  }
LAB_01776bb0:
                    /* WARNING: Subroutine does not return */
  FUN_01230ca8();
}


