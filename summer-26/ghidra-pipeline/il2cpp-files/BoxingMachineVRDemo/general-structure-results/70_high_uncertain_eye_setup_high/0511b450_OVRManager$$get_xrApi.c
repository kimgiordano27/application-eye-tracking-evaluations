/*
FUNCTION_NAME: OVRManager$$get_xrApi
ENTRY_POINT: 0511b450
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0511b5bc) */

void OVRManager__get_xrApi(ulong param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  int *piVar7;
  long unaff_x22;
  undefined8 *puVar8;
  long unaff_x23;
  long unaff_x24;
  undefined8 *puVar9;
  
  puVar9 = *(undefined8 **)(unaff_x24 + 0x5a0);
  puVar8 = *(undefined8 **)(unaff_x22 + 0xa58);
  if ((param_1 & 1) == 0) {
    FUN_02d6084c(PTR_DAT_0675f3d0);
    FUN_02d6084c(PTR_DAT_0677eb48);
    FUN_02d6084c(PTR_DAT_067675a0);
    FUN_02d6084c(PTR_DAT_06780a58);
    *(undefined1 *)(unaff_x23 + 0xbc9) = 1;
  }
  FUN_050f136c(param_2,*puVar9,0);
  FUN_050f136c(param_3,*puVar8,0);
  puVar2 = PTR_DAT_0677eb48;
  puVar1 = PTR_DAT_0675f3d0;
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  uVar3 = FUN_0514183c(param_2,0);
  plVar4 = (long *)thunk_FUN_02d9d534(*(undefined8 *)puVar2);
  FUN_050c472c(plVar4,uVar3,0);
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  FUN_050c47fc(plVar4,param_3,0);
  if (param_4 != 0) {
    FUN_050c2e58(plVar4,param_4,0);
  }
  do {
    uVar5 = (**(code **)(*plVar4 + 0x288))(plVar4,*(undefined8 *)(*plVar4 + 0x290));
  } while ((uVar5 & 1) != 0);
  lVar6 = *plVar4;
  uVar5 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar5 != 0) {
    piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
        puVar8 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_0511b590;
      }
      uVar5 = uVar5 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar5 != 0);
  }
  puVar8 = (undefined8 *)FUN_02d9a5d4(plVar4,*(long *)puVar1,0);
LAB_0511b590:
  (*(code *)*puVar8)(plVar4,puVar8[1]);
  return;
}


