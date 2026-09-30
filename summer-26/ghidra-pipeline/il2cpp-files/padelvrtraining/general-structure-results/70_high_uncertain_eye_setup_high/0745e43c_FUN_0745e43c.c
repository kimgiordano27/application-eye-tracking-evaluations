/*
FUNCTION_NAME: FUN_0745e43c
ENTRY_POINT: 0745e43c
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_0745e43c(undefined8 param_1,undefined8 param_2,long param_3,long *param_4)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  undefined8 auStack_a0 [2];
  undefined8 uStack_8c;
  undefined8 auStack_80 [2];
  undefined8 uStack_6c;
  undefined8 uStack_60;
  undefined8 uStack_4c;
  
  if ((bRam00000000098457fa & 1) == 0) {
    FUN_03d2d2b0(PTR_DAT_09222f00);
    bRam00000000098457fa = 1;
  }
  puVar1 = PTR_DAT_09222f00;
  if (param_4 == (long *)0x0) {
OVRManager__PrepareCameraForSpaceWarp:
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  lVar6 = *param_4;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_09222f00) {
        puVar3 = (undefined8 *)(lVar6 + (long)(*piVar8 + 4) * 0x10 + 0x138);
        goto LAB_0745e4dc;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar3 = (undefined8 *)FUN_03d8f370(param_4,*(long *)PTR_DAT_09222f00,4);
LAB_0745e4dc:
  lVar6 = (*(code *)*puVar3)(param_4,puVar3[1]);
  if (lVar6 == 0) {
    FUN_0745e638(param_3);
  }
  else {
    if (((float)param_1 <= 0.0) || (lVar4 = FUN_07468304(lVar6,0), lVar4 == 0)) {
      FUN_0745e638(param_3);
    }
    else {
      uVar5 = FUN_07468304(lVar6,0);
      lVar6 = *param_4;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
            puVar3 = (undefined8 *)(lVar6 + (long)(*piVar8 + 5) * 0x10 + 0x138);
            goto LAB_0745e57c;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined8 *)FUN_03d8f370(param_4,*(long *)puVar1,5);
LAB_0745e57c:
      uVar2 = (*(code *)*puVar3)(param_4,puVar3[1]);
      FUN_0745e6c4(param_1,param_3,uVar5,uVar2);
      *(undefined1 *)(param_3 + 0x38) = 0;
    }
    if (0.0 < (float)param_2) {
      FUN_07469654(auStack_80,param_4,0);
      uStack_4c = uStack_6c;
      uStack_60 = auStack_80[0];
      if (*(long *)(param_3 + 0x30) != 0) {
                    /* try { // try from 0745e5f0 to 0755e647 has its CatchHandler @ 0745e5f0
                       catch() { ... } // from try @ 0745e5f0 with catch @ 0745e5f0
                       catch() { ... } // from try @ 0745e694 with catch @ 0745e5f0
                       catch() { ... } // from try @ 0745e6c0 with catch @ 0745e5f0
                       catch() { ... } // from try @ 0745e700 with catch @ 0745e5f0
                       catch() { ... } // from try @ 0745e758 with catch @ 0745e5f0 */
        auStack_a0[0] = auStack_80[0];
        uStack_8c = uStack_6c;
        FUN_07490ab8(param_2,*(long *)(param_3 + 0x30),auStack_a0,3,1,0,0);
        *(undefined1 *)(param_3 + 0x39) = 0;
        return;
      }
      goto OVRManager__PrepareCameraForSpaceWarp;
    }
  }
  FUN_0745e67c(param_3);
  return;
}


