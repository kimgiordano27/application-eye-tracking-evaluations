/*
FUNCTION_NAME: System.ByReference<OVRPlugin.Vector4f>$$.ctor
ENTRY_POINT: 03dc3c68
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


void System_ByReference<OVRPlugin_Vector4f>___ctor
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  int *piVar8;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  long *plVar9;
  int iVar10;
  
  uVar2 = (**(code **)(param_1 + 0x298))(param_2,param_3,*(undefined8 *)(param_1 + 0x2a0));
  if ((uVar2 & 1) == 0) {
    FUN_04d9c940(0);
  }
  plVar3 = (long *)thunk_FUN_02b79548();
  if (plVar3 == (long *)0x0) {
    FUN_04d9c940();
  }
  plVar9 = *(long **)(unaff_x21 + 0x10);
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  lVar6 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x10);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_02b76218(lVar6);
  }
  lVar7 = *plVar9;
  uVar2 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar2 != 0) {
    piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == lVar6) {
        puVar4 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
        goto FUN_03dc3d50;
      }
      uVar2 = uVar2 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar2 != 0);
  }
  puVar4 = (undefined8 *)FUN_02b7654c(plVar9,lVar6,0);
FUN_03dc3d50:
  iVar1 = (*(code *)*puVar4)(plVar9,puVar4[1]);
  if (0 < iVar1) {
    iVar10 = 0;
    do {
      plVar9 = *(long **)(unaff_x21 + 0x10);
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      lVar6 = **(long **)(*(long *)(unaff_x20 + 0x20) + 0xc0);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_02b76218(lVar6);
      }
      lVar7 = *plVar9;
      uVar2 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar2 != 0) {
        piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == lVar6) {
            puVar4 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
            goto FUN_03dc3de4;
          }
          uVar2 = uVar2 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar2 != 0);
      }
      puVar4 = (undefined8 *)FUN_02b7654c(plVar9,lVar6,0);
FUN_03dc3de4:
      (*(code *)*puVar4)(plVar9,iVar10,puVar4[1]);
      lVar6 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                        (*(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x28));
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      if ((lVar6 != 0) &&
         (lVar7 = thunk_FUN_02b79548(lVar6,*(undefined8 *)(*plVar3 + 0x40)), lVar7 == 0)) {
        uVar5 = thunk_FUN_02b870ec();
                    /* WARNING: Subroutine does not return */
        FUN_02b3c988(uVar5,0);
      }
      if (*(uint *)(plVar3 + 3) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cacc();
      }
      plVar3[(long)(int)unaff_w19 + 4] = lVar6;
      thunk_FUN_02bb0e9c(plVar3 + (long)(int)unaff_w19 + 4,lVar6);
      iVar10 = iVar10 + 1;
      unaff_w19 = unaff_w19 + 1;
    } while (iVar10 != iVar1);
  }
  return;
}


