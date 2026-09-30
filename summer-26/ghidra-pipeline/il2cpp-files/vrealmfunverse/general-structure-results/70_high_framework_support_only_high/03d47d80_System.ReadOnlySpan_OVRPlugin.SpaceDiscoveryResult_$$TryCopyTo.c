/*
FUNCTION_NAME: System.ReadOnlySpan<OVRPlugin.SpaceDiscoveryResult>$$TryCopyTo
ENTRY_POINT: 03d47d80
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 85
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;ray_or_cast_sink_hits_1;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_ReadOnlySpan<OVRPlugin_SpaceDiscoveryResult>__TryCopyTo
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  int *piVar6;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  int unaff_w23;
  int unaff_w24;
  long *plVar7;
  long unaff_x26;
  undefined1 auVar8 [16];
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  
  auVar8._8_8_ = param_3;
  auVar8._0_8_ = param_2;
  do {
    _uStack0000000000000000 = auVar8;
    lVar2 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                      (*(undefined8 *)(*(long *)(param_1 + 0xc0) + 0x28));
    if (unaff_x22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    if ((lVar2 != 0) &&
       (lVar3 = thunk_FUN_02b79548(lVar2,*(undefined8 *)(*unaff_x22 + 0x40)), lVar3 == 0)) {
      uVar4 = thunk_FUN_02b870ec();
                    /* WARNING: Subroutine does not return */
      FUN_02b3c988(uVar4,0);
    }
    if (*(uint *)(unaff_x22 + 3) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cacc();
    }
    unaff_x22[(long)(int)unaff_w19 + 4] = lVar2;
    thunk_FUN_02bb0e9c(unaff_x26 + (long)(int)unaff_w19 * 8,lVar2);
    unaff_w24 = unaff_w24 + 1;
    unaff_w19 = unaff_w19 + 1;
    if (unaff_w24 == unaff_w23) {
      return;
    }
    plVar7 = *(long **)(unaff_x21 + 0x10);
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    lVar2 = **(long **)(*(long *)(unaff_x20 + 0x20) + 0xc0);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02b76218(lVar2);
    }
    lVar3 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar2) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_03d47d6c;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar1 = (undefined8 *)FUN_02b7654c(plVar7,lVar2,0);
LAB_03d47d6c:
    auVar8 = (*(code *)*puVar1)(plVar7,unaff_w24,puVar1[1]);
    param_1 = *(long *)(unaff_x20 + 0x20);
  } while( true );
}


