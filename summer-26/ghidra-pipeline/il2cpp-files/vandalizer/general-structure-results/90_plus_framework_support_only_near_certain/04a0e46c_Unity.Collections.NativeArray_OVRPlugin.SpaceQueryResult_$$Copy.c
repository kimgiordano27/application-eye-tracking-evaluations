/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$Copy
ENTRY_POINT: 04a0e46c
PROGRAM: vandalizer-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__Copy(void)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  uint unaff_w20;
  long *unaff_x21;
  long unaff_x24;
  int unaff_w28;
  
  do {
    if (unaff_w28 < (int)unaff_w20) {
      return ~unaff_w20;
    }
    uVar1 = unaff_w20 + ((int)(unaff_w28 - unaff_w20) >> 1);
    if (*(uint *)(unaff_x24 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2398();
    }
    if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2390();
    }
    lVar3 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0322bef4();
    }
    lVar3 = **(long **)(lVar3 + 0xc0);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0322bef4(lVar3);
    }
    lVar5 = *unaff_x21;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar3) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_04a0e434;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_0322c1e8();
LAB_04a0e434:
    iVar2 = (*(code *)*puVar4)();
    if (iVar2 == 0) {
      return uVar1;
    }
    if (iVar2 < 0) {
      unaff_w20 = uVar1 + 1;
    }
    else {
      unaff_w28 = uVar1 - 1;
    }
  } while( true );
}


