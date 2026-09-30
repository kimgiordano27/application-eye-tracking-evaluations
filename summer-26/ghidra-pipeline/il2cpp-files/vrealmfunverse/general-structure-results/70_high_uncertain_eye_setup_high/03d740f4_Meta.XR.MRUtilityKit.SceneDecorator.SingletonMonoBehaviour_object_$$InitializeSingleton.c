/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneDecorator.SingletonMonoBehaviour<object>$$InitializeSingleton
ENTRY_POINT: 03d740f4
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 76
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;ray_or_cast_sink_hits_1;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_SceneDecorator_SingletonMonoBehaviour<object>__InitializeSingleton(void)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  int *piVar8;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x23;
  long *plVar9;
  int iVar10;
  undefined8 in_stack_00000018;
  
  plVar2 = (long *)FUN_04d8a7b0();
  if (unaff_x23 != (long *)0x0) {
    uVar3 = (**(code **)(*unaff_x23 + 0x298))();
    if ((uVar3 & 1) == 0) {
      if (plVar2 == (long *)0x0) goto LAB_03d74360;
      uVar3 = (**(code **)(*plVar2 + 0x298))(plVar2);
      if ((uVar3 & 1) == 0) {
        FUN_04d9c940(0);
      }
    }
    plVar2 = (long *)thunk_FUN_02b79548();
    if (plVar2 == (long *)0x0) {
      FUN_04d9c940();
    }
    plVar9 = *(long **)(unaff_x21 + 0x10);
    if (plVar9 != (long *)0x0) {
      lVar6 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x10);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_02b76218(lVar6);
      }
      lVar7 = *plVar9;
      uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar3 != 0) {
        piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == lVar6) {
            puVar4 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_03d74214;
          }
          uVar3 = uVar3 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar3 != 0);
      }
      puVar4 = (undefined8 *)FUN_02b7654c(plVar9,lVar6,0);
LAB_03d74214:
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
          uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar3 != 0) {
            piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == lVar6) {
                puVar4 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
                goto LAB_03d742a8;
              }
              uVar3 = uVar3 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar3 != 0);
          }
          puVar4 = (undefined8 *)FUN_02b7654c(plVar9,lVar6,0);
LAB_03d742a8:
          in_stack_00000018 = (*(code *)*puVar4)(plVar9,iVar10,puVar4[1]);
          lVar6 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                            (*(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x28),
                             &stack0x00000018);
          if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cac4();
          }
          if ((lVar6 != 0) &&
             (lVar7 = thunk_FUN_02b79548(lVar6,*(undefined8 *)(*plVar2 + 0x40)), lVar7 == 0)) {
            uVar5 = thunk_FUN_02b870ec();
                    /* WARNING: Subroutine does not return */
            FUN_02b3c988(uVar5,0);
          }
          if (*(uint *)(plVar2 + 3) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cacc();
          }
          plVar2[(long)(int)unaff_w19 + 4] = lVar6;
          thunk_FUN_02bb0e9c(plVar2 + (long)(int)unaff_w19 + 4,lVar6);
          iVar10 = iVar10 + 1;
          unaff_w19 = unaff_w19 + 1;
        } while (iVar10 != iVar1);
      }
      return;
    }
  }
LAB_03d74360:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


