/*
FUNCTION_NAME: OVRPlugin$$GetEyeLayerRecommendedResolution
ENTRY_POINT: 090b12a0
PROGRAM: Hyper-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetEyeLayerRecommendedResolution
               (undefined1 param_1 [16],float param_2,float param_3)

{
  ulong uVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  undefined8 uVar3;
  long unaff_x22;
  undefined8 *puVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  *(undefined1 *)(unaff_x22 + 0x30c) = 1;
  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  uVar1 = FUN_0a17b398();
  if ((uVar1 & 1) == 0) {
LAB_090b1314:
    if ((*(long *)(unaff_x19 + 0x48) == 0) ||
       (lVar2 = thunk_FUN_0a147588(*(long *)(unaff_x19 + 0x48),0), lVar2 == 0)) goto LAB_090b140c;
    puVar4 = (undefined8 *)(unaff_x19 + 0x58);
  }
  else {
    if (unaff_x20 == 0) goto LAB_090b140c;
    puVar4 = (undefined8 *)(unaff_x20 + 0x28);
    uVar3 = *puVar4;
    if (*(int *)(*unaff_x21 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    uVar1 = FUN_0a17b398(uVar3,0,0);
    if ((uVar1 & 1) == 0) goto LAB_090b1314;
    if ((*(long *)(unaff_x19 + 0x48) == 0) ||
       (lVar2 = thunk_FUN_0a147588(*(long *)(unaff_x19 + 0x48),0), lVar2 == 0)) goto LAB_090b140c;
  }
  FUN_0a14a608(lVar2,*puVar4,0);
  if (*(char *)(unaff_x19 + 0x60) == '\0') {
    if ((*(long *)(unaff_x19 + 0x48) == 0) ||
       (lVar2 = FUN_0a17834c(*(long *)(unaff_x19 + 0x48),0), unaff_x20 == 0)) goto LAB_090b140c;
    fVar6 = *(float *)(unaff_x19 + 100);
    fVar7 = *(float *)(unaff_x19 + 0x68);
    fVar8 = *(float *)(unaff_x19 + 0x6c);
    fVar5 = (float)FUN_090b02dc();
    if (DAT_0b32d33b == '\0') {
      FUN_04947ee4(PTR_DAT_0ac0a830);
      DAT_0b32d33b = '\x01';
    }
    if (*(int *)(*(long *)PTR_DAT_0ac0a830 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    if (lVar2 == 0) goto LAB_090b140c;
    fVar5 = SQRT(param_3 * param_3 + fVar5 * fVar5 + param_2 * param_2);
    FUN_0a18aa1c(fVar6 * fVar5,fVar7 * fVar5,fVar8 * fVar5,lVar2,0);
  }
  if (*(long *)(unaff_x19 + 0x48) != 0) {
    FUN_0a148064(*(long *)(unaff_x19 + 0x48),1,0);
    return;
  }
LAB_090b140c:
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


