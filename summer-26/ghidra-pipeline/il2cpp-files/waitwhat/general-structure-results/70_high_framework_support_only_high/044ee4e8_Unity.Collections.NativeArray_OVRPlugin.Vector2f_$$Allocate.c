/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$Allocate
ENTRY_POINT: 044ee4e8
PROGRAM: waitwhat-libil2cpp.so
SCORE: 80
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


int Unity_Collections_NativeArray<OVRPlugin_Vector2f>__Allocate(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  long unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  uint uVar6;
  ulong unaff_x22;
  ulong unaff_x23;
  undefined8 uVar7;
  
  while (param_1 != 0) {
    if (*(uint *)(param_1 + 0x18) <= (uint)unaff_x22) goto LAB_044ee5ac;
    if (unaff_x20 == 0) break;
    uVar4 = (**(code **)(unaff_x20 + 0x18))
                      (*(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(param_1 + unaff_x23 + 0x20)
                       ,*(undefined8 *)(param_1 + unaff_x23 + 0x28),
                       *(undefined8 *)(unaff_x20 + 0x28));
    iVar1 = *(int *)(unaff_x19 + 0x18);
    if ((uVar4 & 1) == 0) {
LAB_044ee530:
      uVar6 = (uint)unaff_x22;
      if ((int)uVar6 < iVar1) {
        lVar5 = *(long *)(unaff_x19 + 0x10);
        if (lVar5 == 0) break;
        if ((*(uint *)(lVar5 + 0x18) <= uVar6) || (*(uint *)(lVar5 + 0x18) <= unaff_w21)) {
LAB_044ee5ac:
                    /* WARNING: Subroutine does not return */
          FUN_03188ce0();
        }
        puVar2 = (undefined8 *)(lVar5 + 0x20 + (long)(int)uVar6 * 0x10);
        uVar7 = *puVar2;
        puVar3 = (undefined8 *)(lVar5 + 0x20 + (long)(int)unaff_w21 * 0x10);
        puVar3[1] = puVar2[1];
        *puVar3 = uVar7;
        unaff_w21 = unaff_w21 + 1;
        iVar1 = *(int *)(unaff_x19 + 0x18);
        unaff_x22 = (ulong)(uVar6 + 1);
      }
      if (iVar1 <= (int)unaff_x22) {
        FUN_0595236c(*(undefined8 *)(unaff_x19 + 0x10),unaff_w21,iVar1 - unaff_w21,0);
        iVar1 = *(int *)(unaff_x19 + 0x18);
        *(uint *)(unaff_x19 + 0x18) = unaff_w21;
        *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
        return iVar1 - unaff_w21;
      }
      unaff_x23 = -(unaff_x22 >> 0x1f & 1) & 0xfffffff000000000 | (unaff_x22 & 0xffffffff) << 4;
      unaff_x22 = (ulong)(int)unaff_x22;
    }
    else {
      unaff_x22 = unaff_x22 + 1;
      unaff_x23 = unaff_x23 + 0x10;
      if ((long)iVar1 <= (long)unaff_x22) goto LAB_044ee530;
    }
    param_1 = *(long *)(unaff_x19 + 0x10);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


