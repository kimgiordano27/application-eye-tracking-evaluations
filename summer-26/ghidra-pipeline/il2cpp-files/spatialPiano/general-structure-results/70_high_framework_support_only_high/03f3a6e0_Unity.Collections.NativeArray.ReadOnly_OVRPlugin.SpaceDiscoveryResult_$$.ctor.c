/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.SpaceDiscoveryResult>$$.ctor
ENTRY_POINT: 03f3a6e0
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray_ReadOnly<OVRPlugin_SpaceDiscoveryResult>___ctor
               (ulong param_1,undefined4 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  long lVar4;
  
  if ((param_1 & 1) == 0) {
    FUN_02f08768(PTR_DAT_067c8fb0);
    FUN_02f08768(PTR_DAT_067cc510);
    *(undefined1 *)(unaff_x20 + 0x2e8) = 1;
  }
  lVar1 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_02f41e9c();
  }
  if ((*(ushort *)(*(long *)(*(long *)(lVar1 + 0xc0) + 0x210) + 0x135) & 1) == 0) {
    FUN_02f41e9c();
  }
  lVar1 = thunk_FUN_02f45270();
  lVar3 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02f41e9c(lVar3);
  }
  FUN_036c11d4(lVar1,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x218));
  if (lVar1 != 0) {
    lVar3 = *(long *)(unaff_x19 + 0x20);
    *(undefined4 *)(lVar1 + 0x10) = param_2;
    *(undefined8 *)(lVar1 + 0x18) = param_3;
    *(undefined8 *)(lVar1 + 0x20) = unaff_x21;
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02f41e9c();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x28);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02f41e9c();
    }
    if (**(long **)(lVar3 + 0xb8) == 0) {
      return;
    }
    lVar3 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02f41e9c();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x28);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02f41e9c();
    }
    if (**(long **)(lVar3 + 0xb8) != 0) {
      lVar4 = *(long *)(**(long **)(lVar3 + 0xb8) + 0x18);
      uVar2 = thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067c8fb0);
      lVar3 = *(long *)(unaff_x19 + 0x20);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_02f41e9c(lVar3);
      }
      FUN_05054f60(uVar2,lVar1,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x220),0);
      if (lVar4 != 0) {
        FUN_0470de18(lVar4,uVar2,*(undefined8 *)PTR_DAT_067cc510);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


