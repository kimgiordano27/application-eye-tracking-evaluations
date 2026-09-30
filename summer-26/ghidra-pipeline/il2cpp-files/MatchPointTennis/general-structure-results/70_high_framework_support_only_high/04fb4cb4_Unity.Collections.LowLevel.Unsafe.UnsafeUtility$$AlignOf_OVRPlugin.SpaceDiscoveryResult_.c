/*
FUNCTION_NAME: Unity.Collections.LowLevel.Unsafe.UnsafeUtility$$AlignOf<OVRPlugin.SpaceDiscoveryResult>
ENTRY_POINT: 04fb4cb4
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint Unity_Collections_LowLevel_Unsafe_UnsafeUtility__AlignOf<OVRPlugin_SpaceDiscoveryResult>(void)

{
  undefined2 uVar1;
  undefined2 uVar2;
  uint6 uVar3;
  uint6 uVar4;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  int iVar5;
  undefined8 uVar6;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  uint6 *unaff_x24;
  long unaff_x25;
  uint uVar7;
  long unaff_x26;
  undefined8 *unaff_x27;
  long lVar8;
  uint6 *unaff_x28;
  undefined8 *unaff_x29;
  
  do {
    if ((bool)in_ZR || in_NG != in_OV) {
      uVar7 = (uint)unaff_x26;
      if ((int)unaff_w19 <= (int)uVar7) {
        return unaff_w19;
      }
      if ((*(uint *)(unaff_x21 + 0x18) <= uVar7) || (*(uint *)(unaff_x21 + 0x18) <= unaff_w19)) {
LAB_04fb4d38:
                    /* WARNING: Subroutine does not return */
        FUN_04447e4c();
      }
      uVar1 = *(undefined2 *)((long)unaff_x28 + 4);
      uVar3 = *unaff_x28;
      uVar6 = *unaff_x27;
      uVar2 = *(undefined2 *)((long)unaff_x24 + 4);
      uVar4 = *unaff_x24;
      *unaff_x27 = *unaff_x29;
      *(undefined2 *)((long)unaff_x24 + 4) = uVar1;
      *(int *)unaff_x24 = (int)uVar3;
      if (*(uint *)(unaff_x21 + 0x18) <= unaff_w19) goto LAB_04fb4d38;
      *unaff_x29 = uVar6;
      *(int *)unaff_x28 = (int)uVar4;
      *(undefined2 *)((long)unaff_x28 + 4) = uVar2;
      uVar7 = uVar7 + 1;
      if (*(uint *)(unaff_x21 + 0x18) <= uVar7) goto LAB_04fb4d38;
      while( true ) {
        if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        unaff_x26 = (long)(int)uVar7;
        unaff_x24 = (uint6 *)(unaff_x21 + (long)(int)uVar7 * (long)(int)unaff_x25 + 0x28);
        unaff_x27 = (undefined8 *)(unaff_x21 + unaff_x26 * unaff_x25 + 0x20);
        iVar5 = (**(code **)(unaff_x20 + 0x18))
                          (*(undefined8 *)(unaff_x20 + 0x40),*unaff_x27,(ulong)*unaff_x24);
        if (-1 < iVar5) break;
        uVar7 = uVar7 + 1;
        if (*(uint *)(unaff_x21 + 0x18) <= uVar7) goto LAB_04fb4d38;
      }
      uVar7 = *(uint *)(unaff_x21 + 0x18);
    }
    else {
      uVar7 = *(uint *)(unaff_x21 + 0x18);
    }
    unaff_w19 = unaff_w19 - 1;
    if (uVar7 <= unaff_w19) goto LAB_04fb4d38;
    lVar8 = unaff_x21 + (long)(int)unaff_w19 * (long)(int)unaff_x25;
    unaff_x28 = (uint6 *)(lVar8 + 0x28);
    unaff_x29 = (undefined8 *)(lVar8 + 0x20);
    iVar5 = (**(code **)(unaff_x20 + 0x18))
                      (*(undefined8 *)(unaff_x20 + 0x40),*unaff_x29,(ulong)*unaff_x28);
    in_NG = iVar5 < 0;
    in_ZR = iVar5 == 0;
    in_OV = '\0';
  } while( true );
}


