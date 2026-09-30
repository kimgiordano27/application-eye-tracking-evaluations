/*
FUNCTION_NAME: VRReady.Scripts.OVR.OVRManagerHelper$$Awake
ENTRY_POINT: 01cb7af8
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

undefined4 VRReady_Scripts_OVR_OVRManagerHelper__Awake(int *param_1)

{
  ulong uVar1;
  byte *pbVar2;
  size_t sVar3;
  ulong uVar4;
  wchar_t *pwVar5;
  int *piVar6;
  undefined1 in_ZR;
  bool bVar7;
  undefined1 uVar8;
  bool bVar9;
  wchar_t wVar10;
  int iVar11;
  void *pvVar12;
  long *plVar13;
  long *plVar14;
  int *piVar15;
  ulong uVar16;
  byte *pbVar17;
  uint *puVar18;
  byte bVar19;
  ulong uVar20;
  uint *puVar21;
  ulong in_x10;
  uint *puVar22;
  uint *puVar23;
  ulong in_x11;
  uint *puVar24;
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
  int *unaff_x24;
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
  
code_r0x01cb7af8:
  if (!(bool)in_ZR) {
    in_x11 = in_x10;
  }
  param_1 = param_1 + in_x11;
LAB_01cb7b00:
  if (unaff_x24 != param_1) {
    plVar13 = (long *)*unaff_x21;
    if (plVar13 == (long *)0x0) {
LAB_01cb7b50:
      bVar7 = true;
      if (unaff_x22 == (long *)0x0) goto LAB_01cb7b8c;
LAB_01cb7b58:
      if ((int *)unaff_x22[3] == (int *)unaff_x22[4]) {
        iVar11 = (**(code **)(*unaff_x22 + 0x48))(unaff_x22);
      }
      else {
        iVar11 = *(int *)unaff_x22[3];
      }
      if (iVar11 == -1) goto LAB_01cb7b8c;
      if (!bVar7) goto LAB_01cb7be8;
    }
    else {
      if ((int *)plVar13[3] == (int *)plVar13[4]) {
        iVar11 = (**(code **)(*plVar13 + 0x48))();
      }
      else {
        iVar11 = *(int *)plVar13[3];
      }
      if (iVar11 == -1) {
        *unaff_x21 = 0;
        goto LAB_01cb7b50;
      }
      bVar7 = *unaff_x21 == 0;
      if (unaff_x22 != (long *)0x0) goto LAB_01cb7b58;
LAB_01cb7b8c:
      unaff_x22 = (long *)0x0;
      if (bVar7) {
LAB_01cb7be8:
        unaff_x26 = &stack0x000000a0;
        goto LAB_01cb7bec;
      }
    }
    plVar13 = (long *)*unaff_x21;
    if ((int *)plVar13[3] == (int *)plVar13[4]) {
      iVar11 = (**(code **)(*plVar13 + 0x48))();
    }
    else {
      iVar11 = *(int *)plVar13[3];
    }
    unaff_x26 = &stack0x000000a0;
    if (iVar11 == *unaff_x24) goto code_r0x01cb7bc8;
  }
LAB_01cb7bec:
  uVar29 = unaff_x25;
  pbVar17 = in_stack_00000048;
  if ((unaff_w20 >> 9 & 1) != 0) {
    uVar16 = (ulong)(in_stack_000000d0 >> 1);
    piVar15 = in_stack_00000060;
    if ((in_stack_000000d0 & 1) != 0) {
      uVar16 = in_stack_000000d8;
      piVar15 = in_stack_000000e0;
    }
    if (unaff_x24 != piVar15 + uVar16) goto LAB_01cb81e0;
  }
switchD_01cb7390_default:
  in_stack_00000048 = pbVar17;
  unaff_x25 = uVar29 + 1;
  if (unaff_x25 != 4) {
    plVar13 = (long *)*unaff_x21;
    if (plVar13 == (long *)0x0) {
LAB_01cb7328:
      bVar7 = true;
      if (unaff_x22 == (long *)0x0) goto LAB_01cb7364;
LAB_01cb7330:
      if ((int *)unaff_x22[3] == (int *)unaff_x22[4]) {
        iVar11 = (**(code **)(*unaff_x22 + 0x48))(unaff_x22);
      }
      else {
        iVar11 = *(int *)unaff_x22[3];
      }
      if (iVar11 == -1) goto LAB_01cb7364;
      if (!bVar7) goto LAB_01cb80a0;
    }
    else {
      if ((int *)plVar13[3] == (int *)plVar13[4]) {
        iVar11 = (**(code **)(*plVar13 + 0x48))();
      }
      else {
        iVar11 = *(int *)plVar13[3];
      }
      if (iVar11 == -1) {
        *unaff_x21 = 0;
        goto LAB_01cb7328;
      }
      bVar7 = *unaff_x21 == 0;
      if (unaff_x22 != (long *)0x0) goto LAB_01cb7330;
LAB_01cb7364:
      unaff_x22 = (long *)0x0;
      if (bVar7) goto LAB_01cb80a0;
    }
    goto LAB_01cb736c;
  }
  goto LAB_01cb80a0;
code_r0x01cb7bc8:
  plVar13 = (long *)*unaff_x21;
  if (plVar13[3] == plVar13[4]) {
    (**(code **)(*plVar13 + 0x50))();
  }
  else {
    plVar13[3] = plVar13[3] + 4;
  }
  unaff_x24 = unaff_x24 + 1;
  in_x11 = (ulong)(in_stack_000000d0 >> 1);
  in_ZR = (in_stack_000000d0 & 1) == 0;
  param_1 = in_stack_00000060;
  in_x10 = in_stack_000000d8;
  if (!(bool)in_ZR) {
    param_1 = in_stack_000000e0;
  }
  goto code_r0x01cb7af8;
LAB_01cb736c:
  lVar27 = uVar29 + 1;
  uVar29 = unaff_x25;
  pbVar17 = in_stack_00000048;
  switch(*(undefined1 *)((long)&stack0x00000108 + lVar27)) {
  case 0:
    if (unaff_x25 == 3) goto LAB_01cb80a0;
    break;
  case 1:
    if (unaff_x25 == 3) {
LAB_01cb80a0:
      if (in_stack_00000048 == (byte *)0x0) goto LAB_01cb82b4;
      uVar29 = 1;
      goto LAB_01cb80bc;
    }
    plVar13 = (long *)*unaff_x21;
    if (plVar13[3] == plVar13[4]) {
      (**(code **)(*plVar13 + 0x48))();
    }
    uVar16 = (**(code **)(*unaff_x23 + 0x18))();
    if ((uVar16 & 1) == 0) goto LAB_01cb81e0;
    plVar13 = (long *)*unaff_x21;
    pwVar5 = (wchar_t *)plVar13[3];
    if (pwVar5 == (wchar_t *)plVar13[4]) {
      wVar10 = (**(code **)(*plVar13 + 0x50))();
    }
    else {
      plVar13[3] = (long)(pwVar5 + 1);
      wVar10 = *pwVar5;
    }
    std::__ndk1::
    basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::
    push_back(&stack0x00000088,wVar10);
    break;
  case 2:
    if ((unaff_x25 < 2) || (in_stack_00000048 != (byte *)0x0)) {
      bVar7 = (in_stack_000000d0 & 1) == 0;
      param_1 = in_stack_00000060;
      if (!bVar7) {
        param_1 = in_stack_000000e0;
      }
      piVar15 = param_1;
      if (unaff_x25 == 0) goto LAB_01cb77b4;
      goto LAB_01cb7740;
    }
    if (((unaff_x25 == 2 && in_stack_00000108._3_1_ != '\0') | in_stack_00000030._4_4_) != 1) {
      in_stack_00000048 = (byte *)0x0;
      pbVar17 = in_stack_00000048;
      goto switchD_01cb7390_default;
    }
    bVar7 = (in_stack_000000d0 & 1) == 0;
    piVar15 = in_stack_00000060;
    if (!bVar7) {
      piVar15 = in_stack_000000e0;
    }
LAB_01cb7740:
    bVar19 = in_stack_000000d0 & 1;
    uVar29 = (ulong)in_stack_000000d0;
    param_1 = piVar15;
    if (*(byte *)((long)&stack0x00000108 + (ulong)((int)unaff_x25 - 1)) < 2) {
      uVar16 = (ulong)(in_stack_000000d0 >> 1);
      if (!bVar7) {
        uVar16 = in_stack_000000d8;
      }
      if (uVar16 != 0) {
        do {
          uVar29 = (**(code **)(*unaff_x23 + 0x18))();
          if ((uVar29 & 1) == 0) {
            uVar29 = (ulong)in_stack_000000d0;
            bVar19 = in_stack_000000d0 & 1;
            break;
          }
          uVar29 = (ulong)in_stack_000000d0;
          piVar15 = piVar15 + 1;
          bVar19 = in_stack_000000d0 & 1;
          uVar16 = (ulong)(in_stack_000000d0 >> 1);
          piVar6 = in_stack_00000060;
          if ((in_stack_000000d0 & 1) != 0) {
            uVar16 = in_stack_000000d8;
            piVar6 = in_stack_000000e0;
          }
        } while (piVar15 != piVar6 + uVar16);
      }
      param_1 = in_stack_00000060;
      if (bVar19 != 0) {
        param_1 = in_stack_000000e0;
      }
      uVar16 = (long)piVar15 - (long)param_1;
      uVar20 = (long)uVar16 >> 2;
      unaff_x24 = param_1;
      if (((byte)in_stack_00000088 & 1) == 0) {
        uVar25 = (ulong)((byte)in_stack_00000088 >> 1);
        if (uVar25 < uVar20) goto LAB_01cb7abc;
        puVar26 = &stack0x0000008c + uVar25 * 4;
        pvVar12 = in_stack_00000010;
      }
      else {
        if (in_stack_00000090 < uVar20) goto LAB_01cb7abc;
        puVar26 = (undefined1 *)((long)in_stack_00000098 + in_stack_00000090 * 4);
        uVar25 = in_stack_00000090;
        pvVar12 = in_stack_00000098;
      }
      unaff_x24 = piVar15;
      if (puVar26 + uVar20 * -4 != (undefined1 *)((long)pvVar12 + uVar25 * 4)) {
        uVar4 = uVar16;
        if ((long)uVar16 < 0) {
          uVar4 = 0xffffffffffffffff;
        }
        if (0 < (long)uVar4) {
          uVar4 = 1;
        }
        uVar1 = (long)param_1 - (long)piVar15;
        if ((long)param_1 - (long)piVar15 <= (long)uVar16) {
          uVar1 = uVar16;
        }
        lVar27 = 0;
        do {
          unaff_x24 = param_1;
          if (*(int *)(puVar26 + uVar20 * -4 + lVar27) != *(int *)((long)param_1 + lVar27)) break;
          lVar27 = lVar27 + 4;
          unaff_x24 = piVar15;
        } while ((long)pvVar12 + ((uVar25 + uVar4 * (uVar1 >> 2)) * 4 - (long)puVar26) != lVar27);
      }
    }
    else {
LAB_01cb77b4:
      bVar19 = in_stack_000000d0 & 1;
      uVar29 = (ulong)in_stack_000000d0;
      unaff_x24 = param_1;
    }
LAB_01cb7abc:
    uVar29 = uVar29 >> 1;
    if (bVar19 != 0) {
      uVar29 = in_stack_000000d8;
    }
    param_1 = param_1 + uVar29;
    goto LAB_01cb7b00;
  case 3:
    uVar20 = (ulong)in_stack_000000b8;
    bVar19 = in_stack_000000b8 & 1;
    uVar16 = (ulong)(in_stack_000000b8 >> 1);
    if ((in_stack_000000b8 & 1) != 0) {
      uVar16 = in_stack_000000c0;
    }
    uVar25 = (ulong)(in_stack_000000a0 >> 1);
    if ((in_stack_000000a0 & 1) != 0) {
      uVar25 = in_stack_000000a8;
    }
    if (uVar16 + uVar25 == 0) goto switchD_01cb7390_default;
    if (uVar16 == 0) {
      plVar13 = (long *)*unaff_x21;
      if ((int *)plVar13[3] == (int *)plVar13[4]) {
        iVar11 = (**(code **)(*plVar13 + 0x48))();
      }
      else {
        iVar11 = *(int *)plVar13[3];
      }
      piVar15 = in_stack_00000020;
      if ((in_stack_000000a0 & 1) != 0) {
        piVar15 = in_stack_000000b0;
      }
      if (iVar11 != *piVar15) goto switchD_01cb7390_default;
      plVar13 = (long *)*unaff_x21;
      if (plVar13[3] == plVar13[4]) {
        (**(code **)(*plVar13 + 0x50))();
      }
      else {
        plVar13[3] = plVar13[3] + 4;
      }
      *in_stack_00000018 = 1;
      uVar16 = (ulong)(in_stack_000000a0 >> 1);
      if ((in_stack_000000a0 & 1) != 0) {
        uVar16 = in_stack_000000a8;
      }
LAB_01cb8050:
      pbVar17 = unaff_x26;
      if (uVar16 < 2) {
        pbVar17 = in_stack_00000048;
      }
      goto switchD_01cb7390_default;
    }
    plVar13 = (long *)*unaff_x21;
    piVar15 = (int *)plVar13[3];
    if (uVar25 == 0) {
      if (piVar15 == (int *)plVar13[4]) {
        iVar11 = (**(code **)(*plVar13 + 0x48))();
        uVar20 = (ulong)in_stack_000000b8;
        bVar19 = in_stack_000000b8 & 1;
      }
      else {
        iVar11 = *piVar15;
      }
      piVar15 = in_stack_00000028;
      if (bVar19 != 0) {
        piVar15 = in_stack_000000c8;
      }
      if (iVar11 != *piVar15) {
        *in_stack_00000018 = 1;
        goto switchD_01cb7390_default;
      }
      plVar13 = (long *)*unaff_x21;
      if (plVar13[3] != plVar13[4]) {
        plVar13[3] = plVar13[3] + 4;
        goto LAB_01cb807c;
      }
      (**(code **)(*plVar13 + 0x50))();
    }
    else {
      if (piVar15 == (int *)plVar13[4]) {
        iVar11 = (**(code **)(*plVar13 + 0x48))();
        uVar20 = (ulong)in_stack_000000b8;
        bVar19 = in_stack_000000b8 & 1;
      }
      else {
        iVar11 = *piVar15;
      }
      plVar13 = (long *)*unaff_x21;
      piVar15 = in_stack_00000028;
      if (bVar19 != 0) {
        piVar15 = in_stack_000000c8;
      }
      piVar6 = (int *)plVar13[3];
      if (iVar11 != *piVar15) {
        if (piVar6 == (int *)plVar13[4]) {
          iVar11 = (**(code **)(*plVar13 + 0x48))(plVar13);
        }
        else {
          iVar11 = *piVar6;
        }
        piVar15 = in_stack_00000020;
        if ((in_stack_000000a0 & 1) != 0) {
          piVar15 = in_stack_000000b0;
        }
        if (iVar11 != *piVar15) goto LAB_01cb81e0;
        plVar13 = (long *)*unaff_x21;
        if (plVar13[3] == plVar13[4]) {
          (**(code **)(*plVar13 + 0x50))();
        }
        else {
          plVar13[3] = plVar13[3] + 4;
        }
        *in_stack_00000018 = 1;
        uVar16 = (ulong)(in_stack_000000a0 >> 1);
        if ((in_stack_000000a0 & 1) != 0) {
          uVar16 = in_stack_000000a8;
        }
        goto LAB_01cb8050;
      }
      if (piVar6 != (int *)plVar13[4]) {
        plVar13[3] = (long)(piVar6 + 1);
        goto LAB_01cb807c;
      }
      (**(code **)(*plVar13 + 0x50))(plVar13);
    }
    uVar20 = (ulong)in_stack_000000b8;
    bVar19 = in_stack_000000b8 & 1;
LAB_01cb807c:
    uVar16 = uVar20 >> 1;
    if (bVar19 != 0) {
      uVar16 = in_stack_000000c0;
    }
    pbVar17 = &stack0x000000b8;
    if (uVar16 < 2) {
      pbVar17 = in_stack_00000048;
    }
    goto switchD_01cb7390_default;
  case 4:
    uVar30 = 0;
    puVar24 = unaff_x19;
LAB_01cb73b8:
    plVar13 = (long *)*unaff_x21;
    if (plVar13 == (long *)0x0) {
LAB_01cb7400:
      bVar7 = true;
      if (unaff_x22 == (long *)0x0) goto LAB_01cb743c;
LAB_01cb7408:
      if ((int *)unaff_x22[3] == (int *)unaff_x22[4]) {
        iVar11 = (**(code **)(*unaff_x22 + 0x48))(unaff_x22);
      }
      else {
        iVar11 = *(int *)unaff_x22[3];
      }
      if (iVar11 == -1) goto LAB_01cb743c;
      if (!bVar7) goto LAB_01cb76c0;
    }
    else {
      if ((int *)plVar13[3] == (int *)plVar13[4]) {
        iVar11 = (**(code **)(*plVar13 + 0x48))();
      }
      else {
        iVar11 = *(int *)plVar13[3];
      }
      if (iVar11 == -1) {
        *unaff_x21 = 0;
        goto LAB_01cb7400;
      }
      bVar7 = *unaff_x21 == 0;
      if (unaff_x22 != (long *)0x0) goto LAB_01cb7408;
LAB_01cb743c:
      unaff_x22 = (long *)0x0;
      if (bVar7) goto LAB_01cb76c0;
    }
    plVar13 = (long *)*unaff_x21;
    if ((int *)plVar13[3] == (int *)plVar13[4]) {
      iVar11 = (**(code **)(*plVar13 + 0x48))();
    }
    else {
      iVar11 = *(int *)plVar13[3];
    }
    uVar16 = (**(code **)(*unaff_x23 + 0x18))();
    if ((uVar16 & 1) == 0) {
      uVar16 = (ulong)(in_stack_000000e8 >> 1);
      if ((in_stack_000000e8 & 1) != 0) {
        uVar16 = in_stack_000000f0;
      }
      if (((iVar11 == iStack0000000000000100) && (uVar30 != 0)) && (uVar16 != 0)) {
        if (puVar24 != in_stack_00000078) {
LAB_01cb75c8:
          puVar22 = puVar24 + 1;
          *puVar24 = uVar30;
          uVar30 = 0;
          goto LAB_01cb75d0;
        }
        uVar16 = (long)in_stack_00000078 - (long)in_stack_00000068;
        sVar3 = 4;
        if (uVar16 != 0) {
          sVar3 = uVar16 * 2;
        }
        if (0x7ffffffffffffffe < uVar16) {
          sVar3 = 0xffffffffffffffff;
        }
        if (in_stack_00000058 == (code *)StringLiteral_16881) {
          in_stack_00000068 = malloc(sVar3);
        }
        else {
          in_stack_00000068 = realloc(in_stack_00000068,sVar3);
        }
        if (in_stack_00000068 != (uint *)0x0) {
          in_stack_00000078 = (uint *)((long)in_stack_00000068 + (sVar3 & 0xfffffffffffffffc));
          puVar24 = (uint *)((long)in_stack_00000068 + uVar16);
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
      uVar16 = (long)unaff_x27 - *in_stack_00000070;
      sVar3 = 4;
      if (uVar16 != 0) {
        sVar3 = uVar16 * 2;
      }
      if (0x7ffffffffffffffe < uVar16) {
        sVar3 = 0xffffffffffffffff;
      }
      if ((undefined *)in_stack_00000070[1] == StringLiteral_16881) {
        pvVar12 = malloc(sVar3);
      }
      else {
        pvVar12 = realloc((void *)*in_stack_00000070,sVar3);
      }
      if (pvVar12 == (void *)0x0) {
        std::__throw_bad_alloc();
        goto LAB_01cb83e0;
      }
      *in_stack_00000070 = (long)pvVar12;
      in_stack_00000070[1] = (long)StringLiteral_16882;
      piVar15 = (int *)((long)pvVar12 + uVar16);
      *unaff_x28 = (long)piVar15;
      unaff_x27 = (int *)(*in_stack_00000070 + (sVar3 & 0xfffffffffffffffc));
      unaff_w20 = in_stack_00000050._4_4_;
    }
    *unaff_x28 = (long)(piVar15 + 1);
    *piVar15 = iVar11;
    uVar30 = uVar30 + 1;
    puVar22 = puVar24;
LAB_01cb75d0:
    plVar13 = (long *)*unaff_x21;
    puVar24 = puVar22;
    if (plVar13[3] == plVar13[4]) {
      (**(code **)(*plVar13 + 0x50))();
    }
    else {
      plVar13[3] = plVar13[3] + 4;
    }
    goto LAB_01cb73b8;
  default:
    goto switchD_01cb7390_default;
  }
  do {
    plVar13 = (long *)*unaff_x21;
    if (plVar13 == (long *)0x0) {
LAB_01cb787c:
      bVar7 = true;
      if (unaff_x22 == (long *)0x0) goto LAB_01cb78b8;
LAB_01cb7884:
      if ((int *)unaff_x22[3] == (int *)unaff_x22[4]) {
        iVar11 = (**(code **)(*unaff_x22 + 0x48))(unaff_x22);
      }
      else {
        iVar11 = *(int *)unaff_x22[3];
      }
      if (iVar11 == -1) goto LAB_01cb78b8;
      if (!bVar7) goto switchD_01cb7390_default;
    }
    else {
      if ((int *)plVar13[3] == (int *)plVar13[4]) {
        iVar11 = (**(code **)(*plVar13 + 0x48))();
      }
      else {
        iVar11 = *(int *)plVar13[3];
      }
      if (iVar11 == -1) {
        *unaff_x21 = 0;
        goto LAB_01cb787c;
      }
      bVar7 = *unaff_x21 == 0;
      if (unaff_x22 != (long *)0x0) goto LAB_01cb7884;
LAB_01cb78b8:
      unaff_x22 = (long *)0x0;
      if (bVar7) goto switchD_01cb7390_default;
    }
    plVar13 = (long *)*unaff_x21;
    if (plVar13[3] == plVar13[4]) {
      (**(code **)(*plVar13 + 0x48))();
    }
    uVar16 = (**(code **)(*unaff_x23 + 0x18))();
    if ((uVar16 & 1) == 0) goto switchD_01cb7390_default;
    plVar13 = (long *)*unaff_x21;
    pwVar5 = (wchar_t *)plVar13[3];
    if (pwVar5 == (wchar_t *)plVar13[4]) {
      wVar10 = (**(code **)(*plVar13 + 0x50))();
    }
    else {
      plVar13[3] = (long)(pwVar5 + 1);
      wVar10 = *pwVar5;
    }
    std::__ndk1::
    basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::
    push_back(&stack0x00000088,wVar10);
  } while( true );
LAB_01cb76c0:
  unaff_x19 = puVar24;
  if ((in_stack_00000068 != puVar24) && (uVar30 != 0)) {
    if (puVar24 == in_stack_00000078) {
      uVar16 = (long)in_stack_00000078 - (long)in_stack_00000068;
      sVar3 = 4;
      if (uVar16 != 0) {
        sVar3 = uVar16 * 2;
      }
      if (0x7ffffffffffffffe < uVar16) {
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
      puVar24 = (uint *)((long)in_stack_00000068 + uVar16);
      in_stack_00000058 = (code *)StringLiteral_16882;
    }
    unaff_x19 = puVar24 + 1;
    *puVar24 = uVar30;
  }
  if (in_stack_00000080._4_4_ < 1) {
LAB_01cb72c0:
    unaff_x26 = &stack0x000000a0;
    if (*unaff_x28 == *in_stack_00000070) goto LAB_01cb81e0;
    goto switchD_01cb7390_default;
  }
  plVar13 = (long *)*unaff_x21;
  if (plVar13 != (long *)0x0) {
    if ((int *)plVar13[3] == (int *)plVar13[4]) {
      iVar11 = (**(code **)(*plVar13 + 0x48))();
    }
    else {
      iVar11 = *(int *)plVar13[3];
    }
    if (iVar11 != -1) {
      uVar8 = *unaff_x21 == 0;
      goto joined_r0x01cb7cb0;
    }
    *unaff_x21 = 0;
  }
  uVar8 = true;
joined_r0x01cb7cb0:
  if (unaff_x22 == (long *)0x0) {
    if ((bool)uVar8) goto LAB_01cb81e0;
    plVar13 = (long *)0x0;
  }
  else {
    if ((int *)unaff_x22[3] == (int *)unaff_x22[4]) {
      iVar11 = (**(code **)(*unaff_x22 + 0x48))(unaff_x22);
    }
    else {
      iVar11 = *(int *)unaff_x22[3];
    }
    plVar13 = (long *)0x0;
    if (iVar11 != -1) {
      plVar13 = unaff_x22;
    }
    if ((bool)uVar8 == (iVar11 == -1)) goto LAB_01cb81e0;
  }
  plVar14 = (long *)*unaff_x21;
  if ((int *)plVar14[3] == (int *)plVar14[4]) {
    iVar11 = (**(code **)(*plVar14 + 0x48))();
  }
  else {
    iVar11 = *(int *)plVar14[3];
  }
  if (iVar11 == iStack0000000000000104) {
    plVar14 = (long *)*unaff_x21;
    unaff_x22 = plVar13;
    if (plVar14[3] == plVar14[4]) {
      (**(code **)(*plVar14 + 0x50))();
    }
    else {
      plVar14[3] = plVar14[3] + 4;
    }
joined_r0x01cb7d4c:
    plVar13 = unaff_x22;
    if (0 < in_stack_00000080._4_4_) {
      do {
        plVar14 = (long *)*unaff_x21;
        if (plVar14 == (long *)0x0) {
LAB_01cb7db4:
          bVar9 = true;
          bVar7 = true;
          if (plVar13 == (long *)0x0) goto LAB_01cb7da4;
LAB_01cb7dbc:
          if ((int *)plVar13[3] == (int *)plVar13[4]) {
            iVar11 = (**(code **)(*plVar13 + 0x48))(plVar13);
          }
          else {
            iVar11 = *(int *)plVar13[3];
          }
          unaff_x22 = (long *)0x0;
          if (iVar11 != -1) {
            unaff_x22 = plVar13;
          }
          if (bVar9 == (iVar11 == -1)) goto LAB_01cb81e0;
        }
        else {
          if ((int *)plVar14[3] == (int *)plVar14[4]) {
            iVar11 = (**(code **)(*plVar14 + 0x48))();
          }
          else {
            iVar11 = *(int *)plVar14[3];
          }
          if (iVar11 == -1) {
            *unaff_x21 = 0;
            goto LAB_01cb7db4;
          }
          bVar9 = *unaff_x21 == 0;
          bVar7 = bVar9;
          if (plVar13 != (long *)0x0) goto LAB_01cb7dbc;
LAB_01cb7da4:
          if (bVar7) goto LAB_01cb81e0;
          unaff_x22 = (long *)0x0;
        }
        plVar13 = (long *)*unaff_x21;
        if (plVar13[3] == plVar13[4]) {
          (**(code **)(*plVar13 + 0x48))();
        }
        uVar16 = (**(code **)(*unaff_x23 + 0x18))();
        if ((uVar16 & 1) == 0) goto LAB_01cb81e0;
        piVar15 = (int *)*unaff_x28;
        if (piVar15 == unaff_x27) {
          uVar16 = (long)unaff_x27 - *in_stack_00000070;
          sVar3 = 4;
          if (uVar16 != 0) {
            sVar3 = uVar16 * 2;
          }
          if (0x7ffffffffffffffe < uVar16) {
            sVar3 = 0xffffffffffffffff;
          }
          if ((undefined *)in_stack_00000070[1] == StringLiteral_16881) {
            pvVar12 = malloc(sVar3);
          }
          else {
            pvVar12 = realloc((void *)*in_stack_00000070,sVar3);
          }
          if (pvVar12 == (void *)0x0) goto LAB_01cb83e4;
          *in_stack_00000070 = (long)pvVar12;
          in_stack_00000070[1] = (long)StringLiteral_16882;
          piVar15 = (int *)((long)pvVar12 + uVar16);
          *unaff_x28 = (long)piVar15;
          unaff_x27 = (int *)(*in_stack_00000070 + (sVar3 & 0xfffffffffffffffc));
          unaff_w20 = in_stack_00000050._4_4_;
        }
        plVar13 = (long *)*unaff_x21;
        if ((int *)plVar13[3] == (int *)plVar13[4]) {
          iVar11 = (**(code **)(*plVar13 + 0x48))();
          piVar15 = (int *)*unaff_x28;
        }
        else {
          iVar11 = *(int *)plVar13[3];
        }
        *unaff_x28 = (long)(piVar15 + 1);
        *piVar15 = iVar11;
        in_stack_00000080._4_4_ = in_stack_00000080._4_4_ + -1;
        plVar13 = (long *)*unaff_x21;
        if (plVar13[3] == plVar13[4]) goto code_r0x01cb7f10;
        plVar13[3] = plVar13[3] + 4;
        plVar13 = unaff_x22;
        if (in_stack_00000080._4_4_ < 1) break;
      } while( true );
    }
    goto LAB_01cb72c0;
  }
  goto LAB_01cb81e0;
code_r0x01cb7f10:
  (**(code **)(*plVar13 + 0x50))();
  goto joined_r0x01cb7d4c;
LAB_01cb80bc:
  if ((*in_stack_00000048 & 1) == 0) {
    uVar16 = (ulong)(*in_stack_00000048 >> 1);
  }
  else {
    uVar16 = *(ulong *)(in_stack_00000048 + 8);
  }
  if (uVar16 <= uVar29) goto LAB_01cb82b4;
  plVar13 = (long *)*unaff_x21;
  if (plVar13 == (long *)0x0) {
LAB_01cb8134:
    bVar9 = true;
    bVar7 = true;
    if (unaff_x22 == (long *)0x0) goto LAB_01cb8124;
LAB_01cb813c:
    if ((int *)unaff_x22[3] == (int *)unaff_x22[4]) {
      iVar11 = (**(code **)(*unaff_x22 + 0x48))(unaff_x22);
    }
    else {
      iVar11 = *(int *)unaff_x22[3];
    }
    plVar13 = (long *)0x0;
    if (iVar11 != -1) {
      plVar13 = unaff_x22;
    }
    if (bVar9 == (iVar11 == -1)) goto LAB_01cb81e0;
  }
  else {
    if ((int *)plVar13[3] == (int *)plVar13[4]) {
      iVar11 = (**(code **)(*plVar13 + 0x48))();
    }
    else {
      iVar11 = *(int *)plVar13[3];
    }
    if (iVar11 == -1) {
      *unaff_x21 = 0;
      goto LAB_01cb8134;
    }
    bVar9 = *unaff_x21 == 0;
    bVar7 = bVar9;
    if (unaff_x22 != (long *)0x0) goto LAB_01cb813c;
LAB_01cb8124:
    if (bVar7) goto LAB_01cb81e0;
    plVar13 = (long *)0x0;
  }
  plVar14 = (long *)*unaff_x21;
  if ((int *)plVar14[3] == (int *)plVar14[4]) {
    iVar11 = (**(code **)(*plVar14 + 0x48))();
  }
  else {
    iVar11 = *(int *)plVar14[3];
  }
  pbVar17 = in_stack_00000048 + 4;
  if ((*in_stack_00000048 & 1) != 0) {
    pbVar17 = *(byte **)(in_stack_00000048 + 0x10);
  }
  if (iVar11 != *(int *)(pbVar17 + uVar29 * 4)) goto LAB_01cb81e0;
  plVar14 = (long *)*unaff_x21;
  uVar29 = (ulong)((int)uVar29 + 1);
  unaff_x22 = plVar13;
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
    puVar18 = unaff_x19 + -1;
    puVar22 = puVar18;
    puVar24 = in_stack_00000068;
    if (in_stack_00000068 < puVar18) {
      do {
        puVar21 = puVar24 + 1;
        uVar30 = *puVar24;
        *puVar24 = *puVar22;
        puVar23 = puVar22 + -1;
        *puVar22 = uVar30;
        puVar22 = puVar23;
        puVar24 = puVar21;
      } while (puVar21 < puVar23);
      pbVar2 = (byte *)((ulong)&stack0x000000e8 | 1);
      if ((in_stack_000000e8 & 1) != 0) {
        pbVar2 = in_stack_000000f8;
      }
      pbVar17 = pbVar2;
      if (in_stack_00000068 < puVar18) {
        puVar24 = in_stack_00000068;
        uVar29 = (ulong)(in_stack_000000e8 >> 1);
        if ((in_stack_000000e8 & 1) != 0) {
          uVar29 = in_stack_000000f0;
        }
        do {
          bVar19 = *pbVar17;
          if (((bVar19 != 0) && (bVar19 != 0xff)) && (*puVar24 != (uint)bVar19)) goto LAB_01cb81e0;
          puVar24 = puVar24 + 1;
          if (1 < (long)(pbVar2 + (uVar29 - (long)pbVar17))) {
            pbVar17 = pbVar17 + 1;
          }
        } while (puVar24 < puVar18);
      }
    }
    else {
      pbVar17 = (byte *)((ulong)&stack0x000000e8 | 1);
      if ((in_stack_000000e8 & 1) != 0) {
        pbVar17 = in_stack_000000f8;
      }
    }
    bVar19 = *pbVar17;
    uVar28 = 1;
    if ((bVar19 == 0) || (bVar19 == 0xff)) goto LAB_01cb81f0;
    if ((uint)bVar19 <= *puVar18 - 1) {
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


