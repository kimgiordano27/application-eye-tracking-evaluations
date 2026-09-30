/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs._TestUuidMarshallingDelegate$$EndInvoke
ENTRY_POINT: 04a70a7c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x04a70c44) */
/* WARNING: Removing unreachable block (ram,0x04a70c50) */
/* WARNING: Removing unreachable block (ram,0x04a70d70) */
/* WARNING: Removing unreachable block (ram,0x04a70d80) */

undefined8
Meta_XR_MRUtilityKit_MRUKNativeFuncs__TestUuidMarshallingDelegate__EndInvoke(undefined8 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
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
  
  *(undefined8 *)(unaff_x29 + -0x20) = 0;
  *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
  *(undefined8 *)(unaff_x29 + -0x10) = param_1;
LAB_04a70a88:
  do {
    plVar7 = *(long **)(unaff_x29 + -0x10);
    if (plVar7 == (long *)0x0) {
      if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      goto LAB_04a70e6c;
    }
    lVar3 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x27) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_04a70adc;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_02b7654c(plVar7,*unaff_x27,0);
LAB_04a70adc:
    uVar5 = (*(code *)*puVar2)(plVar7,puVar2[1]);
    if ((uVar5 & 1) == 0) break;
    plVar7 = *(long **)(unaff_x29 + -0x10);
    if (plVar7 == (long *)0x0) {
      if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      goto LAB_04a70e6c;
    }
    lVar3 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xe8);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02b76218(lVar3);
    }
    lVar4 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar3) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_04a70b60;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_02b7654c(plVar7,lVar3,0);
LAB_04a70b60:
    (*(code *)*puVar2)(plVar7,puVar2[1]);
    iVar1 = FUN_04a705a4();
    if (-1 < iVar1) {
      if (unaff_x22 == 0) {
        if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        goto LAB_04a70e6c;
      }
      uVar5 = FUN_0527e17c();
      if ((uVar5 & 1) == 0) {
        FUN_0527e100();
        unaff_w25 = unaff_w25 + 1;
      }
      goto LAB_04a70a88;
    }
    unaff_w24 = unaff_w24 + 1;
  } while ((unaff_x20 & 1) == 0);
  plVar7 = *(long **)(unaff_x29 + -0x10);
  if (plVar7 != (long *)0x0) {
    lVar3 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_06312f78) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_04a70c2c;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_02b7654c(plVar7,*(long *)PTR_DAT_06312f78,0);
LAB_04a70c2c:
    (*(code *)*puVar2)(plVar7,puVar2[1]);
  }
  if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return CONCAT44(unaff_w24,unaff_w25);
  }
LAB_04a70e6c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


