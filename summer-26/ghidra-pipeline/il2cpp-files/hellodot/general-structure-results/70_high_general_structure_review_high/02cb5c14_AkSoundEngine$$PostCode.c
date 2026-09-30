/*
FUNCTION_NAME: AkSoundEngine$$PostCode
ENTRY_POINT: 02cb5c14
PROGRAM: hellodot-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_6
*/


undefined8 AkSoundEngine__PostCode(long param_1)

{
  byte *pbVar1;
  int *piVar2;
  undefined8 *puVar3;
  char *pcVar4;
  undefined2 *puVar5;
  undefined4 uVar6;
  uint uVar7;
  byte bVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  byte bVar11;
  byte bVar13;
  ushort uVar14;
  undefined8 uVar15;
  bool in_ZR;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  int iVar19;
  void *pvVar20;
  undefined1 *puVar21;
  uint uVar22;
  size_t __n;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  uint uVar27;
  undefined8 uVar28;
  long lVar29;
  int iVar30;
  undefined4 uVar31;
  uint uVar32;
  ulong uVar33;
  long lVar34;
  ushort uVar35;
  int iVar36;
  uint uVar37;
  long lVar38;
  long *plVar39;
  ulong uVar40;
  long lVar41;
  ulong uVar42;
  ulong uVar43;
  ulong uVar44;
  ulong uVar45;
  ulong uVar46;
  ulong uVar47;
  undefined8 *puVar48;
  void *unaff_x20;
  ulong unaff_x21;
  ulong uVar49;
  uint *puVar50;
  int unaff_w22;
  long *unaff_x23;
  int unaff_w24;
  ulong uVar51;
  uint *puVar52;
  ulong uVar53;
  void *pvVar54;
  ulong uVar55;
  uint unaff_w28;
  uint uVar56;
  ulong unaff_x29;
  char *pcVar57;
  double dVar58;
  double dVar59;
  double dVar60;
  double dVar61;
  double dVar62;
  int in_stack_000000d0;
  int in_stack_000000e0;
  ulong *in_stack_000000e8;
  undefined8 *in_stack_000000f0;
  ulong *in_stack_000000f8;
  undefined8 in_stack_00000100;
  ulong uStack0000000000000108;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001a8;
  undefined8 in_stack_000001b0;
  undefined8 in_stack_000001b8;
  undefined8 in_stack_000001c0;
  undefined8 in_stack_000001c8;
  undefined8 in_stack_000001d0;
  undefined8 in_stack_000001d8;
  undefined8 in_stack_000001e0;
  undefined8 in_stack_000001e8;
  undefined4 in_stack_0000023c;
  byte bVar12;
  
  if (in_ZR) {
    pvVar20 = (void *)0x0;
  }
  else {
    pvVar20 = (void *)FUN_02cd98d8(in_stack_00000100,param_1 << 4);
  }
  puVar48 = (undefined8 *)((long)unaff_x20 + 0xe0);
  if ((void *)*puVar48 != (void *)0x0) {
    memcpy(pvVar20,(void *)*puVar48,*in_stack_000000e8 << 4);
    FUN_02cd98fc(in_stack_00000100,*puVar48);
  }
  *puVar48 = pvVar20;
  uVar15 = DAT_0137e290;
  puVar48 = (undefined8 *)((long)unaff_x20 + 0x178);
  bVar17 = unaff_w22 != 0;
  uVar37 = (uint)unaff_x29;
  bVar18 = uVar37 == 0;
  uVar24 = unaff_x29 & 0xffffffff;
  uVar53 = (ulong)unaff_w28;
  bVar16 = bVar17 && bVar18;
  if (*(long *)((long)unaff_x20 + 0x178) != 0) {
    if (*(int *)((long)unaff_x20 + 0x1a4) == 0) {
      iVar19 = *(int *)((long)unaff_x20 + 400);
      goto LAB_02cb61e4;
    }
    goto LAB_02cb67a4;
  }
  iVar19 = *(int *)((long)unaff_x20 + 4);
  piVar2 = (int *)((long)unaff_x20 + 0x28);
  if (iVar19 < 10) {
    iVar36 = iVar19;
    if (iVar19 == 4) {
      if (0xfffff < *(ulong *)((long)unaff_x20 + 0x18)) {
        iVar36 = 0x36;
      }
      goto AkSoundEngine__PostCode;
    }
    if (iVar19 < 5) goto AkSoundEngine__PostCode;
    if (*(int *)((long)unaff_x20 + 8) < 0x11) {
      iVar30 = 0x29;
      if (8 < iVar19) {
        iVar30 = 0x2a;
      }
      iVar36 = 0x28;
      if (6 < iVar19) {
        iVar36 = iVar30;
      }
      goto AkSoundEngine__PostCode;
    }
    if ((*(int *)((long)unaff_x20 + 8) < 0x13) || (*(ulong *)((long)unaff_x20 + 0x18) < 0x100000)) {
      uVar31 = 10;
      if (8 < iVar19) {
        uVar31 = 0x10;
      }
      uVar6 = 4;
      if (6 < iVar19) {
        uVar6 = uVar31;
      }
      uVar31 = 0xe;
      if (6 < iVar19) {
        uVar31 = 0xf;
      }
      *(undefined4 *)((long)unaff_x20 + 0x38) = uVar6;
      iVar36 = 5;
      *(undefined4 *)((long)unaff_x20 + 0x28) = 5;
      *(undefined4 *)((long)unaff_x20 + 0x2c) = uVar31;
      *(int *)((long)unaff_x20 + 0x30) = iVar19 + -1;
    }
    else {
      *(int *)((long)unaff_x20 + 0x30) = iVar19 + -1;
      *(undefined4 *)((long)unaff_x20 + 0x34) = 5;
      uVar31 = 10;
      if (8 < iVar19) {
        uVar31 = 0x10;
      }
      uVar6 = 4;
      if (6 < iVar19) {
        uVar6 = uVar31;
      }
      *(undefined4 *)((long)unaff_x20 + 0x38) = uVar6;
      *(undefined8 *)((long)unaff_x20 + 0x28) = uVar15;
      iVar36 = 6;
    }
  }
  else {
    iVar36 = 10;
AkSoundEngine__PostCode:
    *piVar2 = iVar36;
  }
  if ((int)*(uint *)((long)unaff_x20 + 8) < 0x19) {
    lVar34 = 0;
    lVar29 = 0x40000;
    switch(iVar36 + -2) {
    case 0:
    case 1:
      goto switchD_02cb5ddc_caseD_0;
    case 2:
      goto switchD_02cb5ddc_caseD_2;
    case 3:
    case 4:
      goto switchD_02cb5ddc_caseD_3;
    case 5:
    case 6:
    case 7:
      break;
    case 8:
      goto switchD_02cb5ddc_caseD_8;
    default:
      switch(iVar36) {
      case 0x23:
        goto switchD_02cb5e98_caseD_23;
      case 0x24:
      case 0x25:
      case 0x26:
      case 0x27:
        break;
      case 0x28:
      case 0x29:
        goto switchD_02cb5ddc_caseD_2;
      case 0x2a:
        goto switchD_02cb5e98_caseD_2a;
      default:
        if (iVar36 == 0x36) {
          lVar29 = 0x400000;
          goto switchD_02cb5ddc_caseD_0;
        }
      }
    }
    goto switchD_02cb5ddc_caseD_5;
  }
  lVar34 = 0;
  lVar29 = 0x40000;
  switch(iVar36 + -2) {
  case 0:
    break;
  case 1:
    *piVar2 = 0x23;
switchD_02cb5e98_caseD_23:
    lVar29 = 0x4040000;
    break;
  case 2:
switchD_02cb5ddc_caseD_2:
    lVar29 = 0x80000;
    break;
  case 3:
switchD_02cb5ddc_caseD_3:
    lVar29 = 1L << ((ulong)*(uint *)((long)unaff_x20 + 0x2c) & 0x3f);
    lVar29 = ((lVar29 << 2) << ((ulong)*(uint *)((long)unaff_x20 + 0x30) & 0x3f)) + lVar29 * 2;
    goto LAB_02cb5fa0;
  case 4:
    *(undefined4 *)((long)unaff_x20 + 0x28) = 0x41;
    lVar29 = 1L << ((ulong)*(uint *)((long)unaff_x20 + 0x2c) & 0x3f);
    lVar29 = ((lVar29 << 2) << ((ulong)*(uint *)((long)unaff_x20 + 0x30) & 0x3f)) + lVar29 * 2 +
             0x4000000;
    goto LAB_02cb5fa0;
  case 5:
  case 6:
  case 7:
    goto switchD_02cb5ddc_caseD_5;
  case 8:
switchD_02cb5ddc_caseD_8:
    uVar46 = 1L << ((ulong)*(uint *)((long)unaff_x20 + 8) & 0x3f);
    uVar44 = uVar53;
    if ((!bVar17 || !bVar18) || uVar46 <= uVar53) {
      uVar44 = uVar46;
    }
    lVar29 = uVar44 * 8 + 0x80000;
LAB_02cb5fa0:
    if (lVar29 != 0) break;
    lVar34 = 0;
    goto switchD_02cb5ddc_caseD_5;
  default:
    switch(iVar36) {
    case 0x23:
      goto switchD_02cb5e98_caseD_23;
    case 0x24:
    case 0x25:
    case 0x26:
    case 0x27:
      break;
    case 0x28:
    case 0x29:
      goto switchD_02cb5ddc_caseD_2;
    case 0x2a:
switchD_02cb5e98_caseD_2a:
      lVar29 = 0x140000;
      goto switchD_02cb5ddc_caseD_0;
    default:
      if (iVar36 == 0x36) {
        *piVar2 = 0x37;
        lVar29 = 0x4400000;
        goto switchD_02cb5ddc_caseD_0;
      }
    }
    goto switchD_02cb5ddc_caseD_5;
  }
switchD_02cb5ddc_caseD_0:
  lVar34 = FUN_02cd98d8(in_stack_00000100,lVar29);
switchD_02cb5ddc_caseD_5:
  *(long *)((long)unaff_x20 + 0x178) = lVar34;
  *(undefined8 *)((long)unaff_x20 + 0x198) = *(undefined8 *)((long)unaff_x20 + 0x30);
  *(undefined8 *)((long)unaff_x20 + 400) = *(undefined8 *)piVar2;
  iVar19 = *(int *)((long)unaff_x20 + 400);
  *(undefined4 *)((long)unaff_x20 + 0x1a0) = *(undefined4 *)((long)unaff_x20 + 0x38);
  if (iVar19 < 0x23) {
    switch(iVar19) {
    case 2:
    case 3:
    case 4:
switchD_02cb6048_caseD_2:
      *(undefined8 **)((long)unaff_x20 + 0x1a8) = puVar48;
      *(long *)((long)unaff_x20 + 0x1b0) = lVar34;
      break;
    case 5:
      lVar29 = 1L << ((ulong)*(uint *)((long)unaff_x20 + 0x194) & 0x3f);
      lVar38 = 1L << ((ulong)*(uint *)((long)unaff_x20 + 0x198) & 0x3f);
      *(uint *)((long)unaff_x20 + 0x1c0) = *(uint *)((long)unaff_x20 + 0x198);
      *(uint *)((long)unaff_x20 + 0x1b8) = 0x20 - *(uint *)((long)unaff_x20 + 0x194);
      *(long *)((long)unaff_x20 + 0x1a8) = lVar29;
      *(long *)((long)unaff_x20 + 0x1b0) = lVar38;
      *(undefined8 **)((long)unaff_x20 + 0x1c8) = puVar48;
      *(long *)((long)unaff_x20 + 0x1d0) = lVar34;
      *(int *)((long)unaff_x20 + 0x1bc) = (int)lVar38 + -1;
      *(long *)((long)unaff_x20 + 0x1d8) = lVar34 + lVar29 * 2;
      *(undefined4 *)((long)unaff_x20 + 0x1c4) = *(undefined4 *)((long)unaff_x20 + 0x1a0);
      break;
    case 6:
      lVar29 = 1L << ((ulong)*(uint *)((long)unaff_x20 + 0x194) & 0x3f);
      *(uint *)((long)unaff_x20 + 0x1cc) = *(uint *)((long)unaff_x20 + 0x198);
      lVar38 = 1L << ((ulong)*(uint *)((long)unaff_x20 + 0x198) & 0x3f);
      *(undefined4 *)((long)unaff_x20 + 0x1d0) = *(undefined4 *)((long)unaff_x20 + 0x1a0);
      *(uint *)((long)unaff_x20 + 0x1b8) = 0x40 - *(uint *)((long)unaff_x20 + 0x194);
      *(undefined8 **)((long)unaff_x20 + 0x1d8) = puVar48;
      *(long *)((long)unaff_x20 + 0x1e0) = lVar34;
      *(long *)((long)unaff_x20 + 0x1a8) = lVar29;
      *(long *)((long)unaff_x20 + 0x1b0) = lVar38;
      *(int *)((long)unaff_x20 + 0x1c8) = (int)lVar38 + -1;
      *(ulong *)((long)unaff_x20 + 0x1c0) =
           0xffffffffffffffff >> ((ulong)(uint)(*(int *)((long)unaff_x20 + 0x19c) * -8) & 0x3f);
      *(long *)((long)unaff_x20 + 0x1e8) = lVar34 + lVar29 * 2;
      break;
    case 10:
      *(long *)((long)unaff_x20 + 0x1c0) = lVar34 + 0x80000;
      uVar27 = -1 << (ulong)(*(uint *)((long)unaff_x20 + 8) & 0x1f);
      *(ulong *)((long)unaff_x20 + 0x1a8) = (ulong)~uVar27;
      *(long *)((long)unaff_x20 + 0x1b0) = lVar34;
      *(uint *)((long)unaff_x20 + 0x1b8) = uVar27 + 1;
    }
  }
  else if (iVar19 < 0x36) {
    switch(iVar19) {
    case 0x23:
switchD_02cb5ffc_caseD_23:
      *(long *)((long)unaff_x20 + 0x210) = lVar34;
      *(undefined8 **)((long)unaff_x20 + 0x218) = puVar48;
      *(undefined4 *)((long)unaff_x20 + 0x220) = 1;
      *(undefined8 *)((long)unaff_x20 + 0x1f8) = *(undefined8 *)((long)unaff_x20 + 400);
      *(undefined8 *)((long)unaff_x20 + 0x1f0) = *(undefined8 *)((long)unaff_x20 + 0x188);
      *(undefined8 *)((long)unaff_x20 + 0x208) = *(undefined8 *)((long)unaff_x20 + 0x1a0);
      *(undefined8 *)((long)unaff_x20 + 0x200) = *(undefined8 *)((long)unaff_x20 + 0x198);
      *(undefined8 *)((long)unaff_x20 + 0x1e8) = *(undefined8 *)((long)unaff_x20 + 0x180);
      *(undefined8 *)((long)unaff_x20 + 0x1e0) = *puVar48;
      *(void **)((long)unaff_x20 + 0x228) = unaff_x20;
      break;
    case 0x28:
    case 0x29:
      *(long *)((long)unaff_x20 + 0x1b8) = lVar34;
      *(undefined8 **)((long)unaff_x20 + 0x1c0) = puVar48;
      iVar36 = 7;
      if (*(int *)((long)unaff_x20 + 4) < 7) {
        iVar36 = 8;
      }
      *(ulong *)((long)unaff_x20 + 0x1b0) =
           (ulong)(uint)(iVar36 << (ulong)(*(int *)((long)unaff_x20 + 4) - 4U & 0x1f));
      break;
    case 0x2a:
      *(long *)((long)unaff_x20 + 0x5b0) = lVar34;
      *(undefined8 **)((long)unaff_x20 + 0x5b8) = puVar48;
      iVar36 = 7;
      if (*(int *)((long)unaff_x20 + 4) < 7) {
        iVar36 = 8;
      }
      *(ulong *)((long)unaff_x20 + 0x5a8) =
           (ulong)(uint)(iVar36 << (ulong)(*(int *)((long)unaff_x20 + 4) - 4U & 0x1f));
    }
  }
  else {
    if (iVar19 == 0x36) goto switchD_02cb6048_caseD_2;
    if (iVar19 == 0x37) goto switchD_02cb5ffc_caseD_23;
    if (iVar19 == 0x41) {
      *(long *)((long)unaff_x20 + 0x248) = lVar34;
      *(undefined8 **)((long)unaff_x20 + 0x250) = puVar48;
      *(undefined8 *)((long)unaff_x20 + 0x240) = *(undefined8 *)((long)unaff_x20 + 0x1a0);
      *(undefined8 *)((long)unaff_x20 + 0x238) = *(undefined8 *)((long)unaff_x20 + 0x198);
      *(undefined8 *)((long)unaff_x20 + 0x230) = *(undefined8 *)((long)unaff_x20 + 400);
      *(undefined8 *)((long)unaff_x20 + 0x228) = *(undefined8 *)((long)unaff_x20 + 0x188);
      *(undefined8 *)((long)unaff_x20 + 0x220) = *(undefined8 *)((long)unaff_x20 + 0x180);
      *(undefined8 *)((long)unaff_x20 + 0x218) = *puVar48;
      *(undefined4 *)((long)unaff_x20 + 600) = 1;
      *(void **)((long)unaff_x20 + 0x260) = unaff_x20;
    }
  }
  *(undefined4 *)((long)unaff_x20 + 0x1a4) = 0;
LAB_02cb61e4:
  if (iVar19 < 0x23) {
    switch(iVar19) {
    case 2:
      pvVar20 = *(void **)((long)unaff_x20 + 0x1b0);
      if ((uVar53 < 0x801) && (uVar44 = uVar53, plVar39 = unaff_x23, bVar17 && bVar18)) {
        for (; uVar44 != 0; uVar44 = uVar44 - 1) {
          *(undefined4 *)
           ((long)pvVar20 + ((ulong)(*plVar39 * -0x42e1ca5843000000) >> 0x2e & 0x3fffc)) = 0;
          plVar39 = (long *)((long)plVar39 + 1);
        }
      }
      else {
LAB_02cb653c:
        __n = 0x40000;
LAB_02cb678c:
        memset(pvVar20,0,__n);
      }
      break;
    case 3:
      pvVar20 = *(void **)((long)unaff_x20 + 0x1b0);
      if ((0x800 < uVar53) || (uVar44 = uVar53, plVar39 = unaff_x23, !bVar17 || !bVar18))
      goto LAB_02cb653c;
      for (; uVar44 != 0; uVar44 = uVar44 - 1) {
        lVar29 = *plVar39;
        *(undefined4 *)((long)pvVar20 + ((ulong)(lVar29 * -0x42e1ca5843000000) >> 0x30) * 4) = 0;
        *(undefined4 *)
         ((long)pvVar20 +
         ((ulong)((ushort)((ulong)(lVar29 * -0x42e1ca5843000000) >> 0x30) + 8) & 0xffff) * 4) = 0;
        plVar39 = (long *)((long)plVar39 + 1);
      }
      break;
    case 4:
      pvVar20 = *(void **)((long)unaff_x20 + 0x1b0);
      if ((0x1000 < uVar53) || (!bVar17 || !bVar18)) {
        __n = 0x80000;
        goto LAB_02cb678c;
      }
      if (uVar53 != 0) {
        uVar44 = 0;
        do {
          lVar29 = *(long *)((long)unaff_x23 + uVar44);
          iVar19 = 0;
          do {
            uVar27 = (uint)((ulong)(lVar29 * -0x42e1ca5843000000) >> 0x2f) + iVar19;
            iVar19 = iVar19 + 8;
            *(undefined4 *)((long)pvVar20 + (ulong)(uVar27 & 0x1ffff) * 4) = 0;
          } while (iVar19 != 0x20);
          uVar44 = uVar44 + 1;
        } while (uVar44 != uVar53);
      }
      break;
    case 5:
      pvVar20 = *(void **)((long)unaff_x20 + 0x1d0);
      if ((*(ulong *)((long)unaff_x20 + 0x1a8) >> 6 < uVar53) || (!bVar17 || !bVar18)) {
        __n = *(ulong *)((long)unaff_x20 + 0x1a8) << 1;
        goto LAB_02cb678c;
      }
      if (uVar53 != 0) {
        uVar27 = *(uint *)((long)unaff_x20 + 0x1b8);
        plVar39 = unaff_x23;
        uVar44 = uVar53;
        do {
          uVar44 = uVar44 - 1;
          *(undefined2 *)
           ((long)pvVar20 +
           (ulong)((uint)((int)*plVar39 * 0x1e35a7bd) >> ((ulong)uVar27 & 0x3f)) * 2) = 0;
          plVar39 = (long *)((long)plVar39 + 1);
        } while (uVar44 != 0);
      }
      break;
    case 6:
      FUN_02cb87e0((long)unaff_x20 + 0x1a8,bVar16,uVar53);
      break;
    case 10:
      lVar34 = *(long *)((long)unaff_x20 + 0x1b0);
      uVar31 = *(undefined4 *)((long)unaff_x20 + 0x1b8);
      lVar29 = 0;
      do {
        puVar48 = (undefined8 *)(lVar34 + lVar29);
        puVar48[1] = CONCAT44(uVar31,uVar31);
        *puVar48 = CONCAT44(uVar31,uVar31);
        lVar29 = lVar29 + 0x10;
      } while (lVar29 != 0x80000);
    }
    goto switchD_02cb6218_caseD_24;
  }
  if (0x35 < iVar19) {
    if (iVar19 == 0x36) {
      FUN_02cb8844((long)unaff_x20 + 0x1a8,bVar16,uVar53);
    }
    else if (iVar19 == 0x37) {
      if (*(int *)((long)unaff_x20 + 0x220) != 0) {
        *(undefined4 *)((long)unaff_x20 + 0x220) = 0;
        pvVar20 = (void *)(*(long *)((long)unaff_x20 + 0x210) + 0x400000);
        *(undefined8 **)((long)unaff_x20 + 0x1a8) = *(undefined8 **)((long)unaff_x20 + 0x218);
        *(void **)((long)unaff_x20 + 0x1e0) = pvVar20;
        uVar15 = DAT_0137f228;
        uVar28 = **(undefined8 **)((long)unaff_x20 + 0x218);
        *(undefined4 *)((long)unaff_x20 + 0x1b8) = 0;
        *(void **)((long)unaff_x20 + 0x1c0) = pvVar20;
        *(undefined8 *)((long)unaff_x20 + 0x1c8) = 0;
        *(undefined8 *)((long)unaff_x20 + 0x1b0) = uVar28;
        *(undefined8 *)((long)unaff_x20 + 0x1d4) = uVar15;
        memset(pvVar20,0xff,0x4000000);
      }
      FUN_02cb8844((long)unaff_x20 + 0x1a8,bVar16,uVar53);
      if (0x1f < uVar53) {
        iVar19 = 0;
        uVar44 = 0;
        do {
          pbVar1 = (byte *)((long)unaff_x23 + uVar44);
          bVar16 = uVar44 < 0x1c;
          uVar44 = uVar44 + 4;
          iVar19 = (uint)*pbVar1 + iVar19 * *(int *)((long)unaff_x20 + 0x1d4) + 1;
        } while (bVar16);
        goto LAB_02cb75a0;
      }
    }
    else if (iVar19 == 0x41) {
      if (*(int *)((long)unaff_x20 + 600) != 0) {
        *(undefined4 *)((long)unaff_x20 + 600) = 0;
        plVar39 = *(long **)((long)unaff_x20 + 0x250);
        lVar29 = 1L << ((ulong)*(uint *)(*(long *)((long)unaff_x20 + 0x260) + 0x2c) & 0x3f);
        pvVar20 = (void *)(*(long *)((long)unaff_x20 + 0x248) +
                          ((lVar29 << 2) <<
                          ((ulong)*(uint *)(*(long *)((long)unaff_x20 + 0x260) + 0x30) & 0x3f)) +
                          lVar29 * 2);
        *(long **)((long)unaff_x20 + 0x1d8) = plVar39;
        *(void **)((long)unaff_x20 + 0x218) = pvVar20;
        uVar27 = *(uint *)((long)plVar39 + 0x1c);
        *(uint *)((long)unaff_x20 + 0x1b8) = 0x40 - uVar27;
        iVar19 = *(int *)((long)plVar39 + 0x24);
        lVar29 = 1L << ((ulong)uVar27 & 0x3f);
        *(long *)((long)unaff_x20 + 0x1a8) = lVar29;
        *(ulong *)((long)unaff_x20 + 0x1c0) =
             0xffffffffffffffff >> ((ulong)(uint)(iVar19 * -8) & 0x3f);
        uVar15 = DAT_0137dfa0;
        uVar27 = *(uint *)(plVar39 + 4);
        *(uint *)((long)unaff_x20 + 0x1cc) = uVar27;
        lVar34 = 1L << ((ulong)uVar27 & 0x3f);
        *(long *)((long)unaff_x20 + 0x1b0) = lVar34;
        *(int *)((long)unaff_x20 + 0x1c8) = (int)lVar34 + -1;
        *(int *)((long)unaff_x20 + 0x1d0) = (int)plVar39[5];
        lVar34 = *plVar39;
        *(undefined4 *)((long)unaff_x20 + 0x1f0) = 0;
        *(void **)((long)unaff_x20 + 0x1f8) = pvVar20;
        *(undefined8 *)((long)unaff_x20 + 0x200) = 0;
        *(long *)((long)unaff_x20 + 0x1e0) = lVar34;
        *(long *)((long)unaff_x20 + 0x1e8) = lVar34 + lVar29 * 2;
        *(undefined8 *)((long)unaff_x20 + 0x20c) = uVar15;
        memset(pvVar20,0xff,0x4000000);
      }
      FUN_02cb87e0((long)unaff_x20 + 0x1a8,bVar16,uVar53);
      if (0x1f < uVar53) {
        iVar19 = 0;
        lVar29 = 0;
        do {
          pbVar1 = (byte *)((long)unaff_x23 + lVar29);
          lVar29 = lVar29 + 1;
          iVar19 = (uint)*pbVar1 + iVar19 * *(int *)((long)unaff_x20 + 0x20c) + 1;
        } while (lVar29 != 0x20);
        *(int *)((long)unaff_x20 + 0x1f0) = iVar19;
      }
    }
    goto switchD_02cb6218_caseD_24;
  }
  switch(iVar19) {
  case 0x23:
    if (*(int *)((long)unaff_x20 + 0x220) == 0) {
      pvVar20 = *(void **)((long)unaff_x20 + 0x1b0);
    }
    else {
      *(undefined4 *)((long)unaff_x20 + 0x220) = 0;
      pvVar54 = (void *)(*(long *)((long)unaff_x20 + 0x210) + 0x40000);
      *(undefined8 **)((long)unaff_x20 + 0x1a8) = *(undefined8 **)((long)unaff_x20 + 0x218);
      *(void **)((long)unaff_x20 + 0x1e0) = pvVar54;
      uVar15 = DAT_0137f228;
      pvVar20 = (void *)**(undefined8 **)((long)unaff_x20 + 0x218);
      *(undefined4 *)((long)unaff_x20 + 0x1b8) = 0;
      *(void **)((long)unaff_x20 + 0x1c0) = pvVar54;
      *(undefined8 *)((long)unaff_x20 + 0x1c8) = 0;
      *(void **)((long)unaff_x20 + 0x1b0) = pvVar20;
      *(undefined8 *)((long)unaff_x20 + 0x1d4) = uVar15;
      memset(pvVar54,0xff,0x4000000);
    }
    if ((uVar53 < 0x801) && (bVar17 && bVar18)) {
      plVar39 = unaff_x23;
      uVar44 = uVar53;
      if (uVar53 == 0) break;
      do {
        lVar29 = *plVar39;
        uVar44 = uVar44 - 1;
        *(undefined4 *)((long)pvVar20 + ((ulong)(lVar29 * -0x42e1ca5843000000) >> 0x30) * 4) = 0;
        *(undefined4 *)
         ((long)pvVar20 +
         ((ulong)((ushort)((ulong)(lVar29 * -0x42e1ca5843000000) >> 0x30) + 8) & 0xffff) * 4) = 0;
        plVar39 = (long *)((long)plVar39 + 1);
      } while (uVar44 != 0);
    }
    else {
      memset(pvVar20,0,0x40000);
    }
    if (0x1f < uVar53) {
      iVar19 = 0;
      uVar44 = 0;
      do {
        pbVar1 = (byte *)((long)unaff_x23 + uVar44);
        bVar16 = uVar44 < 0x1c;
        uVar44 = uVar44 + 4;
        iVar19 = (uint)*pbVar1 + iVar19 * *(int *)((long)unaff_x20 + 0x1d4) + 1;
      } while (bVar16);
LAB_02cb75a0:
      *(int *)((long)unaff_x20 + 0x1b8) = iVar19;
    }
    break;
  case 0x28:
    pvVar54 = *(void **)((long)unaff_x20 + 0x1b8);
    pvVar20 = (void *)((long)pvVar54 + 0x20000);
    if ((uVar53 < 0x201) && (uVar44 = uVar53, plVar39 = unaff_x23, bVar17 && bVar18)) {
      for (; uVar44 != 0; uVar44 = uVar44 - 1) {
        uVar27 = (uint)((int)*plVar39 * 0x1e35a7bd) >> 0x11;
        *(undefined4 *)((long)pvVar54 + (ulong)uVar27 * 4) = 0xcccccccc;
        *(undefined2 *)((long)pvVar20 + (ulong)uVar27 * 2) = 0xcccc;
        plVar39 = (long *)((long)plVar39 + 1);
      }
    }
    else {
LAB_02cb6654:
      memset(pvVar54,0xcc,0x20000);
      memset(pvVar20,0,0x10000);
    }
    goto LAB_02cb6674;
  case 0x29:
    pvVar54 = *(void **)((long)unaff_x20 + 0x1b8);
    pvVar20 = (void *)((long)pvVar54 + 0x20000);
    if ((0x200 < uVar53) || (uVar44 = uVar53, plVar39 = unaff_x23, !bVar17 || !bVar18))
    goto LAB_02cb6654;
    for (; uVar44 != 0; uVar44 = uVar44 - 1) {
      uVar27 = (uint)((int)*plVar39 * 0x1e35a7bd) >> 0x11;
      *(undefined4 *)((long)pvVar54 + (ulong)uVar27 * 4) = 0xcccccccc;
      *(undefined2 *)((long)pvVar20 + (ulong)uVar27 * 2) = 0xcccc;
      plVar39 = (long *)((long)plVar39 + 1);
    }
LAB_02cb6674:
    memset((void *)((long)pvVar54 + 0x30000),0,0x10000);
    *(undefined2 *)((long)unaff_x20 + 0x1a8) = 0;
    break;
  case 0x2a:
    pvVar54 = *(void **)((long)unaff_x20 + 0x5b0);
    pvVar20 = (void *)((long)unaff_x20 + 0x1a8);
    if ((uVar53 < 0x201) && (uVar44 = uVar53, plVar39 = unaff_x23, bVar17 && bVar18)) {
      for (; uVar44 != 0; uVar44 = uVar44 - 1) {
        uVar27 = (uint)((int)*plVar39 * 0x1e35a7bd) >> 0x11;
        *(undefined4 *)((long)pvVar54 + (ulong)uVar27 * 4) = 0xcccccccc;
        *(undefined2 *)((long)pvVar54 + 0x20000 + (ulong)uVar27 * 2) = 0xcccc;
        plVar39 = (long *)((long)plVar39 + 1);
      }
    }
    else {
      memset(pvVar54,0xcc,0x20000);
      memset((void *)((long)pvVar54 + 0x20000),0,0x10000);
    }
    memset((void *)((long)pvVar54 + 0x30000),0,0x10000);
    __n = 0x400;
    goto LAB_02cb678c;
  }
switchD_02cb6218_caseD_24:
  if (uVar37 == 0) {
    *(undefined8 *)((long)unaff_x20 + 0x180) = 0;
    *(undefined8 *)((long)unaff_x20 + 0x188) = 0;
  }
  *(undefined4 *)((long)unaff_x20 + 0x1a4) = 1;
LAB_02cb67a4:
  iVar19 = *(int *)((long)unaff_x20 + 400);
  if (iVar19 < 0x23) {
    switch(iVar19) {
    case 2:
      if ((6 < uVar53) && (2 < uVar37)) {
        lVar29 = *(long *)((long)unaff_x20 + 0x1b0);
        *(int *)(lVar29 + ((ulong)(*(long *)((long)unaff_x23 + (uVar24 - 3 & unaff_x21)) *
                                  -0x42e1ca5843000000) >> 0x2e & 0x3fffc)) = (int)(uVar24 - 3);
        *(int *)(lVar29 + ((ulong)(*(long *)((long)unaff_x23 + (uVar24 - 2 & unaff_x21)) *
                                  -0x42e1ca5843000000) >> 0x2e & 0x3fffc)) = (int)(uVar24 - 2);
        *(int *)(lVar29 + ((ulong)(*(long *)((long)unaff_x23 + (uVar24 - 1 & unaff_x21)) *
                                  -0x42e1ca5843000000) >> 0x2e & 0x3fffc)) = (int)(uVar24 - 1);
      }
      break;
    case 3:
      if ((6 < uVar53) && (2 < uVar37)) {
        lVar29 = *(long *)((long)unaff_x20 + 0x1b0);
        uVar27 = (uint)(uVar24 - 3);
        *(uint *)(lVar29 + ((ulong)((uint)(ushort)((ulong)(*(long *)((long)unaff_x23 +
                                                                    (uVar24 - 3 & unaff_x21)) *
                                                          -0x42e1ca5843000000) >> 0x30) +
                                   (uVar27 & 8)) & 0xffff) * 4) = uVar27;
        uVar27 = (uint)(uVar24 - 2);
        *(uint *)(lVar29 + ((ulong)((uint)(ushort)((ulong)(*(long *)((long)unaff_x23 +
                                                                    (uVar24 - 2 & unaff_x21)) *
                                                          -0x42e1ca5843000000) >> 0x30) +
                                   (uVar27 & 8)) & 0xffff) * 4) = uVar27;
        uVar24 = (ulong)((uint)(ushort)((ulong)(*(long *)((long)unaff_x23 + (uVar24 - 1 & unaff_x21)
                                                         ) * -0x42e1ca5843000000) >> 0x30) +
                        ((uint)(uVar24 - 1) & 8)) & 0xffff;
LAB_02cb7210:
        *(uint *)(lVar29 + uVar24 * 4) = uVar37 - 1;
      }
      break;
    case 4:
      if ((6 < uVar53) && (2 < uVar37)) {
        lVar29 = *(long *)((long)unaff_x20 + 0x1b0);
        uVar27 = (uint)(uVar24 - 3);
        *(uint *)(lVar29 + ((ulong)((uint)((ulong)(*(long *)((long)unaff_x23 +
                                                            (uVar24 - 3 & unaff_x21)) *
                                                  -0x42e1ca5843000000) >> 0x2f) + (uVar27 & 0x18)) &
                           0x1ffff) * 4) = uVar27;
        uVar27 = (uint)(uVar24 - 2);
        *(uint *)(lVar29 + ((ulong)((uint)((ulong)(*(long *)((long)unaff_x23 +
                                                            (uVar24 - 2 & unaff_x21)) *
                                                  -0x42e1ca5843000000) >> 0x2f) + (uVar27 & 0x18)) &
                           0x1ffff) * 4) = uVar27;
        uVar24 = (ulong)((uint)((ulong)(*(long *)((long)unaff_x23 + (uVar24 - 1 & unaff_x21)) *
                                       -0x42e1ca5843000000) >> 0x2f) + ((uint)(uVar24 - 1) & 0x18))
                 & 0x1ffff;
        goto LAB_02cb7210;
      }
      break;
    case 5:
      if ((2 < uVar53) && (2 < uVar37)) {
        uVar53 = (ulong)*(uint *)((long)unaff_x20 + 0x1b8);
        lVar29 = *(long *)((long)unaff_x20 + 0x1d0);
        lVar34 = *(long *)((long)unaff_x20 + 0x1d8);
        uVar32 = (uint)(*(int *)((long)unaff_x23 + (uVar24 - 3 & unaff_x21)) * 0x1e35a7bd) >>
                 (uVar53 & 0x3f);
        uVar44 = (ulong)*(uint *)((long)unaff_x20 + 0x1bc);
        uVar27 = *(uint *)((long)unaff_x20 + 0x1c0);
        uVar14 = *(ushort *)(lVar29 + (ulong)uVar32 * 2);
        *(int *)(lVar34 + ((ulong)(uVar32 << (ulong)(uVar27 & 0x1f)) + (uVar44 & uVar14)) * 4) =
             (int)(uVar24 - 3);
        *(ushort *)(lVar29 + (ulong)uVar32 * 2) = uVar14 + 1;
        uVar32 = (uint)(*(int *)((long)unaff_x23 + (uVar24 - 2 & unaff_x21)) * 0x1e35a7bd) >>
                 (uVar53 & 0x3f);
        uVar14 = *(ushort *)(lVar29 + (ulong)uVar32 * 2);
        *(int *)(lVar34 + ((ulong)(uVar32 << (ulong)(uVar27 & 0x1f)) + (uVar44 & uVar14)) * 4) =
             (int)(uVar24 - 2);
        *(ushort *)(lVar29 + (ulong)uVar32 * 2) = uVar14 + 1;
        uVar32 = (uint)(*(int *)((long)unaff_x23 + (uVar24 - 1 & unaff_x21)) * 0x1e35a7bd) >>
                 (uVar53 & 0x3f);
        uVar14 = *(ushort *)(lVar29 + (ulong)uVar32 * 2);
        *(int *)(lVar34 + ((ulong)(uVar32 << (ulong)(uVar27 & 0x1f)) + (uVar44 & uVar14)) * 4) =
             (int)(uVar24 - 1);
        *(ushort *)(lVar29 + (ulong)uVar32 * 2) = uVar14 + 1;
      }
      break;
    case 6:
      if ((6 < uVar53) && (2 < uVar37)) {
        uVar44 = *(ulong *)((long)unaff_x20 + 0x1c0);
        uVar46 = (ulong)*(uint *)((long)unaff_x20 + 0x1b8);
        lVar29 = *(long *)((long)unaff_x20 + 0x1e0);
        lVar34 = *(long *)((long)unaff_x20 + 0x1e8);
        uVar53 = (*(ulong *)((long)unaff_x23 + (uVar24 - 3 & unaff_x21)) & uVar44) *
                 0x1fe35a7bd3579bd3 >> (uVar46 & 0x3f);
        uVar14 = *(ushort *)(lVar29 + (uVar53 & 0xffffffff) * 2);
        uVar55 = (ulong)*(uint *)((long)unaff_x20 + 0x1c8);
        uVar27 = *(uint *)((long)unaff_x20 + 0x1cc);
        *(ushort *)(lVar29 + (uVar53 & 0xffffffff) * 2) = uVar14 + 1;
        *(int *)(lVar34 + ((ulong)(uint)((int)uVar53 << (ulong)(uVar27 & 0x1f)) + (uVar55 & uVar14))
                          * 4) = (int)(uVar24 - 3);
        uVar53 = (*(ulong *)((long)unaff_x23 + (uVar24 - 2 & unaff_x21)) & uVar44) *
                 0x1fe35a7bd3579bd3 >> (uVar46 & 0x3f);
        uVar14 = *(ushort *)(lVar29 + (uVar53 & 0xffffffff) * 2);
        *(ushort *)(lVar29 + (uVar53 & 0xffffffff) * 2) = uVar14 + 1;
        *(int *)(lVar34 + ((ulong)(uint)((int)uVar53 << (ulong)(uVar27 & 0x1f)) + (uVar55 & uVar14))
                          * 4) = (int)(uVar24 - 2);
        uVar53 = (*(ulong *)((long)unaff_x23 + (uVar24 - 1 & unaff_x21)) & uVar44) *
                 0x1fe35a7bd3579bd3 >> (uVar46 & 0x3f);
        uVar14 = *(ushort *)(lVar29 + (uVar53 & 0xffffffff) * 2);
        *(ushort *)(lVar29 + (uVar53 & 0xffffffff) * 2) = uVar14 + 1;
        *(int *)(lVar34 + ((ulong)(uint)((int)uVar53 << (ulong)(uVar27 & 0x1f)) + (uVar55 & uVar14))
                          * 4) = (int)(uVar24 - 1);
      }
      break;
    case 10:
      if ((2 < uVar53) && (0x7f < uVar37)) {
        uVar44 = uVar24 - 0x7f;
        uVar46 = uVar24;
        if (uVar44 + uVar53 <= uVar24) {
          uVar46 = uVar44 + uVar53;
        }
        if (uVar44 < uVar46) {
          uVar53 = *(ulong *)((long)unaff_x20 + 0x1a8);
          lVar29 = *(long *)((long)unaff_x20 + 0x1b0);
          lVar34 = *(long *)((long)unaff_x20 + 0x1c0);
          do {
            uVar47 = uVar44 & unaff_x21;
            uVar55 = uVar24 - uVar44;
            if (uVar55 < 0x10) {
              uVar55 = 0xf;
            }
            uVar27 = (uint)(*(int *)((long)unaff_x23 + uVar47) * 0x1e35a7bd) >> 0xf;
            uVar26 = (ulong)*(uint *)(lVar29 + (ulong)uVar27 * 4);
            uVar45 = (uVar44 & uVar53) << 1;
            uVar43 = (uVar44 & uVar53) << 1 | 1;
            uVar42 = uVar44 - uVar26;
            *(int *)(lVar29 + (ulong)uVar27 * 4) = (int)uVar44;
            if (uVar42 != 0) {
              uVar23 = 0;
              uVar25 = 0;
              lVar38 = 0x40;
              do {
                if ((uVar53 - uVar55 < uVar42) || (lVar38 == 0)) break;
                uVar42 = uVar25;
                if (uVar23 <= uVar25) {
                  uVar42 = uVar23;
                }
                uVar40 = 0x80 - uVar42;
                uVar33 = uVar40 >> 3;
                pcVar4 = (char *)((long)unaff_x23 + uVar42 + (uVar26 & unaff_x21));
                if (uVar33 == 0) {
                  uVar51 = 0;
                  pcVar57 = pcVar4;
                }
                else {
                  uVar51 = uVar40 & 0xfffffffffffffff8;
                  lVar41 = 0;
                  pcVar57 = pcVar4 + uVar51;
                  do {
                    uVar49 = *(ulong *)((long)unaff_x23 + lVar41 + uVar42 + uVar47);
                    if (*(ulong *)(pcVar4 + lVar41) != uVar49) {
                      uVar49 = uVar49 ^ *(ulong *)(pcVar4 + lVar41);
                      uVar40 = (uVar49 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                               (uVar49 & 0x5555555555555555) << 1;
                      uVar40 = (uVar40 & 0xcccccccccccccccc) >> 2 |
                               (uVar40 & 0x3333333333333333) << 2;
                      uVar40 = (uVar40 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                               (uVar40 & 0xf0f0f0f0f0f0f0f) << 4;
                      uVar40 = (uVar40 & 0xff00ff00ff00ff00) >> 8 | (uVar40 & 0xff00ff00ff00ff) << 8
                      ;
                      uVar40 = (uVar40 & 0xffff0000ffff0000) >> 0x10 |
                               (uVar40 & 0xffff0000ffff) << 0x10;
                      uVar33 = lVar41 + ((ulong)LZCOUNT(uVar40 >> 0x20 | uVar40 << 0x20) >> 3);
                      goto LAB_02cb6e70;
                    }
                    uVar33 = uVar33 - 1;
                    lVar41 = lVar41 + 8;
                  } while (uVar33 != 0);
                }
                uVar40 = uVar40 & 7;
                uVar33 = uVar51;
                if (uVar40 != 0) {
                  uVar49 = uVar51 | uVar40;
                  do {
                    uVar33 = uVar51;
                    if (*(char *)((long)unaff_x23 + uVar51 + uVar42 + uVar47) != *pcVar57) break;
                    pcVar57 = pcVar57 + 1;
                    uVar40 = uVar40 - 1;
                    uVar51 = uVar51 + 1;
                    uVar33 = uVar49;
                  } while (uVar40 != 0);
                }
LAB_02cb6e70:
                uVar33 = uVar33 + uVar42;
                if (0x7f < uVar33) {
                  *(undefined4 *)(lVar34 + uVar45 * 4) =
                       *(undefined4 *)(lVar34 + (uVar26 & uVar53) * 8);
                  uVar31 = *(undefined4 *)(lVar34 + ((uVar26 & uVar53) << 3 | 4));
                  goto LAB_02cb6f38;
                }
                if (*(byte *)((long)unaff_x23 + uVar33 + (uVar26 & unaff_x21)) <
                    *(byte *)((long)unaff_x23 + uVar33 + uVar47)) {
                  *(int *)(lVar34 + uVar45 * 4) = (int)uVar26;
                  uVar42 = (uVar26 & uVar53) << 1 | 1;
                  uVar25 = uVar33;
                  uVar45 = uVar42;
                }
                else {
                  *(int *)(lVar34 + uVar43 * 4) = (int)uVar26;
                  uVar42 = (uVar26 & uVar53) << 1;
                  uVar23 = uVar33;
                  uVar43 = uVar42;
                }
                uVar26 = (ulong)*(uint *)(lVar34 + uVar42 * 4);
                lVar38 = lVar38 + -1;
                uVar42 = uVar44 - uVar26;
              } while (uVar42 != 0);
            }
            uVar31 = *(undefined4 *)((long)unaff_x20 + 0x1b8);
            *(undefined4 *)(lVar34 + uVar45 * 4) = uVar31;
LAB_02cb6f38:
            uVar44 = uVar44 + 1;
            *(undefined4 *)(lVar34 + uVar43 * 4) = uVar31;
          } while (uVar44 != uVar46);
        }
      }
    }
  }
  else if (iVar19 < 0x36) {
    switch(iVar19) {
    case 0x23:
      if ((6 < uVar53) && (2 < uVar37)) {
        lVar29 = *(long *)((long)unaff_x20 + 0x1b0);
        uVar27 = (uint)(uVar24 - 3);
        *(uint *)(lVar29 + ((ulong)((uint)(ushort)((ulong)(*(long *)((long)unaff_x23 +
                                                                    (uVar24 - 3 & unaff_x21)) *
                                                          -0x42e1ca5843000000) >> 0x30) +
                                   (uVar27 & 8)) & 0xffff) * 4) = uVar27;
        uVar27 = (uint)(uVar24 - 2);
        *(uint *)(lVar29 + ((ulong)((uint)(ushort)((ulong)(*(long *)((long)unaff_x23 +
                                                                    (uVar24 - 2 & unaff_x21)) *
                                                          -0x42e1ca5843000000) >> 0x30) +
                                   (uVar27 & 8)) & 0xffff) * 4) = uVar27;
        uVar27 = (uint)(uVar24 - 1);
        *(uint *)(lVar29 + ((ulong)((uint)(ushort)((ulong)(*(long *)((long)unaff_x23 +
                                                                    (uVar24 - 1 & unaff_x21)) *
                                                          -0x42e1ca5843000000) >> 0x30) +
                                   (uVar27 & 8)) & 0xffff) * 4) = uVar27;
      }
      if ((unaff_x29 & 3) != 0) {
        uVar46 = 4 - (unaff_x29 & 3);
        bVar16 = uVar46 <= uVar53;
        uVar44 = uVar53 - uVar46;
        uVar53 = 0;
        if (bVar16) {
          uVar53 = uVar44;
        }
        uVar24 = uVar46 + uVar24;
      }
      uVar44 = unaff_x21 - (uVar24 & unaff_x21);
      if (uVar53 <= uVar44) {
        uVar44 = uVar53;
      }
      if (0x1f < uVar44) {
        iVar19 = 0;
        uVar53 = 0;
        do {
          lVar29 = uVar53 + (uVar24 & unaff_x21);
          bVar16 = uVar53 < 0x1c;
          uVar53 = uVar53 + 4;
          iVar19 = (uint)*(byte *)((long)unaff_x23 + lVar29) +
                   iVar19 * *(int *)((long)unaff_x20 + 0x1d4) + 1;
        } while (bVar16);
LAB_02cb7304:
        *(int *)((long)unaff_x20 + 0x1b8) = iVar19;
      }
LAB_02cb7308:
      *(ulong *)((long)unaff_x20 + 0x1c8) = uVar24;
      break;
    case 0x28:
    case 0x29:
      if ((2 < uVar53) && (2 < uVar37)) {
        uVar44 = uVar24 - 3;
        lVar38 = *(long *)((long)unaff_x20 + 0x1b8);
        uVar32 = (uint)(*(int *)((long)unaff_x23 + (uVar44 & unaff_x21)) * 0x1e35a7bd) >> 0x11;
        uVar27 = *(uint *)(lVar38 + (ulong)uVar32 * 4);
        uVar14 = *(ushort *)((long)unaff_x20 + 0x1a8);
        lVar29 = lVar38 + 0x30000;
        *(char *)(lVar29 + (uVar44 & 0xffff)) = (char)uVar32;
        uVar53 = uVar44 - uVar27;
        lVar34 = lVar38 + 0x40000;
        puVar5 = (undefined2 *)(lVar34 + (ulong)uVar14 * 4);
        if (0xfffe < uVar53) {
          uVar53 = 0xffff;
        }
        lVar41 = lVar38 + 0x20000;
        *puVar5 = (short)uVar53;
        uVar46 = uVar24 - 2;
        puVar5[1] = *(undefined2 *)(lVar41 + (ulong)uVar32 * 2);
        *(int *)(lVar38 + (ulong)uVar32 * 4) = (int)uVar44;
        *(ushort *)(lVar41 + (ulong)uVar32 * 2) = uVar14;
        puVar5 = (undefined2 *)(lVar34 + (ulong)(ushort)(uVar14 + 1) * 4);
        uVar32 = (uint)(*(int *)((long)unaff_x23 + (uVar46 & unaff_x21)) * 0x1e35a7bd) >> 0x11;
        uVar27 = *(uint *)(lVar38 + (ulong)uVar32 * 4);
        *(char *)(lVar29 + (uVar46 & 0xffff)) = (char)uVar32;
        uVar53 = uVar46 - uVar27;
        if (0xfffe < uVar53) {
          uVar53 = 0xffff;
        }
        *puVar5 = (short)uVar53;
        uVar24 = uVar24 - 1;
        puVar5[1] = *(undefined2 *)(lVar41 + (ulong)uVar32 * 2);
        *(int *)(lVar38 + (ulong)uVar32 * 4) = (int)uVar46;
        *(ushort *)(lVar41 + (ulong)uVar32 * 2) = uVar14 + 1;
        iVar19 = *(int *)((long)unaff_x23 + (uVar24 & unaff_x21));
        *(ushort *)((long)unaff_x20 + 0x1a8) = uVar14 + 3;
        uVar32 = (uint)(iVar19 * 0x1e35a7bd) >> 0x11;
        uVar27 = *(uint *)(lVar38 + (ulong)uVar32 * 4);
        puVar5 = (undefined2 *)(lVar34 + (ulong)(ushort)(uVar14 + 2) * 4);
        *(char *)(lVar29 + (uVar24 & 0xffff)) = (char)uVar32;
        uVar53 = uVar24 - uVar27;
        if (0xfffe < uVar53) {
          uVar53 = 0xffff;
        }
        *puVar5 = (short)uVar53;
        puVar5[1] = *(undefined2 *)(lVar41 + (ulong)uVar32 * 2);
        *(int *)(lVar38 + (ulong)uVar32 * 4) = (int)uVar24;
        *(ushort *)(lVar41 + (ulong)uVar32 * 2) = uVar14 + 2;
      }
      break;
    case 0x2a:
      if ((2 < uVar53) && (2 < uVar37)) {
        uVar44 = uVar24 - 3;
        uVar32 = (uint)(*(int *)((long)unaff_x23 + (uVar44 & unaff_x21)) * 0x1e35a7bd) >> 0x11;
        uVar46 = (ulong)uVar32;
        uVar55 = uVar46 & 0x1ff;
        uVar14 = *(ushort *)((long)unaff_x20 + uVar55 * 2 + 0x1a8);
        lVar38 = *(long *)((long)unaff_x20 + 0x5b0);
        *(ushort *)((long)unaff_x20 + uVar55 * 2 + 0x1a8) = uVar14 + 1;
        uVar27 = *(uint *)(lVar38 + uVar46 * 4);
        lVar29 = lVar38 + 0x30000;
        lVar34 = lVar38 + 0x40000;
        *(char *)(lVar29 + (uVar44 & 0xffff)) = (char)uVar32;
        uVar53 = uVar44 - uVar27;
        uVar47 = (ulong)uVar14 & 0x1ff;
        puVar5 = (undefined2 *)(lVar34 + uVar55 * 0x800 + uVar47 * 4);
        if (0xfffe < uVar53) {
          uVar53 = 0xffff;
        }
        lVar41 = lVar38 + 0x20000;
        *puVar5 = (short)uVar53;
        uVar55 = uVar24 - 2;
        puVar5[1] = *(undefined2 *)(lVar41 + (ulong)uVar32 * 2);
        *(int *)(lVar38 + uVar46 * 4) = (int)uVar44;
        *(short *)(lVar41 + (ulong)uVar32 * 2) = (short)uVar47;
        uVar32 = (uint)(*(int *)((long)unaff_x23 + (uVar55 & unaff_x21)) * 0x1e35a7bd) >> 0x11;
        uVar44 = (ulong)uVar32;
        uVar46 = uVar44 & 0x1ff;
        uVar14 = *(ushort *)((long)unaff_x20 + uVar46 * 2 + 0x1a8);
        *(ushort *)((long)unaff_x20 + uVar46 * 2 + 0x1a8) = uVar14 + 1;
        uVar27 = *(uint *)(lVar38 + uVar44 * 4);
        *(char *)(lVar29 + (uVar55 & 0xffff)) = (char)uVar32;
        uVar47 = (ulong)uVar14 & 0x1ff;
        uVar53 = uVar55 - uVar27;
        puVar5 = (undefined2 *)(lVar34 + uVar46 * 0x800 + uVar47 * 4);
        if (0xfffe < uVar53) {
          uVar53 = 0xffff;
        }
        *puVar5 = (short)uVar53;
        uVar24 = uVar24 - 1;
        puVar5[1] = *(undefined2 *)(lVar41 + (ulong)uVar32 * 2);
        *(int *)(lVar38 + uVar44 * 4) = (int)uVar55;
        *(short *)(lVar41 + (ulong)uVar32 * 2) = (short)uVar47;
        uVar32 = (uint)(*(int *)((long)unaff_x23 + (uVar24 & unaff_x21)) * 0x1e35a7bd) >> 0x11;
        uVar44 = (ulong)uVar32;
        uVar53 = uVar44 & 0x1ff;
        uVar14 = *(ushort *)((long)unaff_x20 + uVar53 * 2 + 0x1a8);
        *(ushort *)((long)unaff_x20 + uVar53 * 2 + 0x1a8) = uVar14 + 1;
        uVar27 = *(uint *)(lVar38 + uVar44 * 4);
        uVar46 = (ulong)uVar14 & 0x1ff;
        puVar5 = (undefined2 *)(lVar34 + uVar53 * 0x800 + uVar46 * 4);
        *(char *)(lVar29 + (uVar24 & 0xffff)) = (char)uVar32;
        uVar53 = uVar24 - uVar27;
        if (0xfffe < uVar53) {
          uVar53 = 0xffff;
        }
        *puVar5 = (short)uVar53;
        puVar5[1] = *(undefined2 *)(lVar41 + (ulong)uVar32 * 2);
        *(int *)(lVar38 + uVar44 * 4) = (int)uVar24;
        *(short *)(lVar41 + (ulong)uVar32 * 2) = (short)uVar46;
      }
    }
  }
  else if (iVar19 == 0x36) {
    if ((6 < uVar53) && (2 < uVar37)) {
      lVar29 = *(long *)((long)unaff_x20 + 0x1b0);
      uVar27 = (uint)(uVar24 - 3);
      *(uint *)(lVar29 + ((ulong)((uint)((ulong)(*(long *)((long)unaff_x23 +
                                                          (uVar24 - 3 & unaff_x21)) *
                                                0x35a7bd1e35a7bd00) >> 0x2c) + (uVar27 & 0x18)) &
                         0xfffff) * 4) = uVar27;
      uVar27 = (uint)(uVar24 - 2);
      *(uint *)(lVar29 + ((ulong)((uint)((ulong)(*(long *)((long)unaff_x23 +
                                                          (uVar24 - 2 & unaff_x21)) *
                                                0x35a7bd1e35a7bd00) >> 0x2c) + (uVar27 & 0x18)) &
                         0xfffff) * 4) = uVar27;
      uVar24 = (ulong)((uint)((ulong)(*(long *)((long)unaff_x23 + (uVar24 - 1 & unaff_x21)) *
                                     0x35a7bd1e35a7bd00) >> 0x2c) + ((uint)(uVar24 - 1) & 0x18)) &
               0xfffff;
      goto LAB_02cb7210;
    }
  }
  else {
    if (iVar19 == 0x37) {
      if ((6 < uVar53) && (2 < uVar37)) {
        lVar29 = *(long *)((long)unaff_x20 + 0x1b0);
        uVar27 = (uint)(uVar24 - 3);
        *(uint *)(lVar29 + ((ulong)((uint)((ulong)(*(long *)((long)unaff_x23 +
                                                            (uVar24 - 3 & unaff_x21)) *
                                                  0x35a7bd1e35a7bd00) >> 0x2c) + (uVar27 & 0x18)) &
                           0xfffff) * 4) = uVar27;
        uVar27 = (uint)(uVar24 - 2);
        *(uint *)(lVar29 + ((ulong)((uint)((ulong)(*(long *)((long)unaff_x23 +
                                                            (uVar24 - 2 & unaff_x21)) *
                                                  0x35a7bd1e35a7bd00) >> 0x2c) + (uVar27 & 0x18)) &
                           0xfffff) * 4) = uVar27;
        uVar27 = (uint)(uVar24 - 1);
        *(uint *)(lVar29 + ((ulong)((uint)((ulong)(*(long *)((long)unaff_x23 +
                                                            (uVar24 - 1 & unaff_x21)) *
                                                  0x35a7bd1e35a7bd00) >> 0x2c) + (uVar27 & 0x18)) &
                           0xfffff) * 4) = uVar27;
      }
      if ((unaff_x29 & 3) != 0) {
        uVar46 = 4 - (unaff_x29 & 3);
        bVar16 = uVar46 <= uVar53;
        uVar44 = uVar53 - uVar46;
        uVar53 = 0;
        if (bVar16) {
          uVar53 = uVar44;
        }
        uVar24 = uVar46 + uVar24;
      }
      uVar44 = unaff_x21 - (uVar24 & unaff_x21);
      if (uVar53 <= uVar44) {
        uVar44 = uVar53;
      }
      if (0x1f < uVar44) {
        iVar19 = 0;
        uVar53 = 0;
        do {
          lVar29 = uVar53 + (uVar24 & unaff_x21);
          bVar16 = uVar53 < 0x1c;
          uVar53 = uVar53 + 4;
          iVar19 = (uint)*(byte *)((long)unaff_x23 + lVar29) +
                   iVar19 * *(int *)((long)unaff_x20 + 0x1d4) + 1;
        } while (bVar16);
        goto LAB_02cb7304;
      }
      goto LAB_02cb7308;
    }
    if (iVar19 == 0x41) {
      if ((6 < uVar53) && (2 < uVar37)) {
        uVar46 = *(ulong *)((long)unaff_x20 + 0x1c0);
        uVar55 = (ulong)*(uint *)((long)unaff_x20 + 0x1b8);
        lVar29 = *(long *)((long)unaff_x20 + 0x1e0);
        lVar34 = *(long *)((long)unaff_x20 + 0x1e8);
        uVar44 = (*(ulong *)((long)unaff_x23 + (uVar24 - 3 & unaff_x21)) & uVar46) *
                 0x1fe35a7bd3579bd3 >> (uVar55 & 0x3f);
        uVar14 = *(ushort *)(lVar29 + (uVar44 & 0xffffffff) * 2);
        uVar47 = (ulong)*(uint *)((long)unaff_x20 + 0x1c8);
        uVar27 = *(uint *)((long)unaff_x20 + 0x1cc);
        *(ushort *)(lVar29 + (uVar44 & 0xffffffff) * 2) = uVar14 + 1;
        *(int *)(lVar34 + ((ulong)(uint)((int)uVar44 << (ulong)(uVar27 & 0x1f)) + (uVar47 & uVar14))
                          * 4) = (int)(uVar24 - 3);
        uVar44 = (*(ulong *)((long)unaff_x23 + (uVar24 - 2 & unaff_x21)) & uVar46) *
                 0x1fe35a7bd3579bd3 >> (uVar55 & 0x3f);
        uVar14 = *(ushort *)(lVar29 + (uVar44 & 0xffffffff) * 2);
        *(ushort *)(lVar29 + (uVar44 & 0xffffffff) * 2) = uVar14 + 1;
        *(int *)(lVar34 + ((ulong)(uint)((int)uVar44 << (ulong)(uVar27 & 0x1f)) + (uVar47 & uVar14))
                          * 4) = (int)(uVar24 - 2);
        uVar44 = (*(ulong *)((long)unaff_x23 + (uVar24 - 1 & unaff_x21)) & uVar46) *
                 0x1fe35a7bd3579bd3 >> (uVar55 & 0x3f);
        uVar14 = *(ushort *)(lVar29 + (uVar44 & 0xffffffff) * 2);
        *(ushort *)(lVar29 + (uVar44 & 0xffffffff) * 2) = uVar14 + 1;
        *(int *)(lVar34 + ((ulong)(uint)((int)uVar44 << (ulong)(uVar27 & 0x1f)) + (uVar47 & uVar14))
                          * 4) = (int)(uVar24 - 1);
      }
      uVar46 = (ulong)(uVar37 & (uint)unaff_x21);
      uVar44 = unaff_x21 - uVar46;
      if (uVar53 <= uVar44) {
        uVar44 = uVar53;
      }
      if (0x1f < uVar44) {
        iVar19 = 0;
        lVar29 = 0;
        do {
          lVar34 = lVar29 + uVar46;
          lVar29 = lVar29 + 1;
          iVar19 = (uint)*(byte *)((long)unaff_x23 + lVar34) +
                   iVar19 * *(int *)((long)unaff_x20 + 0x20c) + 1;
        } while (lVar29 != 0x20);
        *(int *)((long)unaff_x20 + 0x1f0) = iVar19;
      }
      *(ulong *)((long)unaff_x20 + 0x200) = uVar24;
    }
  }
  if (9 < *(int *)((long)unaff_x20 + 4)) {
    FUN_02c8629c(0x3fe8000000000000);
  }
  if ((*in_stack_000000e8 != 0) && (*(long *)((long)unaff_x20 + 0xf8) == 0)) {
    lVar34 = *(long *)((long)unaff_x20 + 0xe0);
    lVar38 = *in_stack_000000e8 - 1;
    lVar29 = lVar34 + lVar38 * 0x10;
    lVar41 = *(long *)((long)unaff_x20 + 0xd0);
    uVar32 = *(uint *)((long)unaff_x20 + 0xb4);
    uVar27 = *(uint *)(lVar29 + 4);
    uVar53 = (ulong)uVar27;
    uVar46 = (1L << ((ulong)*(uint *)((long)unaff_x20 + 8) & 0x3f)) - 0x10;
    uVar14 = *(ushort *)(lVar29 + 0xe);
    uVar44 = uVar53 & 0x1ffffff;
    uVar24 = *(long *)((long)unaff_x20 + 0x108) - uVar44;
    if (uVar46 <= uVar24) {
      uVar24 = uVar46;
    }
    uVar22 = uVar14 & 0x3ff;
    uVar56 = *(int *)((long)unaff_x20 + 0x44) + 0x10;
    if (uVar56 <= uVar22) {
      uVar7 = *(uint *)((long)unaff_x20 + 0x40);
      uVar22 = (uVar22 - *(int *)((long)unaff_x20 + 0x44)) - 0x10;
      uVar22 = (uVar22 & (-1 << (ulong)(uVar7 & 0x1f) ^ 0xffffffffU)) + uVar56 +
               (*(int *)(lVar29 + 8) +
                ((uVar22 >> (ulong)(uVar7 & 0x1f) & 1 | 2) << (ulong)(uVar14 >> 10 & 0x1f)) + -4 <<
               (ulong)(uVar7 & 0x1f));
    }
    iVar19 = *(int *)((long)unaff_x20 + 0x110);
    if ((uVar22 < 0x10) || ((ulong)(uVar22 - 0xf) == (long)iVar19)) {
      if (((ulong)(long)iVar19 <= uVar24) && (unaff_w28 != 0)) {
        do {
          uVar27 = (uint)uVar53;
          uVar56 = (uint)unaff_x29;
          if (*(char *)(lVar41 + (unaff_x29 & uVar32)) !=
              *(char *)(lVar41 + (ulong)(uVar56 - iVar19 & uVar32))) break;
          uVar27 = uVar27 + 1;
          uVar53 = (ulong)uVar27;
          unaff_w28 = unaff_w28 - 1;
          unaff_x29 = (ulong)(uVar56 + 1);
          *(uint *)(lVar29 + 4) = uVar27;
          uVar56 = (uVar37 + in_stack_000000d0) - unaff_w24;
        } while (unaff_w28 != 0);
        uVar44 = (ulong)(uVar27 & 0x1ffffff);
        unaff_x29 = (ulong)uVar56;
      }
      puVar50 = (uint *)(lVar34 + lVar38 * 0x10);
      uVar37 = *puVar50;
      uVar27 = (int)uVar44 + (uVar27 >> 0x19);
      if (5 < uVar37) {
        if (uVar37 < 0x82) {
          uVar32 = ((uint)LZCOUNT((int)((ulong)uVar37 - 2)) ^ 0x1f) - 1;
          uVar37 = (int)((ulong)uVar37 - 2 >> ((ulong)uVar32 & 0x3f)) + uVar32 * 2 + 2;
        }
        else if (uVar37 < 0x842) {
          uVar37 = ((uint)LZCOUNT(uVar37 - 0x42) ^ 0x1f) + 10;
        }
        else if (uVar37 >> 1 < 0xc21) {
          uVar37 = 0x15;
        }
        else {
          bVar16 = 0x5841 < uVar37;
          uVar37 = 0x16;
          if (bVar16) {
            uVar37 = 0x17;
          }
        }
      }
      if (uVar27 < 10) {
        uVar27 = uVar27 - 2;
      }
      else if (uVar27 < 0x86) {
        uVar32 = ((uint)LZCOUNT((int)((ulong)uVar27 - 6)) ^ 0x1f) - 1;
        uVar27 = (int)((ulong)uVar27 - 6 >> ((ulong)uVar32 & 0x3f)) + uVar32 * 2 + 4;
      }
      else if (uVar27 < 0x846) {
        uVar27 = ((uint)LZCOUNT(uVar27 - 0x46) ^ 0x1f) + 0xc;
      }
      else {
        uVar27 = 0x17;
      }
      uVar35 = (ushort)uVar27 & 7 | (ushort)((uVar37 & 7) << 3);
      if ((((uVar14 & 0x3ff) == 0) && ((uVar37 & 0xffff) < 8)) && ((uVar27 & 0xffff) < 0x10)) {
        if (7 < (uVar27 & 0xffff)) {
          uVar35 = uVar35 | 0x40;
        }
      }
      else {
        uVar37 = (uVar37 >> 3 & 0x1fff) * 3 + ((uVar27 & 0xfff8) >> 3);
        uVar35 = (((ushort)(0x520d40 >> (ulong)((uVar37 & 0xf) << 1)) & 0xc0) + (short)uVar37 * 0x40
                 | uVar35) + 0x40;
      }
      *(ushort *)(puVar50 + 3) = uVar35;
    }
  }
  if (*(int *)((long)unaff_x20 + 4) == 0xb) {
    FUN_02c91df8(in_stack_00000100,unaff_w28,unaff_x29 & 0xffffffff);
  }
  else if (*(int *)((long)unaff_x20 + 4) == 10) {
    FUN_02c91cec(in_stack_00000100,unaff_w28,unaff_x29 & 0xffffffff);
  }
  else {
    FUN_02cf8548(unaff_w28,unaff_x29 & 0xffffffff);
  }
  uVar15 = DAT_0137e528;
  uVar27 = *(uint *)((long)unaff_x20 + 0xc);
  uVar24 = *(ulong *)((long)unaff_x20 + 0xa8);
  uVar37 = *(uint *)((long)unaff_x20 + 8);
  if ((int)*(uint *)((long)unaff_x20 + 8) <= (int)uVar27) {
    uVar37 = uVar27;
  }
  uVar53 = *(ulong *)((long)unaff_x20 + 0x100);
  uVar32 = 0x18;
  if ((int)(uVar37 + 1) < 0x18) {
    uVar32 = uVar37 + 1;
  }
  uVar46 = uVar24 - uVar53;
  uVar44 = 1L << ((ulong)uVar32 & 0x3f);
  if (*(int *)((long)unaff_x20 + 4) < 4) {
    bVar16 = 0x2ffe < (ulong)(*(long *)((long)unaff_x20 + 0xe8) + *(long *)((long)unaff_x20 + 0xf0))
    ;
  }
  else {
    bVar16 = false;
  }
  if ((((1L << ((ulong)uVar27 & 0x3f)) + uVar46 <= uVar44) &&
      (in_stack_000000e0 == 0 && unaff_w22 == 0)) &&
     ((!bVar16 &&
      ((uVar44 = uVar44 >> 3, *(ulong *)((long)unaff_x20 + 0xf0) < uVar44 &&
       (*in_stack_000000e8 < uVar44)))))) {
    uVar27 = (uint)uVar24;
    uVar32 = (uint)*(ulong *)((long)unaff_x20 + 0x108);
    uVar37 = ((uVar32 & 0x3fffffff) - (uVar32 & 0x40000000)) + 0x80000000;
    if (*(ulong *)((long)unaff_x20 + 0x108) < 0xc0000000) {
      uVar37 = uVar32;
    }
    uVar32 = ((uVar27 & 0x3fffffff) - (uVar27 & 0x40000000)) + 0x80000000;
    if (uVar24 < 0xc0000000) {
      uVar32 = uVar27;
    }
    *(ulong *)((long)unaff_x20 + 0x108) = uVar24;
    if (uVar32 < uVar37) {
      *(undefined4 *)((long)unaff_x20 + 0x1a4) = 0;
    }
AkSoundEnginePINVOKE__CSharp_AkCommunicationSettings_uPoolSize_set:
    *in_stack_000000f8 = 0;
    return 1;
  }
  uVar44 = *(ulong *)((long)unaff_x20 + 0xf8);
  if (uVar44 != 0) {
    lVar29 = *(long *)((long)unaff_x20 + 0xe0);
    lVar34 = *(long *)((long)unaff_x20 + 0xe8);
    puVar50 = (uint *)(lVar29 + lVar34 * 0x10);
    *(long *)((long)unaff_x20 + 0xe8) = lVar34 + 1;
    uVar37 = (uint)uVar44;
    *puVar50 = uVar37;
    *(undefined8 *)(puVar50 + 1) = uVar15;
    *(undefined2 *)((long)puVar50 + 0xe) = 0x10;
    if (5 < uVar44) {
      if (uVar44 < 0x82) {
        uVar37 = ((uint)LZCOUNT((int)(uVar44 - 2)) ^ 0x1f) - 1;
        uVar37 = (int)(uVar44 - 2 >> ((ulong)uVar37 & 0x3f)) + uVar37 * 2 + 2;
      }
      else if (uVar44 < 0x842) {
        uVar37 = ((uint)LZCOUNT(uVar37 - 0x42) ^ 0x1f) + 10;
      }
      else if (uVar44 >> 1 < 0xc21) {
        uVar37 = 0x15;
      }
      else {
        uVar37 = 0x16;
        if (0x5841 < uVar44) {
          uVar37 = 0x17;
        }
      }
    }
    uVar27 = uVar37 >> 3 & 0x1fff;
    *(ushort *)(lVar29 + lVar34 * 0x10 + 0xc) =
         (((ushort)(0x520d40 >> (ulong)((uVar27 * 3 & 0xf) << 1)) & 0xc0) + (short)uVar27 * 0xc0 |
         (ushort)((uVar37 & 7) << 3)) + 0x42;
    *(ulong *)((long)unaff_x20 + 0xf0) = *(long *)((long)unaff_x20 + 0xf0) + uVar44;
    *(undefined8 *)((long)unaff_x20 + 0xf8) = 0;
  }
  if ((uVar24 == uVar53) && (unaff_w22 == 0))
  goto AkSoundEnginePINVOKE__CSharp_AkCommunicationSettings_uPoolSize_set;
  puVar21 = (undefined1 *)FUN_02cb88b0();
  bVar8 = *(byte *)((long)unaff_x20 + 0x162);
  uStack0000000000000108 = (ulong)bVar8;
  puVar48 = (undefined8 *)((long)unaff_x20 + 0x110);
  *puVar21 = *(undefined1 *)((long)unaff_x20 + 0x160);
  uVar46 = uVar46 & 0xffffffff;
  puVar3 = (undefined8 *)((long)unaff_x20 + 0x150);
  puVar21[1] = *(undefined1 *)((long)unaff_x20 + 0x161);
  uVar27 = (uint)*(ulong *)((long)unaff_x20 + 0x100);
  uVar37 = ((uVar27 & 0x3fffffff) - (uVar27 & 0x40000000)) + 0x80000000;
  if (*(ulong *)((long)unaff_x20 + 0x100) < 0xc0000000) {
    uVar37 = uVar27;
  }
  memcpy(&stack0x000001f0,unaff_x20,0x90);
  if (uVar46 == 0) {
    uVar24 = uStack0000000000000108 & 7;
    uStack0000000000000108 = (ulong)(bVar8 + 9) & 0xfffffff8;
    *(ulong *)(puVar21 + (bVar8 >> 3)) = 3L << uVar24 | (ulong)(byte)puVar21[bVar8 >> 3];
    goto LAB_02cb84e4;
  }
  iVar19 = FUN_02cb8618();
  if (iVar19 == 0) {
    *(undefined8 *)((long)unaff_x20 + 0x118) = *(undefined8 *)((long)unaff_x20 + 0x158);
    *puVar48 = *puVar3;
  }
  else {
    uVar9 = *puVar21;
    uVar10 = puVar21[1];
    if (*(int *)((long)unaff_x20 + 4) < 3) {
      FUN_02ce6adc(in_stack_00000100);
    }
    else if (*(int *)((long)unaff_x20 + 4) == 3) {
      FUN_02ce6230(in_stack_00000100);
    }
    else {
      FUN_02ccbd28(&stack0x00000110);
      FUN_02ccbd28();
      FUN_02ccbd28();
      in_stack_000001d8 = 0;
      in_stack_000001d0 = 0;
      in_stack_000001e8 = 0;
      in_stack_000001e0 = 0;
      in_stack_000001b8 = 0;
      in_stack_000001b0 = 0;
      in_stack_000001c8 = 0;
      in_stack_000001c0 = 0;
      in_stack_000001a8 = 0;
      in_stack_000001a0 = 0;
      if (*(int *)((long)unaff_x20 + 4) < 10) {
        uVar24 = (ulong)uVar37;
        if (((*(int *)((long)unaff_x20 + 0x20) == 0) && (0x3f < uVar46)) &&
           (4 < *(int *)((long)unaff_x20 + 4))) {
          uVar53 = uVar46 + uVar24;
          if (*(ulong *)((long)unaff_x20 + 0x18) >> 0x14 != 0) {
            memset(&stack0x00000280,0,0x680);
            uVar44 = uVar24 + 0x40;
            uVar37 = 0;
            uVar55 = uVar24;
            do {
              if (uVar55 + 2 < uVar44) {
                lVar29 = 2;
                bVar13 = *(byte *)((long)unaff_x23 + ((int)uVar55 + 1 & unaff_x21));
                bVar11 = *(byte *)((long)unaff_x23 + (uVar55 & unaff_x21));
                do {
                  bVar12 = bVar13;
                  bVar13 = *(byte *)((long)unaff_x23 +
                                    ((uint)((int)uVar55 + (int)lVar29) & unaff_x21));
                  uVar47 = (ulong)(bVar13 >> 3);
                  lVar34 = (ulong)(byte)(&DAT_01a82488)
                                        [(ulong)(byte)(System_Uri_MoreInfo_TypeInfo
                                                       [(ulong)bVar11 + 0x500] |
                                                      System_Uri_MoreInfo_TypeInfo
                                                      [(ulong)bVar12 + 0x400]) * 4] * 0x80 + 0x280;
                  iVar19 = *(int *)(&stack0x00000280 + uVar47 * 4 + lVar34 + -0x280);
                  lVar29 = lVar29 + 1;
                  *(int *)(&stack0x00000900 + uVar47 * 4) =
                       *(int *)(&stack0x00000900 + uVar47 * 4) + 1;
                  *(int *)(&stack0x00000280 + uVar47 * 4 + lVar34 + -0x280) = iVar19 + 1;
                  bVar11 = bVar12;
                } while (lVar29 != 0x40);
                uVar37 = uVar37 + 0x3e;
              }
              uVar44 = uVar44 + 0x1000;
              uVar55 = uVar55 + 0x1000;
            } while (uVar44 <= uVar53);
            puVar50 = (uint *)&stack0x00000900;
            uVar44 = 0;
            dVar62 = 0.0;
            do {
              uVar55 = (ulong)*puVar50;
              if (*puVar50 < 0x100) {
                dVar60 = (double)(&DAT_01a812e8)[uVar55];
              }
              else {
                dVar60 = log2((double)uVar55);
              }
              uVar47 = (ulong)puVar50[1];
              if (puVar50[1] < 0x100) {
                dVar58 = (double)(&DAT_01a812e8)[uVar47];
              }
              else {
                dVar58 = log2((double)uVar47);
              }
              uVar44 = uVar44 + uVar55 + uVar47;
              puVar50 = puVar50 + 2;
              dVar62 = (dVar62 - dVar60 * (double)uVar55) - dVar58 * (double)uVar47;
            } while (puVar50 < &stack0x00000980);
            if (uVar44 != 0) {
              if (uVar44 < 0x100) {
                dVar60 = (double)(&DAT_01a812e8)[uVar44];
              }
              else {
                dVar60 = log2((double)uVar44);
              }
              dVar62 = dVar62 + dVar60 * (double)uVar44;
            }
            lVar29 = 0;
            dVar60 = 0.0;
            do {
              puVar50 = (uint *)(&stack0x00000280 + lVar29 * 0x80);
              dVar58 = 0.0;
              if (puVar50 < &stack0x00000300 + lVar29 * 0x80) {
                uVar44 = 0;
                dVar58 = 0.0;
                do {
                  uVar55 = (ulong)*puVar50;
                  if (*puVar50 < 0x100) {
                    dVar61 = (double)(&DAT_01a812e8)[uVar55];
                  }
                  else {
                    dVar61 = log2((double)uVar55);
                  }
                  uVar47 = (ulong)puVar50[1];
                  if (puVar50[1] < 0x100) {
                    dVar59 = (double)(&DAT_01a812e8)[uVar47];
                  }
                  else {
                    dVar59 = log2((double)uVar47);
                  }
                  puVar50 = puVar50 + 2;
                  uVar44 = uVar44 + uVar55 + uVar47;
                  dVar58 = (dVar58 - dVar61 * (double)uVar55) - dVar59 * (double)uVar47;
                } while (puVar50 < &stack0x00000300 + lVar29 * 0x80);
                if (uVar44 != 0) {
                  if (uVar44 < 0x100) {
                    dVar61 = (double)(&DAT_01a812e8)[uVar44];
                  }
                  else {
                    dVar61 = log2((double)uVar44);
                  }
                  dVar58 = dVar58 + dVar61 * (double)uVar44;
                }
              }
              lVar29 = lVar29 + 1;
              dVar60 = dVar60 + dVar58;
            } while (lVar29 != 0xd);
            dVar60 = (1.0 / (double)uVar37) * dVar60;
            if ((dVar60 <= 3.0) && (DAT_0137dfb8 <= (1.0 / (double)uVar37) * dVar62 - dVar60))
            goto LAB_02cb8384;
          }
          uVar44 = uVar24 + 0x40;
          if (uVar44 <= uVar53) {
            lVar29 = uVar44 - uVar24;
            do {
              if (uVar24 + 1 < uVar44) {
                iVar19 = *(int *)(&DAT_013dd400 +
                                 ((ulong)(*(byte *)((long)unaff_x23 + (uVar24 & unaff_x21)) >> 4) &
                                 0xc));
                lVar34 = 1;
                do {
                  iVar30 = (int)lVar34;
                  iVar36 = iVar19 * 3;
                  lVar34 = lVar34 + 1;
                  iVar19 = *(int *)(&DAT_013dd400 +
                                   ((ulong)(*(byte *)((long)unaff_x23 +
                                                     ((uint)((int)uVar24 + iVar30) & unaff_x21)) >>
                                           4) & 0xc));
                  iVar36 = iVar19 + iVar36;
                  *(int *)(&stack0x00000280 + (long)iVar36 * 4) =
                       *(int *)(&stack0x00000280 + (long)iVar36 * 4) + 1;
                } while (lVar29 != lVar34);
              }
              uVar44 = uVar44 + 0x1000;
              uVar24 = uVar24 + 0x1000;
            } while (uVar44 <= uVar53);
          }
          lVar29 = 0;
          do {
            uVar37 = (uint)lVar29 & 0xff;
            uVar27 = uVar37 % 6;
            uVar37 = uVar37 % 3;
            iVar19 = *(int *)(&stack0x00000280 + lVar29 * 4);
            iVar36 = *(int *)(&stack0x00000900 + (ulong)uVar27 * 4);
            lVar29 = lVar29 + 1;
            *(int *)(&stack0x00000980 + (ulong)uVar37 * 4) =
                 *(int *)(&stack0x00000980 + (ulong)uVar37 * 4) + iVar19;
            *(int *)(&stack0x00000900 + (ulong)uVar27 * 4) = iVar36 + iVar19;
          } while (lVar29 != 9);
          puVar50 = (uint *)&stack0x00000980;
          lVar29 = 0;
          while( true ) {
            uVar37 = *puVar50;
            if (0xff < uVar37) {
              log2((double)uVar37);
            }
            uVar24 = lVar29 + (ulong)uVar37;
            if (&stack0x0000098c <= puVar50 + 1) break;
            uVar37 = puVar50[1];
            if (0xff < uVar37) {
              log2((double)uVar37);
            }
            lVar29 = uVar24 + uVar37;
            puVar50 = puVar50 + 2;
          }
          if ((uVar24 != 0) && (0xff < uVar24)) {
            log2((double)uVar24);
          }
          puVar50 = (uint *)&stack0x00000900;
          lVar29 = 0;
          puVar52 = (uint *)&stack0x0000090c;
          while( true ) {
            uVar37 = *puVar50;
            if (0xff < uVar37) {
              log2((double)uVar37);
            }
            uVar24 = lVar29 + (ulong)uVar37;
            if (puVar52 <= puVar50 + 1) break;
            uVar37 = puVar50[1];
            if (0xff < uVar37) {
              log2((double)uVar37);
            }
            lVar29 = uVar24 + uVar37;
            puVar50 = puVar50 + 2;
          }
          if ((uVar24 != 0) && (0xff < uVar24)) {
            log2((double)uVar24);
          }
          lVar29 = 0;
          while( true ) {
            uVar37 = *puVar52;
            if (0xff < uVar37) {
              log2((double)uVar37);
            }
            uVar24 = lVar29 + (ulong)uVar37;
            if (&stack0x00000918 <= puVar52 + 1) break;
            uVar37 = puVar52[1];
            if (0xff < uVar37) {
              log2((double)uVar37);
            }
            lVar29 = uVar24 + uVar37;
            puVar52 = puVar52 + 2;
          }
          if ((uVar24 != 0) && (0xff < uVar24)) {
            log2((double)uVar24);
          }
          lVar29 = 0;
          do {
            puVar50 = (uint *)(&stack0x00000280 + lVar29 * 0xc);
            lVar34 = 0;
            while( true ) {
              uVar37 = *puVar50;
              if (0xff < uVar37) {
                log2((double)uVar37);
              }
              uVar24 = lVar34 + (ulong)uVar37;
              if (&stack0x0000028c + lVar29 * 0xc <= puVar50 + 1) break;
              uVar37 = puVar50[1];
              if (0xff < uVar37) {
                log2((double)uVar37);
              }
              lVar34 = uVar24 + uVar37;
              puVar50 = puVar50 + 2;
            }
            if ((uVar24 != 0) && (0xff < uVar24)) {
              log2((double)uVar24);
            }
            lVar29 = lVar29 + 1;
          } while (lVar29 != 3);
        }
LAB_02cb8384:
        FUN_02ca8e48(in_stack_00000100);
      }
      else {
        FUN_02ca8640(in_stack_00000100);
      }
      if (3 < *(int *)((long)unaff_x20 + 4)) {
        FUN_02ca9aa0(in_stack_0000023c,&stack0x00000110);
      }
      FUN_02ce4b70(in_stack_00000100);
      FUN_02ccbd38(in_stack_00000100,&stack0x00000110);
      FUN_02ccbd38(in_stack_00000100,&stack0x00000140);
      FUN_02ccbd38(in_stack_00000100,&stack0x00000170);
      FUN_02cd98fc(in_stack_00000100,in_stack_000001a0);
      in_stack_000001a0 = 0;
      FUN_02cd98fc(in_stack_00000100,in_stack_000001b0);
      in_stack_000001b0 = 0;
      FUN_02cd98fc(in_stack_00000100,in_stack_000001c0);
      in_stack_000001c0 = 0;
      FUN_02cd98fc(in_stack_00000100,in_stack_000001d0);
      in_stack_000001d0 = 0;
      FUN_02cd98fc(in_stack_00000100,in_stack_000001e0);
    }
    if ((ulong)(bVar8 >> 3) <= uVar46 + 4) goto LAB_02cb84e4;
    *(undefined8 *)((long)unaff_x20 + 0x118) = *(undefined8 *)((long)unaff_x20 + 0x158);
    *puVar48 = *puVar3;
    *puVar21 = uVar9;
    puVar21[1] = uVar10;
  }
  FUN_02ce6e54(unaff_w22);
LAB_02cb84e4:
  uVar24 = *(ulong *)((long)unaff_x20 + 0xa8);
  uVar32 = (uint)*(ulong *)((long)unaff_x20 + 0x108);
  bVar8 = puVar21[uStack0000000000000108 >> 3];
  *(byte *)((long)unaff_x20 + 0x162) = (byte)uStack0000000000000108 & 7;
  uVar27 = (uint)uVar24;
  uVar37 = ((uVar32 & 0x3fffffff) - (uVar32 & 0x40000000)) + 0x80000000;
  if (*(ulong *)((long)unaff_x20 + 0x108) < 0xc0000000) {
    uVar37 = uVar32;
  }
  uVar32 = ((uVar27 & 0x3fffffff) - (uVar27 & 0x40000000)) + 0x80000000;
  if (uVar24 < 0xc0000000) {
    uVar32 = uVar27;
  }
  *(ushort *)((long)unaff_x20 + 0x160) = (ushort)bVar8;
  *(ulong *)((long)unaff_x20 + 0x100) = uVar24;
  *(ulong *)((long)unaff_x20 + 0x108) = uVar24;
  if (uVar32 < uVar37) {
    *(undefined4 *)((long)unaff_x20 + 0x1a4) = 0;
  }
  if ((uVar24 != 0) &&
     (*(undefined1 *)((long)unaff_x20 + 0x164) =
           *(undefined1 *)((long)unaff_x23 + (uVar27 - 1 & unaff_x21)), uVar24 != 1)) {
    *(undefined1 *)((long)unaff_x20 + 0x165) =
         *(undefined1 *)((long)unaff_x23 + (uVar27 - 2 & unaff_x21));
  }
  *in_stack_000000e8 = 0;
  in_stack_000000e8[1] = 0;
  *(undefined8 *)((long)unaff_x20 + 0x158) = *(undefined8 *)((long)unaff_x20 + 0x118);
  *puVar3 = *puVar48;
  *in_stack_000000f0 = puVar21;
  *in_stack_000000f8 = uStack0000000000000108 >> 3;
  return 1;
}


