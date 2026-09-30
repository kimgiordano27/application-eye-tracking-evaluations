/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.SpaceQueryResult>$$.cctor
ENTRY_POINT: 028daf28
PROGRAM: gunraiders-libil2cpp.so
SCORE: 107
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_EmptyInternalEnumerator<OVRPlugin_SpaceQueryResult>___cctor(long param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  long unaff_x19;
  int unaff_w20;
  long unaff_x21;
  
  lVar7 = *(long *)(param_1 + 0x1a8);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_01c72394(lVar7);
  }
  lVar7 = FUN_01c5d2fc(lVar7,unaff_w20);
  uVar2 = *(uint *)(unaff_x19 + 0x20);
  FUN_032f42b0(*(undefined8 *)(unaff_x19 + 0x18),0,lVar7,0,(ulong)uVar2,0);
  if (0 < (int)uVar2) {
    if (lVar7 == 0) {
LAB_028db000:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    uVar3 = *(uint *)(lVar7 + 0x18);
    uVar8 = 0;
    do {
      if (uVar3 <= uVar8) {
LAB_028daffc:
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4ac();
      }
      iVar4 = *(int *)(lVar7 + uVar8 * 0x28 + 0x20);
      if (-1 < iVar4) {
        if (unaff_x21 == 0) goto LAB_028db000;
        iVar6 = 0;
        if (unaff_w20 != 0) {
          iVar6 = iVar4 / unaff_w20;
        }
        uVar5 = iVar4 - iVar6 * unaff_w20;
        if (*(uint *)(unaff_x21 + 0x18) <= uVar5) goto LAB_028daffc;
        lVar1 = unaff_x21 + (ulong)uVar5 * 4;
        *(int *)(lVar7 + uVar8 * 0x28 + 0x24) = *(int *)(lVar1 + 0x20) + -1;
        *(int *)(lVar1 + 0x20) = (int)uVar8 + 1;
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 != uVar2);
  }
  *(long *)(unaff_x19 + 0x10) = unaff_x21;
  *(long *)(unaff_x19 + 0x18) = lVar7;
  return;
}


