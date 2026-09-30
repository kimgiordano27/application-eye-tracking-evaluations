/*
FUNCTION_NAME: cj$$cq
ENTRY_POINT: 01be5c58
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

void cj__cq(long param_1,undefined1 param_2 [16],undefined1 param_3 [16],ulong param_4)

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
  float fVar10;
  float *pfVar11;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  long lVar12;
  uint uVar13;
  undefined8 *puVar14;
  long unaff_x27;
  ulong uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float unaff_s9;
  float fVar25;
  undefined8 unaff_d10;
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
  fVar21 = DAT_00b555e4;
  fStack0000000000000048 = (float)unaff_d14;
  pfVar11 = *(float **)(param_1 + 0xb8);
  uVar9 = *(ulong *)(unaff_x21 + 0x18);
  fVar27 = pfVar11[1];
  uVar7 = (ulong)(uint)fVar27;
  fStack0000000000000044 = pfVar11[2];
  fVar28 = *pfVar11;
  fStack000000000000004c = unaff_s9;
  if ((int)uVar9 < 1) {
    fStack0000000000000040 = 2.0;
  }
  else {
    fStack0000000000000040 = 2.0;
    uVar15 = 0;
    puVar14 = (undefined8 *)(unaff_x21 + 0x20);
    fVar10 = INFINITY;
    do {
      fVar27 = (float)param_4;
      if ((uVar9 & 0xffffffff) <= uVar15) goto LAB_01be6868;
      in_stack_00000078 = *(undefined4 *)(puVar14 + 5);
      in_stack_00000070 = puVar14[4];
      in_stack_00000058 = puVar14[1];
      uVar6 = *puVar14;
      in_stack_00000068 = puVar14[3];
      in_stack_00000060 = puVar14[2];
      in_stack_00000050 = uVar6;
      fVar16 = (float)FUN_03959c54(&stack0x00000050,0);
      if (DAT_03fed25e == '\0') {
        thunk_FUN_01ad9084(puVar2);
        DAT_03fed25e = '\x01';
      }
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      fVar27 = fVar27 - (float)unaff_d10;
      param_4 = (ulong)(uint)fVar27;
      unaff_d14 = (ulong)(uint)fStack0000000000000048;
      fVar20 = (float)uVar6 - fStack0000000000000048;
      uVar9 = (ulong)(uint)(fVar27 * fVar27);
      fVar27 = SQRT(fVar27 * fVar27 +
                    (fVar16 - fStack000000000000004c) * (fVar16 - fStack000000000000004c) +
                    fVar20 * fVar20);
      if (fVar27 < fVar10) {
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
        fStack0000000000000040 = fVar27;
        if ((uVar7 & 1) == 0) {
          fStack0000000000000040 = fVar27 + fVar21;
        }
        fVar28 = (float)FUN_03959c54(&stack0x00000050,0);
        fStack0000000000000044 = (float)param_4;
        uVar7 = uVar9;
        fVar10 = fVar27;
      }
      fVar27 = (float)uVar7;
      uVar9 = *(ulong *)(unaff_x21 + 0x18);
      uVar15 = uVar15 + 1;
      puVar14 = (undefined8 *)((long)puVar14 + 0x2c);
      unaff_d15 = unaff_d10;
    } while ((long)uVar15 < (long)(int)uVar9);
  }
  if (uVar9 == 0) {
    *unaff_x22 = 0;
    thunk_FUN_01b4f09c();
  }
  fVar21 = fStack000000000000004c;
  if (*(int *)(*(long *)Method_UnityEngine_UIElements_RectField_<>c_<DescribeFields>b__0_6__ + 0xe0)
      == 0) {
    thunk_FUN_01ac7298();
  }
  fVar16 = DAT_00b55428;
  uVar7 = unaff_d14;
  uVar6 = unaff_d15;
  lVar5 = FUN_03958084(fVar21,unaff_d14,unaff_d15,DAT_00b55428,0);
  puVar2 = Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__;
  fVar10 = DAT_00b55370;
  fVar20 = (float)uVar7;
  fVar22 = (float)uVar6;
  if (lVar5 == 0) goto cp__a;
  uVar4 = *(uint *)(lVar5 + 0x18);
  if (0 < (int)uVar4) {
    uVar13 = 0;
    uVar1 = uVar4;
    do {
      fVar22 = (float)unaff_d15;
      fVar27 = (float)unaff_d14;
      if (uVar1 <= uVar13) {
LAB_01be6868:
                    /* WARNING: Subroutine does not return */
        FUN_01b48180();
      }
      lVar12 = *(long *)(lVar5 + (long)(int)uVar13 * 8 + 0x20);
      if (lVar12 == 0) goto cp__a;
      lVar8 = FUN_0391c2b8(lVar12,0);
      *unaff_x22 = lVar8;
      thunk_FUN_01b4f09c();
      fVar28 = (float)FUN_0395b4d8(fStack000000000000004c,lVar12,0);
      fVar20 = fVar27;
      fVar21 = fVar22;
      lVar12 = FUN_038f1768(0);
      if ((lVar12 == 0) || (lVar12 = FUN_0391c27c(lVar12,0), lVar12 == 0)) goto cp__a;
      fVar17 = (float)FUN_03928d34(lVar12,0);
      if (DAT_03fed25d == '\0') {
        thunk_FUN_01ad9084(puVar2);
        DAT_03fed25d = '\x01';
      }
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      fVar25 = fStack0000000000000048;
      fVar17 = fVar17 - fVar28;
      fVar20 = fVar20 - fVar27;
      fVar21 = fVar21 - fVar22;
      fVar24 = SQRT(fVar21 * fVar21 + fVar17 * fVar17 + fVar20 * fVar20);
      if (fVar24 <= fVar10) {
        if (*(char *)(unaff_x27 + 599) == '\0') {
          thunk_FUN_01ad9084();
          *(undefined1 *)(unaff_x27 + 599) = 1;
        }
        pfVar11 = *(float **)(*unaff_x20 + 0xb8);
        fVar17 = *pfVar11;
        fVar20 = pfVar11[1];
        fVar21 = pfVar11[2];
      }
      else {
        fVar17 = fVar17 / fVar24;
        fVar20 = fVar20 / fVar24;
        fVar21 = fVar21 / fVar24;
      }
      unaff_d14 = (ulong)(uint)fVar25;
      uVar1 = *(uint *)(lVar5 + 0x18);
      uVar13 = uVar13 + 1;
      unaff_d15 = unaff_d10;
    } while ((int)uVar13 < (int)uVar1);
    fVar20 = fVar20 * fVar16;
    fVar22 = fVar22 + fVar21 * fVar16;
    fVar27 = fVar27 + fVar20;
    fVar28 = fVar28 + fVar17 * fVar16;
    fVar21 = fStack000000000000004c;
    fStack0000000000000044 = fVar22;
  }
  fVar10 = (float)unaff_d14;
  uVar6 = *(undefined8 *)(unaff_x19 + 0xa8);
  bVar3 = (int)uVar4 < 1;
  if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
              0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar7 = FUN_03923030(uVar6,0);
  fVar17 = (float)unaff_d15;
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
      fVar25 = fVar20;
      fVar24 = fVar22;
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar7 = FUN_03923030(lVar5,0);
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
          fVar18 = fVar28 - fVar18;
          fVar20 = fVar27 - fVar20;
          fVar22 = fStack0000000000000044 - fVar22;
          if (*(int *)(*(long *)
                        Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__ +
                      0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          fVar10 = fStack0000000000000048;
          fVar21 = SQRT(fVar22 * fVar22 + fVar18 * fVar18 + fVar20 * fVar20);
          if (fVar21 <= DAT_00b55370) {
            if (*(char *)(unaff_x27 + 599) == '\0') {
              thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
              *(undefined1 *)(unaff_x27 + 599) = 1;
            }
            pfVar11 = *(float **)(*unaff_x20 + 0xb8);
            fVar25 = *pfVar11;
            fVar24 = pfVar11[1];
            fVar23 = pfVar11[2];
          }
          else {
            fVar25 = fVar18 / fVar21;
            fVar24 = fVar20 / fVar21;
            fVar23 = fVar22 / fVar21;
          }
          lVar5 = *(long *)(unaff_x19 + 0xa8);
          if (lVar5 == 0) goto cp__a;
          fVar24 = fVar24 * fVar16;
          fVar23 = fVar23 * fVar16;
          fVar28 = fVar28 - fVar25 * fVar16;
          fVar27 = fVar27 - fVar24;
          fVar26 = fStack0000000000000044 - fVar23;
          fVar19 = (float)FUN_03928d34(lVar5,0);
          fVar25 = *(float *)(unaff_x19 + 0x38);
          if (*(float *)(unaff_x19 + 0x38) < 0.0) {
            fVar25 = 0.0;
          }
          FUN_03928dd4(fVar28 + (fVar19 - fVar28) * fVar25,fVar27 + (fVar24 - fVar27) * fVar25,
                       fVar26 + (fVar23 - fVar26) * fVar25,lVar5,0);
          lVar5 = *(long *)(unaff_x19 + 0xa8);
          FUN_039148b4(fVar18,fVar20,fVar22,0);
          if (lVar5 == 0) goto cp__a;
          FUN_03928f54(lVar5,0);
          lVar5 = *(long *)(unaff_x19 + 0xa8);
          if (DAT_03fed258 == '\0') {
            thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
            DAT_03fed258 = '\x01';
          }
          uVar6 = *(undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 0xc);
          fVar27 = *(float *)(*(long *)(*unaff_x20 + 0xb8) + 0x14);
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
          fVar27 = fVar21 * fVar27;
          fVar28 = (float)uVar6 * fVar21;
          fVar21 = (float)((ulong)uVar6 >> 0x20) * fVar21;
          fVar21 = fVar21 + fVar21;
          FUN_039293f4(CONCAT44(fVar21,fVar28 + fVar28),fVar21,fVar27 + fVar27,lVar5,0);
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
      fVar10 = fStack0000000000000048;
      if ((uVar7 & 1) != 0) {
        lVar5 = FUN_038f1768(0);
        if ((lVar5 == 0) || (lVar5 = FUN_0391c27c(lVar5,0), lVar5 == 0)) goto cp__a;
        fVar27 = (float)FUN_03928d34(lVar5,0);
        if (DAT_03fed25d == '\0') {
          thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__
                            );
          DAT_03fed25d = '\x01';
        }
        fVar27 = fVar27 - fVar21;
        fVar25 = fVar25 - fVar10;
        fVar24 = fVar24 - fVar17;
        if (*(int *)(*(long *)
                      Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__ + 0xe0
                    ) == 0) {
          thunk_FUN_01ac7298();
        }
        fVar28 = SQRT(fVar24 * fVar24 + fVar27 * fVar27 + fVar25 * fVar25);
        if (fVar28 <= DAT_00b55370) {
          if (*(char *)(unaff_x27 + 599) == '\0') {
            thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
            *(undefined1 *)(unaff_x27 + 599) = 1;
          }
          pfVar11 = *(float **)(*unaff_x20 + 0xb8);
          fVar27 = *pfVar11;
          fVar25 = pfVar11[1];
          fVar24 = pfVar11[2];
        }
        else {
          fVar27 = fVar27 / fVar28;
          fVar25 = fVar25 / fVar28;
          fVar24 = fVar24 / fVar28;
        }
        lVar5 = *(long *)(unaff_x19 + 0xa8);
        if (lVar5 == 0) goto cp__a;
        fVar25 = fVar25 * DAT_00b55290;
        fVar24 = fVar24 * DAT_00b55290;
        fVar20 = fVar17 + fVar24;
        fVar22 = fStack000000000000004c + fVar27 * DAT_00b55290;
        fVar28 = fStack000000000000004c;
        fVar27 = (float)FUN_03928d34(fVar27 * DAT_00b55290,fStack000000000000004c,fVar24,lVar5,0);
        fVar21 = *(float *)(unaff_x19 + 0x38);
        if (fVar21 < 0.0) {
          fVar21 = 0.0;
        }
        fVar28 = fVar28 + ((fVar10 + fVar25) - fVar28) * fVar21;
        fVar24 = fVar24 + (fVar20 - fVar24) * fVar21;
        FUN_03928dd4(fVar27 + (fVar22 - fVar27) * fVar21,fVar28,fVar24,lVar5,0);
        lVar5 = *(long *)(unaff_x19 + 0xa8);
        if (lVar5 == 0) goto cp__a;
        fVar20 = (float)FUN_03928d34(lVar5,0);
        fVar27 = fVar28;
        fVar21 = fVar24;
        lVar12 = FUN_038f1768(0);
        if ((lVar12 == 0) || (lVar12 = FUN_0391c27c(lVar12,0), lVar12 == 0)) goto cp__a;
        fVar22 = (float)FUN_03928d34(lVar12,0);
        FUN_039148b4(fVar20 - fVar22,fVar28 - fVar27,fVar24 - fVar21,0);
        FUN_03928f54(lVar5,0);
        lVar5 = *(long *)(unaff_x19 + 0xa8);
        if (DAT_03fed258 == '\0') {
          thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
          DAT_03fed258 = '\x01';
        }
        if (lVar5 == 0) goto cp__a;
        lVar12 = *(long *)(*unaff_x20 + 0xb8);
        FUN_039293f4(*(undefined4 *)(lVar12 + 0xc),*(undefined4 *)(lVar12 + 0x10),
                     *(undefined4 *)(lVar12 + 0x14),lVar5,0);
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
    fVar27 = fStack0000000000000034;
    fVar28 = fStack0000000000000038;
    fVar21 = (float)FUN_03914a7c(uStack0000000000000030,fStack0000000000000034,
                                 fStack0000000000000038,uStack000000000000003c,
                                 *(float *)(lVar5 + 0x48) * fVar16,*(float *)(lVar5 + 0x4c) * fVar16
                                 ,*(float *)(lVar5 + 0x50) * fVar16,0);
    fStack0000000000000048 = fVar27;
    if (DAT_03fed260 == '\0') {
      thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
      DAT_03fed260 = '\x01';
    }
    lVar5 = *(long *)(*unaff_x20 + 0xb8);
    fVar27 = (float)FUN_03914a7c(uStack0000000000000030,fStack0000000000000034,
                                 fStack0000000000000038,uStack000000000000003c,
                                 fStack0000000000000040 * *(float *)(lVar5 + 0x48),
                                 fStack0000000000000040 * *(float *)(lVar5 + 0x4c),
                                 fStack0000000000000040 * *(float *)(lVar5 + 0x50),0);
    *(float *)(unaff_x19 + 0x90) = fStack000000000000004c + fVar27;
    *(float *)(unaff_x19 + 0x94) = fVar10 + fStack0000000000000034;
    *(float *)(unaff_x19 + 0x98) = fVar17 + fStack0000000000000038;
    if (*(long *)(unaff_x19 + 0xa0) != 0) {
      FUN_038fcfa4(fStack000000000000004c + fVar21,fVar10 + fStack0000000000000048,fVar17 + fVar28,
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


