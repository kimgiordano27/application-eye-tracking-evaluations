/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.SpaceQueryResult>$$AsReadOnlySpan
ENTRY_POINT: 05cb7c28
PROGRAM: m3ar-libil2cpp.so
SCORE: 86
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray_ReadOnly<OVRPlugin_SpaceQueryResult>__AsReadOnlySpan
               (long param_1)

{
  ushort uVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long unaff_x19;
  undefined8 uVar8;
  undefined8 uVar9;
  
  puVar2 = PTR_DAT_08f8b600;
  lVar3 = *(long *)(param_1 + 8);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_0406aaec();
  }
  plVar4 = (long *)FUN_05fbad54(*(undefined8 *)(lVar3 + 0xb8),*(undefined8 *)puVar2);
  if (*plVar4 == 0) {
    lVar3 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0406aaec();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0406aaec();
    }
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    lVar3 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0406aaec();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0406aaec();
    }
    puVar5 = (undefined8 *)FUN_05fbad54(*(undefined8 *)(lVar3 + 0xb8),*(undefined8 *)puVar2);
    lVar3 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0406aaec(lVar3);
    }
    uVar9 = *(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x10);
    if (*(int *)(*(long *)(PTR_DAT_08f65618 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    uVar9 = FUN_074f3c94(uVar9,0);
    lVar3 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0406aaec(lVar3);
    }
    if ((*(ushort *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x20) + 0x135) & 1) == 0) {
      FUN_0406aaec();
    }
    uVar6 = thunk_FUN_0406deb8();
    lVar7 = *(long *)(unaff_x19 + 0x20);
    uVar1 = *(ushort *)(lVar7 + 0x135);
    lVar3 = lVar7;
    if ((uVar1 & 1) == 0) {
      lVar7 = FUN_0406aaec(lVar7);
      uVar1 = *(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135);
      lVar3 = *(long *)(unaff_x19 + 0x20);
    }
    uVar8 = *(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x18);
    if ((uVar1 & 1) == 0) {
      lVar3 = FUN_0406aaec(lVar3);
    }
    FUN_0525243c(uVar6,0,uVar8,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x28));
    uVar9 = FUN_08523f60(uVar9,uVar6,0,0,0);
    *puVar5 = uVar9;
  }
  return;
}


