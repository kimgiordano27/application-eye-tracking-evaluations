/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$Copy
ENTRY_POINT: 041a24f8
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_10;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_5
*/


int Unity_Collections_NativeArray<OVRPlugin_Vector3f>__Copy(long param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long unaff_x19;
  long unaff_x20;
  uint uVar7;
  long unaff_x21;
  uint uVar8;
  ulong unaff_x22;
  ulong uVar9;
  undefined8 uVar10;
  
  do {
    uVar4 = (**(code **)(unaff_x20 + 0x18))
                      (*(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(param_1 + unaff_x21 + 0x20)
                       ,*(undefined8 *)(param_1 + unaff_x21 + 0x28),
                       *(undefined8 *)(unaff_x20 + 0x28));
    iVar2 = *(int *)(unaff_x19 + 0x18);
    if ((uVar4 & 1) != 0) {
LAB_041a252c:
      if (iVar2 <= (int)unaff_x22) {
        return 0;
      }
      uVar4 = unaff_x22 & 0xffffffff;
      goto LAB_041a2540;
    }
    unaff_x22 = unaff_x22 + 1;
    unaff_x21 = unaff_x21 + 0x10;
    if ((long)iVar2 <= (long)unaff_x22) goto LAB_041a252c;
    param_1 = *(long *)(unaff_x19 + 0x10);
    if (param_1 == 0) break;
    if (*(uint *)(param_1 + 0x18) <= unaff_x22)
    goto Unity_Collections_NativeArray<OVRPlugin_Vector3f>__Copy;
  } while (unaff_x20 != 0);
LAB_041a2624:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
LAB_041a2540:
  unaff_x22 = (ulong)((int)unaff_x22 + 1);
  do {
    uVar7 = (uint)uVar4;
    if (iVar2 <= (int)unaff_x22) {
      FUN_0550afb4(*(undefined8 *)(unaff_x19 + 0x10),uVar4,iVar2 - uVar7,0);
      iVar2 = *(int *)(unaff_x19 + 0x18);
      *(uint *)(unaff_x19 + 0x18) = uVar7;
      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
      return iVar2 - uVar7;
    }
    uVar9 = -(unaff_x22 >> 0x1f & 1) & 0xfffffff000000000 | (unaff_x22 & 0xffffffff) << 4;
    unaff_x22 = (ulong)(int)unaff_x22;
    do {
      lVar6 = *(long *)(unaff_x19 + 0x10);
      if (lVar6 == 0) goto LAB_041a2624;
      if (*(uint *)(lVar6 + 0x18) <= (uint)unaff_x22)
      goto Unity_Collections_NativeArray<OVRPlugin_Vector3f>__Copy;
      if (unaff_x20 == 0) goto LAB_041a2624;
      uVar5 = (**(code **)(unaff_x20 + 0x18))
                        (*(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(lVar6 + uVar9 + 0x20),
                         *(undefined8 *)(lVar6 + uVar9 + 0x28),*(undefined8 *)(unaff_x20 + 0x28));
      iVar2 = *(int *)(unaff_x19 + 0x18);
      if ((uVar5 & 1) == 0) break;
      unaff_x22 = unaff_x22 + 1;
      uVar9 = uVar9 + 0x10;
    } while ((long)unaff_x22 < (long)iVar2);
    uVar8 = (uint)unaff_x22;
  } while (iVar2 <= (int)uVar8);
  lVar6 = *(long *)(unaff_x19 + 0x10);
  if (lVar6 == 0) goto LAB_041a2624;
  if ((*(uint *)(lVar6 + 0x18) <= uVar8) || (*(uint *)(lVar6 + 0x18) <= uVar7)) {
Unity_Collections_NativeArray<OVRPlugin_Vector3f>__Copy:
                    /* WARNING: Subroutine does not return */
    FUN_02d96868();
  }
  puVar1 = (undefined8 *)(lVar6 + 0x20 + (long)(int)uVar7 * 0x10);
  puVar3 = (undefined8 *)(lVar6 + 0x20 + (long)(int)uVar8 * 0x10);
  uVar10 = *puVar3;
  uVar4 = (ulong)(uVar7 + 1);
  puVar1[1] = puVar3[1];
  *puVar1 = uVar10;
  LeanTween__value(puVar1,0);
  iVar2 = *(int *)(unaff_x19 + 0x18);
  goto LAB_041a2540;
}


