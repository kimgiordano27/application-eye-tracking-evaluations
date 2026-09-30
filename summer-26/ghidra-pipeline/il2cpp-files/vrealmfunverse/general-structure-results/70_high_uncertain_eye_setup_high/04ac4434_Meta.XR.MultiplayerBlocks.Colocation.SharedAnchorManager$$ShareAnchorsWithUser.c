/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Colocation.SharedAnchorManager$$ShareAnchorsWithUser
ENTRY_POINT: 04ac4434
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MultiplayerBlocks_Colocation_SharedAnchorManager__ShareAnchorsWithUser(long param_1)

{
  ushort uVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  code *pcVar8;
  int *in_x10;
  int *piVar9;
  long unaff_x19;
  size_t unaff_x21;
  void *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 uVar10;
  long unaff_x26;
  long unaff_x29;
  
  plVar3 = (long *)(**(code **)(param_1 + (long)*in_x10 * 0x10 + 0x138))();
  *(long **)(unaff_x29 + -0x20) = plVar3;
  *(undefined8 *)(unaff_x29 + -0x30) = 0;
  *(long *)(unaff_x29 + -0x28) = unaff_x29 + -0x20;
  puVar2 = PTR_DAT_06312f90;
  while (plVar3 != (long *)0x0) {
    lVar5 = *plVar3;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_04ac44b4;
        }
        uVar7 = uVar7 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_02b7654c(plVar3,*(long *)puVar2,0);
LAB_04ac44b4:
    uVar7 = (*(code *)*puVar4)(plVar3,puVar4[1]);
    if ((uVar7 & 1) == 0) {
      plVar3 = (long *)**(undefined8 **)(unaff_x29 + -0x28);
      if (plVar3 == (long *)0x0) goto LAB_04ac46f4;
      lVar5 = *plVar3;
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar7 == 0) goto LAB_04ac46cc;
      piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      goto LAB_04ac46b4;
    }
    plVar3 = *(long **)(unaff_x29 + -0x20);
    if (plVar3 == (long *)0x0) {
      if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      goto LAB_04ac4764;
    }
    lVar5 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02b76218();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x38);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02b76218(lVar5);
    }
    lVar6 = *plVar3;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar5) {
          lVar5 = lVar6 + (long)*piVar9 * 0x10 + 0x138;
          goto LAB_04ac4548;
        }
        uVar7 = uVar7 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar7 != 0);
    }
    lVar5 = FUN_02b7654c(plVar3,lVar5,0);
LAB_04ac4548:
    lVar5 = *(long *)(lVar5 + 8);
    *(void **)(unaff_x29 + -0x18) = unaff_x22;
    (**(code **)(lVar5 + 0x10))(*(undefined8 *)(lVar5 + 8),lVar5,plVar3,unaff_x29 + -0x18);
    memcpy(unaff_x23,unaff_x22,unaff_x21);
    lVar6 = *(long *)(unaff_x19 + 0x20);
    uVar1 = *(ushort *)(lVar6 + 0x135);
    lVar5 = lVar6;
    if ((uVar1 & 1) == 0) {
      lVar5 = FUN_02b76218();
      lVar6 = *(long *)(unaff_x19 + 0x20);
      uVar1 = *(ushort *)(lVar6 + 0x135);
    }
    uVar10 = **(undefined8 **)(*(long *)(lVar5 + 0xc0) + 0xb0);
    lVar5 = lVar6;
    if ((uVar1 & 1) == 0) {
      lVar5 = FUN_02b76218();
      lVar6 = *(long *)(unaff_x19 + 0x20);
      uVar1 = *(ushort *)(lVar6 + 0x135);
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0xb0);
    if ((uVar1 & 1) == 0) {
      lVar6 = FUN_02b76218();
    }
    puVar4 = unaff_x23;
    if (-1 < *(int *)(*(long *)(*(long *)(lVar6 + 0xc0) + 0x10) + 0x28)) {
      puVar4 = (undefined8 *)*unaff_x23;
    }
    pcVar8 = *(code **)(lVar5 + 0x10);
    *(undefined8 **)(unaff_x29 + -0x18) = puVar4;
    (*pcVar8)(uVar10,lVar5);
    plVar3 = *(long **)(unaff_x29 + -0x20);
  }
  if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  goto LAB_04ac4764;
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar9 = piVar9 + 4;
    if (uVar7 == 0) break;
LAB_04ac46b4:
    if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_06312f78) {
      puVar4 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_04ac46e8;
    }
  }
LAB_04ac46cc:
  puVar4 = (undefined8 *)FUN_02b7654c(plVar3,*(long *)PTR_DAT_06312f78,0);
LAB_04ac46e8:
  (*(code *)*puVar4)(plVar3,puVar4[1]);
LAB_04ac46f4:
  if (*(long *)(unaff_x29 + -0x30) == 0) {
    if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
      return;
    }
  }
  else if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cabc();
  }
LAB_04ac4764:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


