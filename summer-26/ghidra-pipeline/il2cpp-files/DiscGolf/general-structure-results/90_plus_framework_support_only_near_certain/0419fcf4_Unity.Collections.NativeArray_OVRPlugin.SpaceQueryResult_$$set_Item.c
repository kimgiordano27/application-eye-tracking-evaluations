/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$set_Item
ENTRY_POINT: 0419fcf4
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


int Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__set_Item(void)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong uVar4;
  int in_w8;
  long lVar5;
  long unaff_x19;
  long unaff_x20;
  uint uVar6;
  long unaff_x21;
  ulong uVar7;
  uint uVar8;
  ulong unaff_x22;
  ulong uVar9;
  undefined8 uVar10;
  
  do {
    unaff_x22 = unaff_x22 + 1;
    unaff_x21 = unaff_x21 + 0x10;
    if ((long)in_w8 <= (long)unaff_x22) break;
    lVar5 = *(long *)(unaff_x19 + 0x10);
    if (lVar5 == 0) goto LAB_0419fe00;
    if (*(uint *)(lVar5 + 0x18) <= unaff_x22) goto LAB_0419fe04;
    if (unaff_x20 == 0) goto LAB_0419fe00;
    uVar7 = (**(code **)(unaff_x20 + 0x18))
                      (*(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(lVar5 + unaff_x21 + 0x20),
                       *(undefined8 *)(lVar5 + unaff_x21 + 0x28),*(undefined8 *)(unaff_x20 + 0x28));
    in_w8 = *(int *)(unaff_x19 + 0x18);
  } while ((uVar7 & 1) == 0);
  if (in_w8 <= (int)unaff_x22) {
    return 0;
  }
  uVar7 = unaff_x22 & 0xffffffff;
  do {
    unaff_x22 = (ulong)((int)unaff_x22 + 1);
    do {
      uVar6 = (uint)uVar7;
      if (in_w8 <= (int)unaff_x22) {
        FUN_0550afb4(*(undefined8 *)(unaff_x19 + 0x10),uVar7,in_w8 - uVar6,0);
        iVar2 = *(int *)(unaff_x19 + 0x18);
        *(uint *)(unaff_x19 + 0x18) = uVar6;
        *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
        return iVar2 - uVar6;
      }
      uVar9 = -(unaff_x22 >> 0x1f & 1) & 0xfffffff000000000 | (unaff_x22 & 0xffffffff) << 4;
      unaff_x22 = (ulong)(int)unaff_x22;
      do {
        lVar5 = *(long *)(unaff_x19 + 0x10);
        if (lVar5 == 0) goto LAB_0419fe00;
        if (*(uint *)(lVar5 + 0x18) <= (uint)unaff_x22) goto LAB_0419fe04;
        if (unaff_x20 == 0) goto LAB_0419fe00;
        uVar4 = (**(code **)(unaff_x20 + 0x18))
                          (*(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(lVar5 + uVar9 + 0x20),
                           *(undefined8 *)(lVar5 + uVar9 + 0x28),*(undefined8 *)(unaff_x20 + 0x28));
        in_w8 = *(int *)(unaff_x19 + 0x18);
        if ((uVar4 & 1) == 0) break;
        unaff_x22 = unaff_x22 + 1;
        uVar9 = uVar9 + 0x10;
      } while ((long)unaff_x22 < (long)in_w8);
      uVar8 = (uint)unaff_x22;
    } while (in_w8 <= (int)uVar8);
    lVar5 = *(long *)(unaff_x19 + 0x10);
    if (lVar5 == 0) {
LAB_0419fe00:
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    if ((*(uint *)(lVar5 + 0x18) <= uVar8) || (*(uint *)(lVar5 + 0x18) <= uVar6)) {
LAB_0419fe04:
                    /* WARNING: Subroutine does not return */
      FUN_02d96868();
    }
    puVar1 = (undefined8 *)(lVar5 + 0x20 + (long)(int)uVar6 * 0x10);
    puVar3 = (undefined8 *)(lVar5 + 0x20 + (long)(int)uVar8 * 0x10);
    uVar10 = *puVar3;
    uVar7 = (ulong)(uVar6 + 1);
    puVar1[1] = puVar3[1];
    *puVar1 = uVar10;
    LeanTween__value(puVar1,0);
    in_w8 = *(int *)(unaff_x19 + 0x18);
  } while( true );
}


