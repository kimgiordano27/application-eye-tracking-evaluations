/*
FUNCTION_NAME: OVRPlugin$$GetSpaceBoundary2D
ENTRY_POINT: 03162184
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetSpaceBoundary2D
               (long param_1,undefined1 param_2 [16],float param_3,float param_4,undefined8 param_5,
               long param_6)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 in_ZR;
  byte bVar6;
  int iVar7;
  undefined8 *puVar8;
  long lVar9;
  float *pfVar10;
  long lVar11;
  long in_x9;
  ulong uVar12;
  ulong uVar13;
  int *in_x10;
  int *piVar14;
  long unaff_x19;
  long *plVar15;
  uint *puVar16;
  uint uVar17;
  long *unaff_x21;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  float fVar26;
  ulong uVar27;
  float fVar28;
  float fVar29;
  undefined8 uVar30;
  ulong uVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fStack0000000000000020;
  float fStack0000000000000024;
  undefined8 in_stack_00000040;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined4 uStack0000000000000054;
  undefined4 in_stack_00000058;
  float fStack0000000000000060;
  float fStack0000000000000064;
  float in_stack_00000068;
  
  while (!(bool)in_ZR) {
    if (*(long *)(in_x10 + -2) == param_6) {
      puVar8 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
      goto LAB_031621a4;
    }
    in_x9 = in_x9 + -1;
    in_x10 = in_x10 + 4;
    in_ZR = in_x9 == 0;
  }
  puVar8 = (undefined8 *)FUN_01ae9f78();
LAB_031621a4:
  iVar7 = (*(code *)*puVar8)();
  if (DAT_03fed25b == '\0') {
    thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
    DAT_03fed25b = '\x01';
  }
  fVar32 = in_stack_00000068;
  fVar37 = fStack0000000000000060;
  puVar3 = Method_Mono_Security_PKCS7_EncryptedData__ctor__;
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    lVar9 = *(long *)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
    fVar18 = *(float *)(lVar9 + 0x18);
    fVar39 = *(float *)(lVar9 + 0x1c);
    fVar36 = *(float *)(lVar9 + 0x20);
    fVar19 = (float)FUN_03928d34(*(long *)(unaff_x19 + 0x30),0);
    if (DAT_03fed25d == '\0') {
      thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__);
      DAT_03fed25d = '\x01';
    }
    puVar4 = Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__;
    fVar37 = fVar37 - fVar19;
    param_3 = fStack0000000000000064 - param_3;
    fVar32 = fVar32 - param_4;
    if (*(int *)(*(long *)Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    fVar19 = DAT_00b55370;
    fVar20 = SQRT(fVar32 * fVar32 + fVar37 * fVar37 + param_3 * param_3);
    if (fVar20 <= DAT_00b55370) {
      if (DAT_03fed257 == '\0') {
        thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
        DAT_03fed257 = '\x01';
      }
      pfVar10 = *(float **)(*(long *)puVar3 + 0xb8);
      fVar37 = *pfVar10;
      param_3 = pfVar10[1];
      fVar32 = pfVar10[2];
    }
    else {
      fVar37 = fVar37 / fVar20;
      param_3 = param_3 / fVar20;
      fVar32 = fVar32 / fVar20;
    }
    uVar13 = (ulong)(uint)fVar32;
    if (DAT_03fed25d == '\0') {
      thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__);
      DAT_03fed25d = '\x01';
    }
    fVar34 = fVar39 * fVar32 - fVar36 * param_3;
    fVar20 = fVar36 * fVar37 - fVar18 * fVar32;
    fVar33 = fVar18 * param_3 - fVar39 * fVar37;
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    fVar28 = SQRT(fVar33 * fVar33 + fVar34 * fVar34 + fVar20 * fVar20);
    if (fVar28 <= fVar19) {
      if (DAT_03fed257 == '\0') {
        thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
        DAT_03fed257 = '\x01';
      }
      pfVar10 = *(float **)(*(long *)puVar3 + 0xb8);
      fVar34 = *pfVar10;
      fVar20 = pfVar10[1];
      fVar33 = pfVar10[2];
    }
    else {
      fVar34 = fVar34 / fVar28;
      fVar20 = fVar20 / fVar28;
      fVar33 = fVar33 / fVar28;
    }
    puVar5 = Method_UnityEngine_UI_ToggleGroup_<>c_<ActiveToggles>b__14_0__;
    if (iVar7 != 1) {
      fVar20 = -fVar20;
      fVar33 = -fVar33;
    }
    if (iVar7 != 1) {
      fVar34 = -fVar34;
    }
    fVar28 = fVar20;
    fVar29 = fVar33;
    if (*(int *)(*(long *)Method_UnityEngine_UI_ToggleGroup_<>c_<ActiveToggles>b__14_0__ + 0xe0) ==
        0) {
      thunk_FUN_01ac7298();
    }
    fVar21 = (float)FUN_039274f8(&stack0x00000060,0);
    fVar38 = fVar28;
    fVar35 = fVar29;
    if (iVar7 == 1) {
      fVar21 = -fVar21;
      fVar38 = -fVar28;
      fVar35 = -fVar29;
    }
    if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    fVar22 = (float)FUN_03927568(&stack0x00000060,0);
    if (iVar7 == 1) {
      fVar22 = -fVar22;
      fVar28 = -fVar28;
      fVar29 = -fVar29;
    }
    if (DAT_03fed45d == '\0') {
      thunk_FUN_01ad9084(Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_6__);
      DAT_03fed45d = '\x01';
    }
    puVar5 = Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_6__;
    fVar23 = fVar36 * fVar36 + fVar18 * fVar18 + fVar39 * fVar39;
    fStack0000000000000024 = fVar37;
    fStack0000000000000020 = param_3;
    fVar26 = fVar32;
    if (**(float **)
          (*(long *)Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_6__ + 0xb8) <=
        fVar23) {
      fVar26 = fVar36 * fVar32 + fVar18 * fVar37 + fVar39 * param_3;
      fStack0000000000000024 = fVar37 - (fVar18 * fVar26) / fVar23;
      fStack0000000000000020 = param_3 - (fVar39 * fVar26) / fVar23;
      fVar26 = fVar32 - (fVar36 * fVar26) / fVar23;
    }
    if (DAT_03fed25d == '\0') {
      thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__);
      DAT_03fed25d = '\x01';
    }
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    fVar18 = SQRT(fVar26 * fVar26 +
                  fStack0000000000000024 * fStack0000000000000024 +
                  fStack0000000000000020 * fStack0000000000000020);
    if (fVar18 <= fVar19) {
      if (DAT_03fed257 == '\0') {
        thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
        DAT_03fed257 = '\x01';
      }
      pfVar10 = *(float **)(*(long *)puVar3 + 0xb8);
      fStack0000000000000024 = *pfVar10;
      fStack0000000000000020 = pfVar10[1];
      fVar26 = pfVar10[2];
    }
    else {
      fStack0000000000000024 = fStack0000000000000024 / fVar18;
      fStack0000000000000020 = fStack0000000000000020 / fVar18;
      fVar26 = fVar26 / fVar18;
    }
    uVar27 = (ulong)(uint)param_3;
    if (DAT_03fed45d == '\0') {
      thunk_FUN_01ad9084(Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_6__);
      DAT_03fed45d = '\x01';
    }
    fVar18 = fVar32 * fVar32 + fVar37 * fVar37 + param_3 * param_3;
    if (**(float **)(*(long *)puVar5 + 0xb8) <= fVar18) {
      fVar36 = fVar32 * fVar35 + fVar37 * fVar21 + param_3 * fVar38;
      fVar21 = fVar21 - (fVar37 * fVar36) / fVar18;
      fVar38 = fVar38 - (param_3 * fVar36) / fVar18;
      fVar35 = fVar35 - (fVar32 * fVar36) / fVar18;
    }
    if (DAT_03fed25d == '\0') {
      thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__);
      DAT_03fed25d = '\x01';
    }
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    fVar32 = SQRT(fVar35 * fVar35 + fVar21 * fVar21 + fVar38 * fVar38);
    if (fVar32 <= fVar19) {
      if (DAT_03fed257 == '\0') {
        thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
        DAT_03fed257 = '\x01';
      }
      pfVar10 = *(float **)(*(long *)puVar3 + 0xb8);
      fVar21 = *pfVar10;
      fVar38 = pfVar10[1];
      fVar35 = pfVar10[2];
    }
    else {
      fVar21 = fVar21 / fVar32;
      fVar38 = fVar38 / fVar32;
      fVar35 = fVar35 / fVar32;
    }
    uVar31 = (ulong)(uint)fVar34;
    fVar32 = (float)FUN_01bf693c(fVar21,fVar38,fVar35,uVar31,fVar20,fVar33,0);
    plVar15 = *(long **)(unaff_x19 + 0x28);
    if (plVar15 != (long *)0x0) {
      lVar9 = *plVar15;
      uVar12 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar12 != 0) {
        piVar14 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *unaff_x21) {
            puVar8 = (undefined8 *)(lVar9 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_031626f0;
          }
          uVar12 = uVar12 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar12 != 0);
      }
      puVar8 = (undefined8 *)FUN_01ae9f78(plVar15,*unaff_x21,0);
LAB_031626f0:
      iVar7 = (*(code *)*puVar8)(plVar15,puVar8[1]);
      fVar18 = -fVar32;
      if (iVar7 != 1) {
        fVar18 = fVar32;
      }
      uVar30 = 0xc28c0000;
      uVar12 = (ulong)(uint)(fVar18 + 360.0);
      fVar32 = fVar18 + 360.0;
      if (-70.0 <= fVar18) {
        fVar32 = fVar18;
      }
      *(float *)(unaff_x19 + 0x7c) = fVar32;
      if (*(long *)(unaff_x19 + 0x30) != 0) {
        uVar24 = FUN_03928d34(*(long *)(unaff_x19 + 0x30),0);
        uVar25 = FUN_039148b4(fVar37,uVar27,uVar13,0);
        in_stack_00000040 = 0;
        uStack0000000000000048 = 0;
        uStack000000000000004c = 0;
        in_stack_00000058 = 0;
        uStack0000000000000050 = 0;
        uStack0000000000000054 = 0;
        FUN_03927140(uVar24,uVar12,uVar30,uVar25,uVar27,uVar13,uVar31,&stack0x00000040,0);
        plVar15 = *(long **)(unaff_x19 + 0x48);
        *(float *)(unaff_x19 + 0x80) = fVar21;
        *(float *)(unaff_x19 + 0x84) = fVar38;
        *(float *)(unaff_x19 + 0x88) = fVar35;
        *(ulong *)(unaff_x19 + 0xa0) = CONCAT44(in_stack_00000058,uStack0000000000000054);
        *(ulong *)(unaff_x19 + 0x98) = CONCAT44(uStack0000000000000050,uStack000000000000004c);
        *(ulong *)(unaff_x19 + 0x94) = CONCAT44(uStack000000000000004c,uStack0000000000000048);
        *(undefined8 *)(unaff_x19 + 0x8c) = in_stack_00000040;
        puVar3 = StringLiteral_3771;
        if (plVar15 != (long *)0x0) {
          lVar9 = *plVar15;
          uVar13 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar13 != 0) {
            piVar14 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == *(long *)StringLiteral_3771) {
                puVar8 = (undefined8 *)(lVar9 + (long)*piVar14 * 0x10 + 0x138);
                goto LAB_03162810;
              }
              uVar13 = uVar13 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar13 != 0);
          }
          puVar8 = (undefined8 *)FUN_01ae9f78(plVar15,*(long *)StringLiteral_3771,0);
LAB_03162810:
          uVar13 = (*(code *)*puVar8)(plVar15,puVar8[1]);
          if ((uVar13 & 1) == 0) {
            uVar17 = 0;
          }
          else {
            uVar17 = *(byte *)(unaff_x19 + 0x71) ^ 1;
          }
          plVar15 = *(long **)(unaff_x19 + 0x48);
          if (plVar15 != (long *)0x0) {
            lVar11 = *plVar15;
            lVar9 = *(long *)puVar3;
            uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar13 != 0) {
              piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == lVar9) {
                  puVar8 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
                  goto LAB_031628b8;
                }
                uVar13 = uVar13 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar13 != 0);
            }
            puVar8 = (undefined8 *)FUN_01ae9f78(plVar15,lVar9,0);
LAB_031628b8:
            bVar6 = (*(code *)*puVar8)(plVar15,puVar8[1]);
            puVar16 = (uint *)(unaff_x19 + 0x74);
            *(byte *)(unaff_x19 + 0x71) = bVar6 & 1;
            if ((uVar17 & 0.5 < (fVar29 * fVar26 +
                                fVar22 * fStack0000000000000024 + fVar28 * fStack0000000000000020) *
                                0.5 + 0.5 & *puVar16 >> 0x1f) == 0) {
              if ((int)*puVar16 < 0) {
                return;
              }
              plVar15 = *(long **)(unaff_x19 + 0x58);
              if (plVar15 != (long *)0x0) {
                lVar11 = *plVar15;
                lVar9 = *(long *)puVar3;
                uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
                if (uVar13 != 0) {
                  piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar14 + -2) == lVar9) {
                      puVar8 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
                      goto FUN_03162978;
                    }
                    uVar13 = uVar13 - 1;
                    piVar14 = piVar14 + 4;
                  } while (uVar13 != 0);
                }
                puVar8 = (undefined8 *)FUN_01ae9f78(plVar15,lVar9,0);
FUN_03162978:
                uVar13 = (*(code *)*puVar8)(plVar15,puVar8[1]);
                if ((uVar13 & 1) != 0) {
                  *(undefined4 *)(unaff_x19 + 0x74) = 0xffffffff;
                  goto LAB_03162998;
                }
                lVar9 = *(long *)(unaff_x19 + 0x38);
                if (lVar9 != 0) {
                  uVar1 = *(uint *)(unaff_x19 + 0x74);
                  uVar17 = *(uint *)(lVar9 + 0x18);
                  if (uVar17 <= uVar1) goto LAB_03162a58;
                  lVar11 = *(long *)(lVar9 + (long)(int)uVar1 * 8 + 0x20);
                  if (lVar11 != 0) {
                    if (*(float *)(lVar11 + 0x10) <= *(float *)(unaff_x19 + 0x7c)) {
                      if (*(float *)(unaff_x19 + 0x7c) <= *(float *)(lVar11 + 0x14)) {
                        return;
                      }
                      uVar2 = uVar17 - 1;
                      if ((int)(uVar1 + 1) <= (int)uVar2) {
                        uVar2 = uVar1 + 1;
                      }
                      *puVar16 = uVar2;
                      if (uVar17 <= uVar2) goto LAB_03162a58;
                      uVar13 = (ulong)(int)uVar2;
                    }
                    else {
                      uVar1 = uVar1 - 1 & ((int)(uVar1 - 1) >> 0x1f ^ 0xffffffffU);
                      *puVar16 = uVar1;
                      if (uVar17 <= uVar1) {
LAB_03162a58:
                    /* WARNING: Subroutine does not return */
                        FUN_01b48180();
                      }
                      uVar13 = (ulong)uVar1;
                    }
                    if (*(long *)(lVar9 + uVar13 * 8 + 0x20) != 0) goto LAB_03162998;
                  }
                }
              }
            }
            else {
              lVar9 = FUN_03162a5c(*(undefined4 *)(unaff_x19 + 0x7c));
              if (lVar9 != 0) {
                if (*(char *)(lVar9 + 0x18) == '\0') {
                  *puVar16 = 0xffffffff;
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
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


