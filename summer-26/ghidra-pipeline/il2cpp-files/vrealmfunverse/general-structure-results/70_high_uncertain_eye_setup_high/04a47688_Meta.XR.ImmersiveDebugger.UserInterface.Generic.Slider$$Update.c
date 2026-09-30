/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Slider$$Update
ENTRY_POINT: 04a47688
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x04a47ad0) */
/* WARNING: Removing unreachable block (ram,0x04a47adc) */
/* WARNING: Removing unreachable block (ram,0x04a47bfc) */
/* WARNING: Removing unreachable block (ram,0x04a47c0c) */

undefined8 Meta_XR_ImmersiveDebugger_UserInterface_Generic_Slider__Update(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x19;
  ulong unaff_x20;
  long *unaff_x23;
  long *plVar9;
  undefined4 unaff_w24;
  int iVar10;
  int iVar11;
  long unaff_x26;
  long *unaff_x27;
  long unaff_x29;
  
  uVar2 = FUN_02b3c908(**(undefined8 **)(param_1 + 0x588));
  lVar3 = thunk_FUN_02b79644(*(undefined8 *)PTR_DAT_06322bc0);
  FUN_0527e0c4(lVar3,uVar2,unaff_w24,0);
  if (unaff_x23 == (long *)0x0) {
    if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
  }
  else {
    lVar5 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x38);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02b76218(lVar5);
    }
    lVar6 = *unaff_x23;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar5) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_04a478e8;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_02b7654c();
LAB_04a478e8:
    uVar2 = (*(code *)*puVar4)();
    iVar11 = 0;
    iVar10 = 0;
    *(undefined8 *)(unaff_x29 + -0x20) = 0;
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined8 *)(unaff_x29 + -0x10) = uVar2;
LAB_04a47908:
    do {
      plVar9 = *(long **)(unaff_x29 + -0x10);
      if (plVar9 == (long *)0x0) {
        if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        goto LAB_04a47cf8;
      }
      lVar5 = *plVar9;
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *unaff_x27) {
            puVar4 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_04a4795c;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_02b7654c(plVar9,*unaff_x27,0);
LAB_04a4795c:
      uVar7 = (*(code *)*puVar4)(plVar9,puVar4[1]);
      if ((uVar7 & 1) == 0) break;
      plVar9 = *(long **)(unaff_x29 + -0x10);
      if (plVar9 == (long *)0x0) {
        if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        goto LAB_04a47cf8;
      }
      lVar5 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xe8);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_02b76218(lVar5);
      }
      lVar6 = *plVar9;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == lVar5) {
            puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_04a479e0;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_02b7654c(plVar9,lVar5,0);
LAB_04a479e0:
      (*(code *)*puVar4)(plVar9,puVar4[1]);
      iVar1 = FUN_04a47408();
      if (-1 < iVar1) {
        if (lVar3 == 0) {
          if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cac4();
          }
          goto LAB_04a47cf8;
        }
        uVar7 = FUN_0527e17c(lVar3,iVar1,0);
        if ((uVar7 & 1) == 0) {
          FUN_0527e100(lVar3,iVar1,0);
          iVar11 = iVar11 + 1;
        }
        goto LAB_04a47908;
      }
      iVar10 = iVar10 + 1;
    } while ((unaff_x20 & 1) == 0);
    plVar9 = *(long **)(unaff_x29 + -0x10);
    if (plVar9 != (long *)0x0) {
      lVar3 = *plVar9;
      uVar7 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_06312f78) {
            puVar4 = (undefined8 *)(lVar3 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_04a47ab8;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_02b7654c(plVar9,*(long *)PTR_DAT_06312f78,0);
LAB_04a47ab8:
      (*(code *)*puVar4)(plVar9,puVar4[1]);
    }
    if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
      return CONCAT44(iVar10,iVar11);
    }
  }
LAB_04a47cf8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


