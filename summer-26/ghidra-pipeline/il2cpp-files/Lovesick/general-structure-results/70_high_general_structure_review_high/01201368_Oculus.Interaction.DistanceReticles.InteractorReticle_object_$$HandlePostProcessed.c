/*
FUNCTION_NAME: Oculus.Interaction.DistanceReticles.InteractorReticle<object>$$HandlePostProcessed
ENTRY_POINT: 01201368
PROGRAM: Lovesick-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_5;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2
*/


void Oculus_Interaction_DistanceReticles_InteractorReticle<object>__HandlePostProcessed
               (long param_1,ulong param_2)

{
  undefined *puVar1;
  void *pvVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  uint uVar7;
  void *unaff_x21;
  long *unaff_x22;
  size_t unaff_x23;
  void *unaff_x24;
  long *unaff_x28;
  long unaff_x29;
  
  if ((*(byte *)(param_1 + 0x132) & 1) == 0) {
    param_1 = FUN_00d5941c(param_1);
  }
  if ((*(byte *)(**(long **)(param_1 + 0xc0) + 0x132) & 1) == 0) {
    FUN_00d5941c();
  }
  pvVar2 = (void *)thunk_FUN_00d32ed4();
  if ((param_2 & 1) == 0) {
    memcpy(unaff_x24,pvVar2,unaff_x23);
    memcpy(unaff_x21,unaff_x24,unaff_x23);
    pvVar2 = *(void **)(unaff_x29 + -0x140);
    memcpy(pvVar2,unaff_x21,unaff_x23);
    lVar3 = *unaff_x28;
    if ((*(byte *)(lVar3 + 0x132) & 1) == 0) {
      lVar3 = FUN_00d5941c();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0xf8);
    if ((*(byte *)(lVar3 + 0x132) & 1) == 0) {
      lVar3 = FUN_00d5941c();
    }
    uVar4 = FUN_00da5124(lVar3,pvVar2);
    if ((uVar4 & 1) != 0) goto LAB_0120144c;
    lVar3 = 0;
  }
  else {
    lVar3 = *unaff_x28;
    if ((*(byte *)(lVar3 + 0x132) & 1) == 0) {
      lVar3 = FUN_00d5941c();
    }
    if ((*(byte *)(**(long **)(lVar3 + 0xc0) + 0x132) & 1) == 0) {
      FUN_00d5941c();
    }
    unaff_x21 = (void *)thunk_FUN_00d32ed4();
LAB_0120144c:
    lVar3 = *unaff_x28;
    if ((*(byte *)(lVar3 + 0x132) & 1) == 0) {
      lVar3 = FUN_00d5941c();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0xf8);
    if ((*(byte *)(lVar3 + 0x132) & 1) == 0) {
      lVar3 = FUN_00d5941c(lVar3);
    }
    lVar5 = *unaff_x28;
    if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
      lVar5 = FUN_00d5941c();
    }
    FUN_00da59dc(lVar3,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x230),
                 *(undefined8 *)(unaff_x29 + -0x110),unaff_x21,0,unaff_x29 + -0x68);
    lVar3 = *(long *)(unaff_x29 + -0x68);
    if ((lVar3 != 0) &&
       (lVar5 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*unaff_x22 + 0x40)), lVar5 == 0))
    goto LAB_01201558;
  }
  puVar1 = StringLiteral_12935;
  uVar7 = *(uint *)(unaff_x22 + 3);
  if (10 < uVar7) {
    unaff_x22[0xe] = lVar3;
    lVar3 = *(long *)puVar1;
    if (lVar3 != 0) {
      lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*unaff_x22 + 0x40));
      if (lVar3 == 0) {
LAB_01201558:
        uVar6 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
        FUN_00da5038(uVar6,0);
      }
      uVar7 = *(uint *)(unaff_x22 + 3);
    }
    if (0xb < uVar7) {
      unaff_x22[0xf] = *(long *)puVar1;
      FUN_01600844();
      if (*(long *)(*(long *)(unaff_x29 + -0x98) + 0x28) != *(long *)(unaff_x29 + -0x60)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da5194();
}


