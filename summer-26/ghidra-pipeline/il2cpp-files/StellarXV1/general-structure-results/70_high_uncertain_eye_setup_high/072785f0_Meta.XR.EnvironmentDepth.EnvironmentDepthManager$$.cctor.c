/*
FUNCTION_NAME: Meta.XR.EnvironmentDepth.EnvironmentDepthManager$$.cctor
ENTRY_POINT: 072785f0
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_EnvironmentDepth_EnvironmentDepthManager___cctor(long param_1,uint param_2)

{
  bool bVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  int in_w8;
  long in_x9;
  long in_x10;
  long in_x11;
  long in_x12;
  uint in_w13;
  uint in_w14;
  uint in_w15;
  int *in_x16;
  uint uVar10;
  int in_w17;
  uint unaff_w19;
  uint unaff_w20;
  uint unaff_w21;
  uint unaff_w22;
  uint unaff_w23;
  uint unaff_w24;
  uint unaff_w25;
  uint *unaff_x26;
  uint unaff_w27;
  uint unaff_w28;
  uint unaff_w29;
  long in_stack_00000008;
  long in_stack_00000010;
  long in_stack_00000018;
  
  do {
    if (param_2 == in_w15) {
      if (in_w13 <= unaff_w25) goto LAB_072787d8;
      lVar2 = in_x9 + (long)(int)unaff_w25 * 4;
      unaff_w19 = unaff_w19 - 1;
      unaff_w25 = unaff_w25 - 1;
      *in_x16 = *(int *)(lVar2 + 0x20);
      *(int *)(lVar2 + 0x20) = in_w17;
      if ((int)unaff_w19 < (int)unaff_w24) goto LAB_072786d0;
    }
    else {
      if (in_w15 <= param_2) {
        unaff_w19 = unaff_w19 - 1;
        goto LAB_072785c4;
      }
      if (in_w13 <= unaff_w24) {
LAB_072787d8:
                    /* WARNING: Subroutine does not return */
        FUN_04077838();
      }
      lVar2 = in_x9 + (long)(int)unaff_w24 * 4;
      iVar4 = *(int *)(lVar2 + 0x20);
      *(int *)(lVar2 + 0x20) = in_w17;
      *in_x16 = iVar4;
      unaff_w19 = unaff_w19 - 1;
      unaff_w24 = unaff_w24 + 1;
LAB_072785bc:
      if ((int)unaff_w24 <= (int)unaff_w19) {
        uVar3 = unaff_w20;
        if (unaff_w20 <= in_w13) {
          uVar3 = in_w13;
        }
        do {
          uVar10 = unaff_w24;
          if (unaff_w24 <= in_w13) {
            uVar10 = in_w13;
          }
          while( true ) {
            if (uVar10 == unaff_w24) goto LAB_072787d8;
            piVar9 = (int *)(in_x9 + (long)(int)unaff_w24 * 4 + 0x20);
            iVar4 = *piVar9;
            uVar8 = unaff_w23 + iVar4;
            if (in_w14 <= uVar8) goto LAB_072787d8;
            uVar8 = (uint)*(byte *)(in_x11 + (int)uVar8 + 0x20);
            if (uVar8 == in_w15) break;
            if ((in_w15 <= uVar8) || (unaff_w24 = unaff_w24 + 1, (int)unaff_w19 < (int)unaff_w24))
            goto LAB_072785c4;
          }
          if (unaff_w20 == uVar3) goto LAB_072787d8;
          lVar2 = in_x9 + (long)(int)unaff_w20 * 4;
          unaff_w24 = unaff_w24 + 1;
          unaff_w20 = unaff_w20 + 1;
          *piVar9 = *(int *)(lVar2 + 0x20);
          *(int *)(lVar2 + 0x20) = iVar4;
        } while ((int)unaff_w24 <= (int)unaff_w19);
      }
LAB_072785c4:
      if ((int)unaff_w19 < (int)unaff_w24) {
LAB_072786d0:
        if ((int)unaff_w25 < (int)unaff_w20) {
          *unaff_x26 = unaff_w22;
          unaff_x26[1] = unaff_w21;
          unaff_x26[2] = unaff_w23;
          if (in_w8 < 0x14) goto LAB_072784d4;
          bVar1 = 9 < (int)unaff_w29;
          unaff_w29 = unaff_w23;
          if (bVar1) goto LAB_072784d4;
        }
        else {
          iVar4 = unaff_w20 - unaff_w22;
          if ((int)(unaff_w24 - unaff_w20) <= (int)(unaff_w20 - unaff_w22)) {
            iVar4 = unaff_w24 - unaff_w20;
          }
          FUN_0727839c(param_1,unaff_w22,unaff_w24 - iVar4);
          iVar7 = unaff_w25 - unaff_w19;
          iVar4 = unaff_w21 - unaff_w25;
          if (iVar7 <= (int)(unaff_w21 - unaff_w25)) {
            iVar4 = iVar7;
          }
          FUN_0727839c(in_stack_00000018,unaff_w24,(unaff_w21 - iVar4) + 1);
          uVar3 = *(uint *)(in_stack_00000010 + 0x18);
          if (uVar3 <= unaff_w28) goto LAB_072787d8;
          iVar4 = (unaff_w22 - unaff_w20) + unaff_w24;
          unaff_x26[2] = unaff_w29;
          *unaff_x26 = unaff_w22;
          unaff_x26[1] = iVar4 - 1;
          if (uVar3 <= unaff_w27) goto LAB_072787d8;
          piVar9 = (int *)(in_stack_00000008 + (ulong)unaff_w27 * 0xc);
          *piVar9 = iVar4;
          piVar9[1] = unaff_w21 - iVar7;
          piVar9[2] = unaff_w23;
          if (uVar3 <= unaff_w27 + 1) goto LAB_072787d8;
          piVar9 = (int *)(in_stack_00000008 + (ulong)(unaff_w27 + 1) * 0xc);
          *piVar9 = (unaff_w21 - iVar7) + 1;
          piVar9[1] = unaff_w21;
          piVar9[2] = unaff_w29;
          unaff_w27 = unaff_w27 + 2;
          while( true ) {
            if ((int)unaff_w27 < 1) {
              return;
            }
            if (999 < unaff_w27) {
                    /* WARNING: Subroutine does not return */
              FUN_07277358();
            }
            unaff_w28 = unaff_w27 - 1;
            if (*(uint *)(in_stack_00000010 + 0x18) <= unaff_w28) goto LAB_072787d8;
            unaff_x26 = (uint *)(in_stack_00000008 + (ulong)unaff_w28 * 0xc);
            unaff_w22 = *unaff_x26;
            unaff_w21 = unaff_x26[1];
            unaff_w29 = unaff_x26[2];
            in_w8 = unaff_w21 - unaff_w22;
            param_1 = in_stack_00000018;
            unaff_w23 = unaff_w29;
            if (0x13 < in_w8 && (int)unaff_w29 < 0xb) break;
LAB_072784d4:
            FUN_07277db4(param_1,unaff_w22,unaff_w21,unaff_w23);
            unaff_w27 = unaff_w28;
            if ((*(int *)(in_stack_00000018 + 200) < *(int *)(in_stack_00000018 + 0xc4)) &&
               (*(char *)(in_stack_00000018 + 0xcc) != '\0')) {
              return;
            }
          }
          in_x9 = *(long *)(in_stack_00000018 + 0x98);
          in_x11 = *(long *)(in_stack_00000018 + 0x88);
          in_x10 = (long)((ulong)(unaff_w21 + unaff_w22) << 0x20) >> 0x21;
          in_x12 = in_x9 + 0x20;
        }
        if (in_x9 == 0) {
LAB_072787dc:
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        in_w13 = *(uint *)(in_x9 + 0x18);
        if (in_w13 <= unaff_w22) goto LAB_072787d8;
        if (in_x11 == 0) goto LAB_072787dc;
        unaff_w23 = unaff_w29 + 1;
        in_w14 = *(uint *)(in_x11 + 0x18);
        uVar3 = unaff_w23 + *(int *)(in_x12 + (long)(int)unaff_w22 * 4);
        if ((((in_w14 <= uVar3) || (in_w13 <= unaff_w21)) ||
            (uVar10 = unaff_w23 + *(int *)(in_x12 + (long)(int)unaff_w21 * 4), in_w14 <= uVar10)) ||
           ((in_w13 <= (uint)in_x10 ||
            (uVar8 = unaff_w23 + *(int *)(in_x12 + in_x10 * 4), in_w14 <= uVar8))))
        goto LAB_072787d8;
        bVar5 = *(byte *)(in_x11 + (int)uVar3 + 0x20);
        bVar6 = *(byte *)(in_x11 + (int)uVar10 + 0x20);
        uVar3 = (uint)bVar5;
        if (bVar5 <= bVar6) {
          uVar3 = (uint)bVar6;
        }
        in_w15 = (uint)bVar5;
        if (bVar6 <= bVar5) {
          in_w15 = (uint)bVar6;
        }
        uVar10 = (uint)*(byte *)(in_x11 + (int)uVar8 + 0x20);
        if (uVar10 <= uVar3) {
          uVar3 = uVar10;
        }
        unaff_w19 = unaff_w21;
        unaff_w24 = unaff_w22;
        unaff_w25 = unaff_w21;
        unaff_w20 = unaff_w22;
        if (in_w15 <= uVar3) {
          in_w15 = uVar3;
        }
        goto LAB_072785bc;
      }
    }
    if (in_w13 <= unaff_w19) goto LAB_072787d8;
    in_x16 = (int *)(in_x9 + (long)(int)unaff_w19 * 4 + 0x20);
    in_w17 = *in_x16;
    if (in_w14 <= unaff_w23 + in_w17) goto LAB_072787d8;
    param_2 = (uint)*(byte *)(in_x11 + (int)(unaff_w23 + in_w17) + 0x20);
  } while( true );
}


