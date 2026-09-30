/*
FUNCTION_NAME: FUN_027f38b0
ENTRY_POINT: 027f38b0
PROGRAM: vrlegs-libil2cpp.so
SCORE: 94
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_21;strong_foveation_hits_1;functionality_foveated_rendering
*/


/* WARNING: Removing unreachable block (ram,0x027f3d4c) */
/* WARNING: Removing unreachable block (ram,0x027f3de0) */

ulong FUN_027f38b0(long param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  byte bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  int iVar9;
  undefined8 *local_2c8;
  undefined1 auStack_2c0 [16];
  undefined8 local_2b0;
  long local_2a8;
  long local_2a0;
  byte local_294;
  long local_290;
  byte local_27c;
  undefined8 local_278;
  undefined8 local_270;
  byte local_264;
  undefined8 local_260;
  byte local_254;
  undefined8 local_250;
  byte local_244;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 local_220;
  undefined8 *local_218;
  undefined1 auStack_210 [16];
  undefined8 local_200;
  long local_1f8;
  byte local_1ec;
  undefined8 local_1e8;
  byte local_1dc;
  undefined8 local_1d8;
  int local_1cc;
  long local_1c8;
  long local_1c0;
  int local_1b8;
  int local_1b4;
  long local_1b0;
  byte local_1a4;
  long local_1a0;
  byte local_194;
  long local_190;
  byte local_184;
  long local_180;
  byte local_174;
  long local_170;
  long local_168;
  undefined1 local_160;
  byte local_15c;
  long local_158;
  byte local_14c;
  long local_148;
  long local_140;
  long local_138;
  byte local_130;
  int local_12c;
  byte local_128;
  byte local_124;
  long local_120;
  undefined8 local_118;
  long local_110;
  long local_108;
  int local_100;
  int local_fc;
  long local_f8;
  long local_f0;
  undefined8 local_e8;
  int local_dc;
  undefined8 local_d8;
  int local_cc;
  long local_c8;
  uint local_bc;
  undefined8 local_b8;
  int local_ac;
  long local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  byte local_8c;
  long local_88;
  int local_80;
  byte local_7c;
  byte local_78;
  byte local_74;
  long local_70;
  long local_68;
  undefined8 local_60;
  undefined8 local_58;
  int local_4c;
  long local_48;
  undefined8 local_40;
  byte local_31;
  
  local_58 = param_4;
  local_4c = param_2;
  local_48 = param_1;
  local_40 = param_3;
  if ((DAT_0412516c & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cc9e10);
    FUN_01ab69ac(PTR_DAT_03cc4f10);
    FUN_01ab69ac(PTR_DAT_03cbed08);
    FUN_01ab69ac(PTR_DAT_03cfd580);
    FUN_01ab69ac(PTR_DAT_03cfd588);
    FUN_01ab69ac(PTR_DAT_03cbed20);
    FUN_01ab69ac(PTR_DAT_03cfd650);
    FUN_01ab69ac(PTR_DAT_03cc0330);
    DAT_0412516c = 1;
  }
  local_60 = 0;
  local_68 = 0;
  local_70 = 0;
  local_74 = 0;
  local_78 = 0;
  local_7c = 0;
  local_80 = 0;
  local_88 = 0;
  local_8c = 0;
  local_98 = 0;
  local_a0 = 0;
  local_a8 = 0;
  local_ac = 0;
  local_b8 = 0;
  local_bc = 0;
  local_c8 = local_48;
  if (local_48 == 0) {
    local_cc = 0;
  }
  else {
    local_cc = 2;
  }
  if (local_cc == 0) {
    thunk_FUN_01a6ca08(PTR_DAT_03cbdf98);
    uVar5 = thunk_FUN_01a89e68();
    local_d8 = uVar5;
    uVar6 = thunk_FUN_01a6ca08(PTR_DAT_03cd9100);
    FUN_026a44fc(uVar5,uVar6,0);
    uVar5 = local_d8;
    uVar6 = thunk_FUN_01a6ca08(PTR_DAT_03cfd658);
                    /* WARNING: Subroutine does not return */
    FUN_01ab6b14(uVar5,uVar6);
  }
  if (local_cc == 2) {
    local_dc = local_4c;
    if (local_4c < -1) {
      local_cc = 0;
    }
    else {
      local_cc = 5;
    }
    if (local_cc == 0) {
      thunk_FUN_01a6ca08(PTR_DAT_03cbde98);
      uVar5 = thunk_FUN_01a89e68();
      local_e8 = uVar5;
      uVar6 = thunk_FUN_01a6ca08(PTR_DAT_03cfcc18);
      FUN_026b3fc8(uVar5,uVar6,0);
      uVar5 = local_e8;
      uVar6 = thunk_FUN_01a6ca08(PTR_DAT_03cfd658);
                    /* WARNING: Subroutine does not return */
      FUN_01ab6b14(uVar5,uVar6);
    }
    if (local_cc == 5) {
      FUN_01876390(*(undefined8 *)PTR_DAT_03cc9e10);
      FUN_027d7fa0(&local_40,0);
      local_60 = 0;
      local_68 = 0;
      local_70 = 0;
      local_74 = 0;
      local_78 = 0;
      local_7c = 1;
      local_f0 = local_48;
      FUN_018748a8(local_48);
      local_80 = FUN_019a62dc(*(undefined8 *)(local_f0 + 0x18),1);
      while( true ) {
        local_1b8 = local_80;
        if (local_80 < 0) {
          local_cc = 0;
        }
        else {
          local_cc = 9;
        }
        if (local_cc == 0) break;
        if (local_cc + -9 != 0) {
          uVar8 = FUN_027f499c(local_cc + -9);
          return uVar8;
        }
        local_f8 = local_48;
        local_fc = local_80;
        FUN_018748a8(local_48);
        local_100 = local_fc;
        local_110 = FUN_0199d8e4(local_f8,(long)local_fc);
        if (local_110 == 0) {
          local_cc = 0;
        }
        else {
          local_cc = 10;
        }
        local_108 = local_110;
        local_88 = local_110;
        if (local_cc == 0) {
          thunk_FUN_01a6ca08(PTR_DAT_03cbdfd0);
          uVar5 = thunk_FUN_01a89e68();
          local_118 = uVar5;
          uVar6 = thunk_FUN_01a6ca08(PTR_DAT_03cfd660);
          uVar7 = thunk_FUN_01a6ca08(PTR_DAT_03cd9100);
          FUN_026a7658(uVar5,uVar6,uVar7,0);
          uVar5 = local_118;
          uVar6 = thunk_FUN_01a6ca08(PTR_DAT_03cfd658);
                    /* WARNING: Subroutine does not return */
          FUN_01ab6b14(uVar5,uVar6);
        }
        if (local_cc != 10) goto LAB_027f4968;
        local_120 = local_110;
        FUN_018748a8(local_110);
        local_128 = FUN_027e971c(local_120);
        local_128 = local_128 & 1;
        if ((bool)local_128 == false) {
          local_cc = 0;
        }
        else {
          local_cc = 0xd;
        }
        local_8c = local_128;
        local_124 = local_128;
        if (local_cc == 0) {
          local_12c = local_4c;
          if (local_4c == -1) {
            local_cc = 0;
          }
          else {
            local_cc = 0xe;
          }
          if (local_cc == 0) {
            FUN_01876390(*(undefined8 *)PTR_DAT_03cc9e10);
            local_130 = OVRManager__SetFoveatedRenderingLevel(&local_40,0);
            local_130 = local_130 & 1;
            if (local_130 == 0) {
              local_cc = 0xf;
            }
            else {
              local_cc = 0;
            }
            if (local_cc != 0) {
              if (local_cc == 0xf) {
                local_148 = local_88;
                FUN_018748a8(local_88);
                local_14c = FUN_027f2528(local_148);
                local_14c = local_14c & 1;
                if (local_14c == 0) {
                  local_cc = 0x10;
                }
                else {
                  local_cc = 0;
                }
                if (local_cc == 0) {
                  local_158 = local_88;
                  FUN_018748a8(local_88);
                  local_15c = FUN_027e971c(local_158);
                  local_15c = local_15c & 1;
                  local_bc = (uint)local_15c;
                }
                else {
                  if (local_cc != 0x10) goto LAB_027f4968;
                  local_bc = 0;
                }
                local_160 = local_bc != 0;
                if ((bool)local_160) {
                  local_cc = 0xd;
                }
                else {
                  local_cc = 0;
                }
                local_8c = local_160;
                if (local_cc != 0) goto joined_r0x027f3e30;
                local_168 = local_88;
                local_170 = local_48;
                FUN_018748a8(local_48);
                FUN_01876390(*(undefined8 *)PTR_DAT_03cc0330);
                thunk_FUN_01ff0358(local_168,&local_68,*(undefined8 *)(local_170 + 0x18),
                                   *(undefined8 *)PTR_DAT_03cfd650);
                goto LAB_027f3e80;
              }
              goto LAB_027f4968;
            }
          }
          else if (local_cc != 0xe) goto LAB_027f4968;
          local_138 = local_88;
          local_140 = local_48;
          FUN_018748a8(local_48);
          FUN_01876390(*(undefined8 *)PTR_DAT_03cc0330);
          thunk_FUN_01ff0358(local_138,&local_68,*(undefined8 *)(local_140 + 0x18),
                             *(undefined8 *)PTR_DAT_03cfd650);
        }
        else {
joined_r0x027f3e30:
          if (local_cc != 0xd) goto LAB_027f4968;
        }
LAB_027f3e80:
        local_174 = local_8c & 1;
        if (local_174 == 0) {
          local_cc = 0x12;
        }
        else {
          local_cc = 0;
        }
        if (local_cc == 0) {
          local_180 = local_88;
          FUN_018748a8(local_88);
          local_184 = FUN_027ef73c(local_180);
          local_184 = local_184 & 1;
          if (local_184 == 0) {
            local_cc = 0x13;
          }
          else {
            local_cc = 0;
          }
          if (local_cc == 0) {
            local_74 = 1;
          }
          else {
            if (local_cc != 0x13) goto LAB_027f4968;
            local_190 = local_88;
            FUN_018748a8(local_88);
            local_194 = FUN_027ef910(local_190);
            local_194 = local_194 & 1;
            if (local_194 == 0) {
              local_cc = 0x14;
            }
            else {
              local_cc = 0;
            }
            if (local_cc == 0) {
              local_78 = 1;
            }
            else if (local_cc != 0x14) goto LAB_027f4968;
          }
          local_1a0 = local_88;
          FUN_018748a8(local_88);
          local_1a4 = FUN_027eeb90(local_1a0);
          local_1a4 = local_1a4 & 1;
          if (local_1a4 == 0) {
            local_cc = 0x12;
          }
          else {
            local_cc = 0;
          }
          if (local_cc != 0) goto joined_r0x027f3fb8;
          local_1b0 = local_88;
          FUN_01876390(*(undefined8 *)PTR_DAT_03cc0330);
          thunk_FUN_01ff0358(local_1b0,&local_70,1,*(undefined8 *)PTR_DAT_03cfd650);
        }
        else {
joined_r0x027f3fb8:
          if (local_cc != 0x12) goto LAB_027f4968;
        }
        local_1b4 = local_80;
        local_80 = FUN_019a62dc(local_80,1);
      }
      local_1c0 = local_68;
      if (local_68 == 0) {
        local_cc = 0x15;
      }
      else {
        local_cc = 0;
      }
      if (local_cc == 0) {
        local_1c8 = local_68;
        local_1cc = local_4c;
        local_1d8 = local_40;
        FUN_01876390(*(undefined8 *)PTR_DAT_03cc0330);
        local_1e8 = local_1d8;
        local_1ec = FUN_027f4a34(local_1c8,local_1cc,local_1d8);
        local_1ec = local_1ec & 1;
        if (local_1ec == 0) {
          local_cc = 0x16;
        }
        else {
          local_cc = 0;
        }
        local_1dc = local_1ec;
        local_7c = local_1ec;
        if (local_cc == 0) {
          local_1f8 = local_68;
          FUN_018748a8(local_68);
          local_200 = FUN_018856b8(0,*(undefined8 *)PTR_DAT_03cfd580,local_1f8);
          local_218 = &local_98;
          local_98 = local_200;
          FUN_019a6eec(auStack_210,&local_218);
          goto LAB_027f435c;
        }
        if (local_cc == 0x16) goto LAB_027f445c;
      }
      else if (local_cc == 0x15) goto LAB_027f4480;
    }
  }
  goto LAB_027f4968;
  while (iVar9 = local_cc + -0x17, iVar9 == 0) {
LAB_027f435c:
    local_278 = local_98;
    FUN_018748a8(local_98);
    local_27c = FUN_018856b8(0,*(undefined8 *)PTR_DAT_03cbed20,local_278);
    local_27c = local_27c & 1;
    if (local_27c == 0) {
      local_cc = 0;
    }
    else {
      local_cc = 0x18;
    }
    if (local_cc == 0) {
      iVar9 = 0x16;
      local_cc = 0x16;
      break;
    }
    if (local_cc + -0x18 != 0) {
      uVar8 = FUN_027f499c(local_cc + -0x18);
      return uVar8;
    }
    local_220 = local_98;
    FUN_018748a8(local_98);
    local_240 = FUN_018856b8(0,*(undefined8 *)PTR_DAT_03cfd588,local_220);
    local_238 = local_240;
    local_a0 = local_240;
    FUN_018748a8(local_240);
    local_244 = FUN_027ef73c(local_240);
    local_244 = local_244 & 1;
    if (local_244 == 0) {
      local_cc = 0x19;
    }
    else {
      local_cc = 0;
    }
    if (local_cc == 0) {
      local_74 = 1;
    }
    else {
      iVar9 = local_cc + -0x19;
      if (iVar9 != 0) break;
      local_250 = local_a0;
      FUN_018748a8(local_a0);
      local_254 = FUN_027ef910(local_250);
      local_254 = local_254 & 1;
      if (local_254 == 0) {
        local_cc = 0x1a;
      }
      else {
        local_cc = 0;
      }
      if (local_cc == 0) {
        local_78 = 1;
      }
      else {
        iVar9 = local_cc + -0x1a;
        if (iVar9 != 0) break;
      }
    }
    local_260 = local_a0;
    FUN_018748a8(local_a0);
    local_264 = FUN_027eeb90(local_260);
    local_264 = local_264 & 1;
    if (local_264 == 0) {
      local_cc = 0x17;
    }
    else {
      local_cc = 0;
    }
    if (local_cc == 0) {
      local_270 = local_a0;
      FUN_01876390(*(undefined8 *)PTR_DAT_03cc0330);
      thunk_FUN_01ff0358(local_270,&local_70,1,*(undefined8 *)PTR_DAT_03cfd650);
      goto LAB_027f435c;
    }
  }
  FUN_019a6f00(iVar9,auStack_210);
  if ((local_cc != 0) && (local_cc != 0x16)) goto LAB_027f4968;
LAB_027f445c:
  local_290 = local_48;
  FUN_01876390(*(undefined8 *)PTR_DAT_03cc4f10);
  FUN_027a951c(local_290,0);
LAB_027f4480:
  local_294 = local_7c & 1;
  if (local_294 == 0) {
    local_cc = 0x1b;
  }
  else {
    local_cc = 0;
  }
  if (local_cc == 0) {
    local_2a0 = local_70;
    if (local_70 == 0) {
      local_cc = 0x1b;
    }
    else {
      local_cc = 0;
    }
    if (local_cc != 0) goto joined_r0x027f4504;
    local_2a8 = local_70;
    FUN_018748a8(local_70);
    local_2b0 = FUN_018856b8(0,*(undefined8 *)PTR_DAT_03cfd580,local_2a8);
    local_2c8 = &local_98;
    local_98 = local_2b0;
    FUN_019a6eec(auStack_2c0,&local_2c8);
    do {
      uVar5 = local_98;
      FUN_018748a8(local_98);
      bVar4 = FUN_018856b8(0,*(undefined8 *)PTR_DAT_03cbed20,uVar5);
      uVar5 = local_98;
      if ((bVar4 & 1) == 0) {
        local_cc = 0;
      }
      else {
        local_cc = 0x1d;
      }
      if (local_cc == 0) {
        iVar9 = 0x1b;
        local_cc = 0x1b;
        break;
      }
      if (local_cc + -0x1d != 0) {
        uVar8 = FUN_027f499c(local_cc + -0x1d);
        return uVar8;
      }
      FUN_018748a8(local_98);
      uVar5 = FUN_018856b8(0,*(undefined8 *)PTR_DAT_03cfd588,uVar5);
      FUN_018748a8(uVar5);
      bVar4 = FUN_027eeb40(uVar5);
      if ((bVar4 & 1) == 0) {
        local_cc = 0x1c;
      }
      else {
        local_cc = 0;
      }
      if (local_cc == 0) {
        iVar9 = 0x1b;
        local_cc = 0x1b;
        break;
      }
      iVar9 = local_cc + -0x1c;
    } while (iVar9 == 0);
    FUN_019a6f00(iVar9,auStack_2c0);
    if (local_cc != 0) goto joined_r0x027f4504;
  }
  else {
joined_r0x027f4504:
    if (local_cc != 0x1b) goto LAB_027f4968;
  }
  if ((local_7c & 1) == 0) {
    local_cc = 0x1e;
  }
  else {
    local_cc = 0;
  }
  if (local_cc == 0) {
    if ((local_74 & 1) == 0 && (local_78 & 1) == 0) {
      local_cc = 0x1e;
    }
    else {
      local_cc = 0;
    }
    if (local_cc == 0) {
      if ((local_74 & 1) == 0) {
        local_cc = 0;
      }
      else {
        local_cc = 0x1f;
      }
      if (local_cc == 0) {
        FUN_01876390(*(undefined8 *)PTR_DAT_03cc9e10);
        FUN_027d7fa0(&local_40,0);
LAB_027f4804:
        local_a8 = local_48;
        local_ac = 0;
        local_cc = 0x20;
        while( true ) {
          lVar2 = local_a8;
          iVar9 = local_ac;
          FUN_018748a8(local_a8);
          uVar5 = local_60;
          lVar3 = local_a8;
          iVar1 = local_ac;
          if (iVar9 < (int)*(undefined8 *)(lVar2 + 0x18)) {
            local_cc = 0x21;
          }
          else {
            local_cc = 0;
          }
          if (local_cc == 0) break;
          if (local_cc + -0x21 != 0) {
            uVar8 = FUN_027f499c(local_cc + -0x21);
            return uVar8;
          }
          FUN_018748a8(local_a8);
          uVar5 = FUN_0199d8e4(lVar3,(long)iVar1);
          local_b8 = uVar5;
          FUN_01876390(*(undefined8 *)PTR_DAT_03cc0330);
          FUN_027f4e20(&local_60,uVar5);
          local_ac = FUN_019a62e4(local_ac,1);
        }
        thunk_FUN_01a6ca08(PTR_DAT_03cd8af8);
        uVar6 = thunk_FUN_01a89e68();
        FUN_026b21f8(uVar6,uVar5,0);
        uVar5 = thunk_FUN_01a6ca08(PTR_DAT_03cfd658);
                    /* WARNING: Subroutine does not return */
        FUN_01ab6b14(uVar6,uVar5);
      }
      if (local_cc == 0x1f) goto LAB_027f4804;
      goto LAB_027f4968;
    }
  }
  if (local_cc == 0x1e) {
    local_31 = local_7c & 1;
  }
LAB_027f4968:
  return (ulong)local_31;
}


