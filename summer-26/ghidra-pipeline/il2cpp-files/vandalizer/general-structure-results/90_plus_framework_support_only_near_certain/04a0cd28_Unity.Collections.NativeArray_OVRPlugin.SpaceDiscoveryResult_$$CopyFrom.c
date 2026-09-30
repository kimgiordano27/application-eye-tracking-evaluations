/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$CopyFrom
ENTRY_POINT: 04a0cd28
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


uint Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__CopyFrom(code *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  uint unaff_w19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long unaff_x23;
  uint unaff_w24;
  int unaff_w25;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 in_q5 [16];
  undefined8 uStack00000000000000e0;
  undefined8 uStack00000000000000e8;
  
  uVar8 = in_q5._8_8_;
  uVar7 = in_q5._0_8_;
  do {
    uStack00000000000000e0 = uVar7;
    uStack00000000000000e8 = uVar8;
    iVar1 = (*param_1)();
    if (iVar1 == 0) {
      return unaff_w24;
    }
    if (iVar1 < 0) {
      unaff_w19 = unaff_w24 + 1;
    }
    else {
      unaff_w25 = unaff_w24 - 1;
    }
    if (unaff_w25 < (int)unaff_w19) {
      return ~unaff_w19;
    }
    unaff_w24 = unaff_w19 + ((int)(unaff_w25 - unaff_w19) >> 1);
    if (*(uint *)(unaff_x23 + 0x18) <= unaff_w24) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2398();
    }
    uVar8 = *(undefined8 *)(unaff_x22 + 0x28);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x20);
    if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2390();
    }
    lVar2 = *(long *)(unaff_x20 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0322bef4();
    }
    lVar2 = **(long **)(lVar2 + 0xc0);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0322bef4(lVar2);
    }
    lVar4 = *unaff_x21;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar2) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_04a0cd08;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_0322c1e8();
LAB_04a0cd08:
    param_1 = (code *)*puVar3;
  } while( true );
}


