/*
FUNCTION_NAME: OVRPlugin.OVRP_1_63_0$$ovrp_GetInsightPassthroughInitialized
ENTRY_POINT: 05db0f7c
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 109
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior;attempted_use
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_4;validity_or_gating_hits_21;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;functionality_permission_setup
*/


long OVRPlugin_OVRP_1_63_0__ovrp_GetInsightPassthroughInitialized(void)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  uint uVar4;
  long unaff_x19;
  uint uStack000000000000000c;
  undefined8 in_stack_00000018;
  
  thunk_FUN_032e1da0(PTR_DAT_072b1c38);
  thunk_FUN_032e1da0(PTR_DAT_072b1c40);
  thunk_FUN_032e1da0(PTR_DAT_072b1c48);
  thunk_FUN_032e1da0(PTR_DAT_072b1c50);
  thunk_FUN_032e1da0(PTR_DAT_072b1c58);
  thunk_FUN_032e1da0(PTR_DAT_072b1c60);
  thunk_FUN_032e1da0(PTR_DAT_072b1c68);
  thunk_FUN_032e1da0(PTR_DAT_072b1c70);
  thunk_FUN_032e1da0(PTR_DAT_072b1c78);
  thunk_FUN_032e1da0(PTR_DAT_072b1c80);
  thunk_FUN_032e1da0(PTR_DAT_072b1c88);
  thunk_FUN_032e1da0(PTR_DAT_072b1c90);
  thunk_FUN_032e1da0(PTR_DAT_072b1c98);
  thunk_FUN_032e1da0(PTR_DAT_072b1ca0);
  thunk_FUN_032e1da0(PTR_DAT_072b1ca8);
  thunk_FUN_032e1da0(PTR_DAT_072b1cb0);
  thunk_FUN_032e1da0(PTR_DAT_072b1cb8);
  thunk_FUN_032e1da0(PTR_DAT_072b1cc0);
  thunk_FUN_032e1da0(PTR_DAT_072b1cc8);
  thunk_FUN_032e1da0(PTR_DAT_072b1cd0);
  thunk_FUN_032e1da0(PTR_DAT_072b1cd8);
  thunk_FUN_032e1da0(PTR_DAT_072b1ce0);
  thunk_FUN_032e1da0(PTR_DAT_072b1ce8);
  thunk_FUN_032e1da0(PTR_DAT_072b1cf0);
  thunk_FUN_032e1da0(PTR_DAT_072b1cf8);
  thunk_FUN_032e1da0(PTR_DAT_072b1d00);
  thunk_FUN_032e1da0(PTR_DAT_072b1d08);
  thunk_FUN_032e1da0(PTR_DAT_072b1d10);
  thunk_FUN_032e1da0(PTR_DAT_072b1d18);
  thunk_FUN_032e1da0(PTR_DAT_072b1d20);
  thunk_FUN_032e1da0(PTR_DAT_072b1d28);
  thunk_FUN_032e1da0(PTR_DAT_072b1d30);
  thunk_FUN_032e1da0(PTR_DAT_072b1d38);
  thunk_FUN_032e1da0(PTR_DAT_072b1d40);
  thunk_FUN_032e1da0(PTR_DAT_072b1d48);
  thunk_FUN_032e1da0(PTR_DAT_072b1d50);
  thunk_FUN_032e1da0(PTR_DAT_072b1d58);
  *(undefined1 *)(unaff_x19 + 0x77a) = 1;
  lVar2 = FUN_0596f450(&stack0x00000018,0);
  uVar3 = in_stack_00000018;
  if (lVar2 == 0) {
    return 0;
  }
  if (*(int *)(*(long *)PTR_DAT_072b1a48 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  uVar1 = FUN_05da7de4(uVar3);
  uVar3 = in_stack_00000018;
  if (uVar1 < 0x420ac1d0) {
    if (uVar1 < 0x1f90f0d6) {
      if (uVar1 < 0xeb4040e) {
        if (uVar1 < 0x6a85abf) {
          if (uVar1 < 0x3e76232) {
            if (0x2d32f60 < uVar1) {
              if (uVar1 == 0x3d3458d) {
LAB_05db21d0:
                lVar2 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072b1b90);
                FUN_05db26bc(lVar2,uVar3);
                return lVar2;
              }
              if (uVar1 == 0x3e76231) goto LAB_05db2284;
              goto LAB_05db2120;
            }
            if (uVar1 == 0xe38aef) {
              lVar2 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072b1d10);
              FUN_05db368c(lVar2,uVar3);
              return lVar2;
            }
            uVar4 = 0x2d32f60;
            goto LAB_05db1ff4;
          }
          if (uVar1 < 0x4e5cf63) {
            if (uVar1 == 0x4b34ca3) goto LAB_05db1edc;
            if (uVar1 == 0x4e5cf62) {
              lVar2 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072b1cd0);
              FUN_05db3424(lVar2,uVar3);
              return lVar2;
            }
            goto LAB_05db2120;
          }
          if (uVar1 == 0x4f8c0f2) {
LAB_05db22cc:
            lVar2 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072b1bb8);
            FUN_05db2874(lVar2,uVar3);
            return lVar2;
          }
          if (uVar1 == 0x5f1e153) {
            lVar2 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072b1bf8);
            FUN_05db2b34(lVar2,uVar3);
            return lVar2;
          }
          uVar4 = 0x6a85abe;
        }
        else {
          if (uVar1 < 0x8891a80) {
            if (uVar1 < 0x80ad3c8) {
              if (uVar1 == 0x73484ca) {
                lVar2 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072b1ca8);
                FUN_05db326c(lVar2,uVar3);
                return lVar2;
              }
              if (uVar1 == 0x80ad3c7) goto LAB_05db21f4;
            }
            else {
              if (uVar1 == 0x8260ab1) goto LAB_05db22cc;
              if (uVar1 == 0x8891a7f) goto LAB_05db21ac;
            }
            goto LAB_05db2120;
          }
          if (0x9956693 < uVar1) {
            if (uVar1 == 0xdcbd364) {
              lVar2 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072b1d08);
              FUN_05db3634(lVar2,uVar3);
              return lVar2;
            }
            if (uVar1 == 0xdf93113) {
LAB_05db2338:
              lVar2 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072b1c30);
              FUN_05db2d9c(lVar2,uVar3);
              return lVar2;
            }
            uVar4 = 0xeb4040d;
LAB_05db1e80:
            if (uVar1 == uVar4) {
LAB_05db1e88:
              lVar2 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072b1c10);
              FUN_05db2c3c(lVar2,uVar3);
              return lVar2;
            }
            goto LAB_05db2120;
          }
          if (uVar1 == 0x904b598) {
            lVar2 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072b1c68);
            FUN_05db2fac(lVar2,uVar3);
            return lVar2;
          }
          uVar4 = 0x9956693;
        }
FUN_05db1ed4:
        if (uVar1 == uVar4) {
LAB_05db1edc:
          lVar2 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072b1d18);
          FUN_05db36e4(lVar2,uVar3);
          return lVar2;
        }
      }
      else {
        if (uVar1 < 0x152663b2) {
          if (uVar1 < 0x117fc8ff) {
            if (0x11449fc5 < uVar1) {
              if (uVar1 == 0x1175be60) goto LAB_05db1b78;
              uVar4 = 0x117fc8fe;
LAB_05db1a48:
              if (uVar1 == uVar4) {
                lVar2 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072b1c80);
                FUN_05db3164(lVar2,uVar3);
                return lVar2;
              }
              goto LAB_05db2120;
            }
            if (uVar1 == 0xf9ecf9f) {
              lVar2 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072b1c58);
              FUN_05db2efc(lVar2,uVar3);
              return lVar2;
            }
            uVar4 = 0x11449fc5;
LAB_05db1360:
            if (uVar1 == uVar4) {
LAB_05db1f54:
              lVar2 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072b1be8);
              FUN_05db2a84(lVar2,uVar3);
              return lVar2;
            }
            goto LAB_05db2120;
          }
          if (uVar1 < 0x14806b86) {
            if (uVar1 == 0x121ab45f) goto LAB_05db21ac;
            uVar4 = 0x14806b85;
LAB_05db19c4:
            if (uVar1 == uVar4) {
LAB_05db2218:
              lVar2 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072b1bb0);
              FUN_05db281c(lVar2,uVar3);
              return lVar2;
            }
            goto LAB_05db2120;
          }
          if (uVar1 == 0x14a22a97) {
            lVar2 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072b1c78);
            FUN_05db305c(lVar2,uVar3);
            return lVar2;
          }
          if (uVar1 == 0x14aa2129) {
LAB_05db2284:
            lVar2 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072b1ba0);
            OVRPlugin_OVRP_1_72_0__ovrp_EraseSpace(lVar2,uVar3);
            return lVar2;
          }
          uVar4 = 0x152663b1;
LAB_05db1f28:
          if (uVar1 == uVar4) {
            lVar2 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072b1b98);
            FUN_05db2714(lVar2,uVar3);
            return lVar2;
          }
          goto LAB_05db2120;
        }
        if (uVar1 < 0x18f0b01c) {
          if (0x18378bef < uVar1) {
            if (uVar1 == 0x186b58b1) goto LAB_05db20fc;
            if (uVar1 == 0x18f0b01b) {
              lVar2 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072b1cb8);
              FUN_05db331c(lVar2,uVar3);
              return lVar2;
            }
            goto LAB_05db2120;
          }
          if (uVar1 == 0x1577036f) {
            lVar2 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072b1cf8);
            FUN_05db3584(lVar2,uVar3);
            return lVar2;
          }
          uVar4 = 0x18378bef;
          goto LAB_05db2028;
        }
        if (uVar1 < 0x1bd94ab0) {
          if (uVar1 != 0x1ad307b4) {
            if (uVar1 == 0x1bd94aaf) goto LAB_05db235c;
            goto LAB_05db2120;
          }
          goto LAB_05db1fa8;
        }
        if (uVar1 == 0x1d118ab2) {
          lVar2 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072b1cc8);
          FUN_05db33cc(lVar2,uVar3);
          return lVar2;
        }
        if (uVar1 == 0x1d403932) {
LAB_05db2380:
          lVar2 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072b1c20);
          FUN_05db2cec(lVar2,uVar3);
          return lVar2;
        }
        uVar4 = 0x1f90f0d5;
LAB_05db1ff4:
        if (uVar1 == uVar4) {
LAB_05db20a8:
          lVar2 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072b1bd0);
          FUN_05db2924(lVar2,uVar3);
          return lVar2;
        }
      }
      goto LAB_05db2120;
    }
    if (uVar1 < 0x2f42e728) {
      if (uVar1 < 0x24472f6d) {
        if (uVar1 < 0x2247596f) {
          if (0x21248069 < uVar1) {
            if (uVar1 == 0x21cbe0c0) {
              lVar2 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072b1d28);
              OVRPlugin_OVRP_1_78_0__ovrp_StartEyeTracking(lVar2,uVar3);
              return lVar2;
            }
            if (uVar1 == 0x2247596e) {
              lVar2 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072b1c98);
              FUN_05db31bc(lVar2,uVar3);
              return lVar2;
            }
            goto LAB_05db2120;
          }
          if (uVar1 == 0x1fbb72d9) goto LAB_05db20fc;
          uVar4 = 0x21248069;
LAB_05db1b70:
          if (uVar1 == uVar4) {
LAB_05db1b78:
            lVar2 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072b1c18);
            FUN_05db2be4(lVar2,uVar3);
            return lVar2;
          }
          goto LAB_05db2120;
        }
        if (0x22933297 < uVar1) {
          if (uVar1 == 0x2309f399) {
            lVar2 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072b1d30);
            FUN_05db389c(lVar2,uVar3);
            return lVar2;
          }
          if (uVar1 == 0x234bc3f1) goto LAB_05db2260;
          uVar4 = 0x24472f6c;
          goto FUN_05db1ed4;
        }
        if (uVar1 == 0x22810483) {
          lVar2 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072b1d40);
          FUN_05db38f4(lVar2,uVar3);
          return lVar2;
        }
        uVar4 = 0x22933297;
      }
      else {
        if (uVar1 < 0x296116e6) {
          if (uVar1 < 0x267cf744) {
            if (uVar1 == 0x264885ca) goto LAB_05db20fc;
            uVar4 = 0x267cf743;
FUN_05db15bc:
            if (uVar1 == uVar4) {
LAB_05db2260:
              lVar2 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072b1d38);
              FUN_05db3844(lVar2,uVar3);
              return lVar2;
            }
            goto LAB_05db2120;
          }
          if (uVar1 == 0x2955af24) goto LAB_05db20fc;
          uVar4 = 0x296116e5;
          goto LAB_05db1b70;
        }
        if (0x2a8f1055 < uVar1) {
          if (uVar1 == 0x2d008992) goto LAB_05db1f54;
          if (uVar1 == 0x2e4dd8d6) goto LAB_05db20fc;
          uVar4 = 0x2f42e727;
          goto LAB_05db1f28;
        }
        if (uVar1 == 0x2a7dd255) goto LAB_05db21d0;
        uVar4 = 0x2a8f1055;
      }
    }
    else if (uVar1 < 0x387e7f37) {
      if (uVar1 < 0x3271abdb) {
        if (0x314c84b8 < uVar1) {
          if (uVar1 == 0x316509dc) goto LAB_05db21ac;
          uVar4 = 0x3271abda;
          goto FUN_05db1ed4;
        }
        if (uVar1 == 0x2fdd0ccd) {
          lVar2 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072b1bf0);
          FUN_05db2adc(lVar2,uVar3);
          return lVar2;
        }
        uVar4 = 0x314c84b8;
      }
      else {
        if (0x35728882 < uVar1) {
          if (uVar1 == 0x35f6769b) {
LAB_05db2314:
            lVar2 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072b1c90);
            FUN_05db30b4(lVar2,uVar3);
            return lVar2;
          }
          if (uVar1 == 0x37f21084) goto LAB_05db1edc;
          if (uVar1 == 0x387e7f36) {
            lVar2 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072b1cb0);
            FUN_05db32c4(lVar2,uVar3);
            return lVar2;
          }
          goto LAB_05db2120;
        }
        if (uVar1 == 0x35692f2b) goto LAB_05db1fa8;
        uVar4 = 0x35728882;
      }
    }
    else {
      if (0x3c9e46cd < uVar1) {
        if (0x3e20cb57 < uVar1) {
          if (uVar1 == 0x3f9b0d0d) {
            lVar2 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072b1cf0);
            FUN_05db34d4(lVar2,uVar3);
            return lVar2;
          }
          if (uVar1 == 0x41cfda50) goto LAB_05db20a8;
          uVar4 = 0x420ac1cf;
          goto LAB_05db207c;
        }
        if (uVar1 == 0x3cdbe826) goto LAB_05db20fc;
        uVar4 = 0x3e20cb57;
        goto FUN_05db1ed4;
      }
      if (uVar1 < 0x3a0f841a) {
        if (uVar1 == 0x39607bfc) goto LAB_05db2030;
        if (uVar1 == 0x3a0f8419) goto LAB_05db223c;
        goto LAB_05db2120;
      }
      if (uVar1 == 0x3aaf591d) goto LAB_05db1edc;
      if (uVar1 == 0x3c147509) goto LAB_05db20fc;
      uVar4 = 0x3c9e46cd;
    }
  }
  else if (uVar1 < 0x5db3474d) {
    if (uVar1 < 0x4e078eef) {
      if (0x48ff55be < uVar1) {
        if (uVar1 < 0x4afc6f75) {
          if (0x49864735 < uVar1) {
            if (uVar1 == 0x49e6dbfa) goto LAB_05db1edc;
            if (uVar1 == 0x4afc6f74) {
              lVar2 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072b1bc8);
              FUN_05db297c(lVar2,uVar3);
              return lVar2;
            }
            goto LAB_05db2120;
          }
          if (uVar1 == 0x4901dac0) goto LAB_05db2030;
          uVar4 = 0x49864735;
        }
        else {
          if (uVar1 < 0x4b8efc87) {
            if (uVar1 == 0x4b49c202) goto LAB_05db20fc;
            uVar4 = 0x4b8efc86;
            goto LAB_05db20f4;
          }
          if ((uVar1 == 0x4c5b268a) || (uVar1 == 0x4db6aff8)) goto LAB_05db20fc;
          uVar4 = 0x4e078eee;
        }
        goto FUN_05db1ed4;
      }
      if (uVar1 < 0x44fc006f) {
        if (0x436f345d < uVar1) {
          if (uVar1 == 0x446aecfa) {
LAB_05db21f4:
            lVar2 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072b1be0);
            FUN_05db2a2c(lVar2,uVar3);
            return lVar2;
          }
          uVar4 = 0x44fc006e;
          goto LAB_05db19c4;
        }
        if (uVar1 == 0x43264356) goto LAB_05db1e88;
        uVar4 = 0x436f345d;
        goto FUN_05db1ac4;
      }
      if (uVar1 < 0x4737ea1e) {
        if (uVar1 == 0x453fc9aa) {
LAB_05db22a8:
          lVar2 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072b1d20);
          FUN_05db373c(lVar2,uVar3);
          return lVar2;
        }
        if (uVar1 == 0x4737ea1d) {
          lVar2 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072b1c48);
          FUN_05db2ea4(lVar2,uVar3);
          return lVar2;
        }
        goto LAB_05db2120;
      }
      if (uVar1 == 0x47570a95) {
LAB_05db223c:
        lVar2 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072b1ce8);
        FUN_05db352c(lVar2,uVar3);
        return lVar2;
      }
      if (uVar1 == 0x47933760) {
        lVar2 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072b1cc0);
        FUN_05db3374(lVar2,uVar3);
        return lVar2;
      }
      uVar4 = 0x48ff55be;
    }
    else {
      if (0x57b752b3 < uVar1) {
        if (uVar1 < 0x5ae8cd53) {
          if (uVar1 < 0x587c2a8e) {
            if (uVar1 == 0x586f2d14) {
LAB_05db22f0:
              lVar2 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072b1c38);
              FUN_05db2df4(lVar2,uVar3);
              return lVar2;
            }
            uVar4 = 0x587c2a8d;
            goto FUN_05db15bc;
          }
          if (uVar1 == 0x58d254a5) goto LAB_05db22a8;
          if (uVar1 == 0x593ccbdd) goto LAB_05db2284;
          uVar4 = 0x5ae8cd52;
LAB_05db207c:
          if (uVar1 == uVar4) {
LAB_05db2084:
            lVar2 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072b1bd8);
            FUN_05db29d4(lVar2,uVar3);
            return lVar2;
          }
          goto LAB_05db2120;
        }
        if (uVar1 < 0x5b7ca1b7) {
          if (uVar1 == 0x5b4fbbe0) goto LAB_05db1f54;
          uVar4 = 0x5b7ca1b6;
          goto LAB_05db1e80;
        }
        if (uVar1 == 0x5cd7a24f) goto LAB_05db2380;
        if (uVar1 == 0x5d955d38) goto LAB_05db20a8;
        uVar4 = 0x5db3474c;
LAB_05db2028:
        if (uVar1 == uVar4) {
LAB_05db2030:
          lVar2 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072b1c88);
          FUN_05db310c(lVar2,uVar3);
          return lVar2;
        }
        goto LAB_05db2120;
      }
      if (uVar1 < 0x51f8ce0d) {
        if (uVar1 < 0x4f9fde1e) {
          if (uVar1 == 0x4e207cd9) goto LAB_05db2030;
          uVar4 = 0x4f9fde1d;
          goto LAB_05db1f28;
        }
        if (uVar1 == 0x51659514) goto LAB_05db21f4;
        uVar4 = 0x51f8ce0c;
LAB_05db1fa0:
        if (uVar1 == uVar4) {
LAB_05db1fa8:
          lVar2 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072b1cd8);
          FUN_05db39a4(lVar2,uVar3);
          return lVar2;
        }
        goto LAB_05db2120;
      }
      if (uVar1 < 0x54e2d1f9) {
        if (uVar1 == 0x521adf0d) goto LAB_05db20fc;
        uVar4 = 0x54e2d1f8;
        goto FUN_05db1ed4;
      }
      if (uVar1 == 0x5534a924) {
        lVar2 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072b1ba8);
        FUN_05db27c4(lVar2,uVar3);
        return lVar2;
      }
      if (uVar1 == 0x568e76c0) goto LAB_05db1b78;
      uVar4 = 0x57b752b3;
    }
  }
  else if (uVar1 < 0x6da7ba90) {
    if (0x675f5c24 < uVar1) {
      if (0x68f2f1ff < uVar1) {
        if (0x6bcf9e47 < uVar1) {
          if (uVar1 == 0x6d1c8906) goto LAB_05db20fc;
          if (uVar1 == 0x6d5d7886) goto LAB_05db2084;
          uVar4 = 0x6da7ba8f;
          goto LAB_05db1fa0;
        }
        if (uVar1 == 0x6ad44ef8) goto LAB_05db2314;
        uVar4 = 0x6bcf9e47;
FUN_05db1ac4:
        if (uVar1 == uVar4) {
          lVar2 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072b1d48);
          FUN_05db3794(lVar2,uVar3);
          return lVar2;
        }
        goto LAB_05db2120;
      }
      if (0x6859d641 < uVar1) {
        if (uVar1 == 0x68670a0e) {
          lVar2 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072b1bc0);
          FUN_05db28cc(lVar2,uVar3);
          return lVar2;
        }
        if (uVar1 == 0x68f2f1ff) {
          lVar2 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072b1c28);
          FUN_05db2d44(lVar2,uVar3);
          return lVar2;
        }
        goto LAB_05db2120;
      }
      if (uVar1 == 0x679a84b6) {
        lVar2 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072b1c70);
        FUN_05db3004(lVar2,uVar3);
        return lVar2;
      }
      uVar4 = 0x6859d641;
      goto LAB_05db1b70;
    }
    if (uVar1 < 0x6388a555) {
      if (uVar1 < 0x6336cefb) {
        if (uVar1 == 0x629101bc) goto LAB_05db21d0;
        uVar4 = 0x6336cefa;
        goto LAB_05db1360;
      }
      if (uVar1 == 0x63599e2b) goto LAB_05db223c;
      uVar4 = 0x6388a554;
    }
    else {
      if (uVar1 < 0x66093982) {
        if (uVar1 == 0x651b4884) goto LAB_05db2338;
        uVar4 = 0x66093981;
        goto FUN_05db1ed4;
      }
      if (uVar1 == 0x67367f45) goto LAB_05db22f0;
      if (uVar1 == 0x67526a83) {
        lVar2 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072b1d00);
        FUN_05db35dc(lVar2,uVar3);
        return lVar2;
      }
      uVar4 = 0x675f5c24;
    }
  }
  else {
    if (uVar1 < 0x74d948f4) {
      if (uVar1 < 0x70ba3aef) {
        if (0x6ee4f33c < uVar1) {
          if (uVar1 == 0x6fd62528) {
            lVar2 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072b1c60);
            FUN_05db2f54(lVar2,uVar3);
            return lVar2;
          }
          uVar4 = 0x70ba3aee;
          goto FUN_05db1ac4;
        }
        if (uVar1 == 0x6daa9cc3) goto LAB_05db20fc;
        uVar4 = 0x6ee4f33c;
      }
      else {
        if (uVar1 < 0x72c692fb) {
          if (uVar1 == 0x717259e3) goto LAB_05db20fc;
          uVar4 = 0x72c692fa;
          goto LAB_05db1a48;
        }
        if (uVar1 == 0x7321939c) goto LAB_05db1edc;
        if (uVar1 == 0x744ce345) {
          lVar2 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072b1ca0);
          FUN_05db3214(lVar2,uVar3);
          return lVar2;
        }
        uVar4 = 0x74d948f3;
      }
      goto FUN_05db1ed4;
    }
    if (uVar1 < 0x7c2afdcc) {
      if (0x77584ef3 < uVar1) {
        if (uVar1 == 0x78c90470) {
LAB_05db21ac:
          lVar2 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072b1c08);
          FUN_05db2c94(lVar2,uVar3);
          return lVar2;
        }
        if (uVar1 != 0x7c2060de) {
          if (uVar1 == 0x7c2afdcb) goto LAB_05db1cac;
          goto LAB_05db2120;
        }
        goto LAB_05db2218;
      }
      if (uVar1 == 0x773889f6) {
        lVar2 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072b1c40);
        FUN_05db2e4c(lVar2,uVar3);
        return lVar2;
      }
      uVar4 = 0x77584ef3;
      goto LAB_05db1b70;
    }
    if (uVar1 < 0x7dd46e30) {
      if (uVar1 == 0x7d201556) {
LAB_05db1cac:
        lVar2 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072b1c00);
        FUN_05db2b8c(lVar2,uVar3);
        return lVar2;
      }
      if (uVar1 == 0x7dd46e2f) {
        lVar2 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072b1c50);
        FUN_05db394c(lVar2,uVar3);
        return lVar2;
      }
      goto LAB_05db2120;
    }
    if (uVar1 == 0x7e9acaf5) {
LAB_05db235c:
      lVar2 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072b1ce0);
      FUN_05db347c(lVar2,uVar3);
      return lVar2;
    }
    if (uVar1 == 0x7f4ca0c6) goto LAB_05db21ac;
    uVar4 = 0x7f79bcaa;
  }
LAB_05db20f4:
  if (uVar1 == uVar4) {
LAB_05db20fc:
    lVar2 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072b1d50);
    FUN_05db0920(lVar2,uVar3);
    return lVar2;
  }
LAB_05db2120:
  lVar2 = FUN_05db39fc(in_stack_00000018,uVar1);
  if (lVar2 == 0) {
    uStack000000000000000c = uVar1;
    uVar3 = thunk_FUN_032a52d0(*(undefined8 *)PTR_DAT_072b1b88,&stack0x0000000c);
    uVar3 = FUN_057a25c4(*(undefined8 *)PTR_DAT_072b1d58,uVar3,0);
    if (*(int *)(*(long *)PTR_DAT_072798f8 + 0xe0) == 0) {
      thunk_FUN_032cd7c0(*(long *)PTR_DAT_072798f8);
    }
    FUN_06bb2a00(uVar3,0);
    return 0;
  }
  return lVar2;
}


