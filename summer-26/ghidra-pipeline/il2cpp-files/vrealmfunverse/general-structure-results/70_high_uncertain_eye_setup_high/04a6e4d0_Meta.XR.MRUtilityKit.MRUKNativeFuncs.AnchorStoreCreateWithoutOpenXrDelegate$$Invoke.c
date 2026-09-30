/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.AnchorStoreCreateWithoutOpenXrDelegate$$Invoke
ENTRY_POINT: 04a6e4d0
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_6;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUKNativeFuncs_AnchorStoreCreateWithoutOpenXrDelegate__Invoke
               (ushort *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  undefined4 unaff_w22;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long unaff_x26;
  
  if ((*param_1 & 1) == 0) {
    param_2 = FUN_02b76218();
  }
  uVar2 = FUN_02b3c908(param_2,unaff_w22);
  *(undefined8 *)(unaff_x20 + 0x18) = uVar2;
  thunk_FUN_02bb0e9c((undefined8 *)(unaff_x20 + 0x18),uVar2);
  lVar6 = *(long *)(unaff_x20 + 0x40);
  uVar2 = *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x108);
  if (*(int *)(*(long *)(unaff_x26 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  uVar2 = FUN_04d8a7b0(uVar2,0);
  if (lVar6 != 0) {
    lVar6 = FUN_04c8ae78(lVar6,*(undefined8 *)PTR_DAT_06322b98,uVar2,0);
    lVar7 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xc0);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_02b76218(lVar7);
    }
    if (lVar6 == 0) {
      thunk_FUN_02ba3594(PTR_DAT_06320988);
      uVar2 = thunk_FUN_02b79644();
      uVar4 = thunk_FUN_02ba3594(PTR_DAT_06322ba8);
      FUN_04c82410(uVar2,uVar4,0);
                    /* WARNING: Subroutine does not return */
      FUN_02b3c988(uVar2);
    }
    lVar3 = thunk_FUN_02b79548(lVar6,lVar7);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3ce44(lVar6,lVar7);
    }
    if (0 < (int)*(ulong *)(lVar3 + 0x18)) {
      uVar8 = 0;
      uVar5 = *(ulong *)(lVar3 + 0x18) & 0xffffffff;
      do {
        if (uVar5 <= uVar8) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cacc();
        }
        FUN_04a6fe0c();
        uVar5 = (ulong)*(uint *)(lVar3 + 0x18);
        uVar8 = uVar8 + 1;
      } while ((long)uVar8 < (long)(int)*(uint *)(lVar3 + 0x18));
    }
    if (*unaff_x21 != 0) {
      uVar1 = FUN_04c8d044(*unaff_x21,*(undefined8 *)PTR_DAT_06320978,0);
      *(undefined8 *)(unaff_x20 + 0x40) = 0;
      *(undefined4 *)(unaff_x20 + 0x38) = uVar1;
      thunk_FUN_02bb0e9c();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


