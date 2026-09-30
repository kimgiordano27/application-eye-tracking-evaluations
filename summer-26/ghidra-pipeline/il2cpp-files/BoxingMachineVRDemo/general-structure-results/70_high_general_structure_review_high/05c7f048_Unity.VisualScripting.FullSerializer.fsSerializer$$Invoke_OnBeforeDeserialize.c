/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsSerializer$$Invoke_OnBeforeDeserialize
ENTRY_POINT: 05c7f048
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_14;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_6
*/


void Unity_VisualScripting_FullSerializer_fsSerializer__Invoke_OnBeforeDeserialize(long param_1)

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
  
  if (*(int *)(param_1 + 0xe4) == 0) {
                    /* try { // try from 05c7f050 to 05d7f05b has its CatchHandler @ 05c7f334 */
    thunk_FUN_02dbd7b4();
  }
  dVar15 = (double)unaff_s9;
                    /* try { // try from 05c7f060 to 05d7f06b has its CatchHandler @ 05c7f330 */
  dVar11 = modf(dVar15,(double *)&stack0x00000018);
  if (0.0 <= unaff_s9) {
    if (dVar11 == 0.5) {
      dVar11 = 1.0;
      goto LAB_05c7f150;
    }
    dVar15 = (double)(long)(dVar15 + 0.5);
  }
  else if (dVar11 == -0.5) {
    dVar11 = -1.0;
LAB_05c7f150:
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
    if (1 < *(uint *)(unaff_x21 + 0x18)) {
      *(int *)(unaff_x21 + 0x24) = iVar12;
      iVar12 = *(int *)(unaff_x19 + 0x108);
      fVar9 = *(float *)(unaff_x19 + 0x118);
      lVar8 = *(long *)(unaff_x19 + 0x140);
      fVar14 = *(float *)(unaff_x19 + 0x10c);
      if (DAT_06b778bf == '\0') {
        FUN_02d6084c(PTR_DAT_0675e6d8);
        DAT_06b778bf = '\x01';
      }
      fVar14 = (fVar9 * (float)iVar12) / fVar14;
      if (*(int *)(*unaff_x20 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      iVar12 = -0x80000000;
      if ((float)(int)fVar14 != INFINITY) {
        iVar12 = (int)fVar14;
      }
      if (iVar12 < 2) {
        iVar12 = 1;
      }
      if (lVar8 == 0) goto LAB_05c7f6c8;
      if (*(int *)(lVar8 + 0x18) != 0) {
        *(int *)(lVar8 + 0x20) = iVar12;
        iVar12 = *(int *)(unaff_x19 + 0x108);
        fVar9 = *(float *)(unaff_x19 + 0x120);
        lVar8 = *(long *)(unaff_x19 + 0x140);
        fVar14 = *(float *)(unaff_x19 + 0x10c);
        if (DAT_06b778bf == '\0') {
          FUN_02d6084c(PTR_DAT_0675e6d8);
          DAT_06b778bf = '\x01';
        }
        fVar14 = (fVar9 * (float)iVar12) / fVar14;
        if (*(int *)(*unaff_x20 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        iVar12 = -0x80000000;
        if ((float)(int)fVar14 != INFINITY) {
          iVar12 = (int)fVar14;
        }
        if (iVar12 < 2) {
          iVar12 = 1;
        }
        if (lVar8 == 0) goto LAB_05c7f6c8;
        if (2 < *(uint *)(lVar8 + 0x18)) {
          *(int *)(lVar8 + 0x28) = iVar12;
          puVar3 = Method_System_Collections_Generic_List<IXRActivateInteractable>__ctor__;
          lVar8 = *(long *)(unaff_x19 + 0x140);
          if (lVar8 == 0) goto LAB_05c7f6c8;
          if (1 < *(uint *)(lVar8 + 0x18)) {
            fVar9 = *(float *)(unaff_x19 + 0x10c);
            iVar13 = *(int *)(lVar8 + 0x24);
            iVar12 = FUN_05c7eee4();
            lVar8 = *(long *)puVar3;
            if (*(int *)(lVar8 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4(lVar8);
              lVar8 = *(long *)puVar3;
            }
            puVar3 = Method_System_Collections_Generic_List<IXRActivateInteractable>__ctor__;
            if ((long)(ulong)*(uint *)(*(long *)(lVar8 + 0xb8) + 4) < (long)iVar12) {
              thunk_FUN_02dc61f4(
                                Method_System_Collections_Generic_List<IXRActivateInteractable>__ctor__
                                );
              FUN_028f4b80();
              lVar8 = thunk_FUN_02dc61f4(puVar3);
              uVar10 = NEON_ucvtf(*(undefined4 *)(*(long *)(lVar8 + 0xb8) + 4));
              uStack0000000000000018 = FUN_05c8b9ec(uVar10,0x40000000,0);
              uVar4 = thunk_FUN_02d9d164(*(undefined8 *)(PTR_DAT_0675e258 + 0x78),&stack0x00000018);
              uVar5 = thunk_FUN_02dc61f4(
                                        Method_System_Collections_Generic_List<IXRActivateInteractable>_Clear__
                                        );
              uVar4 = System_Char__System_IConvertible_ToSByte(uVar5,uVar4,0);
              thunk_FUN_02dc61f4(PTR_DAT_06763b78);
              uVar5 = thunk_FUN_02d9d534();
              FUN_04f7d8e0(uVar5,uVar4,0);
              uVar4 = thunk_FUN_02dc61f4(
                                        Method_System_Collections_Generic_List<IXRActivateInteractable>_GetEnumerator__
                                        );
                    /* WARNING: Subroutine does not return */
              FUN_02d609b4(uVar5,uVar4);
            }
            lVar8 = *(long *)(unaff_x19 + 0x140);
            if (lVar8 == 0) goto LAB_05c7f6c8;
            uVar1 = *(uint *)(lVar8 + 0x18);
            uVar6 = 0;
            while (uVar6 < uVar1) {
              lVar2 = uVar6 * 4;
              iVar12 = (int)uVar6;
              pfVar7 = (float *)(unaff_x19 + 0x118);
              if (((iVar12 != 0) && (pfVar7 = (float *)(unaff_x19 + 0x120), iVar12 != 2)) &&
                 (pfVar7 = (float *)(unaff_x19 + 0x11c), iVar12 != 1)) {
                thunk_FUN_02dc61f4(PTR_DAT_06763258);
                uVar4 = thunk_FUN_02d9d534();
                uVar5 = thunk_FUN_02dc61f4(PTR_DAT_06787000);
                FUN_05002a00(uVar4,uVar5,0);
                uVar5 = thunk_FUN_02dc61f4(
                                          Method_System_Collections_Generic_List<IXRActivateInteractable>_Add__
                                          );
                    /* WARNING: Subroutine does not return */
                FUN_02d609b4(uVar4,uVar5);
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
    FUN_02d60af0();
  }
LAB_05c7f6c8:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


