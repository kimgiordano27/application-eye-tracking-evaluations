/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$Copy
ENTRY_POINT: 039997dc
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


int Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__Copy(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  long lVar6;
  long unaff_x19;
  long unaff_x20;
  uint uVar7;
  ulong unaff_x21;
  uint uVar8;
  long unaff_x22;
  ulong uVar9;
  undefined8 uVar10;
  
  do {
    if (*(uint *)(param_1 + 0x18) <= unaff_x21) goto LAB_03999904;
    if (unaff_x20 == 0) break;
                    /* try { // try from 039997ec to 03a99803 has its CatchHandler @ 03999878 */
    param_1 = param_1 + unaff_x22;
                    /* try { // try from 03999804 to 03a99867 has its CatchHandler @ 03999724 */
    uVar3 = (**(code **)(unaff_x20 + 0x18))
                      (*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24),
                       *(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),
                       *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x28));
    iVar5 = *(int *)(unaff_x19 + 0x18);
    if ((uVar3 & 1) != 0) {
LAB_03999824:
      if (iVar5 <= (int)unaff_x21) {
        return 0;
      }
      uVar3 = unaff_x21 & 0xffffffff;
      goto LAB_03999838;
    }
    unaff_x21 = unaff_x21 + 1;
    unaff_x22 = unaff_x22 + 0x10;
    if ((long)iVar5 <= (long)unaff_x21) goto LAB_03999824;
    param_1 = *(long *)(unaff_x19 + 0x10);
  } while (param_1 != 0);
LAB_03999900:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
LAB_03999838:
  unaff_x21 = (ulong)((int)unaff_x21 + 1);
  do {
    uVar8 = (uint)uVar3;
    if (iVar5 <= (int)unaff_x21) {
      *(uint *)(unaff_x19 + 0x18) = uVar8;
      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
      return iVar5 - uVar8;
    }
    uVar9 = -(unaff_x21 >> 0x1f & 1) & 0xfffffff000000000 | (unaff_x21 & 0xffffffff) << 4;
    unaff_x21 = (ulong)(int)unaff_x21;
    do {
      lVar6 = *(long *)(unaff_x19 + 0x10);
      if (lVar6 == 0) goto LAB_03999900;
      if (*(uint *)(lVar6 + 0x18) <= (uint)unaff_x21) goto LAB_03999904;
      if (unaff_x20 == 0) goto LAB_03999900;
      lVar6 = lVar6 + uVar9;
      uVar4 = (**(code **)(unaff_x20 + 0x18))
                        (*(undefined4 *)(lVar6 + 0x20),*(undefined4 *)(lVar6 + 0x24),
                         *(undefined4 *)(lVar6 + 0x28),*(undefined4 *)(lVar6 + 0x2c),
                         *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x28));
      iVar5 = *(int *)(unaff_x19 + 0x18);
      if ((uVar4 & 1) == 0) break;
      unaff_x21 = unaff_x21 + 1;
      uVar9 = uVar9 + 0x10;
    } while ((long)unaff_x21 < (long)iVar5);
    uVar7 = (uint)unaff_x21;
  } while (iVar5 <= (int)uVar7);
  lVar6 = *(long *)(unaff_x19 + 0x10);
  if (lVar6 == 0) goto LAB_03999900;
  if ((*(uint *)(lVar6 + 0x18) <= uVar7) || (*(uint *)(lVar6 + 0x18) <= uVar8)) {
LAB_03999904:
                    /* WARNING: Subroutine does not return */
    FUN_02b3cacc();
  }
  puVar1 = (undefined8 *)(lVar6 + 0x20 + (long)(int)uVar7 * 0x10);
  uVar10 = *puVar1;
  puVar2 = (undefined8 *)(lVar6 + 0x20 + (long)(int)uVar8 * 0x10);
  puVar2[1] = puVar1[1];
  *puVar2 = uVar10;
  uVar3 = (ulong)(uVar8 + 1);
  iVar5 = *(int *)(unaff_x19 + 0x18);
  goto LAB_03999838;
}


