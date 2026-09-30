/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_resp_account_get_session_fonts_t_session_fonts_get
ENTRY_POINT: 08599664
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_7;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


uint Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_resp_account_get_session_fonts_t_session_fonts_get
               (void)

{
  char cVar1;
  undefined *puVar2;
  byte bVar3;
  int iVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long unaff_x20;
  ulong unaff_x21;
  long *unaff_x24;
  ulong unaff_x25;
  long unaff_x26;
  undefined8 unaff_x27;
  long lVar8;
  long lVar9;
  short unaff_w28;
  long unaff_x29;
  undefined4 uVar10;
  undefined4 extraout_s0;
  undefined4 uVar11;
  float fVar12;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float fVar13;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  long in_stack_00000010;
  
  while (unaff_x26 != 0) {
    iVar4 = FUN_08999cb4(unaff_x26,0);
    fVar12 = unaff_s11;
    if (iVar4 != 2) {
      fVar12 = unaff_s10;
    }
    fVar13 = unaff_s9;
    if (iVar4 != 0) {
      fVar13 = fVar12;
    }
    if (0.0 <= fVar13) {
      iVar4 = FUN_0899adf8(unaff_x26,0);
      puVar2 = PTR_DAT_0932e408;
      if (iVar4 == 0) {
        lVar7 = *(long *)PTR_DAT_0932e408;
        if (*(int *)(lVar7 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
          lVar7 = *(long *)puVar2;
        }
        lVar9 = *(long *)(lVar7 + 0xb8);
        lVar8 = *(long *)(lVar9 + 0x30);
        if (lVar8 == 0) break;
        if (*(uint *)(lVar8 + 0x18) <= (uint)(int)unaff_w28) goto LAB_08599810;
        uVar11 = *(undefined4 *)(lVar9 + 0xc);
        uVar10 = *(undefined4 *)(lVar9 + 0x10);
        lVar8 = lVar8 + (long)unaff_w28 * 0x10;
        fVar13 = *(float *)(lVar9 + 0x14);
        fVar12 = *(float *)(lVar9 + 0x18);
      }
      else {
        cVar1 = *(char *)(unaff_x29 + 0x3c);
        if (*(int *)(*(long *)PTR_DAT_0932d8a8 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        uVar10 = FUN_08563fb0(unaff_x26,iVar4 != 2 && cVar1 != '\0',0);
        puVar2 = PTR_DAT_0932e408;
        lVar7 = *(long *)PTR_DAT_0932e408;
        if (*(int *)(lVar7 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
          lVar7 = *(long *)puVar2;
        }
        lVar8 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x30);
        lVar7 = FUN_0899af70(unaff_x26,0);
        if (lVar8 == 0) break;
        if (*(uint *)(lVar8 + 0x18) <= (uint)(int)unaff_w28) goto LAB_08599810;
        fVar12 = (float)(int)unaff_w28;
        lVar8 = lVar8 + (long)unaff_w28 * 0x10;
        uVar11 = extraout_s0;
      }
      *(undefined4 *)(lVar8 + 0x20) = uVar11;
      *(undefined4 *)(lVar8 + 0x24) = uVar10;
      *(float *)(lVar8 + 0x28) = fVar13;
      *(float *)(lVar8 + 0x2c) = fVar12;
      lVar8 = *(long *)(in_stack_00000010 + 0xf0);
      if (lVar8 == 0) break;
      if (*(uint *)(lVar8 + 0x18) <= unaff_x25) {
LAB_08599810:
                    /* WARNING: Subroutine does not return */
        FUN_04077838();
      }
      lVar9 = *(long *)(in_stack_00000010 + 0xe8);
      *(short *)(lVar8 + unaff_x25 * 2 + 0x20) = unaff_w28;
      bVar3 = FUN_08597808(lVar7,unaff_x26);
      if (lVar9 == 0) break;
      if (*(uint *)(lVar9 + 0x18) <= unaff_x25) goto LAB_08599810;
      unaff_w28 = unaff_w28 + 1;
      *(byte *)(lVar9 + unaff_x25 + 0x20) = bVar3 & 1;
      unaff_x27 = in_stack_00000000;
    }
    do {
      do {
        unaff_x25 = unaff_x25 + 1;
        if (unaff_x21 == unaff_x25) {
          return in_stack_00000008._4_4_ & 1;
        }
      } while (unaff_x25 == *(uint *)(unaff_x20 + 0x10));
      uVar5 = FUN_050c7be0(unaff_x27);
      unaff_x26 = FUN_08a08f70(uVar5,0);
      if (*(int *)(*unaff_x24 + 0xe4) == 0) {
        thunk_FUN_040d65a8(*unaff_x24);
      }
      uVar6 = FUN_089cc398(unaff_x26,0,0);
    } while ((uVar6 & 1) != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


