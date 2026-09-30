/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$Copy
ENTRY_POINT: 041a2564
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


int Unity_Collections_NativeArray<OVRPlugin_Vector3f>__Copy(long param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined1 in_CY;
  ulong uVar4;
  long lVar5;
  long unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  uint uVar6;
  ulong unaff_x22;
  ulong unaff_x23;
  undefined8 uVar7;
  
  while (!(bool)in_CY) {
    if (unaff_x20 == 0) goto LAB_041a2624;
    uVar4 = (**(code **)(unaff_x20 + 0x18))
                      (*(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(param_1 + unaff_x23 + 0x20)
                       ,*(undefined8 *)(param_1 + unaff_x23 + 0x28),
                       *(undefined8 *)(unaff_x20 + 0x28));
    iVar2 = *(int *)(unaff_x19 + 0x18);
    if ((uVar4 & 1) == 0) {
LAB_041a25a0:
      uVar6 = (uint)unaff_x22;
      if ((int)uVar6 < iVar2) {
        lVar5 = *(long *)(unaff_x19 + 0x10);
        if (lVar5 == 0) goto LAB_041a2624;
        if ((*(uint *)(lVar5 + 0x18) <= uVar6) || (*(uint *)(lVar5 + 0x18) <= unaff_w21)) break;
        puVar1 = (undefined8 *)(lVar5 + 0x20 + (long)(int)unaff_w21 * 0x10);
        puVar3 = (undefined8 *)(lVar5 + 0x20 + (long)(int)uVar6 * 0x10);
        uVar7 = *puVar3;
        unaff_w21 = unaff_w21 + 1;
        puVar1[1] = puVar3[1];
        *puVar1 = uVar7;
        LeanTween__value(puVar1,0);
        iVar2 = *(int *)(unaff_x19 + 0x18);
        unaff_x22 = (ulong)(uVar6 + 1);
      }
      if (iVar2 <= (int)unaff_x22) {
        FUN_0550afb4(*(undefined8 *)(unaff_x19 + 0x10),unaff_w21,iVar2 - unaff_w21,0);
        iVar2 = *(int *)(unaff_x19 + 0x18);
        *(uint *)(unaff_x19 + 0x18) = unaff_w21;
        *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
        return iVar2 - unaff_w21;
      }
      unaff_x23 = -(unaff_x22 >> 0x1f & 1) & 0xfffffff000000000 | (unaff_x22 & 0xffffffff) << 4;
      unaff_x22 = (ulong)(int)unaff_x22;
    }
    else {
      unaff_x22 = unaff_x22 + 1;
      unaff_x23 = unaff_x23 + 0x10;
      if ((long)iVar2 <= (long)unaff_x22) goto LAB_041a25a0;
    }
    param_1 = *(long *)(unaff_x19 + 0x10);
    if (param_1 == 0) {
LAB_041a2624:
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    in_CY = *(uint *)(param_1 + 0x18) <= (uint)unaff_x22;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96868();
}


