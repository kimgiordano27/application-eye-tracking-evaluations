/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Colocation.AutomaticColocationLauncher$$ShareAndLocalizeAnchor
ENTRY_POINT: 04ac20a0
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x04ac21f4) */
/* WARNING: Removing unreachable block (ram,0x04ac2208) */

void Meta_XR_MultiplayerBlocks_Colocation_AutomaticColocationLauncher__ShareAndLocalizeAnchor(void)

{
  undefined8 *puVar1;
  ushort in_w8;
  long lVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  size_t unaff_x21;
  void *unaff_x22;
  void *unaff_x23;
  long *plVar6;
  long *unaff_x25;
  uint unaff_w27;
  uint uVar7;
  long unaff_x29;
  
code_r0x04ac20a0:
  if ((in_w8 & 1) == 0) {
    FUN_02b76218();
  }
  FUN_02b3c844();
  uVar7 = unaff_w27;
  do {
    plVar6 = *(long **)(unaff_x29 + -0x18);
    unaff_w27 = uVar7 + 1;
    if (plVar6 == (long *)0x0) {
      if (*(long *)(*(long *)(unaff_x29 + -0x30) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      goto LAB_04ac227c;
    }
    lVar2 = *plVar6;
    uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x25) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_04ac1f10;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_02b7654c(plVar6,*unaff_x25,0);
LAB_04ac1f10:
    uVar4 = (*(code *)*puVar1)(plVar6,puVar1[1]);
    if ((uVar4 & 1) == 0) {
      plVar6 = *(long **)(unaff_x29 + -0x18);
      if (plVar6 == (long *)0x0) goto LAB_04ac215c;
      lVar2 = *plVar6;
      uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar4 == 0) goto LAB_04ac2134;
      piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      break;
    }
    plVar6 = *(long **)(unaff_x29 + -0x18);
    if (plVar6 == (long *)0x0) {
      if (*(long *)(*(long *)(unaff_x29 + -0x30) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      goto LAB_04ac227c;
    }
    lVar2 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02b76218();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x38);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02b76218(lVar2);
    }
    lVar3 = *plVar6;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == lVar2) {
          lVar2 = lVar3 + (long)*piVar5 * 0x10 + 0x138;
          goto LAB_04ac1fa4;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    lVar2 = FUN_02b7654c(plVar6,lVar2,0);
LAB_04ac1fa4:
    lVar2 = *(long *)(lVar2 + 8);
    *(void **)(unaff_x29 + -0x10) = unaff_x22;
    (**(code **)(lVar2 + 0x10))(*(undefined8 *)(lVar2 + 8),lVar2,plVar6,unaff_x29 + -0x10);
    memcpy(unaff_x23,unaff_x22,unaff_x21);
    in_w8 = *(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135);
    if (unaff_w27 == 0) goto code_r0x04ac20a0;
    if ((in_w8 & 1) == 0) {
      FUN_02b76218();
    }
    puVar1 = (undefined8 *)thunk_FUN_02b9b29c();
    plVar6 = (long *)*puVar1;
    memcpy(unaff_x22,unaff_x23,unaff_x21);
    if (plVar6 == (long *)0x0) {
      if (*(long *)(*(long *)(unaff_x29 + -0x30) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      goto LAB_04ac227c;
    }
    if (*(uint *)(plVar6 + 3) <= uVar7) {
LAB_04ac2194:
      if (*(long *)(*(long *)(unaff_x29 + -0x30) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cacc();
      }
      goto LAB_04ac227c;
    }
    memcpy((void *)((long)plVar6 + (ulong)*(uint *)(*plVar6 + 0x104) * (long)(int)uVar7 + 0x20),
           unaff_x23,unaff_x21);
    lVar2 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02b76218();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02b76218();
    }
    if (*(uint *)(plVar6 + 3) <= uVar7) goto LAB_04ac2194;
    FUN_02b3c7cc(lVar2,(long)plVar6 + (ulong)*(uint *)(*plVar6 + 0x104) * (long)(int)uVar7 + 0x20);
    uVar7 = unaff_w27;
  } while( true );
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar5 = piVar5 + 4;
    if (uVar4 == 0) break;
    if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_06312f78) {
      puVar1 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
      goto LAB_04ac2150;
    }
  }
LAB_04ac2134:
  puVar1 = (undefined8 *)FUN_02b7654c(plVar6,*(long *)PTR_DAT_06312f78,0);
LAB_04ac2150:
  (*(code *)*puVar1)(plVar6,puVar1[1]);
LAB_04ac215c:
  if (*(long *)(*(long *)(unaff_x29 + -0x30) + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
LAB_04ac227c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


