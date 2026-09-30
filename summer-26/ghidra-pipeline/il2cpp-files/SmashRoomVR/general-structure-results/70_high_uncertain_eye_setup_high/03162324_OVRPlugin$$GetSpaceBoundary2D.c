/*
FUNCTION_NAME: OVRPlugin$$GetSpaceBoundary2D
ENTRY_POINT: 03162324
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_19;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetSpaceBoundary2D(void)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  byte bVar4;
  int iVar5;
  undefined8 *puVar6;
  float *pfVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  int *piVar12;
  long unaff_x19;
  int unaff_w20;
  long *plVar13;
  uint *puVar14;
  uint uVar15;
  long *unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long *unaff_x25;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined8 uVar25;
  ulong uVar26;
  float fVar27;
  ulong unaff_d8;
  float unaff_s9;
  float fVar28;
  float unaff_s10;
  float unaff_s11;
  float fVar29;
  float fVar30;
  float fStack0000000000000004;
  float fStack0000000000000014;
  float fStack000000000000001c;
  float fStack0000000000000020;
  float fStack0000000000000024;
  float fStack000000000000002c;
  float fStack0000000000000030;
  float fStack0000000000000034;
  float fStack0000000000000038;
  float fStack000000000000003c;
  undefined8 in_stack_00000040;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined4 uStack0000000000000054;
  undefined4 in_stack_00000058;
  
  thunk_FUN_01ac7298();
  fVar23 = SQRT(unaff_s9 * unaff_s9 + unaff_s11 * unaff_s11 + unaff_s10 * unaff_s10);
  if (fVar23 <= fStack000000000000003c) {
    if (*(char *)(unaff_x24 + 599) == '\0') {
      thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
      *(undefined1 *)(unaff_x24 + 599) = 1;
    }
    pfVar7 = *(float **)(*unaff_x22 + 0xb8);
    fVar16 = *pfVar7;
    fVar21 = pfVar7[1];
    fVar23 = pfVar7[2];
  }
  else {
    fVar16 = unaff_s11 / fVar23;
    fVar21 = unaff_s10 / fVar23;
    fVar23 = unaff_s9 / fVar23;
  }
  puVar3 = Method_UnityEngine_UI_ToggleGroup_<>c_<ActiveToggles>b__14_0__;
  if (unaff_w20 != 1) {
    fVar21 = -fVar21;
    fVar23 = -fVar23;
  }
  if (unaff_w20 != 1) {
    fVar16 = -fVar16;
  }
  fVar24 = fVar23;
  fStack000000000000002c = fVar21;
  if (*(int *)(*(long *)Method_UnityEngine_UI_ToggleGroup_<>c_<ActiveToggles>b__14_0__ + 0xe0) == 0)
  {
    thunk_FUN_01ac7298();
  }
  fVar17 = (float)FUN_039274f8(&stack0x00000060,0);
  fVar30 = fVar21;
  fVar29 = fVar24;
  if (unaff_w20 == 1) {
    fVar17 = -fVar17;
    fVar30 = -fVar21;
    fVar29 = -fVar24;
  }
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  fStack000000000000001c = (float)FUN_03927568(&stack0x00000060,0);
  if (unaff_w20 == 1) {
    fStack000000000000001c = -fStack000000000000001c;
    fVar21 = -fVar21;
    fVar24 = -fVar24;
  }
  fStack0000000000000014 = fVar24;
  if (DAT_03fed45d == '\0') {
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_6__);
    DAT_03fed45d = '\x01';
  }
  puVar3 = Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_6__;
  fVar18 = fStack0000000000000024 * fStack0000000000000024 +
           fStack0000000000000034 * fStack0000000000000034 +
           fStack0000000000000020 * fStack0000000000000020;
  fVar27 = (float)unaff_d8;
  uVar11 = unaff_d8;
  fVar24 = fStack0000000000000030;
  fVar28 = fStack0000000000000038;
  if (**(float **)
        (*(long *)Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_6__ + 0xb8) <=
      fVar18) {
    fVar22 = fStack0000000000000024 * fVar27 +
             fStack0000000000000034 * fStack0000000000000030 +
             fStack0000000000000020 * fStack0000000000000038;
    fVar24 = fStack0000000000000030 - (fStack0000000000000034 * fVar22) / fVar18;
    fVar28 = fStack0000000000000038 - (fStack0000000000000020 * fVar22) / fVar18;
    uVar11 = (ulong)(uint)(fVar27 - (fStack0000000000000024 * fVar22) / fVar18);
  }
  if (*(char *)(unaff_x23 + 0x25d) == '\0') {
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__);
    *(undefined1 *)(unaff_x23 + 0x25d) = 1;
  }
  if (*(int *)(*unaff_x25 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  fVar22 = (float)uVar11;
  fVar18 = SQRT(fVar22 * fVar22 + fVar24 * fVar24 + fVar28 * fVar28);
  if (fVar18 <= fStack000000000000003c) {
    if (*(char *)(unaff_x24 + 599) == '\0') {
      thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
      *(undefined1 *)(unaff_x24 + 599) = 1;
    }
    pfVar7 = *(float **)(*unaff_x22 + 0xb8);
    fStack0000000000000024 = *pfVar7;
    fStack0000000000000020 = pfVar7[1];
    fVar22 = pfVar7[2];
  }
  else {
    fStack0000000000000024 = fVar24 / fVar18;
    fStack0000000000000020 = fVar28 / fVar18;
    fVar22 = fVar22 / fVar18;
  }
  uVar11 = _fStack0000000000000038 & 0xffffffff;
  if (DAT_03fed45d == '\0') {
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_6__);
    DAT_03fed45d = '\x01';
  }
  fVar24 = fVar27 * fVar27 +
           fStack0000000000000030 * fStack0000000000000030 +
           fStack0000000000000038 * fStack0000000000000038;
  if (**(float **)(*(long *)puVar3 + 0xb8) <= fVar24) {
    fVar28 = fVar27 * fVar29 + fStack0000000000000030 * fVar17 + fStack0000000000000038 * fVar30;
    fVar17 = fVar17 - (fStack0000000000000030 * fVar28) / fVar24;
    fVar30 = fVar30 - (fStack0000000000000038 * fVar28) / fVar24;
    fVar29 = fVar29 - (fVar27 * fVar28) / fVar24;
  }
  if (*(char *)(unaff_x23 + 0x25d) == '\0') {
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__);
    *(undefined1 *)(unaff_x23 + 0x25d) = 1;
  }
  if (*(int *)(*unaff_x25 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  fVar24 = SQRT(fVar29 * fVar29 + fVar17 * fVar17 + fVar30 * fVar30);
  if (fVar24 <= fStack000000000000003c) {
    if (*(char *)(unaff_x24 + 599) == '\0') {
      thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
      *(undefined1 *)(unaff_x24 + 599) = 1;
    }
    pfVar7 = *(float **)(*unaff_x22 + 0xb8);
    fVar17 = *pfVar7;
    fVar30 = pfVar7[1];
    fVar29 = pfVar7[2];
  }
  else {
    fVar17 = fVar17 / fVar24;
    fVar30 = fVar30 / fVar24;
    fVar29 = fVar29 / fVar24;
  }
  uVar26 = (ulong)(uint)fVar16;
  fStack0000000000000004 = fStack0000000000000038;
  fVar23 = (float)FUN_01bf693c(fVar17,fVar30,fVar29,uVar26,fStack000000000000002c,fVar23,0);
  plVar13 = *(long **)(unaff_x19 + 0x28);
  if (plVar13 != (long *)0x0) {
    lVar8 = *plVar13;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *unaff_x21) {
          puVar6 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_031626f0;
        }
        uVar10 = uVar10 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ae9f78(plVar13,*unaff_x21,0);
LAB_031626f0:
    iVar5 = (*(code *)*puVar6)(plVar13,puVar6[1]);
    fVar16 = -fVar23;
    if (iVar5 != 1) {
      fVar16 = fVar23;
    }
    uVar25 = 0xc28c0000;
    uVar10 = (ulong)(uint)(fVar16 + 360.0);
    fVar23 = fVar16 + 360.0;
    if (-70.0 <= fVar16) {
      fVar23 = fVar16;
    }
    *(float *)(unaff_x19 + 0x7c) = fVar23;
    if (*(long *)(unaff_x19 + 0x30) != 0) {
      uVar19 = FUN_03928d34(*(long *)(unaff_x19 + 0x30),0);
      uVar20 = FUN_039148b4(fStack0000000000000030,uVar11,0);
      in_stack_00000040 = 0;
      uStack0000000000000048 = 0;
      uStack000000000000004c = 0;
      in_stack_00000058 = 0;
      uStack0000000000000050 = 0;
      uStack0000000000000054 = 0;
      FUN_03927140(uVar19,uVar10,uVar25,uVar20,uVar11,unaff_d8,uVar26,&stack0x00000040,0);
      plVar13 = *(long **)(unaff_x19 + 0x48);
      *(float *)(unaff_x19 + 0x80) = fVar17;
      *(float *)(unaff_x19 + 0x84) = fVar30;
      *(float *)(unaff_x19 + 0x88) = fVar29;
      *(ulong *)(unaff_x19 + 0xa0) = CONCAT44(in_stack_00000058,uStack0000000000000054);
      *(ulong *)(unaff_x19 + 0x98) = CONCAT44(uStack0000000000000050,uStack000000000000004c);
      *(ulong *)(unaff_x19 + 0x94) = CONCAT44(uStack000000000000004c,uStack0000000000000048);
      *(undefined8 *)(unaff_x19 + 0x8c) = in_stack_00000040;
      puVar3 = StringLiteral_3771;
      if (plVar13 != (long *)0x0) {
        lVar8 = *plVar13;
        uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)StringLiteral_3771) {
              puVar6 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_03162810;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar6 = (undefined8 *)FUN_01ae9f78(plVar13,*(long *)StringLiteral_3771,0);
LAB_03162810:
        uVar11 = (*(code *)*puVar6)(plVar13,puVar6[1]);
        if ((uVar11 & 1) == 0) {
          uVar15 = 0;
        }
        else {
          uVar15 = *(byte *)(unaff_x19 + 0x71) ^ 1;
        }
        plVar13 = *(long **)(unaff_x19 + 0x48);
        if (plVar13 != (long *)0x0) {
          lVar9 = *plVar13;
          lVar8 = *(long *)puVar3;
          fStack0000000000000024 = fStack000000000000001c * fStack0000000000000024;
          uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
          fVar22 = fStack0000000000000014 * fVar22;
          if (uVar11 != 0) {
            piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == lVar8) {
                puVar6 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
                goto LAB_031628b8;
              }
              uVar11 = uVar11 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar11 != 0);
          }
          puVar6 = (undefined8 *)FUN_01ae9f78(plVar13,lVar8,0);
LAB_031628b8:
          bVar4 = (*(code *)*puVar6)(plVar13,puVar6[1]);
          puVar14 = (uint *)(unaff_x19 + 0x74);
          *(byte *)(unaff_x19 + 0x71) = bVar4 & 1;
          if ((uVar15 & 0.5 < (fVar22 + fStack0000000000000024 + fVar21 * fStack0000000000000020) *
                              0.5 + 0.5 & *puVar14 >> 0x1f) == 0) {
            if ((int)*puVar14 < 0) {
              return;
            }
            plVar13 = *(long **)(unaff_x19 + 0x58);
            if (plVar13 != (long *)0x0) {
              lVar9 = *plVar13;
              lVar8 = *(long *)puVar3;
              uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
              if (uVar11 != 0) {
                piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar12 + -2) == lVar8) {
                    puVar6 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
                    goto FUN_03162978;
                  }
                  uVar11 = uVar11 - 1;
                  piVar12 = piVar12 + 4;
                } while (uVar11 != 0);
              }
              puVar6 = (undefined8 *)FUN_01ae9f78(plVar13,lVar8,0);
FUN_03162978:
              uVar11 = (*(code *)*puVar6)(plVar13,puVar6[1]);
              if ((uVar11 & 1) != 0) {
                *(undefined4 *)(unaff_x19 + 0x74) = 0xffffffff;
                goto LAB_03162998;
              }
              lVar8 = *(long *)(unaff_x19 + 0x38);
              if (lVar8 != 0) {
                uVar1 = *(uint *)(unaff_x19 + 0x74);
                uVar15 = *(uint *)(lVar8 + 0x18);
                if (uVar15 <= uVar1) goto LAB_03162a58;
                lVar9 = *(long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
                if (lVar9 != 0) {
                  if (*(float *)(lVar9 + 0x10) <= *(float *)(unaff_x19 + 0x7c)) {
                    if (*(float *)(unaff_x19 + 0x7c) <= *(float *)(lVar9 + 0x14)) {
                      return;
                    }
                    uVar2 = uVar15 - 1;
                    if ((int)(uVar1 + 1) <= (int)uVar2) {
                      uVar2 = uVar1 + 1;
                    }
                    *puVar14 = uVar2;
                    if (uVar15 <= uVar2) goto LAB_03162a58;
                    uVar11 = (ulong)(int)uVar2;
                  }
                  else {
                    uVar1 = uVar1 - 1 & ((int)(uVar1 - 1) >> 0x1f ^ 0xffffffffU);
                    *puVar14 = uVar1;
                    if (uVar15 <= uVar1) {
LAB_03162a58:
                    /* WARNING: Subroutine does not return */
                      FUN_01b48180();
                    }
                    uVar11 = (ulong)uVar1;
                  }
                  if (*(long *)(lVar8 + uVar11 * 8 + 0x20) != 0) goto LAB_03162998;
                }
              }
            }
          }
          else {
            lVar8 = FUN_03162a5c(*(undefined4 *)(unaff_x19 + 0x7c));
            if (lVar8 != 0) {
              if (*(char *)(lVar8 + 0x18) == '\0') {
                *puVar14 = 0xffffffff;
                return;
              }
LAB_03162998:
              FUN_03161b4c();
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


