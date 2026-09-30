/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$set_Item
ENTRY_POINT: 059cfa10
PROGRAM: m3ar-libil2cpp.so
SCORE: 80
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


int Unity_Collections_NativeArray<OVRPlugin_Vector3f>__set_Item(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  uint uVar7;
  ulong unaff_x22;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  
  do {
    uVar7 = (uint)unaff_x22;
    if ((*(uint *)(param_1 + 0x18) <= uVar7) || (*(uint *)(param_1 + 0x18) <= unaff_w21)) {
LAB_059cfa98:
                    /* WARNING: Subroutine does not return */
      FUN_04031894();
    }
    puVar1 = (undefined8 *)(param_1 + 0x20 + (long)(int)uVar7 * 0x20);
    puVar2 = (undefined8 *)(param_1 + 0x20 + (long)(int)unaff_w21 * 0x20);
    uVar10 = *puVar1;
    uVar9 = puVar1[3];
    uVar8 = puVar1[2];
    unaff_w21 = unaff_w21 + 1;
    puVar2[1] = puVar1[1];
    *puVar2 = uVar10;
    puVar2[3] = uVar9;
    puVar2[2] = uVar8;
    iVar3 = *(int *)(unaff_x19 + 0x18);
    unaff_x22 = (ulong)(uVar7 + 1);
    do {
      if (iVar3 <= (int)unaff_x22) {
        FUN_075082e0(*(undefined8 *)(unaff_x19 + 0x10),unaff_w21,iVar3 - unaff_w21,0);
        iVar3 = *(int *)(unaff_x19 + 0x18);
        *(uint *)(unaff_x19 + 0x18) = unaff_w21;
        *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
        return iVar3 - unaff_w21;
      }
      uVar5 = -(unaff_x22 >> 0x1f & 1) & 0xffffffe000000000 | (unaff_x22 & 0xffffffff) << 5;
      unaff_x22 = (ulong)(int)unaff_x22;
      do {
        uVar5 = uVar5 + 0x20;
        lVar6 = *(long *)(unaff_x19 + 0x10);
        if (lVar6 == 0) goto LAB_059cfa94;
        if (*(uint *)(lVar6 + 0x18) <= (uint)unaff_x22) goto LAB_059cfa98;
        if (unaff_x20 == 0) goto LAB_059cfa94;
        puVar1 = (undefined8 *)(lVar6 + uVar5);
        in_stack_00000048 = puVar1[1];
        in_stack_00000040 = *puVar1;
        in_stack_00000058 = puVar1[3];
        in_stack_00000050 = puVar1[2];
        uVar4 = (**(code **)(unaff_x20 + 0x18))
                          (*(undefined8 *)(unaff_x20 + 0x40),&stack0x00000040,
                           *(undefined8 *)(unaff_x20 + 0x28));
        iVar3 = *(int *)(unaff_x19 + 0x18);
      } while (((uVar4 & 1) != 0) && (unaff_x22 = unaff_x22 + 1, (long)unaff_x22 < (long)iVar3));
    } while (iVar3 <= (int)unaff_x22);
    param_1 = *(long *)(unaff_x19 + 0x10);
  } while (param_1 != 0);
LAB_059cfa94:
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


