/*
FUNCTION_NAME: System.ByReference<OVRPlugin.Vector4f>$$get_Value
ENTRY_POINT: 03dc3c9c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 71
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;ray_or_cast_sink_hits_1;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_ByReference<OVRPlugin_Vector4f>__get_Value(void)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  long *plVar8;
  int iVar9;
  
  FUN_04d9c940();
  plVar8 = *(long **)(unaff_x21 + 0x10);
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  lVar4 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x10);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02b76218(lVar4);
  }
  lVar5 = *plVar8;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == lVar4) {
        puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
        goto FUN_03dc3d50;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar2 = (undefined8 *)FUN_02b7654c(plVar8,lVar4,0);
FUN_03dc3d50:
  iVar1 = (*(code *)*puVar2)(plVar8,puVar2[1]);
  if (0 < iVar1) {
    iVar9 = 0;
    do {
      plVar8 = *(long **)(unaff_x21 + 0x10);
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      lVar4 = **(long **)(*(long *)(unaff_x20 + 0x20) + 0xc0);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_02b76218(lVar4);
      }
      lVar5 = *plVar8;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == lVar4) {
            puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto FUN_03dc3de4;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar2 = (undefined8 *)FUN_02b7654c(plVar8,lVar4,0);
FUN_03dc3de4:
      (*(code *)*puVar2)(plVar8,iVar9,puVar2[1]);
      lVar4 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                        (*(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x28));
      if (unaff_x22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      if ((lVar4 != 0) &&
         (lVar5 = thunk_FUN_02b79548(lVar4,*(undefined8 *)(*unaff_x22 + 0x40)), lVar5 == 0)) {
        uVar3 = thunk_FUN_02b870ec();
                    /* WARNING: Subroutine does not return */
        FUN_02b3c988(uVar3,0);
      }
      if (*(uint *)(unaff_x22 + 3) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cacc();
      }
      unaff_x22[(long)(int)unaff_w19 + 4] = lVar4;
      thunk_FUN_02bb0e9c(unaff_x22 + (long)(int)unaff_w19 + 4,lVar4);
      iVar9 = iVar9 + 1;
      unaff_w19 = unaff_w19 + 1;
    } while (iVar9 != iVar1);
  }
  return;
}


