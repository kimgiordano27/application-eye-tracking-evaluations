/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$Dispose
ENTRY_POINT: 023412e0
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


int Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__Dispose(long param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  uint in_w9;
  long unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  ulong unaff_x22;
  ulong uVar6;
  undefined8 uVar7;
  
  while (unaff_w21 < in_w9) {
    puVar3 = (undefined8 *)(param_1 + 0x20 + (long)(int)unaff_x22 * 0x10);
    uVar7 = *puVar3;
    puVar1 = (undefined8 *)(param_1 + 0x20 + (long)(int)unaff_w21 * 0x10);
    unaff_w21 = unaff_w21 + 1;
    puVar1[1] = puVar3[1];
    *puVar1 = uVar7;
    thunk_FUN_01e10808(puVar1,0);
    uVar5 = (ulong)*(uint *)(unaff_x19 + 0x18);
    unaff_x22 = (ulong)((int)unaff_x22 + 1);
    do {
      if ((int)uVar5 <= (int)unaff_x22) {
        FUN_033b4c84(*(undefined8 *)(unaff_x19 + 0x10),unaff_w21,(int)uVar5 - unaff_w21,0);
        iVar2 = *(int *)(unaff_x19 + 0x18);
        *(uint *)(unaff_x19 + 0x18) = unaff_w21;
        *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
        return iVar2 - unaff_w21;
      }
      uVar6 = -(unaff_x22 >> 0x1f & 1) & 0xfffffff000000000 | (unaff_x22 & 0xffffffff) << 4;
      unaff_x22 = (ulong)(int)unaff_x22;
      do {
        lVar4 = *(long *)(unaff_x19 + 0x10);
        if (lVar4 == 0) goto LAB_02341358;
        if (*(uint *)(lVar4 + 0x18) <= (uint)unaff_x22) goto LAB_0234135c;
        if (unaff_x20 == 0) goto LAB_02341358;
        uVar5 = (**(code **)(unaff_x20 + 0x18))
                          (*(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(lVar4 + uVar6 + 0x20),
                           *(undefined8 *)(lVar4 + uVar6 + 0x28),*(undefined8 *)(unaff_x20 + 0x28));
        if ((uVar5 & 1) == 0) {
          uVar5 = (ulong)*(uint *)(unaff_x19 + 0x18);
          break;
        }
        uVar5 = (ulong)*(int *)(unaff_x19 + 0x18);
        unaff_x22 = unaff_x22 + 1;
        uVar6 = uVar6 + 0x10;
      } while ((long)unaff_x22 < (long)uVar5);
    } while ((int)uVar5 <= (int)(uint)unaff_x22);
    param_1 = *(long *)(unaff_x19 + 0x10);
    if (param_1 == 0) {
LAB_02341358:
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
    in_w9 = *(uint *)(param_1 + 0x18);
    if (in_w9 <= (uint)unaff_x22) break;
  }
LAB_0234135c:
                    /* WARNING: Subroutine does not return */
  FUN_01d7db78();
}


