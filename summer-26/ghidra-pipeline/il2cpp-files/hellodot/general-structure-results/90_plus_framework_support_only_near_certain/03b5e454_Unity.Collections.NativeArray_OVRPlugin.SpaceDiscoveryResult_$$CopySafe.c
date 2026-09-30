/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$CopySafe
ENTRY_POINT: 03b5e454
PROGRAM: hellodot-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


int Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__CopySafe(ulong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  uint uVar5;
  ulong unaff_x21;
  uint uVar6;
  long unaff_x22;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  
  do {
    unaff_x22 = unaff_x22 + 0x10;
    if ((long)param_1 <= (long)unaff_x21) {
LAB_03b5e470:
      if ((int)param_1 <= (int)unaff_x21) {
        return 0;
      }
      uVar7 = unaff_x21 & 0xffffffff;
      do {
        unaff_x21 = (ulong)((int)unaff_x21 + 1);
        do {
          uVar6 = (uint)uVar7;
          if ((int)param_1 <= (int)unaff_x21) {
            *(uint *)(unaff_x19 + 0x18) = uVar6;
            *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
            return (int)param_1 - uVar6;
          }
          uVar8 = -(unaff_x21 >> 0x1f & 1) & 0xfffffff000000000 | (unaff_x21 & 0xffffffff) << 4;
          unaff_x21 = (ulong)(int)unaff_x21;
          do {
            lVar4 = *(long *)(unaff_x19 + 0x10);
            if (lVar4 == 0) goto LAB_03b5e550;
            if (*(uint *)(lVar4 + 0x18) <= (uint)unaff_x21) goto LAB_03b5e554;
            if (unaff_x20 == 0) goto LAB_03b5e550;
            lVar4 = lVar4 + uVar8;
            uVar3 = (**(code **)(unaff_x20 + 0x18))
                              (*(undefined4 *)(lVar4 + 0x20),*(undefined4 *)(lVar4 + 0x24),
                               *(undefined4 *)(lVar4 + 0x28),*(undefined4 *)(lVar4 + 0x2c),
                               *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x28));
            if ((uVar3 & 1) == 0) {
              param_1 = (ulong)*(uint *)(unaff_x19 + 0x18);
              break;
            }
            param_1 = (ulong)*(int *)(unaff_x19 + 0x18);
            unaff_x21 = unaff_x21 + 1;
            uVar8 = uVar8 + 0x10;
          } while ((long)unaff_x21 < (long)param_1);
          uVar5 = (uint)unaff_x21;
        } while ((int)param_1 <= (int)uVar5);
        lVar4 = *(long *)(unaff_x19 + 0x10);
        if (lVar4 == 0) {
LAB_03b5e550:
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        if ((*(uint *)(lVar4 + 0x18) <= uVar5) || (*(uint *)(lVar4 + 0x18) <= uVar6)) {
LAB_03b5e554:
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c84();
        }
        puVar1 = (undefined8 *)(lVar4 + 0x20 + (long)(int)uVar5 * 0x10);
        uVar9 = *puVar1;
        puVar2 = (undefined8 *)(lVar4 + 0x20 + (long)(int)uVar6 * 0x10);
        puVar2[1] = puVar1[1];
        *puVar2 = uVar9;
        param_1 = (ulong)*(uint *)(unaff_x19 + 0x18);
        uVar7 = (ulong)(uVar6 + 1);
      } while( true );
    }
    lVar4 = *(long *)(unaff_x19 + 0x10);
    if (lVar4 == 0) goto LAB_03b5e550;
    if (*(uint *)(lVar4 + 0x18) <= unaff_x21) goto LAB_03b5e554;
    if (unaff_x20 == 0) goto LAB_03b5e550;
    lVar4 = lVar4 + unaff_x22;
    uVar7 = (**(code **)(unaff_x20 + 0x18))
                      (*(undefined4 *)(lVar4 + 0x20),*(undefined4 *)(lVar4 + 0x24),
                       *(undefined4 *)(lVar4 + 0x28),*(undefined4 *)(lVar4 + 0x2c),
                       *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x28));
    if ((uVar7 & 1) != 0) {
      param_1 = (ulong)*(uint *)(unaff_x19 + 0x18);
      goto LAB_03b5e470;
    }
    param_1 = (ulong)*(int *)(unaff_x19 + 0x18);
    unaff_x21 = unaff_x21 + 1;
  } while( true );
}


