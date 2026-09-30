/*
FUNCTION_NAME: OVRPlugin$$StartFaceTracking
ENTRY_POINT: 051c5d54
PROGRAM: hellodot-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRPlugin__StartFaceTracking(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  long in_x10;
  int *piVar5;
  undefined4 *unaff_x19;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float in_s3;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  uVar4 = (ulong)*(ushort *)(param_1 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == **(long **)(in_x10 + 0x638)) {
        puVar2 = (undefined8 *)(param_1 + (long)(*piVar5 + 4) * 0x10 + 0x138);
        goto LAB_051c5da4;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar2 = (undefined8 *)FUN_02ce0a7c();
LAB_051c5da4:
  uVar1 = (*(code *)*puVar2)();
  if ((uVar1 & 1) != 0) {
    lVar3 = FUN_05ef2cb4();
    if (lVar3 != 0) {
      fVar8 = (float)unaff_x19[1];
      fVar9 = (float)unaff_x19[2];
      uVar6 = FUN_05f0009c(*unaff_x19,lVar3,0);
      *unaff_x19 = uVar6;
      unaff_x19[1] = fVar8;
      unaff_x19[2] = fVar9;
      lVar3 = FUN_05ef2cb4();
      if (lVar3 != 0) {
        fVar7 = (float)FUN_05f00104(lVar3,0);
        fVar10 = (float)unaff_x19[3];
        fVar13 = (float)unaff_x19[4];
        fVar12 = (float)unaff_x19[5];
        fVar11 = (float)unaff_x19[6];
        unaff_x19[3] = (fVar8 * fVar12 + in_s3 * fVar10 + fVar7 * fVar11) - fVar9 * fVar13;
        unaff_x19[4] = (fVar9 * fVar10 + in_s3 * fVar13 + fVar8 * fVar11) - fVar7 * fVar12;
        unaff_x19[5] = (fVar7 * fVar13 + in_s3 * fVar12 + fVar9 * fVar11) - fVar8 * fVar10;
        unaff_x19[6] = ((in_s3 * fVar11 - fVar7 * fVar10) - fVar8 * fVar13) - fVar9 * fVar12;
        goto LAB_051c5e80;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
LAB_051c5e80:
  return uVar1 & 1;
}


