/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$set_Item
ENTRY_POINT: 0234126c
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


int Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__set_Item(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  int iVar4;
  long lVar5;
  long unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  uint uVar6;
  ulong unaff_x22;
  ulong uVar7;
  undefined8 uVar8;
  
  do {
    uVar7 = -(unaff_x22 >> 0x1f & 1) & 0xfffffff000000000 | (unaff_x22 & 0xffffffff) << 4;
    unaff_x22 = (ulong)(int)unaff_x22;
    do {
      lVar5 = *(long *)(unaff_x19 + 0x10);
      if (lVar5 == 0) goto LAB_02341358;
      if (*(uint *)(lVar5 + 0x18) <= (uint)unaff_x22) goto LAB_0234135c;
      if (unaff_x20 == 0) goto LAB_02341358;
      uVar3 = (**(code **)(unaff_x20 + 0x18))
                        (*(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(lVar5 + uVar7 + 0x20),
                         *(undefined8 *)(lVar5 + uVar7 + 0x28),*(undefined8 *)(unaff_x20 + 0x28));
      if ((uVar3 & 1) == 0) {
        iVar4 = *(int *)(unaff_x19 + 0x18);
        break;
      }
      iVar4 = *(int *)(unaff_x19 + 0x18);
      unaff_x22 = unaff_x22 + 1;
      uVar7 = uVar7 + 0x10;
    } while ((long)unaff_x22 < (long)iVar4);
    uVar6 = (uint)unaff_x22;
    if ((int)uVar6 < iVar4) {
      lVar5 = *(long *)(unaff_x19 + 0x10);
      if (lVar5 == 0) {
LAB_02341358:
                    /* WARNING: Subroutine does not return */
        FUN_01d7db70();
      }
      if ((*(uint *)(lVar5 + 0x18) <= uVar6) || (*(uint *)(lVar5 + 0x18) <= unaff_w21)) {
LAB_0234135c:
                    /* WARNING: Subroutine does not return */
        FUN_01d7db78();
      }
      puVar2 = (undefined8 *)(lVar5 + 0x20 + (long)(int)uVar6 * 0x10);
      uVar8 = *puVar2;
      puVar1 = (undefined8 *)(lVar5 + 0x20 + (long)(int)unaff_w21 * 0x10);
      unaff_w21 = unaff_w21 + 1;
      puVar1[1] = puVar2[1];
      *puVar1 = uVar8;
      thunk_FUN_01e10808(puVar1,0);
      iVar4 = *(int *)(unaff_x19 + 0x18);
      unaff_x22 = (ulong)(uVar6 + 1);
    }
    if (iVar4 <= (int)unaff_x22) {
      FUN_033b4c84(*(undefined8 *)(unaff_x19 + 0x10),unaff_w21,iVar4 - unaff_w21,0);
      iVar4 = *(int *)(unaff_x19 + 0x18);
      *(uint *)(unaff_x19 + 0x18) = unaff_w21;
      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
      return iVar4 - unaff_w21;
    }
  } while( true );
}


