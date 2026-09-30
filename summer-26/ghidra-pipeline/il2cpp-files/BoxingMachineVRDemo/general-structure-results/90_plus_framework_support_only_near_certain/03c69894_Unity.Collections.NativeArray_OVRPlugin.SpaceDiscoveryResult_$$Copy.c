/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$Copy
ENTRY_POINT: 03c69894
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 100
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__Copy(void)

{
  int in_w8;
  long lVar1;
  int in_w9;
  long unaff_x19;
  uint unaff_w20;
  undefined8 *unaff_x21;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  if (in_w8 == in_w9) {
    FUN_03c68fc0();
    in_w8 = *(int *)(unaff_x19 + 0x18);
  }
  if (in_w8 - unaff_w20 != 0 && (int)unaff_w20 <= in_w8) {
    FUN_05029918(*(undefined8 *)(unaff_x19 + 0x10),unaff_w20,*(undefined8 *)(unaff_x19 + 0x10),
                 unaff_w20 + 1,in_w8 - unaff_w20,0);
  }
  uVar2 = unaff_x21[4];
  uVar4 = unaff_x21[7];
  uVar3 = unaff_x21[6];
  uVar6 = unaff_x21[1];
  uVar5 = *unaff_x21;
  uVar8 = unaff_x21[3];
  uVar7 = unaff_x21[2];
  lVar1 = *(long *)(unaff_x19 + 0x10);
  if (lVar1 != 0) {
    if (unaff_w20 < *(uint *)(lVar1 + 0x18)) {
      lVar1 = lVar1 + (long)(int)unaff_w20 * 0x40;
      *(undefined8 *)(lVar1 + 0x48) = unaff_x21[5];
      *(undefined8 *)(lVar1 + 0x40) = uVar2;
      *(undefined8 *)(lVar1 + 0x58) = uVar4;
      *(undefined8 *)(lVar1 + 0x50) = uVar3;
      *(undefined8 *)(lVar1 + 0x28) = uVar6;
      *(undefined8 *)(lVar1 + 0x20) = uVar5;
      *(undefined8 *)(lVar1 + 0x38) = uVar8;
      *(undefined8 *)(lVar1 + 0x30) = uVar7;
      thunk_FUN_02dd37b4(lVar1 + 0x20,0);
      *(ulong *)(unaff_x19 + 0x18) =
           CONCAT44((int)((ulong)*(undefined8 *)(unaff_x19 + 0x18) >> 0x20) + 1,
                    (int)*(undefined8 *)(unaff_x19 + 0x18) + 1);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_02d60af0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


