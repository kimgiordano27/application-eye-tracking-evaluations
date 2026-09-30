/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$Copy
ENTRY_POINT: 04a10440
PROGRAM: vandalizer-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector3f>__Copy
               (undefined8 param_1,undefined8 param_2,int param_3,long param_4)

{
  ulong uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  long unaff_x19;
  int unaff_w21;
  long unaff_x22;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong unaff_x25;
  ulong uVar7;
  undefined8 *puVar8;
  
  uVar7 = unaff_x25;
  while( true ) {
    uVar1 = uVar7 + 1;
    uVar4 = (uint)*(undefined8 *)(unaff_x22 + 0x18);
    if (uVar4 <= (uint)uVar1) break;
    uVar5 = *(undefined8 *)(unaff_x22 + uVar1 * 8 + 0x20);
    if ((long)unaff_x25 <= (long)uVar7) {
      if (uVar4 <= (uint)uVar7) break;
      while( true ) {
        uVar4 = (uint)uVar7;
        puVar8 = (undefined8 *)(unaff_x22 + (long)(int)uVar4 * 8 + 0x20);
        uVar6 = *puVar8;
        if (param_4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_031f2390();
        }
        if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
          FUN_0322bef4();
        }
        iVar3 = (**(code **)(param_4 + 0x18))
                          (*(undefined8 *)(param_4 + 0x40),uVar5,uVar6,
                           *(undefined8 *)(param_4 + 0x28));
        if (-1 < iVar3) break;
        if ((*(uint *)(unaff_x22 + 0x18) <= uVar4) || (*(uint *)(unaff_x22 + 0x18) <= uVar4 + 1))
        goto LAB_04a1052c;
        uVar2 = uVar4 - 1;
        uVar7 = (ulong)uVar2;
        *(undefined8 *)(unaff_x22 + (long)(int)(uVar4 + 1) * 8 + 0x20) = *puVar8;
        if ((int)uVar2 < unaff_w21) break;
        if (*(uint *)(unaff_x22 + 0x18) <= uVar2) goto LAB_04a1052c;
      }
      uVar4 = *(uint *)(unaff_x22 + 0x18);
    }
    uVar2 = (int)uVar7 + 1;
    if (uVar4 <= uVar2) break;
    *(undefined8 *)(unaff_x22 + (long)(int)uVar2 * 8 + 0x20) = uVar5;
    uVar7 = uVar1;
    if (uVar1 == (long)param_3) {
      return;
    }
  }
LAB_04a1052c:
                    /* WARNING: Subroutine does not return */
  FUN_031f2398();
}


