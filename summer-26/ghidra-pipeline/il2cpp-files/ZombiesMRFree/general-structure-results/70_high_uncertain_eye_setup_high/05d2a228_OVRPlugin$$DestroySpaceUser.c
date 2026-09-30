/*
FUNCTION_NAME: OVRPlugin$$DestroySpaceUser
ENTRY_POINT: 05d2a228
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


ulong OVRPlugin__DestroySpaceUser(long param_1,undefined4 param_2,undefined4 *param_3)

{
  ushort uVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float in_s3;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  if ((DAT_07398940 & 1) == 0) {
    FUN_02fe925c(PTR_DAT_06fb8c58);
    DAT_07398940 = 1;
  }
  plVar8 = *(long **)(param_1 + 0x50);
  if (plVar8 != (long *)0x0) {
    lVar5 = *plVar8;
    lVar4 = *(long *)PTR_DAT_06fb8c58;
    uVar1 = *(ushort *)(lVar5 + 0x12e);
    uVar6 = (ulong)uVar1;
    if (*(int *)(param_1 + 0x58) != 1) {
      if (uVar1 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == lVar4) {
            puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 6) * 0x10 + 0x138);
            goto LAB_05d2a3f4;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined8 *)FUN_02feb5b8(plVar8,lVar4,6);
LAB_05d2a3f4:
                    /* WARNING: Could not recover jumptable at 0x05d2a410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar6 = (*(code *)*puVar3)(plVar8,param_2,param_3,puVar3[1]);
      return uVar6;
    }
    if (uVar1 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar4) {
          puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 8) * 0x10 + 0x138);
          goto LAB_05d2a2f8;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_02feb5b8(plVar8,lVar4,8);
LAB_05d2a2f8:
    uVar2 = (*(code *)*puVar3)(plVar8,param_2,param_3,puVar3[1]);
    lVar4 = FUN_068f5d7c(param_1,0);
    if (lVar4 != 0) {
      fVar11 = (float)param_3[1];
      fVar12 = (float)param_3[2];
      uVar9 = FUN_06905ae4(*param_3,lVar4,0);
      *param_3 = uVar9;
      param_3[1] = fVar11;
      param_3[2] = fVar12;
      lVar4 = FUN_068f5d7c(param_1,0);
      if (lVar4 != 0) {
        fVar10 = (float)FUN_0690449c(lVar4,0);
        fVar13 = (float)param_3[3];
        fVar16 = (float)param_3[4];
        fVar15 = (float)param_3[5];
        fVar14 = (float)param_3[6];
        param_3[3] = (fVar11 * fVar15 + in_s3 * fVar13 + fVar10 * fVar14) - fVar12 * fVar16;
        param_3[4] = (fVar12 * fVar13 + in_s3 * fVar16 + fVar11 * fVar14) - fVar10 * fVar15;
        param_3[5] = (fVar10 * fVar16 + in_s3 * fVar15 + fVar12 * fVar14) - fVar11 * fVar13;
        param_3[6] = ((in_s3 * fVar14 - fVar10 * fVar13) - fVar11 * fVar16) - fVar12 * fVar15;
        return (ulong)(uVar2 & 1);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


