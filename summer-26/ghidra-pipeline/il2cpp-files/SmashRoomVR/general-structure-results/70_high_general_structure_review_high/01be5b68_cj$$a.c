/*
FUNCTION_NAME: cj$$a
ENTRY_POINT: 01be5b68
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_21;validity_or_gating_hits_21;telemetry_or_network_hits_16
*/


/* WARNING: Removing unreachable block (ram,0x01be6540) */
/* WARNING: Removing unreachable block (ram,0x01be6708) */

void cj__a(void)

{
  long *plVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  float fVar14;
  float *pfVar15;
  long unaff_x19;
  long unaff_x20;
  uint uVar16;
  undefined8 *puVar17;
  ulong uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float unaff_s8;
  float fVar27;
  float unaff_s9;
  undefined4 unaff_s10;
  float fVar28;
  undefined4 uVar29;
  undefined4 unaff_s11;
  float fVar30;
  float unaff_s13;
  float fVar31;
  ulong unaff_d14;
  ulong uVar32;
  ulong unaff_d15;
  float fStack0000000000000034;
  undefined4 uStack000000000000003c;
  float fStack0000000000000040;
  float fStack0000000000000044;
  float fStack000000000000004c;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined4 in_stack_00000068;
  undefined4 uStack000000000000006c;
  undefined4 in_stack_00000070;
  undefined4 uStack0000000000000074;
  undefined4 in_stack_00000078;
  
  thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectField_<>c_<DescribeFields>b__0_6__);
  *(undefined1 *)(unaff_x20 + 0x2c0) = 1;
  puVar4 = Method_UnityEngine_UIElements_RectField_<>c_<DescribeFields>b__0_6__;
  uStack0000000000000074 = 0;
  in_stack_00000078 = 0;
  in_stack_00000070 = 0;
  in_stack_00000058 = 0;
  in_stack_00000050 = 0;
  in_stack_00000068 = 0;
  uStack000000000000006c = 0;
  in_stack_00000060 = 0;
  if (DAT_03fed260 == '\0') {
    thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
    DAT_03fed260 = '\x01';
  }
  puVar3 = Method_Mono_Security_PKCS7_EncryptedData__ctor__;
  fStack0000000000000034 = unaff_s8;
  FUN_03914a7c(0);
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar12 = unaff_d15;
  lVar7 = FUN_03956ee8(0);
  if (DAT_03fed257 == '\0') {
    thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
    DAT_03fed257 = '\x01';
  }
  puVar4 = Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__;
  fVar24 = DAT_00b555e4;
  if (lVar7 == 0) goto cp__a;
  plVar1 = (long *)(unaff_x19 + 0x28);
  fVar21 = (float)unaff_d14;
  pfVar15 = *(float **)(*(long *)puVar3 + 0xb8);
  uVar13 = *(ulong *)(lVar7 + 0x18);
  fVar30 = pfVar15[1];
  uVar10 = (ulong)(uint)fVar30;
  fStack0000000000000044 = pfVar15[2];
  fVar31 = *pfVar15;
  fVar28 = (float)unaff_d15;
  uStack000000000000003c = unaff_s10;
  fStack000000000000004c = unaff_s9;
  if ((int)uVar13 < 1) {
    fStack0000000000000040 = 2.0;
    uVar32 = unaff_d14;
  }
  else {
    fStack0000000000000040 = 2.0;
    uVar18 = 0;
    puVar17 = (undefined8 *)(lVar7 + 0x20);
    fVar14 = INFINITY;
    do {
      fVar30 = (float)uVar12;
      if ((uVar13 & 0xffffffff) <= uVar18) goto LAB_01be6868;
      in_stack_00000078 = *(undefined4 *)(puVar17 + 5);
      in_stack_00000058 = puVar17[1];
      uVar9 = *puVar17;
      in_stack_00000060 = puVar17[2];
      in_stack_00000070 = (undefined4)puVar17[4];
      uStack0000000000000074 = (undefined4)((ulong)puVar17[4] >> 0x20);
      in_stack_00000068 = (undefined4)puVar17[3];
      uStack000000000000006c = (undefined4)((ulong)puVar17[3] >> 0x20);
      in_stack_00000050 = uVar9;
      fVar19 = (float)FUN_03959c54(&stack0x00000050,0);
      if (DAT_03fed25e == '\0') {
        thunk_FUN_01ad9084(puVar4);
        DAT_03fed25e = '\x01';
      }
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      fVar30 = fVar30 - fVar28;
      uVar12 = (ulong)(uint)fVar30;
      uVar32 = unaff_d14 & 0xffffffff;
      fVar23 = (float)uVar9 - fVar21;
      uVar13 = (ulong)(uint)(fVar30 * fVar30);
      fVar30 = SQRT(fVar30 * fVar30 +
                    (fVar19 - fStack000000000000004c) * (fVar19 - fStack000000000000004c) +
                    fVar23 * fVar23);
      if (fVar30 < fVar14) {
        lVar8 = FUN_03959ba8(&stack0x00000050,0);
        if (lVar8 == 0) goto cp__a;
        uVar9 = FUN_0391c2b8(lVar8,0);
        *(undefined8 *)(unaff_x19 + 0x28) = uVar9;
        thunk_FUN_01b4f09c(plVar1,uVar9);
        uVar9 = *(undefined8 *)(unaff_x19 + 0x30);
        if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar10 = FUN_03923030(uVar9,0);
        fStack0000000000000040 = fVar30;
        if ((uVar10 & 1) == 0) {
          fStack0000000000000040 = fVar30 + fVar24;
        }
        fVar31 = (float)FUN_03959c54(&stack0x00000050,0);
        fStack0000000000000044 = (float)uVar12;
        uVar10 = uVar13;
        fVar14 = fVar30;
      }
      fVar30 = (float)uVar10;
      uVar13 = *(ulong *)(lVar7 + 0x18);
      uVar18 = uVar18 + 1;
      puVar17 = (undefined8 *)((long)puVar17 + 0x2c);
    } while ((long)uVar18 < (long)(int)uVar13);
  }
  if (uVar13 == 0) {
    *plVar1 = 0;
    thunk_FUN_01b4f09c(plVar1,0);
  }
  fVar24 = fStack000000000000004c;
  if (*(int *)(*(long *)Method_UnityEngine_UIElements_RectField_<>c_<DescribeFields>b__0_6__ + 0xe0)
      == 0) {
    thunk_FUN_01ac7298();
  }
  fVar19 = DAT_00b55428;
  uVar12 = uVar32;
  uVar10 = unaff_d15;
  lVar7 = FUN_03958084(fVar24,uVar32,unaff_d15,DAT_00b55428,0);
  puVar4 = Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__;
  fVar14 = DAT_00b55370;
  fVar23 = (float)uVar12;
  fVar25 = (float)uVar10;
  if (lVar7 == 0) goto cp__a;
  uVar6 = *(uint *)(lVar7 + 0x18);
  if (0 < (int)uVar6) {
    uVar16 = 0;
    uVar2 = uVar6;
    do {
      fVar30 = (float)uVar32;
      if (uVar2 <= uVar16) {
LAB_01be6868:
                    /* WARNING: Subroutine does not return */
        FUN_01b48180();
      }
      lVar8 = *(long *)(lVar7 + (long)(int)uVar16 * 8 + 0x20);
      if (lVar8 == 0) goto cp__a;
      lVar11 = FUN_0391c2b8(lVar8,0);
      *plVar1 = lVar11;
      thunk_FUN_01b4f09c(plVar1,lVar11);
      uVar12 = unaff_d15;
      fVar31 = (float)FUN_0395b4d8(fStack000000000000004c,lVar8,0);
      fVar25 = (float)uVar12;
      fVar23 = fVar30;
      fVar24 = fVar25;
      lVar8 = FUN_038f1768(0);
      if ((lVar8 == 0) || (lVar8 = FUN_0391c27c(lVar8,0), lVar8 == 0)) goto cp__a;
      fVar20 = (float)FUN_03928d34(lVar8,0);
      if (DAT_03fed25d == '\0') {
        thunk_FUN_01ad9084(puVar4);
        DAT_03fed25d = '\x01';
      }
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      fVar20 = fVar20 - fVar31;
      fVar23 = fVar23 - fVar30;
      fVar24 = fVar24 - fVar25;
      fVar26 = SQRT(fVar24 * fVar24 + fVar20 * fVar20 + fVar23 * fVar23);
      if (fVar26 <= fVar14) {
        if (DAT_03fed257 == '\0') {
          thunk_FUN_01ad9084(puVar3);
          DAT_03fed257 = '\x01';
        }
        pfVar15 = *(float **)(*(long *)puVar3 + 0xb8);
        fVar20 = *pfVar15;
        fVar23 = pfVar15[1];
        fVar24 = pfVar15[2];
      }
      else {
        fVar20 = fVar20 / fVar26;
        fVar23 = fVar23 / fVar26;
        fVar24 = fVar24 / fVar26;
      }
      uVar32 = unaff_d14 & 0xffffffff;
      uVar2 = *(uint *)(lVar7 + 0x18);
      uVar16 = uVar16 + 1;
    } while ((int)uVar16 < (int)uVar2);
    fVar23 = fVar23 * fVar19;
    fVar25 = fVar25 + fVar24 * fVar19;
    fVar30 = fVar30 + fVar23;
    fVar31 = fVar31 + fVar20 * fVar19;
    fVar24 = fStack000000000000004c;
    fStack0000000000000044 = fVar25;
  }
  fVar14 = (float)uVar32;
  uVar9 = *(undefined8 *)(unaff_x19 + 0xa8);
  bVar5 = (int)uVar6 < 1;
  if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
              0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar12 = FUN_03923030(uVar9,0);
  uVar29 = uStack000000000000003c;
  fVar20 = fStack0000000000000034;
  if ((uVar12 & 1) != 0) {
    uVar9 = *(undefined8 *)(unaff_x19 + 0xb8);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar12 = FUN_03923030(uVar9,0);
    fVar20 = fStack0000000000000034;
    if ((uVar12 & 1) != 0) {
      lVar7 = *plVar1;
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar12 = FUN_03923030(lVar7,0);
      if ((uVar12 & 1) == 0) {
        uVar9 = *(undefined8 *)(unaff_x19 + 0x30);
        if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar6 = FUN_03923030(uVar9,0);
        uVar6 = uVar6 & 1;
      }
      else {
        uVar6 = 1;
      }
      if ((*(long *)(unaff_x19 + 0xa8) == 0) ||
         (lVar7 = FUN_0391c2b8(*(long *)(unaff_x19 + 0xa8),0), lVar7 == 0)) goto cp__a;
      FUN_0391fb70(lVar7,uVar6,0);
      lVar7 = FUN_038f1768(0);
      if ((lVar7 == 0) || (lVar7 = FUN_0391c27c(lVar7,0), lVar7 == 0)) goto cp__a;
      fVar20 = (float)FUN_03928d34(lVar7,0);
      lVar7 = *plVar1;
      fVar26 = fVar23;
      fVar27 = fVar25;
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar12 = FUN_03923030(lVar7,0);
      fVar14 = fVar21;
      if ((uVar12 & 1) != 0) {
        uVar9 = *(undefined8 *)(unaff_x19 + 0x30);
        if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar12 = FUN_03923030(uVar9,0);
        if ((uVar12 & 1) == 0) {
          if (DAT_03fed25d == '\0') {
            thunk_FUN_01ad9084(
                              Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__
                              );
            DAT_03fed25d = '\x01';
          }
          puVar4 = Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__;
          fVar20 = fVar31 - fVar20;
          fVar23 = fVar30 - fVar23;
          fVar25 = fStack0000000000000044 - fVar25;
          if (*(int *)(*(long *)
                        Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__ +
                      0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          fVar24 = SQRT(fVar25 * fVar25 + fVar20 * fVar20 + fVar23 * fVar23);
          if (fVar24 <= DAT_00b55370) {
            if (DAT_03fed257 == '\0') {
              thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
              DAT_03fed257 = '\x01';
            }
            pfVar15 = *(float **)(*(long *)puVar3 + 0xb8);
            fVar21 = *pfVar15;
            fVar26 = pfVar15[1];
            fVar27 = pfVar15[2];
          }
          else {
            fVar21 = fVar20 / fVar24;
            fVar26 = fVar23 / fVar24;
            fVar27 = fVar25 / fVar24;
          }
          lVar7 = *(long *)(unaff_x19 + 0xa8);
          if (lVar7 == 0) goto cp__a;
          fVar26 = fVar26 * fVar19;
          fVar27 = fVar27 * fVar19;
          fVar31 = fVar31 - fVar21 * fVar19;
          fVar30 = fVar30 - fVar26;
          fStack0000000000000044 = fStack0000000000000044 - fVar27;
          fVar22 = (float)FUN_03928d34(lVar7,0);
          fVar21 = *(float *)(unaff_x19 + 0x38);
          if (*(float *)(unaff_x19 + 0x38) < 0.0) {
            fVar21 = 0.0;
          }
          FUN_03928dd4(fVar31 + (fVar22 - fVar31) * fVar21,fVar30 + (fVar26 - fVar30) * fVar21,
                       fStack0000000000000044 + (fVar27 - fStack0000000000000044) * fVar21,lVar7,0);
          lVar7 = *(long *)(unaff_x19 + 0xa8);
          FUN_039148b4(fVar20,fVar23,fVar25,0);
          if (lVar7 == 0) goto cp__a;
          FUN_03928f54(lVar7,0);
          lVar7 = *(long *)(unaff_x19 + 0xa8);
          if (DAT_03fed258 == '\0') {
            thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
            DAT_03fed258 = '\x01';
          }
          uVar9 = *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0xc);
          fVar30 = *(float *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x14);
          if (DAT_03fed25c == '\0') {
            thunk_FUN_01ad9084(
                              Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__
                              );
            DAT_03fed25c = '\x01';
          }
          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          if (lVar7 == 0) goto cp__a;
          fVar30 = fVar24 * fVar30;
          fVar31 = (float)uVar9 * fVar24;
          fVar24 = (float)((ulong)uVar9 >> 0x20) * fVar24;
          fVar24 = fVar24 + fVar24;
          FUN_039293f4(CONCAT44(fVar24,fVar31 + fVar31),fVar24,fVar30 + fVar30,lVar7,0);
          puVar4 = Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_27__;
          if (*plVar1 == 0) goto cp__a;
          uVar9 = FUN_01ed712c(*plVar1,*(undefined8 *)
                                        Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_27__
                              );
          if (*(int *)(*(long *)
                        Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                      0xe0) == 0) {
            thunk_FUN_01ac7298(*(long *)
                                Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                              );
          }
          uVar12 = FUN_03923030(uVar9,0);
          uVar29 = uStack000000000000003c;
          fVar20 = fStack0000000000000034;
          if ((uVar12 & 1) != 0) {
            if (*plVar1 == 0) goto cp__a;
            FUN_01ed712c(*plVar1,*(undefined8 *)puVar4);
            FUN_01be77ec();
          }
          goto LAB_01be6028;
        }
      }
      uVar9 = *(undefined8 *)(unaff_x19 + 0x30);
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar12 = FUN_03923030(uVar9,0);
      fVar20 = fStack0000000000000034;
      if ((uVar12 & 1) != 0) {
        lVar7 = FUN_038f1768(0);
        if ((lVar7 == 0) || (lVar7 = FUN_0391c27c(lVar7,0), lVar7 == 0)) goto cp__a;
        fVar30 = (float)FUN_03928d34(lVar7,0);
        if (DAT_03fed25d == '\0') {
          thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__
                            );
          DAT_03fed25d = '\x01';
        }
        fVar30 = fVar30 - fVar24;
        fVar26 = fVar26 - fVar21;
        fVar27 = fVar27 - fVar28;
        if (*(int *)(*(long *)
                      Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__ + 0xe0
                    ) == 0) {
          thunk_FUN_01ac7298();
        }
        fVar24 = SQRT(fVar27 * fVar27 + fVar30 * fVar30 + fVar26 * fVar26);
        if (fVar24 <= DAT_00b55370) {
          if (DAT_03fed257 == '\0') {
            thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
            DAT_03fed257 = '\x01';
          }
          pfVar15 = *(float **)(*(long *)puVar3 + 0xb8);
          fVar30 = *pfVar15;
          fVar26 = pfVar15[1];
          fVar27 = pfVar15[2];
        }
        else {
          fVar30 = fVar30 / fVar24;
          fVar26 = fVar26 / fVar24;
          fVar27 = fVar27 / fVar24;
        }
        lVar7 = *(long *)(unaff_x19 + 0xa8);
        if (lVar7 == 0) goto cp__a;
        fVar26 = fVar26 * DAT_00b55290;
        fVar27 = fVar27 * DAT_00b55290;
        fVar23 = fVar28 + fVar27;
        fVar25 = fStack000000000000004c + fVar30 * DAT_00b55290;
        fVar24 = fStack000000000000004c;
        fVar30 = (float)FUN_03928d34(fVar30 * DAT_00b55290,fStack000000000000004c,fVar27,lVar7,0);
        fVar31 = *(float *)(unaff_x19 + 0x38);
        if (fVar31 < 0.0) {
          fVar31 = 0.0;
        }
        fVar24 = fVar24 + ((fVar21 + fVar26) - fVar24) * fVar31;
        fVar27 = fVar27 + (fVar23 - fVar27) * fVar31;
        FUN_03928dd4(fVar30 + (fVar25 - fVar30) * fVar31,fVar24,fVar27,lVar7,0);
        lVar7 = *(long *)(unaff_x19 + 0xa8);
        if (lVar7 == 0) goto cp__a;
        fVar21 = (float)FUN_03928d34(lVar7,0);
        fVar30 = fVar24;
        fVar31 = fVar27;
        lVar8 = FUN_038f1768(0);
        if ((lVar8 == 0) || (lVar8 = FUN_0391c27c(lVar8,0), lVar8 == 0)) goto cp__a;
        fVar23 = (float)FUN_03928d34(lVar8,0);
        FUN_039148b4(fVar21 - fVar23,fVar24 - fVar30,fVar27 - fVar31,0);
        FUN_03928f54(lVar7,0);
        lVar7 = *(long *)(unaff_x19 + 0xa8);
        if (DAT_03fed258 == '\0') {
          thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
          DAT_03fed258 = '\x01';
        }
        if (lVar7 == 0) goto cp__a;
        lVar8 = *(long *)(*(long *)puVar3 + 0xb8);
        FUN_039293f4(*(undefined4 *)(lVar8 + 0xc),*(undefined4 *)(lVar8 + 0x10),
                     *(undefined4 *)(lVar8 + 0x14),lVar7,0);
        puVar4 = Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_27__;
        if (*(long *)(unaff_x19 + 0x30) == 0) goto cp__a;
        uVar9 = FUN_01ed712c(*(long *)(unaff_x19 + 0x30),
                             *(undefined8 *)
                              Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_27__);
        if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298(*(long *)
                              Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                            );
        }
        uVar12 = FUN_03923030(uVar9,0);
        uVar29 = uStack000000000000003c;
        fVar20 = fStack0000000000000034;
        if ((uVar12 & 1) != 0) {
          if ((*(long *)(unaff_x19 + 0x30) == 0) ||
             (lVar7 = FUN_01ed712c(*(long *)(unaff_x19 + 0x30),*(undefined8 *)puVar4), lVar7 == 0))
          goto cp__a;
          bVar5 = *(char *)(lVar7 + 0x34) != '\0';
        }
      }
    }
  }
LAB_01be6028:
  uVar9 = *(undefined8 *)(unaff_x19 + 0xa0);
  if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
              0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar12 = FUN_03923030(uVar9,0);
  if ((uVar12 & 1) == 0) {
    return;
  }
  if (*(long *)(unaff_x19 + 0xa0) != 0) {
    FUN_038fcf60(*(long *)(unaff_x19 + 0xa0),2,0);
    if (DAT_03fed260 == '\0') {
      thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
      DAT_03fed260 = '\x01';
    }
    lVar7 = *(long *)(*(long *)puVar3 + 0xb8);
    fVar24 = fVar20;
    fVar30 = unaff_s13;
    fVar31 = (float)FUN_03914a7c(unaff_s11,fVar20,unaff_s13,uVar29,*(float *)(lVar7 + 0x48) * fVar19
                                 ,*(float *)(lVar7 + 0x4c) * fVar19,
                                 *(float *)(lVar7 + 0x50) * fVar19,0);
    if (DAT_03fed260 == '\0') {
      thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
      DAT_03fed260 = '\x01';
    }
    lVar7 = *(long *)(*(long *)puVar3 + 0xb8);
    fVar21 = (float)FUN_03914a7c(unaff_s11,fVar20,unaff_s13,uVar29,
                                 fStack0000000000000040 * *(float *)(lVar7 + 0x48),
                                 fStack0000000000000040 * *(float *)(lVar7 + 0x4c),
                                 fStack0000000000000040 * *(float *)(lVar7 + 0x50),0);
    *(float *)(unaff_x19 + 0x90) = fStack000000000000004c + fVar21;
    *(float *)(unaff_x19 + 0x94) = fVar14 + fVar20;
    *(float *)(unaff_x19 + 0x98) = fVar28 + unaff_s13;
    if (*(long *)(unaff_x19 + 0xa0) != 0) {
      FUN_038fcfa4(fStack000000000000004c + fVar31,fVar14 + fVar24,fVar28 + fVar30,
                   *(long *)(unaff_x19 + 0xa0),0,0);
      if (*(long *)(unaff_x19 + 0xa0) != 0) {
        FUN_038fcfa4(*(undefined4 *)(unaff_x19 + 0x90),*(undefined4 *)(unaff_x19 + 0x94),
                     *(undefined4 *)(unaff_x19 + 0x98),*(long *)(unaff_x19 + 0xa0),1,0);
        if (*(long *)(unaff_x19 + 0xa0) != 0) {
          FUN_038fe3fc(*(long *)(unaff_x19 + 0xa0),bVar5,0);
          uVar9 = *(undefined8 *)(unaff_x19 + 0x30);
          if (*(int *)(*(long *)
                        Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                      0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          uVar12 = FUN_03923030(uVar9,0);
          puVar4 = Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_27__;
          if ((uVar12 & 1) != 0) {
            if (*(long *)(unaff_x19 + 0x30) == 0) goto cp__a;
            uVar9 = FUN_01ed712c(*(long *)(unaff_x19 + 0x30),
                                 *(undefined8 *)
                                  Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_27__
                                );
            if (*(int *)(*(long *)
                          Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                        0xe0) == 0) {
              thunk_FUN_01ac7298(*(long *)
                                  Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                                );
            }
            uVar12 = FUN_03923030(uVar9,0);
            if ((uVar12 & 1) != 0) {
              if ((*(long *)(unaff_x19 + 0x30) == 0) ||
                 (lVar7 = FUN_01ed712c(*(long *)(unaff_x19 + 0x30),*(undefined8 *)puVar4),
                 lVar7 == 0)) goto cp__a;
              lVar7 = *(long *)(lVar7 + 0x58);
              if (lVar7 != 0) {
                (**(code **)(lVar7 + 0x18))
                          (*(undefined4 *)(unaff_x19 + 0x90),*(undefined4 *)(unaff_x19 + 0x94),
                           *(undefined4 *)(unaff_x19 + 0x98),*(undefined8 *)(lVar7 + 0x40),
                           *(undefined8 *)(lVar7 + 0x28));
              }
            }
          }
          return;
        }
      }
    }
  }
cp__a:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


