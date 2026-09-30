/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$GetEnumerator
ENTRY_POINT: 039981e4
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


int Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__GetEnumerator
              (ushort *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  long lVar3;
  long unaff_x19;
  long *unaff_x20;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if ((*param_1 & 1) == 0) {
    param_3 = FUN_02b76218(param_3);
  }
  if (unaff_x20 != (long *)0x0) {
    if (*(long *)(*unaff_x20 + 0x40) != *(long *)(param_3 + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3ce44();
    }
    puVar2 = (undefined4 *)thunk_FUN_02b7978c();
    uVar4 = *puVar2;
    uVar5 = puVar2[1];
    uVar6 = puVar2[2];
    uVar7 = puVar2[3];
    lVar3 = *(long *)(unaff_x19 + 0x10);
    *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
    if (lVar3 != 0) {
      uVar1 = *(uint *)(unaff_x19 + 0x18);
      if (uVar1 < *(uint *)(lVar3 + 0x18)) {
        lVar3 = lVar3 + (long)(int)uVar1 * 0x10;
        *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
        *(undefined4 *)(lVar3 + 0x20) = uVar4;
        *(undefined4 *)(lVar3 + 0x24) = uVar5;
        *(undefined4 *)(lVar3 + 0x28) = uVar6;
        *(undefined4 *)(lVar3 + 0x2c) = uVar7;
      }
      else {
        FUN_03998124();
      }
      return *(int *)(unaff_x19 + 0x18) + -1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


