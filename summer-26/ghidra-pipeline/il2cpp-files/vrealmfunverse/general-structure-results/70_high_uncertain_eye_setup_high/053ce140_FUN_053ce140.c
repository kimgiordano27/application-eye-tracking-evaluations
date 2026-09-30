/*
FUNCTION_NAME: FUN_053ce140
ENTRY_POINT: 053ce140
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x053ce394) */

uint FUN_053ce140(undefined8 param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  
  if ((DAT_066d09b5 & 1) == 0) {
    FUN_02b3c81c(PTR_DAT_06312f78);
    FUN_02b3c81c(OVRPlugin_OVRP_0_1_1_TypeInfo);
    FUN_02b3c81c(OVRPlugin_OVRP_0_1_2_TypeInfo);
    FUN_02b3c81c(PTR_DAT_06312f90);
    DAT_066d09b5 = 1;
  }
  if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  lVar7 = *param_2;
  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *(long *)OVRPlugin_OVRP_0_1_1_TypeInfo) {
        puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_053ce1f4;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar5 = (undefined8 *)FUN_02b7654c(param_2,*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo,0);
LAB_053ce1f4:
  puVar3 = OVRPlugin_OVRP_0_1_2_TypeInfo;
  puVar2 = PTR_DAT_06312f90;
  puVar1 = PTR_DAT_06312f78;
  plVar6 = (long *)(*(code *)*puVar5)(param_2,puVar5[1]);
                    /* try { // try from 053ce220 to 054ce423 has its CatchHandler @ 053ce220
                       catch() { ... } // from try @ 053ce220 with catch @ 053ce220
                       catch() { ... } // from try @ 053ce43c with catch @ 053ce220
                       catch() { ... } // from try @ 053ce538 with catch @ 053ce220
                       catch() { ... } // from try @ 053ce608 with catch @ 053ce220
                       catch() { ... } // from try @ 053ce634 with catch @ 053ce220 */
  do {
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    lVar7 = *plVar6;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_053ce278;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_02b7654c(plVar6,*(long *)puVar2,0);
LAB_053ce278:
    uVar4 = (*(code *)*puVar5)(plVar6,puVar5[1]);
    if ((uVar4 & 1) == 0) break;
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    lVar7 = *plVar6;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar3) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_053ce2e0;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_02b7654c(plVar6,*(long *)puVar3,0);
LAB_053ce2e0:
    lVar7 = (*(code *)*puVar5)(plVar6,puVar5[1]);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    uVar8 = FUN_053e535c(lVar7,0);
  } while ((uVar8 & 1) == 0);
  if (plVar6 != (long *)0x0) {
    lVar7 = *plVar6;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_053ce35c;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_02b7654c(plVar6,*(long *)puVar1,0);
LAB_053ce35c:
    (*(code *)*puVar5)(plVar6,puVar5[1]);
  }
  return (uVar4 ^ 1) & 1;
}


