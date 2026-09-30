/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Fusion.AvatarBehaviourFusion$$OnAvatarIdChanged
ENTRY_POINT: 052f3914
PROGRAM: Untangled-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_7;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MultiplayerBlocks_Fusion_AvatarBehaviourFusion__OnAvatarIdChanged(undefined **param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x23;
  uint unaff_w25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  
  while( true ) {
    lVar2 = thunk_FUN_02ef1808(*(undefined8 *)param_1[0x1f7]);
    FUN_066c9ce0(lVar2,*(undefined8 *)PTR_DAT_06d3dea8,0);
    if (lVar2 == 0) break;
    lVar3 = FUN_066c9a48(lVar2,0);
    uVar4 = FUN_066c9a48(unaff_x23,0);
    if (lVar3 == 0) break;
    FUN_066d51ec(lVar3,uVar4,0,0);
    lVar3 = FUN_03a862a4(lVar2,*(undefined8 *)PTR_DAT_06d094e0);
    uVar4 = FUN_066a6534(unaff_x21,0);
    if (lVar3 == 0) break;
    FUN_066a6570(lVar3,uVar4,0);
    lVar3 = FUN_03a862a4(lVar2,*unaff_x27);
    uVar4 = FUN_03b659e4(*unaff_x29,*unaff_x28);
    if (lVar3 == 0) break;
    FUN_066a1d74(lVar3,uVar4,0);
    if (*(long *)(unaff_x19 + 0x28) == 0) break;
    FUN_05242864(*(long *)(unaff_x19 + 0x28),lVar2,*unaff_x26);
    FUN_066c9b04(lVar2,0,0);
    unaff_w25 = unaff_w25 + 1;
    if ((int)*(uint *)(unaff_x20 + 0x18) <= (int)unaff_w25) {
      return;
    }
    if (*(uint *)(unaff_x20 + 0x18) <= unaff_w25) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c8();
    }
    unaff_x21 = *(long *)(unaff_x20 + (long)(int)unaff_w25 * 8 + 0x20);
    if ((unaff_x21 == 0) || (unaff_x23 = FUN_066c67ec(unaff_x21,0), unaff_x23 == 0)) break;
    uVar4 = FUN_03a8638c(unaff_x23,*(undefined8 *)PTR_DAT_06d09248);
    if (*(int *)(*(long *)PTR_DAT_06d01e20 + 0xe0) == 0) {
      thunk_FUN_02f12b58(*(long *)PTR_DAT_06d01e20);
    }
    uVar1 = FUN_066cd30c(uVar4,0);
    if ((uVar1 & 1) != 0) {
      if (*(long *)(unaff_x19 + 0x30) == 0) break;
      FUN_05242864(*(long *)(unaff_x19 + 0x30),uVar4,*(undefined8 *)PTR_DAT_06d3dea0);
    }
    param_1 = &PTR_typeinfo_name_06d01000;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


