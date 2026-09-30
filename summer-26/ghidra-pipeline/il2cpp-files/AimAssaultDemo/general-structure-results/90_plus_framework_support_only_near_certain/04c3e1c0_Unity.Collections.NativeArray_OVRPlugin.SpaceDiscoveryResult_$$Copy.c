/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$Copy
ENTRY_POINT: 04c3e1c0
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 94
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__Copy(undefined8 param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long *unaff_x21;
  undefined4 unaff_w22;
  
  FUN_03775678(param_1);
  puVar1 = PTR_DAT_07d990a8;
  *(undefined4 *)(unaff_x21 + 0x11) = unaff_w22;
  uVar2 = FUN_075fdf8c();
  if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
    FUN_03775678(*(long *)(unaff_x19 + 0x20));
  }
  lVar4 = *unaff_x21;
  *(undefined4 *)(unaff_x21 + 0x10) = uVar2;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
        puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 1) * 0x10 + 0x138);
        goto LAB_04c3e24c;
      }
                    /* try { // try from 04c3e220 to 04d3e26b has its CatchHandler @ 04c3e220
                       catch() { ... } // from try @ 04c3e220 with catch @ 04c3e220
                       catch() { ... } // from try @ 04c3e2ec with catch @ 04c3e220
                       catch() { ... } // from try @ 04c3e31c with catch @ 04c3e220
                       catch() { ... } // from try @ 04c3e39c with catch @ 04c3e220 */
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar3 = (undefined8 *)FUN_0377596c();
LAB_04c3e24c:
  (*(code *)*puVar3)();
  return;
}


