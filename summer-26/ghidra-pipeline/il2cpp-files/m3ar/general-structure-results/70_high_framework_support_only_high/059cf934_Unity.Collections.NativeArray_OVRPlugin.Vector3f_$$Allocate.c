/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$Allocate
ENTRY_POINT: 059cf934
PROGRAM: m3ar-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


int Unity_Collections_NativeArray<OVRPlugin_Vector3f>__Allocate(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined1 in_CY;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long unaff_x19;
  long unaff_x20;
  uint uVar8;
  long unaff_x21;
  uint uVar9;
  ulong unaff_x22;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  
  while (!(bool)in_CY) {
    if (unaff_x20 == 0) goto LAB_059cfa94;
    puVar1 = (undefined8 *)(param_1 + unaff_x21);
    in_stack_00000048 = puVar1[1];
    in_stack_00000040 = *puVar1;
    in_stack_00000058 = puVar1[3];
    in_stack_00000050 = puVar1[2];
    uVar4 = (**(code **)(unaff_x20 + 0x18))
                      (*(undefined8 *)(unaff_x20 + 0x40),&stack0x00000040,
                       *(undefined8 *)(unaff_x20 + 0x28));
    iVar3 = *(int *)(unaff_x19 + 0x18);
    if ((uVar4 & 1) != 0) {
LAB_059cf97c:
      if (iVar3 <= (int)unaff_x22) {
        return 0;
      }
      uVar4 = unaff_x22 & 0xffffffff;
      goto LAB_059cf990;
    }
    unaff_x22 = unaff_x22 + 1;
    unaff_x21 = unaff_x21 + 0x20;
    if ((long)iVar3 <= (long)unaff_x22) goto LAB_059cf97c;
    param_1 = *(long *)(unaff_x19 + 0x10);
    if (param_1 == 0) goto LAB_059cfa94;
    in_CY = *(uint *)(param_1 + 0x18) <= unaff_x22;
  }
LAB_059cfa98:
                    /* WARNING: Subroutine does not return */
  FUN_04031894();
LAB_059cf990:
  unaff_x22 = (ulong)((int)unaff_x22 + 1);
  do {
    uVar8 = (uint)uVar4;
    if (iVar3 <= (int)unaff_x22) {
      FUN_075082e0(*(undefined8 *)(unaff_x19 + 0x10),uVar4,iVar3 - uVar8,0);
      iVar3 = *(int *)(unaff_x19 + 0x18);
      *(uint *)(unaff_x19 + 0x18) = uVar8;
      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
      return iVar3 - uVar8;
    }
    uVar6 = -(unaff_x22 >> 0x1f & 1) & 0xffffffe000000000 | (unaff_x22 & 0xffffffff) << 5;
    unaff_x22 = (ulong)(int)unaff_x22;
    do {
      uVar6 = uVar6 + 0x20;
      lVar7 = *(long *)(unaff_x19 + 0x10);
      if (lVar7 == 0) goto LAB_059cfa94;
      if (*(uint *)(lVar7 + 0x18) <= (uint)unaff_x22) goto LAB_059cfa98;
      if (unaff_x20 == 0) goto LAB_059cfa94;
      puVar1 = (undefined8 *)(lVar7 + uVar6);
      in_stack_00000048 = puVar1[1];
      in_stack_00000040 = *puVar1;
      in_stack_00000058 = puVar1[3];
      in_stack_00000050 = puVar1[2];
      uVar5 = (**(code **)(unaff_x20 + 0x18))
                        (*(undefined8 *)(unaff_x20 + 0x40),&stack0x00000040,
                         *(undefined8 *)(unaff_x20 + 0x28));
      iVar3 = *(int *)(unaff_x19 + 0x18);
    } while (((uVar5 & 1) != 0) && (unaff_x22 = unaff_x22 + 1, (long)unaff_x22 < (long)iVar3));
    uVar9 = (uint)unaff_x22;
  } while (iVar3 <= (int)uVar9);
  lVar7 = *(long *)(unaff_x19 + 0x10);
  if (lVar7 == 0) {
LAB_059cfa94:
                    /* WARNING: Subroutine does not return */
    FUN_0403188c();
  }
  if ((*(uint *)(lVar7 + 0x18) <= uVar9) || (*(uint *)(lVar7 + 0x18) <= uVar8)) goto LAB_059cfa98;
  puVar1 = (undefined8 *)(lVar7 + 0x20 + (long)(int)uVar9 * 0x20);
  puVar2 = (undefined8 *)(lVar7 + 0x20 + (long)(int)uVar8 * 0x20);
  uVar12 = *puVar1;
  uVar11 = puVar1[3];
  uVar10 = puVar1[2];
  uVar4 = (ulong)(uVar8 + 1);
  puVar2[1] = puVar1[1];
  *puVar2 = uVar12;
  puVar2[3] = uVar11;
  puVar2[2] = uVar10;
  iVar3 = *(int *)(unaff_x19 + 0x18);
  goto LAB_059cf990;
}


