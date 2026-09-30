/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.EyeGazeState>$$.ctor
ENTRY_POINT: 01776b30
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 155
LABEL: confirmed_gaze_retrieval_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_runtime_retrieval
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;attempted_use;active_gaze_retrieval
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;active_gaze_state_retrieval_with_validity_and_pose;functionality_gaze_retrieval_or_extraction
*/


void System_Array_InternalEnumerator<OVRPlugin_EyeGazeState>___ctor
               (code *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  char cVar1;
  undefined1 in_ZR;
  int iVar2;
  uint uVar3;
  long unaff_x19;
  long unaff_x20;
  int unaff_w21;
  long unaff_x22;
  long unaff_x23;
  ulong unaff_x24;
  ulong unaff_x25;
  uint uVar4;
  ulong unaff_x26;
  ulong uVar5;
  uint unaff_w27;
  char *unaff_x28;
  
  do {
    iVar2 = (*param_1)(param_2,unaff_w27 != 0,!(bool)in_ZR,param_5);
    uVar3 = (uint)*(undefined8 *)(unaff_x22 + 0x18);
    uVar5 = unaff_x26;
    if (iVar2 < 0) {
      uVar4 = (uint)unaff_x26;
      if ((uVar3 <= uVar4) || (uVar3 <= uVar4 + 1)) goto LAB_01776bb0;
      unaff_x26 = (ulong)(uVar4 - 1);
      *(char *)(unaff_x22 + (int)(uVar4 + 1) + 0x20) = *unaff_x28;
      uVar5 = unaff_x26;
      if ((int)(uVar4 - 1) < unaff_w21) goto LAB_01776b74;
    }
    else {
LAB_01776b74:
      do {
        unaff_x26 = unaff_x25;
        uVar4 = (int)uVar5 + 1;
        if (uVar3 <= uVar4) goto LAB_01776bb0;
        *(char *)(unaff_x22 + (int)uVar4 + 0x20) = (char)unaff_w27;
        if (unaff_x26 == unaff_x24) {
          return;
        }
        unaff_x25 = unaff_x26 + 1;
        if (uVar3 <= (uint)unaff_x25) goto LAB_01776bb0;
        unaff_w27 = (uint)*(byte *)(unaff_x22 + unaff_x25 + 0x20);
        uVar5 = unaff_x26;
      } while ((long)unaff_x26 < unaff_x23);
    }
    if (uVar3 <= (uint)unaff_x26) {
LAB_01776bb0:
                    /* WARNING: Subroutine does not return */
      FUN_01230ca8();
    }
    unaff_x28 = (char *)(unaff_x22 + (int)(uint)unaff_x26 + 0x20);
    cVar1 = *unaff_x28;
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01230ca0();
    }
    if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
      FUN_0122e748();
    }
    param_1 = *(code **)(unaff_x20 + 0x18);
    param_2 = *(undefined8 *)(unaff_x20 + 0x40);
    param_5 = *(undefined8 *)(unaff_x20 + 0x28);
    in_ZR = cVar1 == '\0';
  } while( true );
}


