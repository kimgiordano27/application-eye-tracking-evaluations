/*
FUNCTION_NAME: OVRManager$$get_isUserPresent
ENTRY_POINT: 07a2451c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__get_isUserPresent(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long in_x9;
  ulong uVar5;
  long in_x10;
  int *piVar6;
  long unaff_x19;
  long unaff_x20;
  long *plVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 unaff_s9;
  undefined4 unaff_s10;
  undefined4 unaff_s11;
  
  piVar6 = (int *)(in_x10 + 8);
  do {
    if (*(long *)(piVar6 + -2) == param_3) {
      puVar2 = (undefined8 *)(param_1 + (long)(*piVar6 + 2) * 0x10 + 0x138);
      goto LAB_07a24558;
    }
    in_x9 = in_x9 + -1;
    piVar6 = piVar6 + 4;
  } while (in_x9 != 0);
  puVar2 = (undefined8 *)FUN_040b1e00();
LAB_07a24558:
  (*(code *)*puVar2)();
  if (unaff_x20 == 0) goto LAB_07a24708;
  FUN_089dbabc();
  puVar1 = PTR_DAT_092eff78;
  if (*(char *)(unaff_x19 + 0x38) == '\0') {
    lVar3 = FUN_089c7534();
    if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_07a24708;
    FUN_089dbd64(*(long *)(unaff_x19 + 0x20),0);
  }
  else {
    plVar7 = *(long **)(unaff_x19 + 0x50);
    if (plVar7 == (long *)0x0) goto LAB_07a24708;
    lVar3 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_092eff78) {
          puVar2 = (undefined8 *)(lVar3 + (long)(*piVar6 + 1) * 0x10 + 0x138);
          goto LAB_07a24618;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_040b1e00(plVar7,*(long *)PTR_DAT_092eff78,1);
LAB_07a24618:
    (*(code *)*puVar2)(plVar7,unaff_x19 + 0x3c,puVar2[1]);
    lVar3 = FUN_089c7534();
    if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_07a24708;
    plVar7 = *(long **)(unaff_x19 + 0x50);
    uVar8 = FUN_089dbd64(*(long *)(unaff_x19 + 0x20),0);
    uVar9 = FUN_089d7e60(0);
    if (plVar7 == (long *)0x0) goto LAB_07a24708;
    lVar4 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
          puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 2) * 0x10 + 0x138);
          goto FUN_07a246c0;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_040b1e00(plVar7,*(long *)puVar1,2);
FUN_07a246c0:
    (*(code *)*puVar2)(uVar8,unaff_s9,unaff_s10,unaff_s11,uVar9,plVar7,puVar2[1]);
  }
  if (lVar3 != 0) {
    FUN_089dbe24(lVar3,0);
    return;
  }
LAB_07a24708:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


