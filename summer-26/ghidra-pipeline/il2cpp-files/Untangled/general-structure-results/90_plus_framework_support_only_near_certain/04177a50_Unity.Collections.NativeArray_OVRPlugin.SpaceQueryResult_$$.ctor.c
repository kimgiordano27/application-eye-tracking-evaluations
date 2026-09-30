/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$.ctor
ENTRY_POINT: 04177a50
PROGRAM: Untangled-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


int Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>___ctor
              (undefined8 param_1,undefined1 param_2 [16],undefined8 param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  code *in_x9;
  long lVar5;
  long unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  uint uVar6;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack0000000000000040;
  undefined8 uStack0000000000000048;
  undefined8 uStack0000000000000050;
  
  uVar8 = param_2._8_8_;
  uVar7 = param_2._0_8_;
  do {
    uStack0000000000000040 = uVar7;
    uStack0000000000000048 = uVar8;
    uStack0000000000000050 = param_1;
    uVar2 = (*in_x9)(param_3,&stack0x00000040,*(undefined8 *)(unaff_x20 + 0x28));
    if ((uVar2 & 1) == 0) {
      iVar3 = *(int *)(unaff_x19 + 0x18);
LAB_04177a84:
      uVar6 = (uint)unaff_x22;
      if ((int)uVar6 < iVar3) {
        lVar4 = *(long *)(unaff_x19 + 0x10);
        if (lVar4 == 0) {
LAB_04177b34:
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        if (*(uint *)(lVar4 + 0x18) <= uVar6) goto LAB_04177b38;
        lVar5 = lVar4 + (long)(int)uVar6 * (long)(int)unaff_x23;
        uVar8 = *(undefined8 *)(lVar5 + 0x28);
        uVar7 = *(undefined8 *)(lVar5 + 0x20);
        if (*(uint *)(lVar4 + 0x18) <= unaff_w21) goto LAB_04177b38;
        lVar4 = lVar4 + (int)unaff_w21 * unaff_x23;
        unaff_w21 = unaff_w21 + 1;
        *(undefined8 *)(lVar4 + 0x30) = *(undefined8 *)(lVar5 + 0x30);
        *(undefined8 *)(lVar4 + 0x28) = uVar8;
        *(undefined8 *)(lVar4 + 0x20) = uVar7;
        thunk_FUN_02f411dc(lVar4 + 0x20,0);
        iVar3 = *(int *)(unaff_x19 + 0x18);
        uVar6 = uVar6 + 1;
      }
      if (iVar3 <= (int)uVar6) {
        FUN_05624da8(*(undefined8 *)(unaff_x19 + 0x10),unaff_w21,iVar3 - unaff_w21,0);
        iVar3 = *(int *)(unaff_x19 + 0x18);
        *(uint *)(unaff_x19 + 0x18) = unaff_w21;
        *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
        return iVar3 - unaff_w21;
      }
      unaff_x24 = (long)(int)uVar6 * (long)(int)unaff_x23 + 0x20;
      unaff_x22 = (long)(int)uVar6;
    }
    else {
      iVar3 = *(int *)(unaff_x19 + 0x18);
      unaff_x22 = unaff_x22 + 1;
      unaff_x24 = unaff_x24 + 0x18;
      if (iVar3 <= unaff_x22) goto LAB_04177a84;
    }
    lVar4 = *(long *)(unaff_x19 + 0x10);
    if (lVar4 == 0) goto LAB_04177b34;
    if (*(uint *)(lVar4 + 0x18) <= (uint)unaff_x22) {
LAB_04177b38:
                    /* WARNING: Subroutine does not return */
      FUN_02f080c8();
    }
    puVar1 = (undefined8 *)(lVar4 + unaff_x24);
    param_1 = puVar1[2];
    uVar8 = puVar1[1];
    uVar7 = *puVar1;
    if (unaff_x20 == 0) goto LAB_04177b34;
    in_x9 = *(code **)(unaff_x20 + 0x18);
    param_3 = *(undefined8 *)(unaff_x20 + 0x40);
  } while( true );
}


