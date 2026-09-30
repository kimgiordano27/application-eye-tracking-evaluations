/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$Copy
ENTRY_POINT: 05ccef34
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


long * Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__Copy(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long unaff_x19;
  long unaff_x26;
  undefined8 uVar8;
  
  FUN_03d2d2b0(PTR_StringLiteral_50290_091ade88);
  FUN_03d2d2b0(PTR_DAT_091fcbd8);
  FUN_03d2d2b0(PTR_DAT_091fcbe0);
  FUN_03d2d2b0(PTR_StringLiteral_50790_091adea0);
  FUN_03d2d2b0(PTR_DAT_091a1be8);
  *(undefined1 *)(unaff_x26 + 0x4ef) = 1;
  puVar1 = PTR_DAT_091a1be8;
  lVar3 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03d8f26c();
  }
  puVar2 = PTR_StringLiteral_50790_091adea0;
  lVar7 = *(long *)puVar1;
  uVar8 = **(undefined8 **)(lVar3 + 0xc0);
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_03db619c(lVar7);
  }
  uVar8 = FUN_07186ef4(uVar8,0);
  uVar4 = FUN_07186ef4(*(undefined8 *)puVar2,0);
  uVar5 = FUN_07190474(uVar8,uVar4,0);
  if ((uVar5 & 1) == 0) {
    lVar3 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03d8f26c();
    }
    puVar2 = PTR_StringLiteral_50290_091ade88;
    lVar7 = *(long *)puVar1;
    uVar8 = **(undefined8 **)(lVar3 + 0xc0);
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_03db619c(lVar7);
    }
    uVar8 = FUN_07186ef4(uVar8,0);
    uVar4 = FUN_07186ef4(*(undefined8 *)puVar2,0);
    uVar5 = FUN_07190474(uVar8,uVar4,0);
    if ((uVar5 & 1) == 0) {
      lVar3 = FUN_038016b4(*(undefined8 *)(unaff_x19 + 0x20));
      uVar8 = **(undefined8 **)(lVar3 + 0xc0);
      thunk_FUN_03d1e194(PTR_DAT_091a1be8);
      FUN_037e7a9c();
      uVar8 = FUN_07186ef4(uVar8,0);
      thunk_FUN_03d1e194(PTR_DAT_091fcbe8);
      uVar4 = thunk_FUN_03d2ef40();
      FUN_076ce3d4(uVar4,uVar8,0);
                    /* WARNING: Subroutine does not return */
      FUN_03d2d414(uVar4);
    }
    plVar6 = (long *)thunk_FUN_03d2ef40(*(undefined8 *)PTR_DAT_091fcbe0);
    FUN_076c7030();
  }
  else {
    plVar6 = (long *)thunk_FUN_03d2ef40(*(undefined8 *)PTR_DAT_091fcbd8);
    FUN_076c6eb8();
  }
  lVar3 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03d8f26c();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03d8f26c();
  }
  if (plVar6 != (long *)0x0) {
    if (*(byte *)(lVar3 + 0x130) <= *(byte *)(*plVar6 + 0x130)) {
      if (*(long *)(*(long *)(*plVar6 + 200) + (ulong)*(byte *)(lVar3 + 0x130) * 8 + -8) == lVar3) {
        return plVar6;
      }
      return (long *)0x0;
    }
  }
  return (long *)0x0;
}


