/*
FUNCTION_NAME: System.ByReference<OVRPlugin.Vector3f>$$.ctor
ENTRY_POINT: 03dc3c00
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


void System_ByReference<OVRPlugin_Vector3f>___ctor(long param_1,long *param_2)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  int *piVar7;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  long *plVar8;
  int iVar9;
  undefined8 uVar10;
  
  lVar5 = *(long *)(*(long *)(param_1 + 0x310) + 0xe0);
  uVar10 = *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x70);
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02b9ad44(lVar5);
  }
  plVar2 = (long *)FUN_04d8a7b0(uVar10,0);
  if (param_2 != (long *)0x0) {
    uVar3 = (**(code **)(*param_2 + 0x298))(param_2,plVar2,*(undefined8 *)(*param_2 + 0x2a0));
    if ((uVar3 & 1) == 0) {
      if (plVar2 == (long *)0x0) goto LAB_03dc3e9c;
      uVar3 = (**(code **)(*plVar2 + 0x298))(plVar2,param_2,*(undefined8 *)(*plVar2 + 0x2a0));
      if ((uVar3 & 1) == 0) {
        FUN_04d9c940(0);
      }
    }
    plVar2 = (long *)thunk_FUN_02b79548();
    if (plVar2 == (long *)0x0) {
      FUN_04d9c940();
    }
    plVar8 = *(long **)(unaff_x21 + 0x10);
    if (plVar8 != (long *)0x0) {
      lVar5 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x10);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_02b76218(lVar5);
      }
      lVar6 = *plVar8;
      uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar3 != 0) {
        piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == lVar5) {
            puVar4 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
            goto FUN_03dc3d50;
          }
          uVar3 = uVar3 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar3 != 0);
      }
      puVar4 = (undefined8 *)FUN_02b7654c(plVar8,lVar5,0);
FUN_03dc3d50:
      iVar1 = (*(code *)*puVar4)(plVar8,puVar4[1]);
      if (0 < iVar1) {
        iVar9 = 0;
        do {
          plVar8 = *(long **)(unaff_x21 + 0x10);
          if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cac4();
          }
          lVar5 = **(long **)(*(long *)(unaff_x20 + 0x20) + 0xc0);
          if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_02b76218(lVar5);
          }
          lVar6 = *plVar8;
          uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar3 != 0) {
            piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == lVar5) {
                puVar4 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
                goto FUN_03dc3de4;
              }
              uVar3 = uVar3 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar3 != 0);
          }
          puVar4 = (undefined8 *)FUN_02b7654c(plVar8,lVar5,0);
FUN_03dc3de4:
          (*(code *)*puVar4)(plVar8,iVar9,puVar4[1]);
          lVar5 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                            (*(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x28));
          if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cac4();
          }
          if ((lVar5 != 0) &&
             (lVar6 = thunk_FUN_02b79548(lVar5,*(undefined8 *)(*plVar2 + 0x40)), lVar6 == 0)) {
            uVar10 = thunk_FUN_02b870ec();
                    /* WARNING: Subroutine does not return */
            FUN_02b3c988(uVar10,0);
          }
          if (*(uint *)(plVar2 + 3) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cacc();
          }
          plVar2[(long)(int)unaff_w19 + 4] = lVar5;
          thunk_FUN_02bb0e9c(plVar2 + (long)(int)unaff_w19 + 4,lVar5);
          iVar9 = iVar9 + 1;
          unaff_w19 = unaff_w19 + 1;
        } while (iVar9 != iVar1);
      }
      return;
    }
  }
LAB_03dc3e9c:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


