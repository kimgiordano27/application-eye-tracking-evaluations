/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$Copy
ENTRY_POINT: 04a10504
PROGRAM: vandalizer-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector3f>__Copy(long param_1)

{
  ulong uVar1;
  uint uVar2;
  undefined1 in_ZR;
  int iVar3;
  uint uVar4;
  long unaff_x19;
  long unaff_x20;
  int unaff_w21;
  long unaff_x22;
  undefined8 unaff_x23;
  undefined8 uVar5;
  long unaff_x25;
  ulong unaff_x26;
  ulong unaff_x27;
  undefined8 *puVar6;
  
  while( true ) {
    *(undefined8 *)(param_1 + 0x20) = unaff_x23;
    if ((bool)in_ZR) {
      return;
    }
    uVar1 = unaff_x27 + 1;
    uVar4 = (uint)*(undefined8 *)(unaff_x22 + 0x18);
    if (uVar4 <= (uint)uVar1) break;
    unaff_x23 = *(undefined8 *)(unaff_x22 + uVar1 * 8 + 0x20);
    if (unaff_x25 <= (long)unaff_x27) {
      if (uVar4 <= (uint)unaff_x27) break;
      while( true ) {
        uVar4 = (uint)unaff_x27;
        puVar6 = (undefined8 *)(unaff_x22 + (long)(int)uVar4 * 8 + 0x20);
        uVar5 = *puVar6;
        if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_031f2390();
        }
        if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
          FUN_0322bef4();
        }
        iVar3 = (**(code **)(unaff_x20 + 0x18))
                          (*(undefined8 *)(unaff_x20 + 0x40),unaff_x23,uVar5,
                           *(undefined8 *)(unaff_x20 + 0x28));
        if (-1 < iVar3) break;
        if ((*(uint *)(unaff_x22 + 0x18) <= uVar4) || (*(uint *)(unaff_x22 + 0x18) <= uVar4 + 1))
        goto LAB_04a1052c;
        uVar2 = uVar4 - 1;
        unaff_x27 = (ulong)uVar2;
        *(undefined8 *)(unaff_x22 + (long)(int)(uVar4 + 1) * 8 + 0x20) = *puVar6;
        if ((int)uVar2 < unaff_w21) break;
        if (*(uint *)(unaff_x22 + 0x18) <= uVar2) goto LAB_04a1052c;
      }
      uVar4 = *(uint *)(unaff_x22 + 0x18);
    }
    uVar2 = (int)unaff_x27 + 1;
    if (uVar4 <= uVar2) break;
    param_1 = unaff_x22 + (long)(int)uVar2 * 8;
    in_ZR = uVar1 == unaff_x26;
    unaff_x27 = uVar1;
  }
LAB_04a1052c:
                    /* WARNING: Subroutine does not return */
  FUN_031f2398();
}


