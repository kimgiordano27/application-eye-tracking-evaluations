/*
FUNCTION_NAME: FUN_062d7ad8
ENTRY_POINT: 062d7ad8
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_10;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 FUN_062d7ad8(undefined1 param_1 [16],undefined8 param_2,long param_3)

{
  byte bVar1;
  undefined *puVar2;
  byte bVar3;
  uint uVar4;
  long *plVar5;
  undefined8 *puVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  if ((DAT_06b8bd28 & 1) == 0) {
    FUN_02d6084c(Method_Unity_Burst_Intrinsics_Arm_Neon_vmlsq_f64__);
    FUN_02d6084c(Method_System_Net_WebRequestStream_Close_internal__);
    FUN_02d6084c(PTR_DAT_0675f050);
    FUN_02d6084c(PTR_DAT_0675f058);
    DAT_06b8bd28 = 1;
  }
  plVar5 = (long *)FUN_062d5b6c(param_3);
  puVar2 = Method_Unity_Burst_Intrinsics_Arm_Neon_vmlsq_f64__;
  if (plVar5 != (long *)0x0) {
    lVar8 = *plVar5;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vmlsq_f64__)
        {
          puVar6 = (undefined8 *)(lVar8 + (long)(*piVar10 + 0xc) * 0x10 + 0x138);
          goto LAB_062d7b9c;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar6 = (undefined8 *)
             FUN_02d9a5d4(plVar5,*(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vmlsq_f64__,0xc);
LAB_062d7b9c:
    fVar12 = (float)(*(code *)*puVar6)(plVar5,puVar6[1]);
    uVar14 = FUN_062d7ea4(param_3);
    if (DAT_06b72814 == '\0') {
      FUN_02d6084c(PTR_DAT_0675ebd8);
      DAT_06b72814 = '\x01';
    }
    fVar18 = (float)uVar14;
    fVar15 = ABS(fVar18);
    if (ABS(fVar18) <= 0.0) {
      fVar15 = 0.0;
    }
    fVar16 = **(float **)(*(long *)PTR_DAT_0675ebd8 + 0xb8) * 8.0;
    fVar17 = fVar15 * DAT_012084b4;
    if (fVar15 * DAT_012084b4 <= fVar16) {
      fVar17 = fVar16;
    }
    fVar15 = (float)param_2;
    if (ABS(0.0 - fVar18) < fVar17) {
      fVar17 = ABS(fVar15);
      if (fVar17 <= 0.0) {
        fVar17 = 0.0;
      }
      fVar13 = fVar17 * DAT_012084b4;
      if (fVar17 * DAT_012084b4 <= fVar16) {
        fVar13 = fVar16;
      }
      if (ABS(0.0 - fVar15) < fVar13) {
        uVar14 = 0;
        goto LAB_062d7de0;
      }
    }
    plVar5 = (long *)FUN_062d5b6c(param_3);
    if (plVar5 != (long *)0x0) {
      lVar8 = *plVar5;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      uVar11 = *(undefined8 *)PTR_DAT_0675f058;
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
            puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_062d7cb4;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar6 = (undefined8 *)FUN_02d9a5d4(plVar5,*(long *)puVar2,0);
LAB_062d7cb4:
      uVar9 = (*(code *)*puVar6)(plVar5,uVar11,puVar6[1]);
      if ((uVar9 & 1) == 0) {
        plVar5 = (long *)FUN_062d5b6c(param_3);
        if (plVar5 == (long *)0x0) goto LAB_062d7ea0;
        lVar8 = *plVar5;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        uVar11 = *(undefined8 *)PTR_DAT_0675f050;
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
              puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_062d7d38;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar6 = (undefined8 *)FUN_02d9a5d4(plVar5,*(long *)puVar2,0);
LAB_062d7d38:
        uVar4 = (*(code *)*puVar6)(plVar5,uVar11,puVar6[1]);
        uVar4 = uVar4 ^ 1;
      }
      else {
        uVar4 = 0;
      }
      fVar17 = fVar18 * *(float *)(param_3 + 0x4c) + fVar15 * *(float *)(param_3 + 0x50);
      if ((uVar4 & 1) != 0) {
        fVar16 = DAT_01208378;
        if (fVar17 <= 0.0) {
          fVar13 = *(float *)(param_3 + 0x54);
        }
        else {
          fVar13 = *(float *)(param_3 + 0x54);
          if (*(int *)(param_3 + 0x48) == 1) {
            fVar16 = 0.5;
          }
        }
        if (fVar12 <= fVar13 + fVar16) {
          return 0;
        }
      }
      if (*(int *)(*(long *)Method_System_Net_WebRequestStream_Close_internal__ + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar14 = FUN_062f1770(uVar14,param_2,DAT_01208354,0);
      if ((int)uVar14 == 0) {
LAB_062d7de0:
        *(undefined4 *)(param_3 + 0x48) = 0;
        *(undefined1 *)(param_3 + 0x58) = 0;
        return uVar14;
      }
      if (fVar17 <= 0.0) {
        iVar7 = 1;
        *(undefined4 *)(param_3 + 0x48) = 0;
      }
      else {
        iVar7 = *(int *)(param_3 + 0x48) + 1;
      }
      bVar1 = *(byte *)(param_3 + 0x58);
      *(int *)(param_3 + 0x48) = iVar7;
      *(float *)(param_3 + 0x50) = fVar15;
      *(float *)(param_3 + 0x54) = fVar12;
      *(float *)(param_3 + 0x4c) = fVar18;
      plVar5 = (long *)FUN_062d5b6c(param_3);
      if (plVar5 != (long *)0x0) {
        lVar8 = *plVar5;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
              puVar6 = (undefined8 *)(lVar8 + (long)(*piVar10 + 0xb) * 0x10 + 0x138);
              goto LAB_062d7e6c;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar6 = (undefined8 *)FUN_02d9a5d4(plVar5,*(long *)puVar2,0xb);
LAB_062d7e6c:
        bVar3 = (*(code *)*puVar6)(plVar5,puVar6[1]);
        *(byte *)(param_3 + 0x58) = bVar1 | bVar3 & 1;
        return 1;
      }
    }
  }
LAB_062d7ea0:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


