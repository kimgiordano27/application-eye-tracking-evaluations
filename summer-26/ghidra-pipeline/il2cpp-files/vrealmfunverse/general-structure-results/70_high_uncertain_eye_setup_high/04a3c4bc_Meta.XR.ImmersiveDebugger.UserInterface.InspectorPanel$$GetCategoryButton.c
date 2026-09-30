/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.InspectorPanel$$GetCategoryButton
ENTRY_POINT: 04a3c4bc
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


/* WARNING: Removing unreachable block (ram,0x04a3c664) */
/* WARNING: Removing unreachable block (ram,0x04a3c670) */
/* WARNING: Removing unreachable block (ram,0x04a3c790) */
/* WARNING: Removing unreachable block (ram,0x04a3c7a0) */

undefined8
Meta_XR_ImmersiveDebugger_UserInterface_InspectorPanel__GetCategoryButton
          (long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong in_x9;
  int *in_x10;
  int *piVar6;
  long unaff_x19;
  ulong unaff_x20;
  long unaff_x22;
  long *unaff_x23;
  long *plVar7;
  int unaff_w24;
  int unaff_w25;
  long unaff_x26;
  long *unaff_x27;
  long unaff_x29;
  
  do {
    do {
      if (*(long *)(in_x10 + -2) == param_3) {
        puVar2 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
        goto LAB_04a3c4f0;
      }
      in_x9 = in_x9 - 1;
      in_x10 = in_x10 + 4;
    } while (in_x9 != 0);
    do {
      puVar2 = (undefined8 *)FUN_02b7654c(unaff_x23,param_3,0);
LAB_04a3c4f0:
      uVar3 = (*(code *)*puVar2)(unaff_x23,puVar2[1]);
      if ((uVar3 & 1) == 0) {
LAB_04a3c5e4:
        plVar7 = *(long **)(unaff_x29 + -0x10);
        if (plVar7 == (long *)0x0) goto LAB_04a3c658;
        lVar4 = *plVar7;
        uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar3 == 0) goto LAB_04a3c630;
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        goto LAB_04a3c618;
      }
      plVar7 = *(long **)(unaff_x29 + -0x10);
      if (plVar7 == (long *)0x0) {
        if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        goto LAB_04a3c88c;
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
            goto LAB_04a3c574;
          }
          uVar3 = uVar3 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar3 != 0);
      }
      puVar2 = (undefined8 *)FUN_02b7654c(plVar7,lVar4,0);
LAB_04a3c574:
      (*(code *)*puVar2)(plVar7,puVar2[1]);
      iVar1 = FUN_04a3bf9c();
      if (iVar1 < 0) {
        unaff_w24 = unaff_w24 + 1;
        if ((unaff_x20 & 1) != 0) goto LAB_04a3c5e4;
      }
      else {
        if (unaff_x22 == 0) {
          if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cac4();
          }
          goto LAB_04a3c88c;
        }
        uVar3 = FUN_0527e17c();
        if ((uVar3 & 1) == 0) {
          FUN_0527e100();
          unaff_w25 = unaff_w25 + 1;
        }
      }
      unaff_x23 = *(long **)(unaff_x29 + -0x10);
      if (unaff_x23 == (long *)0x0) {
        if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        goto LAB_04a3c88c;
      }
      param_1 = *unaff_x23;
      param_3 = *unaff_x27;
      in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
    } while (in_x9 == 0);
    in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
  } while( true );
  while( true ) {
    uVar3 = uVar3 - 1;
    piVar6 = piVar6 + 4;
    if (uVar3 == 0) break;
LAB_04a3c618:
    if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_06312f78) {
      puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
      goto LAB_04a3c64c;
    }
  }
LAB_04a3c630:
  puVar2 = (undefined8 *)FUN_02b7654c(plVar7,*(long *)PTR_DAT_06312f78,0);
LAB_04a3c64c:
  (*(code *)*puVar2)(plVar7,puVar2[1]);
LAB_04a3c658:
  if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return CONCAT44(unaff_w24,unaff_w25);
  }
LAB_04a3c88c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


