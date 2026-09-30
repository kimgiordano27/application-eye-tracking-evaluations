/*
FUNCTION_NAME: FUN_032901b0
ENTRY_POINT: 032901b0
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03290920) */

void FUN_032901b0(undefined1 param_1 [16],ulong param_2,ulong param_3,long param_4)

{
  long lVar1;
  long lVar2;
  int iVar3;
  char cVar4;
  undefined *puVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  float *pfVar11;
  undefined1 uVar12;
  undefined8 uVar13;
  char *pcVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined4 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  ulong local_e0;
  undefined8 uStack_d8;
  undefined4 local_d0;
  ulong local_c0;
  undefined8 uStack_b8;
  ulong local_b0;
  undefined8 uStack_a8;
  undefined4 local_a0;
  ulong local_90;
  undefined8 uStack_88;
  
  if ((DAT_03ff5745 & 1) == 0) {
    thunk_FUN_01ad9084(PTR_DAT_03d85cc8);
    thunk_FUN_01ad9084(Method_SaveSystem_<>c__DisplayClass10_0_<LoadItems>b__0__);
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_5__);
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_25__);
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_26__);
    thunk_FUN_01ad9084(PTR_DAT_03d85cd0);
    thunk_FUN_01ad9084(StringLiteral_4434);
    thunk_FUN_01ad9084(PTR_DAT_03d7f9a8);
    thunk_FUN_01ad9084(PTR_DAT_03d85cd8);
    thunk_FUN_01ad9084(
                      Method_System_Net_Security_SslStream_<>c__DisplayClass21_0_<SetAndVerifySelectionCallback>b__0__
                      );
    thunk_FUN_01ad9084(PTR_DAT_03d85ce0);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ff5745 = 1;
  }
  local_90 = 0;
  uStack_88 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_a0 = 0;
  uVar9 = FUN_03290174(param_4);
  fVar21 = (float)param_3;
  fVar20 = (float)param_2;
  if ((uVar9 & 1) != 0) {
    FUN_0329099c(param_4);
    return;
  }
  lVar17 = *(long *)(param_4 + 0xc0);
  if (lVar17 != 0) {
    uVar7 = *(uint *)(lVar17 + 0x18);
    if (0 < (int)uVar7) {
      uVar8 = 0;
      do {
        if (uVar7 <= uVar8) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48180();
        }
        lVar10 = lVar17 + (long)(int)uVar8 * 0x38;
        lVar16 = *(long *)(lVar10 + 0x20);
        if (lVar16 == 0) goto LAB_03290994;
        lVar1 = *(long *)(lVar10 + 0x28);
        lVar2 = *(long *)(lVar10 + 0x30);
        lVar15 = *(long *)(lVar10 + 0x38);
        iVar3 = *(int *)(lVar10 + 0x40);
        FUN_03928fd8(lVar16,0);
        if (((lVar1 == 0) || (FUN_03929060(lVar1,0), lVar2 == 0)) ||
           (FUN_03928fd8(lVar2,0), lVar15 == 0)) goto LAB_03290994;
        FUN_03929060(lVar15,0);
        if (iVar3 == 0) {
          FUN_039274a0(lVar16,0);
          FUN_03928f54(lVar1,0);
          FUN_039274a0(lVar2,0);
          FUN_03928f54(lVar15,0);
          if ((*(long *)(param_4 + 0x58) == 0) || (*(long *)(param_4 + 0x88) == 0))
          goto LAB_03290994;
          uVar18 = *(undefined4 *)(*(long *)(param_4 + 0x88) + 200);
          param_2 = (ulong)*(uint *)(*(long *)(param_4 + 0x58) + 200);
          FUN_039293f4(uVar18,uVar18,uVar18,lVar15,0);
          param_3 = param_2;
          FUN_039293f4(param_2,param_2,param_2,lVar1,0);
        }
        fVar21 = (float)param_3;
        fVar20 = (float)param_2;
        uVar7 = *(uint *)(lVar17 + 0x18);
        uVar8 = uVar8 + 1;
      } while ((int)uVar8 < (int)uVar7);
    }
    if (*(long *)(param_4 + 0x88) != 0) {
      lVar10 = *(long *)(param_4 + 0x40);
      lVar17 = FUN_0391c27c(*(long *)(param_4 + 0x88),0);
      if ((lVar17 != 0) && (FUN_03928d34(lVar17,0), lVar10 != 0)) {
        FUN_03928dd4(lVar10,0);
        if (*(long *)(param_4 + 0x88) != 0) {
          lVar10 = *(long *)(param_4 + 0x40);
          lVar17 = FUN_0391c27c(*(long *)(param_4 + 0x88),0);
          if ((lVar17 != 0) && (FUN_039274a0(lVar17,0), lVar10 != 0)) {
            FUN_03928f54(lVar10,0);
            if (*(long *)(param_4 + 0x58) != 0) {
              lVar10 = *(long *)(param_4 + 0x38);
              lVar17 = FUN_0391c27c(*(long *)(param_4 + 0x58),0);
              if ((lVar17 != 0) && (FUN_03928d34(lVar17,0), lVar10 != 0)) {
                FUN_03928dd4(lVar10,0);
                if (*(long *)(param_4 + 0x58) != 0) {
                  lVar10 = *(long *)(param_4 + 0x38);
                  lVar17 = FUN_0391c27c(*(long *)(param_4 + 0x58),0);
                  if ((lVar17 != 0) && (FUN_039274a0(lVar17,0), lVar10 != 0)) {
                    FUN_03928f54(lVar10,0);
                    uVar22 = FUN_03290a88(param_4,*(undefined8 *)(param_4 + 0x60));
                    uVar23 = FUN_03290a88(param_4,*(undefined8 *)(param_4 + 0x90));
                    bVar6 = FUN_03290d58(uVar22);
                    *(byte *)(param_4 + 0xb9) = bVar6 & 1;
                    bVar6 = FUN_03290d58(uVar23);
                    *(byte *)(param_4 + 0xb8) = bVar6 & 1;
                    if ((bVar6 & 1) == 0) {
                      uVar12 = *(undefined1 *)(param_4 + 0xb9);
                    }
                    else {
                      uVar12 = 1;
                    }
                    if (*(long *)(param_4 + 0x48) != 0) {
                      *(undefined1 *)(*(long *)(param_4 + 0x48) + 0x138) = uVar12;
                      uVar7 = FUN_03290dc4(uVar22);
                      uVar8 = FUN_03290dc4(uVar23);
                      FUN_03290e30(param_4,uVar7 & 1,uVar8 & 1);
                      if ((*(long *)(param_4 + 0x48) != 0) && (*(long *)(param_4 + 0x38) != 0)) {
                        iVar3 = *(int *)(*(long *)(param_4 + 0x48) + 0x80);
                        lVar17 = FUN_0391c2b8(*(long *)(param_4 + 0x38),0);
                        if (iVar3 == 0) {
                          if (lVar17 == 0) goto LAB_03290994;
                          FUN_0391fb70(lVar17,0,0);
                          if ((*(long *)(param_4 + 0x40) == 0) ||
                             (lVar17 = FUN_0391c2b8(*(long *)(param_4 + 0x40),0), lVar17 == 0))
                          goto LAB_03290994;
                          uVar12 = 0;
                        }
                        else {
                          if (lVar17 == 0) goto LAB_03290994;
                          FUN_0391fb70(lVar17,*(undefined1 *)(param_4 + 0xb9),0);
                          if ((*(long *)(param_4 + 0x40) == 0) ||
                             (lVar17 = FUN_0391c2b8(*(long *)(param_4 + 0x40),0), lVar17 == 0))
                          goto LAB_03290994;
                          uVar12 = *(undefined1 *)(param_4 + 0xb8);
                        }
                        FUN_0391fb70(lVar17,uVar12,0);
                        lVar17 = *(long *)(param_4 + 0x48);
                        if (lVar17 != 0) {
                          if (*(long *)(lVar17 + 0x130) == 0) {
                            uStack_88 = 0;
                            local_90 = 0;
                          }
                          else {
                            FUN_03928d34(*(long *)(lVar17 + 0x130),0);
                            local_e0 = 0;
                            uStack_d8 = 0;
                            FUN_02d0b20c(&local_e0,
                                         *(undefined8 *)
                                          Method_SaveSystem_<>c__DisplayClass10_0_<LoadItems>b__0__)
                            ;
                            uStack_b8 = uStack_d8;
                            local_c0 = local_e0;
                            lVar17 = *(long *)(param_4 + 0x48);
                            uStack_88 = uStack_d8;
                            local_90 = local_e0;
                            if (lVar17 == 0) goto LAB_03290994;
                          }
                          local_c0 = local_90;
                          uStack_b8 = uStack_88;
                          if (*(long *)(lVar17 + 0x130) == 0) {
                            local_a0 = 0;
                            uStack_a8 = 0;
                            local_b0 = 0;
                          }
                          else {
                            FUN_039274a0(*(long *)(lVar17 + 0x130),0);
                            local_f8 = 0;
                            uStack_f0 = 0;
                            local_e8 = 0;
                            FUN_02d084c0(&local_f8,
                                         *(undefined8 *)
                                          Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_5__
                                        );
                            local_d0 = local_e8;
                            uStack_d8 = uStack_f0;
                            local_e0 = local_f8;
                            lVar17 = *(long *)(param_4 + 0x48);
                            uStack_a8 = uStack_f0;
                            local_b0 = local_f8;
                            local_a0 = local_e8;
                            if (lVar17 == 0) goto LAB_03290994;
                          }
                          uVar13 = *(undefined8 *)(lVar17 + 0x130);
                          local_e0 = local_b0;
                          uStack_d8 = uStack_a8;
                          local_d0 = local_a0;
                          if (*(int *)(*(long *)
                                        Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                                      + 0xe0) == 0) {
                            thunk_FUN_01ac7298();
                          }
                          uVar9 = FUN_03922f24(uVar13,0,0);
                          if ((uVar9 & 1) == 0) {
                            if ((*(long *)(param_4 + 0x48) == 0) ||
                               (lVar17 = *(long *)(*(long *)(param_4 + 0x48) + 0x130), lVar17 == 0))
                            goto LAB_03290994;
                            fVar24 = (float)FUN_039291ac(lVar17,0);
                            fVar24 = fVar24 * DAT_00b554f4;
                            fVar25 = fVar20 * DAT_00b554f4;
                            fVar26 = fVar21 * DAT_00b554f4;
                          }
                          else {
                            if (DAT_03fed257 == '\0') {
                              thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
                              DAT_03fed257 = '\x01';
                            }
                            pfVar11 = *(float **)
                                       (*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ +
                                       0xb8);
                            fVar24 = *pfVar11;
                            fVar25 = pfVar11[1];
                            fVar26 = pfVar11[2];
                          }
                          lVar17 = *(long *)(param_4 + 200);
                          uVar18 = *(undefined4 *)(param_4 + 0xd0);
                          if ((char)local_90 == '\0') {
                            if (DAT_03fed257 == '\0') {
                              thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
                              DAT_03fed257 = '\x01';
                            }
                            pfVar11 = *(float **)
                                       (*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ +
                                       0xb8);
                            fVar24 = *pfVar11;
                            fVar25 = pfVar11[1];
                            fVar26 = pfVar11[2];
                          }
                          else {
                            fVar19 = (float)FUN_02d0b228(&local_90,*(undefined8 *)PTR_DAT_03d7f9a8);
                            fVar24 = fVar24 + fVar19;
                            fVar25 = fVar25 + fVar20;
                            fVar26 = fVar26 + fVar21;
                          }
                          if (lVar17 != 0) {
                            thunk_FUN_038fff54(fVar24,fVar25,fVar26,0,lVar17,uVar18,0);
                            lVar17 = *(long *)(param_4 + 200);
                            uVar18 = *(undefined4 *)(param_4 + 0xd4);
                            if ((char)local_b0 == '\0') {
                              if (DAT_03fed257 == '\0') {
                                thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__)
                                ;
                                DAT_03fed257 = '\x01';
                              }
                              uVar9 = (ulong)**(uint **)(*(long *)
                                                  Method_Mono_Security_PKCS7_EncryptedData__ctor__ +
                                                  0xb8);
                            }
                            else {
                              FUN_02d084dc(&local_b0,*(undefined8 *)StringLiteral_4434);
                              fVar20 = (float)FUN_039145fc(0);
                              uVar9 = FUN_03914cb4(fVar20 * DAT_00b556e8,fVar25 * DAT_00b556e8,
                                                   fVar26 * DAT_00b556e8,0);
                            }
                            if (lVar17 != 0) {
                              thunk_FUN_038fff54(uVar9,lVar17,uVar18,0);
                              lVar17 = *(long *)(param_4 + 0x48);
                              if ((lVar17 != 0) && (*(long *)(param_4 + 200) != 0)) {
                                thunk_FUN_038fff54(*(float *)(lVar17 + 0x38) * DAT_00b5540c,
                                                   DAT_00b55290,
                                                   *(float *)(lVar17 + 0x40) * DAT_00b5521c,
                                                   0x3f800000,*(long *)(param_4 + 200),
                                                   *(undefined4 *)(param_4 + 0xd8),0);
                                puVar5 = PTR_DAT_03d85cd8;
                                pcVar14 = (char *)(param_4 + 0xba);
                                if ((*pcVar14 == '\0') ||
                                   ((cVar4 = *(char *)(param_4 + 0xb9),
                                    uVar9 = FUN_02d0ed64(pcVar14,*(undefined8 *)PTR_DAT_03d85cd8),
                                    (cVar4 != '\0') == ((uVar9 & 1) == 0) ||
                                    (cVar4 = *(char *)(param_4 + 0xb8),
                                    uVar9 = FUN_02d0ed64(pcVar14,*(undefined8 *)puVar5),
                                    (cVar4 != '\0') == ((uVar9 & 0x100) == 0))))) {
                                  local_f8 = local_f8 & 0xffffffffff000000;
                                  FUN_02d0ed4c(&local_f8,
                                               (((ulong)*(ushort *)(param_4 + 0xb8) & 0xff00) <<
                                                0x28 | (ulong)*(ushort *)(param_4 + 0xb8) << 0x38)
                                               >> 0x30,*(undefined8 *)PTR_DAT_03d85cc8);
                                  *(undefined1 *)(param_4 + 0xbc) = local_f8._2_1_;
                                  *(undefined2 *)pcVar14 = (undefined2)local_f8;
                                  if (*(long *)(param_4 + 0x48) == 0) goto LAB_03290994;
                                  FUN_0328de68();
                                }
                                puVar5 = PTR_DAT_03d85ce0;
                                if ((*(char *)(param_4 + 0xb9) != '\0') ||
                                   (*(char *)(param_4 + 0xb8) != '\0')) {
                                  lVar17 = *(long *)PTR_DAT_03d85ce0;
                                  if (*(int *)(lVar17 + 0xe0) == 0) {
                                    thunk_FUN_01ac7298();
                                    lVar17 = *(long *)puVar5;
                                  }
                                  fVar20 = (*(float **)(lVar17 + 0xb8))[1];
                                  fVar21 = fVar20 - **(float **)(lVar17 + 0xb8);
                                  fVar24 = (fVar20 - (float)uVar22) / fVar21;
                                  fVar21 = (fVar20 - (float)uVar23) / fVar21;
                                  fVar20 = fVar24;
                                  if (1.0 < fVar24) {
                                    fVar20 = 1.0;
                                  }
                                  if (fVar24 < 0.0) {
                                    fVar20 = 0.0;
                                  }
                                  if (fVar21 < 0.0) {
                                    fVar21 = 0.0;
                                  }
                                  if ((*(long *)(param_4 + 0x48) == 0) ||
                                     (lVar17 = *(long *)(*(long *)(param_4 + 0x48) + 0xa8),
                                     lVar17 == 0)) goto LAB_03290994;
                                  uVar18 = *(undefined4 *)(lVar17 + 0x124);
                                  if (*(int *)(*(long *)
                                                Method_System_Net_Security_SslStream_<>c__DisplayClass21_0_<SetAndVerifySelectionCallback>b__0__
                                              + 0xe0) == 0) {
                                    thunk_FUN_01ac7298();
                                  }
                                  System_Linq_Expressions_Interpreter_NotInstruction_NotUInt16___ctor
                                            (fVar20,fVar21,uVar18,0);
                                }
                                return;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_03290994:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


