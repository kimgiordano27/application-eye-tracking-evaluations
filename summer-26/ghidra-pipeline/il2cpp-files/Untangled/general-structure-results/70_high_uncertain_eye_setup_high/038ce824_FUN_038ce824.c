/*
FUNCTION_NAME: FUN_038ce824
ENTRY_POINT: 038ce824
PROGRAM: Untangled-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


byte FUN_038ce824(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  long *plVar8;
  char *pcVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  undefined1 *__s;
  ulong uVar13;
  undefined8 uVar14;
  long *plVar15;
  undefined1 auStack_80 [8];
  long local_78;
  ulong local_70;
  long local_68;
  
  local_78 = tpidr_el0;
  local_68 = *(long *)(local_78 + 0x28);
  plVar15 = (long *)(param_4 + 0x38);
  if (*plVar15 == 0) {
    FUN_02f07e70(PTR_DAT_06d36f00);
    FUN_02f07e70(PTR_DAT_06d36f08);
    FUN_02f07e70(PTR_DAT_06d36f10);
    FUN_02f07e70(PTR_DAT_06d04048);
    FUN_02f07e70(PTR_DAT_06d04020);
    FUN_02f07e70(PTR_DAT_06d04060);
    FUN_02f07e70(PTR_DAT_06d02c80);
    FUN_02f07e70(PTR_DAT_06d04078);
    FUN_02f07e70(PTR_DAT_06d02598);
    FUN_02f07e70(PTR_DAT_06d02708);
    FUN_02f07e70(PTR_DAT_06d040f8);
    FUN_02f07e70(PTR_DAT_06d04108);
    FUN_02f07e70(PTR_DAT_06d04138);
    FUN_02f07e70(PTR_DAT_06d04140);
    FUN_02f07e70(PTR_DAT_06d04130);
    FUN_02f07e70(PTR_DAT_06d02bc8);
    FUN_02f07e70(PTR_DAT_06d04148);
    FUN_02f07e70(PTR_DAT_06d040b0);
    FUN_02f07e70(PTR_DAT_06d36f18);
    FUN_02f07e70(PTR_DAT_06d04150);
    FUN_02f07e70(PTR_DAT_06d04158);
    FUN_02f07e70(PTR_DAT_06d04160);
    FUN_02f07e70(PTR_DAT_06d02b98);
    FUN_02f07e70(PTR_DAT_06d36f20);
    FUN_02f07e70(PTR_DAT_06d02548);
    FUN_02f07e70(PTR_DAT_06d01eb0);
    FUN_02f07e70(PTR_DAT_06d36f28);
    if (*(long *)(param_4 + 0x38) != 0) goto System_Array__Empty<OVRAnchor_FilterUnion>;
    FUN_02eea7c4(param_4);
    if (param_3 == 0) goto System_Array__Empty<OVRPlugin_VirtualKeyboardModelAnimationState>;
LAB_038ce9c0:
    uVar13 = *(ulong *)(param_3 + 0x18);
    if (uVar13 == 0) goto LAB_038cea1c;
    uVar12 = -(uVar13 >> 0x1f & 1) & 0xfffffff800000000 | (uVar13 & 0xffffffff) << 3;
    if ((uVar13 & 0xffffffff) == 0) {
      __s = (undefined1 *)0x0;
    }
    else {
      __s = auStack_80 + -(uVar12 + 0xf & 0xfffffffffffffff0);
    }
    memset(__s,0,uVar12);
    if ((int)uVar13 < 0) {
      FUN_0562295c(0);
    }
  }
  else {
System_Array__Empty<OVRAnchor_FilterUnion>:
    if (param_3 != 0) goto LAB_038ce9c0;
System_Array__Empty<OVRPlugin_VirtualKeyboardModelAnimationState>:
    uVar13 = 0;
LAB_038cea1c:
    __s = (undefined1 *)0x0;
  }
  uVar13 = uVar13 & 0xffffffff;
  FUN_0666c570(param_3,__s,uVar13,0);
  puVar1 = PTR_DAT_06d01eb0;
  uVar14 = *(undefined8 *)*plVar15;
  if (*(int *)(*(long *)PTR_DAT_06d01eb0 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  uVar14 = FUN_056109c0(uVar14,0);
  puVar2 = PTR_DAT_06d36f10;
  if (*(int *)(*(long *)PTR_DAT_06d36f10 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  uVar12 = FUN_0667b224(uVar14,0);
  uVar14 = *(undefined8 *)*plVar15;
  if ((uVar12 & 1) == 0) {
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    uVar14 = FUN_056109c0(uVar14,0);
    uVar7 = FUN_056109c0(*(undefined8 *)PTR_DAT_06d02548,0);
    uVar12 = FUN_05619d34(uVar14,uVar7,0);
    if ((uVar12 & 1) == 0) {
      uVar14 = *(undefined8 *)*plVar15;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      uVar14 = FUN_056109c0(uVar14,0);
      uVar7 = FUN_056109c0(*(undefined8 *)PTR_DAT_06d36f00,0);
      uVar12 = FUN_05619d34(uVar14,uVar7,0);
      if ((uVar12 & 1) == 0) {
        uVar14 = *(undefined8 *)*plVar15;
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_02f12b58();
        }
        uVar14 = FUN_056109c0(uVar14,0);
        uVar7 = FUN_056109c0(*(undefined8 *)PTR_DAT_06d36f08,0);
        uVar12 = FUN_05619d34(uVar14,uVar7,0);
        if ((uVar12 & 1) == 0) {
          uVar14 = *(undefined8 *)PTR_DAT_06d36f18;
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_02f12b58();
          }
          uVar14 = FUN_056109c0(uVar14,0);
          uVar7 = FUN_056109c0(*(undefined8 *)*plVar15,0);
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_02f12b58();
          }
          uVar12 = FUN_0667b238(uVar14,uVar7,0);
          if ((uVar12 & 1) == 0) {
            uVar14 = *(undefined8 *)*plVar15;
            lVar11 = thunk_FUN_02f239f0(PTR_DAT_06d01eb0);
            if (*(int *)(lVar11 + 0xe0) == 0) {
              thunk_FUN_02f12b58();
            }
            plVar15 = (long *)FUN_056109c0(uVar14,0);
            if (plVar15 == (long *)0x0) {
              uVar14 = thunk_FUN_02f239f0(PTR_DAT_06d36f30);
              uVar7 = 0;
            }
            else {
              uVar14 = thunk_FUN_02f239f0(PTR_DAT_06d36f30);
              uVar7 = (**(code **)(*plVar15 + 0x168))(plVar15,*(undefined8 *)(*plVar15 + 0x170));
            }
            uVar10 = thunk_FUN_02f239f0(PTR_DAT_06d06580);
            uVar14 = FUN_05465414(uVar14,uVar7,uVar10,0);
            thunk_FUN_02f239f0(PTR_DAT_06d021d0);
            uVar7 = thunk_FUN_02ef1808();
            FUN_05639edc(uVar7,uVar14,0);
                    /* WARNING: Subroutine does not return */
            FUN_02f07f94(uVar7,param_4);
          }
          uVar14 = FUN_06676eac(*(undefined8 *)(param_1 + 0x18),0);
          uVar14 = FUN_0666db98(uVar14,param_2,__s,uVar13,0);
          bVar3 = FUN_037af800(uVar14,*(undefined8 *)(*plVar15 + 0x10));
          goto LAB_038cf500;
        }
        uVar14 = FUN_06676eac(*(undefined8 *)(param_1 + 0x18),0);
        uVar14 = FUN_0666db98(uVar14,param_2,__s,uVar13,0);
        uVar12 = FUN_0564625c(uVar14,0,0);
        if ((uVar12 & 1) != 0) goto LAB_038cef30;
        plVar8 = (long *)FUN_066799a4(uVar14,0);
        lVar11 = *(long *)(*plVar15 + 8);
        if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = FUN_02eea768(lVar11);
        }
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        if (*(long *)(*plVar8 + 0x40) != *(long *)(lVar11 + 0x40)) {
                    /* WARNING: Subroutine does not return */
          FUN_02f08440(plVar8);
        }
        pcVar9 = (char *)thunk_FUN_02ef195c(plVar8);
      }
      else {
        uVar14 = FUN_06676eac(*(undefined8 *)(param_1 + 0x18),0);
        uVar14 = FUN_0666db98(uVar14,param_2,__s,uVar13,0);
        uVar12 = FUN_0564625c(uVar14,0,0);
        if ((uVar12 & 1) != 0) {
LAB_038cef30:
          bVar3 = 0;
          goto LAB_038cf500;
        }
        plVar8 = (long *)FUN_0667b090(uVar14,0);
        lVar11 = *(long *)(*plVar15 + 8);
        if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = FUN_02eea768(lVar11);
        }
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        if (*(long *)(*plVar8 + 0x40) != *(long *)(lVar11 + 0x40)) {
                    /* WARNING: Subroutine does not return */
          FUN_02f08440(plVar8);
        }
        pcVar9 = (char *)thunk_FUN_02ef195c(plVar8);
      }
    }
    else {
      uVar14 = FUN_06676eac(*(undefined8 *)(param_1 + 0x18),0);
      plVar8 = (long *)FUN_06674c88(uVar14,param_2,__s,uVar13,0);
      lVar11 = *(long *)(*plVar15 + 8);
      if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_02eea768(lVar11);
      }
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      if (*(long *)(*plVar8 + 0x40) != *(long *)(lVar11 + 0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_02f08440(plVar8);
      }
      pcVar9 = (char *)thunk_FUN_02ef195c(plVar8);
    }
  }
  else {
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    uVar14 = FUN_056109c0(uVar14,0);
    uVar7 = FUN_056109c0(*(undefined8 *)PTR_DAT_06d04130,0);
    uVar12 = FUN_05619d34(uVar14,uVar7,0);
    if ((uVar12 & 1) == 0) {
      uVar14 = *(undefined8 *)*plVar15;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      uVar14 = FUN_056109c0(uVar14,0);
      uVar7 = FUN_056109c0(*(undefined8 *)PTR_DAT_06d04048,0);
      uVar12 = FUN_05619d34(uVar14,uVar7,0);
      if ((uVar12 & 1) == 0) {
        uVar14 = *(undefined8 *)*plVar15;
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_02f12b58();
        }
        uVar14 = FUN_056109c0(uVar14,0);
        uVar7 = FUN_056109c0(*(undefined8 *)PTR_DAT_06d04060,0);
        uVar12 = FUN_05619d34(uVar14,uVar7,0);
        if ((uVar12 & 1) == 0) {
          uVar14 = *(undefined8 *)*plVar15;
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_02f12b58();
          }
          uVar14 = FUN_056109c0(uVar14,0);
          uVar7 = FUN_056109c0(*(undefined8 *)PTR_DAT_06d04150,0);
          uVar12 = FUN_05619d34(uVar14,uVar7,0);
          if ((uVar12 & 1) == 0) {
            uVar14 = *(undefined8 *)*plVar15;
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_02f12b58();
            }
            uVar14 = FUN_056109c0(uVar14,0);
            uVar7 = FUN_056109c0(*(undefined8 *)PTR_DAT_06d04138,0);
            uVar12 = FUN_05619d34(uVar14,uVar7,0);
            if ((uVar12 & 1) == 0) {
              uVar14 = *(undefined8 *)*plVar15;
              if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                thunk_FUN_02f12b58();
              }
              uVar14 = FUN_056109c0(uVar14,0);
              uVar7 = FUN_056109c0(*(undefined8 *)PTR_DAT_06d04148,0);
              uVar12 = FUN_05619d34(uVar14,uVar7,0);
              if ((uVar12 & 1) == 0) {
                uVar14 = *(undefined8 *)*plVar15;
                if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                  thunk_FUN_02f12b58();
                }
                uVar14 = FUN_056109c0(uVar14,0);
                uVar7 = FUN_056109c0(*(undefined8 *)PTR_DAT_06d04160,0);
                uVar12 = FUN_05619d34(uVar14,uVar7,0);
                if ((uVar12 & 1) == 0) {
                  uVar14 = *(undefined8 *)*plVar15;
                  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                    thunk_FUN_02f12b58();
                  }
                  uVar14 = FUN_056109c0(uVar14,0);
                  uVar7 = FUN_056109c0(*(undefined8 *)PTR_DAT_06d040f8,0);
                  uVar12 = FUN_05619d34(uVar14,uVar7,0);
                  if ((uVar12 & 1) == 0) {
                    uVar14 = *(undefined8 *)*plVar15;
                    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                      thunk_FUN_02f12b58();
                    }
                    uVar14 = FUN_056109c0(uVar14,0);
                    uVar7 = FUN_056109c0(*(undefined8 *)PTR_DAT_06d04078,0);
                    uVar12 = FUN_05619d34(uVar14,uVar7,0);
                    if ((uVar12 & 1) == 0) goto LAB_038cef30;
                    uVar14 = FUN_06676eac(*(undefined8 *)(param_1 + 0x18),0);
                    uVar5 = FUN_06674d00(uVar14,param_2,__s,uVar13,0);
                    local_70 = CONCAT62(local_70._2_6_,uVar5);
                    plVar8 = (long *)thunk_FUN_02ef1438(*(undefined8 *)PTR_DAT_06d02598,&local_70);
                    lVar11 = *(long *)(*plVar15 + 8);
                    if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
                      lVar11 = FUN_02eea768(lVar11);
                    }
                    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_02f080c0();
                    }
                    if (*(long *)(*plVar8 + 0x40) != *(long *)(lVar11 + 0x40)) {
                    /* WARNING: Subroutine does not return */
                      FUN_02f08440(plVar8);
                    }
                    pcVar9 = (char *)thunk_FUN_02ef195c(plVar8);
                  }
                  else {
                    uVar14 = FUN_06676eac(*(undefined8 *)(param_1 + 0x18),0);
                    local_70 = FUN_06674d78(uVar14,param_2,__s,uVar13,0);
                    plVar8 = (long *)thunk_FUN_02ef1438(*(undefined8 *)PTR_DAT_06d04108,&local_70);
                    lVar11 = *(long *)(*plVar15 + 8);
                    if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
                      lVar11 = FUN_02eea768(lVar11);
                    }
                    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_02f080c0();
                    }
                    if (*(long *)(*plVar8 + 0x40) != *(long *)(lVar11 + 0x40)) {
                    /* WARNING: Subroutine does not return */
                      FUN_02f08440(plVar8);
                    }
                    pcVar9 = (char *)thunk_FUN_02ef195c(plVar8);
                  }
                }
                else {
                  uVar14 = FUN_06676eac(*(undefined8 *)(param_1 + 0x18),0);
                  uVar6 = FUN_06674dfc(uVar14,param_2,__s,uVar13,0);
                  local_70 = CONCAT44(local_70._4_4_,uVar6);
                  plVar8 = (long *)thunk_FUN_02ef1438(*(undefined8 *)PTR_DAT_06d02b98,&local_70);
                  lVar11 = *(long *)(*plVar15 + 8);
                  if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
                    lVar11 = FUN_02eea768(lVar11);
                  }
                  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02f080c0();
                  }
                  if (*(long *)(*plVar8 + 0x40) != *(long *)(lVar11 + 0x40)) {
                    /* WARNING: Subroutine does not return */
                    FUN_02f08440(plVar8);
                  }
                  pcVar9 = (char *)thunk_FUN_02ef195c(plVar8);
                }
              }
              else {
                uVar14 = FUN_06676eac(*(undefined8 *)(param_1 + 0x18),0);
                local_70 = FUN_06674e80(uVar14,param_2,__s,uVar13,0);
                plVar8 = (long *)thunk_FUN_02ef1438(*(undefined8 *)PTR_DAT_06d040b0,&local_70);
                lVar11 = *(long *)(*plVar15 + 8);
                if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
                  lVar11 = FUN_02eea768(lVar11);
                }
                if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02f080c0();
                }
                if (*(long *)(*plVar8 + 0x40) != *(long *)(lVar11 + 0x40)) {
                    /* WARNING: Subroutine does not return */
                  FUN_02f08440(plVar8);
                }
                pcVar9 = (char *)thunk_FUN_02ef195c(plVar8);
              }
            }
            else {
              uVar14 = FUN_06676eac(*(undefined8 *)(param_1 + 0x18),0);
              uVar5 = UnityEngine_TextCore_Text_TextGenerator__ValidateHtmlTag
                                (uVar14,param_2,__s,uVar13,0);
              local_70 = CONCAT62(local_70._2_6_,uVar5);
              plVar8 = (long *)thunk_FUN_02ef1438(*(undefined8 *)PTR_DAT_06d04140,&local_70);
              lVar11 = *(long *)(*plVar15 + 8);
              if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
                lVar11 = FUN_02eea768(lVar11);
              }
              if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c0();
              }
              if (*(long *)(*plVar8 + 0x40) != *(long *)(lVar11 + 0x40)) {
                    /* WARNING: Subroutine does not return */
                FUN_02f08440(plVar8);
              }
              pcVar9 = (char *)thunk_FUN_02ef195c(plVar8);
            }
          }
          else {
            uVar14 = FUN_06676eac(*(undefined8 *)(param_1 + 0x18),0);
            uVar4 = FUN_06674f70(uVar14,param_2,__s,uVar13,0);
            local_70 = CONCAT71(local_70._1_7_,uVar4);
            plVar8 = (long *)thunk_FUN_02ef1438(*(undefined8 *)PTR_DAT_06d04158,&local_70);
            lVar11 = *(long *)(*plVar15 + 8);
            if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
              lVar11 = FUN_02eea768(lVar11);
            }
            if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f080c0();
            }
            if (*(long *)(*plVar8 + 0x40) != *(long *)(lVar11 + 0x40)) {
                    /* WARNING: Subroutine does not return */
              FUN_02f08440(plVar8);
            }
            pcVar9 = (char *)thunk_FUN_02ef195c(plVar8);
          }
        }
        else {
          if (*(int *)(*(long *)PTR_DAT_06d02708 + 0xe0) == 0) {
            thunk_FUN_02f12b58();
          }
          FUN_06694324(*(undefined8 *)PTR_DAT_06d36f28,0);
          uVar14 = FUN_06676eac(*(undefined8 *)(param_1 + 0x18),0);
          uVar4 = FUN_06674f70(uVar14,param_2,__s,uVar13,0);
          local_70 = CONCAT71(local_70._1_7_,uVar4);
          plVar8 = (long *)thunk_FUN_02ef1438(*(undefined8 *)PTR_DAT_06d02c80,&local_70);
          lVar11 = *(long *)(*plVar15 + 8);
          if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
            lVar11 = FUN_02eea768(lVar11);
          }
          if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
          if (*(long *)(*plVar8 + 0x40) != *(long *)(lVar11 + 0x40)) {
                    /* WARNING: Subroutine does not return */
            FUN_02f08440(plVar8);
          }
          pcVar9 = (char *)thunk_FUN_02ef195c(plVar8);
        }
      }
      else {
        uVar14 = FUN_06676eac(*(undefined8 *)(param_1 + 0x18),0);
        uVar4 = FUN_06674fe8(uVar14,param_2,__s,uVar13,0);
        local_70 = CONCAT71(local_70._1_7_,uVar4) & 0xffffffffffffff01;
        plVar8 = (long *)thunk_FUN_02ef1438(*(undefined8 *)PTR_DAT_06d04020,&local_70);
        lVar11 = *(long *)(*plVar15 + 8);
        if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = FUN_02eea768(lVar11);
        }
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        if (*(long *)(*plVar8 + 0x40) != *(long *)(lVar11 + 0x40)) {
                    /* WARNING: Subroutine does not return */
          FUN_02f08440(plVar8);
        }
        pcVar9 = (char *)thunk_FUN_02ef195c(plVar8);
      }
    }
    else {
      uVar14 = FUN_06676eac(*(undefined8 *)(param_1 + 0x18),0);
      uVar6 = FUN_06675060(uVar14,param_2,__s,uVar13,0);
      local_70 = CONCAT44(local_70._4_4_,uVar6);
      plVar8 = (long *)thunk_FUN_02ef1438(*(undefined8 *)PTR_DAT_06d02bc8,&local_70);
      lVar11 = *(long *)(*plVar15 + 8);
      if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_02eea768(lVar11);
      }
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      if (*(long *)(*plVar8 + 0x40) != *(long *)(lVar11 + 0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_02f08440(plVar8);
      }
      pcVar9 = (char *)thunk_FUN_02ef195c(plVar8);
    }
  }
  bVar3 = *pcVar9 != '\0';
LAB_038cf500:
  thunk_FUN_0666c6ec(param_3,__s,uVar13,0);
  if (*(long *)(local_78 + 0x28) == local_68) {
    return bVar3 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


