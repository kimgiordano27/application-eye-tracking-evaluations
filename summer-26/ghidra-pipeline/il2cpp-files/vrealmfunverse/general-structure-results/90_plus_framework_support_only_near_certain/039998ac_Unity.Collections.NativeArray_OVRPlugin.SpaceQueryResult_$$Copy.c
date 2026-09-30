/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$Copy
ENTRY_POINT: 039998ac
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


int Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__Copy(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  int iVar4;
  long lVar5;
  long unaff_x19;
  long unaff_x20;
  uint uVar6;
  ulong unaff_x21;
  uint unaff_w22;
  ulong uVar7;
  undefined8 uVar8;
  
  do {
    uVar6 = (uint)unaff_x21;
    if ((*(uint *)(param_1 + 0x18) <= uVar6) || (*(uint *)(param_1 + 0x18) <= unaff_w22)) {
LAB_03999904:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cacc();
    }
    puVar1 = (undefined8 *)(param_1 + 0x20 + (long)(int)uVar6 * 0x10);
    uVar8 = *puVar1;
    puVar2 = (undefined8 *)(param_1 + 0x20 + (long)(int)unaff_w22 * 0x10);
    puVar2[1] = puVar1[1];
    *puVar2 = uVar8;
    unaff_w22 = unaff_w22 + 1;
    iVar4 = *(int *)(unaff_x19 + 0x18);
    unaff_x21 = (ulong)(uVar6 + 1);
    do {
      if (iVar4 <= (int)unaff_x21) {
        *(uint *)(unaff_x19 + 0x18) = unaff_w22;
        *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
        return iVar4 - unaff_w22;
      }
      uVar7 = -(unaff_x21 >> 0x1f & 1) & 0xfffffff000000000 | (unaff_x21 & 0xffffffff) << 4;
      unaff_x21 = (ulong)(int)unaff_x21;
      do {
        lVar5 = *(long *)(unaff_x19 + 0x10);
        if (lVar5 == 0) goto LAB_03999900;
        if (*(uint *)(lVar5 + 0x18) <= (uint)unaff_x21) goto LAB_03999904;
        if (unaff_x20 == 0) goto LAB_03999900;
        lVar5 = lVar5 + uVar7;
        uVar3 = (**(code **)(unaff_x20 + 0x18))
                          (*(undefined4 *)(lVar5 + 0x20),*(undefined4 *)(lVar5 + 0x24),
                           *(undefined4 *)(lVar5 + 0x28),*(undefined4 *)(lVar5 + 0x2c),
                           *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x28));
        iVar4 = *(int *)(unaff_x19 + 0x18);
        if ((uVar3 & 1) == 0) break;
        unaff_x21 = unaff_x21 + 1;
        uVar7 = uVar7 + 0x10;
      } while ((long)unaff_x21 < (long)iVar4);
    } while (iVar4 <= (int)unaff_x21);
    param_1 = *(long *)(unaff_x19 + 0x10);
    if (param_1 == 0) {
LAB_03999900:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
  } while( true );
}


