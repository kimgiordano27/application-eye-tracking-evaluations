/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.SpaceQueryResult>$$op_Implicit
ENTRY_POINT: 05cb7c70
PROGRAM: m3ar-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray_ReadOnly<OVRPlugin_SpaceQueryResult>__op_Implicit(long param_1)

{
  ushort uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x19;
  undefined8 uVar6;
  undefined8 *unaff_x20;
  undefined8 uVar7;
  
  lVar2 = *(long *)(param_1 + 8);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_0406aaec();
  }
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  lVar2 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_0406aaec();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_0406aaec();
  }
  puVar3 = (undefined8 *)FUN_05fbad54(*(undefined8 *)(lVar2 + 0xb8),*unaff_x20);
  lVar2 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_0406aaec(lVar2);
  }
  uVar7 = *(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x10);
  if (*(int *)(*(long *)(PTR_DAT_08f65618 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  uVar7 = FUN_074f3c94(uVar7,0);
  lVar2 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_0406aaec(lVar2);
  }
  if ((*(ushort *)(*(long *)(*(long *)(lVar2 + 0xc0) + 0x20) + 0x135) & 1) == 0) {
    FUN_0406aaec();
  }
  uVar4 = thunk_FUN_0406deb8();
  lVar5 = *(long *)(unaff_x19 + 0x20);
  uVar1 = *(ushort *)(lVar5 + 0x135);
  lVar2 = lVar5;
  if ((uVar1 & 1) == 0) {
    lVar5 = FUN_0406aaec(lVar5);
    uVar1 = *(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135);
    lVar2 = *(long *)(unaff_x19 + 0x20);
  }
  uVar6 = *(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x18);
  if ((uVar1 & 1) == 0) {
    lVar2 = FUN_0406aaec(lVar2);
  }
  FUN_0525243c(uVar4,0,uVar6,*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x28));
  uVar7 = FUN_08523f60(uVar7,uVar4,0,0,0);
  *puVar3 = uVar7;
  return;
}


