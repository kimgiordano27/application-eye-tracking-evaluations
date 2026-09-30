/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$Copy
ENTRY_POINT: 04a10498
PROGRAM: vandalizer-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector3f>__Copy(code *param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long unaff_x19;
  long unaff_x20;
  int unaff_w21;
  long unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  long unaff_x25;
  ulong unaff_x26;
  ulong unaff_x27;
  uint uVar4;
  ulong unaff_x28;
  ulong uVar5;
  undefined8 *unaff_x29;
  
  do {
    iVar2 = (*param_1)(param_2,unaff_x23,unaff_x24,*(undefined8 *)(unaff_x20 + 0x28));
    if (iVar2 < 0) {
      uVar4 = (uint)unaff_x28;
      if ((*(uint *)(unaff_x22 + 0x18) <= uVar4) || (*(uint *)(unaff_x22 + 0x18) <= uVar4 + 1))
      goto LAB_04a1052c;
      uVar1 = uVar4 - 1;
      unaff_x28 = (ulong)uVar1;
      *(undefined8 *)(unaff_x22 + (long)(int)(uVar4 + 1) * 8 + 0x20) = *unaff_x29;
      if ((int)uVar1 < unaff_w21) goto LAB_04a104ec;
      if (*(uint *)(unaff_x22 + 0x18) <= uVar1) goto LAB_04a1052c;
    }
    else {
LAB_04a104ec:
      uVar3 = (ulong)*(uint *)(unaff_x22 + 0x18);
      uVar5 = unaff_x28;
      do {
        unaff_x28 = unaff_x27;
        uVar4 = (int)uVar5 + 1;
        if ((uint)uVar3 <= uVar4) goto LAB_04a1052c;
        *(undefined8 *)(unaff_x22 + (long)(int)uVar4 * 8 + 0x20) = unaff_x23;
        if (unaff_x28 == unaff_x26) {
          return;
        }
        uVar3 = *(ulong *)(unaff_x22 + 0x18);
        unaff_x27 = unaff_x28 + 1;
        if ((uint)uVar3 <= (uint)unaff_x27) goto LAB_04a1052c;
        unaff_x23 = *(undefined8 *)(unaff_x22 + unaff_x27 * 8 + 0x20);
        uVar5 = unaff_x28;
      } while ((long)unaff_x28 < unaff_x25);
      if ((uint)uVar3 <= (uint)unaff_x28) {
LAB_04a1052c:
                    /* WARNING: Subroutine does not return */
        FUN_031f2398();
      }
    }
    unaff_x29 = (undefined8 *)(unaff_x22 + (long)(int)unaff_x28 * 8 + 0x20);
    unaff_x24 = *unaff_x29;
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2390();
    }
    if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
      FUN_0322bef4();
    }
    param_1 = *(code **)(unaff_x20 + 0x18);
    param_2 = *(undefined8 *)(unaff_x20 + 0x40);
  } while( true );
}


