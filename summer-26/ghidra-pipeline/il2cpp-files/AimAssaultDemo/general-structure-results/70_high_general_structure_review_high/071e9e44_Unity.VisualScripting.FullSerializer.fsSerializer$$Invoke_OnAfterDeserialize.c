/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsSerializer$$Invoke_OnAfterDeserialize
ENTRY_POINT: 071e9e44
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_13;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_6
*/


void Unity_VisualScripting_FullSerializer_fsSerializer__Invoke_OnAfterDeserialize(double param_1)

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
  double dVar14;
  float fVar15;
  double unaff_d8;
  float unaff_s9;
  undefined4 uStack0000000000000018;
  
                    /* try { // try from 071e9e44 to 072e9e4f has its CatchHandler @ 071e9fb0 */
  if (0.0 <= unaff_s9) {
    if (param_1 == 0.5) {
      dVar14 = 1.0;
      goto LAB_071e9efc;
    }
    dVar11 = (double)(long)(unaff_d8 + 0.5);
  }
  else if (param_1 == -0.5) {
                    /* try { // try from 071e9e5c to 072e9e9b has its CatchHandler @ 071e9fec */
    dVar14 = -1.0;
LAB_071e9efc:
    dVar11 = _uStack0000000000000018;
    if (((long)_uStack0000000000000018 & 1U) != 0) {
      dVar11 = _uStack0000000000000018 + dVar14;
    }
  }
  else {
    dVar11 = (double)(long)(unaff_d8 + -0.5);
  }
  iVar12 = -0x80000000;
  if (dVar11 != INFINITY) {
    iVar12 = (int)dVar11;
  }
  if (iVar12 < 2) {
    iVar12 = 1;
  }
  if (unaff_x21 != 0) {
    if (*(int *)(unaff_x21 + 0x18) != 0) {
      *(int *)(unaff_x21 + 0x20) = iVar12;
      iVar12 = *(int *)(unaff_x19 + 0x108);
      fVar9 = *(float *)(unaff_x19 + 0x11c);
      lVar8 = *(long *)(unaff_x19 + 0x140);
      fVar15 = *(float *)(unaff_x19 + 0x10c);
      if (DAT_08252d5d == '\0') {
        FUN_0373b518(PTR_DAT_07d863e8);
        DAT_08252d5d = '\x01';
      }
      fVar15 = (fVar9 * (float)iVar12) / fVar15;
      if (*(int *)(*unaff_x20 + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      iVar12 = -0x80000000;
      if ((float)(int)fVar15 != INFINITY) {
        iVar12 = (int)fVar15;
      }
      if (iVar12 < 2) {
        iVar12 = 1;
      }
      if (lVar8 == 0) goto LAB_071ea52c;
      if (1 < *(uint *)(lVar8 + 0x18)) {
        *(int *)(lVar8 + 0x24) = iVar12;
        iVar12 = *(int *)(unaff_x19 + 0x108);
        fVar9 = *(float *)(unaff_x19 + 0x120);
        lVar8 = *(long *)(unaff_x19 + 0x140);
        fVar15 = *(float *)(unaff_x19 + 0x10c);
        if (DAT_08252d5d == '\0') {
          FUN_0373b518(PTR_DAT_07d863e8);
          DAT_08252d5d = '\x01';
        }
        fVar15 = (fVar9 * (float)iVar12) / fVar15;
        if (*(int *)(*unaff_x20 + 0xe4) == 0) {
          thunk_FUN_03798b70();
        }
        iVar12 = -0x80000000;
        if ((float)(int)fVar15 != INFINITY) {
          iVar12 = (int)fVar15;
        }
        if (iVar12 < 2) {
          iVar12 = 1;
        }
        if (lVar8 == 0) goto LAB_071ea52c;
        if (2 < *(uint *)(lVar8 + 0x18)) {
          *(int *)(lVar8 + 0x28) = iVar12;
          puVar3 = System_Func<float,_float,_float,_float>_TypeInfo;
          lVar8 = *(long *)(unaff_x19 + 0x140);
          if (lVar8 == 0) goto LAB_071ea52c;
          if (*(int *)(lVar8 + 0x18) != 0) {
            fVar9 = *(float *)(unaff_x19 + 0x10c);
            iVar13 = *(int *)(lVar8 + 0x20);
            iVar12 = FUN_071e9d48();
            lVar8 = *(long *)puVar3;
            if (*(int *)(lVar8 + 0xe4) == 0) {
              thunk_FUN_03798b70(lVar8);
              lVar8 = *(long *)puVar3;
            }
            puVar3 = System_Func<float,_float,_float,_float>_TypeInfo;
            if ((long)(ulong)*(uint *)(*(long *)(lVar8 + 0xb8) + 4) < (long)iVar12) {
              thunk_FUN_037a15ac(System_Func<float,_float,_float,_float>_TypeInfo);
              FUN_031ae340();
              lVar8 = thunk_FUN_037a15ac(puVar3);
              uVar10 = NEON_ucvtf(*(undefined4 *)(*(long *)(lVar8 + 0xb8) + 4));
              uStack0000000000000018 = FUN_071f6850(uVar10,0x40000000,0);
              uVar4 = thunk_FUN_037784fc(*(undefined8 *)(PTR_DAT_07d86548 + 0x78),&stack0x00000018);
              uVar5 = thunk_FUN_037a15ac(
                                        System_Func<Stream,_XmlReaderSettings,_XmlParserContext,_XmlReader>_TypeInfo
                                        );
              uVar4 = FUN_060b76a8(uVar5,uVar4,0);
              thunk_FUN_037a15ac(PTR_DAT_07d8ee68);
              uVar5 = thunk_FUN_037788cc();
              FUN_061a843c(uVar5,uVar4,0);
              uVar4 = thunk_FUN_037a15ac(
                                        System_Func<string,_AsyncCallback,_object,_IAsyncResult>_TypeInfo
                                        );
                    /* WARNING: Subroutine does not return */
              FUN_0373b680(uVar5,uVar4);
            }
            lVar8 = *(long *)(unaff_x19 + 0x140);
            if (lVar8 == 0) goto LAB_071ea52c;
            uVar1 = *(uint *)(lVar8 + 0x18);
            uVar6 = 0;
            while (uVar6 < uVar1) {
              lVar2 = uVar6 * 4;
              iVar12 = (int)uVar6;
              pfVar7 = (float *)(unaff_x19 + 0x118);
              if (((iVar12 != 0) && (pfVar7 = (float *)(unaff_x19 + 0x120), iVar12 != 2)) &&
                 (pfVar7 = (float *)(unaff_x19 + 0x11c), iVar12 != 1)) {
                thunk_FUN_037a15ac(PTR_DAT_07d92788);
                uVar4 = thunk_FUN_037788cc();
                uVar5 = thunk_FUN_037a15ac(PTR_DAT_07d92790);
                FUN_0623e69c(uVar4,uVar5,0);
                uVar5 = thunk_FUN_037a15ac(PTR_DAT_07d927a0);
                    /* WARNING: Subroutine does not return */
                FUN_0373b680(uVar4,uVar5);
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
    FUN_0373b7bc();
  }
LAB_071ea52c:
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


