/*
FUNCTION_NAME: CartoonFX.CFXR_Effect.CameraShake$$OnPostRenderCamera_Static_URP
ENTRY_POINT: 01b011b8
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

undefined4 CartoonFX_CFXR_Effect_CameraShake__OnPostRenderCamera_Static_URP(ulong param_1)

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
  long *plVar13;
  int *piVar14;
  byte *pbVar15;
  uint *puVar16;
  byte in_w9;
  uint *puVar17;
  byte bVar18;
  int *in_x10;
  uint *puVar19;
  uint *puVar20;
  ulong uVar21;
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
  uint uVar28;
  int *unaff_x24;
  int *piVar29;
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
  
code_r0x01b011b8:
  piVar14 = unaff_x24;
  if (!(bool)in_ZR) goto LAB_01b01174;
LAB_01b01368:
  piVar14 = in_stack_00000060;
  if (in_w9 != 0) {
    piVar14 = in_x10;
  }
  uVar21 = (long)unaff_x24 - (long)piVar14;
  uVar24 = (long)uVar21 >> 2;
  piVar29 = piVar14;
  if (((byte)in_stack_00000088 & 1) == 0) {
    uVar23 = (ulong)((byte)in_stack_00000088 >> 1);
    if (uVar23 < uVar24) goto LAB_01b014c8;
    puVar25 = &stack0x0000008c + uVar23 * 4;
    pvVar11 = in_stack_00000010;
  }
  else {
    if (in_stack_00000090 < uVar24) goto LAB_01b014c8;
    puVar25 = (undefined1 *)((long)in_stack_00000098 + in_stack_00000090 * 4);
    uVar23 = in_stack_00000090;
    pvVar11 = in_stack_00000098;
  }
  piVar29 = unaff_x24;
  if (puVar25 + uVar24 * -4 != (undefined1 *)((long)pvVar11 + uVar23 * 4)) {
    uVar4 = uVar21;
    if ((long)uVar21 < 0) {
      uVar4 = 0xffffffffffffffff;
    }
    if (0 < (long)uVar4) {
      uVar4 = 1;
    }
    uVar1 = (long)piVar14 - (long)unaff_x24;
    if ((long)piVar14 - (long)unaff_x24 <= (long)uVar21) {
      uVar1 = uVar21;
    }
    lVar26 = 0;
    do {
      piVar29 = piVar14;
      if (*(int *)(puVar25 + uVar24 * -4 + lVar26) != *(int *)((long)piVar14 + lVar26)) break;
      lVar26 = lVar26 + 4;
      piVar29 = unaff_x24;
    } while ((long)pvVar11 + ((uVar23 + uVar4 * (uVar1 >> 2)) * 4 - (long)puVar25) != lVar26);
  }
LAB_01b014c8:
  uVar21 = param_1 >> 1 & 0x7fffffff;
  if (in_w9 != 0) {
    uVar21 = in_stack_000000d8;
  }
  for (piVar14 = piVar14 + uVar21; piVar29 != piVar14; piVar14 = piVar14 + uVar21) {
    plVar12 = (long *)*unaff_x21;
    if (plVar12 == (long *)0x0) {
LAB_01b0155c:
      bVar6 = true;
      if (unaff_x22 == (long *)0x0) goto LAB_01b01598;
LAB_01b01564:
      if ((int *)unaff_x22[3] == (int *)unaff_x22[4]) {
        iVar10 = (**(code **)(*unaff_x22 + 0x48))(unaff_x22);
      }
      else {
        iVar10 = *(int *)unaff_x22[3];
      }
      if (iVar10 == -1) goto LAB_01b01598;
      if (!bVar6) goto LAB_01b015f4;
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
        goto LAB_01b0155c;
      }
      bVar6 = *unaff_x21 == 0;
      if (unaff_x22 != (long *)0x0) goto LAB_01b01564;
LAB_01b01598:
      unaff_x22 = (long *)0x0;
      if (bVar6) {
LAB_01b015f4:
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
    if (iVar10 != *piVar29) break;
    plVar12 = (long *)*unaff_x21;
    if (plVar12[3] == plVar12[4]) {
      (**(code **)(*plVar12 + 0x50))();
    }
    else {
      plVar12[3] = plVar12[3] + 4;
    }
    piVar29 = piVar29 + 1;
    uVar21 = (ulong)(in_stack_000000d0 >> 1);
    piVar14 = in_stack_00000060;
    if ((in_stack_000000d0 & 1) != 0) {
      uVar21 = in_stack_000000d8;
      piVar14 = in_stack_000000e0;
    }
  }
  uVar21 = unaff_x25;
  pbVar15 = in_stack_00000048;
  if ((unaff_w20 >> 9 & 1) != 0) {
    uVar24 = (ulong)(in_stack_000000d0 >> 1);
    piVar14 = in_stack_00000060;
    if ((in_stack_000000d0 & 1) != 0) {
      uVar24 = in_stack_000000d8;
      piVar14 = in_stack_000000e0;
    }
    if (piVar29 != piVar14 + uVar24) goto LAB_01b01bec;
  }
switchD_01b00d9c_default:
  in_stack_00000048 = pbVar15;
  unaff_x25 = uVar21 + 1;
  if (unaff_x25 != 4) {
    plVar12 = (long *)*unaff_x21;
    if (plVar12 == (long *)0x0) {
LAB_01b00d34:
      bVar6 = true;
      if (unaff_x22 == (long *)0x0) goto LAB_01b00d70;
LAB_01b00d3c:
      if ((int *)unaff_x22[3] == (int *)unaff_x22[4]) {
        iVar10 = (**(code **)(*unaff_x22 + 0x48))(unaff_x22);
      }
      else {
        iVar10 = *(int *)unaff_x22[3];
      }
      if (iVar10 == -1) goto LAB_01b00d70;
      if (!bVar6) goto LAB_01b01aac;
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
        goto LAB_01b00d34;
      }
      bVar6 = *unaff_x21 == 0;
      if (unaff_x22 != (long *)0x0) goto LAB_01b00d3c;
LAB_01b00d70:
      unaff_x22 = (long *)0x0;
      if (bVar6) goto LAB_01b01aac;
    }
    goto LAB_01b00d78;
  }
  goto LAB_01b01aac;
LAB_01b00d78:
  lVar26 = uVar21 + 1;
  uVar21 = unaff_x25;
  pbVar15 = in_stack_00000048;
  switch(*(undefined1 *)((long)&stack0x00000108 + lVar26)) {
  case 0:
    if (unaff_x25 == 3) goto LAB_01b01aac;
    break;
  case 1:
    if (unaff_x25 == 3) {
LAB_01b01aac:
      if (in_stack_00000048 == (byte *)0x0) goto LAB_01b01cc0;
      uVar21 = 1;
      goto LAB_01b01ac8;
    }
    plVar12 = (long *)*unaff_x21;
    if (plVar12[3] == plVar12[4]) {
      (**(code **)(*plVar12 + 0x48))();
    }
    uVar24 = (**(code **)(*unaff_x23 + 0x18))();
    if ((uVar24 & 1) == 0) goto LAB_01b01bec;
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
    break;
  case 2:
    if ((unaff_x25 < 2) || (in_stack_00000048 != (byte *)0x0)) {
      bVar6 = (in_stack_000000d0 & 1) == 0;
      piVar14 = in_stack_00000060;
      if (!bVar6) {
        piVar14 = in_stack_000000e0;
      }
      if (unaff_x25 == 0) goto LAB_01b011c0;
      goto LAB_01b0114c;
    }
    if (((unaff_x25 == 2 && in_stack_00000108._3_1_ != '\0') | in_stack_00000030._4_4_) != 1) {
      in_stack_00000048 = (byte *)0x0;
      pbVar15 = in_stack_00000048;
      goto switchD_01b00d9c_default;
    }
    bVar6 = (in_stack_000000d0 & 1) == 0;
    piVar14 = in_stack_00000060;
    if (!bVar6) {
      piVar14 = in_stack_000000e0;
    }
LAB_01b0114c:
    in_w9 = in_stack_000000d0 & 1;
    param_1 = (ulong)in_stack_000000d0;
    if (*(byte *)((long)&stack0x00000108 + (ulong)((int)unaff_x25 - 1)) < 2) goto code_r0x01b01160;
LAB_01b011c0:
    in_w9 = in_stack_000000d0 & 1;
    param_1 = (ulong)in_stack_000000d0;
    piVar29 = piVar14;
    goto LAB_01b014c8;
  case 3:
    uVar23 = (ulong)in_stack_000000b8;
    bVar18 = in_stack_000000b8 & 1;
    uVar24 = (ulong)(in_stack_000000b8 >> 1);
    if ((in_stack_000000b8 & 1) != 0) {
      uVar24 = in_stack_000000c0;
    }
    uVar4 = (ulong)(in_stack_000000a0 >> 1);
    if ((in_stack_000000a0 & 1) != 0) {
      uVar4 = in_stack_000000a8;
    }
    if (uVar24 + uVar4 == 0) goto switchD_01b00d9c_default;
    if (uVar24 == 0) {
      plVar12 = (long *)*unaff_x21;
      if ((int *)plVar12[3] == (int *)plVar12[4]) {
        iVar10 = (**(code **)(*plVar12 + 0x48))();
      }
      else {
        iVar10 = *(int *)plVar12[3];
      }
      piVar14 = in_stack_00000020;
      if ((in_stack_000000a0 & 1) != 0) {
        piVar14 = in_stack_000000b0;
      }
      if (iVar10 != *piVar14) goto switchD_01b00d9c_default;
      plVar12 = (long *)*unaff_x21;
      if (plVar12[3] == plVar12[4]) {
        (**(code **)(*plVar12 + 0x50))();
      }
      else {
        plVar12[3] = plVar12[3] + 4;
      }
      *in_stack_00000018 = 1;
      uVar24 = (ulong)(in_stack_000000a0 >> 1);
      if ((in_stack_000000a0 & 1) != 0) {
        uVar24 = in_stack_000000a8;
      }
LAB_01b01a5c:
      pbVar15 = unaff_x26;
      if (uVar24 < 2) {
        pbVar15 = in_stack_00000048;
      }
      goto switchD_01b00d9c_default;
    }
    plVar12 = (long *)*unaff_x21;
    piVar14 = (int *)plVar12[3];
    if (uVar4 == 0) {
      if (piVar14 == (int *)plVar12[4]) {
        iVar10 = (**(code **)(*plVar12 + 0x48))();
        uVar23 = (ulong)in_stack_000000b8;
        bVar18 = in_stack_000000b8 & 1;
      }
      else {
        iVar10 = *piVar14;
      }
      piVar14 = in_stack_00000028;
      if (bVar18 != 0) {
        piVar14 = in_stack_000000c8;
      }
      if (iVar10 != *piVar14) {
        *in_stack_00000018 = 1;
        goto switchD_01b00d9c_default;
      }
      plVar12 = (long *)*unaff_x21;
      if (plVar12[3] != plVar12[4]) {
        plVar12[3] = plVar12[3] + 4;
        goto LAB_01b01a88;
      }
      (**(code **)(*plVar12 + 0x50))();
    }
    else {
      if (piVar14 == (int *)plVar12[4]) {
        iVar10 = (**(code **)(*plVar12 + 0x48))();
        uVar23 = (ulong)in_stack_000000b8;
        bVar18 = in_stack_000000b8 & 1;
      }
      else {
        iVar10 = *piVar14;
      }
      plVar12 = (long *)*unaff_x21;
      piVar14 = in_stack_00000028;
      if (bVar18 != 0) {
        piVar14 = in_stack_000000c8;
      }
      piVar29 = (int *)plVar12[3];
      if (iVar10 != *piVar14) {
        if (piVar29 == (int *)plVar12[4]) {
          iVar10 = (**(code **)(*plVar12 + 0x48))(plVar12);
        }
        else {
          iVar10 = *piVar29;
        }
        piVar14 = in_stack_00000020;
        if ((in_stack_000000a0 & 1) != 0) {
          piVar14 = in_stack_000000b0;
        }
        if (iVar10 != *piVar14) goto LAB_01b01bec;
        plVar12 = (long *)*unaff_x21;
        if (plVar12[3] == plVar12[4]) {
          (**(code **)(*plVar12 + 0x50))();
        }
        else {
          plVar12[3] = plVar12[3] + 4;
        }
        *in_stack_00000018 = 1;
        uVar24 = (ulong)(in_stack_000000a0 >> 1);
        if ((in_stack_000000a0 & 1) != 0) {
          uVar24 = in_stack_000000a8;
        }
        goto LAB_01b01a5c;
      }
      if (piVar29 != (int *)plVar12[4]) {
        plVar12[3] = (long)(piVar29 + 1);
        goto LAB_01b01a88;
      }
      (**(code **)(*plVar12 + 0x50))(plVar12);
    }
    uVar23 = (ulong)in_stack_000000b8;
    bVar18 = in_stack_000000b8 & 1;
LAB_01b01a88:
    uVar24 = uVar23 >> 1;
    if (bVar18 != 0) {
      uVar24 = in_stack_000000c0;
    }
    pbVar15 = &stack0x000000b8;
    if (uVar24 < 2) {
      pbVar15 = in_stack_00000048;
    }
    goto switchD_01b00d9c_default;
  case 4:
    uVar28 = 0;
    puVar22 = unaff_x19;
LAB_01b00dc4:
    plVar12 = (long *)*unaff_x21;
    if (plVar12 == (long *)0x0) {
LAB_01b00e0c:
      bVar6 = true;
      if (unaff_x22 == (long *)0x0) goto LAB_01b00e48;
LAB_01b00e14:
      if ((int *)unaff_x22[3] == (int *)unaff_x22[4]) {
        iVar10 = (**(code **)(*unaff_x22 + 0x48))(unaff_x22);
      }
      else {
        iVar10 = *(int *)unaff_x22[3];
      }
      if (iVar10 == -1) goto LAB_01b00e48;
      if (!bVar6) goto LAB_01b010cc;
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
        goto LAB_01b00e0c;
      }
      bVar6 = *unaff_x21 == 0;
      if (unaff_x22 != (long *)0x0) goto LAB_01b00e14;
LAB_01b00e48:
      unaff_x22 = (long *)0x0;
      if (bVar6) goto LAB_01b010cc;
    }
    plVar12 = (long *)*unaff_x21;
    if ((int *)plVar12[3] == (int *)plVar12[4]) {
      iVar10 = (**(code **)(*plVar12 + 0x48))();
    }
    else {
      iVar10 = *(int *)plVar12[3];
    }
    uVar24 = (**(code **)(*unaff_x23 + 0x18))();
    if ((uVar24 & 1) == 0) {
      uVar24 = (ulong)(in_stack_000000e8 >> 1);
      if ((in_stack_000000e8 & 1) != 0) {
        uVar24 = in_stack_000000f0;
      }
      if (((iVar10 == iStack0000000000000100) && (uVar28 != 0)) && (uVar24 != 0)) {
        if (puVar22 != in_stack_00000078) {
LAB_01b00fd4:
          puVar19 = puVar22 + 1;
          *puVar22 = uVar28;
          uVar28 = 0;
          goto LAB_01b00fdc;
        }
        uVar24 = (long)in_stack_00000078 - (long)in_stack_00000068;
        sVar3 = 4;
        if (uVar24 != 0) {
          sVar3 = uVar24 * 2;
        }
        if (0x7ffffffffffffffe < uVar24) {
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
          puVar22 = (uint *)((long)in_stack_00000068 + uVar24);
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
    piVar14 = (int *)*unaff_x28;
    if (piVar14 == unaff_x27) {
      uVar24 = (long)unaff_x27 - *in_stack_00000070;
      sVar3 = 4;
      if (uVar24 != 0) {
        sVar3 = uVar24 * 2;
      }
      if (0x7ffffffffffffffe < uVar24) {
        sVar3 = 0xffffffffffffffff;
      }
      if ((undefined *)in_stack_00000070[1] ==
          Method_System_Collections_Generic_List<SphereCollider>_Add__) {
        pvVar11 = malloc(sVar3);
      }
      else {
        pvVar11 = realloc((void *)*in_stack_00000070,sVar3);
      }
      if (pvVar11 == (void *)0x0) {
        std::__throw_bad_alloc();
        goto LAB_01b01dec;
      }
      *in_stack_00000070 = (long)pvVar11;
      in_stack_00000070[1] = (long)Method_System_Collections_Generic_List<SphereCollider>_Clear__;
      piVar14 = (int *)((long)pvVar11 + uVar24);
      *unaff_x28 = (long)piVar14;
      unaff_x27 = (int *)(*in_stack_00000070 + (sVar3 & 0xfffffffffffffffc));
      unaff_w20 = in_stack_00000050._4_4_;
    }
    *unaff_x28 = (long)(piVar14 + 1);
    *piVar14 = iVar10;
    uVar28 = uVar28 + 1;
    puVar19 = puVar22;
LAB_01b00fdc:
    plVar12 = (long *)*unaff_x21;
    puVar22 = puVar19;
    if (plVar12[3] == plVar12[4]) {
      (**(code **)(*plVar12 + 0x50))();
    }
    else {
      plVar12[3] = plVar12[3] + 4;
    }
    goto LAB_01b00dc4;
  default:
    goto switchD_01b00d9c_default;
  }
  do {
    plVar12 = (long *)*unaff_x21;
    if (plVar12 == (long *)0x0) {
LAB_01b01288:
      bVar6 = true;
      if (unaff_x22 == (long *)0x0) goto LAB_01b012c4;
LAB_01b01290:
      if ((int *)unaff_x22[3] == (int *)unaff_x22[4]) {
        iVar10 = (**(code **)(*unaff_x22 + 0x48))(unaff_x22);
      }
      else {
        iVar10 = *(int *)unaff_x22[3];
      }
      if (iVar10 == -1) goto LAB_01b012c4;
      if (!bVar6) goto switchD_01b00d9c_default;
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
        goto LAB_01b01288;
      }
      bVar6 = *unaff_x21 == 0;
      if (unaff_x22 != (long *)0x0) goto LAB_01b01290;
LAB_01b012c4:
      unaff_x22 = (long *)0x0;
      if (bVar6) goto switchD_01b00d9c_default;
    }
    plVar12 = (long *)*unaff_x21;
    if (plVar12[3] == plVar12[4]) {
      (**(code **)(*plVar12 + 0x48))();
    }
    uVar24 = (**(code **)(*unaff_x23 + 0x18))();
    if ((uVar24 & 1) == 0) goto switchD_01b00d9c_default;
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
  } while( true );
LAB_01b010cc:
  unaff_x19 = puVar22;
  if ((in_stack_00000068 != puVar22) && (uVar28 != 0)) {
    if (puVar22 == in_stack_00000078) {
      uVar24 = (long)in_stack_00000078 - (long)in_stack_00000068;
      sVar3 = 4;
      if (uVar24 != 0) {
        sVar3 = uVar24 * 2;
      }
      if (0x7ffffffffffffffe < uVar24) {
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
      puVar22 = (uint *)((long)in_stack_00000068 + uVar24);
      in_stack_00000058 = (code *)Method_System_Collections_Generic_List<SphereCollider>_Clear__;
    }
    unaff_x19 = puVar22 + 1;
    *puVar22 = uVar28;
  }
  if (in_stack_00000080._4_4_ < 1) {
LAB_01b00ccc:
    unaff_x26 = &stack0x000000a0;
    if (*unaff_x28 == *in_stack_00000070) goto LAB_01b01bec;
    goto switchD_01b00d9c_default;
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
      goto joined_r0x01b016bc;
    }
    *unaff_x21 = 0;
  }
  uVar7 = true;
joined_r0x01b016bc:
  if (unaff_x22 == (long *)0x0) {
    if ((bool)uVar7) goto LAB_01b01bec;
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
    if ((bool)uVar7 == (iVar10 == -1)) goto LAB_01b01bec;
  }
  plVar13 = (long *)*unaff_x21;
  if ((int *)plVar13[3] == (int *)plVar13[4]) {
    iVar10 = (**(code **)(*plVar13 + 0x48))();
  }
  else {
    iVar10 = *(int *)plVar13[3];
  }
  if (iVar10 == iStack0000000000000104) {
    plVar13 = (long *)*unaff_x21;
    unaff_x22 = plVar12;
    if (plVar13[3] == plVar13[4]) {
      (**(code **)(*plVar13 + 0x50))();
    }
    else {
      plVar13[3] = plVar13[3] + 4;
    }
joined_r0x01b01758:
    plVar12 = unaff_x22;
    if (0 < in_stack_00000080._4_4_) {
      do {
        plVar13 = (long *)*unaff_x21;
        if (plVar13 == (long *)0x0) {
LAB_01b017c0:
          bVar8 = true;
          bVar6 = true;
          if (plVar12 == (long *)0x0) goto LAB_01b017b0;
LAB_01b017c8:
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
          if (bVar8 == (iVar10 == -1)) goto LAB_01b01bec;
        }
        else {
          if ((int *)plVar13[3] == (int *)plVar13[4]) {
            iVar10 = (**(code **)(*plVar13 + 0x48))();
          }
          else {
            iVar10 = *(int *)plVar13[3];
          }
          if (iVar10 == -1) {
            *unaff_x21 = 0;
            goto LAB_01b017c0;
          }
          bVar8 = *unaff_x21 == 0;
          bVar6 = bVar8;
          if (plVar12 != (long *)0x0) goto LAB_01b017c8;
LAB_01b017b0:
          if (bVar6) goto LAB_01b01bec;
          unaff_x22 = (long *)0x0;
        }
        plVar12 = (long *)*unaff_x21;
        if (plVar12[3] == plVar12[4]) {
          (**(code **)(*plVar12 + 0x48))();
        }
        uVar24 = (**(code **)(*unaff_x23 + 0x18))();
        if ((uVar24 & 1) == 0) goto LAB_01b01bec;
        piVar14 = (int *)*unaff_x28;
        if (piVar14 == unaff_x27) {
          uVar24 = (long)unaff_x27 - *in_stack_00000070;
          sVar3 = 4;
          if (uVar24 != 0) {
            sVar3 = uVar24 * 2;
          }
          if (0x7ffffffffffffffe < uVar24) {
            sVar3 = 0xffffffffffffffff;
          }
          if ((undefined *)in_stack_00000070[1] ==
              Method_System_Collections_Generic_List<SphereCollider>_Add__) {
            pvVar11 = malloc(sVar3);
          }
          else {
            pvVar11 = realloc((void *)*in_stack_00000070,sVar3);
          }
          if (pvVar11 == (void *)0x0) goto LAB_01b01df0;
          *in_stack_00000070 = (long)pvVar11;
          in_stack_00000070[1] =
               (long)Method_System_Collections_Generic_List<SphereCollider>_Clear__;
          piVar14 = (int *)((long)pvVar11 + uVar24);
          *unaff_x28 = (long)piVar14;
          unaff_x27 = (int *)(*in_stack_00000070 + (sVar3 & 0xfffffffffffffffc));
          unaff_w20 = in_stack_00000050._4_4_;
        }
        plVar12 = (long *)*unaff_x21;
        if ((int *)plVar12[3] == (int *)plVar12[4]) {
          iVar10 = (**(code **)(*plVar12 + 0x48))();
          piVar14 = (int *)*unaff_x28;
        }
        else {
          iVar10 = *(int *)plVar12[3];
        }
        *unaff_x28 = (long)(piVar14 + 1);
        *piVar14 = iVar10;
        in_stack_00000080._4_4_ = in_stack_00000080._4_4_ + -1;
        plVar12 = (long *)*unaff_x21;
        if (plVar12[3] == plVar12[4]) goto code_r0x01b0191c;
        plVar12[3] = plVar12[3] + 4;
        plVar12 = unaff_x22;
        if (in_stack_00000080._4_4_ < 1) break;
      } while( true );
    }
    goto LAB_01b00ccc;
  }
  goto LAB_01b01bec;
code_r0x01b0191c:
  (**(code **)(*plVar12 + 0x50))();
  goto joined_r0x01b01758;
code_r0x01b01160:
  uVar21 = (ulong)(in_stack_000000d0 >> 1);
  if (!bVar6) {
    uVar21 = in_stack_000000d8;
  }
  in_x10 = in_stack_000000e0;
  unaff_x24 = piVar14;
  if (uVar21 == 0) goto LAB_01b01368;
LAB_01b01174:
  uVar21 = (**(code **)(*unaff_x23 + 0x18))();
  in_x10 = in_stack_000000e0;
  if ((uVar21 & 1) == 0) {
    param_1 = (ulong)in_stack_000000d0;
    in_w9 = in_stack_000000d0 & 1;
    unaff_x24 = piVar14;
    goto LAB_01b01368;
  }
  param_1 = (ulong)in_stack_000000d0;
  unaff_x24 = piVar14 + 1;
  in_w9 = in_stack_000000d0 & 1;
  uVar21 = (ulong)(in_stack_000000d0 >> 1);
  piVar14 = in_stack_00000060;
  if ((in_stack_000000d0 & 1) != 0) {
    uVar21 = in_stack_000000d8;
    piVar14 = in_stack_000000e0;
  }
  in_ZR = unaff_x24 == piVar14 + uVar21;
  goto code_r0x01b011b8;
LAB_01b01ac8:
  if ((*in_stack_00000048 & 1) == 0) {
    uVar24 = (ulong)(*in_stack_00000048 >> 1);
  }
  else {
    uVar24 = *(ulong *)(in_stack_00000048 + 8);
  }
  if (uVar24 <= uVar21) goto LAB_01b01cc0;
  plVar12 = (long *)*unaff_x21;
  if (plVar12 == (long *)0x0) {
LAB_01b01b40:
    bVar8 = true;
    bVar6 = true;
    if (unaff_x22 == (long *)0x0) goto LAB_01b01b30;
LAB_01b01b48:
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
    if (bVar8 == (iVar10 == -1)) goto LAB_01b01bec;
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
      goto LAB_01b01b40;
    }
    bVar8 = *unaff_x21 == 0;
    bVar6 = bVar8;
    if (unaff_x22 != (long *)0x0) goto LAB_01b01b48;
LAB_01b01b30:
    if (bVar6) goto LAB_01b01bec;
    plVar12 = (long *)0x0;
  }
  plVar13 = (long *)*unaff_x21;
  if ((int *)plVar13[3] == (int *)plVar13[4]) {
    iVar10 = (**(code **)(*plVar13 + 0x48))();
  }
  else {
    iVar10 = *(int *)plVar13[3];
  }
  pbVar15 = in_stack_00000048 + 4;
  if ((*in_stack_00000048 & 1) != 0) {
    pbVar15 = *(byte **)(in_stack_00000048 + 0x10);
  }
  if (iVar10 != *(int *)(pbVar15 + uVar21 * 4)) goto LAB_01b01bec;
  plVar13 = (long *)*unaff_x21;
  uVar21 = (ulong)((int)uVar21 + 1);
  unaff_x22 = plVar12;
  if (plVar13[3] == plVar13[4]) {
    (**(code **)(*plVar13 + 0x50))();
  }
  else {
    plVar13[3] = plVar13[3] + 4;
  }
  goto LAB_01b01ac8;
LAB_01b01cc0:
  if (in_stack_00000068 == unaff_x19) {
    uVar27 = 1;
    in_stack_00000068 = unaff_x19;
    goto CartoonFX_CFXR_Effect_CameraShake___ctor;
  }
  uVar21 = (ulong)(in_stack_000000e8 >> 1);
  if ((in_stack_000000e8 & 1) != 0) {
    uVar21 = in_stack_000000f0;
  }
  if ((uVar21 != 0) && (4 < (long)unaff_x19 - (long)in_stack_00000068)) {
    puVar16 = unaff_x19 + -1;
    puVar19 = puVar16;
    puVar22 = in_stack_00000068;
    if (in_stack_00000068 < puVar16) {
      do {
        puVar17 = puVar22 + 1;
        uVar28 = *puVar22;
        *puVar22 = *puVar19;
        puVar20 = puVar19 + -1;
        *puVar19 = uVar28;
        puVar19 = puVar20;
        puVar22 = puVar17;
      } while (puVar17 < puVar20);
      pbVar2 = (byte *)((ulong)&stack0x000000e8 | 1);
      if ((in_stack_000000e8 & 1) != 0) {
        pbVar2 = in_stack_000000f8;
      }
      pbVar15 = pbVar2;
      if (in_stack_00000068 < puVar16) {
        puVar22 = in_stack_00000068;
        uVar21 = (ulong)(in_stack_000000e8 >> 1);
        if ((in_stack_000000e8 & 1) != 0) {
          uVar21 = in_stack_000000f0;
        }
        do {
          bVar18 = *pbVar15;
          if (((bVar18 != 0) && (bVar18 != 0xff)) && (*puVar22 != (uint)bVar18)) goto LAB_01b01bec;
          puVar22 = puVar22 + 1;
          if (1 < (long)(pbVar2 + (uVar21 - (long)pbVar15))) {
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
    bVar18 = *pbVar15;
    uVar27 = 1;
    if ((bVar18 == 0) || (bVar18 == 0xff)) goto CartoonFX_CFXR_Effect_CameraShake___ctor;
    if ((uint)bVar18 <= *puVar16 - 1) {
LAB_01b01bec:
      uVar27 = 0;
      *in_stack_00000038 = *in_stack_00000038 | 4;
      goto CartoonFX_CFXR_Effect_CameraShake___ctor;
    }
  }
  uVar27 = 1;
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
    return uVar27;
  }
LAB_01b01df8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


