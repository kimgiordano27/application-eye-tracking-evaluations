/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Colocation.NetworkAdapter$$set_NetworkData
ENTRY_POINT: 04ac4608
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


void Meta_XR_MultiplayerBlocks_Colocation_NetworkAdapter__set_NetworkData(undefined8 param_1)

{
  ushort uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  code *in_x9;
  int *piVar6;
  long unaff_x19;
  size_t unaff_x21;
  void *unaff_x22;
  undefined8 *unaff_x23;
  long *plVar7;
  long unaff_x25;
  long unaff_x26;
  long *unaff_x27;
  long unaff_x29;
  
  while( true ) {
    (*in_x9)(param_1,unaff_x25);
    plVar7 = *(long **)(unaff_x29 + -0x20);
    if (plVar7 == (long *)0x0) break;
    lVar3 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x27) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_04ac44b4;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_02b7654c(plVar7,*unaff_x27,0);
LAB_04ac44b4:
    uVar5 = (*(code *)*puVar2)(plVar7,puVar2[1]);
    if ((uVar5 & 1) == 0) {
      plVar7 = (long *)**(undefined8 **)(unaff_x29 + -0x28);
      if (plVar7 == (long *)0x0) goto LAB_04ac46f4;
      lVar3 = *plVar7;
      uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar5 == 0) goto LAB_04ac46cc;
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      goto LAB_04ac46b4;
    }
    plVar7 = *(long **)(unaff_x29 + -0x20);
    if (plVar7 == (long *)0x0) {
      if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      goto LAB_04ac4764;
    }
    lVar3 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02b76218();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x38);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02b76218(lVar3);
    }
    lVar4 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar3) {
          lVar3 = lVar4 + (long)*piVar6 * 0x10 + 0x138;
          goto LAB_04ac4548;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    lVar3 = FUN_02b7654c(plVar7,lVar3,0);
LAB_04ac4548:
    lVar3 = *(long *)(lVar3 + 8);
    *(void **)(unaff_x29 + -0x18) = unaff_x22;
    (**(code **)(lVar3 + 0x10))(*(undefined8 *)(lVar3 + 8),lVar3,plVar7,unaff_x29 + -0x18);
    memcpy(unaff_x23,unaff_x22,unaff_x21);
    lVar4 = *(long *)(unaff_x19 + 0x20);
    uVar1 = *(ushort *)(lVar4 + 0x135);
    lVar3 = lVar4;
    if ((uVar1 & 1) == 0) {
      lVar3 = FUN_02b76218();
      lVar4 = *(long *)(unaff_x19 + 0x20);
      uVar1 = *(ushort *)(lVar4 + 0x135);
    }
    param_1 = **(undefined8 **)(*(long *)(lVar3 + 0xc0) + 0xb0);
    lVar3 = lVar4;
    if ((uVar1 & 1) == 0) {
      lVar3 = FUN_02b76218();
      lVar4 = *(long *)(unaff_x19 + 0x20);
      uVar1 = *(ushort *)(lVar4 + 0x135);
    }
    unaff_x25 = *(long *)(*(long *)(lVar3 + 0xc0) + 0xb0);
    if ((uVar1 & 1) == 0) {
      lVar4 = FUN_02b76218();
    }
    puVar2 = unaff_x23;
    if (-1 < *(int *)(*(long *)(*(long *)(lVar4 + 0xc0) + 0x10) + 0x28)) {
      puVar2 = (undefined8 *)*unaff_x23;
    }
    in_x9 = *(code **)(unaff_x25 + 0x10);
    *(undefined8 **)(unaff_x29 + -0x18) = puVar2;
  }
  if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  goto LAB_04ac4764;
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar6 = piVar6 + 4;
    if (uVar5 == 0) break;
LAB_04ac46b4:
    if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_06312f78) {
      puVar2 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
      goto LAB_04ac46e8;
    }
  }
LAB_04ac46cc:
  puVar2 = (undefined8 *)FUN_02b7654c(plVar7,*(long *)PTR_DAT_06312f78,0);
LAB_04ac46e8:
  (*(code *)*puVar2)(plVar7,puVar2[1]);
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


