/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$CopyFrom
ENTRY_POINT: 0419ee70
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


long Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__CopyFrom
               (long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long unaff_x19;
  long unaff_x20;
  long lVar9;
  ulong uVar10;
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_054fa008(8);
  }
  if ((*(ushort *)(**(long **)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x135) & 1) == 0) {
    FUN_02dcfd18();
  }
  lVar4 = thunk_FUN_02dd3144();
  FUN_0419de7c(lVar4,*(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x110));
  if (0 < *(int *)(param_1 + 0x18)) {
    lVar9 = 0;
    uVar10 = 0;
    do {
      lVar7 = *(long *)(param_1 + 0x10);
      if (lVar7 == 0) goto LAB_0419efa8;
      if (*(uint *)(lVar7 + 0x18) <= uVar10) {
LAB_0419efac:
                    /* WARNING: Subroutine does not return */
        FUN_02d96868();
      }
      if (unaff_x20 == 0) goto LAB_0419efa8;
      uVar5 = (**(code **)(unaff_x20 + 0x18))
                        (*(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(lVar7 + lVar9 + 0x20),
                         *(undefined8 *)(lVar7 + lVar9 + 0x28),*(undefined8 *)(unaff_x20 + 0x28));
      if ((uVar5 & 1) != 0) {
        lVar7 = *(long *)(param_1 + 0x10);
        if (lVar7 == 0) goto LAB_0419efa8;
        if (*(uint *)(lVar7 + 0x18) <= uVar10) goto LAB_0419efac;
        if (lVar4 == 0) {
LAB_0419efa8:
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        uVar1 = *(undefined8 *)(lVar7 + lVar9 + 0x20);
        uVar2 = *(undefined8 *)(lVar7 + lVar9 + 0x28);
        lVar7 = *(long *)(lVar4 + 0x10);
        lVar8 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x80);
        *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
        if (lVar7 == 0) goto LAB_0419efa8;
        uVar3 = *(uint *)(lVar4 + 0x18);
        if (uVar3 < *(uint *)(lVar7 + 0x18)) {
          lVar7 = lVar7 + (long)(int)uVar3 * 0x10;
          *(uint *)(lVar4 + 0x18) = uVar3 + 1;
          puVar6 = (undefined8 *)(lVar7 + 0x20);
          *puVar6 = uVar1;
          *(undefined8 *)(lVar7 + 0x28) = uVar2;
          LeanTween__value(puVar6,0);
        }
        else {
          FUN_0419e728(lVar4,uVar1,uVar2,
                       *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
        }
      }
      uVar10 = uVar10 + 1;
      lVar9 = lVar9 + 0x10;
    } while ((long)uVar10 < (long)*(int *)(param_1 + 0x18));
  }
  return lVar4;
}


