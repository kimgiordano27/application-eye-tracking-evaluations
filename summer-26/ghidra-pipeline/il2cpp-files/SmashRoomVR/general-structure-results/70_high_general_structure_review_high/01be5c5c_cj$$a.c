/*
FUNCTION_NAME: cj$$a
ENTRY_POINT: 01be5c5c
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

void cj__a(long param_1,undefined1 param_2 [16],undefined1 param_3 [16],ulong param_4)

{
  uint uVar1;
  undefined *puVar2;
  bool bVar3;
  uint uVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  float *pfVar10;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  long lVar11;
  uint uVar12;
  undefined8 *puVar13;
  long unaff_x27;
  ulong uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined8 unaff_d10;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  ulong unaff_d14;
  undefined8 unaff_d15;
  undefined4 uStack0000000000000030;
  float fStack0000000000000034;
  float fStack0000000000000038;
  undefined4 uStack000000000000003c;
  float fStack0000000000000040;
  float fStack0000000000000044;
  float fStack0000000000000048;
  float fStack000000000000004c;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined4 in_stack_00000078;
  
  puVar2 = Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__;
  fVar28 = DAT_00b555e4;
  pfVar10 = *(float **)(param_1 + 0xb8);
  uVar9 = *(ulong *)(unaff_x21 + 0x18);
  fVar26 = pfVar10[1];
  uVar7 = (ulong)(uint)fVar26;
  fStack0000000000000044 = pfVar10[2];
  fVar27 = *pfVar10;
  if ((int)uVar9 < 1) {
    fStack0000000000000040 = 2.0;
  }
  else {
    fStack0000000000000040 = 2.0;
    uVar14 = 0;
    puVar13 = (undefined8 *)(unaff_x21 + 0x20);
    fVar17 = INFINITY;
    do {
      fVar26 = (float)param_4;
      if ((uVar9 & 0xffffffff) <= uVar14) goto LAB_01be6868;
      in_stack_00000078 = *(undefined4 *)(puVar13 + 5);
      in_stack_00000070 = puVar13[4];
      in_stack_00000058 = puVar13[1];
      uVar6 = *puVar13;
      in_stack_00000068 = puVar13[3];
      in_stack_00000060 = puVar13[2];
      in_stack_00000050 = uVar6;
                    /* catch() { ... } // from try @ 01be5d00 with catch @ 01be5cc0 */
      fVar15 = (float)FUN_03959c54(&stack0x00000050,0);
      if (DAT_03fed25e == '\0') {
        thunk_FUN_01ad9084(puVar2);
        DAT_03fed25e = '\x01';
      }
                    /* try { // try from 01be5cf4 to 01ce5cff has its CatchHandler @ 01be5d8c */
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                    /* try { // try from 01be5d00 to 01ce5da7 has its CatchHandler @ 01be5cc0 */
        thunk_FUN_01ac7298();
      }
      fVar26 = fVar26 - (float)unaff_d10;
      param_4 = (ulong)(uint)fVar26;
      unaff_d14 = _fStack0000000000000048 & 0xffffffff;
      fVar20 = (float)uVar6 - fStack0000000000000048;
      uVar9 = (ulong)(uint)(fVar26 * fVar26);
      fVar26 = SQRT(fVar26 * fVar26 +
                    (fVar15 - fStack000000000000004c) * (fVar15 - fStack000000000000004c) +
                    fVar20 * fVar20);
      if (fVar26 < fVar17) {
        lVar5 = FUN_03959ba8(&stack0x00000050,0);
        if (lVar5 == 0) goto cp__a;
        uVar6 = FUN_0391c2b8(lVar5,0);
        *(undefined8 *)(unaff_x19 + 0x28) = uVar6;
        thunk_FUN_01b4f09c();
        uVar6 = *(undefined8 *)(unaff_x19 + 0x30);
        if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar7 = FUN_03923030(uVar6,0);
                    /* catch() { ... } // from try @ 01be5cf4 with catch @ 01be5d8c */
        fStack0000000000000040 = fVar26;
        if ((uVar7 & 1) == 0) {
          fStack0000000000000040 = fVar26 + fVar28;
        }
        fVar27 = (float)FUN_03959c54(&stack0x00000050,0);
        fStack0000000000000044 = (float)param_4;
        uVar7 = uVar9;
        fVar17 = fVar26;
      }
      fVar26 = (float)uVar7;
      uVar9 = *(ulong *)(unaff_x21 + 0x18);
      uVar14 = uVar14 + 1;
      puVar13 = (undefined8 *)((long)puVar13 + 0x2c);
      unaff_d15 = unaff_d10;
    } while ((long)uVar14 < (long)(int)uVar9);
  }
  if (uVar9 == 0) {
    *unaff_x22 = 0;
    thunk_FUN_01b4f09c();
  }
  if (*(int *)(*(long *)Method_UnityEngine_UIElements_RectField_<>c_<DescribeFields>b__0_6__ + 0xe0)
      == 0) {
    thunk_FUN_01ac7298();
  }
  fVar17 = DAT_00b55428;
  uVar7 = unaff_d14;
  uVar6 = unaff_d15;
  lVar5 = FUN_03958084(fStack000000000000004c,unaff_d14,unaff_d15,DAT_00b55428,0);
  puVar2 = Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__;
  fVar28 = DAT_00b55370;
  fVar15 = (float)uVar7;
  fVar20 = (float)uVar6;
  if (lVar5 == 0) goto cp__a;
  uVar4 = *(uint *)(lVar5 + 0x18);
  if (0 < (int)uVar4) {
    uVar12 = 0;
    uVar1 = uVar4;
    do {
      fVar20 = (float)unaff_d15;
      fVar26 = (float)unaff_d14;
      if (uVar1 <= uVar12) {
LAB_01be6868:
                    /* WARNING: Subroutine does not return */
        FUN_01b48180();
      }
      lVar11 = *(long *)(lVar5 + (long)(int)uVar12 * 8 + 0x20);
      if (lVar11 == 0) goto cp__a;
      lVar8 = FUN_0391c2b8(lVar11,0);
      *unaff_x22 = lVar8;
      thunk_FUN_01b4f09c();
      fVar27 = (float)FUN_0395b4d8(fStack000000000000004c,lVar11,0);
      fVar15 = fVar26;
      fVar22 = fVar20;
      lVar11 = FUN_038f1768(0);
      if ((lVar11 == 0) || (lVar11 = FUN_0391c27c(lVar11,0), lVar11 == 0)) goto cp__a;
      fVar16 = (float)FUN_03928d34(lVar11,0);
      if (DAT_03fed25d == '\0') {
        thunk_FUN_01ad9084(puVar2);
        DAT_03fed25d = '\x01';
      }
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      fVar16 = fVar16 - fVar27;
      fVar15 = fVar15 - fVar26;
      fVar22 = fVar22 - fVar20;
      fVar24 = SQRT(fVar22 * fVar22 + fVar16 * fVar16 + fVar15 * fVar15);
      if (fVar24 <= fVar28) {
        if (*(char *)(unaff_x27 + 599) == '\0') {
          thunk_FUN_01ad9084();
          *(undefined1 *)(unaff_x27 + 599) = 1;
        }
        pfVar10 = *(float **)(*unaff_x20 + 0xb8);
        fVar16 = *pfVar10;
        fVar15 = pfVar10[1];
        fVar22 = pfVar10[2];
      }
      else {
        fVar16 = fVar16 / fVar24;
        fVar15 = fVar15 / fVar24;
        fVar22 = fVar22 / fVar24;
      }
      unaff_d14 = _fStack0000000000000048 & 0xffffffff;
      uVar1 = *(uint *)(lVar5 + 0x18);
      uVar12 = uVar12 + 1;
      unaff_d15 = unaff_d10;
    } while ((int)uVar12 < (int)uVar1);
    fVar15 = fVar15 * fVar17;
    fVar20 = fVar20 + fVar22 * fVar17;
    fVar26 = fVar26 + fVar15;
    fVar27 = fVar27 + fVar16 * fVar17;
    fStack0000000000000044 = fVar20;
  }
  fVar28 = (float)unaff_d14;
  uVar6 = *(undefined8 *)(unaff_x19 + 0xa8);
  bVar3 = (int)uVar4 < 1;
  if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
              0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar7 = FUN_03923030(uVar6,0);
  fVar22 = (float)unaff_d15;
  if ((uVar7 & 1) != 0) {
    uVar6 = *(undefined8 *)(unaff_x19 + 0xb8);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar7 = FUN_03923030(uVar6,0);
    if ((uVar7 & 1) != 0) {
      lVar5 = *unaff_x22;
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar7 = FUN_03923030(lVar5,0);
      if ((uVar7 & 1) == 0) {
        uVar6 = *(undefined8 *)(unaff_x19 + 0x30);
        if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar4 = FUN_03923030(uVar6,0);
        uVar4 = uVar4 & 1;
      }
      else {
        uVar4 = 1;
      }
      if ((*(long *)(unaff_x19 + 0xa8) == 0) ||
         (lVar5 = FUN_0391c2b8(*(long *)(unaff_x19 + 0xa8),0), lVar5 == 0)) goto cp__a;
      FUN_0391fb70(lVar5,uVar4,0);
      lVar5 = FUN_038f1768(0);
      if ((lVar5 == 0) || (lVar5 = FUN_0391c27c(lVar5,0), lVar5 == 0)) goto cp__a;
      fVar18 = (float)FUN_03928d34(lVar5,0);
      lVar5 = *unaff_x22;
      fVar16 = fVar15;
      fVar24 = fVar20;
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar7 = FUN_03923030(lVar5,0);
      fVar28 = fStack0000000000000048;
      if ((uVar7 & 1) != 0) {
        uVar6 = *(undefined8 *)(unaff_x19 + 0x30);
        if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar7 = FUN_03923030(uVar6,0);
        if ((uVar7 & 1) == 0) {
          if (DAT_03fed25d == '\0') {
            thunk_FUN_01ad9084(
                              Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__
                              );
            DAT_03fed25d = '\x01';
          }
          puVar2 = Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__;
          fVar18 = fVar27 - fVar18;
          fVar15 = fVar26 - fVar15;
          fVar20 = fStack0000000000000044 - fVar20;
          if (*(int *)(*(long *)
                        Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__ +
                      0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          fVar16 = SQRT(fVar20 * fVar20 + fVar18 * fVar18 + fVar15 * fVar15);
          if (fVar16 <= DAT_00b55370) {
            if (*(char *)(unaff_x27 + 599) == '\0') {
              thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
              *(undefined1 *)(unaff_x27 + 599) = 1;
            }
            pfVar10 = *(float **)(*unaff_x20 + 0xb8);
            fVar24 = *pfVar10;
            fVar21 = pfVar10[1];
            fVar23 = pfVar10[2];
          }
          else {
            fVar24 = fVar18 / fVar16;
            fVar21 = fVar15 / fVar16;
            fVar23 = fVar20 / fVar16;
          }
          lVar5 = *(long *)(unaff_x19 + 0xa8);
          if (lVar5 == 0) goto cp__a;
          fVar21 = fVar21 * fVar17;
          fVar23 = fVar23 * fVar17;
          fVar27 = fVar27 - fVar24 * fVar17;
          fVar26 = fVar26 - fVar21;
          fVar25 = fStack0000000000000044 - fVar23;
          fVar19 = (float)FUN_03928d34(lVar5,0);
          fVar24 = *(float *)(unaff_x19 + 0x38);
          if (*(float *)(unaff_x19 + 0x38) < 0.0) {
            fVar24 = 0.0;
          }
          FUN_03928dd4(fVar27 + (fVar19 - fVar27) * fVar24,fVar26 + (fVar21 - fVar26) * fVar24,
                       fVar25 + (fVar23 - fVar25) * fVar24,lVar5,0);
          lVar5 = *(long *)(unaff_x19 + 0xa8);
          FUN_039148b4(fVar18,fVar15,fVar20,0);
          if (lVar5 == 0) goto cp__a;
          FUN_03928f54(lVar5,0);
          lVar5 = *(long *)(unaff_x19 + 0xa8);
          if (DAT_03fed258 == '\0') {
            thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
            DAT_03fed258 = '\x01';
          }
          uVar6 = *(undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 0xc);
          fVar26 = *(float *)(*(long *)(*unaff_x20 + 0xb8) + 0x14);
          if (DAT_03fed25c == '\0') {
            thunk_FUN_01ad9084(
                              Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__
                              );
            DAT_03fed25c = '\x01';
          }
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          if (lVar5 == 0) goto cp__a;
          fVar26 = fVar16 * fVar26;
          fVar27 = (float)uVar6 * fVar16;
          fVar16 = (float)((ulong)uVar6 >> 0x20) * fVar16;
          fVar16 = fVar16 + fVar16;
          FUN_039293f4(CONCAT44(fVar16,fVar27 + fVar27),fVar16,fVar26 + fVar26,lVar5,0);
          puVar2 = Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_27__;
          if (*unaff_x22 == 0) goto cp__a;
          uVar6 = FUN_01ed712c(*unaff_x22,
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
          uVar7 = FUN_03923030(uVar6,0);
          if ((uVar7 & 1) != 0) {
            if (*unaff_x22 == 0) goto cp__a;
            FUN_01ed712c(*unaff_x22,*(undefined8 *)puVar2);
            FUN_01be77ec();
          }
          goto LAB_01be6028;
        }
      }
      uVar6 = *(undefined8 *)(unaff_x19 + 0x30);
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar7 = FUN_03923030(uVar6,0);
      if ((uVar7 & 1) != 0) {
        lVar5 = FUN_038f1768(0);
        if ((lVar5 == 0) || (lVar5 = FUN_0391c27c(lVar5,0), lVar5 == 0)) goto cp__a;
        fVar26 = (float)FUN_03928d34(lVar5,0);
        if (DAT_03fed25d == '\0') {
          thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__
                            );
          DAT_03fed25d = '\x01';
        }
        fVar26 = fVar26 - fStack000000000000004c;
        fVar16 = fVar16 - fStack0000000000000048;
        fVar24 = fVar24 - fVar22;
        if (*(int *)(*(long *)
                      Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__ + 0xe0
                    ) == 0) {
          thunk_FUN_01ac7298();
        }
        fVar27 = SQRT(fVar24 * fVar24 + fVar26 * fVar26 + fVar16 * fVar16);
        if (fVar27 <= DAT_00b55370) {
          if (*(char *)(unaff_x27 + 599) == '\0') {
            thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
            *(undefined1 *)(unaff_x27 + 599) = 1;
          }
          pfVar10 = *(float **)(*unaff_x20 + 0xb8);
          fVar26 = *pfVar10;
          fVar16 = pfVar10[1];
          fVar24 = pfVar10[2];
        }
        else {
          fVar26 = fVar26 / fVar27;
          fVar16 = fVar16 / fVar27;
          fVar24 = fVar24 / fVar27;
        }
        lVar5 = *(long *)(unaff_x19 + 0xa8);
        if (lVar5 == 0) goto cp__a;
        fVar16 = fVar16 * DAT_00b55290;
        fVar24 = fVar24 * DAT_00b55290;
        fVar26 = fVar26 * DAT_00b55290;
        fVar18 = fVar22 + fVar24;
        fVar27 = fStack000000000000004c;
        fVar15 = (float)FUN_03928d34(fVar26,fStack000000000000004c,fVar24,lVar5,0);
        fVar20 = *(float *)(unaff_x19 + 0x38);
        if (fVar20 < 0.0) {
          fVar20 = 0.0;
        }
        fVar27 = fVar27 + ((fStack0000000000000048 + fVar16) - fVar27) * fVar20;
        fVar24 = fVar24 + (fVar18 - fVar24) * fVar20;
        FUN_03928dd4(fVar15 + ((fStack000000000000004c + fVar26) - fVar15) * fVar20,fVar27,fVar24,
                     lVar5,0);
        lVar5 = *(long *)(unaff_x19 + 0xa8);
        if (lVar5 == 0) goto cp__a;
        fVar20 = (float)FUN_03928d34(lVar5,0);
        fVar26 = fVar27;
        fVar15 = fVar24;
        lVar11 = FUN_038f1768(0);
        if ((lVar11 == 0) || (lVar11 = FUN_0391c27c(lVar11,0), lVar11 == 0)) goto cp__a;
        fVar16 = (float)FUN_03928d34(lVar11,0);
        FUN_039148b4(fVar20 - fVar16,fVar27 - fVar26,fVar24 - fVar15,0);
        FUN_03928f54(lVar5,0);
        lVar5 = *(long *)(unaff_x19 + 0xa8);
        if (DAT_03fed258 == '\0') {
          thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
          DAT_03fed258 = '\x01';
        }
        if (lVar5 == 0) goto cp__a;
        lVar11 = *(long *)(*unaff_x20 + 0xb8);
        FUN_039293f4(*(undefined4 *)(lVar11 + 0xc),*(undefined4 *)(lVar11 + 0x10),
                     *(undefined4 *)(lVar11 + 0x14),lVar5,0);
        puVar2 = Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_27__;
        if (*(long *)(unaff_x19 + 0x30) == 0) goto cp__a;
        uVar6 = FUN_01ed712c(*(long *)(unaff_x19 + 0x30),
                             *(undefined8 *)
                              Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_27__);
        if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298(*(long *)
                              Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                            );
        }
        uVar7 = FUN_03923030(uVar6,0);
        if ((uVar7 & 1) != 0) {
          if ((*(long *)(unaff_x19 + 0x30) == 0) ||
             (lVar5 = FUN_01ed712c(*(long *)(unaff_x19 + 0x30),*(undefined8 *)puVar2), lVar5 == 0))
          goto cp__a;
          bVar3 = *(char *)(lVar5 + 0x34) != '\0';
        }
      }
    }
  }
LAB_01be6028:
  uVar6 = *(undefined8 *)(unaff_x19 + 0xa0);
  if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
              0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar7 = FUN_03923030(uVar6,0);
  if ((uVar7 & 1) == 0) {
    return;
  }
  if (*(long *)(unaff_x19 + 0xa0) != 0) {
    FUN_038fcf60(*(long *)(unaff_x19 + 0xa0),2,0);
    if (DAT_03fed260 == '\0') {
      thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
      DAT_03fed260 = '\x01';
    }
    lVar5 = *(long *)(*unaff_x20 + 0xb8);
    fVar26 = fStack0000000000000034;
    fVar27 = fStack0000000000000038;
    fVar17 = (float)FUN_03914a7c(uStack0000000000000030,fStack0000000000000034,
                                 fStack0000000000000038,uStack000000000000003c,
                                 *(float *)(lVar5 + 0x48) * fVar17,*(float *)(lVar5 + 0x4c) * fVar17
                                 ,*(float *)(lVar5 + 0x50) * fVar17,0);
    if (DAT_03fed260 == '\0') {
      thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
      DAT_03fed260 = '\x01';
    }
    lVar5 = *(long *)(*unaff_x20 + 0xb8);
    fVar15 = (float)FUN_03914a7c(uStack0000000000000030,fStack0000000000000034,
                                 fStack0000000000000038,uStack000000000000003c,
                                 fStack0000000000000040 * *(float *)(lVar5 + 0x48),
                                 fStack0000000000000040 * *(float *)(lVar5 + 0x4c),
                                 fStack0000000000000040 * *(float *)(lVar5 + 0x50),0);
    *(float *)(unaff_x19 + 0x90) = fStack000000000000004c + fVar15;
    *(float *)(unaff_x19 + 0x94) = fVar28 + fStack0000000000000034;
    *(float *)(unaff_x19 + 0x98) = fVar22 + fStack0000000000000038;
    if (*(long *)(unaff_x19 + 0xa0) != 0) {
      FUN_038fcfa4(fStack000000000000004c + fVar17,fVar28 + fVar26,fVar22 + fVar27,
                   *(long *)(unaff_x19 + 0xa0),0,0);
      if (*(long *)(unaff_x19 + 0xa0) != 0) {
        FUN_038fcfa4(*(undefined4 *)(unaff_x19 + 0x90),*(undefined4 *)(unaff_x19 + 0x94),
                     *(undefined4 *)(unaff_x19 + 0x98),*(long *)(unaff_x19 + 0xa0),1,0);
        if (*(long *)(unaff_x19 + 0xa0) != 0) {
          FUN_038fe3fc(*(long *)(unaff_x19 + 0xa0),bVar3,0);
          uVar6 = *(undefined8 *)(unaff_x19 + 0x30);
          if (*(int *)(*(long *)
                        Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                      0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          uVar7 = FUN_03923030(uVar6,0);
          puVar2 = Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_27__;
          if ((uVar7 & 1) != 0) {
            if (*(long *)(unaff_x19 + 0x30) == 0) goto cp__a;
            uVar6 = FUN_01ed712c(*(long *)(unaff_x19 + 0x30),
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
            uVar7 = FUN_03923030(uVar6,0);
            if ((uVar7 & 1) != 0) {
              if ((*(long *)(unaff_x19 + 0x30) == 0) ||
                 (lVar5 = FUN_01ed712c(*(long *)(unaff_x19 + 0x30),*(undefined8 *)puVar2),
                 lVar5 == 0)) goto cp__a;
              lVar5 = *(long *)(lVar5 + 0x58);
              if (lVar5 != 0) {
                (**(code **)(lVar5 + 0x18))
                          (*(undefined4 *)(unaff_x19 + 0x90),*(undefined4 *)(unaff_x19 + 0x94),
                           *(undefined4 *)(unaff_x19 + 0x98),*(undefined8 *)(lVar5 + 0x40),
                           *(undefined8 *)(lVar5 + 0x28));
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


