/*
FUNCTION_NAME: OVRPlugin$$set_HandSkeletonVersion
ENTRY_POINT: 07a3e388
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


void OVRPlugin__set_HandSkeletonVersion
               (ulong param_1,undefined1 param_2 [16],float param_3,float param_4,long param_5)

{
  ulong uVar1;
  long lVar2;
  long unaff_x20;
  long unaff_x21;
  long *plVar3;
  undefined8 uVar4;
  long unaff_x22;
  undefined8 *puVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  plVar3 = *(long **)(unaff_x21 + 0xbb0);
  if ((param_1 & 1) == 0) {
    FUN_04077588(PTR_DAT_09285bb0);
    *(undefined1 *)(unaff_x22 + 0x2a9) = 1;
  }
  if (*(int *)(*plVar3 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  uVar1 = FUN_089ca704();
  if ((uVar1 & 1) == 0) {
LAB_07a3e414:
    if ((*(long *)(param_5 + 0x48) == 0) ||
       (lVar2 = thunk_FUN_08990a60(*(long *)(param_5 + 0x48),0), lVar2 == 0)) goto LAB_07a3e50c;
    puVar5 = (undefined8 *)(param_5 + 0x58);
  }
  else {
    if (unaff_x20 == 0) goto LAB_07a3e50c;
    puVar5 = (undefined8 *)(unaff_x20 + 0x28);
    uVar4 = *puVar5;
    if (*(int *)(*plVar3 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    uVar1 = FUN_089ca704(uVar4,0,0);
    if ((uVar1 & 1) == 0) goto LAB_07a3e414;
    if ((*(long *)(param_5 + 0x48) == 0) ||
       (lVar2 = thunk_FUN_08990a60(*(long *)(param_5 + 0x48),0), lVar2 == 0)) goto LAB_07a3e50c;
  }
  FUN_08995080(lVar2,*puVar5,0);
  if (*(char *)(param_5 + 0x60) == '\0') {
    if ((*(long *)(param_5 + 0x48) == 0) ||
       (lVar2 = FUN_089c7534(*(long *)(param_5 + 0x48),0), unaff_x20 == 0)) goto LAB_07a3e50c;
    fVar7 = *(float *)(param_5 + 100);
    fVar8 = *(float *)(param_5 + 0x68);
    fVar9 = *(float *)(param_5 + 0x6c);
    fVar6 = (float)FUN_07a3d3c8();
    if (DAT_098854e9 == '\0') {
      FUN_04077588(PTR_DAT_09285ae0);
      DAT_098854e9 = '\x01';
    }
    if (*(int *)(*(long *)PTR_DAT_09285ae0 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    if (lVar2 == 0) goto LAB_07a3e50c;
    fVar6 = SQRT(param_4 * param_4 + fVar6 * fVar6 + param_3 * param_3);
    FUN_089dc428(fVar7 * fVar6,fVar8 * fVar6,fVar9 * fVar6,lVar2,0);
  }
  if (*(long *)(param_5 + 0x48) != 0) {
    FUN_0899153c(*(long *)(param_5 + 0x48),1,0);
    return;
  }
LAB_07a3e50c:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


