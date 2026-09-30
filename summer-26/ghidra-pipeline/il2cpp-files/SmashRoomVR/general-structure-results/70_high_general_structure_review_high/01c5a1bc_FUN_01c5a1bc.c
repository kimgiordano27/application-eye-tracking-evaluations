/*
FUNCTION_NAME: FUN_01c5a1bc
ENTRY_POINT: 01c5a1bc
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_21;telemetry_or_network_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x01c5a84c) */

void FUN_01c5a1bc(undefined1 param_1 [16],float param_2,float param_3,long *param_4)

{
  long *plVar1;
  long *plVar2;
  float *pfVar3;
  uint *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  byte bVar7;
  ulong uVar8;
  undefined8 uVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  uint uVar15;
  ulong uVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  double dVar20;
  undefined8 uVar21;
  ulong uVar22;
  float fVar23;
  ulong uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  long lVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  float fVar34;
  
  if ((DAT_03fed67c & 1) == 0) {
    thunk_FUN_01ad9084(
                      Field_<PrivateImplementationDetails>_215E3E0B11A214B3198654E87B3D953AC8FB1ABC7045AF841A7C4892624BDE49
                      );
    thunk_FUN_01ad9084(StringLiteral_161);
    thunk_FUN_01ad9084(StringLiteral_162);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectField_<>c_<DescribeFields>b__0_6__);
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_2__);
    DAT_03fed67c = 1;
  }
  lVar12 = param_4[0x2a];
  *(undefined1 *)((long)param_4 + 0xf9) = 0;
  *(undefined1 *)((long)param_4 + 0x16c) = 0;
  if (lVar12 != 0) {
    plVar1 = param_4 + 0x2a;
    if (*(int *)((long)param_4 + 0x84) != *(int *)(lVar12 + 0x18)) {
      lVar12 = FUN_01b47fd0(*(undefined8 *)
                             Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_2__
                           );
      *plVar1 = lVar12;
      thunk_FUN_01b4f09c(plVar1,lVar12);
      lVar12 = *plVar1;
    }
    lVar11 = 0x50;
    if ((int)param_4[9] != 0) {
      lVar11 = 0x58;
    }
    if ((*(long *)((long)param_4 + lVar11) != 0) &&
       (uVar17 = FUN_03928d34(*(long *)((long)param_4 + lVar11),0), lVar12 != 0)) {
      if (*(int *)(lVar12 + 0x18) == 0) {
LAB_01c5ac90:
                    /* WARNING: Subroutine does not return */
        FUN_01b48180();
      }
      *(undefined4 *)(lVar12 + 0x20) = uVar17;
      *(float *)(lVar12 + 0x24) = param_2;
      *(float *)(lVar12 + 0x28) = param_3;
      lVar12 = 0x50;
      if ((int)param_4[9] != 0) {
        lVar12 = 0x58;
      }
      if (*(long *)((long)param_4 + lVar12) != 0) {
        fVar18 = (float)FUN_039291ac(*(long *)((long)param_4 + lVar12),0);
        fVar25 = *(float *)(param_4 + 0x11);
        fVar19 = (float)FUN_03925dbc(0);
        fVar23 = param_2 * fVar25 * fVar19;
        uVar8 = (ulong)(uint)fVar23;
        *(float *)(param_4 + 0x2b) = fVar18 * fVar25 * fVar19;
        *(float *)((long)param_4 + 0x15c) = fVar23;
        *(float *)(param_4 + 0x2c) = param_3 * fVar25 * fVar19;
        fVar18 = (float)FUN_03925e44(0);
        if (fVar18 < DAT_00b552fc) {
          fVar18 = DAT_00b552fc;
          fVar19 = (float)FUN_03925e44(0);
          fVar23 = (float)uVar8;
          if (0.0 < fVar19) {
            lVar12 = 0x50;
            if ((int)param_4[9] != 0) {
              lVar12 = 0x58;
            }
            if (*(long *)((long)param_4 + lVar12) == 0) goto LAB_01c5ac8c;
            fVar19 = (float)FUN_039291ac(*(long *)((long)param_4 + lVar12),0);
            fVar26 = *(float *)(param_4 + 0x11);
            fVar25 = (float)FUN_03925d94(0);
            fVar18 = fVar18 * fVar26 * fVar25;
            uVar8 = (ulong)(uint)fVar18;
            *(float *)(param_4 + 0x2b) = fVar19 * fVar26 * fVar25;
            *(float *)((long)param_4 + 0x15c) = fVar18;
            *(float *)(param_4 + 0x2c) = fVar23 * fVar26 * fVar25;
          }
        }
        plVar14 = (long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
        plVar2 = param_4 + 0x21;
        param_4[0x21] = 0;
        thunk_FUN_01b4f09c(plVar2,0);
        *(undefined4 *)(param_4 + 0x2d) = 0;
        puVar6 = Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__;
        puVar5 = Method_UnityEngine_UIElements_RectField_<>c_<DescribeFields>b__0_6__;
        if (1 < *(int *)((long)param_4 + 0x84)) {
          uVar16 = 0;
          iVar10 = 0;
          plVar13 = param_4 + 0x24;
          lVar12 = 0x34;
          while( true ) {
            fVar23 = (float)uVar8;
            fVar25 = *(float *)(param_4 + 0x2b);
            fVar28 = *(float *)((long)param_4 + 0x15c);
            fVar26 = *(float *)(param_4 + 0x2c);
            fVar19 = fVar26 * fVar26;
            fVar18 = 0.0;
            *(int *)(param_4 + 0x2d) = iVar10 + 1;
            if (fVar25 * fVar25 + fVar28 * fVar28 + fVar19 != 0.0) {
              fVar18 = *(float *)((long)param_4 + 0x8c);
              if (DAT_03fed25c == '\0') {
                thunk_FUN_01ad9084(puVar6);
                DAT_03fed25c = '\x01';
                fVar25 = *(float *)(param_4 + 0x2b);
                fVar28 = *(float *)((long)param_4 + 0x15c);
                fVar26 = *(float *)(param_4 + 0x2c);
              }
              if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
                thunk_FUN_01ac7298();
              }
              fVar19 = fVar26 * fVar26;
              fVar18 = fVar18 / SQRT(fVar25 * fVar25 + fVar28 * fVar28 + fVar19);
            }
            *(float *)((long)param_4 + 0x164) = fVar18;
            fVar26 = *(float *)(param_4 + 0x2b);
            fVar18 = *(float *)((long)param_4 + 0x15c);
            fVar25 = *(float *)(param_4 + 0x2c);
            if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            fVar28 = (float)FUN_03954ef8(0);
            fVar27 = *(float *)((long)param_4 + 0x164);
            lVar11 = param_4[0x2a];
            fVar26 = fVar26 + fVar28 * fVar27;
            fVar18 = fVar18 + fVar19 * fVar27;
            fVar25 = fVar25 + fVar23 * fVar27;
            *(float *)(param_4 + 0x2b) = fVar26;
            *(float *)((long)param_4 + 0x15c) = fVar18;
            *(float *)(param_4 + 0x2c) = fVar25;
            if (lVar11 == 0) goto LAB_01c5ac8c;
            if (*(uint *)(lVar11 + 0x18) <= uVar16) goto LAB_01c5ac90;
            lVar11 = lVar11 + lVar12;
            uVar30 = *(undefined4 *)((long)param_4 + 0x8c);
            uVar31 = *(undefined4 *)(lVar11 + -0x14);
            uVar32 = *(undefined4 *)(lVar11 + -0x10);
            uVar33 = *(undefined4 *)(lVar11 + -0xc);
            uVar17 = FUN_03920150((int)param_4[0x12],0);
            uVar8 = FUN_03955b94(uVar31,uVar32,uVar33,fVar26,fVar18,fVar25,uVar30,plVar13,uVar17,0);
            if ((uVar8 & 1) != 0) break;
            lVar11 = *plVar1;
            if (lVar11 == 0) goto LAB_01c5ac8c;
            if ((*(uint *)(lVar11 + 0x18) <= uVar16) ||
               ((ulong)*(uint *)(lVar11 + 0x18) <= uVar16 + 1)) goto LAB_01c5ac90;
            fVar18 = *(float *)((long)param_4 + 0x164);
            pfVar3 = (float *)(lVar11 + lVar12);
            fVar19 = *(float *)(param_4 + 0x2c);
            uVar8 = param_4[0x2b];
            *(ulong *)(pfVar3 + -2) =
                 CONCAT44((float)((ulong)*(undefined8 *)(pfVar3 + -5) >> 0x20) +
                          (float)(uVar8 >> 0x20) * fVar18,
                          (float)*(undefined8 *)(pfVar3 + -5) + (float)uVar8 * fVar18);
            *pfVar3 = pfVar3[-3] + fVar18 * fVar19;
            if ((long)*(int *)((long)param_4 + 0x84) <= (long)(uVar16 + 2)) goto LAB_01c5aadc;
            iVar10 = (int)param_4[0x2d];
            lVar12 = lVar12 + 0xc;
            uVar16 = uVar16 + 1;
          }
          lVar11 = FUN_03959ba8(plVar13,0);
          *plVar2 = lVar11;
          thunk_FUN_01b4f09c(plVar2,lVar11);
          lVar11 = *plVar1;
          if (lVar11 == 0) goto LAB_01c5ac8c;
          if (*(uint *)(lVar11 + 0x18) <= (uint)uVar16) goto LAB_01c5ac90;
          lVar29 = param_4[0x2b];
          uVar9 = *(undefined8 *)(lVar11 + lVar12 + -0x14);
          fVar18 = *(float *)(lVar11 + lVar12 + -0xc);
          fVar19 = *(float *)(param_4 + 0x2c);
          if (DAT_03fed25d == '\0') {
            thunk_FUN_01ad9084(
                              Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__
                              );
            DAT_03fed25d = '\x01';
          }
          uVar15 = (uint)uVar16 + 1;
          if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          fVar26 = (float)lVar29;
          fVar28 = (float)((ulong)lVar29 >> 0x20);
          fVar25 = fVar19 * fVar19;
          fVar23 = SQRT(fVar25 + fVar26 * fVar26 + fVar28 * fVar28);
          if (fVar23 <= DAT_00b55370) {
            if (DAT_03fed257 == '\0') {
              thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
              DAT_03fed257 = '\x01';
            }
            uVar21 = **(undefined8 **)
                       (*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
            fVar19 = *(float *)(*(undefined8 **)
                                 (*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8)
                               + 1);
          }
          else {
            uVar21 = CONCAT44(fVar28 / fVar23,fVar26 / fVar23);
            fVar19 = fVar19 / fVar23;
          }
          fVar23 = (float)FUN_03959c6c(plVar13,0);
          if (*(uint *)(lVar11 + 0x18) <= uVar15) goto LAB_01c5ac90;
          fVar18 = fVar18 + fVar19 * fVar23;
          *(ulong *)((float *)(lVar11 + lVar12) + -2) =
               CONCAT44((float)((ulong)uVar9 >> 0x20) + (float)((ulong)uVar21 >> 0x20) * fVar23,
                        (float)uVar9 + (float)uVar21 * fVar23);
          *(float *)(lVar11 + lVar12) = fVar18;
          lVar11 = param_4[0x2b];
          fVar19 = *(float *)(param_4 + 0x2c);
          if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          fVar23 = (float)FUN_03954ef8(0);
          fVar28 = *(float *)((long)param_4 + 0x8c);
          fVar26 = (float)FUN_03959c6c(plVar13,0);
          fVar28 = fVar28 - fVar26;
          if (DAT_03fed25c == '\0') {
            thunk_FUN_01ad9084(
                              Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__
                              );
            DAT_03fed25c = '\x01';
          }
          fVar34 = *(float *)(param_4 + 0x2b);
          fVar27 = *(float *)((long)param_4 + 0x15c);
          fVar26 = *(float *)(param_4 + 0x2c);
          if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          fVar26 = fVar26 * fVar26;
          fVar27 = SQRT(fVar34 * fVar34 + fVar27 * fVar27 + fVar26);
          lVar29 = CONCAT44((float)((ulong)lVar11 >> 0x20) - (fVar18 * fVar28) / fVar27,
                            (float)lVar11 - (fVar23 * fVar28) / fVar27);
          param_4[0x2b] = lVar29;
          *(float *)(param_4 + 0x2c) = fVar19 - (fVar25 * fVar28) / fVar27;
          lVar11 = FUN_0391c27c(param_4,0);
          fVar18 = (float)lVar29;
          if (lVar11 == 0) goto LAB_01c5ac8c;
          fVar25 = (float)FUN_03929130(lVar11,0);
          fVar19 = fVar18;
          fVar23 = fVar26;
          fVar28 = (float)FUN_03959c60(plVar13,0);
          if (DAT_03fed315 == '\0') {
            thunk_FUN_01ad9084(
                              Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__
                              );
            DAT_03fed315 = '\x01';
          }
          if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          plVar14 = (long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
          fVar27 = SQRT((fVar26 * fVar26 + fVar25 * fVar25 + fVar18 * fVar18) *
                        (fVar23 * fVar23 + fVar28 * fVar28 + fVar19 * fVar19));
          fVar34 = 0.0;
          if (DAT_00b55154 <= fVar27) {
            fVar27 = (fVar26 * fVar23 + fVar25 * fVar28 + fVar18 * fVar19) / fVar27;
            if (fVar27 < -1.0) {
              fVar27 = -1.0;
            }
            if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            dVar20 = acos((double)fVar27);
            fVar34 = (float)dVar20 * DAT_00b556e8;
          }
          *(float *)((long)param_4 + 0x11c) = fVar34;
          if (param_4[0xe] == 0) goto LAB_01c5ac8c;
          lVar11 = FUN_0391fab4(param_4[0xe],0);
          lVar29 = *plVar1;
          if (lVar29 == 0) goto LAB_01c5ac8c;
          if (*(uint *)(lVar29 + 0x18) <= uVar15) goto LAB_01c5ac90;
          if (lVar11 == 0) goto LAB_01c5ac8c;
          puVar4 = (uint *)(lVar29 + lVar12);
          uVar8 = (ulong)puVar4[-1];
          uVar16 = (ulong)*puVar4;
          FUN_03928dd4(puVar4[-2],uVar8,uVar16,lVar11,0);
          if (param_4[0xe] == 0) goto LAB_01c5ac8c;
          lVar11 = FUN_0391fab4(param_4[0xe],0);
          if ((param_4[0xe] == 0) || (lVar29 = FUN_0391fab4(param_4[0xe],0), lVar29 == 0))
          goto LAB_01c5ac8c;
          uVar9 = FUN_03929130(lVar29,0);
          uVar22 = uVar8;
          uVar24 = uVar16;
          uVar21 = FUN_03959c60(plVar13,0);
          fVar18 = (float)FUN_0391419c(uVar9,uVar8,uVar16,uVar21,uVar22,uVar24,0);
          fVar19 = (float)uVar8;
          fVar23 = (float)uVar16;
          fVar25 = (float)uVar21;
          if ((param_4[0xe] == 0) ||
             ((fVar26 = fVar25, fVar28 = fVar23, fVar27 = fVar19,
              lVar29 = FUN_0391fab4(param_4[0xe],0), lVar29 == 0 ||
              (fVar34 = (float)FUN_039274a0(lVar29,0), lVar11 == 0)))) goto LAB_01c5ac8c;
          FUN_03928f54((fVar19 * fVar28 + fVar25 * fVar34 + fVar18 * fVar26) - fVar23 * fVar27,
                       (fVar23 * fVar34 + fVar25 * fVar27 + fVar19 * fVar26) - fVar18 * fVar28,
                       (fVar18 * fVar27 + fVar25 * fVar28 + fVar23 * fVar26) - fVar19 * fVar34,
                       ((fVar25 * fVar26 - fVar18 * fVar34) - fVar19 * fVar27) - fVar23 * fVar28,
                       lVar11,0);
          if (*plVar2 == 0) goto LAB_01c5ac8c;
          lVar11 = FUN_01e8a9f8(*plVar2,*(undefined8 *)StringLiteral_162);
          plVar13 = param_4 + 0xd;
          *plVar13 = lVar11;
          thunk_FUN_01b4f09c(plVar13,lVar11);
          lVar11 = *plVar13;
          if (*(int *)(*plVar14 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          uVar8 = FUN_0391f968(lVar11,0,0);
          if ((uVar8 & 1) != 0) {
            *(undefined1 *)((long)param_4 + 0x16c) = 1;
            if (param_4[0xe] == 0) goto LAB_01c5ac8c;
            lVar11 = FUN_0391fab4(param_4[0xe],0);
            if (((*plVar13 == 0) || (lVar29 = FUN_0391c27c(*plVar13,0), lVar29 == 0)) ||
               (FUN_03928d34(lVar29,0), lVar11 == 0)) goto LAB_01c5ac8c;
            FUN_03928dd4(lVar11,0);
            if (param_4[0xe] == 0) goto LAB_01c5ac8c;
            lVar11 = FUN_0391fab4(param_4[0xe],0);
            if (((*plVar13 == 0) || (lVar29 = FUN_0391c27c(*plVar13,0), lVar29 == 0)) ||
               (FUN_039274a0(lVar29,0), lVar11 == 0)) goto LAB_01c5ac8c;
            FUN_03928f54(lVar11,0);
          }
          lVar11 = *plVar1;
          if (lVar11 == 0) goto LAB_01c5ac8c;
          if (*(uint *)(lVar11 + 0x18) <= uVar15) goto LAB_01c5ac90;
          uVar17 = *(undefined4 *)(lVar11 + lVar12);
          param_4[0x22] = *(long *)((undefined4 *)(lVar11 + lVar12) + -2);
          *(undefined4 *)(param_4 + 0x23) = uVar17;
        }
LAB_01c5aadc:
        lVar12 = *plVar2;
        if (*(int *)(*plVar14 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        bVar7 = FUN_0391f968(lVar12,0,0);
        *(byte *)((long)param_4 + 0xf9) = bVar7 & 1;
        if (((bVar7 & 1) != 0) && (*(char *)((long)param_4 + 0x16c) == '\0')) {
          if (*(float *)((long)param_4 + 0xac) < *(float *)((long)param_4 + 0x11c)) {
            *(undefined1 *)((long)param_4 + 0xf9) = 0;
          }
          if (*plVar2 == 0) goto LAB_01c5ac8c;
          uVar9 = FUN_01e8a9f8(*plVar2,*(undefined8 *)
                                        Field_<PrivateImplementationDetails>_215E3E0B11A214B3198654E87B3D953AC8FB1ABC7045AF841A7C4892624BDE49
                              );
          if (*(int *)(*plVar14 + 0xe0) == 0) {
            thunk_FUN_01ac7298(*plVar14);
          }
          uVar8 = FUN_0391f968(uVar9,0,0);
          if ((uVar8 & 1) != 0) {
            *(undefined1 *)((long)param_4 + 0xf9) = 0;
          }
          if (*plVar2 == 0) goto LAB_01c5ac8c;
          uVar9 = FUN_01e8a9f8(*plVar2,*(undefined8 *)StringLiteral_161);
          if (*(int *)(*plVar14 + 0xe0) == 0) {
            thunk_FUN_01ac7298(*plVar14);
          }
          uVar8 = FUN_0391f968(uVar9,0,0);
          if ((uVar8 & 1) != 0) {
            *(undefined1 *)((long)param_4 + 0xf9) = 0;
          }
          uVar8 = (**(code **)(*param_4 + 0x188))(param_4,*(undefined8 *)(*param_4 + 400));
          if ((uVar8 & 1) == 0) {
            *(undefined1 *)((long)param_4 + 0xf9) = 0;
          }
        }
        if (param_4[4] != 0) {
          FUN_038fcf60(param_4[4],(int)param_4[0x2d],0);
          if (0 < (int)param_4[0x2d]) {
            lVar12 = 0;
            uVar8 = 0;
            do {
              lVar11 = param_4[0x2a];
              if (lVar11 == 0) goto LAB_01c5ac8c;
              if (*(uint *)(lVar11 + 0x18) <= uVar8) goto LAB_01c5ac90;
              if (param_4[4] == 0) goto LAB_01c5ac8c;
              lVar11 = lVar11 + lVar12;
              FUN_038fcfa4(*(undefined4 *)(lVar11 + 0x20),*(undefined4 *)(lVar11 + 0x24),
                           *(undefined4 *)(lVar11 + 0x28),param_4[4],uVar8 & 0xffffffff,0);
              uVar8 = uVar8 + 1;
              lVar12 = lVar12 + 0xc;
            } while ((long)uVar8 < (long)(int)param_4[0x2d]);
          }
          if (*(char *)((long)param_4 + 0xf9) == '\0') {
            iVar10 = *(int *)((long)param_4 + 0xfc) + 1;
          }
          else {
            iVar10 = 0;
          }
          *(int *)((long)param_4 + 0xfc) = iVar10;
          return;
        }
      }
    }
  }
LAB_01c5ac8c:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


