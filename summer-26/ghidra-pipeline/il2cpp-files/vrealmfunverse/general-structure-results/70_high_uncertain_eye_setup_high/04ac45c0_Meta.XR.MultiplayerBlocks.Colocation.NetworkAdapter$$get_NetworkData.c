/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Colocation.NetworkAdapter$$get_NetworkData
ENTRY_POINT: 04ac45c0
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MultiplayerBlocks_Colocation_NetworkAdapter__get_NetworkData(long param_1,long param_2)

{
  ushort uVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ushort *in_x9;
  code *pcVar5;
  int *piVar6;
  long unaff_x19;
  size_t unaff_x21;
  void *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 unaff_x24;
  long *plVar7;
  long lVar8;
  long unaff_x26;
  long *unaff_x27;
  long unaff_x29;
  
  do {
    uVar1 = *in_x9;
    do {
      lVar8 = *(long *)(*(long *)(param_1 + 0xc0) + 0xb0);
      if ((uVar1 & 1) == 0) {
        param_2 = FUN_02b76218();
      }
      puVar3 = unaff_x23;
      if (-1 < *(int *)(*(long *)(*(long *)(param_2 + 0xc0) + 0x10) + 0x28)) {
        puVar3 = (undefined8 *)*unaff_x23;
      }
      pcVar5 = *(code **)(lVar8 + 0x10);
      *(undefined8 **)(unaff_x29 + -0x18) = puVar3;
      (*pcVar5)(unaff_x24,lVar8);
      plVar7 = *(long **)(unaff_x29 + -0x20);
      if (plVar7 == (long *)0x0) {
        if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        goto LAB_04ac4764;
      }
      lVar8 = *plVar7;
      uVar4 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar4 != 0) {
        piVar6 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *unaff_x27) {
            puVar3 = (undefined8 *)(lVar8 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_04ac44b4;
          }
          uVar4 = uVar4 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar4 != 0);
      }
      puVar3 = (undefined8 *)FUN_02b7654c(plVar7,*unaff_x27,0);
LAB_04ac44b4:
      uVar4 = (*(code *)*puVar3)(plVar7,puVar3[1]);
      if ((uVar4 & 1) == 0) {
        plVar7 = (long *)**(undefined8 **)(unaff_x29 + -0x28);
        if (plVar7 == (long *)0x0) goto LAB_04ac46f4;
        lVar8 = *plVar7;
        uVar4 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar4 == 0) goto LAB_04ac46cc;
        piVar6 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
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
      lVar8 = *(long *)(unaff_x19 + 0x20);
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_02b76218();
      }
      lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x38);
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_02b76218(lVar8);
      }
      lVar2 = *plVar7;
      uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar4 != 0) {
        piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == lVar8) {
            lVar8 = lVar2 + (long)*piVar6 * 0x10 + 0x138;
            goto LAB_04ac4548;
          }
          uVar4 = uVar4 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar4 != 0);
      }
      lVar8 = FUN_02b7654c(plVar7,lVar8,0);
LAB_04ac4548:
      lVar8 = *(long *)(lVar8 + 8);
      *(void **)(unaff_x29 + -0x18) = unaff_x22;
      (**(code **)(lVar8 + 0x10))(*(undefined8 *)(lVar8 + 8),lVar8,plVar7,unaff_x29 + -0x18);
      memcpy(unaff_x23,unaff_x22,unaff_x21);
      param_2 = *(long *)(unaff_x19 + 0x20);
      uVar1 = *(ushort *)(param_2 + 0x135);
      lVar8 = param_2;
      if ((uVar1 & 1) == 0) {
        lVar8 = FUN_02b76218();
        param_2 = *(long *)(unaff_x19 + 0x20);
        uVar1 = *(ushort *)(param_2 + 0x135);
      }
      unaff_x24 = **(undefined8 **)(*(long *)(lVar8 + 0xc0) + 0xb0);
      param_1 = param_2;
    } while ((uVar1 & 1) != 0);
    param_1 = FUN_02b76218();
    param_2 = *(long *)(unaff_x19 + 0x20);
    in_x9 = (ushort *)(param_2 + 0x135);
  } while( true );
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar6 = piVar6 + 4;
    if (uVar4 == 0) break;
LAB_04ac46b4:
    if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_06312f78) {
      puVar3 = (undefined8 *)(lVar8 + (long)*piVar6 * 0x10 + 0x138);
      goto LAB_04ac46e8;
    }
  }
LAB_04ac46cc:
  puVar3 = (undefined8 *)FUN_02b7654c(plVar7,*(long *)PTR_DAT_06312f78,0);
LAB_04ac46e8:
  (*(code *)*puVar3)(plVar7,puVar3[1]);
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


