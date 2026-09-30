/*
FUNCTION_NAME: OVRPlugin$$GetSkeleton
ENTRY_POINT: 027f3900
PROGRAM: vrlegs-libil2cpp.so
SCORE: 110
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_21;strong_foveation_hits_1;functionality_foveated_rendering
*/


/* WARNING: Removing unreachable block (ram,0x027f3d4c) */
/* WARNING: Removing unreachable block (ram,0x027f3de0) */
/* WARNING: Removing unreachable block (ram,0x027f3d9c) */

ulong OVRPlugin__GetSkeleton(void)

{
  bool bVar1;
  bool bVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *unaff_x21;
  char cStack000000000000005c;
  byte bStack0000000000000064;
  byte bStack00000000000000cc;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000180;
  int iStack0000000000000194;
  int iStack00000000000001a8;
  int iStack00000000000001ac;
  undefined8 in_stack_000001b8;
  undefined8 in_stack_000001c8;
  undefined8 in_stack_000001d8;
  undefined8 in_stack_000001e8;
  int iVar9;
  int iVar10;
  byte bVar11;
  char cVar12;
  int in_stack_00000314;
  byte in_stack_0000032f;
  
  FUN_01ab69ac(PTR_DAT_03cbed08);
  FUN_01ab69ac(PTR_DAT_03cfd580);
  FUN_01ab69ac(PTR_DAT_03cfd588);
  FUN_01ab69ac(PTR_DAT_03cbed20);
  FUN_01ab69ac(PTR_DAT_03cfd650);
  FUN_01ab69ac(PTR_DAT_03cc0330);
  DAT_0412516c = 1;
  unaff_x21[0x4e] = 0;
  unaff_x21[0x4d] = 0;
  unaff_x21[0x4c] = 0;
  unaff_x21[0x49] = 0;
  unaff_x21[0x47] = 0;
  unaff_x21[0x46] = 0;
  unaff_x21[0x45] = 0;
  unaff_x21[0x43] = 0;
  unaff_x21[0x41] = unaff_x21[0x51];
  if (unaff_x21[0x41] == 0) {
    thunk_FUN_01a6ca08(PTR_DAT_03cbdf98);
    uVar4 = thunk_FUN_01a89e68();
    unaff_x21[0x3f] = uVar4;
    uVar5 = unaff_x21[0x3f];
    uVar4 = thunk_FUN_01a6ca08(PTR_DAT_03cd9100);
    FUN_026a44fc(uVar5,uVar4,0);
    uVar5 = unaff_x21[0x3f];
    uVar4 = thunk_FUN_01a6ca08(PTR_DAT_03cfd658);
                    /* WARNING: Subroutine does not return */
    FUN_01ab6b14(uVar5,uVar4);
  }
  if (unaff_x21[0x41] != 0) {
    if (in_stack_00000314 < -1) {
      iVar9 = 0;
    }
    else {
      iVar9 = 5;
    }
    if (iVar9 == 0) {
      thunk_FUN_01a6ca08(PTR_DAT_03cbde98);
      uVar4 = thunk_FUN_01a89e68();
      unaff_x21[0x3d] = uVar4;
      uVar5 = unaff_x21[0x3d];
      uVar4 = thunk_FUN_01a6ca08(PTR_DAT_03cfcc18);
      FUN_026b3fc8(uVar5,uVar4,0);
      uVar5 = unaff_x21[0x3d];
      uVar4 = thunk_FUN_01a6ca08(PTR_DAT_03cfd658);
                    /* WARNING: Subroutine does not return */
      FUN_01ab6b14(uVar5,uVar4);
    }
    if (iVar9 == 5) {
      FUN_01876390(*(undefined8 *)PTR_DAT_03cc9e10);
      FUN_027d7fa0(&stack0x00000320,0);
      unaff_x21[0x4e] = 0;
      unaff_x21[0x4d] = 0;
      unaff_x21[0x4c] = 0;
      bVar1 = false;
      cVar12 = '\0';
      bVar11 = 1;
      unaff_x21[0x3c] = unaff_x21[0x51];
      FUN_018748a8(unaff_x21[0x3c]);
      iVar9 = FUN_019a62dc(*(undefined8 *)(unaff_x21[0x3c] + 0x18),1);
      while( true ) {
        if (iVar9 < 0) {
          iVar10 = 0;
        }
        else {
          iVar10 = 9;
        }
        iStack00000000000001a8 = iVar9;
        if (iVar10 == 0) break;
        if (iVar10 + -9 != 0) {
          uVar6 = FUN_027f499c(iVar10 + -9);
          return uVar6;
        }
        unaff_x21[0x3b] = unaff_x21[0x51];
        FUN_018748a8(unaff_x21[0x3b]);
        uVar4 = FUN_0199d8e4(unaff_x21[0x3b],(long)iVar9);
        unaff_x21[0x39] = uVar4;
        unaff_x21[0x49] = unaff_x21[0x39];
        unaff_x21[0x38] = unaff_x21[0x49];
        if (unaff_x21[0x38] == 0) {
          iVar10 = 0;
        }
        else {
          iVar10 = 10;
        }
        if (iVar10 == 0) {
          thunk_FUN_01a6ca08(PTR_DAT_03cbdfd0);
          uVar4 = thunk_FUN_01a89e68();
          unaff_x21[0x37] = uVar4;
          uVar8 = unaff_x21[0x37];
          uVar4 = thunk_FUN_01a6ca08(PTR_DAT_03cfd660);
          uVar5 = thunk_FUN_01a6ca08(PTR_DAT_03cd9100);
          FUN_026a7658(uVar8,uVar4,uVar5,0);
          uVar5 = unaff_x21[0x37];
          uVar4 = thunk_FUN_01a6ca08(PTR_DAT_03cfd658);
                    /* WARNING: Subroutine does not return */
          FUN_01ab6b14(uVar5,uVar4);
        }
        if (iVar10 != 10) goto LAB_027f4968;
        unaff_x21[0x36] = unaff_x21[0x49];
        FUN_018748a8(unaff_x21[0x36]);
        bVar3 = FUN_027e971c(unaff_x21[0x36]);
        bVar2 = (bool)(bVar3 & 1);
        if (bVar2 == false) {
          iVar10 = 0;
        }
        else {
          iVar10 = 0xd;
        }
        if (iVar10 == 0) {
          if (in_stack_00000314 == -1) {
            iVar10 = 0;
          }
          else {
            iVar10 = 0xe;
          }
          if (iVar10 == 0) {
            FUN_01876390(*(undefined8 *)PTR_DAT_03cc9e10);
            bVar3 = OVRManager__SetFoveatedRenderingLevel(&stack0x00000320,0);
            if ((bVar3 & 1) == 0) {
              iVar10 = 0xf;
            }
            else {
              iVar10 = 0;
            }
            if (iVar10 != 0) {
              if (iVar10 == 0xf) {
                unaff_x21[0x31] = unaff_x21[0x49];
                FUN_018748a8(unaff_x21[0x31]);
                bVar3 = FUN_027f2528(unaff_x21[0x31]);
                if ((bVar3 & 1) == 0) {
                  bVar3 = 0;
                }
                else {
                  unaff_x21[0x2f] = unaff_x21[0x49];
                  FUN_018748a8(unaff_x21[0x2f]);
                  bVar3 = FUN_027e971c(unaff_x21[0x2f]);
                  bVar3 = bVar3 & 1;
                }
                bVar2 = bVar3 != 0;
                if (bVar2) {
                  iVar10 = 0xd;
                }
                else {
                  iVar10 = 0;
                }
                if (iVar10 != 0) goto joined_r0x027f3e30;
                unaff_x21[0x2d] = unaff_x21[0x49];
                unaff_x21[0x2c] = unaff_x21[0x51];
                FUN_018748a8(unaff_x21[0x2c]);
                FUN_01876390(*(undefined8 *)PTR_DAT_03cc0330);
                thunk_FUN_01ff0358(unaff_x21[0x2d],&stack0x000002f8,
                                   *(undefined8 *)(unaff_x21[0x2c] + 0x18),
                                   *(undefined8 *)PTR_DAT_03cfd650);
                in_stack_000001e8._4_1_ = bVar2;
                goto LAB_027f3e80;
              }
              goto LAB_027f4968;
            }
          }
          else if (iVar10 != 0xe) goto LAB_027f4968;
          unaff_x21[0x33] = unaff_x21[0x49];
          unaff_x21[0x32] = unaff_x21[0x51];
          FUN_018748a8(unaff_x21[0x32]);
          FUN_01876390(*(undefined8 *)PTR_DAT_03cc0330);
          thunk_FUN_01ff0358(unaff_x21[0x33],&stack0x000002f8,
                             *(undefined8 *)(unaff_x21[0x32] + 0x18),*(undefined8 *)PTR_DAT_03cfd650
                            );
          in_stack_000001e8._4_1_ = bVar2;
        }
        else {
joined_r0x027f3e30:
          in_stack_000001e8._4_1_ = bVar2;
          if (iVar10 != 0xd) goto LAB_027f4968;
        }
LAB_027f3e80:
        if ((bool)in_stack_000001e8._4_1_ == false) {
          iVar10 = 0x12;
        }
        else {
          iVar10 = 0;
        }
        if (iVar10 == 0) {
          unaff_x21[0x2a] = unaff_x21[0x49];
          FUN_018748a8(unaff_x21[0x2a]);
          in_stack_000001d8._4_1_ = FUN_027ef73c(unaff_x21[0x2a]);
          in_stack_000001d8._4_1_ = in_stack_000001d8._4_1_ & 1;
          if (in_stack_000001d8._4_1_ == 0) {
            iVar10 = 0x13;
          }
          else {
            iVar10 = 0;
          }
          if (iVar10 == 0) {
            bVar1 = true;
          }
          else {
            if (iVar10 != 0x13) goto LAB_027f4968;
            unaff_x21[0x28] = unaff_x21[0x49];
            FUN_018748a8(unaff_x21[0x28]);
            in_stack_000001c8._4_1_ = FUN_027ef910(unaff_x21[0x28]);
            in_stack_000001c8._4_1_ = in_stack_000001c8._4_1_ & 1;
            if (in_stack_000001c8._4_1_ == 0) {
              iVar10 = 0x14;
            }
            else {
              iVar10 = 0;
            }
            if (iVar10 == 0) {
              cVar12 = '\x01';
            }
            else if (iVar10 != 0x14) goto LAB_027f4968;
          }
          unaff_x21[0x26] = unaff_x21[0x49];
          FUN_018748a8(unaff_x21[0x26]);
          in_stack_000001b8._4_1_ = FUN_027eeb90(unaff_x21[0x26]);
          in_stack_000001b8._4_1_ = in_stack_000001b8._4_1_ & 1;
          if (in_stack_000001b8._4_1_ == 0) {
            iVar10 = 0x12;
          }
          else {
            iVar10 = 0;
          }
          if (iVar10 != 0) goto joined_r0x027f3fb8;
          unaff_x21[0x24] = unaff_x21[0x49];
          FUN_01876390(*(undefined8 *)PTR_DAT_03cc0330);
          thunk_FUN_01ff0358(unaff_x21[0x24],&stack0x000002f0,1,*(undefined8 *)PTR_DAT_03cfd650);
        }
        else {
joined_r0x027f3fb8:
          if (iVar10 != 0x12) goto LAB_027f4968;
        }
        iStack00000000000001ac = iVar9;
        iVar9 = FUN_019a62dc(iVar9,1);
      }
      unaff_x21[0x22] = unaff_x21[0x4d];
      if (unaff_x21[0x22] == 0) {
        iVar9 = 0x15;
      }
      else {
        iVar9 = 0;
      }
      if (iVar9 == 0) {
        unaff_x21[0x21] = unaff_x21[0x4d];
        unaff_x21[0x1f] = unaff_x21[0x52];
        iStack0000000000000194 = in_stack_00000314;
        FUN_01876390(*(undefined8 *)PTR_DAT_03cc0330);
        unaff_x21[0x1d] = unaff_x21[0x1f];
        bVar11 = FUN_027f4a34(unaff_x21[0x21],iStack0000000000000194,unaff_x21[0x1d]);
        bVar11 = bVar11 & 1;
        if (bVar11 == 0) {
          iVar9 = 0x16;
        }
        else {
          iVar9 = 0;
        }
        in_stack_00000170._4_1_ = bVar11;
        in_stack_00000180._4_1_ = bVar11;
        if (iVar9 == 0) {
          unaff_x21[0x1b] = unaff_x21[0x4d];
          FUN_018748a8(unaff_x21[0x1b]);
          uVar4 = FUN_018856b8(0,*(undefined8 *)PTR_DAT_03cfd580,unaff_x21[0x1b]);
          unaff_x21[0x1a] = uVar4;
          unaff_x21[0x47] = unaff_x21[0x1a];
          unaff_x21[0x17] = &stack0x000002c8;
          FUN_019a6eec(&stack0x00000150,&stack0x00000148);
          goto LAB_027f435c;
        }
        if (iVar9 == 0x16) goto LAB_027f445c;
      }
      else if (iVar9 == 0x15) goto LAB_027f4480;
    }
  }
  goto LAB_027f4968;
  while (iVar9 = iVar10 + -0x17, iVar9 == 0) {
LAB_027f435c:
    unaff_x21[0xb] = unaff_x21[0x47];
    FUN_018748a8(unaff_x21[0xb]);
    in_stack_000000e0._4_1_ = FUN_018856b8(0,*(undefined8 *)PTR_DAT_03cbed20,unaff_x21[0xb]);
    in_stack_000000e0._4_1_ = in_stack_000000e0._4_1_ & 1;
    if (in_stack_000000e0._4_1_ == 0) {
      iVar9 = 0;
    }
    else {
      iVar9 = 0x18;
    }
    if (iVar9 == 0) {
      iVar9 = 0x16;
      iVar10 = 0x16;
      break;
    }
    if (iVar9 + -0x18 != 0) {
      uVar6 = FUN_027f499c(iVar9 + -0x18);
      return uVar6;
    }
    unaff_x21[0x16] = unaff_x21[0x47];
    FUN_018748a8(unaff_x21[0x16]);
    uVar4 = FUN_018856b8(0,*(undefined8 *)PTR_DAT_03cfd588,unaff_x21[0x16]);
    unaff_x21[0x13] = uVar4;
    unaff_x21[0x46] = unaff_x21[0x13];
    unaff_x21[0x12] = unaff_x21[0x46];
    FUN_018748a8(unaff_x21[0x12]);
    in_stack_00000118._4_1_ = FUN_027ef73c(unaff_x21[0x12]);
    in_stack_00000118._4_1_ = in_stack_00000118._4_1_ & 1;
    if (in_stack_00000118._4_1_ == 0) {
      iVar10 = 0x19;
    }
    else {
      iVar10 = 0;
    }
    if (iVar10 == 0) {
      bVar1 = true;
    }
    else {
      iVar9 = iVar10 + -0x19;
      if (iVar9 != 0) break;
      unaff_x21[0x10] = unaff_x21[0x46];
      FUN_018748a8(unaff_x21[0x10]);
      in_stack_00000108._4_1_ = FUN_027ef910(unaff_x21[0x10]);
      in_stack_00000108._4_1_ = in_stack_00000108._4_1_ & 1;
      if (in_stack_00000108._4_1_ == 0) {
        iVar10 = 0x1a;
      }
      else {
        iVar10 = 0;
      }
      if (iVar10 == 0) {
        cVar12 = '\x01';
      }
      else {
        iVar9 = iVar10 + -0x1a;
        if (iVar9 != 0) break;
      }
    }
    unaff_x21[0xe] = unaff_x21[0x46];
    FUN_018748a8(unaff_x21[0xe]);
    in_stack_000000f8._4_1_ = FUN_027eeb90(unaff_x21[0xe]);
    in_stack_000000f8._4_1_ = in_stack_000000f8._4_1_ & 1;
    if (in_stack_000000f8._4_1_ == 0) {
      iVar10 = 0x17;
    }
    else {
      iVar10 = 0;
    }
    if (iVar10 == 0) {
      unaff_x21[0xc] = unaff_x21[0x46];
      FUN_01876390(*(undefined8 *)PTR_DAT_03cc0330);
      thunk_FUN_01ff0358(unaff_x21[0xc],&stack0x000002f0,1,*(undefined8 *)PTR_DAT_03cfd650);
      goto LAB_027f435c;
    }
  }
  FUN_019a6f00(iVar9,&stack0x00000150);
  if ((iVar10 != 0) && (iVar10 != 0x16)) goto LAB_027f4968;
LAB_027f445c:
  unaff_x21[8] = unaff_x21[0x51];
  FUN_01876390(*(undefined8 *)PTR_DAT_03cc4f10);
  FUN_027a951c(unaff_x21[8],0);
LAB_027f4480:
  if (bVar11 == 0) {
    iVar9 = 0x1b;
  }
  else {
    iVar9 = 0;
  }
  bStack00000000000000cc = bVar11;
  if (iVar9 == 0) {
    unaff_x21[6] = unaff_x21[0x4c];
    if (unaff_x21[6] == 0) {
      iVar9 = 0x1b;
    }
    else {
      iVar9 = 0;
    }
    if (iVar9 != 0) goto joined_r0x027f4504;
    unaff_x21[5] = unaff_x21[0x4c];
    FUN_018748a8(unaff_x21[5]);
    uVar4 = FUN_018856b8(0,*(undefined8 *)PTR_DAT_03cfd580,unaff_x21[5]);
    unaff_x21[4] = uVar4;
    unaff_x21[0x47] = unaff_x21[4];
    unaff_x21[1] = &stack0x000002c8;
    FUN_019a6eec(&stack0x000000a0,&stack0x00000098);
    do {
      uVar4 = unaff_x21[0x47];
      FUN_018748a8(uVar4);
      bVar3 = FUN_018856b8(0,*(undefined8 *)PTR_DAT_03cbed20,uVar4);
      if ((bVar3 & 1) == 0) {
        iVar9 = 0;
      }
      else {
        iVar9 = 0x1d;
      }
      if (iVar9 == 0) {
        iVar10 = 0x1b;
        iVar9 = 0x1b;
        break;
      }
      if (iVar9 + -0x1d != 0) {
        uVar6 = FUN_027f499c(iVar9 + -0x1d);
        return uVar6;
      }
      *unaff_x21 = unaff_x21[0x47];
      FUN_018748a8(*unaff_x21);
      uVar4 = FUN_018856b8(0,*(undefined8 *)PTR_DAT_03cfd588,*unaff_x21);
      FUN_018748a8(uVar4);
      bVar3 = FUN_027eeb40(uVar4);
      if ((bVar3 & 1) == 0) {
        iVar9 = 0x1c;
      }
      else {
        iVar9 = 0;
      }
      if (iVar9 == 0) {
        iVar10 = 0x1b;
        iVar9 = 0x1b;
        break;
      }
      iVar10 = iVar9 + -0x1c;
    } while (iVar10 == 0);
    FUN_019a6f00(iVar10,&stack0x000000a0);
    if (iVar9 != 0) goto joined_r0x027f4504;
  }
  else {
joined_r0x027f4504:
    if (iVar9 != 0x1b) goto LAB_027f4968;
  }
  if (bVar11 == 0) {
    iVar9 = 0x1e;
  }
  else {
    iVar9 = 0;
  }
  if (iVar9 == 0) {
    if (bVar1 || cVar12 != '\0') {
      iVar9 = 0;
    }
    else {
      iVar9 = 0x1e;
    }
    if (iVar9 == 0) {
      if (bVar1) {
        iVar9 = 0x1f;
      }
      else {
        iVar9 = 0;
      }
      cStack000000000000005c = cVar12;
      bStack0000000000000064 = bVar11;
      if (iVar9 == 0) {
        FUN_01876390(*(undefined8 *)PTR_DAT_03cc9e10);
        FUN_027d7fa0(&stack0x00000320,0);
LAB_027f4804:
        unaff_x21[0x45] = unaff_x21[0x51];
        iVar9 = 0;
        while( true ) {
          lVar7 = unaff_x21[0x45];
          FUN_018748a8(lVar7);
          if (iVar9 < (int)*(undefined8 *)(lVar7 + 0x18)) {
            iVar10 = 0x21;
          }
          else {
            iVar10 = 0;
          }
          if (iVar10 == 0) break;
          if (iVar10 + -0x21 != 0) {
            uVar6 = FUN_027f499c(iVar10 + -0x21);
            return uVar6;
          }
          uVar4 = unaff_x21[0x45];
          FUN_018748a8(uVar4);
          uVar4 = FUN_0199d8e4(uVar4,(long)iVar9);
          unaff_x21[0x43] = uVar4;
          uVar4 = unaff_x21[0x43];
          FUN_01876390(*(undefined8 *)PTR_DAT_03cc0330);
          FUN_027f4e20(&stack0x00000300,uVar4);
          iVar9 = FUN_019a62e4(iVar9,1);
        }
        uVar5 = unaff_x21[0x4e];
        thunk_FUN_01a6ca08(PTR_DAT_03cd8af8);
        uVar4 = thunk_FUN_01a89e68();
        FUN_026b21f8(uVar4,uVar5,0);
        uVar5 = thunk_FUN_01a6ca08(PTR_DAT_03cfd658);
                    /* WARNING: Subroutine does not return */
        FUN_01ab6b14(uVar4,uVar5);
      }
      if (iVar9 == 0x1f) goto LAB_027f4804;
      goto LAB_027f4968;
    }
  }
  if (iVar9 == 0x1e) {
    in_stack_0000032f = bVar11;
  }
LAB_027f4968:
  return (ulong)in_stack_0000032f;
}


