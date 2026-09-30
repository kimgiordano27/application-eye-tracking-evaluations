/*
FUNCTION_NAME: CartoonFX.CFXR_Effect.CameraShake$$onPostRenderCamera
ENTRY_POINT: 01b01488
PROGRAM: vrlegs-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ray_or_cast_sink_hits_8;telemetry_or_network_hits_2
*/


/* WARNING: Type propagation algorithm not settling */

undefined4 CartoonFX_CFXR_Effect_CameraShake__onPostRenderCamera(ulong param_1,ulong param_2)

{
  ulong uVar1;
  byte *pbVar2;
  size_t sVar3;
  wchar_t *pwVar4;
  bool bVar5;
  undefined1 uVar6;
  bool bVar7;
  wchar_t wVar8;
  int iVar9;
  void *pvVar10;
  long *plVar11;
  long *plVar12;
  int *piVar13;
  int *piVar14;
  ulong uVar15;
  byte *pbVar16;
  uint *puVar17;
  byte in_w9;
  ulong uVar18;
  uint *puVar19;
  byte bVar20;
  int *in_x10;
  uint *puVar21;
  uint *puVar22;
  ulong in_x11;
  uint *puVar23;
  ulong in_x12;
  undefined1 *in_x13;
  undefined1 *in_x14;
  void *in_x15;
  long lVar24;
  ulong in_x17;
  uint *unaff_x19;
  uint unaff_w20;
  undefined4 uVar25;
  long *unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  ulong uVar26;
  uint uVar27;
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
  
code_r0x01b01488:
  if (0 < (long)param_2) {
    param_2 = 1;
  }
  if ((long)in_x17 <= (long)in_x11) {
    in_x17 = in_x11;
  }
  lVar24 = 0;
  do {
    piVar13 = in_x10;
    if (*(int *)(in_x13 + lVar24) != *(int *)((long)in_x10 + lVar24)) break;
    lVar24 = lVar24 + 4;
    piVar13 = unaff_x24;
  } while ((long)in_x15 + ((in_x12 + param_2 * (in_x17 >> 2)) * 4 - (long)in_x14) != lVar24);
LAB_01b014c8:
  uVar26 = param_1 >> 1 & 0x7fffffff;
  if (in_w9 != 0) {
    uVar26 = in_stack_000000d8;
  }
  for (piVar14 = in_x10 + uVar26; piVar13 != piVar14; piVar14 = piVar14 + uVar26) {
    plVar11 = (long *)*unaff_x21;
    if (plVar11 == (long *)0x0) {
LAB_01b0155c:
      bVar5 = true;
      if (unaff_x22 == (long *)0x0) goto LAB_01b01598;
LAB_01b01564:
      if ((int *)unaff_x22[3] == (int *)unaff_x22[4]) {
        iVar9 = (**(code **)(*unaff_x22 + 0x48))(unaff_x22);
      }
      else {
        iVar9 = *(int *)unaff_x22[3];
      }
      if (iVar9 == -1) goto LAB_01b01598;
      if (!bVar5) goto LAB_01b015f4;
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
        goto LAB_01b0155c;
      }
      bVar5 = *unaff_x21 == 0;
      if (unaff_x22 != (long *)0x0) goto LAB_01b01564;
LAB_01b01598:
      unaff_x22 = (long *)0x0;
      if (bVar5) {
LAB_01b015f4:
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
    if (iVar9 != *piVar13) break;
    plVar11 = (long *)*unaff_x21;
    if (plVar11[3] == plVar11[4]) {
      (**(code **)(*plVar11 + 0x50))();
    }
    else {
      plVar11[3] = plVar11[3] + 4;
    }
    piVar13 = piVar13 + 1;
    uVar26 = (ulong)(in_stack_000000d0 >> 1);
    piVar14 = in_stack_00000060;
    if ((in_stack_000000d0 & 1) != 0) {
      uVar26 = in_stack_000000d8;
      piVar14 = in_stack_000000e0;
    }
  }
  uVar26 = unaff_x25;
  pbVar16 = in_stack_00000048;
  if ((unaff_w20 >> 9 & 1) != 0) {
    uVar15 = (ulong)(in_stack_000000d0 >> 1);
    piVar14 = in_stack_00000060;
    if ((in_stack_000000d0 & 1) != 0) {
      uVar15 = in_stack_000000d8;
      piVar14 = in_stack_000000e0;
    }
    if (piVar13 != piVar14 + uVar15) goto LAB_01b01bec;
  }
switchD_01b00d9c_default:
  in_stack_00000048 = pbVar16;
  unaff_x25 = uVar26 + 1;
  if (unaff_x25 != 4) {
    plVar11 = (long *)*unaff_x21;
    if (plVar11 == (long *)0x0) {
LAB_01b00d34:
      bVar5 = true;
      if (unaff_x22 == (long *)0x0) goto LAB_01b00d70;
LAB_01b00d3c:
      if ((int *)unaff_x22[3] == (int *)unaff_x22[4]) {
        iVar9 = (**(code **)(*unaff_x22 + 0x48))(unaff_x22);
      }
      else {
        iVar9 = *(int *)unaff_x22[3];
      }
      if (iVar9 == -1) goto LAB_01b00d70;
      if (!bVar5) goto LAB_01b01aac;
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
        goto LAB_01b00d34;
      }
      bVar5 = *unaff_x21 == 0;
      if (unaff_x22 != (long *)0x0) goto LAB_01b00d3c;
LAB_01b00d70:
      unaff_x22 = (long *)0x0;
      if (bVar5) goto LAB_01b01aac;
    }
    goto LAB_01b00d78;
  }
  goto LAB_01b01aac;
LAB_01b00d78:
  lVar24 = uVar26 + 1;
  uVar26 = unaff_x25;
  pbVar16 = in_stack_00000048;
  switch(*(undefined1 *)((long)&stack0x00000108 + lVar24)) {
  case 0:
    if (unaff_x25 == 3) goto LAB_01b01aac;
    break;
  case 1:
    if (unaff_x25 == 3) {
LAB_01b01aac:
      if (in_stack_00000048 == (byte *)0x0) goto LAB_01b01cc0;
      uVar26 = 1;
      goto LAB_01b01ac8;
    }
    plVar11 = (long *)*unaff_x21;
    if (plVar11[3] == plVar11[4]) {
      (**(code **)(*plVar11 + 0x48))();
    }
    uVar15 = (**(code **)(*unaff_x23 + 0x18))();
    if ((uVar15 & 1) == 0) goto LAB_01b01bec;
    plVar11 = (long *)*unaff_x21;
    pwVar4 = (wchar_t *)plVar11[3];
    if (pwVar4 == (wchar_t *)plVar11[4]) {
      wVar8 = (**(code **)(*plVar11 + 0x50))();
    }
    else {
      plVar11[3] = (long)(pwVar4 + 1);
      wVar8 = *pwVar4;
    }
    std::__ndk1::
    basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::
    push_back(&stack0x00000088,wVar8);
    break;
  case 2:
    unaff_x24 = in_stack_00000060;
    if ((unaff_x25 < 2) || (in_stack_00000048 != (byte *)0x0)) {
      bVar5 = (in_stack_000000d0 & 1) == 0;
      if (!bVar5) {
        unaff_x24 = in_stack_000000e0;
      }
      in_x10 = unaff_x24;
      if (unaff_x25 == 0) goto LAB_01b011c0;
      goto LAB_01b0114c;
    }
    if (((unaff_x25 == 2 && in_stack_00000108._3_1_ != '\0') | in_stack_00000030._4_4_) != 1) {
      in_stack_00000048 = (byte *)0x0;
      pbVar16 = in_stack_00000048;
      goto switchD_01b00d9c_default;
    }
    bVar5 = (in_stack_000000d0 & 1) == 0;
    if (!bVar5) {
      unaff_x24 = in_stack_000000e0;
    }
LAB_01b0114c:
    in_w9 = in_stack_000000d0 & 1;
    param_1 = (ulong)in_stack_000000d0;
    in_x10 = unaff_x24;
    if (1 < *(byte *)((long)&stack0x00000108 + (ulong)((int)unaff_x25 - 1))) {
LAB_01b011c0:
      in_w9 = in_stack_000000d0 & 1;
      param_1 = (ulong)in_stack_000000d0;
      piVar13 = in_x10;
      goto LAB_01b014c8;
    }
    uVar26 = (ulong)(in_stack_000000d0 >> 1);
    if (!bVar5) {
      uVar26 = in_stack_000000d8;
    }
    if (uVar26 != 0) {
      do {
        uVar26 = (**(code **)(*unaff_x23 + 0x18))();
        if ((uVar26 & 1) == 0) {
          param_1 = (ulong)in_stack_000000d0;
          in_w9 = in_stack_000000d0 & 1;
          break;
        }
        param_1 = (ulong)in_stack_000000d0;
        unaff_x24 = unaff_x24 + 1;
        in_w9 = in_stack_000000d0 & 1;
        uVar26 = (ulong)(in_stack_000000d0 >> 1);
        piVar13 = in_stack_00000060;
        if ((in_stack_000000d0 & 1) != 0) {
          uVar26 = in_stack_000000d8;
          piVar13 = in_stack_000000e0;
        }
      } while (unaff_x24 != piVar13 + uVar26);
    }
    in_x10 = in_stack_00000060;
    if (in_w9 != 0) {
      in_x10 = in_stack_000000e0;
    }
    in_x11 = (long)unaff_x24 - (long)in_x10;
    uVar26 = (long)in_x11 >> 2;
    piVar13 = in_x10;
    if (((byte)in_stack_00000088 & 1) == 0) {
      in_x12 = (ulong)((byte)in_stack_00000088 >> 1);
      if (in_x12 < uVar26) goto LAB_01b014c8;
      in_x14 = &stack0x0000008c + in_x12 * 4;
      in_x15 = in_stack_00000010;
    }
    else {
      if (in_stack_00000090 < uVar26) goto LAB_01b014c8;
      in_x14 = (undefined1 *)((long)in_stack_00000098 + in_stack_00000090 * 4);
      in_x12 = in_stack_00000090;
      in_x15 = in_stack_00000098;
    }
    in_x13 = in_x14 + uVar26 * -4;
    piVar13 = unaff_x24;
    if (in_x13 != (undefined1 *)((long)in_x15 + in_x12 * 4)) goto code_r0x01b0147c;
    goto LAB_01b014c8;
  case 3:
    uVar18 = (ulong)in_stack_000000b8;
    bVar20 = in_stack_000000b8 & 1;
    uVar15 = (ulong)(in_stack_000000b8 >> 1);
    if ((in_stack_000000b8 & 1) != 0) {
      uVar15 = in_stack_000000c0;
    }
    uVar1 = (ulong)(in_stack_000000a0 >> 1);
    if ((in_stack_000000a0 & 1) != 0) {
      uVar1 = in_stack_000000a8;
    }
    if (uVar15 + uVar1 == 0) goto switchD_01b00d9c_default;
    if (uVar15 == 0) {
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
      if (iVar9 != *piVar13) goto switchD_01b00d9c_default;
      plVar11 = (long *)*unaff_x21;
      if (plVar11[3] == plVar11[4]) {
        (**(code **)(*plVar11 + 0x50))();
      }
      else {
        plVar11[3] = plVar11[3] + 4;
      }
      *in_stack_00000018 = 1;
      uVar15 = (ulong)(in_stack_000000a0 >> 1);
      if ((in_stack_000000a0 & 1) != 0) {
        uVar15 = in_stack_000000a8;
      }
LAB_01b01a5c:
      pbVar16 = unaff_x26;
      if (uVar15 < 2) {
        pbVar16 = in_stack_00000048;
      }
      goto switchD_01b00d9c_default;
    }
    plVar11 = (long *)*unaff_x21;
    piVar13 = (int *)plVar11[3];
    if (uVar1 == 0) {
      if (piVar13 == (int *)plVar11[4]) {
        iVar9 = (**(code **)(*plVar11 + 0x48))();
        uVar18 = (ulong)in_stack_000000b8;
        bVar20 = in_stack_000000b8 & 1;
      }
      else {
        iVar9 = *piVar13;
      }
      piVar13 = in_stack_00000028;
      if (bVar20 != 0) {
        piVar13 = in_stack_000000c8;
      }
      if (iVar9 != *piVar13) {
        *in_stack_00000018 = 1;
        goto switchD_01b00d9c_default;
      }
      plVar11 = (long *)*unaff_x21;
      if (plVar11[3] != plVar11[4]) {
        plVar11[3] = plVar11[3] + 4;
        goto LAB_01b01a88;
      }
      (**(code **)(*plVar11 + 0x50))();
    }
    else {
      if (piVar13 == (int *)plVar11[4]) {
        iVar9 = (**(code **)(*plVar11 + 0x48))();
        uVar18 = (ulong)in_stack_000000b8;
        bVar20 = in_stack_000000b8 & 1;
      }
      else {
        iVar9 = *piVar13;
      }
      plVar11 = (long *)*unaff_x21;
      piVar13 = in_stack_00000028;
      if (bVar20 != 0) {
        piVar13 = in_stack_000000c8;
      }
      piVar14 = (int *)plVar11[3];
      if (iVar9 != *piVar13) {
        if (piVar14 == (int *)plVar11[4]) {
          iVar9 = (**(code **)(*plVar11 + 0x48))(plVar11);
        }
        else {
          iVar9 = *piVar14;
        }
        piVar13 = in_stack_00000020;
        if ((in_stack_000000a0 & 1) != 0) {
          piVar13 = in_stack_000000b0;
        }
        if (iVar9 != *piVar13) goto LAB_01b01bec;
        plVar11 = (long *)*unaff_x21;
        if (plVar11[3] == plVar11[4]) {
          (**(code **)(*plVar11 + 0x50))();
        }
        else {
          plVar11[3] = plVar11[3] + 4;
        }
        *in_stack_00000018 = 1;
        uVar15 = (ulong)(in_stack_000000a0 >> 1);
        if ((in_stack_000000a0 & 1) != 0) {
          uVar15 = in_stack_000000a8;
        }
        goto LAB_01b01a5c;
      }
      if (piVar14 != (int *)plVar11[4]) {
        plVar11[3] = (long)(piVar14 + 1);
        goto LAB_01b01a88;
      }
      (**(code **)(*plVar11 + 0x50))(plVar11);
    }
    uVar18 = (ulong)in_stack_000000b8;
    bVar20 = in_stack_000000b8 & 1;
LAB_01b01a88:
    uVar15 = uVar18 >> 1;
    if (bVar20 != 0) {
      uVar15 = in_stack_000000c0;
    }
    pbVar16 = &stack0x000000b8;
    if (uVar15 < 2) {
      pbVar16 = in_stack_00000048;
    }
    goto switchD_01b00d9c_default;
  case 4:
    uVar27 = 0;
    puVar23 = unaff_x19;
LAB_01b00dc4:
    plVar11 = (long *)*unaff_x21;
    if (plVar11 == (long *)0x0) {
LAB_01b00e0c:
      bVar5 = true;
      if (unaff_x22 == (long *)0x0) goto LAB_01b00e48;
LAB_01b00e14:
      if ((int *)unaff_x22[3] == (int *)unaff_x22[4]) {
        iVar9 = (**(code **)(*unaff_x22 + 0x48))(unaff_x22);
      }
      else {
        iVar9 = *(int *)unaff_x22[3];
      }
      if (iVar9 == -1) goto LAB_01b00e48;
      if (!bVar5) goto LAB_01b010cc;
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
        goto LAB_01b00e0c;
      }
      bVar5 = *unaff_x21 == 0;
      if (unaff_x22 != (long *)0x0) goto LAB_01b00e14;
LAB_01b00e48:
      unaff_x22 = (long *)0x0;
      if (bVar5) goto LAB_01b010cc;
    }
    plVar11 = (long *)*unaff_x21;
    if ((int *)plVar11[3] == (int *)plVar11[4]) {
      iVar9 = (**(code **)(*plVar11 + 0x48))();
    }
    else {
      iVar9 = *(int *)plVar11[3];
    }
    uVar15 = (**(code **)(*unaff_x23 + 0x18))();
    if ((uVar15 & 1) == 0) {
      uVar15 = (ulong)(in_stack_000000e8 >> 1);
      if ((in_stack_000000e8 & 1) != 0) {
        uVar15 = in_stack_000000f0;
      }
      if (((iVar9 == iStack0000000000000100) && (uVar27 != 0)) && (uVar15 != 0)) {
        if (puVar23 != in_stack_00000078) {
LAB_01b00fd4:
          puVar21 = puVar23 + 1;
          *puVar23 = uVar27;
          uVar27 = 0;
          goto LAB_01b00fdc;
        }
        uVar15 = (long)in_stack_00000078 - (long)in_stack_00000068;
        sVar3 = 4;
        if (uVar15 != 0) {
          sVar3 = uVar15 * 2;
        }
        if (0x7ffffffffffffffe < uVar15) {
          sVar3 = 0xffffffffffffffff;
        }
        if (in_stack_00000058 ==
            (code *)Method_System_Collections_Generic_List<SphereCollider>_Add__) {
          in_stack_00000068 = malloc(sVar3);
        }
        else {
          in_stack_00000068 = realloc(in_stack_00000068,sVar3);
        }
        if (in_stack_00000068 != (uint *)0x0) {
          in_stack_00000078 = (uint *)((long)in_stack_00000068 + (sVar3 & 0xfffffffffffffffc));
          puVar23 = (uint *)((long)in_stack_00000068 + uVar15);
          in_stack_00000058 = (code *)Method_System_Collections_Generic_List<SphereCollider>_Clear__
          ;
          goto LAB_01b00fd4;
        }
LAB_01b01dec:
        std::__throw_bad_alloc();
LAB_01b01df0:
        std::__throw_bad_alloc();
        goto LAB_01b01df4;
      }
      goto LAB_01b010cc;
    }
    piVar13 = (int *)*unaff_x28;
    if (piVar13 == unaff_x27) {
      uVar15 = (long)unaff_x27 - *in_stack_00000070;
      sVar3 = 4;
      if (uVar15 != 0) {
        sVar3 = uVar15 * 2;
      }
      if (0x7ffffffffffffffe < uVar15) {
        sVar3 = 0xffffffffffffffff;
      }
      if ((undefined *)in_stack_00000070[1] ==
          Method_System_Collections_Generic_List<SphereCollider>_Add__) {
        pvVar10 = malloc(sVar3);
      }
      else {
        pvVar10 = realloc((void *)*in_stack_00000070,sVar3);
      }
      if (pvVar10 == (void *)0x0) {
        std::__throw_bad_alloc();
        goto LAB_01b01dec;
      }
      *in_stack_00000070 = (long)pvVar10;
      in_stack_00000070[1] = (long)Method_System_Collections_Generic_List<SphereCollider>_Clear__;
      piVar13 = (int *)((long)pvVar10 + uVar15);
      *unaff_x28 = (long)piVar13;
      unaff_x27 = (int *)(*in_stack_00000070 + (sVar3 & 0xfffffffffffffffc));
      unaff_w20 = in_stack_00000050._4_4_;
    }
    *unaff_x28 = (long)(piVar13 + 1);
    *piVar13 = iVar9;
    uVar27 = uVar27 + 1;
    puVar21 = puVar23;
LAB_01b00fdc:
    plVar11 = (long *)*unaff_x21;
    puVar23 = puVar21;
    if (plVar11[3] == plVar11[4]) {
      (**(code **)(*plVar11 + 0x50))();
    }
    else {
      plVar11[3] = plVar11[3] + 4;
    }
    goto LAB_01b00dc4;
  default:
    goto switchD_01b00d9c_default;
  }
  do {
    plVar11 = (long *)*unaff_x21;
    if (plVar11 == (long *)0x0) {
LAB_01b01288:
      bVar5 = true;
      if (unaff_x22 == (long *)0x0) goto LAB_01b012c4;
LAB_01b01290:
      if ((int *)unaff_x22[3] == (int *)unaff_x22[4]) {
        iVar9 = (**(code **)(*unaff_x22 + 0x48))(unaff_x22);
      }
      else {
        iVar9 = *(int *)unaff_x22[3];
      }
      if (iVar9 == -1) goto LAB_01b012c4;
      if (!bVar5) goto switchD_01b00d9c_default;
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
        goto LAB_01b01288;
      }
      bVar5 = *unaff_x21 == 0;
      if (unaff_x22 != (long *)0x0) goto LAB_01b01290;
LAB_01b012c4:
      unaff_x22 = (long *)0x0;
      if (bVar5) goto switchD_01b00d9c_default;
    }
    plVar11 = (long *)*unaff_x21;
    if (plVar11[3] == plVar11[4]) {
      (**(code **)(*plVar11 + 0x48))();
    }
    uVar15 = (**(code **)(*unaff_x23 + 0x18))();
    if ((uVar15 & 1) == 0) goto switchD_01b00d9c_default;
    plVar11 = (long *)*unaff_x21;
    pwVar4 = (wchar_t *)plVar11[3];
    if (pwVar4 == (wchar_t *)plVar11[4]) {
      wVar8 = (**(code **)(*plVar11 + 0x50))();
    }
    else {
      plVar11[3] = (long)(pwVar4 + 1);
      wVar8 = *pwVar4;
    }
    std::__ndk1::
    basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::
    push_back(&stack0x00000088,wVar8);
  } while( true );
LAB_01b010cc:
  unaff_x19 = puVar23;
  if ((in_stack_00000068 != puVar23) && (uVar27 != 0)) {
    if (puVar23 == in_stack_00000078) {
      uVar15 = (long)in_stack_00000078 - (long)in_stack_00000068;
      sVar3 = 4;
      if (uVar15 != 0) {
        sVar3 = uVar15 * 2;
      }
      if (0x7ffffffffffffffe < uVar15) {
        sVar3 = 0xffffffffffffffff;
      }
      if (in_stack_00000058 == (code *)Method_System_Collections_Generic_List<SphereCollider>_Add__)
      {
        in_stack_00000068 = malloc(sVar3);
      }
      else {
        in_stack_00000068 = realloc(in_stack_00000068,sVar3);
      }
      if (in_stack_00000068 == (uint *)0x0) {
LAB_01b01df4:
        std::__throw_bad_alloc();
        goto LAB_01b01df8;
      }
      in_stack_00000078 = (uint *)((long)in_stack_00000068 + (sVar3 & 0xfffffffffffffffc));
      puVar23 = (uint *)((long)in_stack_00000068 + uVar15);
      in_stack_00000058 = (code *)Method_System_Collections_Generic_List<SphereCollider>_Clear__;
    }
    unaff_x19 = puVar23 + 1;
    *puVar23 = uVar27;
  }
  if (in_stack_00000080._4_4_ < 1) {
LAB_01b00ccc:
    unaff_x26 = &stack0x000000a0;
    if (*unaff_x28 == *in_stack_00000070) goto LAB_01b01bec;
    goto switchD_01b00d9c_default;
  }
  plVar11 = (long *)*unaff_x21;
  if (plVar11 != (long *)0x0) {
    if ((int *)plVar11[3] == (int *)plVar11[4]) {
      iVar9 = (**(code **)(*plVar11 + 0x48))();
    }
    else {
      iVar9 = *(int *)plVar11[3];
    }
    if (iVar9 != -1) {
      uVar6 = *unaff_x21 == 0;
      goto joined_r0x01b016bc;
    }
    *unaff_x21 = 0;
  }
  uVar6 = true;
joined_r0x01b016bc:
  if (unaff_x22 == (long *)0x0) {
    if ((bool)uVar6) goto LAB_01b01bec;
    plVar11 = (long *)0x0;
  }
  else {
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
    if ((bool)uVar6 == (iVar9 == -1)) goto LAB_01b01bec;
  }
  plVar12 = (long *)*unaff_x21;
  if ((int *)plVar12[3] == (int *)plVar12[4]) {
    iVar9 = (**(code **)(*plVar12 + 0x48))();
  }
  else {
    iVar9 = *(int *)plVar12[3];
  }
  if (iVar9 == iStack0000000000000104) {
    plVar12 = (long *)*unaff_x21;
    unaff_x22 = plVar11;
    if (plVar12[3] == plVar12[4]) {
      (**(code **)(*plVar12 + 0x50))();
    }
    else {
      plVar12[3] = plVar12[3] + 4;
    }
joined_r0x01b01758:
    plVar11 = unaff_x22;
    if (0 < in_stack_00000080._4_4_) {
      do {
        plVar12 = (long *)*unaff_x21;
        if (plVar12 == (long *)0x0) {
LAB_01b017c0:
          bVar7 = true;
          bVar5 = true;
          if (plVar11 == (long *)0x0) goto LAB_01b017b0;
LAB_01b017c8:
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
          if (bVar7 == (iVar9 == -1)) goto LAB_01b01bec;
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
            goto LAB_01b017c0;
          }
          bVar7 = *unaff_x21 == 0;
          bVar5 = bVar7;
          if (plVar11 != (long *)0x0) goto LAB_01b017c8;
LAB_01b017b0:
          if (bVar5) goto LAB_01b01bec;
          unaff_x22 = (long *)0x0;
        }
        plVar11 = (long *)*unaff_x21;
        if (plVar11[3] == plVar11[4]) {
          (**(code **)(*plVar11 + 0x48))();
        }
        uVar15 = (**(code **)(*unaff_x23 + 0x18))();
        if ((uVar15 & 1) == 0) goto LAB_01b01bec;
        piVar13 = (int *)*unaff_x28;
        if (piVar13 == unaff_x27) {
          uVar15 = (long)unaff_x27 - *in_stack_00000070;
          sVar3 = 4;
          if (uVar15 != 0) {
            sVar3 = uVar15 * 2;
          }
          if (0x7ffffffffffffffe < uVar15) {
            sVar3 = 0xffffffffffffffff;
          }
          if ((undefined *)in_stack_00000070[1] ==
              Method_System_Collections_Generic_List<SphereCollider>_Add__) {
            pvVar10 = malloc(sVar3);
          }
          else {
            pvVar10 = realloc((void *)*in_stack_00000070,sVar3);
          }
          if (pvVar10 == (void *)0x0) goto LAB_01b01df0;
          *in_stack_00000070 = (long)pvVar10;
          in_stack_00000070[1] =
               (long)Method_System_Collections_Generic_List<SphereCollider>_Clear__;
          piVar13 = (int *)((long)pvVar10 + uVar15);
          *unaff_x28 = (long)piVar13;
          unaff_x27 = (int *)(*in_stack_00000070 + (sVar3 & 0xfffffffffffffffc));
          unaff_w20 = in_stack_00000050._4_4_;
        }
        plVar11 = (long *)*unaff_x21;
        if ((int *)plVar11[3] == (int *)plVar11[4]) {
          iVar9 = (**(code **)(*plVar11 + 0x48))();
          piVar13 = (int *)*unaff_x28;
        }
        else {
          iVar9 = *(int *)plVar11[3];
        }
        *unaff_x28 = (long)(piVar13 + 1);
        *piVar13 = iVar9;
        in_stack_00000080._4_4_ = in_stack_00000080._4_4_ + -1;
        plVar11 = (long *)*unaff_x21;
        if (plVar11[3] == plVar11[4]) goto code_r0x01b0191c;
        plVar11[3] = plVar11[3] + 4;
        plVar11 = unaff_x22;
        if (in_stack_00000080._4_4_ < 1) break;
      } while( true );
    }
    goto LAB_01b00ccc;
  }
  goto LAB_01b01bec;
code_r0x01b0191c:
  (**(code **)(*plVar11 + 0x50))();
  goto joined_r0x01b01758;
code_r0x01b0147c:
  param_2 = in_x11;
  if ((long)in_x11 < 0) {
    param_2 = 0xffffffffffffffff;
  }
  in_x17 = (long)in_x10 - (long)unaff_x24;
  goto code_r0x01b01488;
LAB_01b01ac8:
  if ((*in_stack_00000048 & 1) == 0) {
    uVar15 = (ulong)(*in_stack_00000048 >> 1);
  }
  else {
    uVar15 = *(ulong *)(in_stack_00000048 + 8);
  }
  if (uVar15 <= uVar26) goto LAB_01b01cc0;
  plVar11 = (long *)*unaff_x21;
  if (plVar11 == (long *)0x0) {
LAB_01b01b40:
    bVar7 = true;
    bVar5 = true;
    if (unaff_x22 == (long *)0x0) goto LAB_01b01b30;
LAB_01b01b48:
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
    if (bVar7 == (iVar9 == -1)) goto LAB_01b01bec;
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
      goto LAB_01b01b40;
    }
    bVar7 = *unaff_x21 == 0;
    bVar5 = bVar7;
    if (unaff_x22 != (long *)0x0) goto LAB_01b01b48;
LAB_01b01b30:
    if (bVar5) goto LAB_01b01bec;
    plVar11 = (long *)0x0;
  }
  plVar12 = (long *)*unaff_x21;
  if ((int *)plVar12[3] == (int *)plVar12[4]) {
    iVar9 = (**(code **)(*plVar12 + 0x48))();
  }
  else {
    iVar9 = *(int *)plVar12[3];
  }
  pbVar16 = in_stack_00000048 + 4;
  if ((*in_stack_00000048 & 1) != 0) {
    pbVar16 = *(byte **)(in_stack_00000048 + 0x10);
  }
  if (iVar9 != *(int *)(pbVar16 + uVar26 * 4)) goto LAB_01b01bec;
  plVar12 = (long *)*unaff_x21;
  uVar26 = (ulong)((int)uVar26 + 1);
  unaff_x22 = plVar11;
  if (plVar12[3] == plVar12[4]) {
    (**(code **)(*plVar12 + 0x50))();
  }
  else {
    plVar12[3] = plVar12[3] + 4;
  }
  goto LAB_01b01ac8;
LAB_01b01cc0:
  if (in_stack_00000068 == unaff_x19) {
    uVar25 = 1;
    in_stack_00000068 = unaff_x19;
    goto CartoonFX_CFXR_Effect_CameraShake___ctor;
  }
  uVar26 = (ulong)(in_stack_000000e8 >> 1);
  if ((in_stack_000000e8 & 1) != 0) {
    uVar26 = in_stack_000000f0;
  }
  if ((uVar26 != 0) && (4 < (long)unaff_x19 - (long)in_stack_00000068)) {
    puVar17 = unaff_x19 + -1;
    puVar21 = puVar17;
    puVar23 = in_stack_00000068;
    if (in_stack_00000068 < puVar17) {
      do {
        puVar19 = puVar23 + 1;
        uVar27 = *puVar23;
        *puVar23 = *puVar21;
        puVar22 = puVar21 + -1;
        *puVar21 = uVar27;
        puVar21 = puVar22;
        puVar23 = puVar19;
      } while (puVar19 < puVar22);
      pbVar2 = (byte *)((ulong)&stack0x000000e8 | 1);
      if ((in_stack_000000e8 & 1) != 0) {
        pbVar2 = in_stack_000000f8;
      }
      pbVar16 = pbVar2;
      if (in_stack_00000068 < puVar17) {
        puVar23 = in_stack_00000068;
        uVar26 = (ulong)(in_stack_000000e8 >> 1);
        if ((in_stack_000000e8 & 1) != 0) {
          uVar26 = in_stack_000000f0;
        }
        do {
          bVar20 = *pbVar16;
          if (((bVar20 != 0) && (bVar20 != 0xff)) && (*puVar23 != (uint)bVar20)) goto LAB_01b01bec;
          puVar23 = puVar23 + 1;
          if (1 < (long)(pbVar2 + (uVar26 - (long)pbVar16))) {
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
    bVar20 = *pbVar16;
    uVar25 = 1;
    if ((bVar20 == 0) || (bVar20 == 0xff)) goto CartoonFX_CFXR_Effect_CameraShake___ctor;
    if ((uint)bVar20 <= *puVar17 - 1) {
LAB_01b01bec:
      uVar25 = 0;
      *in_stack_00000038 = *in_stack_00000038 | 4;
      goto CartoonFX_CFXR_Effect_CameraShake___ctor;
    }
  }
  uVar25 = 1;
CartoonFX_CFXR_Effect_CameraShake___ctor:
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
    return uVar25;
  }
LAB_01b01df8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


