/*
FUNCTION_NAME: System.EmptyArray<OVRPlugin.SpaceDiscoveryResult>$$.cctor
ENTRY_POINT: 04f687b8
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 115
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_EmptyArray<OVRPlugin_SpaceDiscoveryResult>___cctor(void)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long unaff_x19;
  int unaff_w20;
  long unaff_x21;
  long unaff_x22;
  undefined8 *unaff_x23;
  
  *(undefined1 *)(unaff_x22 + 0x486) = 1;
  lVar7 = FUN_02d966a4(*unaff_x23,unaff_w20);
  lVar8 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x1b0);
  if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_02dcfd18(lVar8);
  }
  lVar8 = FUN_02d966a4(lVar8,unaff_w20);
  uVar2 = *(uint *)(unaff_x19 + 0x20);
  FUN_0550b264(*(undefined8 *)(unaff_x19 + 0x18),0,lVar8,0,(ulong)uVar2,0);
  if (0 < (int)uVar2) {
    if (lVar8 == 0) {
LAB_04f688d0:
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    uVar3 = *(uint *)(lVar8 + 0x18);
    uVar9 = 0;
    do {
      if (uVar9 == uVar3) {
LAB_04f688cc:
                    /* WARNING: Subroutine does not return */
        FUN_02d96868();
      }
      iVar4 = *(int *)(lVar8 + 0x20 + uVar9 * 0x10);
      if (-1 < iVar4) {
        if (lVar7 == 0) goto LAB_04f688d0;
        iVar6 = 0;
        if (unaff_w20 != 0) {
          iVar6 = iVar4 / unaff_w20;
        }
        uVar5 = iVar4 - iVar6 * unaff_w20;
        if (*(uint *)(lVar7 + 0x18) <= uVar5) goto LAB_04f688cc;
        lVar1 = lVar7 + (ulong)uVar5 * 4;
        *(int *)(lVar8 + 0x20 + uVar9 * 0x10 + 4) = *(int *)(lVar1 + 0x20) + -1;
        *(int *)(lVar1 + 0x20) = (int)uVar9 + 1;
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 != uVar2);
  }
  *(long *)(unaff_x19 + 0x10) = lVar7;
  LeanTween__value((long *)(unaff_x19 + 0x10),lVar7);
  *(long *)(unaff_x19 + 0x18) = lVar8;
  LeanTween__value((undefined8 *)(unaff_x19 + 0x18),lVar8);
  return;
}


