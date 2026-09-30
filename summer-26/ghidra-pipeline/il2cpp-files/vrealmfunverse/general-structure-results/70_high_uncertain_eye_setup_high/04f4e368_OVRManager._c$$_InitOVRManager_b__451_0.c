/*
FUNCTION_NAME: OVRManager.<>c$$<InitOVRManager>b__451_0
ENTRY_POINT: 04f4e368
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_4
*/


uint OVRManager_<>c__<InitOVRManager>b__451_0
               (undefined1 param_1 [16],float param_2,float param_3,undefined8 *param_4)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  long *unaff_x21;
  long *unaff_x22;
  float fVar6;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  
  (*(code *)*param_4)();
  lVar3 = *unaff_x21;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *unaff_x22) {
        puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 1) * 0x10 + 0x138);
        goto LAB_04f4e3d8;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar2 = (undefined8 *)FUN_02b7654c();
LAB_04f4e3d8:
  fVar6 = (float)(*(code *)*puVar2)();
  if (unaff_x19 != 0) {
    uVar4 = FUN_04f4d210((unaff_s8 - param_3) * (unaff_s8 - param_3) +
                         (unaff_s10 - fVar6) * (unaff_s10 - fVar6) +
                         (unaff_s9 - param_2) * (unaff_s9 - param_2));
    if ((uVar4 & 1) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = FUN_04af1e4c();
    }
    return uVar1 & 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


