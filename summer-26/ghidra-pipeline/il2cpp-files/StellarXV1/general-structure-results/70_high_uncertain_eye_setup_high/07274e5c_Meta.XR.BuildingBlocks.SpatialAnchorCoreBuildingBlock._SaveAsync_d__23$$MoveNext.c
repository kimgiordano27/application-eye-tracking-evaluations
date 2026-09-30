/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.SpatialAnchorCoreBuildingBlock.<SaveAsync>d__23$$MoveNext
ENTRY_POINT: 07274e5c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_7;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_BuildingBlocks_SpatialAnchorCoreBuildingBlock_<SaveAsync>d__23__MoveNext(long param_1)

{
  undefined2 uVar1;
  long lVar2;
  ulong in_x9;
  long lVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  undefined4 unaff_w21;
  ulong unaff_x22;
  undefined4 unaff_w23;
  ulong unaff_x25;
  long *unaff_x26;
  ulong unaff_x27;
  long unaff_x28;
  ulong unaff_x29;
  
  while (unaff_x29 < in_x9) {
    uVar1 = *(undefined2 *)(param_1 + unaff_x29 * 2 + 0x20);
    if (*(int *)(*unaff_x26 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    unaff_w23 = FUN_0767a564(unaff_w23,uVar1,0);
    if (*(uint *)(unaff_x20 + 0x18) <= unaff_x27) break;
    lVar2 = *(long *)(unaff_x28 + 0x20);
    if (lVar2 == 0) {
LAB_07274f9c:
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    if (*(uint *)(lVar2 + 0x18) <= unaff_x29) break;
    unaff_w21 = FUN_0767a6b4(unaff_w21,*(undefined2 *)(lVar2 + unaff_x29 * 2 + 0x20),0);
    unaff_x29 = unaff_x29 + 1;
    if (unaff_x22 == unaff_x29) {
      while( true ) {
        lVar2 = *(long *)(unaff_x19 + 0x90);
        if (lVar2 == 0) goto LAB_07274f9c;
        if (*(uint *)(lVar2 + 0x18) <= unaff_x27) goto LAB_07274f98;
        lVar3 = *(long *)(unaff_x19 + 0x98);
        if (lVar3 == 0) goto LAB_07274f9c;
        if (*(uint *)(lVar3 + 0x18) <= unaff_x27) goto LAB_07274f98;
        lVar4 = *(long *)(unaff_x19 + 0xa0);
        if (lVar4 == 0) goto LAB_07274f9c;
        if ((*(uint *)(lVar4 + 0x18) <= unaff_x27) || (*(uint *)(unaff_x20 + 0x18) <= unaff_x27))
        goto LAB_07274f98;
        FUN_07274fa0(*(undefined8 *)(lVar2 + unaff_x27 * 8 + 0x20),
                     *(undefined8 *)(lVar3 + unaff_x27 * 8 + 0x20),
                     *(undefined8 *)(lVar4 + unaff_x27 * 8 + 0x20),*(undefined8 *)(unaff_x28 + 0x20)
                     ,unaff_w21,unaff_w23,unaff_x22 & 0xffffffff);
        lVar2 = *(long *)(unaff_x19 + 0xa8);
        if (lVar2 == 0) goto LAB_07274f9c;
        if (*(uint *)(lVar2 + 0x18) <= unaff_x27) goto LAB_07274f98;
        lVar3 = unaff_x27 * 4;
        unaff_x27 = unaff_x27 + 1;
        *(undefined4 *)(lVar2 + lVar3 + 0x20) = unaff_w21;
        if (unaff_x27 == unaff_x25) {
          return;
        }
        unaff_x28 = unaff_x20 + unaff_x27 * 8;
        if (0 < (int)unaff_x22) break;
        unaff_w23 = 0;
        unaff_w21 = 0x20;
      }
      unaff_x29 = 0;
      unaff_w23 = 0;
      unaff_w21 = 0x20;
    }
    if (*(uint *)(unaff_x20 + 0x18) <= unaff_x27) break;
    param_1 = *(long *)(unaff_x28 + 0x20);
    if (param_1 == 0) goto LAB_07274f9c;
    in_x9 = (ulong)*(uint *)(param_1 + 0x18);
  }
LAB_07274f98:
                    /* WARNING: Subroutine does not return */
  FUN_04077838();
}


