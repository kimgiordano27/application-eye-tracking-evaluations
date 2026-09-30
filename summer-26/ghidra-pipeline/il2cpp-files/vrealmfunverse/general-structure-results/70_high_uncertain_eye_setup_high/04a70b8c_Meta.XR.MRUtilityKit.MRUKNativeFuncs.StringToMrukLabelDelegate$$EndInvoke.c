/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.StringToMrukLabelDelegate$$EndInvoke
ENTRY_POINT: 04a70b8c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x04a70d70) */
/* WARNING: Removing unreachable block (ram,0x04a70d80) */
/* WARNING: Removing unreachable block (ram,0x04a70c44) */
/* WARNING: Removing unreachable block (ram,0x04a70c50) */

undefined8 Meta_XR_MRUtilityKit_MRUKNativeFuncs_StringToMrukLabelDelegate__EndInvoke(void)

{
  int iVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  int *piVar6;
  long unaff_x19;
  ulong unaff_x20;
  long unaff_x22;
  long *plVar7;
  int unaff_w24;
  int unaff_w25;
  long unaff_x26;
  long *unaff_x27;
  long unaff_x29;
  
code_r0x04a70b8c:
  if (unaff_x22 != 0) {
    uVar3 = FUN_0527e17c();
    if ((uVar3 & 1) == 0) {
      FUN_0527e100();
      unaff_w25 = unaff_w25 + 1;
    }
LAB_04a70a88:
    plVar7 = *(long **)(unaff_x29 + -0x10);
    if (plVar7 == (long *)0x0) {
      if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      goto LAB_04a70e6c;
    }
    lVar4 = *plVar7;
    uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar3 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x27) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_04a70adc;
        }
        uVar3 = uVar3 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined8 *)FUN_02b7654c(plVar7,*unaff_x27,0);
LAB_04a70adc:
    uVar3 = (*(code *)*puVar2)(plVar7,puVar2[1]);
    if ((uVar3 & 1) == 0) goto LAB_04a70bc4;
    plVar7 = *(long **)(unaff_x29 + -0x10);
    if (plVar7 == (long *)0x0) {
      if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      goto LAB_04a70e6c;
    }
    lVar4 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xe8);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02b76218(lVar4);
    }
    lVar5 = *plVar7;
    uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar3 != 0) {
      piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar4) {
          puVar2 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_04a70b60;
        }
        uVar3 = uVar3 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined8 *)FUN_02b7654c(plVar7,lVar4,0);
LAB_04a70b60:
    (*(code *)*puVar2)(plVar7,puVar2[1]);
    iVar1 = FUN_04a705a4();
    if (iVar1 < 0) goto LAB_04a70bbc;
    goto code_r0x04a70b8c;
  }
  if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  goto LAB_04a70e6c;
LAB_04a70bbc:
  unaff_w24 = unaff_w24 + 1;
  if ((unaff_x20 & 1) != 0) {
LAB_04a70bc4:
    plVar7 = *(long **)(unaff_x29 + -0x10);
    if (plVar7 == (long *)0x0) goto LAB_04a70c38;
    lVar4 = *plVar7;
    uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar3 == 0) goto LAB_04a70c10;
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    goto LAB_04a70bf8;
  }
  goto LAB_04a70a88;
  while( true ) {
    uVar3 = uVar3 - 1;
    piVar6 = piVar6 + 4;
    if (uVar3 == 0) break;
LAB_04a70bf8:
    if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_06312f78) {
      puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
      goto LAB_04a70c2c;
    }
  }
LAB_04a70c10:
  puVar2 = (undefined8 *)FUN_02b7654c(plVar7,*(long *)PTR_DAT_06312f78,0);
LAB_04a70c2c:
  (*(code *)*puVar2)(plVar7,puVar2[1]);
LAB_04a70c38:
  if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return CONCAT44(unaff_w24,unaff_w25);
  }
LAB_04a70e6c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


