/*
FUNCTION_NAME: Oculus.Interaction.DistanceReticles.InteractorReticle<object>$$HandlePostProcessed
ENTRY_POINT: 03e80dd0
PROGRAM: waitwhat-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_12;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2
*/


undefined8 Oculus_Interaction_DistanceReticles_InteractorReticle<object>__HandlePostProcessed(void)

{
  undefined1 uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  uint uVar5;
  long lVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  long in_x11;
  int *piVar12;
  long unaff_x19;
  ulong unaff_x20;
  int unaff_w21;
  undefined4 unaff_w22;
  long *plVar13;
  ulong unaff_x25;
  long unaff_x26;
  int unaff_w27;
  ulong unaff_x28;
  long unaff_x29;
  undefined8 in_stack_00000000;
  long in_stack_00000008;
  
code_r0x03e80dd0:
LAB_03e80dd8:
  uVar5 = (uint)*(undefined8 *)(in_x11 + 0x18);
  if ((int)uVar5 <= unaff_w27) {
    thunk_FUN_031edd38(PTR_DAT_070c4538);
    uVar10 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed();
    uVar4 = thunk_FUN_031edd38(PTR_DAT_070f3580);
    FUN_0592f61c(uVar10,uVar4,0);
                    /* WARNING: Subroutine does not return */
    FUN_03188b9c(uVar10,unaff_x26);
  }
  if ((uint)unaff_x28 < uVar5) {
    unaff_w27 = unaff_w27 + 1;
    uVar8 = *(uint *)(unaff_x29 + (unaff_x20 & 0xffffffff) * (unaff_x25 & 0xffffffff) + 4);
    unaff_x20 = (ulong)uVar8;
    if (-1 < (int)uVar8) {
      if (uVar5 <= uVar8) goto LAB_03e80f2c;
      unaff_x28 = unaff_x20;
      if (*(int *)(unaff_x29 + unaff_x20 * (unaff_x25 & 0xffffffff)) == unaff_w21)
      goto code_r0x03e80d30;
      goto LAB_03e80dd8;
    }
    uVar5 = *(uint *)(unaff_x19 + 0x28);
    if ((int)uVar5 < 0) {
      if (in_x11 == 0) goto LAB_03e80f6c;
      uVar5 = *(uint *)(unaff_x19 + 0x24);
      uVar8 = *(uint *)(in_x11 + 0x18);
      if (uVar5 == uVar8) {
        FUN_03e80a84();
        if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_03e80f6c;
        uVar5 = *(uint *)(unaff_x19 + 0x24);
        in_x11 = *(long *)(unaff_x19 + 0x18);
        uVar10 = *(undefined8 *)(*(long *)(unaff_x19 + 0x10) + 0x18);
        *(uint *)(unaff_x19 + 0x24) = uVar5 + 1;
        if (in_x11 == 0) goto LAB_03e80f6c;
        iVar2 = 0;
        iVar7 = (int)uVar10;
        if (iVar7 != 0) {
          iVar2 = unaff_w21 / iVar7;
        }
        in_stack_00000000._4_4_ = unaff_w21 - iVar2 * iVar7;
        uVar8 = *(uint *)(in_x11 + 0x18);
      }
      else {
        *(uint *)(unaff_x19 + 0x24) = uVar5 + 1;
      }
    }
    else {
      if (in_x11 == 0) goto LAB_03e80f6c;
      uVar8 = *(uint *)(in_x11 + 0x18);
      if (uVar8 <= uVar5) goto LAB_03e80f2c;
      *(undefined4 *)(unaff_x19 + 0x28) = *(undefined4 *)(in_x11 + (ulong)uVar5 * 0xc + 0x24);
    }
    if (uVar5 < uVar8) {
      piVar12 = (int *)(in_x11 + 0x20 + (long)(int)uVar5 * 0xc);
      lVar11 = *(long *)(unaff_x19 + 0x10);
      *piVar12 = unaff_w21;
      *(char *)(piVar12 + 2) = (char)unaff_w22;
      if (lVar11 != 0) {
        if (in_stack_00000000._4_4_ < *(uint *)(lVar11 + 0x18)) {
          lVar11 = lVar11 + (ulong)in_stack_00000000._4_4_ * 4;
          *(int *)(in_x11 + 0x20 + (long)(int)uVar5 * 0xc + 4) = *(int *)(lVar11 + 0x20) + -1;
          *(uint *)(lVar11 + 0x20) = uVar5 + 1;
          *(int *)(unaff_x19 + 0x20) = *(int *)(unaff_x19 + 0x20) + 1;
          *(int *)(unaff_x19 + 0x38) = *(int *)(unaff_x19 + 0x38) + 1;
          return 1;
        }
        goto LAB_03e80f2c;
      }
      goto LAB_03e80f6c;
    }
  }
LAB_03e80f2c:
                    /* WARNING: Subroutine does not return */
  FUN_03188ce0();
code_r0x03e80d30:
  plVar13 = *(long **)(unaff_x19 + 0x30);
  if (plVar13 == (long *)0x0) {
LAB_03e80f6c:
                    /* WARNING: Subroutine does not return */
    FUN_03188cd8();
  }
  lVar11 = *(long *)(*(long *)(*(long *)(unaff_x26 + 0x20) + 0xc0) + 0x20);
  uVar1 = *(undefined1 *)(unaff_x29 + unaff_x20 * (unaff_x25 & 0xffffffff) + 8);
  if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = FUN_031c09d4(lVar11);
  }
  lVar6 = *plVar13;
  uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar9 != 0) {
    piVar12 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == lVar11) {
        puVar3 = (undefined8 *)(lVar6 + (long)*piVar12 * 0x10 + 0x138);
        goto LAB_03e80db4;
      }
      uVar9 = uVar9 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar9 != 0);
  }
  puVar3 = (undefined8 *)FUN_031c0d08(plVar13,lVar11,0);
LAB_03e80db4:
  uVar9 = (*(code *)*puVar3)(plVar13,uVar1,unaff_w22,puVar3[1]);
  in_x11 = in_stack_00000008;
  if ((uVar9 & 1) != 0) {
    return 0;
  }
  goto code_r0x03e80dd0;
}


