/*
FUNCTION_NAME: FUN_02e22294
ENTRY_POINT: 02e22294
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_8;validity_or_gating_hits_21;telemetry_or_network_hits_4
*/


void FUN_02e22294(undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 long param_5)

{
  byte bVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  uint uVar14;
  ulong uVar15;
  undefined4 *puVar16;
  uint uVar17;
  long *plVar18;
  undefined4 uVar19;
  
  if ((DAT_03ff0186 & 1) == 0) {
    thunk_FUN_01ad9084(Method_System_Threading_ReaderWriterLockSlim_TimeoutTracker__ctor__);
    thunk_FUN_01ad9084(StringLiteral_4678);
    thunk_FUN_01ad9084(StringLiteral_4679);
    thunk_FUN_01ad9084(StringLiteral_4680);
    thunk_FUN_01ad9084(StringLiteral_4681);
    thunk_FUN_01ad9084(StringLiteral_4682);
    thunk_FUN_01ad9084(StringLiteral_4683);
    thunk_FUN_01ad9084(
                      Field_<PrivateImplementationDetails>_F64672279501045F69660C6F291872A240A4866CFE713DD23D7B48E8FA32F43D
                      );
    thunk_FUN_01ad9084(StringLiteral_4684);
    thunk_FUN_01ad9084(StringLiteral_4685);
    thunk_FUN_01ad9084(StringLiteral_4686);
    thunk_FUN_01ad9084(StringLiteral_4687);
    thunk_FUN_01ad9084(StringLiteral_4565);
    thunk_FUN_01ad9084(StringLiteral_160);
    thunk_FUN_01ad9084(
                      Field_<PrivateImplementationDetails>_67484346CA8C1305358877892C919EBEEBDDA56467A35AB2E12D32E0ACC1D17A
                      );
    thunk_FUN_01ad9084(StringLiteral_3966);
    thunk_FUN_01ad9084(StringLiteral_4688);
    thunk_FUN_01ad9084(StringLiteral_4689);
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_32__);
    thunk_FUN_01ad9084(StringLiteral_4690);
    thunk_FUN_01ad9084(StringLiteral_4691);
    thunk_FUN_01ad9084(StringLiteral_4692);
    thunk_FUN_01ad9084(StringLiteral_4693);
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_45__);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_20__);
    thunk_FUN_01ad9084(StringLiteral_4694);
    thunk_FUN_01ad9084(StringLiteral_4695);
    DAT_03ff0186 = 1;
  }
  puVar3 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  FUN_02e1a7b8(param_5);
  if (*(char *)(param_5 + 0xc9) != '\0') {
    uVar9 = FUN_0391c27c(param_5,0);
    FUN_02deb308(uVar9,1,0,0);
  }
  uVar9 = *(undefined8 *)(param_5 + 0x148);
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar10 = FUN_03923030(uVar9,0);
  if ((uVar10 & 1) == 0) {
    lVar11 = FUN_0391c27c(param_5,0);
    if (lVar11 == 0) goto LAB_02e22f2c;
    uVar9 = FUN_0392a5dc(lVar11,0);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01ac7298(*(long *)puVar3);
    }
    uVar10 = FUN_03923030(uVar9,0);
    if ((uVar10 & 1) != 0) {
      lVar11 = FUN_0391c27c(param_5,0);
      if ((lVar11 == 0) || (lVar11 = FUN_0392a5dc(lVar11,0), lVar11 == 0)) goto LAB_02e22f2c;
      uVar9 = FUN_01e8ac5c(lVar11,*(undefined8 *)StringLiteral_4685);
      *(undefined8 *)(param_5 + 0x148) = uVar9;
      thunk_FUN_01b4f09c((undefined8 *)(param_5 + 0x148),uVar9);
    }
  }
  uVar9 = FUN_01e8a9f8(param_5,*(undefined8 *)StringLiteral_4687);
  *(undefined8 *)(param_5 + 0x220) = uVar9;
  thunk_FUN_01b4f09c(param_5 + 0x220);
  uVar9 = *(undefined8 *)(param_5 + 0x128);
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar10 = FUN_03923030(uVar9,0);
  if ((uVar10 & 1) == 0) {
    lVar11 = FUN_0391c27c(param_5,0);
    if (lVar11 == 0) goto LAB_02e22f2c;
    uVar9 = FUN_0392a5dc(lVar11,0);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01ac7298(*(long *)puVar3);
    }
    uVar10 = FUN_03923030(uVar9,0);
    if ((uVar10 & 1) != 0) {
      lVar11 = FUN_0391c27c(param_5,0);
      if ((lVar11 == 0) || (lVar11 = FUN_0392a5dc(lVar11,0), lVar11 == 0)) goto LAB_02e22f2c;
      uVar9 = FUN_01e8ac5c(lVar11,*(undefined8 *)
                                   Field_<PrivateImplementationDetails>_F64672279501045F69660C6F291872A240A4866CFE713DD23D7B48E8FA32F43D
                          );
      *(undefined8 *)(param_5 + 0x128) = uVar9;
      thunk_FUN_01b4f09c((undefined8 *)(param_5 + 0x128),uVar9);
    }
  }
  uVar9 = *(undefined8 *)(param_5 + 0x138);
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar10 = FUN_03923030(uVar9,0);
  if ((uVar10 & 1) == 0) {
    uVar9 = FUN_01e8ac5c(param_5,*(undefined8 *)StringLiteral_4680);
    *(undefined8 *)(param_5 + 0x138) = uVar9;
    thunk_FUN_01b4f09c(param_5 + 0x138,uVar9);
  }
  uVar9 = *(undefined8 *)(param_5 + 0x118);
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar10 = FUN_03923030(uVar9,0);
  if ((uVar10 & 1) == 0) {
    uVar9 = *(undefined8 *)(param_5 + 0x180);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar10 = FUN_03923030(uVar9,0);
    lVar11 = param_5;
    if (((uVar10 & 1) != 0) && (lVar11 = *(long *)(param_5 + 0x180), lVar11 == 0))
    goto LAB_02e22f2c;
    uVar9 = FUN_01e8ac5c(lVar11,*(undefined8 *)StringLiteral_4681);
    *(undefined8 *)(param_5 + 0x118) = uVar9;
    thunk_FUN_01b4f09c();
  }
  uVar9 = *(undefined8 *)(param_5 + 0x130);
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  plVar18 = (long *)(param_5 + 0x130);
  uVar10 = FUN_03923030(uVar9,0);
  if ((uVar10 & 1) == 0) {
    uVar9 = *(undefined8 *)(param_5 + 0x180);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar10 = FUN_03923030(uVar9,0);
    lVar11 = param_5;
    if (((uVar10 & 1) != 0) && (lVar11 = *(long *)(param_5 + 0x180), lVar11 == 0))
    goto LAB_02e22f2c;
    lVar11 = FUN_01e8ac5c(lVar11,*(undefined8 *)StringLiteral_4683);
    *plVar18 = lVar11;
    thunk_FUN_01b4f09c(plVar18,lVar11);
  }
  uVar9 = *(undefined8 *)(param_5 + 0x120);
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar10 = FUN_03923030(uVar9,0);
  if ((uVar10 & 1) == 0) {
    uVar9 = FUN_01e8ac5c(param_5,*(undefined8 *)StringLiteral_4682);
    *(undefined8 *)(param_5 + 0x120) = uVar9;
    thunk_FUN_01b4f09c(param_5 + 0x120,uVar9);
  }
  if (*plVar18 == 0) goto LAB_02e22f2c;
  *(undefined8 *)(param_5 + 0x370) = *(undefined8 *)(*plVar18 + 0x30);
  thunk_FUN_01b4f09c(param_5 + 0x370);
  uVar9 = *(undefined8 *)(param_5 + 0x180);
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar10 = FUN_03923030(uVar9,0);
  if ((uVar10 & 1) != 0) {
    if (*(long *)(param_5 + 0x180) == 0) goto LAB_02e22f2c;
    uVar9 = FUN_03928c2c(*(long *)(param_5 + 0x180),0);
    *(undefined8 *)(param_5 + 0x228) = uVar9;
    thunk_FUN_01b4f09c(param_5 + 0x228);
    if (*(long *)(param_5 + 0x180) == 0) goto LAB_02e22f2c;
    uVar19 = FUN_03928280(*(long *)(param_5 + 0x180),0);
    *(undefined4 *)(param_5 + 0x230) = uVar19;
    *(undefined4 *)(param_5 + 0x234) = param_2;
    *(undefined4 *)(param_5 + 0x238) = param_3;
    if (*(long *)(param_5 + 0x180) == 0) goto LAB_02e22f2c;
    uVar19 = FUN_03928fd8(*(long *)(param_5 + 0x180),0);
    *(undefined4 *)(param_5 + 0x23c) = uVar19;
    *(undefined4 *)(param_5 + 0x240) = param_2;
    *(undefined4 *)(param_5 + 0x244) = param_3;
    *(undefined4 *)(param_5 + 0x248) = param_4;
    if (*(long *)(param_5 + 0x180) == 0) goto LAB_02e22f2c;
    uVar19 = FUN_03929354(*(long *)(param_5 + 0x180),0);
    *(undefined4 *)(param_5 + 0x24c) = uVar19;
    *(undefined4 *)(param_5 + 0x250) = param_2;
    *(undefined4 *)(param_5 + 0x254) = param_3;
    if (*(char *)(param_5 + 200) == '\0') {
      if (*(char *)(param_5 + 0xf0) != '\0') {
        if ((*(long *)(param_5 + 0x180) == 0) ||
           (lVar11 = FUN_01e8b468(*(long *)(param_5 + 0x180),
                                  *(undefined8 *)
                                   Field_<PrivateImplementationDetails>_67484346CA8C1305358877892C919EBEEBDDA56467A35AB2E12D32E0ACC1D17A
                                 ), lVar11 == 0)) goto LAB_02e22f2c;
        if (*(long *)(lVar11 + 0x18) == 0) goto LAB_02e22818;
        if (*(char *)(param_5 + 0xf0) != '\0') {
          if (*(long *)(param_5 + 0x180) == 0) goto LAB_02e22f2c;
          uVar9 = FUN_0391c2b8(*(long *)(param_5 + 0x180),0);
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_01ac7298(*(long *)puVar3);
          }
          lVar11 = FUN_01f25754(uVar9,*(undefined8 *)
                                       Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_45__);
          if ((lVar11 == 0) ||
             (lVar13 = FUN_01ed7d50(lVar11,*(undefined8 *)StringLiteral_4689), lVar13 == 0))
          goto LAB_02e22f2c;
          uVar14 = *(uint *)(lVar13 + 0x18);
          if (0 < (int)uVar14) {
            uVar17 = 0;
            do {
              if (uVar14 <= uVar17) goto LAB_02e22f30;
              lVar12 = *(long *)(lVar13 + (long)(int)uVar17 * 8 + 0x20);
              if (lVar12 == 0) goto LAB_02e22f2c;
              uVar9 = FUN_0391c2b8(lVar12,0);
              if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                thunk_FUN_01ac7298(*(long *)puVar3);
              }
              FUN_03923a90(uVar9,0);
              uVar14 = *(uint *)(lVar13 + 0x18);
              uVar17 = uVar17 + 1;
            } while ((int)uVar17 < (int)uVar14);
          }
          lVar13 = FUN_01ed7d50(lVar11,*(undefined8 *)StringLiteral_4688);
          puVar8 = StringLiteral_4693;
          puVar7 = StringLiteral_4692;
          puVar6 = StringLiteral_4690;
          puVar5 = StringLiteral_4678;
          puVar4 = Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_20__;
          if (lVar13 == 0) goto LAB_02e22f2c;
          if (0 < (int)*(ulong *)(lVar13 + 0x18)) {
            uVar10 = 0;
            uVar15 = *(ulong *)(lVar13 + 0x18) & 0xffffffff;
            do {
              if (uVar15 <= uVar10) goto LAB_02e22f30;
              plVar18 = *(long **)(lVar13 + 0x20 + uVar10 * 8);
              if (plVar18 == (long *)0x0) {
LAB_02e22a38:
                if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                  thunk_FUN_01ac7298();
                }
                FUN_03923a90(plVar18,0);
              }
              else {
                lVar12 = *plVar18;
                bVar1 = *(byte *)(lVar12 + 0x130);
                bVar2 = *(byte *)(*(long *)puVar5 + 0x130);
                if ((bVar1 < bVar2) ||
                   (*(long *)(*(long *)(lVar12 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)puVar5))
                {
                  bVar2 = *(byte *)(*(long *)puVar8 + 0x130);
                  if ((bVar1 < bVar2) ||
                     (*(long *)(*(long *)(lVar12 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)puVar8)
                     ) {
                    bVar2 = *(byte *)(*(long *)puVar6 + 0x130);
                    if ((bVar1 < bVar2) ||
                       (*(long *)(*(long *)(lVar12 + 200) + (ulong)bVar2 * 8 + -8) !=
                        *(long *)puVar6)) {
                      bVar2 = *(byte *)(*(long *)puVar4 + 0x130);
                      if ((bVar1 < bVar2) ||
                         (*(long *)(*(long *)(lVar12 + 200) + (ulong)bVar2 * 8 + -8) !=
                          *(long *)puVar4)) {
                        bVar2 = *(byte *)(*(long *)puVar7 + 0x130);
                        if ((bVar1 < bVar2) ||
                           (*(long *)(*(long *)(lVar12 + 200) + (ulong)bVar2 * 8 + -8) !=
                            *(long *)puVar7)) goto LAB_02e22a38;
                      }
                    }
                  }
                }
              }
              uVar15 = (ulong)*(uint *)(lVar13 + 0x18);
              uVar10 = uVar10 + 1;
            } while ((long)uVar10 < (long)(int)*(uint *)(lVar13 + 0x18));
          }
          if ((*(long *)(param_5 + 0x180) == 0) ||
             (lVar13 = FUN_01e8b468(*(long *)(param_5 + 0x180),
                                    *(undefined8 *)
                                     Field_<PrivateImplementationDetails>_67484346CA8C1305358877892C919EBEEBDDA56467A35AB2E12D32E0ACC1D17A
                                   ), lVar13 == 0)) goto LAB_02e22f2c;
          uVar14 = *(uint *)(lVar13 + 0x18);
          if (0 < (int)uVar14) {
            uVar17 = 0;
            do {
              if (uVar14 <= uVar17) {
LAB_02e22f30:
                    /* WARNING: Subroutine does not return */
                FUN_01b48180();
              }
              lVar12 = *(long *)(lVar13 + (long)(int)uVar17 * 8 + 0x20);
              if (lVar12 == 0) goto LAB_02e22f2c;
              uVar10 = FUN_0395b3d0(lVar12,0);
              if ((uVar10 & 1) == 0) {
                if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                  thunk_FUN_01ac7298();
                }
                FUN_03923a90(lVar12,0);
              }
              uVar14 = *(uint *)(lVar13 + 0x18);
              uVar17 = uVar17 + 1;
            } while ((int)uVar17 < (int)uVar14);
          }
          uVar9 = FUN_0391fab4(lVar11,0);
          *(undefined8 *)(param_5 + 800) = uVar9;
          thunk_FUN_01b4f09c(param_5 + 800);
          FUN_02e22f34(param_5,*(undefined8 *)(param_5 + 800));
          if (*(long *)(param_5 + 800) == 0) goto LAB_02e22f2c;
          uVar9 = FUN_01e8ac5c(*(long *)(param_5 + 800),*(undefined8 *)StringLiteral_4681);
          *(undefined8 *)(param_5 + 0x328) = uVar9;
          thunk_FUN_01b4f09c(param_5 + 0x328);
          if (*(long *)(param_5 + 800) == 0) goto LAB_02e22f2c;
          uVar9 = FUN_01e8a9f8(*(long *)(param_5 + 800),*(undefined8 *)StringLiteral_4565);
          *(undefined8 *)(param_5 + 0x378) = uVar9;
          thunk_FUN_01b4f09c(param_5 + 0x378);
        }
      }
    }
    else if (*(char *)(param_5 + 0xf0) != '\0') {
LAB_02e22818:
      *(undefined1 *)(param_5 + 0xf0) = 0;
    }
    FUN_02e23010(param_5);
    puVar4 = Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_32__;
    lVar11 = thunk_FUN_01afaadc(*(undefined8 *)
                                 Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_32__);
    FUN_0391fe00(lVar11,*(undefined8 *)StringLiteral_4695,0);
    if (lVar11 == 0) goto LAB_02e22f2c;
    lVar13 = FUN_0391fab4(lVar11,0);
    uVar9 = FUN_0391c27c(param_5,0);
    if (lVar13 == 0) goto LAB_02e22f2c;
    FUN_039294c8(lVar13,uVar9,0);
    lVar13 = FUN_0391fab4(lVar11,0);
    if (lVar13 == 0) goto LAB_02e22f2c;
    FUN_039282dc(*(undefined4 *)(param_5 + 0x230),*(undefined4 *)(param_5 + 0x234),
                 *(undefined4 *)(param_5 + 0x238),lVar13,0);
    lVar13 = FUN_0391fab4(lVar11,0);
    if (lVar13 == 0) goto LAB_02e22f2c;
    FUN_03929060(*(undefined4 *)(param_5 + 0x23c),*(undefined4 *)(param_5 + 0x240),
                 *(undefined4 *)(param_5 + 0x244),*(undefined4 *)(param_5 + 0x248),lVar13,0);
    uVar9 = FUN_0391fab4(lVar11,0);
    *(undefined8 *)(param_5 + 0x338) = uVar9;
    thunk_FUN_01b4f09c((undefined8 *)(param_5 + 0x338),uVar9);
    lVar11 = thunk_FUN_01afaadc(*(undefined8 *)puVar4);
    FUN_0391fe00(lVar11,*(undefined8 *)StringLiteral_4694,0);
    if ((lVar11 == 0) || (lVar13 = FUN_0391fab4(lVar11,0), lVar13 == 0)) goto LAB_02e22f2c;
    FUN_039294c8(lVar13,*(undefined8 *)(param_5 + 0x338),0);
    lVar13 = FUN_0391fab4(lVar11,0);
    if (DAT_03fed257 == '\0') {
      thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
      DAT_03fed257 = '\x01';
    }
    if (lVar13 == 0) goto LAB_02e22f2c;
    puVar16 = *(undefined4 **)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
    FUN_039282dc(*puVar16,puVar16[1],puVar16[2],lVar13,0);
    lVar13 = FUN_0391fab4(lVar11,0);
    if (DAT_03fed256 == '\0') {
      thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__);
      DAT_03fed256 = '\x01';
    }
    if (lVar13 == 0) goto LAB_02e22f2c;
    puVar16 = *(undefined4 **)
               (*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__ +
               0xb8);
    FUN_03929060(*puVar16,puVar16[1],puVar16[2],puVar16[3],lVar13,0);
    uVar9 = FUN_0391fab4(lVar11,0);
    *(undefined8 *)(param_5 + 0x340) = uVar9;
    thunk_FUN_01b4f09c(param_5 + 0x340);
  }
  puVar5 = StringLiteral_4691;
  puVar4 = StringLiteral_3966;
  uVar9 = thunk_FUN_01afaadc(*(undefined8 *)
                              Method_System_Threading_ReaderWriterLockSlim_TimeoutTracker__ctor__);
  FUN_02fd7524(uVar9,param_5,*(undefined8 *)puVar5,0);
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  FUN_02dcd994(param_5,uVar9,0);
  uVar9 = *(undefined8 *)(param_5 + 0x1a8);
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar10 = FUN_03923030(uVar9,0);
  if ((uVar10 & 1) != 0) {
    if (*(long *)(param_5 + 0x1a8) == 0) goto LAB_02e22f2c;
    uVar9 = FUN_01e8a9f8(*(long *)(param_5 + 0x1a8),*(undefined8 *)StringLiteral_160);
    *(undefined8 *)(param_5 + 0x2f8) = uVar9;
    thunk_FUN_01b4f09c(param_5 + 0x2f8);
  }
  uVar9 = *(undefined8 *)(param_5 + 0xc0);
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar10 = FUN_03923030(uVar9,0);
  if ((uVar10 & 1) == 0) {
    uVar9 = FUN_01e8ac5c(param_5,*(undefined8 *)StringLiteral_4684);
    *(undefined8 *)(param_5 + 0xc0) = uVar9;
    thunk_FUN_01b4f09c((undefined8 *)(param_5 + 0xc0),uVar9);
  }
  uVar9 = *(undefined8 *)(param_5 + 0x1d8);
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar10 = FUN_03923030(uVar9,0);
  if ((uVar10 & 1) == 0) {
    uVar9 = FUN_01e8ac5c(param_5,*(undefined8 *)StringLiteral_4686);
    *(undefined8 *)(param_5 + 0x1d8) = uVar9;
    thunk_FUN_01b4f09c(param_5 + 0x1d8,uVar9);
  }
  FUN_02e230b8(param_5);
  uVar9 = *(undefined8 *)(param_5 + 0x140);
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar10 = FUN_03923030(uVar9,0);
  if ((uVar10 & 1) == 0) {
    uVar9 = *(undefined8 *)(param_5 + 0x198);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar10 = FUN_03923030(uVar9,0);
    if ((uVar10 & 1) != 0) {
      if (*(long *)(param_5 + 0x198) != 0) {
        uVar9 = FUN_01e8ac5c(*(long *)(param_5 + 0x198),*(undefined8 *)StringLiteral_4679);
        *(undefined8 *)(param_5 + 0x140) = uVar9;
        thunk_FUN_01b4f09c((undefined8 *)(param_5 + 0x140),uVar9);
        return;
      }
LAB_02e22f2c:
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
  }
  return;
}


