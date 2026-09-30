/*
FUNCTION_NAME: Oculus.Interaction.DistanceReticles.InteractorReticle<object>$$HandlePostProcessed
ENTRY_POINT: 05599590
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_9;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05599668) */
/* WARNING: Removing unreachable block (ram,0x05599718) */

void Oculus_Interaction_DistanceReticles_InteractorReticle<object>__HandlePostProcessed(void)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  int *piVar6;
  long unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  long unaff_x24;
  long *unaff_x26;
  long unaff_x27;
  long *unaff_x28;
  long unaff_x29;
  
  do {
    uVar2 = FUN_055997ec();
    if ((uVar2 & 1) == 0) {
      if (*(int *)(unaff_x29 + -0xc) < (int)unaff_x21) {
        if (unaff_x24 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03d2d548();
        }
        uVar2 = FUN_07810288();
        if ((uVar2 & 1) == 0) {
          if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03d2d548();
          }
          FUN_0781020c();
        }
      }
    }
    else {
      if (unaff_x24 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      FUN_0781020c();
    }
    lVar4 = *unaff_x23;
    uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar2 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x28) {
          puVar1 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_055994fc;
        }
        uVar2 = uVar2 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar2 != 0);
    }
    puVar1 = (undefined8 *)FUN_03d8f370();
LAB_055994fc:
    uVar2 = (*(code *)*puVar1)();
    if ((uVar2 & 1) == 0) break;
    lVar4 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xe8);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03d8f26c(lVar4);
    }
    lVar5 = *unaff_x23;
    uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar2 != 0) {
      piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar4) {
          puVar1 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_05599574;
        }
        uVar2 = uVar2 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar2 != 0);
    }
    puVar1 = (undefined8 *)FUN_03d8f370();
LAB_05599574:
    (*(code *)*puVar1)();
    *(undefined4 *)(unaff_x29 + -0xc) = 0;
  } while( true );
  if (unaff_x23 != (long *)0x0) {
    lVar4 = *unaff_x23;
    uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar2 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x26) {
          puVar1 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_05599650;
        }
        uVar2 = uVar2 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar2 != 0);
    }
    puVar1 = (undefined8 *)FUN_03d8f370();
LAB_05599650:
    (*(code *)*puVar1)();
  }
  if (0 < (int)unaff_x21) {
    if (unaff_x22 == 0) {
LAB_05599704:
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    uVar2 = 0;
    do {
      uVar3 = FUN_07810288();
      if ((uVar3 & 1) != 0) {
        if (*(long *)(unaff_x20 + 0x18) == 0) goto LAB_05599704;
        if (*(uint *)(*(long *)(unaff_x20 + 0x18) + 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
          FUN_03d2d550();
        }
        FUN_05595a70();
      }
      uVar2 = uVar2 + 1;
    } while (unaff_x21 != uVar2);
  }
  if (*(long *)(unaff_x27 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


