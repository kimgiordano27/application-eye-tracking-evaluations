/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_resp_account_get_session_fonts_t_session_font_count_get
ENTRY_POINT: 08599764
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


uint Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_resp_account_get_session_fonts_t_session_font_count_get
               (long param_1,long param_2)

{
  char cVar1;
  undefined *puVar2;
  byte bVar3;
  int iVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long in_x9;
  long unaff_x20;
  ulong unaff_x21;
  long *unaff_x24;
  ulong unaff_x25;
  long unaff_x26;
  long lVar8;
  short unaff_w28;
  long unaff_x29;
  undefined4 extraout_s0;
  undefined4 uVar9;
  float fVar10;
  undefined4 uVar11;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float fVar12;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  long in_stack_00000010;
  
  while( true ) {
    uVar9 = *(undefined4 *)(in_x9 + 0xc);
    uVar11 = *(undefined4 *)(in_x9 + 0x10);
    param_1 = param_1 + (long)unaff_w28 * 0x10;
    fVar12 = *(float *)(in_x9 + 0x14);
    fVar10 = *(float *)(in_x9 + 0x18);
    while( true ) {
      *(undefined4 *)(param_1 + 0x20) = uVar9;
      *(undefined4 *)(param_1 + 0x24) = uVar11;
      *(float *)(param_1 + 0x28) = fVar12;
      *(float *)(param_1 + 0x2c) = fVar10;
      lVar7 = *(long *)(in_stack_00000010 + 0xf0);
      if (lVar7 == 0) goto LAB_0859980c;
      if (*(uint *)(lVar7 + 0x18) <= unaff_x25) goto LAB_08599810;
      lVar8 = *(long *)(in_stack_00000010 + 0xe8);
      *(short *)(lVar7 + unaff_x25 * 2 + 0x20) = unaff_w28;
      bVar3 = FUN_08597808(param_2,unaff_x26);
      if (lVar8 == 0) goto LAB_0859980c;
      if (*(uint *)(lVar8 + 0x18) <= unaff_x25) goto LAB_08599810;
      unaff_w28 = unaff_w28 + 1;
      *(byte *)(lVar8 + unaff_x25 + 0x20) = bVar3 & 1;
      do {
        do {
          do {
            unaff_x25 = unaff_x25 + 1;
            if (unaff_x21 == unaff_x25) {
              return in_stack_00000008._4_4_ & 1;
            }
          } while (unaff_x25 == *(uint *)(unaff_x20 + 0x10));
          uVar5 = FUN_050c7be0(in_stack_00000000);
          unaff_x26 = FUN_08a08f70(uVar5,0);
          if (*(int *)(*unaff_x24 + 0xe4) == 0) {
            thunk_FUN_040d65a8(*unaff_x24);
          }
          uVar6 = FUN_089cc398(unaff_x26,0,0);
        } while ((uVar6 & 1) != 0);
        if (unaff_x26 == 0) goto LAB_0859980c;
        iVar4 = FUN_08999cb4(unaff_x26,0);
        fVar10 = unaff_s11;
        if (iVar4 != 2) {
          fVar10 = unaff_s10;
        }
        fVar12 = unaff_s9;
        if (iVar4 != 0) {
          fVar12 = fVar10;
        }
      } while (fVar12 < 0.0);
      iVar4 = FUN_0899adf8(unaff_x26,0);
      puVar2 = PTR_DAT_0932e408;
      if (iVar4 == 0) break;
      cVar1 = *(char *)(unaff_x29 + 0x3c);
      if (*(int *)(*(long *)PTR_DAT_0932d8a8 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      uVar11 = FUN_08563fb0(unaff_x26,iVar4 != 2 && cVar1 != '\0',0);
      puVar2 = PTR_DAT_0932e408;
      lVar7 = *(long *)PTR_DAT_0932e408;
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
        lVar7 = *(long *)puVar2;
      }
      param_1 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x30);
      param_2 = FUN_0899af70(unaff_x26,0);
      if (param_1 == 0) goto LAB_0859980c;
      if (*(uint *)(param_1 + 0x18) <= (uint)(int)unaff_w28) goto LAB_08599810;
      fVar10 = (float)(int)unaff_w28;
      param_1 = param_1 + (long)unaff_w28 * 0x10;
      uVar9 = extraout_s0;
    }
    param_2 = *(long *)PTR_DAT_0932e408;
    if (*(int *)(param_2 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
      param_2 = *(long *)puVar2;
    }
    in_x9 = *(long *)(param_2 + 0xb8);
    param_1 = *(long *)(in_x9 + 0x30);
    if (param_1 == 0) break;
    if (*(uint *)(param_1 + 0x18) <= (uint)(int)unaff_w28) {
LAB_08599810:
                    /* WARNING: Subroutine does not return */
      FUN_04077838();
    }
  }
LAB_0859980c:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


