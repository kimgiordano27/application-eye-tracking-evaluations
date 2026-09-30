/*
FUNCTION_NAME: OVRPlugin$$CancelFuture
ENTRY_POINT: 07a4c45c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


float OVRPlugin__CancelFuture(float param_1,undefined4 param_2,undefined4 param_3,long param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *plVar7;
  float fVar8;
  float fVar9;
  
  if ((DAT_09895409 & 1) == 0) {
    FUN_04077588(PTR_DAT_092ed030);
    DAT_09895409 = 1;
  }
  puVar1 = PTR_DAT_092ed030;
  plVar7 = *(long **)(param_4 + 0x28);
  if (plVar7 != (long *)0x0) {
    lVar3 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_092ed030) {
          puVar2 = (undefined8 *)(lVar3 + (long)(*piVar6 + 9) * 0x10 + 0x138);
          goto LAB_07a4c500;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_040b1e00(plVar7,*(long *)PTR_DAT_092ed030,9);
LAB_07a4c500:
                    /* try { // try from 07a4c500 to 07b4c567 has its CatchHandler @ 07a4c500
                       catch() { ... } // from try @ 07a4c500 with catch @ 07a4c500
                       catch() { ... } // from try @ 07a4c610 with catch @ 07a4c500
                       catch() { ... } // from try @ 07a4c63c with catch @ 07a4c500
                       catch() { ... } // from try @ 07a4c67c with catch @ 07a4c500
                       catch() { ... } // from try @ 07a4c6f0 with catch @ 07a4c500 */
    uVar5 = (*(code *)*puVar2)(plVar7,0);
    if ((uVar5 & 1) == 0) {
      plVar7 = *(long **)(param_4 + 0x28);
      if (plVar7 == (long *)0x0) goto LAB_07a4c658;
      lVar4 = *plVar7;
      lVar3 = *(long *)puVar1;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == lVar3) {
            puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 4) * 0x10 + 0x138);
            goto LAB_07a4c620;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined8 *)FUN_040b1e00(plVar7,lVar3,4);
LAB_07a4c620:
      fVar8 = (float)(*(code *)*puVar2)(plVar7,puVar2[1]);
      param_1 = param_1 * fVar8;
    }
    else {
      fVar8 = (float)FUN_089b9694(0,0,0,0,param_1,param_2,param_3,0);
      plVar7 = *(long **)(param_4 + 0x28);
      if (plVar7 == (long *)0x0) goto LAB_07a4c658;
      lVar4 = *plVar7;
      lVar3 = *(long *)puVar1;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == lVar3) {
            puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 4) * 0x10 + 0x138);
            goto LAB_07a4c5e8;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined8 *)FUN_040b1e00(plVar7,lVar3,4);
LAB_07a4c5e8:
      fVar9 = (float)(*(code *)*puVar2)(plVar7,puVar2[1]);
      param_1 = fVar8 * fVar9 + 0.0;
    }
    return param_1;
  }
LAB_07a4c658:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


