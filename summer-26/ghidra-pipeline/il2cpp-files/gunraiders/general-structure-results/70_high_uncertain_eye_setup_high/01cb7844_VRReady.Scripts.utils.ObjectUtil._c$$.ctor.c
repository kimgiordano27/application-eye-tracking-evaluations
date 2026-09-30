/*
FUNCTION_NAME: VRReady.Scripts.utils.ObjectUtil.<>c$$.ctor
ENTRY_POINT: 01cb7844
PROGRAM: gunraiders-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Type propagation algorithm not settling */

undefined4 VRReady_Scripts_utils_ObjectUtil_<>c___ctor(int *param_1,long *param_2)

{
  ulong uVar1;
  byte *pbVar2;
  size_t sVar3;
  ulong uVar4;
  wchar_t *pwVar5;
  undefined1 in_ZR;
  bool bVar6;
  undefined1 uVar7;
  bool bVar8;
  wchar_t wVar9;
  int iVar10;
  void *pvVar11;
  long *plVar12;
  ulong uVar13;
  long *plVar14;
  int *piVar15;
  byte *pbVar16;
  uint *puVar17;
  byte bVar18;
  ulong uVar19;
  uint *puVar20;
  uint *puVar21;
  uint *puVar22;
  uint *puVar23;
  ulong uVar24;
  ulong uVar25;
  undefined1 *puVar26;
  long lVar27;
  uint *unaff_x19;
  uint unaff_w20;
  undefined4 uVar28;
  long *unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  ulong uVar29;
  uint uVar30;
  int *piVar31;
  int *piVar32;
  ulong unaff_x25;
  byte *unaff_x26;
  int *unaff_x27;
  long *unaff_x28;
  long unaff_x29;
  void *in_stack_00000010;
  undefined1 *in_stack_00000018;
  int *in_stack_00000020;
  int *in_stack_00000028;
  undefined8 in_stack_00000030;
  uint *in_stack_00000038;
  long in_stack_00000040;
  byte *in_stack_00000048;
  undefined8 in_stack_00000050;
  code *in_stack_00000058;
  int *in_stack_00000060;
  uint *in_stack_00000068;
  long *in_stack_00000070;
  uint *in_stack_00000078;
  undefined8 in_stack_00000080;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
  in_stack_00000088;
  ulong in_stack_00000090;
  void *in_stack_00000098;
  byte in_stack_000000a0;
  ulong in_stack_000000a8;
  int *in_stack_000000b0;
  byte in_stack_000000b8;
  ulong in_stack_000000c0;
  int *in_stack_000000c8;
  byte in_stack_000000d0;
  ulong in_stack_000000d8;
  int *in_stack_000000e0;
  byte in_stack_000000e8;
  ulong in_stack_000000f0;
  byte *in_stack_000000f8;
  int iStack0000000000000100;
  int iStack0000000000000104;
  undefined8 in_stack_00000108;
  
code_r0x01cb7844:
  if ((bool)in_ZR) {
    iVar10 = (**(code **)(*param_2 + 0x48))();
  }
  else {
    iVar10 = *param_1;
  }
  if (iVar10 == -1) {
    *unaff_x21 = 0;
    goto LAB_01cb787c;
  }
  bVar6 = *unaff_x21 == 0;
  if (unaff_x22 != (long *)0x0) goto LAB_01cb7884;
LAB_01cb78b8:
  unaff_x22 = (long *)0x0;
  uVar29 = unaff_x25;
  pbVar16 = in_stack_00000048;
  if (bVar6) goto switchD_01cb7390_default;
  do {
    plVar12 = (long *)*unaff_x21;
    if (plVar12[3] == plVar12[4]) {
      (**(code **)(*plVar12 + 0x48))();
    }
    uVar13 = (**(code **)(*unaff_x23 + 0x18))();
    uVar29 = unaff_x25;
    pbVar16 = in_stack_00000048;
    if ((uVar13 & 1) == 0) goto switchD_01cb7390_default;
    plVar12 = (long *)*unaff_x21;
    pwVar5 = (wchar_t *)plVar12[3];
    if (pwVar5 == (wchar_t *)plVar12[4]) {
      wVar9 = (**(code **)(*plVar12 + 0x50))();
    }
    else {
      plVar12[3] = (long)(pwVar5 + 1);
      wVar9 = *pwVar5;
    }
    std::__ndk1::
    basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::
    push_back(&stack0x00000088,wVar9);
LAB_01cb7834:
    param_2 = (long *)*unaff_x21;
    if (param_2 != (long *)0x0) {
      param_1 = (int *)param_2[3];
      in_ZR = param_1 == (int *)param_2[4];
      goto code_r0x01cb7844;
    }
LAB_01cb787c:
    bVar6 = true;
    if (unaff_x22 == (long *)0x0) goto LAB_01cb78b8;
LAB_01cb7884:
    if ((int *)unaff_x22[3] == (int *)unaff_x22[4]) {
      iVar10 = (**(code **)(*unaff_x22 + 0x48))(unaff_x22);
    }
    else {
      iVar10 = *(int *)unaff_x22[3];
    }
    if (iVar10 == -1) goto LAB_01cb78b8;
    uVar29 = unaff_x25;
    pbVar16 = in_stack_00000048;
    if (!bVar6) {
switchD_01cb7390_default:
      do {
        in_stack_00000048 = pbVar16;
        unaff_x25 = uVar29 + 1;
        if (unaff_x25 == 4) goto LAB_01cb80a0;
        plVar12 = (long *)*unaff_x21;
        if (plVar12 == (long *)0x0) {
LAB_01cb7328:
          bVar6 = true;
          if (unaff_x22 == (long *)0x0) goto LAB_01cb7364;
LAB_01cb7330:
          if ((int *)unaff_x22[3] == (int *)unaff_x22[4]) {
            iVar10 = (**(code **)(*unaff_x22 + 0x48))(unaff_x22);
          }
          else {
            iVar10 = *(int *)unaff_x22[3];
          }
          if (iVar10 == -1) goto LAB_01cb7364;
          if (!bVar6) goto LAB_01cb80a0;
        }
        else {
          if ((int *)plVar12[3] == (int *)plVar12[4]) {
            iVar10 = (**(code **)(*plVar12 + 0x48))();
          }
          else {
            iVar10 = *(int *)plVar12[3];
          }
          if (iVar10 == -1) {
            *unaff_x21 = 0;
            goto LAB_01cb7328;
          }
          bVar6 = *unaff_x21 == 0;
          if (unaff_x22 != (long *)0x0) goto LAB_01cb7330;
LAB_01cb7364:
          unaff_x22 = (long *)0x0;
          if (bVar6) goto LAB_01cb80a0;
        }
        lVar27 = uVar29 + 1;
        uVar29 = unaff_x25;
        pbVar16 = in_stack_00000048;
        switch(*(undefined1 *)((long)&stack0x00000108 + lVar27)) {
        case 0:
          goto code_r0x01cb7398;
        case 1:
          if (unaff_x25 == 3) goto LAB_01cb80a0;
          plVar12 = (long *)*unaff_x21;
          if (plVar12[3] == plVar12[4]) {
            (**(code **)(*plVar12 + 0x48))();
          }
          uVar29 = (**(code **)(*unaff_x23 + 0x18))();
          if ((uVar29 & 1) == 0) goto LAB_01cb81e0;
          plVar12 = (long *)*unaff_x21;
          pwVar5 = (wchar_t *)plVar12[3];
          if (pwVar5 == (wchar_t *)plVar12[4]) {
            wVar9 = (**(code **)(*plVar12 + 0x50))();
          }
          else {
            plVar12[3] = (long)(pwVar5 + 1);
            wVar9 = *pwVar5;
          }
          std::__ndk1::
          basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::
          push_back(&stack0x00000088,wVar9);
          goto LAB_01cb7834;
        case 2:
          if ((unaff_x25 < 2) || (in_stack_00000048 != (byte *)0x0)) {
            bVar6 = (in_stack_000000d0 & 1) == 0;
            piVar15 = in_stack_00000060;
            if (!bVar6) {
              piVar15 = in_stack_000000e0;
            }
            piVar31 = piVar15;
            if (unaff_x25 != 0) goto LAB_01cb7740;
LAB_01cb77b4:
            bVar18 = in_stack_000000d0 & 1;
            uVar13 = (ulong)in_stack_000000d0;
            piVar32 = piVar15;
          }
          else {
            if (((unaff_x25 == 2 && in_stack_00000108._3_1_ != '\0') | in_stack_00000030._4_4_) != 1
               ) {
              in_stack_00000048 = (byte *)0x0;
              pbVar16 = in_stack_00000048;
              break;
            }
            bVar6 = (in_stack_000000d0 & 1) == 0;
            piVar31 = in_stack_00000060;
            if (!bVar6) {
              piVar31 = in_stack_000000e0;
            }
LAB_01cb7740:
            bVar18 = in_stack_000000d0 & 1;
            uVar13 = (ulong)in_stack_000000d0;
            piVar15 = piVar31;
            if (1 < *(byte *)((long)&stack0x00000108 + (ulong)((int)unaff_x25 - 1)))
            goto LAB_01cb77b4;
            uVar19 = (ulong)(in_stack_000000d0 >> 1);
            if (!bVar6) {
              uVar19 = in_stack_000000d8;
            }
            if (uVar19 != 0) {
              do {
                uVar13 = (**(code **)(*unaff_x23 + 0x18))();
                if ((uVar13 & 1) == 0) {
                  uVar13 = (ulong)in_stack_000000d0;
                  bVar18 = in_stack_000000d0 & 1;
                  break;
                }
                uVar13 = (ulong)in_stack_000000d0;
                piVar31 = piVar31 + 1;
                bVar18 = in_stack_000000d0 & 1;
                uVar19 = (ulong)(in_stack_000000d0 >> 1);
                piVar15 = in_stack_00000060;
                if ((in_stack_000000d0 & 1) != 0) {
                  uVar19 = in_stack_000000d8;
                  piVar15 = in_stack_000000e0;
                }
              } while (piVar31 != piVar15 + uVar19);
            }
            piVar15 = in_stack_00000060;
            if (bVar18 != 0) {
              piVar15 = in_stack_000000e0;
            }
            uVar19 = (long)piVar31 - (long)piVar15;
            uVar25 = (long)uVar19 >> 2;
            piVar32 = piVar15;
            if (((byte)in_stack_00000088 & 1) == 0) {
              uVar24 = (ulong)((byte)in_stack_00000088 >> 1);
              if (uVar25 <= uVar24) {
                puVar26 = &stack0x0000008c + uVar24 * 4;
                pvVar11 = in_stack_00000010;
VRReady_Scripts_OVR_OVRManagerHelper__set_keepCenterControllerToEye:
                piVar32 = piVar31;
                if (puVar26 + uVar25 * -4 != (undefined1 *)((long)pvVar11 + uVar24 * 4)) {
                  uVar4 = uVar19;
                  if ((long)uVar19 < 0) {
                    uVar4 = 0xffffffffffffffff;
                  }
                  if (0 < (long)uVar4) {
                    uVar4 = 1;
                  }
                  uVar1 = (long)piVar15 - (long)piVar31;
                  if ((long)piVar15 - (long)piVar31 <= (long)uVar19) {
                    uVar1 = uVar19;
                  }
                  lVar27 = 0;
                  do {
                    piVar32 = piVar15;
                    if (*(int *)(puVar26 + uVar25 * -4 + lVar27) != *(int *)((long)piVar15 + lVar27)
                       ) break;
                    lVar27 = lVar27 + 4;
                    piVar32 = piVar31;
                  } while ((long)pvVar11 + ((uVar24 + uVar4 * (uVar1 >> 2)) * 4 - (long)puVar26) !=
                           lVar27);
                }
              }
            }
            else if (uVar25 <= in_stack_00000090) {
              puVar26 = (undefined1 *)((long)in_stack_00000098 + in_stack_00000090 * 4);
              uVar24 = in_stack_00000090;
              pvVar11 = in_stack_00000098;
              goto VRReady_Scripts_OVR_OVRManagerHelper__set_keepCenterControllerToEye;
            }
          }
          uVar13 = uVar13 >> 1;
          if (bVar18 != 0) {
            uVar13 = in_stack_000000d8;
          }
          for (piVar15 = piVar15 + uVar13; piVar32 != piVar15; piVar15 = piVar15 + uVar13) {
            plVar12 = (long *)*unaff_x21;
            if (plVar12 == (long *)0x0) {
LAB_01cb7b50:
              bVar6 = true;
              if (unaff_x22 == (long *)0x0) goto LAB_01cb7b8c;
LAB_01cb7b58:
              if ((int *)unaff_x22[3] == (int *)unaff_x22[4]) {
                iVar10 = (**(code **)(*unaff_x22 + 0x48))(unaff_x22);
              }
              else {
                iVar10 = *(int *)unaff_x22[3];
              }
              if (iVar10 == -1) goto LAB_01cb7b8c;
              if (!bVar6) goto LAB_01cb7be8;
            }
            else {
              if ((int *)plVar12[3] == (int *)plVar12[4]) {
                iVar10 = (**(code **)(*plVar12 + 0x48))();
              }
              else {
                iVar10 = *(int *)plVar12[3];
              }
              if (iVar10 == -1) {
                *unaff_x21 = 0;
                goto LAB_01cb7b50;
              }
              bVar6 = *unaff_x21 == 0;
              if (unaff_x22 != (long *)0x0) goto LAB_01cb7b58;
LAB_01cb7b8c:
              unaff_x22 = (long *)0x0;
              if (bVar6) {
LAB_01cb7be8:
                unaff_x26 = &stack0x000000a0;
                break;
              }
            }
            plVar12 = (long *)*unaff_x21;
            if ((int *)plVar12[3] == (int *)plVar12[4]) {
              iVar10 = (**(code **)(*plVar12 + 0x48))();
            }
            else {
              iVar10 = *(int *)plVar12[3];
            }
            unaff_x26 = &stack0x000000a0;
            if (iVar10 != *piVar32) break;
            plVar12 = (long *)*unaff_x21;
            if (plVar12[3] == plVar12[4]) {
              (**(code **)(*plVar12 + 0x50))();
            }
            else {
              plVar12[3] = plVar12[3] + 4;
            }
            piVar32 = piVar32 + 1;
            uVar13 = (ulong)(in_stack_000000d0 >> 1);
            piVar15 = in_stack_00000060;
            if ((in_stack_000000d0 & 1) != 0) {
              uVar13 = in_stack_000000d8;
              piVar15 = in_stack_000000e0;
            }
          }
          if ((unaff_w20 >> 9 & 1) != 0) {
            uVar13 = (ulong)(in_stack_000000d0 >> 1);
            piVar15 = in_stack_00000060;
            if ((in_stack_000000d0 & 1) != 0) {
              uVar13 = in_stack_000000d8;
              piVar15 = in_stack_000000e0;
            }
            if (piVar32 != piVar15 + uVar13) goto LAB_01cb81e0;
          }
          break;
        case 3:
          uVar19 = (ulong)in_stack_000000b8;
          bVar18 = in_stack_000000b8 & 1;
          uVar13 = (ulong)(in_stack_000000b8 >> 1);
          if ((in_stack_000000b8 & 1) != 0) {
            uVar13 = in_stack_000000c0;
          }
          uVar25 = (ulong)(in_stack_000000a0 >> 1);
          if ((in_stack_000000a0 & 1) != 0) {
            uVar25 = in_stack_000000a8;
          }
          if (uVar13 + uVar25 != 0) {
            if (uVar13 == 0) {
              plVar12 = (long *)*unaff_x21;
              if ((int *)plVar12[3] == (int *)plVar12[4]) {
                iVar10 = (**(code **)(*plVar12 + 0x48))();
              }
              else {
                iVar10 = *(int *)plVar12[3];
              }
              piVar15 = in_stack_00000020;
              if ((in_stack_000000a0 & 1) != 0) {
                piVar15 = in_stack_000000b0;
              }
              if (iVar10 == *piVar15) {
                plVar12 = (long *)*unaff_x21;
                if (plVar12[3] == plVar12[4]) {
                  (**(code **)(*plVar12 + 0x50))();
                }
                else {
                  plVar12[3] = plVar12[3] + 4;
                }
                *in_stack_00000018 = 1;
                uVar13 = (ulong)(in_stack_000000a0 >> 1);
                if ((in_stack_000000a0 & 1) != 0) {
                  uVar13 = in_stack_000000a8;
                }
LAB_01cb8050:
                pbVar16 = unaff_x26;
                if (uVar13 < 2) {
                  pbVar16 = in_stack_00000048;
                }
              }
              break;
            }
            plVar12 = (long *)*unaff_x21;
            piVar15 = (int *)plVar12[3];
            if (uVar25 == 0) {
              if (piVar15 == (int *)plVar12[4]) {
                iVar10 = (**(code **)(*plVar12 + 0x48))();
                uVar19 = (ulong)in_stack_000000b8;
                bVar18 = in_stack_000000b8 & 1;
              }
              else {
                iVar10 = *piVar15;
              }
              piVar15 = in_stack_00000028;
              if (bVar18 != 0) {
                piVar15 = in_stack_000000c8;
              }
              if (iVar10 != *piVar15) {
                *in_stack_00000018 = 1;
                break;
              }
              plVar12 = (long *)*unaff_x21;
              if (plVar12[3] == plVar12[4]) {
                (**(code **)(*plVar12 + 0x50))();
                goto LAB_01cb8070;
              }
              plVar12[3] = plVar12[3] + 4;
            }
            else {
              if (piVar15 == (int *)plVar12[4]) {
                iVar10 = (**(code **)(*plVar12 + 0x48))();
                uVar19 = (ulong)in_stack_000000b8;
                bVar18 = in_stack_000000b8 & 1;
              }
              else {
                iVar10 = *piVar15;
              }
              plVar12 = (long *)*unaff_x21;
              piVar15 = in_stack_00000028;
              if (bVar18 != 0) {
                piVar15 = in_stack_000000c8;
              }
              piVar31 = (int *)plVar12[3];
              if (iVar10 != *piVar15) {
                if (piVar31 == (int *)plVar12[4]) {
                  iVar10 = (**(code **)(*plVar12 + 0x48))(plVar12);
                }
                else {
                  iVar10 = *piVar31;
                }
                piVar15 = in_stack_00000020;
                if ((in_stack_000000a0 & 1) != 0) {
                  piVar15 = in_stack_000000b0;
                }
                if (iVar10 == *piVar15) {
                  plVar12 = (long *)*unaff_x21;
                  if (plVar12[3] == plVar12[4]) {
                    (**(code **)(*plVar12 + 0x50))();
                  }
                  else {
                    plVar12[3] = plVar12[3] + 4;
                  }
                  *in_stack_00000018 = 1;
                  uVar13 = (ulong)(in_stack_000000a0 >> 1);
                  if ((in_stack_000000a0 & 1) != 0) {
                    uVar13 = in_stack_000000a8;
                  }
                  goto LAB_01cb8050;
                }
                goto LAB_01cb81e0;
              }
              if (piVar31 == (int *)plVar12[4]) {
                (**(code **)(*plVar12 + 0x50))(plVar12);
LAB_01cb8070:
                uVar19 = (ulong)in_stack_000000b8;
                bVar18 = in_stack_000000b8 & 1;
              }
              else {
                plVar12[3] = (long)(piVar31 + 1);
              }
            }
            uVar13 = uVar19 >> 1;
            if (bVar18 != 0) {
              uVar13 = in_stack_000000c0;
            }
            pbVar16 = &stack0x000000b8;
            if (uVar13 < 2) {
              pbVar16 = in_stack_00000048;
            }
          }
          break;
        case 4:
          uVar30 = 0;
          puVar23 = unaff_x19;
LAB_01cb73b8:
          plVar12 = (long *)*unaff_x21;
          if (plVar12 == (long *)0x0) {
LAB_01cb7400:
            bVar6 = true;
            if (unaff_x22 == (long *)0x0) goto LAB_01cb743c;
LAB_01cb7408:
            if ((int *)unaff_x22[3] == (int *)unaff_x22[4]) {
              iVar10 = (**(code **)(*unaff_x22 + 0x48))(unaff_x22);
            }
            else {
              iVar10 = *(int *)unaff_x22[3];
            }
            if (iVar10 == -1) goto LAB_01cb743c;
            if (!bVar6) goto LAB_01cb76c0;
          }
          else {
            if ((int *)plVar12[3] == (int *)plVar12[4]) {
              iVar10 = (**(code **)(*plVar12 + 0x48))();
            }
            else {
              iVar10 = *(int *)plVar12[3];
            }
            if (iVar10 == -1) {
              *unaff_x21 = 0;
              goto LAB_01cb7400;
            }
            bVar6 = *unaff_x21 == 0;
            if (unaff_x22 != (long *)0x0) goto LAB_01cb7408;
LAB_01cb743c:
            unaff_x22 = (long *)0x0;
            if (bVar6) goto LAB_01cb76c0;
          }
          plVar12 = (long *)*unaff_x21;
          if ((int *)plVar12[3] == (int *)plVar12[4]) {
            iVar10 = (**(code **)(*plVar12 + 0x48))();
          }
          else {
            iVar10 = *(int *)plVar12[3];
          }
          uVar13 = (**(code **)(*unaff_x23 + 0x18))();
          if ((uVar13 & 1) == 0) {
            uVar13 = (ulong)(in_stack_000000e8 >> 1);
            if ((in_stack_000000e8 & 1) != 0) {
              uVar13 = in_stack_000000f0;
            }
            if (((iVar10 == iStack0000000000000100) && (uVar30 != 0)) && (uVar13 != 0)) {
              if (puVar23 != in_stack_00000078) {
LAB_01cb75c8:
                puVar21 = puVar23 + 1;
                *puVar23 = uVar30;
                uVar30 = 0;
                goto LAB_01cb75d0;
              }
              uVar13 = (long)in_stack_00000078 - (long)in_stack_00000068;
              sVar3 = 4;
              if (uVar13 != 0) {
                sVar3 = uVar13 * 2;
              }
              if (0x7ffffffffffffffe < uVar13) {
                sVar3 = 0xffffffffffffffff;
              }
              if (in_stack_00000058 == (code *)StringLiteral_16881) {
                in_stack_00000068 = malloc(sVar3);
              }
              else {
                in_stack_00000068 = realloc(in_stack_00000068,sVar3);
              }
              if (in_stack_00000068 != (uint *)0x0) {
                in_stack_00000078 = (uint *)((long)in_stack_00000068 + (sVar3 & 0xfffffffffffffffc))
                ;
                puVar23 = (uint *)((long)in_stack_00000068 + uVar13);
                in_stack_00000058 = (code *)StringLiteral_16882;
                goto LAB_01cb75c8;
              }
LAB_01cb83e0:
              std::__throw_bad_alloc();
LAB_01cb83e4:
              std::__throw_bad_alloc();
              goto LAB_01cb83e8;
            }
            goto LAB_01cb76c0;
          }
          piVar15 = (int *)*unaff_x28;
          if (piVar15 == unaff_x27) {
            uVar13 = (long)unaff_x27 - *in_stack_00000070;
            sVar3 = 4;
            if (uVar13 != 0) {
              sVar3 = uVar13 * 2;
            }
            if (0x7ffffffffffffffe < uVar13) {
              sVar3 = 0xffffffffffffffff;
            }
            if ((undefined *)in_stack_00000070[1] == StringLiteral_16881) {
              pvVar11 = malloc(sVar3);
            }
            else {
              pvVar11 = realloc((void *)*in_stack_00000070,sVar3);
            }
            if (pvVar11 == (void *)0x0) {
              std::__throw_bad_alloc();
              goto LAB_01cb83e0;
            }
            *in_stack_00000070 = (long)pvVar11;
            in_stack_00000070[1] = (long)StringLiteral_16882;
            piVar15 = (int *)((long)pvVar11 + uVar13);
            *unaff_x28 = (long)piVar15;
            unaff_x27 = (int *)(*in_stack_00000070 + (sVar3 & 0xfffffffffffffffc));
            unaff_w20 = in_stack_00000050._4_4_;
          }
          *unaff_x28 = (long)(piVar15 + 1);
          *piVar15 = iVar10;
          uVar30 = uVar30 + 1;
          puVar21 = puVar23;
LAB_01cb75d0:
          plVar12 = (long *)*unaff_x21;
          puVar23 = puVar21;
          if (plVar12[3] == plVar12[4]) {
            (**(code **)(*plVar12 + 0x50))();
          }
          else {
            plVar12[3] = plVar12[3] + 4;
          }
          goto LAB_01cb73b8;
        }
      } while( true );
    }
  } while( true );
LAB_01cb76c0:
  unaff_x19 = puVar23;
  if ((in_stack_00000068 != puVar23) && (uVar30 != 0)) {
    if (puVar23 == in_stack_00000078) {
      uVar13 = (long)in_stack_00000078 - (long)in_stack_00000068;
      sVar3 = 4;
      if (uVar13 != 0) {
        sVar3 = uVar13 * 2;
      }
      if (0x7ffffffffffffffe < uVar13) {
        sVar3 = 0xffffffffffffffff;
      }
      if (in_stack_00000058 == (code *)StringLiteral_16881) {
        in_stack_00000068 = malloc(sVar3);
      }
      else {
        in_stack_00000068 = realloc(in_stack_00000068,sVar3);
      }
      if (in_stack_00000068 == (uint *)0x0) {
LAB_01cb83e8:
        std::__throw_bad_alloc();
        goto LAB_01cb83ec;
      }
      in_stack_00000078 = (uint *)((long)in_stack_00000068 + (sVar3 & 0xfffffffffffffffc));
      puVar23 = (uint *)((long)in_stack_00000068 + uVar13);
      in_stack_00000058 = (code *)StringLiteral_16882;
    }
    unaff_x19 = puVar23 + 1;
    *puVar23 = uVar30;
  }
  if (in_stack_00000080._4_4_ < 1) {
LAB_01cb72c0:
    unaff_x26 = &stack0x000000a0;
    if (*unaff_x28 == *in_stack_00000070) goto LAB_01cb81e0;
    goto switchD_01cb7390_default;
  }
  plVar12 = (long *)*unaff_x21;
  if (plVar12 != (long *)0x0) {
    if ((int *)plVar12[3] == (int *)plVar12[4]) {
      iVar10 = (**(code **)(*plVar12 + 0x48))();
    }
    else {
      iVar10 = *(int *)plVar12[3];
    }
    if (iVar10 != -1) {
      uVar7 = *unaff_x21 == 0;
      goto joined_r0x01cb7cb0;
    }
    *unaff_x21 = 0;
  }
  uVar7 = true;
joined_r0x01cb7cb0:
  if (unaff_x22 == (long *)0x0) {
    if ((bool)uVar7) goto LAB_01cb81e0;
    plVar12 = (long *)0x0;
  }
  else {
    if ((int *)unaff_x22[3] == (int *)unaff_x22[4]) {
      iVar10 = (**(code **)(*unaff_x22 + 0x48))(unaff_x22);
    }
    else {
      iVar10 = *(int *)unaff_x22[3];
    }
    plVar12 = (long *)0x0;
    if (iVar10 != -1) {
      plVar12 = unaff_x22;
    }
    if ((bool)uVar7 == (iVar10 == -1)) goto LAB_01cb81e0;
  }
  plVar14 = (long *)*unaff_x21;
  if ((int *)plVar14[3] == (int *)plVar14[4]) {
    iVar10 = (**(code **)(*plVar14 + 0x48))();
  }
  else {
    iVar10 = *(int *)plVar14[3];
  }
  if (iVar10 == iStack0000000000000104) {
    plVar14 = (long *)*unaff_x21;
    unaff_x22 = plVar12;
    if (plVar14[3] == plVar14[4]) {
      (**(code **)(*plVar14 + 0x50))();
    }
    else {
      plVar14[3] = plVar14[3] + 4;
    }
joined_r0x01cb7d4c:
    plVar12 = unaff_x22;
    if (0 < in_stack_00000080._4_4_) {
      do {
        plVar14 = (long *)*unaff_x21;
        if (plVar14 == (long *)0x0) {
LAB_01cb7db4:
          bVar8 = true;
          bVar6 = true;
          if (plVar12 == (long *)0x0) goto LAB_01cb7da4;
LAB_01cb7dbc:
          if ((int *)plVar12[3] == (int *)plVar12[4]) {
            iVar10 = (**(code **)(*plVar12 + 0x48))(plVar12);
          }
          else {
            iVar10 = *(int *)plVar12[3];
          }
          unaff_x22 = (long *)0x0;
          if (iVar10 != -1) {
            unaff_x22 = plVar12;
          }
          if (bVar8 == (iVar10 == -1)) goto LAB_01cb81e0;
        }
        else {
          if ((int *)plVar14[3] == (int *)plVar14[4]) {
            iVar10 = (**(code **)(*plVar14 + 0x48))();
          }
          else {
            iVar10 = *(int *)plVar14[3];
          }
          if (iVar10 == -1) {
            *unaff_x21 = 0;
            goto LAB_01cb7db4;
          }
          bVar8 = *unaff_x21 == 0;
          bVar6 = bVar8;
          if (plVar12 != (long *)0x0) goto LAB_01cb7dbc;
LAB_01cb7da4:
          if (bVar6) goto LAB_01cb81e0;
          unaff_x22 = (long *)0x0;
        }
        plVar12 = (long *)*unaff_x21;
        if (plVar12[3] == plVar12[4]) {
          (**(code **)(*plVar12 + 0x48))();
        }
        uVar13 = (**(code **)(*unaff_x23 + 0x18))();
        if ((uVar13 & 1) == 0) goto LAB_01cb81e0;
        piVar15 = (int *)*unaff_x28;
        if (piVar15 == unaff_x27) {
          uVar13 = (long)unaff_x27 - *in_stack_00000070;
          sVar3 = 4;
          if (uVar13 != 0) {
            sVar3 = uVar13 * 2;
          }
          if (0x7ffffffffffffffe < uVar13) {
            sVar3 = 0xffffffffffffffff;
          }
          if ((undefined *)in_stack_00000070[1] == StringLiteral_16881) {
            pvVar11 = malloc(sVar3);
          }
          else {
            pvVar11 = realloc((void *)*in_stack_00000070,sVar3);
          }
          if (pvVar11 == (void *)0x0) goto LAB_01cb83e4;
          *in_stack_00000070 = (long)pvVar11;
          in_stack_00000070[1] = (long)StringLiteral_16882;
          piVar15 = (int *)((long)pvVar11 + uVar13);
          *unaff_x28 = (long)piVar15;
          unaff_x27 = (int *)(*in_stack_00000070 + (sVar3 & 0xfffffffffffffffc));
          unaff_w20 = in_stack_00000050._4_4_;
        }
        plVar12 = (long *)*unaff_x21;
        if ((int *)plVar12[3] == (int *)plVar12[4]) {
          iVar10 = (**(code **)(*plVar12 + 0x48))();
          piVar15 = (int *)*unaff_x28;
        }
        else {
          iVar10 = *(int *)plVar12[3];
        }
        *unaff_x28 = (long)(piVar15 + 1);
        *piVar15 = iVar10;
        in_stack_00000080._4_4_ = in_stack_00000080._4_4_ + -1;
        plVar12 = (long *)*unaff_x21;
        if (plVar12[3] == plVar12[4]) goto code_r0x01cb7f10;
        plVar12[3] = plVar12[3] + 4;
        plVar12 = unaff_x22;
        if (in_stack_00000080._4_4_ < 1) break;
      } while( true );
    }
    goto LAB_01cb72c0;
  }
  goto LAB_01cb81e0;
code_r0x01cb7f10:
  (**(code **)(*plVar12 + 0x50))();
  goto joined_r0x01cb7d4c;
code_r0x01cb7398:
  if (unaff_x25 == 3) {
LAB_01cb80a0:
    if (in_stack_00000048 == (byte *)0x0) goto LAB_01cb82b4;
    uVar29 = 1;
    goto LAB_01cb80bc;
  }
  goto LAB_01cb7834;
LAB_01cb80bc:
  if ((*in_stack_00000048 & 1) == 0) {
    uVar13 = (ulong)(*in_stack_00000048 >> 1);
  }
  else {
    uVar13 = *(ulong *)(in_stack_00000048 + 8);
  }
  if (uVar13 <= uVar29) goto LAB_01cb82b4;
  plVar12 = (long *)*unaff_x21;
  if (plVar12 == (long *)0x0) {
LAB_01cb8134:
    bVar8 = true;
    bVar6 = true;
    if (unaff_x22 == (long *)0x0) goto LAB_01cb8124;
LAB_01cb813c:
    if ((int *)unaff_x22[3] == (int *)unaff_x22[4]) {
      iVar10 = (**(code **)(*unaff_x22 + 0x48))(unaff_x22);
    }
    else {
      iVar10 = *(int *)unaff_x22[3];
    }
    plVar12 = (long *)0x0;
    if (iVar10 != -1) {
      plVar12 = unaff_x22;
    }
    if (bVar8 == (iVar10 == -1)) goto LAB_01cb81e0;
  }
  else {
    if ((int *)plVar12[3] == (int *)plVar12[4]) {
      iVar10 = (**(code **)(*plVar12 + 0x48))();
    }
    else {
      iVar10 = *(int *)plVar12[3];
    }
    if (iVar10 == -1) {
      *unaff_x21 = 0;
      goto LAB_01cb8134;
    }
    bVar8 = *unaff_x21 == 0;
    bVar6 = bVar8;
    if (unaff_x22 != (long *)0x0) goto LAB_01cb813c;
LAB_01cb8124:
    if (bVar6) goto LAB_01cb81e0;
    plVar12 = (long *)0x0;
  }
  plVar14 = (long *)*unaff_x21;
  if ((int *)plVar14[3] == (int *)plVar14[4]) {
    iVar10 = (**(code **)(*plVar14 + 0x48))();
  }
  else {
    iVar10 = *(int *)plVar14[3];
  }
  pbVar16 = in_stack_00000048 + 4;
  if ((*in_stack_00000048 & 1) != 0) {
    pbVar16 = *(byte **)(in_stack_00000048 + 0x10);
  }
  if (iVar10 != *(int *)(pbVar16 + uVar29 * 4)) goto LAB_01cb81e0;
  plVar14 = (long *)*unaff_x21;
  uVar29 = (ulong)((int)uVar29 + 1);
  unaff_x22 = plVar12;
  if (plVar14[3] == plVar14[4]) {
    (**(code **)(*plVar14 + 0x50))();
  }
  else {
    plVar14[3] = plVar14[3] + 4;
  }
  goto LAB_01cb80bc;
LAB_01cb82b4:
  if (in_stack_00000068 == unaff_x19) {
    uVar28 = 1;
    in_stack_00000068 = unaff_x19;
    goto LAB_01cb81f0;
  }
  uVar29 = (ulong)(in_stack_000000e8 >> 1);
  if ((in_stack_000000e8 & 1) != 0) {
    uVar29 = in_stack_000000f0;
  }
  if ((uVar29 != 0) && (4 < (long)unaff_x19 - (long)in_stack_00000068)) {
    puVar17 = unaff_x19 + -1;
    puVar21 = puVar17;
    puVar23 = in_stack_00000068;
    if (in_stack_00000068 < puVar17) {
      do {
        puVar20 = puVar23 + 1;
        uVar30 = *puVar23;
        *puVar23 = *puVar21;
        puVar22 = puVar21 + -1;
        *puVar21 = uVar30;
        puVar21 = puVar22;
        puVar23 = puVar20;
      } while (puVar20 < puVar22);
      pbVar2 = (byte *)((ulong)&stack0x000000e8 | 1);
      if ((in_stack_000000e8 & 1) != 0) {
        pbVar2 = in_stack_000000f8;
      }
      pbVar16 = pbVar2;
      if (in_stack_00000068 < puVar17) {
        puVar23 = in_stack_00000068;
        uVar29 = (ulong)(in_stack_000000e8 >> 1);
        if ((in_stack_000000e8 & 1) != 0) {
          uVar29 = in_stack_000000f0;
        }
        do {
          bVar18 = *pbVar16;
          if (((bVar18 != 0) && (bVar18 != 0xff)) && (*puVar23 != (uint)bVar18)) goto LAB_01cb81e0;
          puVar23 = puVar23 + 1;
          if (1 < (long)(pbVar2 + (uVar29 - (long)pbVar16))) {
            pbVar16 = pbVar16 + 1;
          }
        } while (puVar23 < puVar17);
      }
    }
    else {
      pbVar16 = (byte *)((ulong)&stack0x000000e8 | 1);
      if ((in_stack_000000e8 & 1) != 0) {
        pbVar16 = in_stack_000000f8;
      }
    }
    bVar18 = *pbVar16;
    uVar28 = 1;
    if ((bVar18 == 0) || (bVar18 == 0xff)) goto LAB_01cb81f0;
    if ((uint)bVar18 <= *puVar17 - 1) {
LAB_01cb81e0:
      uVar28 = 0;
      *in_stack_00000038 = *in_stack_00000038 | 4;
      goto LAB_01cb81f0;
    }
  }
  uVar28 = 1;
LAB_01cb81f0:
  if (((byte)in_stack_00000088 & 1) != 0) {
    operator_delete(in_stack_00000098);
  }
  if ((in_stack_000000a0 & 1) != 0) {
    operator_delete(in_stack_000000b0);
  }
  if ((in_stack_000000b8 & 1) != 0) {
    operator_delete(in_stack_000000c8);
  }
  if ((in_stack_000000d0 & 1) != 0) {
    operator_delete(in_stack_000000e0);
  }
  if ((in_stack_000000e8 & 1) != 0) {
    operator_delete(in_stack_000000f8);
  }
  if (in_stack_00000068 != (uint *)0x0) {
    (*in_stack_00000058)(in_stack_00000068);
  }
  if (*(long *)(in_stack_00000040 + 0x28) == *(long *)(unaff_x29 + -0x10)) {
    return uVar28;
  }
LAB_01cb83ec:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


