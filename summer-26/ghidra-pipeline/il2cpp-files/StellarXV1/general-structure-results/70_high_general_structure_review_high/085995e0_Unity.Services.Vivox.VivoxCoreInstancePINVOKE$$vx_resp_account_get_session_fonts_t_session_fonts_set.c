/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_resp_account_get_session_fonts_t_session_fonts_set
ENTRY_POINT: 085995e0
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_8;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


uint Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_resp_account_get_session_fonts_t_session_fonts_set
               (void)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  char in_NG;
  char in_OV;
  byte bVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long unaff_x20;
  ulong unaff_x23;
  ulong uVar10;
  undefined8 unaff_x27;
  long lVar11;
  long lVar12;
  short sVar13;
  long unaff_x29;
  float fVar14;
  undefined4 uVar15;
  undefined4 extraout_s0;
  undefined4 uVar16;
  float fVar17;
  undefined8 in_stack_00000008;
  long in_stack_00000010;
  
  puVar2 = PTR_DAT_09285bb0;
  if (in_NG == in_OV) {
    uVar10 = 0;
    sVar13 = 0;
    do {
      if (uVar10 != *(uint *)(unaff_x20 + 0x10)) {
        uVar6 = FUN_050c7be0(unaff_x27);
        lVar7 = FUN_08a08f70(uVar6,0);
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_040d65a8(*(long *)puVar2);
        }
        uVar8 = FUN_089cc398(lVar7,0,0);
        if ((uVar8 & 1) == 0) {
          if (lVar7 == 0) goto LAB_0859980c;
          iVar5 = FUN_08999cb4(lVar7,0);
          fVar14 = 1.0;
          if (iVar5 != 2) {
            fVar14 = -1.0;
          }
          fVar17 = 0.0;
          if (iVar5 != 0) {
            fVar17 = fVar14;
          }
          if (0.0 <= fVar17) {
            iVar5 = FUN_0899adf8(lVar7,0);
            puVar3 = PTR_DAT_0932e408;
            if (iVar5 == 0) {
              lVar9 = *(long *)PTR_DAT_0932e408;
              if (*(int *)(lVar9 + 0xe4) == 0) {
                thunk_FUN_040d65a8();
                lVar9 = *(long *)puVar3;
              }
              lVar12 = *(long *)(lVar9 + 0xb8);
              lVar11 = *(long *)(lVar12 + 0x30);
              if (lVar11 == 0) goto LAB_0859980c;
              if (*(uint *)(lVar11 + 0x18) <= (uint)(int)sVar13) goto LAB_08599810;
              uVar16 = *(undefined4 *)(lVar12 + 0xc);
              uVar15 = *(undefined4 *)(lVar12 + 0x10);
              lVar11 = lVar11 + (long)sVar13 * 0x10;
              fVar17 = *(float *)(lVar12 + 0x14);
              fVar14 = *(float *)(lVar12 + 0x18);
            }
            else {
              cVar1 = *(char *)(unaff_x29 + 0x3c);
              if (*(int *)(*(long *)PTR_DAT_0932d8a8 + 0xe4) == 0) {
                thunk_FUN_040d65a8();
              }
              uVar15 = FUN_08563fb0(lVar7,iVar5 != 2 && cVar1 != '\0',0);
              puVar3 = PTR_DAT_0932e408;
              lVar9 = *(long *)PTR_DAT_0932e408;
              if (*(int *)(lVar9 + 0xe4) == 0) {
                thunk_FUN_040d65a8();
                lVar9 = *(long *)puVar3;
              }
              lVar11 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x30);
              lVar9 = FUN_0899af70(lVar7,0);
              if (lVar11 == 0) goto LAB_0859980c;
              if (*(uint *)(lVar11 + 0x18) <= (uint)(int)sVar13) goto LAB_08599810;
              fVar14 = (float)(int)sVar13;
              lVar11 = lVar11 + (long)sVar13 * 0x10;
              uVar16 = extraout_s0;
            }
            *(undefined4 *)(lVar11 + 0x20) = uVar16;
            *(undefined4 *)(lVar11 + 0x24) = uVar15;
            *(float *)(lVar11 + 0x28) = fVar17;
            *(float *)(lVar11 + 0x2c) = fVar14;
            lVar11 = *(long *)(in_stack_00000010 + 0xf0);
            if (lVar11 == 0) {
LAB_0859980c:
                    /* WARNING: Subroutine does not return */
              FUN_04077830();
            }
            if (*(uint *)(lVar11 + 0x18) <= uVar10) {
LAB_08599810:
                    /* WARNING: Subroutine does not return */
              FUN_04077838();
            }
            lVar12 = *(long *)(in_stack_00000010 + 0xe8);
            *(short *)(lVar11 + uVar10 * 2 + 0x20) = sVar13;
            bVar4 = FUN_08597808(lVar9,lVar7);
            if (lVar12 == 0) goto LAB_0859980c;
            if (*(uint *)(lVar12 + 0x18) <= uVar10) goto LAB_08599810;
            sVar13 = sVar13 + 1;
            *(byte *)(lVar12 + uVar10 + 0x20) = bVar4 & 1;
          }
        }
      }
      uVar10 = uVar10 + 1;
    } while ((unaff_x23 & 0xffffffff) != uVar10);
  }
  return in_stack_00000008._4_4_ & 1;
}


