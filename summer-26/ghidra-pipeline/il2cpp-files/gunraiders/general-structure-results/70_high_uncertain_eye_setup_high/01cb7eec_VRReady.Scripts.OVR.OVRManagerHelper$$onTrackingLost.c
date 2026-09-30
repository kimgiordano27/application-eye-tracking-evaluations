/*
FUNCTION_NAME: VRReady.Scripts.OVR.OVRManagerHelper$$onTrackingLost
ENTRY_POINT: 01cb7eec
PROGRAM: gunraiders-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Type propagation algorithm not settling */

undefined4 VRReady_Scripts_OVR_OVRManagerHelper__onTrackingLost(int *param_1,int param_2)

{
  ulong uVar1;
  byte *pbVar2;
  ulong uVar3;
  size_t sVar4;
  wchar_t *pwVar5;
  bool bVar6;
  bool bVar7;
  wchar_t wVar8;
  int iVar9;
  void *pvVar10;
  long *plVar11;
  long *plVar12;
  int *piVar13;
  ulong uVar14;
  byte *pbVar15;
  uint *puVar16;
  byte bVar17;
  ulong uVar18;
  int *in_x9;
  uint *puVar19;
  uint *puVar20;
  uint *puVar21;
  uint *puVar22;
  ulong uVar23;
  ulong uVar24;
  undefined1 *puVar25;
  long lVar26;
  uint *unaff_x19;
  uint unaff_w20;
  undefined4 uVar27;
  long *unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  ulong uVar28;
  uint uVar29;
  int *piVar30;
  int *piVar31;
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
  
  do {
    *unaff_x28 = (long)in_x9;
    *param_1 = param_2;
    in_stack_00000080._4_4_ = in_stack_00000080._4_4_ + -1;
    plVar11 = (long *)*unaff_x21;
    if (plVar11[3] == plVar11[4]) {
      (**(code **)(*plVar11 + 0x50))();
    }
    else {
      plVar11[3] = plVar11[3] + 4;
    }
    if (in_stack_00000080._4_4_ < 1) {
LAB_01cb72c0:
      uVar28 = unaff_x25;
      pbVar15 = in_stack_00000048;
      if (*unaff_x28 != *in_stack_00000070) {
switchD_01cb7390_default:
        in_stack_00000048 = pbVar15;
        unaff_x25 = uVar28 + 1;
        if (unaff_x25 != 4) {
          plVar11 = (long *)*unaff_x21;
          if (plVar11 == (long *)0x0) {
LAB_01cb7328:
            bVar6 = true;
            if (unaff_x22 == (long *)0x0) goto LAB_01cb7364;
LAB_01cb7330:
            if ((int *)unaff_x22[3] == (int *)unaff_x22[4]) {
              iVar9 = (**(code **)(*unaff_x22 + 0x48))(unaff_x22);
            }
            else {
              iVar9 = *(int *)unaff_x22[3];
            }
            if (iVar9 == -1) goto LAB_01cb7364;
            if (!bVar6) goto LAB_01cb80a0;
          }
          else {
            if ((int *)plVar11[3] == (int *)plVar11[4]) {
              iVar9 = (**(code **)(*plVar11 + 0x48))();
            }
            else {
              iVar9 = *(int *)plVar11[3];
            }
            if (iVar9 == -1) {
              *unaff_x21 = 0;
              goto LAB_01cb7328;
            }
            bVar6 = *unaff_x21 == 0;
            if (unaff_x22 != (long *)0x0) goto LAB_01cb7330;
LAB_01cb7364:
            unaff_x22 = (long *)0x0;
            if (bVar6) goto LAB_01cb80a0;
          }
          break;
        }
        goto LAB_01cb80a0;
      }
      goto LAB_01cb81e0;
    }
LAB_01cb7d64:
    plVar11 = (long *)*unaff_x21;
    if (plVar11 == (long *)0x0) {
LAB_01cb7db4:
      bVar7 = true;
      bVar6 = true;
      if (unaff_x22 == (long *)0x0) goto LAB_01cb7da4;
LAB_01cb7dbc:
      if ((int *)unaff_x22[3] == (int *)unaff_x22[4]) {
        iVar9 = (**(code **)(*unaff_x22 + 0x48))(unaff_x22);
      }
      else {
        iVar9 = *(int *)unaff_x22[3];
      }
      plVar11 = (long *)0x0;
      if (iVar9 != -1) {
        plVar11 = unaff_x22;
      }
      if (bVar7 == (iVar9 == -1)) goto LAB_01cb81e0;
    }
    else {
      if ((int *)plVar11[3] == (int *)plVar11[4]) {
        iVar9 = (**(code **)(*plVar11 + 0x48))();
      }
      else {
        iVar9 = *(int *)plVar11[3];
      }
      if (iVar9 == -1) {
        *unaff_x21 = 0;
        goto LAB_01cb7db4;
      }
      bVar7 = *unaff_x21 == 0;
      bVar6 = bVar7;
      if (unaff_x22 != (long *)0x0) goto LAB_01cb7dbc;
LAB_01cb7da4:
      if (bVar6) goto LAB_01cb81e0;
      plVar11 = (long *)0x0;
    }
    plVar12 = (long *)*unaff_x21;
    if (plVar12[3] == plVar12[4]) {
      (**(code **)(*plVar12 + 0x48))();
    }
    uVar28 = (**(code **)(*unaff_x23 + 0x18))();
    if ((uVar28 & 1) == 0) goto LAB_01cb81e0;
    param_1 = (int *)*unaff_x28;
    if (param_1 == unaff_x27) {
      uVar28 = (long)unaff_x27 - *in_stack_00000070;
      sVar4 = 4;
      if (uVar28 != 0) {
        sVar4 = uVar28 * 2;
      }
      if (0x7ffffffffffffffe < uVar28) {
        sVar4 = 0xffffffffffffffff;
      }
      if ((undefined *)in_stack_00000070[1] == StringLiteral_16881) {
        pvVar10 = malloc(sVar4);
      }
      else {
        pvVar10 = realloc((void *)*in_stack_00000070,sVar4);
      }
      if (pvVar10 == (void *)0x0) {
LAB_01cb83e4:
        std::__throw_bad_alloc();
LAB_01cb83e8:
        std::__throw_bad_alloc();
        goto LAB_01cb83ec;
      }
      unaff_x26 = &stack0x000000a0;
      *in_stack_00000070 = (long)pvVar10;
      in_stack_00000070[1] = (long)StringLiteral_16882;
      param_1 = (int *)((long)pvVar10 + uVar28);
      *unaff_x28 = (long)param_1;
      unaff_x27 = (int *)(*in_stack_00000070 + (sVar4 & 0xfffffffffffffffc));
      unaff_w20 = in_stack_00000050._4_4_;
    }
    plVar12 = (long *)*unaff_x21;
    if ((int *)plVar12[3] == (int *)plVar12[4]) {
      param_2 = (**(code **)(*plVar12 + 0x48))();
      param_1 = (int *)*unaff_x28;
    }
    else {
      param_2 = *(int *)plVar12[3];
    }
    in_x9 = param_1 + 1;
    unaff_x22 = plVar11;
  } while( true );
  lVar26 = uVar28 + 1;
  uVar28 = unaff_x25;
  pbVar15 = in_stack_00000048;
  switch(*(undefined1 *)((long)&stack0x00000108 + lVar26)) {
  case 0:
    if (unaff_x25 != 3) {
LAB_01cb7834:
      do {
        plVar11 = (long *)*unaff_x21;
        if (plVar11 == (long *)0x0) {
LAB_01cb787c:
          bVar6 = true;
          if (unaff_x22 == (long *)0x0) goto LAB_01cb78b8;
LAB_01cb7884:
          if ((int *)unaff_x22[3] == (int *)unaff_x22[4]) {
            iVar9 = (**(code **)(*unaff_x22 + 0x48))(unaff_x22);
          }
          else {
            iVar9 = *(int *)unaff_x22[3];
          }
          if (iVar9 == -1) goto LAB_01cb78b8;
          if (!bVar6) goto switchD_01cb7390_default;
        }
        else {
          if ((int *)plVar11[3] == (int *)plVar11[4]) {
            iVar9 = (**(code **)(*plVar11 + 0x48))();
          }
          else {
            iVar9 = *(int *)plVar11[3];
          }
          if (iVar9 == -1) {
            *unaff_x21 = 0;
            goto LAB_01cb787c;
          }
          bVar6 = *unaff_x21 == 0;
          if (unaff_x22 != (long *)0x0) goto LAB_01cb7884;
LAB_01cb78b8:
          unaff_x22 = (long *)0x0;
          if (bVar6) goto switchD_01cb7390_default;
        }
        plVar11 = (long *)*unaff_x21;
        if (plVar11[3] == plVar11[4]) {
          (**(code **)(*plVar11 + 0x48))();
        }
        uVar14 = (**(code **)(*unaff_x23 + 0x18))();
        if ((uVar14 & 1) == 0) goto switchD_01cb7390_default;
        plVar11 = (long *)*unaff_x21;
        pwVar5 = (wchar_t *)plVar11[3];
        if (pwVar5 == (wchar_t *)plVar11[4]) {
          wVar8 = (**(code **)(*plVar11 + 0x50))();
        }
        else {
          plVar11[3] = (long)(pwVar5 + 1);
          wVar8 = *pwVar5;
        }
        std::__ndk1::
        basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::
        push_back(&stack0x00000088,wVar8);
      } while( true );
    }
    break;
  case 1:
    if (unaff_x25 != 3) {
      plVar11 = (long *)*unaff_x21;
      if (plVar11[3] == plVar11[4]) {
        (**(code **)(*plVar11 + 0x48))();
      }
      uVar14 = (**(code **)(*unaff_x23 + 0x18))();
      if ((uVar14 & 1) == 0) goto LAB_01cb81e0;
      plVar11 = (long *)*unaff_x21;
      pwVar5 = (wchar_t *)plVar11[3];
      if (pwVar5 == (wchar_t *)plVar11[4]) {
        wVar8 = (**(code **)(*plVar11 + 0x50))();
      }
      else {
        plVar11[3] = (long)(pwVar5 + 1);
        wVar8 = *pwVar5;
      }
      std::__ndk1::
      basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::
      push_back(&stack0x00000088,wVar8);
      goto LAB_01cb7834;
    }
    break;
  case 2:
    if ((unaff_x25 < 2) || (in_stack_00000048 != (byte *)0x0)) {
      bVar6 = (in_stack_000000d0 & 1) == 0;
      piVar13 = in_stack_00000060;
      if (!bVar6) {
        piVar13 = in_stack_000000e0;
      }
      piVar30 = piVar13;
      if (unaff_x25 != 0) goto LAB_01cb7740;
    }
    else {
      if (((unaff_x25 == 2 && in_stack_00000108._3_1_ != '\0') | in_stack_00000030._4_4_) != 1) {
        in_stack_00000048 = (byte *)0x0;
        pbVar15 = in_stack_00000048;
        goto switchD_01cb7390_default;
      }
      bVar6 = (in_stack_000000d0 & 1) == 0;
      piVar30 = in_stack_00000060;
      if (!bVar6) {
        piVar30 = in_stack_000000e0;
      }
LAB_01cb7740:
      bVar17 = in_stack_000000d0 & 1;
      uVar14 = (ulong)in_stack_000000d0;
      piVar13 = piVar30;
      if (*(byte *)((long)&stack0x00000108 + (ulong)((int)unaff_x25 - 1)) < 2) {
        uVar18 = (ulong)(in_stack_000000d0 >> 1);
        if (!bVar6) {
          uVar18 = in_stack_000000d8;
        }
        if (uVar18 != 0) {
          do {
            uVar14 = (**(code **)(*unaff_x23 + 0x18))();
            if ((uVar14 & 1) == 0) {
              uVar14 = (ulong)in_stack_000000d0;
              bVar17 = in_stack_000000d0 & 1;
              break;
            }
            uVar14 = (ulong)in_stack_000000d0;
            piVar30 = piVar30 + 1;
            bVar17 = in_stack_000000d0 & 1;
            uVar18 = (ulong)(in_stack_000000d0 >> 1);
            piVar13 = in_stack_00000060;
            if ((in_stack_000000d0 & 1) != 0) {
              uVar18 = in_stack_000000d8;
              piVar13 = in_stack_000000e0;
            }
          } while (piVar30 != piVar13 + uVar18);
        }
        piVar13 = in_stack_00000060;
        if (bVar17 != 0) {
          piVar13 = in_stack_000000e0;
        }
        uVar18 = (long)piVar30 - (long)piVar13;
        uVar24 = (long)uVar18 >> 2;
        piVar31 = piVar13;
        if (((byte)in_stack_00000088 & 1) == 0) {
          uVar23 = (ulong)((byte)in_stack_00000088 >> 1);
          if (uVar23 < uVar24) goto LAB_01cb7abc;
          puVar25 = &stack0x0000008c + uVar23 * 4;
          pvVar10 = in_stack_00000010;
        }
        else {
          if (in_stack_00000090 < uVar24) goto LAB_01cb7abc;
          puVar25 = (undefined1 *)((long)in_stack_00000098 + in_stack_00000090 * 4);
          uVar23 = in_stack_00000090;
          pvVar10 = in_stack_00000098;
        }
        piVar31 = piVar30;
        if (puVar25 + uVar24 * -4 != (undefined1 *)((long)pvVar10 + uVar23 * 4)) {
          uVar3 = uVar18;
          if ((long)uVar18 < 0) {
            uVar3 = 0xffffffffffffffff;
          }
          if (0 < (long)uVar3) {
            uVar3 = 1;
          }
          uVar1 = (long)piVar13 - (long)piVar30;
          if ((long)piVar13 - (long)piVar30 <= (long)uVar18) {
            uVar1 = uVar18;
          }
          lVar26 = 0;
          do {
            piVar31 = piVar13;
            if (*(int *)(puVar25 + uVar24 * -4 + lVar26) != *(int *)((long)piVar13 + lVar26)) break;
            lVar26 = lVar26 + 4;
            piVar31 = piVar30;
          } while ((long)pvVar10 + ((uVar23 + uVar3 * (uVar1 >> 2)) * 4 - (long)puVar25) != lVar26);
        }
        goto LAB_01cb7abc;
      }
    }
    bVar17 = in_stack_000000d0 & 1;
    uVar14 = (ulong)in_stack_000000d0;
    piVar31 = piVar13;
LAB_01cb7abc:
    uVar14 = uVar14 >> 1;
    if (bVar17 != 0) {
      uVar14 = in_stack_000000d8;
    }
    for (piVar13 = piVar13 + uVar14; piVar31 != piVar13; piVar13 = piVar13 + uVar14) {
      plVar11 = (long *)*unaff_x21;
      if (plVar11 == (long *)0x0) {
LAB_01cb7b50:
        bVar6 = true;
        if (unaff_x22 == (long *)0x0) goto LAB_01cb7b8c;
LAB_01cb7b58:
        if ((int *)unaff_x22[3] == (int *)unaff_x22[4]) {
          iVar9 = (**(code **)(*unaff_x22 + 0x48))(unaff_x22);
        }
        else {
          iVar9 = *(int *)unaff_x22[3];
        }
        if (iVar9 == -1) goto LAB_01cb7b8c;
        if (!bVar6) goto LAB_01cb7be8;
      }
      else {
        if ((int *)plVar11[3] == (int *)plVar11[4]) {
          iVar9 = (**(code **)(*plVar11 + 0x48))();
        }
        else {
          iVar9 = *(int *)plVar11[3];
        }
        if (iVar9 == -1) {
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
      plVar11 = (long *)*unaff_x21;
      if ((int *)plVar11[3] == (int *)plVar11[4]) {
        iVar9 = (**(code **)(*plVar11 + 0x48))();
      }
      else {
        iVar9 = *(int *)plVar11[3];
      }
      unaff_x26 = &stack0x000000a0;
      if (iVar9 != *piVar31) break;
      plVar11 = (long *)*unaff_x21;
      if (plVar11[3] == plVar11[4]) {
        (**(code **)(*plVar11 + 0x50))();
      }
      else {
        plVar11[3] = plVar11[3] + 4;
      }
      piVar31 = piVar31 + 1;
      uVar14 = (ulong)(in_stack_000000d0 >> 1);
      piVar13 = in_stack_00000060;
      if ((in_stack_000000d0 & 1) != 0) {
        uVar14 = in_stack_000000d8;
        piVar13 = in_stack_000000e0;
      }
    }
    if ((unaff_w20 >> 9 & 1) != 0) {
      uVar14 = (ulong)(in_stack_000000d0 >> 1);
      piVar13 = in_stack_00000060;
      if ((in_stack_000000d0 & 1) != 0) {
        uVar14 = in_stack_000000d8;
        piVar13 = in_stack_000000e0;
      }
      if (piVar31 != piVar13 + uVar14) goto LAB_01cb81e0;
    }
    goto switchD_01cb7390_default;
  case 3:
    uVar18 = (ulong)in_stack_000000b8;
    bVar17 = in_stack_000000b8 & 1;
    uVar14 = (ulong)(in_stack_000000b8 >> 1);
    if ((in_stack_000000b8 & 1) != 0) {
      uVar14 = in_stack_000000c0;
    }
    uVar24 = (ulong)(in_stack_000000a0 >> 1);
    if ((in_stack_000000a0 & 1) != 0) {
      uVar24 = in_stack_000000a8;
    }
    if (uVar14 + uVar24 == 0) goto switchD_01cb7390_default;
    if (uVar14 == 0) {
      plVar11 = (long *)*unaff_x21;
      if ((int *)plVar11[3] == (int *)plVar11[4]) {
        iVar9 = (**(code **)(*plVar11 + 0x48))();
      }
      else {
        iVar9 = *(int *)plVar11[3];
      }
      piVar13 = in_stack_00000020;
      if ((in_stack_000000a0 & 1) != 0) {
        piVar13 = in_stack_000000b0;
      }
      if (iVar9 != *piVar13) goto switchD_01cb7390_default;
      plVar11 = (long *)*unaff_x21;
      if (plVar11[3] == plVar11[4]) {
        (**(code **)(*plVar11 + 0x50))();
      }
      else {
        plVar11[3] = plVar11[3] + 4;
      }
      *in_stack_00000018 = 1;
      uVar14 = (ulong)(in_stack_000000a0 >> 1);
      if ((in_stack_000000a0 & 1) != 0) {
        uVar14 = in_stack_000000a8;
      }
LAB_01cb8050:
      pbVar15 = unaff_x26;
      if (uVar14 < 2) {
        pbVar15 = in_stack_00000048;
      }
      goto switchD_01cb7390_default;
    }
    plVar11 = (long *)*unaff_x21;
    piVar13 = (int *)plVar11[3];
    if (uVar24 == 0) {
      if (piVar13 == (int *)plVar11[4]) {
        iVar9 = (**(code **)(*plVar11 + 0x48))();
        uVar18 = (ulong)in_stack_000000b8;
        bVar17 = in_stack_000000b8 & 1;
      }
      else {
        iVar9 = *piVar13;
      }
      piVar13 = in_stack_00000028;
      if (bVar17 != 0) {
        piVar13 = in_stack_000000c8;
      }
      if (iVar9 != *piVar13) {
        *in_stack_00000018 = 1;
        goto switchD_01cb7390_default;
      }
      plVar11 = (long *)*unaff_x21;
      if (plVar11[3] != plVar11[4]) {
        plVar11[3] = plVar11[3] + 4;
        goto LAB_01cb807c;
      }
      (**(code **)(*plVar11 + 0x50))();
    }
    else {
      if (piVar13 == (int *)plVar11[4]) {
        iVar9 = (**(code **)(*plVar11 + 0x48))();
        uVar18 = (ulong)in_stack_000000b8;
        bVar17 = in_stack_000000b8 & 1;
      }
      else {
        iVar9 = *piVar13;
      }
      plVar11 = (long *)*unaff_x21;
      piVar13 = in_stack_00000028;
      if (bVar17 != 0) {
        piVar13 = in_stack_000000c8;
      }
      piVar30 = (int *)plVar11[3];
      if (iVar9 != *piVar13) {
        if (piVar30 == (int *)plVar11[4]) {
          iVar9 = (**(code **)(*plVar11 + 0x48))(plVar11);
        }
        else {
          iVar9 = *piVar30;
        }
        piVar13 = in_stack_00000020;
        if ((in_stack_000000a0 & 1) != 0) {
          piVar13 = in_stack_000000b0;
        }
        if (iVar9 != *piVar13) goto LAB_01cb81e0;
        plVar11 = (long *)*unaff_x21;
        if (plVar11[3] == plVar11[4]) {
          (**(code **)(*plVar11 + 0x50))();
        }
        else {
          plVar11[3] = plVar11[3] + 4;
        }
        *in_stack_00000018 = 1;
        uVar14 = (ulong)(in_stack_000000a0 >> 1);
        if ((in_stack_000000a0 & 1) != 0) {
          uVar14 = in_stack_000000a8;
        }
        goto LAB_01cb8050;
      }
      if (piVar30 != (int *)plVar11[4]) {
        plVar11[3] = (long)(piVar30 + 1);
        goto LAB_01cb807c;
      }
      (**(code **)(*plVar11 + 0x50))(plVar11);
    }
    uVar18 = (ulong)in_stack_000000b8;
    bVar17 = in_stack_000000b8 & 1;
LAB_01cb807c:
    uVar14 = uVar18 >> 1;
    if (bVar17 != 0) {
      uVar14 = in_stack_000000c0;
    }
    pbVar15 = &stack0x000000b8;
    if (uVar14 < 2) {
      pbVar15 = in_stack_00000048;
    }
    goto switchD_01cb7390_default;
  case 4:
    goto code_r0x01cb73a8;
  default:
    goto switchD_01cb7390_default;
  }
LAB_01cb80a0:
  if (in_stack_00000048 == (byte *)0x0) goto LAB_01cb82b4;
  uVar28 = 1;
  goto LAB_01cb80bc;
code_r0x01cb73a8:
  uVar29 = 0;
  puVar22 = unaff_x19;
  plVar11 = unaff_x22;
LAB_01cb73b8:
  plVar12 = (long *)*unaff_x21;
  if (plVar12 == (long *)0x0) {
LAB_01cb7400:
    bVar6 = true;
    if (plVar11 == (long *)0x0) goto LAB_01cb743c;
LAB_01cb7408:
    if ((int *)plVar11[3] == (int *)plVar11[4]) {
      iVar9 = (**(code **)(*plVar11 + 0x48))(plVar11);
    }
    else {
      iVar9 = *(int *)plVar11[3];
    }
    if (iVar9 == -1) goto LAB_01cb743c;
    if (!bVar6) goto LAB_01cb76c0;
  }
  else {
    if ((int *)plVar12[3] == (int *)plVar12[4]) {
      iVar9 = (**(code **)(*plVar12 + 0x48))();
    }
    else {
      iVar9 = *(int *)plVar12[3];
    }
    if (iVar9 == -1) {
      *unaff_x21 = 0;
      goto LAB_01cb7400;
    }
    bVar6 = *unaff_x21 == 0;
    if (plVar11 != (long *)0x0) goto LAB_01cb7408;
LAB_01cb743c:
    plVar11 = (long *)0x0;
    if (bVar6) goto LAB_01cb76c0;
  }
  plVar12 = (long *)*unaff_x21;
  if ((int *)plVar12[3] == (int *)plVar12[4]) {
    iVar9 = (**(code **)(*plVar12 + 0x48))();
  }
  else {
    iVar9 = *(int *)plVar12[3];
  }
  uVar28 = (**(code **)(*unaff_x23 + 0x18))();
  if ((uVar28 & 1) == 0) {
    uVar28 = (ulong)(in_stack_000000e8 >> 1);
    if ((in_stack_000000e8 & 1) != 0) {
      uVar28 = in_stack_000000f0;
    }
    if (((iVar9 != iStack0000000000000100) || (uVar29 == 0)) || (uVar28 == 0)) goto LAB_01cb76c0;
    if (puVar22 == in_stack_00000078) {
      uVar28 = (long)in_stack_00000078 - (long)in_stack_00000068;
      sVar4 = 4;
      if (uVar28 != 0) {
        sVar4 = uVar28 * 2;
      }
      if (0x7ffffffffffffffe < uVar28) {
        sVar4 = 0xffffffffffffffff;
      }
      if (in_stack_00000058 == (code *)StringLiteral_16881) {
        in_stack_00000068 = malloc(sVar4);
      }
      else {
        in_stack_00000068 = realloc(in_stack_00000068,sVar4);
      }
      if (in_stack_00000068 == (uint *)0x0) goto LAB_01cb83e0;
      in_stack_00000078 = (uint *)((long)in_stack_00000068 + (sVar4 & 0xfffffffffffffffc));
      puVar22 = (uint *)((long)in_stack_00000068 + uVar28);
      in_stack_00000058 = (code *)StringLiteral_16882;
    }
    puVar20 = puVar22 + 1;
    *puVar22 = uVar29;
    uVar29 = 0;
  }
  else {
    piVar13 = (int *)*unaff_x28;
    if (piVar13 == unaff_x27) {
      uVar28 = (long)unaff_x27 - *in_stack_00000070;
      sVar4 = 4;
      if (uVar28 != 0) {
        sVar4 = uVar28 * 2;
      }
      if (0x7ffffffffffffffe < uVar28) {
        sVar4 = 0xffffffffffffffff;
      }
      if ((undefined *)in_stack_00000070[1] == StringLiteral_16881) {
        pvVar10 = malloc(sVar4);
      }
      else {
        pvVar10 = realloc((void *)*in_stack_00000070,sVar4);
      }
      if (pvVar10 == (void *)0x0) {
        std::__throw_bad_alloc();
LAB_01cb83e0:
        std::__throw_bad_alloc();
        goto LAB_01cb83e4;
      }
      *in_stack_00000070 = (long)pvVar10;
      in_stack_00000070[1] = (long)StringLiteral_16882;
      piVar13 = (int *)((long)pvVar10 + uVar28);
      *unaff_x28 = (long)piVar13;
      unaff_x27 = (int *)(*in_stack_00000070 + (sVar4 & 0xfffffffffffffffc));
      unaff_w20 = in_stack_00000050._4_4_;
    }
    *unaff_x28 = (long)(piVar13 + 1);
    *piVar13 = iVar9;
    uVar29 = uVar29 + 1;
    puVar20 = puVar22;
  }
  plVar12 = (long *)*unaff_x21;
  puVar22 = puVar20;
  if (plVar12[3] == plVar12[4]) {
    (**(code **)(*plVar12 + 0x50))();
  }
  else {
    plVar12[3] = plVar12[3] + 4;
  }
  goto LAB_01cb73b8;
LAB_01cb76c0:
  unaff_x19 = puVar22;
  if ((in_stack_00000068 != puVar22) && (uVar29 != 0)) {
    if (puVar22 == in_stack_00000078) {
      uVar28 = (long)in_stack_00000078 - (long)in_stack_00000068;
      sVar4 = 4;
      if (uVar28 != 0) {
        sVar4 = uVar28 * 2;
      }
      if (0x7ffffffffffffffe < uVar28) {
        sVar4 = 0xffffffffffffffff;
      }
      if (in_stack_00000058 == (code *)StringLiteral_16881) {
        in_stack_00000068 = malloc(sVar4);
      }
      else {
        in_stack_00000068 = realloc(in_stack_00000068,sVar4);
      }
      if (in_stack_00000068 == (uint *)0x0) goto LAB_01cb83e8;
      in_stack_00000078 = (uint *)((long)in_stack_00000068 + (sVar4 & 0xfffffffffffffffc));
      puVar22 = (uint *)((long)in_stack_00000068 + uVar28);
      in_stack_00000058 = (code *)StringLiteral_16882;
    }
    unaff_x19 = puVar22 + 1;
    *puVar22 = uVar29;
  }
  unaff_x26 = &stack0x000000a0;
  unaff_x22 = plVar11;
  if (in_stack_00000080._4_4_ < 1) goto LAB_01cb72c0;
  plVar12 = (long *)*unaff_x21;
  if (plVar12 != (long *)0x0) {
    if ((int *)plVar12[3] == (int *)plVar12[4]) {
      iVar9 = (**(code **)(*plVar12 + 0x48))();
    }
    else {
      iVar9 = *(int *)plVar12[3];
    }
    if (iVar9 != -1) {
      bVar6 = *unaff_x21 == 0;
      goto joined_r0x01cb7cb0;
    }
    *unaff_x21 = 0;
  }
  bVar6 = true;
joined_r0x01cb7cb0:
  if (plVar11 == (long *)0x0) {
    if (bVar6 != false) goto LAB_01cb81e0;
    unaff_x22 = (long *)0x0;
  }
  else {
    if ((int *)plVar11[3] == (int *)plVar11[4]) {
      iVar9 = (**(code **)(*plVar11 + 0x48))(plVar11);
    }
    else {
      iVar9 = *(int *)plVar11[3];
    }
    unaff_x22 = (long *)0x0;
    if (iVar9 != -1) {
      unaff_x22 = plVar11;
    }
    if (bVar6 == (iVar9 == -1)) goto LAB_01cb81e0;
  }
  plVar11 = (long *)*unaff_x21;
  if ((int *)plVar11[3] == (int *)plVar11[4]) {
    iVar9 = (**(code **)(*plVar11 + 0x48))();
  }
  else {
    iVar9 = *(int *)plVar11[3];
  }
  if (iVar9 != iStack0000000000000104) goto LAB_01cb81e0;
  plVar11 = (long *)*unaff_x21;
  if (plVar11[3] == plVar11[4]) {
    (**(code **)(*plVar11 + 0x50))();
  }
  else {
    plVar11[3] = plVar11[3] + 4;
  }
  if (0 < in_stack_00000080._4_4_) goto LAB_01cb7d64;
  goto LAB_01cb72c0;
LAB_01cb80bc:
  if ((*in_stack_00000048 & 1) == 0) {
    uVar14 = (ulong)(*in_stack_00000048 >> 1);
  }
  else {
    uVar14 = *(ulong *)(in_stack_00000048 + 8);
  }
  if (uVar14 <= uVar28) goto LAB_01cb82b4;
  plVar11 = (long *)*unaff_x21;
  if (plVar11 == (long *)0x0) {
LAB_01cb8134:
    bVar7 = true;
    bVar6 = true;
    if (unaff_x22 == (long *)0x0) goto LAB_01cb8124;
LAB_01cb813c:
    if ((int *)unaff_x22[3] == (int *)unaff_x22[4]) {
      iVar9 = (**(code **)(*unaff_x22 + 0x48))(unaff_x22);
    }
    else {
      iVar9 = *(int *)unaff_x22[3];
    }
    plVar11 = (long *)0x0;
    if (iVar9 != -1) {
      plVar11 = unaff_x22;
    }
    if (bVar7 == (iVar9 == -1)) goto LAB_01cb81e0;
  }
  else {
    if ((int *)plVar11[3] == (int *)plVar11[4]) {
      iVar9 = (**(code **)(*plVar11 + 0x48))();
    }
    else {
      iVar9 = *(int *)plVar11[3];
    }
    if (iVar9 == -1) {
      *unaff_x21 = 0;
      goto LAB_01cb8134;
    }
    bVar7 = *unaff_x21 == 0;
    bVar6 = bVar7;
    if (unaff_x22 != (long *)0x0) goto LAB_01cb813c;
LAB_01cb8124:
    if (bVar6) goto LAB_01cb81e0;
    plVar11 = (long *)0x0;
  }
  plVar12 = (long *)*unaff_x21;
  if ((int *)plVar12[3] == (int *)plVar12[4]) {
    iVar9 = (**(code **)(*plVar12 + 0x48))();
  }
  else {
    iVar9 = *(int *)plVar12[3];
  }
  pbVar15 = in_stack_00000048 + 4;
  if ((*in_stack_00000048 & 1) != 0) {
    pbVar15 = *(byte **)(in_stack_00000048 + 0x10);
  }
  if (iVar9 != *(int *)(pbVar15 + uVar28 * 4)) goto LAB_01cb81e0;
  plVar12 = (long *)*unaff_x21;
  uVar28 = (ulong)((int)uVar28 + 1);
  unaff_x22 = plVar11;
  if (plVar12[3] == plVar12[4]) {
    (**(code **)(*plVar12 + 0x50))();
  }
  else {
    plVar12[3] = plVar12[3] + 4;
  }
  goto LAB_01cb80bc;
LAB_01cb82b4:
  if (in_stack_00000068 == unaff_x19) {
    uVar27 = 1;
    in_stack_00000068 = unaff_x19;
    goto LAB_01cb81f0;
  }
  uVar28 = (ulong)(in_stack_000000e8 >> 1);
  if ((in_stack_000000e8 & 1) != 0) {
    uVar28 = in_stack_000000f0;
  }
  if ((uVar28 != 0) && (4 < (long)unaff_x19 - (long)in_stack_00000068)) {
    puVar16 = unaff_x19 + -1;
    puVar20 = puVar16;
    puVar22 = in_stack_00000068;
    if (in_stack_00000068 < puVar16) {
      do {
        puVar19 = puVar22 + 1;
        uVar29 = *puVar22;
        *puVar22 = *puVar20;
        puVar21 = puVar20 + -1;
        *puVar20 = uVar29;
        puVar20 = puVar21;
        puVar22 = puVar19;
      } while (puVar19 < puVar21);
      pbVar2 = (byte *)((ulong)&stack0x000000e8 | 1);
      if ((in_stack_000000e8 & 1) != 0) {
        pbVar2 = in_stack_000000f8;
      }
      pbVar15 = pbVar2;
      if (in_stack_00000068 < puVar16) {
        puVar22 = in_stack_00000068;
        uVar28 = (ulong)(in_stack_000000e8 >> 1);
        if ((in_stack_000000e8 & 1) != 0) {
          uVar28 = in_stack_000000f0;
        }
        do {
          bVar17 = *pbVar15;
          if (((bVar17 != 0) && (bVar17 != 0xff)) && (*puVar22 != (uint)bVar17)) goto LAB_01cb81e0;
          puVar22 = puVar22 + 1;
          if (1 < (long)(pbVar2 + (uVar28 - (long)pbVar15))) {
            pbVar15 = pbVar15 + 1;
          }
        } while (puVar22 < puVar16);
      }
    }
    else {
      pbVar15 = (byte *)((ulong)&stack0x000000e8 | 1);
      if ((in_stack_000000e8 & 1) != 0) {
        pbVar15 = in_stack_000000f8;
      }
    }
    bVar17 = *pbVar15;
    uVar27 = 1;
    if ((bVar17 == 0) || (bVar17 == 0xff)) goto LAB_01cb81f0;
    if ((uint)bVar17 <= *puVar16 - 1) {
LAB_01cb81e0:
      uVar27 = 0;
      *in_stack_00000038 = *in_stack_00000038 | 4;
      goto LAB_01cb81f0;
    }
  }
  uVar27 = 1;
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
    return uVar27;
  }
LAB_01cb83ec:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


