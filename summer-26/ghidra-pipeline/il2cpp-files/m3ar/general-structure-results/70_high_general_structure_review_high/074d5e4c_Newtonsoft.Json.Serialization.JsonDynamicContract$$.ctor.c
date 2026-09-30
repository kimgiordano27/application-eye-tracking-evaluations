/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonDynamicContract$$.ctor
ENTRY_POINT: 074d5e4c
PROGRAM: m3ar-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_18;strong_file_logging_hits_2;telemetry_or_network_hits_1
*/


uint Newtonsoft_Json_Serialization_JsonDynamicContract___ctor(void)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  undefined4 uVar10;
  long lVar11;
  undefined4 *unaff_x19;
  long *unaff_x20;
  undefined4 unaff_w21;
  undefined8 uVar12;
  uint unaff_w22;
  uint unaff_w23;
  uint uVar13;
  int unaff_w25;
  long unaff_x26;
  long *unaff_x27;
  ulong unaff_x28;
  long unaff_x29;
  double dVar14;
  
  do {
    thunk_FUN_0408f364();
    do {
      uVar7 = FUN_074d20e0(unaff_w23,unaff_x29 + -0xa0,unaff_x29 + -0x40,unaff_x29 + -0x70);
      if ((uVar7 & 1) == 0) goto LAB_074d6348;
      uVar5 = *(uint *)(unaff_x29 + -0x40);
      if (uVar5 != 0x12) {
        if (*(int *)(unaff_x29 + -0x3c) != 0x100) {
          if (*(int *)(*unaff_x27 + 0xe4) == 0) {
            thunk_FUN_0408f364();
          }
          uVar7 = FUN_074d57c8();
          if ((uVar7 & 1) != 0) {
            uVar5 = *(uint *)(unaff_x29 + -0x40);
            *(undefined4 *)(unaff_x29 + -0x3c) = 0x100;
            goto LAB_074d5ebc;
          }
          goto LAB_074d633c;
        }
LAB_074d5ebc:
        if (uVar5 != 0x13) {
          if ((*(byte *)(unaff_x29 + -0x48) & 1) == 0) {
            lVar9 = *unaff_x27;
            uVar13 = unaff_w23;
            goto LAB_074d5fe4;
          }
          uVar1 = 3;
          if (unaff_w23 != 0x12) {
            uVar1 = unaff_w23;
          }
          uVar13 = 5;
          if (uVar1 != 0x13) {
            uVar13 = uVar1;
          }
          if ((uVar5 & 0xfffffffd) != 0xc && uVar5 != 0xd) {
            uVar13 = unaff_w23;
          }
          if (*(int *)(*(long *)PTR_DAT_08f9eec8 + 0xe4) == 0) {
            thunk_FUN_0408f364();
          }
          bVar4 = Newtonsoft_Json_Serialization_JsonContract__InvokeOnDeserialized
                            (unaff_x29 + -0xa0,0);
          lVar9 = *unaff_x27;
          if (*(int *)(lVar9 + 0xe4) == 0) {
            thunk_FUN_0408f364(lVar9);
            lVar9 = *unaff_x27;
          }
          lVar11 = *(long *)(*(long *)(lVar9 + 0xb8) + 8);
          if (lVar11 == 0) goto LAB_074d63bc;
          if (*(uint *)(lVar11 + 0x18) <= uVar13) {
LAB_074d63d0:
            if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -0x18)) {
                    /* WARNING: Subroutine does not return */
              FUN_04031894();
            }
            goto LAB_074d63e4;
          }
          lVar11 = *(long *)(lVar11 + (long)(int)uVar13 * 8 + 0x20);
          if (lVar11 == 0) goto LAB_074d63bc;
          uVar5 = *(uint *)(unaff_x29 + -0x40);
          if (*(uint *)(lVar11 + 0x18) <= uVar5) goto LAB_074d63d0;
          if ((*(int *)(lVar11 + (long)(int)uVar5 * 4 + 0x20) != 0x14 & (bVar4 ^ 0xff)) == 0) {
            if ((int)uVar5 < 8) {
              if ((uVar5 != 4) && (uVar5 != 5)) goto LAB_074d5fe4;
              uVar10 = 3;
              if ((bVar4 & 1) != 0) {
                uVar10 = 1;
              }
            }
            else if (uVar5 == 8) {
              uVar10 = 6;
              if ((bVar4 & 1) == 0) {
                uVar10 = 7;
              }
            }
            else {
              if (uVar5 != 0xd) goto LAB_074d5fe4;
              uVar10 = 0xe;
              if ((bVar4 & 1) == 0) {
                uVar10 = 0xc;
              }
            }
            *(undefined4 *)(unaff_x29 + -0x40) = uVar10;
          }
LAB_074d5fe4:
          if (*(int *)(lVar9 + 0xe4) == 0) {
            thunk_FUN_0408f364(lVar9);
            lVar9 = *unaff_x27;
          }
          lVar9 = *(long *)(*(long *)(lVar9 + 0xb8) + 8);
          if (lVar9 == 0) goto LAB_074d63bc;
          if (*(uint *)(lVar9 + 0x18) <= uVar13) goto LAB_074d63d0;
          lVar9 = *(long *)(lVar9 + (long)(int)uVar13 * 8 + 0x20);
          if (lVar9 == 0) goto LAB_074d63bc;
          if (*(uint *)(lVar9 + 0x18) <= *(uint *)(unaff_x29 + -0x40)) goto LAB_074d63d0;
          unaff_w23 = *(uint *)(lVar9 + (long)(int)*(uint *)(unaff_x29 + -0x40) * 4 + 0x20);
          if (unaff_w23 == 0x14) goto LAB_074d633c;
          if ((int)unaff_w23 < 0x15) {
LAB_074d6114:
            uVar5 = *(uint *)(unaff_x29 + -0x40);
            goto LAB_074d6118;
          }
          if (*(long *)(unaff_x29 + -0x20) == 0) goto LAB_074d63bc;
          uVar5 = FUN_074388c0(*(long *)(unaff_x29 + -0x20),0);
          puVar3 = PTR_DAT_08f9eb90;
          if ((uVar5 >> 3 & 1) != 0) {
            if (*(int *)(*(long *)PTR_DAT_08f9eb90 + 0xe4) == 0) {
              thunk_FUN_0408f364();
            }
            if (DAT_09546853 == '\0') {
              FUN_0403162c(puVar3);
              DAT_09546853 = (char)unaff_w25;
            }
            lVar9 = *(long *)puVar3;
            if (*(int *)(lVar9 + 0xe4) == 0) {
              thunk_FUN_0408f364();
              lVar9 = *(long *)puVar3;
            }
            if (**(char **)(lVar9 + 0xb8) == '\0') {
              if (*(int *)(*unaff_x27 + 0xe4) == 0) {
                thunk_FUN_0408f364();
              }
              uVar7 = FUN_074d58c0(unaff_w23);
              if ((uVar7 & 1) == 0) goto LAB_074d6348;
            }
LAB_074d610c:
            unaff_w23 = 0;
            unaff_x28 = 1;
            goto LAB_074d6114;
          }
          if (*(int *)(*unaff_x27 + 0xe4) == 0) {
            thunk_FUN_0408f364();
          }
          uVar7 = FUN_074d2ee8(unaff_w23);
          if ((uVar7 & 1) != 0) goto LAB_074d610c;
          goto LAB_074d6348;
        }
        if ((unaff_w23 & 0xfffffffe) != 0xc) goto LAB_074d633c;
        if (*(int *)(*unaff_x27 + 0xe4) == 0) {
          thunk_FUN_0408f364();
        }
        uVar5 = FUN_074d63e8(unaff_x29 + -0x70,unaff_x29 + -0xa0,unaff_w21);
LAB_074d634c:
        if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -0x18)) {
          return uVar5 & 1;
        }
LAB_074d63e4:
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
LAB_074d6118:
      if ((uVar5 < 7) && ((unaff_w25 << (ulong)(uVar5 & 0x1f) & unaff_w22) != 0)) {
        if ((unaff_x28 & 1) == 0) goto LAB_074d633c;
        uVar12 = *(undefined8 *)(unaff_x29 + -0x20);
        if (*(int *)(*unaff_x27 + 0xe4) == 0) {
          thunk_FUN_0408f364();
        }
        FUN_074d5234(uVar12,unaff_x29 + -0x70);
        if (*(int *)(unaff_x29 + -0x54) != -1) {
          if (*(int *)(unaff_x29 + -0x54) == 0) {
            uVar13 = unaff_x19[3];
            if (0xc < uVar13) {
LAB_074d633c:
              FUN_074dc7d8();
              goto LAB_074d6348;
            }
            uVar5 = 0;
            if (uVar13 != 0xc) {
              uVar5 = uVar13;
            }
LAB_074d61e0:
            unaff_x19[3] = uVar5;
          }
          else {
            uVar5 = unaff_x19[3];
            if (0x17 < uVar5) goto LAB_074d633c;
            if (uVar5 < 0xc) {
              uVar5 = uVar5 + 0xc;
              goto LAB_074d61e0;
            }
          }
        }
        if (*(int *)(*unaff_x27 + 0xe4) == 0) {
          thunk_FUN_0408f364();
        }
        uVar7 = FUN_074d69f8();
        if ((uVar7 & 1) != 0) {
          plVar8 = (long *)*unaff_x20;
          if (plVar8 == (long *)0x0) {
LAB_074d63bc:
            if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -0x18)) {
                    /* WARNING: Subroutine does not return */
              FUN_0403188c();
            }
            goto LAB_074d63e4;
          }
          uVar7 = (**(code **)(*plVar8 + 0x2b8))
                            (plVar8,*unaff_x19,unaff_x19[1],unaff_x19[2],unaff_x19[3],unaff_x19[4],
                             unaff_x19[5],0,unaff_x19[8],unaff_x29 + -0x30,
                             *(undefined8 *)(*plVar8 + 0x2c0));
          if ((uVar7 & 1) != 0) {
            dVar14 = *(double *)(unaff_x29 + -0x50);
            if (0.0 < dVar14) {
              if (*(int *)(*(long *)PTR_DAT_08f65580 + 0xe4) == 0) {
                thunk_FUN_0408f364();
              }
              dVar14 = (double)FUN_03f7723c(dVar14 * DAT_01a34e10);
              if (*(int *)(*(long *)PTR_DAT_08f65f48 + 0xe4) == 0) {
                thunk_FUN_0408f364();
              }
              lVar9 = -0x8000000000000000;
              if (dVar14 != INFINITY) {
                lVar9 = (long)dVar14;
              }
              uVar12 = FUN_074c364c(unaff_x29 + -0x30,lVar9);
              *(undefined8 *)(unaff_x29 + -0x30) = uVar12;
            }
            iVar2 = *(int *)(unaff_x29 + -0x5c);
            if (iVar2 != -1) {
              plVar8 = (long *)*unaff_x20;
              if (plVar8 == (long *)0x0) goto LAB_074d63bc;
              iVar6 = (**(code **)(*plVar8 + 0x1f8))
                                (plVar8,*(undefined8 *)(unaff_x29 + -0x30),
                                 *(undefined8 *)(*plVar8 + 0x200));
              if (iVar2 != iVar6) goto LAB_074d6184;
            }
            lVar9 = *unaff_x27;
            *(undefined8 *)(unaff_x19 + 0xe) = *(undefined8 *)(unaff_x29 + -0x30);
            if (*(int *)(lVar9 + 0xe4) == 0) {
              thunk_FUN_0408f364();
            }
            uVar5 = FUN_074d6c74(unaff_x29 + -0xa0);
            goto LAB_074d634c;
          }
LAB_074d6184:
          FUN_074dc828();
        }
LAB_074d6348:
        uVar5 = 0;
        goto LAB_074d634c;
      }
    } while (*(int *)(*unaff_x27 + 0xe4) != 0);
  } while( true );
}


