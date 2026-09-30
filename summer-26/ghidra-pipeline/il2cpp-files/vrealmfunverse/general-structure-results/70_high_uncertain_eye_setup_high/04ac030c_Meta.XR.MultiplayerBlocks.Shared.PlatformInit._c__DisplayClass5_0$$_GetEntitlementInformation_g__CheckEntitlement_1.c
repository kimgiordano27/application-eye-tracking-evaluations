/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.PlatformInit.<>c__DisplayClass5_0$$<GetEntitlementInformation>g__CheckEntitlement|1
ENTRY_POINT: 04ac030c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_7;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x04ac0544) */

void Meta_XR_MultiplayerBlocks_Shared_PlatformInit_<>c__DisplayClass5_0__<GetEntitlementInformation>g__CheckEntitlement_1
               (long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x19;
  long unaff_x20;
  int iVar9;
  
  uVar7 = (ulong)*(ushort *)(param_1 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == param_3) {
        puVar2 = (undefined8 *)(param_1 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_04ac0350;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar2 = (undefined8 *)FUN_02b7654c();
LAB_04ac0350:
  plVar3 = (long *)(*(code *)*puVar2)();
  puVar1 = PTR_DAT_06312f90;
  if (plVar3 != (long *)0x0) {
    iVar9 = 0;
    do {
      lVar5 = *plVar3;
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
            puVar2 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_04ac03cc;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar2 = (undefined8 *)FUN_02b7654c(plVar3,*(long *)puVar1,0);
LAB_04ac03cc:
      uVar7 = (*(code *)*puVar2)(plVar3,puVar2[1]);
      if ((uVar7 & 1) == 0) {
        if (plVar3 == (long *)0x0) {
          return;
        }
        lVar5 = *plVar3;
        uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar7 == 0) goto LAB_04ac04f0;
        piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        goto LAB_04ac04d8;
      }
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
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
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == lVar5) {
            puVar2 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_04ac0460;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar2 = (undefined8 *)FUN_02b7654c(plVar3,lVar5,0);
LAB_04ac0460:
      uVar4 = (*(code *)*puVar2)(plVar3,puVar2[1]);
      puVar2 = (undefined8 *)(unaff_x20 + 8);
      if (iVar9 != 0) {
        lVar5 = *(long *)(unaff_x20 + 0x10);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        if (*(uint *)(lVar5 + 0x18) <= iVar9 - 1U) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cacc();
        }
        puVar2 = (undefined8 *)(lVar5 + (long)(int)(iVar9 - 1U) * 8 + 0x20);
      }
      iVar9 = iVar9 + 1;
      *puVar2 = uVar4;
    } while (plVar3 != (long *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
LAB_04ac04d8:
    if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_06312f78) {
      puVar2 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_04ac050c;
    }
  }
LAB_04ac04f0:
  puVar2 = (undefined8 *)FUN_02b7654c(plVar3,*(long *)PTR_DAT_06312f78,0);
LAB_04ac050c:
  (*(code *)*puVar2)(plVar3,puVar2[1]);
  return;
}


