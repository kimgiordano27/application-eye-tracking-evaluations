/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.LayerMask_DirectConverter$$CreateInstance
ENTRY_POINT: 05b998b4
PROGRAM: hellodot-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_13;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2
*/


void Unity_VisualScripting_FullSerializer_LayerMask_DirectConverter__CreateInstance(void)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  float *pfVar7;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long lVar8;
  float fVar9;
  undefined4 uVar10;
  double dVar11;
  int iVar12;
  int iVar13;
  float fVar14;
  double dVar15;
  float unaff_s9;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  
  if (*(int *)(*unaff_x20 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  dVar15 = (double)unaff_s9;
  dVar11 = modf(dVar15,(double *)&stack0x00000018);
  if (0.0 <= unaff_s9) {
    if (dVar11 == 0.5) {
      dVar11 = 1.0;
      goto LAB_05b9998c;
    }
    dVar15 = (double)(long)(dVar15 + 0.5);
  }
  else if (dVar11 == -0.5) {
    dVar11 = -1.0;
LAB_05b9998c:
    dVar15 = (double)CONCAT44(uStack000000000000001c,uStack0000000000000018);
    if (((long)dVar15 & 1U) != 0) {
      dVar15 = dVar15 + dVar11;
    }
  }
  else {
    dVar15 = (double)(long)(dVar15 + -0.5);
  }
  iVar12 = -0x80000000;
  if (dVar15 != INFINITY) {
    iVar12 = (int)dVar15;
  }
  if (iVar12 < 2) {
    iVar12 = 1;
  }
  if (unaff_x21 != 0) {
    if (*(int *)(unaff_x21 + 0x18) != 0) {
      *(int *)(unaff_x21 + 0x20) = iVar12;
      iVar12 = *(int *)(unaff_x19 + 0x110);
      fVar9 = *(float *)(unaff_x19 + 0x124);
      lVar8 = *(long *)(unaff_x19 + 0x148);
      fVar14 = *(float *)(unaff_x19 + 0x114);
      if (DAT_06a673a3 == '\0') {
        AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c8d28);
        DAT_06a673a3 = '\x01';
      }
      fVar14 = (fVar9 * (float)iVar12) / fVar14;
      if (*(int *)(*unaff_x20 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      iVar12 = -0x80000000;
      if ((float)(int)fVar14 != INFINITY) {
        iVar12 = (int)fVar14;
      }
      if (iVar12 < 2) {
        iVar12 = 1;
      }
      if (lVar8 == 0) goto LAB_05b99fbc;
      if (1 < *(uint *)(lVar8 + 0x18)) {
        *(int *)(lVar8 + 0x24) = iVar12;
        iVar12 = *(int *)(unaff_x19 + 0x110);
        fVar9 = *(float *)(unaff_x19 + 0x128);
        lVar8 = *(long *)(unaff_x19 + 0x148);
        fVar14 = *(float *)(unaff_x19 + 0x114);
        if (DAT_06a673a3 == '\0') {
          AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c8d28);
          DAT_06a673a3 = '\x01';
        }
        fVar14 = (fVar9 * (float)iVar12) / fVar14;
        if (*(int *)(*unaff_x20 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
        }
        iVar12 = -0x80000000;
        if ((float)(int)fVar14 != INFINITY) {
          iVar12 = (int)fVar14;
        }
        if (iVar12 < 2) {
          iVar12 = 1;
        }
        if (lVar8 == 0) goto LAB_05b99fbc;
        if (2 < *(uint *)(lVar8 + 0x18)) {
          *(int *)(lVar8 + 0x28) = iVar12;
          puVar3 = PTR_DAT_0663f768;
          lVar8 = *(long *)(unaff_x19 + 0x148);
          if (lVar8 == 0) goto LAB_05b99fbc;
          if (*(int *)(lVar8 + 0x18) != 0) {
            fVar9 = *(float *)(unaff_x19 + 0x114);
            iVar13 = *(int *)(lVar8 + 0x20);
            iVar12 = FUN_05b997d8();
            lVar8 = *(long *)puVar3;
            if (*(int *)(lVar8 + 0xe0) == 0) {
              thunk_FUN_02cd038c(lVar8);
              lVar8 = *(long *)puVar3;
            }
            puVar3 = PTR_DAT_0663f768;
            if ((long)(ulong)*(uint *)(*(long *)(lVar8 + 0xb8) + 4) < (long)iVar12) {
              thunk_FUN_02c7737c(PTR_DAT_0663f768);
              FUN_028be084();
              lVar8 = thunk_FUN_02c7737c(puVar3);
              uVar10 = NEON_ucvtf(*(undefined4 *)(*(long *)(lVar8 + 0xb8) + 4));
              uStack0000000000000018 = FUN_05ba6280(uVar10,0x40000000,0);
              uVar4 = thunk_FUN_02c7737c(PTR_DAT_065ca3f8);
              uVar4 = thunk_FUN_02cea4e8(uVar4,&stack0x00000018);
              uVar5 = thunk_FUN_02c7737c(PTR_DAT_0663f770);
              uVar4 = FUN_04db0cfc(uVar5,uVar4,0);
              thunk_FUN_02c7737c(PTR_DAT_065c96d8);
              uVar5 = thunk_FUN_02cea894();
              FUN_04e9e938(uVar5,uVar4,0);
              uVar4 = thunk_FUN_02c7737c(PTR_DAT_0663f778);
                    /* WARNING: Subroutine does not return */
              FUN_02ce7b54(uVar5,uVar4);
            }
            lVar8 = *(long *)(unaff_x19 + 0x148);
            if (lVar8 == 0) goto LAB_05b99fbc;
            uVar1 = *(uint *)(lVar8 + 0x18);
            uVar6 = 0;
            while (uVar6 < uVar1) {
              lVar2 = uVar6 * 4;
              iVar12 = (int)uVar6;
              pfVar7 = (float *)(unaff_x19 + 0x120);
              if (((iVar12 != 0) && (pfVar7 = (float *)(unaff_x19 + 0x128), iVar12 != 2)) &&
                 (pfVar7 = (float *)(unaff_x19 + 0x124), iVar12 != 1)) {
                thunk_FUN_02c7737c(PTR_DAT_065c9a80);
                uVar4 = thunk_FUN_02cea894();
                uVar5 = thunk_FUN_02c7737c(PTR_DAT_065d6290);
                FUN_04f2c774(uVar4,uVar5,0);
                uVar5 = thunk_FUN_02c7737c(PTR_DAT_065d6298);
                    /* WARNING: Subroutine does not return */
                FUN_02ce7b54(uVar4,uVar5);
              }
              uVar6 = uVar6 + 1;
              *pfVar7 = (fVar9 / (float)iVar13) * (float)*(int *)(lVar8 + 0x20 + lVar2);
              if (uVar6 == 3) {
                return;
              }
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c84();
  }
LAB_05b99fbc:
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


