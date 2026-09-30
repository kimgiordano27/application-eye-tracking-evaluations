/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$op_Equality
ENTRY_POINT: 04c3e16c
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 106
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__op_Equality(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long *unaff_x21;
  long *unaff_x23;
  
  puVar1 = PTR_DAT_07d96318;
  lVar3 = *unaff_x23;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar3 = *unaff_x23;
  }
  uVar2 = *(undefined4 *)(*(long *)(lVar3 + 0xb8) + 8);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_03798b70(*(long *)puVar1);
  }
  uVar2 = FUN_07841b58(uVar2,0);
  if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
    FUN_03775678(*(long *)(unaff_x19 + 0x20));
  }
  puVar1 = PTR_DAT_07d990a8;
  *(undefined4 *)(unaff_x21 + 0x11) = uVar2;
  uVar2 = FUN_075fdf8c();
  if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
    FUN_03775678(*(long *)(unaff_x19 + 0x20));
  }
  lVar3 = *unaff_x21;
  *(undefined4 *)(unaff_x21 + 0x10) = uVar2;
  uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
        puVar4 = (undefined8 *)(lVar3 + (long)(*piVar6 + 1) * 0x10 + 0x138);
        goto LAB_04c3e24c;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar4 = (undefined8 *)FUN_0377596c();
LAB_04c3e24c:
  (*(code *)*puVar4)();
  return;
}


