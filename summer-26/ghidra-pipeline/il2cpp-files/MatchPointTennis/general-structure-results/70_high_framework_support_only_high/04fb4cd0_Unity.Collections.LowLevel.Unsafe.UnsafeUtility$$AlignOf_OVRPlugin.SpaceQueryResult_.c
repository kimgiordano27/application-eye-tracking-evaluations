/*
FUNCTION_NAME: Unity.Collections.LowLevel.Unsafe.UnsafeUtility$$AlignOf<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 04fb4cd0
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint Unity_Collections_LowLevel_Unsafe_UnsafeUtility__AlignOf<OVRPlugin_SpaceQueryResult>(void)

{
  uint uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  uint6 uVar4;
  uint6 uVar5;
  int iVar6;
  uint in_w8;
  undefined8 uVar7;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  uint uVar8;
  uint6 *unaff_x24;
  long unaff_x25;
  long unaff_x26;
  undefined8 *unaff_x27;
  long lVar9;
  uint6 *unaff_x28;
  undefined8 *unaff_x29;
  
  while (((uint)unaff_x26 < in_w8 && (unaff_w19 < in_w8))) {
    uVar2 = *(undefined2 *)((long)unaff_x28 + 4);
    uVar4 = *unaff_x28;
    uVar7 = *unaff_x27;
    uVar3 = *(undefined2 *)((long)unaff_x24 + 4);
    uVar5 = *unaff_x24;
    *unaff_x27 = *unaff_x29;
    *(undefined2 *)((long)unaff_x24 + 4) = uVar2;
    *(int *)unaff_x24 = (int)uVar4;
    if (*(uint *)(unaff_x21 + 0x18) <= unaff_w19) break;
    *unaff_x29 = uVar7;
    *(int *)unaff_x28 = (int)uVar5;
    *(undefined2 *)((long)unaff_x28 + 4) = uVar3;
    uVar8 = (uint)unaff_x26 + 1;
    if (*(uint *)(unaff_x21 + 0x18) <= uVar8) break;
    while( true ) {
      if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      unaff_x26 = (long)(int)uVar8;
      unaff_x24 = (uint6 *)(unaff_x21 + (long)(int)uVar8 * (long)(int)unaff_x25 + 0x28);
      unaff_x27 = (undefined8 *)(unaff_x21 + unaff_x26 * unaff_x25 + 0x20);
      iVar6 = (**(code **)(unaff_x20 + 0x18))
                        (*(undefined8 *)(unaff_x20 + 0x40),*unaff_x27,(ulong)*unaff_x24);
      if (-1 < iVar6) break;
      uVar8 = uVar8 + 1;
      if (*(uint *)(unaff_x21 + 0x18) <= uVar8) goto LAB_04fb4d38;
    }
    uVar1 = *(uint *)(unaff_x21 + 0x18);
    while( true ) {
      unaff_w19 = unaff_w19 - 1;
      if (uVar1 <= unaff_w19) goto LAB_04fb4d38;
      lVar9 = unaff_x21 + (long)(int)unaff_w19 * (long)(int)unaff_x25;
      unaff_x28 = (uint6 *)(lVar9 + 0x28);
      unaff_x29 = (undefined8 *)(lVar9 + 0x20);
      iVar6 = (**(code **)(unaff_x20 + 0x18))
                        (*(undefined8 *)(unaff_x20 + 0x40),*unaff_x29,(ulong)*unaff_x28);
      if (iVar6 < 1) break;
      uVar1 = *(uint *)(unaff_x21 + 0x18);
    }
    if ((int)unaff_w19 <= (int)uVar8) {
      return unaff_w19;
    }
    in_w8 = *(uint *)(unaff_x21 + 0x18);
  }
LAB_04fb4d38:
                    /* WARNING: Subroutine does not return */
  FUN_04447e4c();
}


