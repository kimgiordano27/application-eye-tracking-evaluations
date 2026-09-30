/*
FUNCTION_NAME: FUN_02cb5aa4
ENTRY_POINT: 02cb5aa4
PROGRAM: hellodot-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_02cb5aa4(void *param_1,int param_2,int param_3,ulong *param_4,undefined8 *param_5)

{
  byte *pbVar1;
  long lVar2;
  int *piVar3;
  undefined8 *puVar4;
  int iVar5;
  char *pcVar6;
  undefined2 *puVar7;
  undefined *puVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  ushort uVar20;
  bool bVar21;
  bool bVar22;
  bool bVar23;
  int iVar24;
  int iVar25;
  undefined8 uVar26;
  void *pvVar27;
  undefined1 *puVar28;
  uint uVar29;
  size_t __n;
  ulong uVar30;
  ulong uVar31;
  ulong uVar32;
  ulong uVar33;
  undefined8 uVar34;
  uint uVar35;
  uint uVar36;
  undefined *puVar37;
  int iVar38;
  undefined4 uVar39;
  ulong *puVar40;
  ulong uVar41;
  long lVar42;
  ushort uVar43;
  uint uVar44;
  long lVar45;
  undefined8 uVar46;
  long *plVar47;
  ulong uVar48;
  int iVar49;
  long lVar50;
  ulong uVar51;
  long lVar52;
  long lVar53;
  ulong uVar54;
  ulong uVar55;
  ulong uVar56;
  ulong uVar57;
  ulong uVar58;
  ulong uVar59;
  ulong uVar60;
  undefined8 *puVar61;
  ulong uVar62;
  ulong *puVar63;
  long *plVar64;
  ulong uVar65;
  uint *puVar66;
  ulong uVar67;
  uint *puVar68;
  ulong uVar69;
  void *pvVar70;
  uint uVar71;
  ulong uVar72;
  char *pcVar73;
  double dVar74;
  double dVar75;
  double dVar76;
  double dVar77;
  double dVar78;
  double dVar79;
  undefined8 uVar80;
  ulong local_918;
  undefined8 local_910 [6];
  undefined1 auStack_8e0 [48];
  undefined1 auStack_8b0 [48];
  undefined8 local_880;
  undefined8 uStack_878;
  undefined8 local_870;
  undefined8 uStack_868;
  undefined8 local_860;
  undefined8 uStack_858;
  undefined8 local_850;
  undefined8 uStack_848;
  undefined8 local_840;
  undefined8 uStack_838;
  undefined1 auStack_830 [76];
  undefined4 local_7e4;
  ulong local_7a0;
  uint uStack_798;
  uint auStack_794 [29];
  ulong auStack_720 [192];
  uint local_120 [36];
  
  uVar65 = *(ulong *)((long)param_1 + 0x108);
  uVar36 = (uint)uVar65;
  uVar44 = ((uVar36 & 0x3fffffff) - (uVar36 & 0x40000000)) + 0x80000000;
  if (uVar65 >> 0x1e < 3) {
    uVar44 = uVar36;
  }
  uVar72 = (ulong)uVar44;
  if (*(int *)((long)param_1 + 0x1998) != 0) {
    return 0;
  }
  lVar45 = *(long *)((long)param_1 + 0xa8);
  uVar65 = lVar45 - uVar65;
  if (param_2 != 0) {
    *(undefined4 *)((long)param_1 + 0x1998) = 1;
  }
  if ((ulong)(1L << ((ulong)*(uint *)((long)param_1 + 0xc) & 0x3f)) < uVar65) {
    return 0;
  }
  uVar35 = *(uint *)((long)param_1 + 4);
  uVar10 = *(uint *)((long)param_1 + 0xb4);
  uVar60 = (ulong)uVar10;
  plVar64 = *(long **)((long)param_1 + 0xd0);
  lVar2 = (long)param_1 + 0x90;
  if (uVar35 == 1) {
    if (*(long *)((long)param_1 + 0x1958) != 0) goto LAB_02cb5bbc;
    uVar26 = FUN_02cd98d8(lVar2,0x80000);
    *(undefined8 *)((long)param_1 + 0x1958) = uVar26;
    uVar26 = FUN_02cd98d8(lVar2,0x20000);
    uVar35 = *(uint *)((long)param_1 + 4);
    *(undefined8 *)((long)param_1 + 0x1960) = uVar26;
  }
  if (uVar35 < 2) {
LAB_02cb5bbc:
    local_7a0 = (ulong)*(byte *)((long)param_1 + 0x162);
    if ((param_2 == 0) && (uVar65 == 0)) {
      uVar65 = 0;
    }
    else {
      puVar28 = (undefined1 *)FUN_02cb88b0(param_1,(int)uVar65 * 2 + 0x1f7);
      uVar65 = uVar65 & 0xffffffff;
      *puVar28 = *(undefined1 *)((long)param_1 + 0x160);
      puVar28[1] = *(undefined1 *)((long)param_1 + 0x161);
      uVar26 = FUN_02cb8904(param_1,*(undefined4 *)((long)param_1 + 4),uVar65,local_910);
      lVar45 = (long)plVar64 + (ulong)(uVar44 & uVar10);
      if (*(int *)((long)param_1 + 4) == 0) {
        FUN_02c877fc(lVar2,lVar45,uVar65,param_2,uVar26,local_910[0],(long)param_1 + 0x15d0,
                     (long)param_1 + 0x1650,(long)param_1 + 0x1950,(long)param_1 + 0x1750,&local_7a0
                     ,puVar28);
      }
      else {
        FUN_02c9d8a0(lVar2,lVar45,uVar65,param_2,*(undefined8 *)((long)param_1 + 0x1958),
                     *(undefined8 *)((long)param_1 + 0x1960),uVar26,local_910[0],&local_7a0,puVar28)
        ;
      }
      uVar65 = local_7a0 >> 3;
      bVar17 = puVar28[uVar65];
      *(byte *)((long)param_1 + 0x162) = (byte)local_7a0 & 7;
      *(undefined8 *)((long)param_1 + 0x108) = *(undefined8 *)((long)param_1 + 0xa8);
      *(ushort *)((long)param_1 + 0x160) = (ushort)bVar17;
      *param_5 = puVar28;
    }
    *param_4 = uVar65;
    return 1;
  }
  puVar40 = (ulong *)((long)param_1 + 0xe8);
  uVar31 = (uVar65 >> 1 & 0x7fffffff) + *puVar40 + 1;
  if (*(ulong *)((long)param_1 + 0xd8) < uVar31) {
    lVar50 = uVar31 + (((uint)(uVar65 >> 2) & 0x3fffffff) + 0x10);
    *(long *)((long)param_1 + 0xd8) = lVar50;
    if (lVar50 == 0) {
      pvVar27 = (void *)0x0;
    }
    else {
      pvVar27 = (void *)FUN_02cd98d8(lVar2,lVar50 * 0x10);
    }
    puVar61 = (undefined8 *)((long)param_1 + 0xe0);
    if ((void *)*puVar61 != (void *)0x0) {
      memcpy(pvVar27,(void *)*puVar61,*puVar40 << 4);
      FUN_02cd98fc(lVar2,*puVar61);
    }
    *puVar61 = pvVar27;
  }
  uVar26 = DAT_0137e290;
  puVar61 = (undefined8 *)((long)param_1 + 0x178);
  bVar22 = param_2 != 0;
  bVar23 = uVar44 == 0;
  uVar31 = (ulong)uVar44;
  uVar69 = uVar65 & 0xffffffff;
  bVar21 = bVar22 && bVar23;
  if (*(long *)((long)param_1 + 0x178) != 0) {
    if (*(int *)((long)param_1 + 0x1a4) == 0) {
      iVar24 = *(int *)((long)param_1 + 400);
      goto LAB_02cb61e4;
    }
    goto LAB_02cb67a4;
  }
  iVar24 = *(int *)((long)param_1 + 4);
  piVar3 = (int *)((long)param_1 + 0x28);
  if (iVar24 < 10) {
    iVar25 = iVar24;
    if (iVar24 == 4) {
      if (0xfffff < *(ulong *)((long)param_1 + 0x18)) {
        iVar25 = 0x36;
      }
      goto AkSoundEngine__PostCode;
    }
    if (iVar24 < 5) goto AkSoundEngine__PostCode;
    if (*(int *)((long)param_1 + 8) < 0x11) {
      iVar38 = 0x29;
      if (8 < iVar24) {
        iVar38 = 0x2a;
      }
      iVar25 = 0x28;
      if (6 < iVar24) {
        iVar25 = iVar38;
      }
      goto AkSoundEngine__PostCode;
    }
    if ((*(int *)((long)param_1 + 8) < 0x13) || (*(ulong *)((long)param_1 + 0x18) < 0x100000)) {
      uVar39 = 10;
      if (8 < iVar24) {
        uVar39 = 0x10;
      }
      uVar9 = 4;
      if (6 < iVar24) {
        uVar9 = uVar39;
      }
      uVar39 = 0xe;
      if (6 < iVar24) {
        uVar39 = 0xf;
      }
      *(undefined4 *)((long)param_1 + 0x38) = uVar9;
      iVar25 = 5;
      *(undefined4 *)((long)param_1 + 0x28) = 5;
      *(undefined4 *)((long)param_1 + 0x2c) = uVar39;
      *(int *)((long)param_1 + 0x30) = iVar24 + -1;
    }
    else {
      *(int *)((long)param_1 + 0x30) = iVar24 + -1;
      *(undefined4 *)((long)param_1 + 0x34) = 5;
      uVar39 = 10;
      if (8 < iVar24) {
        uVar39 = 0x10;
      }
      uVar9 = 4;
      if (6 < iVar24) {
        uVar9 = uVar39;
      }
      *(undefined4 *)((long)param_1 + 0x38) = uVar9;
      *(undefined8 *)((long)param_1 + 0x28) = uVar26;
      iVar25 = 6;
    }
  }
  else {
    iVar25 = 10;
AkSoundEngine__PostCode:
    *piVar3 = iVar25;
  }
  if ((int)*(uint *)((long)param_1 + 8) < 0x19) {
    lVar42 = 0;
    lVar50 = 0x40000;
    switch(iVar25 + -2) {
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
      switch(iVar25) {
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
        if (iVar25 == 0x36) {
          lVar50 = 0x400000;
          goto switchD_02cb5ddc_caseD_0;
        }
      }
    }
    goto switchD_02cb5ddc_caseD_5;
  }
  lVar42 = 0;
  lVar50 = 0x40000;
  switch(iVar25 + -2) {
  case 0:
    break;
  case 1:
    *piVar3 = 0x23;
switchD_02cb5e98_caseD_23:
    lVar50 = 0x4040000;
    break;
  case 2:
switchD_02cb5ddc_caseD_2:
    lVar50 = 0x80000;
    break;
  case 3:
switchD_02cb5ddc_caseD_3:
    lVar50 = 1L << ((ulong)*(uint *)((long)param_1 + 0x2c) & 0x3f);
    lVar50 = ((lVar50 << 2) << ((ulong)*(uint *)((long)param_1 + 0x30) & 0x3f)) + lVar50 * 2;
    goto LAB_02cb5fa0;
  case 4:
    *(undefined4 *)((long)param_1 + 0x28) = 0x41;
    lVar50 = 1L << ((ulong)*(uint *)((long)param_1 + 0x2c) & 0x3f);
    lVar50 = ((lVar50 << 2) << ((ulong)*(uint *)((long)param_1 + 0x30) & 0x3f)) + lVar50 * 2 +
             0x4000000;
    goto LAB_02cb5fa0;
  case 5:
  case 6:
  case 7:
    goto switchD_02cb5ddc_caseD_5;
  case 8:
switchD_02cb5ddc_caseD_8:
    uVar57 = 1L << ((ulong)*(uint *)((long)param_1 + 8) & 0x3f);
    uVar48 = uVar69;
    if ((!bVar22 || !bVar23) || uVar57 <= uVar69) {
      uVar48 = uVar57;
    }
    lVar50 = uVar48 * 8 + 0x80000;
LAB_02cb5fa0:
    if (lVar50 != 0) break;
    lVar42 = 0;
    goto switchD_02cb5ddc_caseD_5;
  default:
    switch(iVar25) {
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
      lVar50 = 0x140000;
      goto switchD_02cb5ddc_caseD_0;
    default:
      if (iVar25 == 0x36) {
        *piVar3 = 0x37;
        lVar50 = 0x4400000;
        goto switchD_02cb5ddc_caseD_0;
      }
    }
    goto switchD_02cb5ddc_caseD_5;
  }
switchD_02cb5ddc_caseD_0:
  lVar42 = FUN_02cd98d8(lVar2,lVar50);
switchD_02cb5ddc_caseD_5:
  *(long *)((long)param_1 + 0x178) = lVar42;
  *(undefined8 *)((long)param_1 + 0x198) = *(undefined8 *)((long)param_1 + 0x30);
  *(undefined8 *)((long)param_1 + 400) = *(undefined8 *)piVar3;
  iVar24 = *(int *)((long)param_1 + 400);
  *(undefined4 *)((long)param_1 + 0x1a0) = *(undefined4 *)((long)param_1 + 0x38);
  if (iVar24 < 0x23) {
    switch(iVar24) {
    case 2:
    case 3:
    case 4:
switchD_02cb6048_caseD_2:
      *(undefined8 **)((long)param_1 + 0x1a8) = puVar61;
      *(long *)((long)param_1 + 0x1b0) = lVar42;
      break;
    case 5:
      lVar50 = 1L << ((ulong)*(uint *)((long)param_1 + 0x194) & 0x3f);
      lVar52 = 1L << ((ulong)*(uint *)((long)param_1 + 0x198) & 0x3f);
      *(uint *)((long)param_1 + 0x1c0) = *(uint *)((long)param_1 + 0x198);
      *(uint *)((long)param_1 + 0x1b8) = 0x20 - *(uint *)((long)param_1 + 0x194);
      *(long *)((long)param_1 + 0x1a8) = lVar50;
      *(long *)((long)param_1 + 0x1b0) = lVar52;
      *(undefined8 **)((long)param_1 + 0x1c8) = puVar61;
      *(long *)((long)param_1 + 0x1d0) = lVar42;
      *(int *)((long)param_1 + 0x1bc) = (int)lVar52 + -1;
      *(long *)((long)param_1 + 0x1d8) = lVar42 + lVar50 * 2;
      *(undefined4 *)((long)param_1 + 0x1c4) = *(undefined4 *)((long)param_1 + 0x1a0);
      break;
    case 6:
      lVar50 = 1L << ((ulong)*(uint *)((long)param_1 + 0x194) & 0x3f);
      *(uint *)((long)param_1 + 0x1cc) = *(uint *)((long)param_1 + 0x198);
      lVar52 = 1L << ((ulong)*(uint *)((long)param_1 + 0x198) & 0x3f);
      *(undefined4 *)((long)param_1 + 0x1d0) = *(undefined4 *)((long)param_1 + 0x1a0);
      *(uint *)((long)param_1 + 0x1b8) = 0x40 - *(uint *)((long)param_1 + 0x194);
      *(undefined8 **)((long)param_1 + 0x1d8) = puVar61;
      *(long *)((long)param_1 + 0x1e0) = lVar42;
      *(long *)((long)param_1 + 0x1a8) = lVar50;
      *(long *)((long)param_1 + 0x1b0) = lVar52;
      *(int *)((long)param_1 + 0x1c8) = (int)lVar52 + -1;
      *(ulong *)((long)param_1 + 0x1c0) =
           0xffffffffffffffff >> ((ulong)(uint)(*(int *)((long)param_1 + 0x19c) * -8) & 0x3f);
      *(long *)((long)param_1 + 0x1e8) = lVar42 + lVar50 * 2;
      break;
    case 10:
      *(long *)((long)param_1 + 0x1c0) = lVar42 + 0x80000;
      uVar35 = -1 << (ulong)(*(uint *)((long)param_1 + 8) & 0x1f);
      *(ulong *)((long)param_1 + 0x1a8) = (ulong)~uVar35;
      *(long *)((long)param_1 + 0x1b0) = lVar42;
      *(uint *)((long)param_1 + 0x1b8) = uVar35 + 1;
    }
  }
  else if (iVar24 < 0x36) {
    switch(iVar24) {
    case 0x23:
switchD_02cb5ffc_caseD_23:
      *(long *)((long)param_1 + 0x210) = lVar42;
      *(undefined8 **)((long)param_1 + 0x218) = puVar61;
      *(undefined4 *)((long)param_1 + 0x220) = 1;
      *(undefined8 *)((long)param_1 + 0x1f8) = *(undefined8 *)((long)param_1 + 400);
      *(undefined8 *)((long)param_1 + 0x1f0) = *(undefined8 *)((long)param_1 + 0x188);
      *(undefined8 *)((long)param_1 + 0x208) = *(undefined8 *)((long)param_1 + 0x1a0);
      *(undefined8 *)((long)param_1 + 0x200) = *(undefined8 *)((long)param_1 + 0x198);
      *(undefined8 *)((long)param_1 + 0x1e8) = *(undefined8 *)((long)param_1 + 0x180);
      *(undefined8 *)((long)param_1 + 0x1e0) = *puVar61;
      *(void **)((long)param_1 + 0x228) = param_1;
      break;
    case 0x28:
    case 0x29:
      *(long *)((long)param_1 + 0x1b8) = lVar42;
      *(undefined8 **)((long)param_1 + 0x1c0) = puVar61;
      iVar25 = 7;
      if (*(int *)((long)param_1 + 4) < 7) {
        iVar25 = 8;
      }
      *(ulong *)((long)param_1 + 0x1b0) =
           (ulong)(uint)(iVar25 << (ulong)(*(int *)((long)param_1 + 4) - 4U & 0x1f));
      break;
    case 0x2a:
      *(long *)((long)param_1 + 0x5b0) = lVar42;
      *(undefined8 **)((long)param_1 + 0x5b8) = puVar61;
      iVar25 = 7;
      if (*(int *)((long)param_1 + 4) < 7) {
        iVar25 = 8;
      }
      *(ulong *)((long)param_1 + 0x5a8) =
           (ulong)(uint)(iVar25 << (ulong)(*(int *)((long)param_1 + 4) - 4U & 0x1f));
    }
  }
  else {
    if (iVar24 == 0x36) goto switchD_02cb6048_caseD_2;
    if (iVar24 == 0x37) goto switchD_02cb5ffc_caseD_23;
    if (iVar24 == 0x41) {
      *(long *)((long)param_1 + 0x248) = lVar42;
      *(undefined8 **)((long)param_1 + 0x250) = puVar61;
      *(undefined8 *)((long)param_1 + 0x240) = *(undefined8 *)((long)param_1 + 0x1a0);
      *(undefined8 *)((long)param_1 + 0x238) = *(undefined8 *)((long)param_1 + 0x198);
      *(undefined8 *)((long)param_1 + 0x230) = *(undefined8 *)((long)param_1 + 400);
      *(undefined8 *)((long)param_1 + 0x228) = *(undefined8 *)((long)param_1 + 0x188);
      *(undefined8 *)((long)param_1 + 0x220) = *(undefined8 *)((long)param_1 + 0x180);
      *(undefined8 *)((long)param_1 + 0x218) = *puVar61;
      *(undefined4 *)((long)param_1 + 600) = 1;
      *(void **)((long)param_1 + 0x260) = param_1;
    }
  }
  *(undefined4 *)((long)param_1 + 0x1a4) = 0;
LAB_02cb61e4:
  if (iVar24 < 0x23) {
    switch(iVar24) {
    case 2:
      pvVar27 = *(void **)((long)param_1 + 0x1b0);
      if ((uVar69 < 0x801) && (plVar47 = plVar64, uVar48 = uVar69, bVar22 && bVar23)) {
        for (; uVar48 != 0; uVar48 = uVar48 - 1) {
          *(undefined4 *)
           ((long)pvVar27 + ((ulong)(*plVar47 * -0x42e1ca5843000000) >> 0x2e & 0x3fffc)) = 0;
          plVar47 = (long *)((long)plVar47 + 1);
        }
      }
      else {
LAB_02cb653c:
        __n = 0x40000;
LAB_02cb678c:
        memset(pvVar27,0,__n);
      }
      break;
    case 3:
      pvVar27 = *(void **)((long)param_1 + 0x1b0);
      if ((0x800 < uVar69) || (plVar47 = plVar64, uVar48 = uVar69, !bVar22 || !bVar23))
      goto LAB_02cb653c;
      for (; uVar48 != 0; uVar48 = uVar48 - 1) {
        lVar50 = *plVar47;
        *(undefined4 *)((long)pvVar27 + ((ulong)(lVar50 * -0x42e1ca5843000000) >> 0x30) * 4) = 0;
        *(undefined4 *)
         ((long)pvVar27 +
         ((ulong)((ushort)((ulong)(lVar50 * -0x42e1ca5843000000) >> 0x30) + 8) & 0xffff) * 4) = 0;
        plVar47 = (long *)((long)plVar47 + 1);
      }
      break;
    case 4:
      pvVar27 = *(void **)((long)param_1 + 0x1b0);
      if ((0x1000 < uVar69) || (!bVar22 || !bVar23)) {
        __n = 0x80000;
        goto LAB_02cb678c;
      }
      if (uVar69 != 0) {
        uVar48 = 0;
        do {
          lVar50 = *(long *)((long)plVar64 + uVar48);
          iVar24 = 0;
          do {
            uVar35 = (uint)((ulong)(lVar50 * -0x42e1ca5843000000) >> 0x2f) + iVar24;
            iVar24 = iVar24 + 8;
            *(undefined4 *)((long)pvVar27 + (ulong)(uVar35 & 0x1ffff) * 4) = 0;
          } while (iVar24 != 0x20);
          uVar48 = uVar48 + 1;
        } while (uVar48 != uVar69);
      }
      break;
    case 5:
      pvVar27 = *(void **)((long)param_1 + 0x1d0);
      if ((*(ulong *)((long)param_1 + 0x1a8) >> 6 < uVar69) || (!bVar22 || !bVar23)) {
        __n = *(ulong *)((long)param_1 + 0x1a8) << 1;
        goto LAB_02cb678c;
      }
      if (uVar69 != 0) {
        uVar35 = *(uint *)((long)param_1 + 0x1b8);
        plVar47 = plVar64;
        uVar48 = uVar69;
        do {
          uVar48 = uVar48 - 1;
          *(undefined2 *)
           ((long)pvVar27 +
           (ulong)((uint)((int)*plVar47 * 0x1e35a7bd) >> ((ulong)uVar35 & 0x3f)) * 2) = 0;
          plVar47 = (long *)((long)plVar47 + 1);
        } while (uVar48 != 0);
      }
      break;
    case 6:
      FUN_02cb87e0((long)param_1 + 0x1a8,bVar21,uVar69,plVar64);
      break;
    case 10:
      lVar42 = *(long *)((long)param_1 + 0x1b0);
      uVar39 = *(undefined4 *)((long)param_1 + 0x1b8);
      lVar50 = 0;
      do {
        puVar4 = (undefined8 *)(lVar42 + lVar50);
        puVar4[1] = CONCAT44(uVar39,uVar39);
        *puVar4 = CONCAT44(uVar39,uVar39);
        lVar50 = lVar50 + 0x10;
      } while (lVar50 != 0x80000);
    }
    goto switchD_02cb6218_caseD_24;
  }
  if (0x35 < iVar24) {
    if (iVar24 == 0x36) {
      FUN_02cb8844((long)param_1 + 0x1a8,bVar21,uVar69,plVar64);
    }
    else if (iVar24 == 0x37) {
      if (*(int *)((long)param_1 + 0x220) != 0) {
        *(undefined4 *)((long)param_1 + 0x220) = 0;
        pvVar27 = (void *)(*(long *)((long)param_1 + 0x210) + 0x400000);
        *(undefined8 **)((long)param_1 + 0x1a8) = *(undefined8 **)((long)param_1 + 0x218);
        *(void **)((long)param_1 + 0x1e0) = pvVar27;
        uVar26 = DAT_0137f228;
        uVar34 = **(undefined8 **)((long)param_1 + 0x218);
        *(undefined4 *)((long)param_1 + 0x1b8) = 0;
        *(void **)((long)param_1 + 0x1c0) = pvVar27;
        *(undefined8 *)((long)param_1 + 0x1c8) = 0;
        *(undefined8 *)((long)param_1 + 0x1b0) = uVar34;
        *(undefined8 *)((long)param_1 + 0x1d4) = uVar26;
        memset(pvVar27,0xff,0x4000000);
      }
      FUN_02cb8844((long)param_1 + 0x1a8,bVar21,uVar69,plVar64);
      if (0x1f < uVar69) {
        iVar24 = 0;
        uVar48 = 0;
        do {
          pbVar1 = (byte *)((long)plVar64 + uVar48);
          bVar21 = uVar48 < 0x1c;
          uVar48 = uVar48 + 4;
          iVar24 = (uint)*pbVar1 + iVar24 * *(int *)((long)param_1 + 0x1d4) + 1;
        } while (bVar21);
        goto LAB_02cb75a0;
      }
    }
    else if (iVar24 == 0x41) {
      if (*(int *)((long)param_1 + 600) != 0) {
        *(undefined4 *)((long)param_1 + 600) = 0;
        plVar47 = *(long **)((long)param_1 + 0x250);
        lVar50 = 1L << ((ulong)*(uint *)(*(long *)((long)param_1 + 0x260) + 0x2c) & 0x3f);
        pvVar27 = (void *)(*(long *)((long)param_1 + 0x248) +
                          ((lVar50 << 2) <<
                          ((ulong)*(uint *)(*(long *)((long)param_1 + 0x260) + 0x30) & 0x3f)) +
                          lVar50 * 2);
        *(long **)((long)param_1 + 0x1d8) = plVar47;
        *(void **)((long)param_1 + 0x218) = pvVar27;
        uVar35 = *(uint *)((long)plVar47 + 0x1c);
        *(uint *)((long)param_1 + 0x1b8) = 0x40 - uVar35;
        iVar24 = *(int *)((long)plVar47 + 0x24);
        lVar50 = 1L << ((ulong)uVar35 & 0x3f);
        *(long *)((long)param_1 + 0x1a8) = lVar50;
        *(ulong *)((long)param_1 + 0x1c0) =
             0xffffffffffffffff >> ((ulong)(uint)(iVar24 * -8) & 0x3f);
        uVar26 = DAT_0137dfa0;
        uVar35 = *(uint *)(plVar47 + 4);
        *(uint *)((long)param_1 + 0x1cc) = uVar35;
        lVar42 = 1L << ((ulong)uVar35 & 0x3f);
        *(long *)((long)param_1 + 0x1b0) = lVar42;
        *(int *)((long)param_1 + 0x1c8) = (int)lVar42 + -1;
        *(int *)((long)param_1 + 0x1d0) = (int)plVar47[5];
        lVar42 = *plVar47;
        *(undefined4 *)((long)param_1 + 0x1f0) = 0;
        *(void **)((long)param_1 + 0x1f8) = pvVar27;
        *(undefined8 *)((long)param_1 + 0x200) = 0;
        *(long *)((long)param_1 + 0x1e0) = lVar42;
        *(long *)((long)param_1 + 0x1e8) = lVar42 + lVar50 * 2;
        *(undefined8 *)((long)param_1 + 0x20c) = uVar26;
        memset(pvVar27,0xff,0x4000000);
      }
      FUN_02cb87e0((long)param_1 + 0x1a8,bVar21,uVar69,plVar64);
      if (0x1f < uVar69) {
        iVar24 = 0;
        lVar50 = 0;
        do {
          pbVar1 = (byte *)((long)plVar64 + lVar50);
          lVar50 = lVar50 + 1;
          iVar24 = (uint)*pbVar1 + iVar24 * *(int *)((long)param_1 + 0x20c) + 1;
        } while (lVar50 != 0x20);
        *(int *)((long)param_1 + 0x1f0) = iVar24;
      }
    }
    goto switchD_02cb6218_caseD_24;
  }
  switch(iVar24) {
  case 0x23:
    if (*(int *)((long)param_1 + 0x220) == 0) {
      pvVar27 = *(void **)((long)param_1 + 0x1b0);
    }
    else {
      *(undefined4 *)((long)param_1 + 0x220) = 0;
      pvVar70 = (void *)(*(long *)((long)param_1 + 0x210) + 0x40000);
      *(undefined8 **)((long)param_1 + 0x1a8) = *(undefined8 **)((long)param_1 + 0x218);
      *(void **)((long)param_1 + 0x1e0) = pvVar70;
      uVar26 = DAT_0137f228;
      pvVar27 = (void *)**(undefined8 **)((long)param_1 + 0x218);
      *(undefined4 *)((long)param_1 + 0x1b8) = 0;
      *(void **)((long)param_1 + 0x1c0) = pvVar70;
      *(undefined8 *)((long)param_1 + 0x1c8) = 0;
      *(void **)((long)param_1 + 0x1b0) = pvVar27;
      *(undefined8 *)((long)param_1 + 0x1d4) = uVar26;
      memset(pvVar70,0xff,0x4000000);
    }
    if ((uVar69 < 0x801) && (bVar22 && bVar23)) {
      plVar47 = plVar64;
      uVar48 = uVar69;
      if (uVar69 == 0) break;
      do {
        lVar50 = *plVar47;
        uVar48 = uVar48 - 1;
        *(undefined4 *)((long)pvVar27 + ((ulong)(lVar50 * -0x42e1ca5843000000) >> 0x30) * 4) = 0;
        *(undefined4 *)
         ((long)pvVar27 +
         ((ulong)((ushort)((ulong)(lVar50 * -0x42e1ca5843000000) >> 0x30) + 8) & 0xffff) * 4) = 0;
        plVar47 = (long *)((long)plVar47 + 1);
      } while (uVar48 != 0);
    }
    else {
      memset(pvVar27,0,0x40000);
    }
    if (0x1f < uVar69) {
      iVar24 = 0;
      uVar48 = 0;
      do {
        pbVar1 = (byte *)((long)plVar64 + uVar48);
        bVar21 = uVar48 < 0x1c;
        uVar48 = uVar48 + 4;
        iVar24 = (uint)*pbVar1 + iVar24 * *(int *)((long)param_1 + 0x1d4) + 1;
      } while (bVar21);
LAB_02cb75a0:
      *(int *)((long)param_1 + 0x1b8) = iVar24;
    }
    break;
  case 0x28:
    pvVar70 = *(void **)((long)param_1 + 0x1b8);
    pvVar27 = (void *)((long)pvVar70 + 0x20000);
    if ((uVar69 < 0x201) && (plVar47 = plVar64, uVar48 = uVar69, bVar22 && bVar23)) {
      for (; uVar48 != 0; uVar48 = uVar48 - 1) {
        uVar35 = (uint)((int)*plVar47 * 0x1e35a7bd) >> 0x11;
        *(undefined4 *)((long)pvVar70 + (ulong)uVar35 * 4) = 0xcccccccc;
        *(undefined2 *)((long)pvVar27 + (ulong)uVar35 * 2) = 0xcccc;
        plVar47 = (long *)((long)plVar47 + 1);
      }
    }
    else {
LAB_02cb6654:
      memset(pvVar70,0xcc,0x20000);
      memset(pvVar27,0,0x10000);
    }
    goto LAB_02cb6674;
  case 0x29:
    pvVar70 = *(void **)((long)param_1 + 0x1b8);
    pvVar27 = (void *)((long)pvVar70 + 0x20000);
    if ((0x200 < uVar69) || (plVar47 = plVar64, uVar48 = uVar69, !bVar22 || !bVar23))
    goto LAB_02cb6654;
    for (; uVar48 != 0; uVar48 = uVar48 - 1) {
      uVar35 = (uint)((int)*plVar47 * 0x1e35a7bd) >> 0x11;
      *(undefined4 *)((long)pvVar70 + (ulong)uVar35 * 4) = 0xcccccccc;
      *(undefined2 *)((long)pvVar27 + (ulong)uVar35 * 2) = 0xcccc;
      plVar47 = (long *)((long)plVar47 + 1);
    }
LAB_02cb6674:
    memset((void *)((long)pvVar70 + 0x30000),0,0x10000);
    *(undefined2 *)((long)param_1 + 0x1a8) = 0;
    break;
  case 0x2a:
    pvVar70 = *(void **)((long)param_1 + 0x5b0);
    pvVar27 = (void *)((long)param_1 + 0x1a8);
    if ((uVar69 < 0x201) && (plVar47 = plVar64, uVar48 = uVar69, bVar22 && bVar23)) {
      for (; uVar48 != 0; uVar48 = uVar48 - 1) {
        uVar35 = (uint)((int)*plVar47 * 0x1e35a7bd) >> 0x11;
        *(undefined4 *)((long)pvVar70 + (ulong)uVar35 * 4) = 0xcccccccc;
        *(undefined2 *)((long)pvVar70 + 0x20000 + (ulong)uVar35 * 2) = 0xcccc;
        plVar47 = (long *)((long)plVar47 + 1);
      }
    }
    else {
      memset(pvVar70,0xcc,0x20000);
      memset((void *)((long)pvVar70 + 0x20000),0,0x10000);
    }
    memset((void *)((long)pvVar70 + 0x30000),0,0x10000);
    __n = 0x400;
    goto LAB_02cb678c;
  }
switchD_02cb6218_caseD_24:
  if (uVar44 == 0) {
    *(undefined8 *)((long)param_1 + 0x180) = 0;
    *(undefined8 *)((long)param_1 + 0x188) = 0;
  }
  *(undefined4 *)((long)param_1 + 0x1a4) = 1;
LAB_02cb67a4:
  iVar24 = *(int *)((long)param_1 + 400);
  if (iVar24 < 0x23) {
    switch(iVar24) {
    case 2:
      if ((6 < uVar69) && (2 < uVar44)) {
        lVar50 = *(long *)((long)param_1 + 0x1b0);
        *(int *)(lVar50 + ((ulong)(*(long *)((long)plVar64 + (uVar31 - 3 & uVar60)) *
                                  -0x42e1ca5843000000) >> 0x2e & 0x3fffc)) = (int)(uVar31 - 3);
        *(int *)(lVar50 + ((ulong)(*(long *)((long)plVar64 + (uVar31 - 2 & uVar60)) *
                                  -0x42e1ca5843000000) >> 0x2e & 0x3fffc)) = (int)(uVar31 - 2);
        *(int *)(lVar50 + ((ulong)(*(long *)((long)plVar64 + (uVar31 - 1 & uVar60)) *
                                  -0x42e1ca5843000000) >> 0x2e & 0x3fffc)) = (int)(uVar31 - 1);
      }
      break;
    case 3:
      if ((6 < uVar69) && (2 < uVar44)) {
        lVar50 = *(long *)((long)param_1 + 0x1b0);
        uVar35 = (uint)(uVar31 - 3);
        *(uint *)(lVar50 + ((ulong)((uint)(ushort)((ulong)(*(long *)((long)plVar64 +
                                                                    (uVar31 - 3 & uVar60)) *
                                                          -0x42e1ca5843000000) >> 0x30) +
                                   (uVar35 & 8)) & 0xffff) * 4) = uVar35;
        uVar35 = (uint)(uVar31 - 2);
        *(uint *)(lVar50 + ((ulong)((uint)(ushort)((ulong)(*(long *)((long)plVar64 +
                                                                    (uVar31 - 2 & uVar60)) *
                                                          -0x42e1ca5843000000) >> 0x30) +
                                   (uVar35 & 8)) & 0xffff) * 4) = uVar35;
        uVar31 = (ulong)((uint)(ushort)((ulong)(*(long *)((long)plVar64 + (uVar31 - 1 & uVar60)) *
                                               -0x42e1ca5843000000) >> 0x30) +
                        ((uint)(uVar31 - 1) & 8)) & 0xffff;
LAB_02cb7210:
        *(uint *)(lVar50 + uVar31 * 4) = uVar44 - 1;
      }
      break;
    case 4:
      if ((6 < uVar69) && (2 < uVar44)) {
        lVar50 = *(long *)((long)param_1 + 0x1b0);
        uVar35 = (uint)(uVar31 - 3);
        *(uint *)(lVar50 + ((ulong)((uint)((ulong)(*(long *)((long)plVar64 + (uVar31 - 3 & uVar60))
                                                  * -0x42e1ca5843000000) >> 0x2f) + (uVar35 & 0x18))
                           & 0x1ffff) * 4) = uVar35;
        uVar35 = (uint)(uVar31 - 2);
        *(uint *)(lVar50 + ((ulong)((uint)((ulong)(*(long *)((long)plVar64 + (uVar31 - 2 & uVar60))
                                                  * -0x42e1ca5843000000) >> 0x2f) + (uVar35 & 0x18))
                           & 0x1ffff) * 4) = uVar35;
        uVar31 = (ulong)((uint)((ulong)(*(long *)((long)plVar64 + (uVar31 - 1 & uVar60)) *
                                       -0x42e1ca5843000000) >> 0x2f) + ((uint)(uVar31 - 1) & 0x18))
                 & 0x1ffff;
        goto LAB_02cb7210;
      }
      break;
    case 5:
      if ((2 < uVar69) && (2 < uVar44)) {
        uVar69 = (ulong)*(uint *)((long)param_1 + 0x1b8);
        lVar50 = *(long *)((long)param_1 + 0x1d0);
        lVar42 = *(long *)((long)param_1 + 0x1d8);
        uVar11 = (uint)(*(int *)((long)plVar64 + (uVar31 - 3 & uVar60)) * 0x1e35a7bd) >>
                 (uVar69 & 0x3f);
        uVar48 = (ulong)*(uint *)((long)param_1 + 0x1bc);
        uVar35 = *(uint *)((long)param_1 + 0x1c0);
        uVar20 = *(ushort *)(lVar50 + (ulong)uVar11 * 2);
        *(int *)(lVar42 + ((ulong)(uVar11 << (ulong)(uVar35 & 0x1f)) + (uVar48 & uVar20)) * 4) =
             (int)(uVar31 - 3);
        *(ushort *)(lVar50 + (ulong)uVar11 * 2) = uVar20 + 1;
        uVar11 = (uint)(*(int *)((long)plVar64 + (uVar31 - 2 & uVar60)) * 0x1e35a7bd) >>
                 (uVar69 & 0x3f);
        uVar20 = *(ushort *)(lVar50 + (ulong)uVar11 * 2);
        *(int *)(lVar42 + ((ulong)(uVar11 << (ulong)(uVar35 & 0x1f)) + (uVar48 & uVar20)) * 4) =
             (int)(uVar31 - 2);
        *(ushort *)(lVar50 + (ulong)uVar11 * 2) = uVar20 + 1;
        uVar11 = (uint)(*(int *)((long)plVar64 + (uVar31 - 1 & uVar60)) * 0x1e35a7bd) >>
                 (uVar69 & 0x3f);
        uVar20 = *(ushort *)(lVar50 + (ulong)uVar11 * 2);
        *(int *)(lVar42 + ((ulong)(uVar11 << (ulong)(uVar35 & 0x1f)) + (uVar48 & uVar20)) * 4) =
             (int)(uVar31 - 1);
        *(ushort *)(lVar50 + (ulong)uVar11 * 2) = uVar20 + 1;
      }
      break;
    case 6:
      if ((6 < uVar69) && (2 < uVar44)) {
        uVar48 = *(ulong *)((long)param_1 + 0x1c0);
        uVar57 = (ulong)*(uint *)((long)param_1 + 0x1b8);
        lVar50 = *(long *)((long)param_1 + 0x1e0);
        lVar42 = *(long *)((long)param_1 + 0x1e8);
        uVar69 = (*(ulong *)((long)plVar64 + (uVar31 - 3 & uVar60)) & uVar48) * 0x1fe35a7bd3579bd3
                 >> (uVar57 & 0x3f);
        uVar20 = *(ushort *)(lVar50 + (uVar69 & 0xffffffff) * 2);
        uVar59 = (ulong)*(uint *)((long)param_1 + 0x1c8);
        uVar35 = *(uint *)((long)param_1 + 0x1cc);
        *(ushort *)(lVar50 + (uVar69 & 0xffffffff) * 2) = uVar20 + 1;
        *(int *)(lVar42 + ((ulong)(uint)((int)uVar69 << (ulong)(uVar35 & 0x1f)) + (uVar59 & uVar20))
                          * 4) = (int)(uVar31 - 3);
        uVar69 = (*(ulong *)((long)plVar64 + (uVar31 - 2 & uVar60)) & uVar48) * 0x1fe35a7bd3579bd3
                 >> (uVar57 & 0x3f);
        uVar20 = *(ushort *)(lVar50 + (uVar69 & 0xffffffff) * 2);
        *(ushort *)(lVar50 + (uVar69 & 0xffffffff) * 2) = uVar20 + 1;
        *(int *)(lVar42 + ((ulong)(uint)((int)uVar69 << (ulong)(uVar35 & 0x1f)) + (uVar59 & uVar20))
                          * 4) = (int)(uVar31 - 2);
        uVar69 = (*(ulong *)((long)plVar64 + (uVar31 - 1 & uVar60)) & uVar48) * 0x1fe35a7bd3579bd3
                 >> (uVar57 & 0x3f);
        uVar20 = *(ushort *)(lVar50 + (uVar69 & 0xffffffff) * 2);
        *(ushort *)(lVar50 + (uVar69 & 0xffffffff) * 2) = uVar20 + 1;
        *(int *)(lVar42 + ((ulong)(uint)((int)uVar69 << (ulong)(uVar35 & 0x1f)) + (uVar59 & uVar20))
                          * 4) = (int)(uVar31 - 1);
      }
      break;
    case 10:
      if ((2 < uVar69) && (0x7f < uVar44)) {
        uVar48 = uVar31 - 0x7f;
        uVar57 = uVar31;
        if (uVar48 + uVar69 <= uVar31) {
          uVar57 = uVar48 + uVar69;
        }
        if (uVar48 < uVar57) {
          uVar69 = *(ulong *)((long)param_1 + 0x1a8);
          lVar50 = *(long *)((long)param_1 + 0x1b0);
          lVar42 = *(long *)((long)param_1 + 0x1c0);
          do {
            uVar54 = uVar48 & uVar60;
            uVar59 = uVar31 - uVar48;
            if (uVar59 < 0x10) {
              uVar59 = 0xf;
            }
            uVar35 = (uint)(*(int *)((long)plVar64 + uVar54) * 0x1e35a7bd) >> 0xf;
            uVar33 = (ulong)*(uint *)(lVar50 + (ulong)uVar35 * 4);
            uVar58 = (uVar48 & uVar69) << 1;
            uVar56 = (uVar48 & uVar69) << 1 | 1;
            uVar55 = uVar48 - uVar33;
            *(int *)(lVar50 + (ulong)uVar35 * 4) = (int)uVar48;
            if (uVar55 != 0) {
              uVar30 = 0;
              uVar32 = 0;
              lVar52 = 0x40;
              do {
                if ((uVar69 - uVar59 < uVar55) || (lVar52 == 0)) break;
                uVar55 = uVar32;
                if (uVar30 <= uVar32) {
                  uVar55 = uVar30;
                }
                uVar51 = 0x80 - uVar55;
                uVar41 = uVar51 >> 3;
                pcVar6 = (char *)((long)plVar64 + uVar55 + (uVar33 & uVar60));
                if (uVar41 == 0) {
                  uVar67 = 0;
                  pcVar73 = pcVar6;
                }
                else {
                  uVar67 = uVar51 & 0xfffffffffffffff8;
                  lVar53 = 0;
                  pcVar73 = pcVar6 + uVar67;
                  do {
                    uVar62 = *(ulong *)((long)plVar64 + lVar53 + uVar55 + uVar54);
                    if (*(ulong *)(pcVar6 + lVar53) != uVar62) {
                      uVar62 = uVar62 ^ *(ulong *)(pcVar6 + lVar53);
                      uVar51 = (uVar62 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                               (uVar62 & 0x5555555555555555) << 1;
                      uVar51 = (uVar51 & 0xcccccccccccccccc) >> 2 |
                               (uVar51 & 0x3333333333333333) << 2;
                      uVar51 = (uVar51 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                               (uVar51 & 0xf0f0f0f0f0f0f0f) << 4;
                      uVar51 = (uVar51 & 0xff00ff00ff00ff00) >> 8 | (uVar51 & 0xff00ff00ff00ff) << 8
                      ;
                      uVar51 = (uVar51 & 0xffff0000ffff0000) >> 0x10 |
                               (uVar51 & 0xffff0000ffff) << 0x10;
                      uVar41 = lVar53 + ((ulong)LZCOUNT(uVar51 >> 0x20 | uVar51 << 0x20) >> 3);
                      goto LAB_02cb6e70;
                    }
                    uVar41 = uVar41 - 1;
                    lVar53 = lVar53 + 8;
                  } while (uVar41 != 0);
                }
                uVar51 = uVar51 & 7;
                uVar41 = uVar67;
                if (uVar51 != 0) {
                  uVar62 = uVar67 | uVar51;
                  do {
                    uVar41 = uVar67;
                    if (*(char *)((long)plVar64 + uVar67 + uVar55 + uVar54) != *pcVar73) break;
                    pcVar73 = pcVar73 + 1;
                    uVar51 = uVar51 - 1;
                    uVar67 = uVar67 + 1;
                    uVar41 = uVar62;
                  } while (uVar51 != 0);
                }
LAB_02cb6e70:
                uVar41 = uVar41 + uVar55;
                if (0x7f < uVar41) {
                  *(undefined4 *)(lVar42 + uVar58 * 4) =
                       *(undefined4 *)(lVar42 + (uVar33 & uVar69) * 8);
                  uVar39 = *(undefined4 *)(lVar42 + ((uVar33 & uVar69) << 3 | 4));
                  goto LAB_02cb6f38;
                }
                if (*(byte *)((long)plVar64 + uVar41 + (uVar33 & uVar60)) <
                    *(byte *)((long)plVar64 + uVar41 + uVar54)) {
                  *(int *)(lVar42 + uVar58 * 4) = (int)uVar33;
                  uVar55 = (uVar33 & uVar69) << 1 | 1;
                  uVar32 = uVar41;
                  uVar58 = uVar55;
                }
                else {
                  *(int *)(lVar42 + uVar56 * 4) = (int)uVar33;
                  uVar55 = (uVar33 & uVar69) << 1;
                  uVar30 = uVar41;
                  uVar56 = uVar55;
                }
                uVar33 = (ulong)*(uint *)(lVar42 + uVar55 * 4);
                lVar52 = lVar52 + -1;
                uVar55 = uVar48 - uVar33;
              } while (uVar55 != 0);
            }
            uVar39 = *(undefined4 *)((long)param_1 + 0x1b8);
            *(undefined4 *)(lVar42 + uVar58 * 4) = uVar39;
LAB_02cb6f38:
            uVar48 = uVar48 + 1;
            *(undefined4 *)(lVar42 + uVar56 * 4) = uVar39;
          } while (uVar48 != uVar57);
        }
      }
    }
  }
  else if (iVar24 < 0x36) {
    switch(iVar24) {
    case 0x23:
      if ((6 < uVar69) && (2 < uVar44)) {
        lVar50 = *(long *)((long)param_1 + 0x1b0);
        uVar35 = (uint)(uVar31 - 3);
        *(uint *)(lVar50 + ((ulong)((uint)(ushort)((ulong)(*(long *)((long)plVar64 +
                                                                    (uVar31 - 3 & uVar60)) *
                                                          -0x42e1ca5843000000) >> 0x30) +
                                   (uVar35 & 8)) & 0xffff) * 4) = uVar35;
        uVar35 = (uint)(uVar31 - 2);
        *(uint *)(lVar50 + ((ulong)((uint)(ushort)((ulong)(*(long *)((long)plVar64 +
                                                                    (uVar31 - 2 & uVar60)) *
                                                          -0x42e1ca5843000000) >> 0x30) +
                                   (uVar35 & 8)) & 0xffff) * 4) = uVar35;
        uVar35 = (uint)(uVar31 - 1);
        *(uint *)(lVar50 + ((ulong)((uint)(ushort)((ulong)(*(long *)((long)plVar64 +
                                                                    (uVar31 - 1 & uVar60)) *
                                                          -0x42e1ca5843000000) >> 0x30) +
                                   (uVar35 & 8)) & 0xffff) * 4) = uVar35;
      }
      if ((uVar44 & 3) != 0) {
        uVar57 = 4 - (uVar31 & 3);
        bVar21 = uVar57 <= uVar69;
        uVar48 = uVar69 - uVar57;
        uVar69 = 0;
        if (bVar21) {
          uVar69 = uVar48;
        }
        uVar31 = uVar57 + uVar31;
      }
      uVar48 = uVar60 - (uVar31 & uVar60);
      if (uVar69 <= uVar48) {
        uVar48 = uVar69;
      }
      if (0x1f < uVar48) {
        iVar24 = 0;
        uVar69 = 0;
        do {
          lVar50 = uVar69 + (uVar31 & uVar60);
          bVar21 = uVar69 < 0x1c;
          uVar69 = uVar69 + 4;
          iVar24 = (uint)*(byte *)((long)plVar64 + lVar50) +
                   iVar24 * *(int *)((long)param_1 + 0x1d4) + 1;
        } while (bVar21);
LAB_02cb7304:
        *(int *)((long)param_1 + 0x1b8) = iVar24;
      }
LAB_02cb7308:
      *(ulong *)((long)param_1 + 0x1c8) = uVar31;
      break;
    case 0x28:
    case 0x29:
      if ((2 < uVar69) && (2 < uVar44)) {
        uVar48 = uVar31 - 3;
        lVar52 = *(long *)((long)param_1 + 0x1b8);
        uVar11 = (uint)(*(int *)((long)plVar64 + (uVar48 & uVar60)) * 0x1e35a7bd) >> 0x11;
        uVar35 = *(uint *)(lVar52 + (ulong)uVar11 * 4);
        uVar20 = *(ushort *)((long)param_1 + 0x1a8);
        lVar50 = lVar52 + 0x30000;
        *(char *)(lVar50 + (uVar48 & 0xffff)) = (char)uVar11;
        uVar69 = uVar48 - uVar35;
        lVar42 = lVar52 + 0x40000;
        puVar7 = (undefined2 *)(lVar42 + (ulong)uVar20 * 4);
        if (0xfffe < uVar69) {
          uVar69 = 0xffff;
        }
        lVar53 = lVar52 + 0x20000;
        *puVar7 = (short)uVar69;
        uVar57 = uVar31 - 2;
        puVar7[1] = *(undefined2 *)(lVar53 + (ulong)uVar11 * 2);
        *(int *)(lVar52 + (ulong)uVar11 * 4) = (int)uVar48;
        *(ushort *)(lVar53 + (ulong)uVar11 * 2) = uVar20;
        puVar7 = (undefined2 *)(lVar42 + (ulong)(ushort)(uVar20 + 1) * 4);
        uVar11 = (uint)(*(int *)((long)plVar64 + (uVar57 & uVar60)) * 0x1e35a7bd) >> 0x11;
        uVar35 = *(uint *)(lVar52 + (ulong)uVar11 * 4);
        *(char *)(lVar50 + (uVar57 & 0xffff)) = (char)uVar11;
        uVar69 = uVar57 - uVar35;
        if (0xfffe < uVar69) {
          uVar69 = 0xffff;
        }
        *puVar7 = (short)uVar69;
        uVar31 = uVar31 - 1;
        puVar7[1] = *(undefined2 *)(lVar53 + (ulong)uVar11 * 2);
        *(int *)(lVar52 + (ulong)uVar11 * 4) = (int)uVar57;
        *(ushort *)(lVar53 + (ulong)uVar11 * 2) = uVar20 + 1;
        iVar24 = *(int *)((long)plVar64 + (uVar31 & uVar60));
        *(ushort *)((long)param_1 + 0x1a8) = uVar20 + 3;
        uVar11 = (uint)(iVar24 * 0x1e35a7bd) >> 0x11;
        uVar35 = *(uint *)(lVar52 + (ulong)uVar11 * 4);
        puVar7 = (undefined2 *)(lVar42 + (ulong)(ushort)(uVar20 + 2) * 4);
        *(char *)(lVar50 + (uVar31 & 0xffff)) = (char)uVar11;
        uVar69 = uVar31 - uVar35;
        if (0xfffe < uVar69) {
          uVar69 = 0xffff;
        }
        *puVar7 = (short)uVar69;
        puVar7[1] = *(undefined2 *)(lVar53 + (ulong)uVar11 * 2);
        *(int *)(lVar52 + (ulong)uVar11 * 4) = (int)uVar31;
        *(ushort *)(lVar53 + (ulong)uVar11 * 2) = uVar20 + 2;
      }
      break;
    case 0x2a:
      if ((2 < uVar69) && (2 < uVar44)) {
        uVar48 = uVar31 - 3;
        uVar11 = (uint)(*(int *)((long)plVar64 + (uVar48 & uVar60)) * 0x1e35a7bd) >> 0x11;
        uVar57 = (ulong)uVar11;
        uVar59 = uVar57 & 0x1ff;
        uVar20 = *(ushort *)((long)param_1 + uVar59 * 2 + 0x1a8);
        lVar52 = *(long *)((long)param_1 + 0x5b0);
        *(ushort *)((long)param_1 + uVar59 * 2 + 0x1a8) = uVar20 + 1;
        uVar35 = *(uint *)(lVar52 + uVar57 * 4);
        lVar50 = lVar52 + 0x30000;
        lVar42 = lVar52 + 0x40000;
        *(char *)(lVar50 + (uVar48 & 0xffff)) = (char)uVar11;
        uVar69 = uVar48 - uVar35;
        uVar54 = (ulong)uVar20 & 0x1ff;
        puVar7 = (undefined2 *)(lVar42 + uVar59 * 0x800 + uVar54 * 4);
        if (0xfffe < uVar69) {
          uVar69 = 0xffff;
        }
        lVar53 = lVar52 + 0x20000;
        *puVar7 = (short)uVar69;
        uVar59 = uVar31 - 2;
        puVar7[1] = *(undefined2 *)(lVar53 + (ulong)uVar11 * 2);
        *(int *)(lVar52 + uVar57 * 4) = (int)uVar48;
        *(short *)(lVar53 + (ulong)uVar11 * 2) = (short)uVar54;
        uVar11 = (uint)(*(int *)((long)plVar64 + (uVar59 & uVar60)) * 0x1e35a7bd) >> 0x11;
        uVar48 = (ulong)uVar11;
        uVar57 = uVar48 & 0x1ff;
        uVar20 = *(ushort *)((long)param_1 + uVar57 * 2 + 0x1a8);
        *(ushort *)((long)param_1 + uVar57 * 2 + 0x1a8) = uVar20 + 1;
        uVar35 = *(uint *)(lVar52 + uVar48 * 4);
        *(char *)(lVar50 + (uVar59 & 0xffff)) = (char)uVar11;
        uVar54 = (ulong)uVar20 & 0x1ff;
        uVar69 = uVar59 - uVar35;
        puVar7 = (undefined2 *)(lVar42 + uVar57 * 0x800 + uVar54 * 4);
        if (0xfffe < uVar69) {
          uVar69 = 0xffff;
        }
        *puVar7 = (short)uVar69;
        uVar31 = uVar31 - 1;
        puVar7[1] = *(undefined2 *)(lVar53 + (ulong)uVar11 * 2);
        *(int *)(lVar52 + uVar48 * 4) = (int)uVar59;
        *(short *)(lVar53 + (ulong)uVar11 * 2) = (short)uVar54;
        uVar11 = (uint)(*(int *)((long)plVar64 + (uVar31 & uVar60)) * 0x1e35a7bd) >> 0x11;
        uVar48 = (ulong)uVar11;
        uVar69 = uVar48 & 0x1ff;
        uVar20 = *(ushort *)((long)param_1 + uVar69 * 2 + 0x1a8);
        *(ushort *)((long)param_1 + uVar69 * 2 + 0x1a8) = uVar20 + 1;
        uVar35 = *(uint *)(lVar52 + uVar48 * 4);
        uVar57 = (ulong)uVar20 & 0x1ff;
        puVar7 = (undefined2 *)(lVar42 + uVar69 * 0x800 + uVar57 * 4);
        *(char *)(lVar50 + (uVar31 & 0xffff)) = (char)uVar11;
        uVar69 = uVar31 - uVar35;
        if (0xfffe < uVar69) {
          uVar69 = 0xffff;
        }
        *puVar7 = (short)uVar69;
        puVar7[1] = *(undefined2 *)(lVar53 + (ulong)uVar11 * 2);
        *(int *)(lVar52 + uVar48 * 4) = (int)uVar31;
        *(short *)(lVar53 + (ulong)uVar11 * 2) = (short)uVar57;
      }
    }
  }
  else if (iVar24 == 0x36) {
    if ((6 < uVar69) && (2 < uVar44)) {
      lVar50 = *(long *)((long)param_1 + 0x1b0);
      uVar35 = (uint)(uVar31 - 3);
      *(uint *)(lVar50 + ((ulong)((uint)((ulong)(*(long *)((long)plVar64 + (uVar31 - 3 & uVar60)) *
                                                0x35a7bd1e35a7bd00) >> 0x2c) + (uVar35 & 0x18)) &
                         0xfffff) * 4) = uVar35;
      uVar35 = (uint)(uVar31 - 2);
      *(uint *)(lVar50 + ((ulong)((uint)((ulong)(*(long *)((long)plVar64 + (uVar31 - 2 & uVar60)) *
                                                0x35a7bd1e35a7bd00) >> 0x2c) + (uVar35 & 0x18)) &
                         0xfffff) * 4) = uVar35;
      uVar31 = (ulong)((uint)((ulong)(*(long *)((long)plVar64 + (uVar31 - 1 & uVar60)) *
                                     0x35a7bd1e35a7bd00) >> 0x2c) + ((uint)(uVar31 - 1) & 0x18)) &
               0xfffff;
      goto LAB_02cb7210;
    }
  }
  else {
    if (iVar24 == 0x37) {
      if ((6 < uVar69) && (2 < uVar44)) {
        lVar50 = *(long *)((long)param_1 + 0x1b0);
        uVar35 = (uint)(uVar31 - 3);
        *(uint *)(lVar50 + ((ulong)((uint)((ulong)(*(long *)((long)plVar64 + (uVar31 - 3 & uVar60))
                                                  * 0x35a7bd1e35a7bd00) >> 0x2c) + (uVar35 & 0x18))
                           & 0xfffff) * 4) = uVar35;
        uVar35 = (uint)(uVar31 - 2);
        *(uint *)(lVar50 + ((ulong)((uint)((ulong)(*(long *)((long)plVar64 + (uVar31 - 2 & uVar60))
                                                  * 0x35a7bd1e35a7bd00) >> 0x2c) + (uVar35 & 0x18))
                           & 0xfffff) * 4) = uVar35;
        uVar35 = (uint)(uVar31 - 1);
        *(uint *)(lVar50 + ((ulong)((uint)((ulong)(*(long *)((long)plVar64 + (uVar31 - 1 & uVar60))
                                                  * 0x35a7bd1e35a7bd00) >> 0x2c) + (uVar35 & 0x18))
                           & 0xfffff) * 4) = uVar35;
      }
      if ((uVar44 & 3) != 0) {
        uVar57 = 4 - (uVar31 & 3);
        bVar21 = uVar57 <= uVar69;
        uVar48 = uVar69 - uVar57;
        uVar69 = 0;
        if (bVar21) {
          uVar69 = uVar48;
        }
        uVar31 = uVar57 + uVar31;
      }
      uVar48 = uVar60 - (uVar31 & uVar60);
      if (uVar69 <= uVar48) {
        uVar48 = uVar69;
      }
      if (0x1f < uVar48) {
        iVar24 = 0;
        uVar69 = 0;
        do {
          lVar50 = uVar69 + (uVar31 & uVar60);
          bVar21 = uVar69 < 0x1c;
          uVar69 = uVar69 + 4;
          iVar24 = (uint)*(byte *)((long)plVar64 + lVar50) +
                   iVar24 * *(int *)((long)param_1 + 0x1d4) + 1;
        } while (bVar21);
        goto LAB_02cb7304;
      }
      goto LAB_02cb7308;
    }
    if (iVar24 == 0x41) {
      if ((6 < uVar69) && (2 < uVar44)) {
        uVar57 = *(ulong *)((long)param_1 + 0x1c0);
        uVar59 = (ulong)*(uint *)((long)param_1 + 0x1b8);
        lVar50 = *(long *)((long)param_1 + 0x1e0);
        lVar42 = *(long *)((long)param_1 + 0x1e8);
        uVar48 = (*(ulong *)((long)plVar64 + (uVar31 - 3 & uVar60)) & uVar57) * 0x1fe35a7bd3579bd3
                 >> (uVar59 & 0x3f);
        uVar20 = *(ushort *)(lVar50 + (uVar48 & 0xffffffff) * 2);
        uVar54 = (ulong)*(uint *)((long)param_1 + 0x1c8);
        uVar35 = *(uint *)((long)param_1 + 0x1cc);
        *(ushort *)(lVar50 + (uVar48 & 0xffffffff) * 2) = uVar20 + 1;
        *(int *)(lVar42 + ((ulong)(uint)((int)uVar48 << (ulong)(uVar35 & 0x1f)) + (uVar54 & uVar20))
                          * 4) = (int)(uVar31 - 3);
        uVar48 = (*(ulong *)((long)plVar64 + (uVar31 - 2 & uVar60)) & uVar57) * 0x1fe35a7bd3579bd3
                 >> (uVar59 & 0x3f);
        uVar20 = *(ushort *)(lVar50 + (uVar48 & 0xffffffff) * 2);
        *(ushort *)(lVar50 + (uVar48 & 0xffffffff) * 2) = uVar20 + 1;
        *(int *)(lVar42 + ((ulong)(uint)((int)uVar48 << (ulong)(uVar35 & 0x1f)) + (uVar54 & uVar20))
                          * 4) = (int)(uVar31 - 2);
        uVar48 = (*(ulong *)((long)plVar64 + (uVar31 - 1 & uVar60)) & uVar57) * 0x1fe35a7bd3579bd3
                 >> (uVar59 & 0x3f);
        uVar20 = *(ushort *)(lVar50 + (uVar48 & 0xffffffff) * 2);
        *(ushort *)(lVar50 + (uVar48 & 0xffffffff) * 2) = uVar20 + 1;
        *(int *)(lVar42 + ((ulong)(uint)((int)uVar48 << (ulong)(uVar35 & 0x1f)) + (uVar54 & uVar20))
                          * 4) = (int)(uVar31 - 1);
      }
      uVar48 = uVar60 - (uVar44 & uVar10);
      if (uVar69 <= uVar48) {
        uVar48 = uVar69;
      }
      if (0x1f < uVar48) {
        iVar24 = 0;
        lVar50 = 0;
        do {
          lVar42 = lVar50 + (ulong)(uVar44 & uVar10);
          lVar50 = lVar50 + 1;
          iVar24 = (uint)*(byte *)((long)plVar64 + lVar42) +
                   iVar24 * *(int *)((long)param_1 + 0x20c) + 1;
        } while (lVar50 != 0x20);
        *(int *)((long)param_1 + 0x1f0) = iVar24;
      }
      *(ulong *)((long)param_1 + 0x200) = uVar31;
    }
  }
  if (*(int *)((long)param_1 + 4) < 10) {
LAB_02cb735c:
    iVar24 = 2;
  }
  else {
    uVar69 = *(ulong *)((long)param_1 + 0x100);
    uVar31 = (ulong)((((uint)uVar69 & 0x3fffffff) - ((uint)uVar69 & 0x40000000)) + 0x80000000);
    if (uVar69 < 0xc0000000) {
      uVar31 = uVar69;
    }
    iVar24 = FUN_02c8629c(0x3fe8000000000000,plVar64,uVar31 & 0xffffffff,uVar60,
                          *(long *)((long)param_1 + 0xa8) - uVar69);
    if (iVar24 != 0) goto LAB_02cb735c;
    iVar24 = 3;
  }
  uVar31 = *puVar40;
  puVar8 = System_Uri_MoreInfo_TypeInfo + (uint)(iVar24 << 9);
  if ((uVar31 != 0) && (*(long *)((long)param_1 + 0xf8) == 0)) {
    lVar42 = *(long *)((long)param_1 + 0xe0);
    lVar50 = lVar42 + (uVar31 - 1) * 0x10;
    lVar52 = *(long *)((long)param_1 + 0xd0);
    uVar11 = *(uint *)((long)param_1 + 0xb4);
    uVar35 = *(uint *)(lVar50 + 4);
    uVar48 = (ulong)uVar35;
    uVar59 = (1L << ((ulong)*(uint *)((long)param_1 + 8) & 0x3f)) - 0x10;
    uVar20 = *(ushort *)(lVar50 + 0xe);
    uVar57 = uVar48 & 0x1ffffff;
    uVar69 = *(long *)((long)param_1 + 0x108) - uVar57;
    if (uVar59 <= uVar69) {
      uVar69 = uVar59;
    }
    uVar29 = uVar20 & 0x3ff;
    uVar71 = *(int *)((long)param_1 + 0x44) + 0x10;
    if (uVar71 <= uVar29) {
      uVar12 = *(uint *)((long)param_1 + 0x40);
      uVar29 = (uVar29 - *(int *)((long)param_1 + 0x44)) - 0x10;
      uVar29 = (uVar29 & (-1 << (ulong)(uVar12 & 0x1f) ^ 0xffffffffU)) + uVar71 +
               (*(int *)(lVar50 + 8) +
                ((uVar29 >> (ulong)(uVar12 & 0x1f) & 1 | 2) << (ulong)(uVar20 >> 10 & 0x1f)) + -4 <<
               (ulong)(uVar12 & 0x1f));
    }
    iVar25 = *(int *)((long)param_1 + 0x110);
    if ((uVar29 < 0x10) || ((ulong)(uVar29 - 0xf) == (long)iVar25)) {
      if (((ulong)(long)iVar25 <= uVar69) && ((int)uVar65 != 0)) {
        do {
          uVar35 = (uint)uVar48;
          uVar71 = (uint)uVar72;
          if (*(char *)(lVar52 + (uVar72 & uVar11)) !=
              *(char *)(lVar52 + (ulong)(uVar71 - iVar25 & uVar11))) break;
          uVar35 = uVar35 + 1;
          uVar48 = (ulong)uVar35;
          uVar29 = (int)uVar65 - 1;
          uVar65 = (ulong)uVar29;
          uVar72 = (ulong)(uVar71 + 1);
          *(uint *)(lVar50 + 4) = uVar35;
          uVar71 = (uVar44 + (int)lVar45) - uVar36;
        } while (uVar29 != 0);
        uVar57 = (ulong)(uVar35 & 0x1ffffff);
        uVar72 = (ulong)uVar71;
      }
      puVar66 = (uint *)(lVar42 + (uVar31 - 1) * 0x10);
      uVar44 = *puVar66;
      uVar36 = (int)uVar57 + (uVar35 >> 0x19);
      if (5 < uVar44) {
        if (uVar44 < 0x82) {
          uVar35 = ((uint)LZCOUNT((int)((ulong)uVar44 - 2)) ^ 0x1f) - 1;
          uVar44 = (int)((ulong)uVar44 - 2 >> ((ulong)uVar35 & 0x3f)) + uVar35 * 2 + 2;
        }
        else if (uVar44 < 0x842) {
          uVar44 = ((uint)LZCOUNT(uVar44 - 0x42) ^ 0x1f) + 10;
        }
        else if (uVar44 >> 1 < 0xc21) {
          uVar44 = 0x15;
        }
        else {
          bVar21 = 0x5841 < uVar44;
          uVar44 = 0x16;
          if (bVar21) {
            uVar44 = 0x17;
          }
        }
      }
      if (uVar36 < 10) {
        uVar36 = uVar36 - 2;
      }
      else if (uVar36 < 0x86) {
        uVar35 = ((uint)LZCOUNT((int)((ulong)uVar36 - 6)) ^ 0x1f) - 1;
        uVar36 = (int)((ulong)uVar36 - 6 >> ((ulong)uVar35 & 0x3f)) + uVar35 * 2 + 4;
      }
      else if (uVar36 < 0x846) {
        uVar36 = ((uint)LZCOUNT(uVar36 - 0x46) ^ 0x1f) + 0xc;
      }
      else {
        uVar36 = 0x17;
      }
      uVar43 = (ushort)uVar36 & 7 | (ushort)((uVar44 & 7) << 3);
      if ((((uVar20 & 0x3ff) == 0) && ((uVar44 & 0xffff) < 8)) && ((uVar36 & 0xffff) < 0x10)) {
        if (7 < (uVar36 & 0xffff)) {
          uVar43 = uVar43 | 0x40;
        }
      }
      else {
        uVar44 = (uVar44 >> 3 & 0x1fff) * 3 + ((uVar36 & 0xfff8) >> 3);
        uVar43 = (((ushort)(0x520d40 >> (ulong)((uVar44 & 0xf) << 1)) & 0xc0) + (short)uVar44 * 0x40
                 | uVar43) + 0x40;
      }
      *(ushort *)(puVar66 + 3) = uVar43;
    }
  }
  if (*(int *)((long)param_1 + 4) == 0xb) {
    lVar45 = (long)param_1 + 0xf8;
    FUN_02c91df8(lVar2,uVar65 & 0xffffffff,uVar72,plVar64,uVar60,puVar8,param_1,puVar61,
                 (long)param_1 + 0x110,lVar45,*(long *)((long)param_1 + 0xe0) + uVar31 * 0x10,
                 puVar40,(long)param_1 + 0xf0);
    uVar39 = (undefined4)((ulong)lVar45 >> 0x20);
  }
  else if (*(int *)((long)param_1 + 4) == 10) {
    lVar45 = (long)param_1 + 0xf8;
    FUN_02c91cec(lVar2,uVar65 & 0xffffffff,uVar72,plVar64,uVar60,puVar8,param_1,puVar61,
                 (long)param_1 + 0x110,lVar45,*(long *)((long)param_1 + 0xe0) + uVar31 * 0x10,
                 puVar40,(long)param_1 + 0xf0);
    uVar39 = (undefined4)((ulong)lVar45 >> 0x20);
  }
  else {
    lVar45 = *(long *)((long)param_1 + 0xe0) + uVar31 * 0x10;
    FUN_02cf8548(uVar65 & 0xffffffff,uVar72,plVar64,uVar60,puVar8,param_1,puVar61,
                 (long)param_1 + 0x110,(long)param_1 + 0xf8,lVar45,puVar40,(long)param_1 + 0xf0);
    uVar39 = (undefined4)((ulong)lVar45 >> 0x20);
  }
  uVar26 = DAT_0137e528;
  uVar36 = *(uint *)((long)param_1 + 0xc);
  uVar65 = *(ulong *)((long)param_1 + 0xa8);
  uVar44 = *(uint *)((long)param_1 + 8);
  if ((int)*(uint *)((long)param_1 + 8) <= (int)uVar36) {
    uVar44 = uVar36;
  }
  uVar72 = *(ulong *)((long)param_1 + 0x100);
  uVar35 = 0x18;
  if ((int)(uVar44 + 1) < 0x18) {
    uVar35 = uVar44 + 1;
  }
  uVar69 = uVar65 - uVar72;
  uVar31 = 1L << ((ulong)uVar35 & 0x3f);
  if (*(int *)((long)param_1 + 4) < 4) {
    bVar21 = 0x2ffe < (ulong)(*(long *)((long)param_1 + 0xe8) + *(long *)((long)param_1 + 0xf0));
  }
  else {
    bVar21 = false;
  }
  if ((((1L << ((ulong)uVar36 & 0x3f)) + uVar69 <= uVar31) && (param_3 == 0 && param_2 == 0)) &&
     ((!bVar21 &&
      ((uVar31 = uVar31 >> 3, *(ulong *)((long)param_1 + 0xf0) < uVar31 && (*puVar40 < uVar31))))))
  {
    uVar36 = (uint)uVar65;
    uVar35 = (uint)*(ulong *)((long)param_1 + 0x108);
    uVar44 = ((uVar35 & 0x3fffffff) - (uVar35 & 0x40000000)) + 0x80000000;
    if (*(ulong *)((long)param_1 + 0x108) < 0xc0000000) {
      uVar44 = uVar35;
    }
    uVar35 = ((uVar36 & 0x3fffffff) - (uVar36 & 0x40000000)) + 0x80000000;
    if (uVar65 < 0xc0000000) {
      uVar35 = uVar36;
    }
    *(ulong *)((long)param_1 + 0x108) = uVar65;
    if (uVar35 < uVar44) {
      *(undefined4 *)((long)param_1 + 0x1a4) = 0;
    }
AkSoundEnginePINVOKE__CSharp_AkCommunicationSettings_uPoolSize_set:
    *param_4 = 0;
    return 1;
  }
  uVar31 = *(ulong *)((long)param_1 + 0xf8);
  if (uVar31 != 0) {
    lVar45 = *(long *)((long)param_1 + 0xe0);
    lVar50 = *(long *)((long)param_1 + 0xe8);
    puVar66 = (uint *)(lVar45 + lVar50 * 0x10);
    *(long *)((long)param_1 + 0xe8) = lVar50 + 1;
    uVar44 = (uint)uVar31;
    *puVar66 = uVar44;
    *(undefined8 *)(puVar66 + 1) = uVar26;
    *(undefined2 *)((long)puVar66 + 0xe) = 0x10;
    if (5 < uVar31) {
      if (uVar31 < 0x82) {
        uVar44 = ((uint)LZCOUNT((int)(uVar31 - 2)) ^ 0x1f) - 1;
        uVar44 = (int)(uVar31 - 2 >> ((ulong)uVar44 & 0x3f)) + uVar44 * 2 + 2;
      }
      else if (uVar31 < 0x842) {
        uVar44 = ((uint)LZCOUNT(uVar44 - 0x42) ^ 0x1f) + 10;
      }
      else if (uVar31 >> 1 < 0xc21) {
        uVar44 = 0x15;
      }
      else {
        uVar44 = 0x16;
        if (0x5841 < uVar31) {
          uVar44 = 0x17;
        }
      }
    }
    uVar36 = uVar44 >> 3 & 0x1fff;
    *(ushort *)(lVar45 + lVar50 * 0x10 + 0xc) =
         (((ushort)(0x520d40 >> (ulong)((uVar36 * 3 & 0xf) << 1)) & 0xc0) + (short)uVar36 * 0xc0 |
         (ushort)((uVar44 & 7) << 3)) + 0x42;
    *(ulong *)((long)param_1 + 0xf0) = *(long *)((long)param_1 + 0xf0) + uVar31;
    *(undefined8 *)((long)param_1 + 0xf8) = 0;
  }
  if ((uVar65 == uVar72) && (param_2 == 0))
  goto AkSoundEnginePINVOKE__CSharp_AkCommunicationSettings_uPoolSize_set;
  puVar28 = (undefined1 *)FUN_02cb88b0(param_1,(int)uVar69 * 2 + 0x1f7);
  local_918 = (ulong)*(byte *)((long)param_1 + 0x162);
  puVar61 = (undefined8 *)((long)param_1 + 0x110);
  *puVar28 = *(undefined1 *)((long)param_1 + 0x160);
  uVar69 = uVar69 & 0xffffffff;
  puVar4 = (undefined8 *)((long)param_1 + 0x150);
  puVar28[1] = *(undefined1 *)((long)param_1 + 0x161);
  uVar13 = *(undefined1 *)((long)param_1 + 0x164);
  uVar65 = *(ulong *)((long)param_1 + 0x100);
  uVar26 = *(undefined8 *)((long)param_1 + 0xe8);
  uVar34 = *(undefined8 *)((long)param_1 + 0xf0);
  uVar14 = *(undefined1 *)((long)param_1 + 0x165);
  uVar36 = (uint)uVar65;
  uVar46 = *(undefined8 *)((long)param_1 + 0xe0);
  uVar44 = ((uVar36 & 0x3fffffff) - (uVar36 & 0x40000000)) + 0x80000000;
  if (uVar65 < 0xc0000000) {
    uVar44 = uVar36;
  }
  memcpy(auStack_830,param_1,0x90);
  if (uVar69 == 0) {
    uVar65 = local_918 >> 3;
    uVar72 = local_918 & 7;
    local_918 = (ulong)((int)local_918 + 9) & 0xfffffff8;
    *(ulong *)(puVar28 + uVar65) = 3L << uVar72 | (ulong)(byte)puVar28[uVar65];
    goto LAB_02cb84e4;
  }
  iVar25 = FUN_02cb8618(plVar64,uVar60,uVar65,uVar69,uVar34,uVar26);
  if (iVar25 == 0) {
    *(undefined8 *)((long)param_1 + 0x118) = *(undefined8 *)((long)param_1 + 0x158);
    *puVar61 = *puVar4;
  }
  else {
    uVar15 = *puVar28;
    uVar16 = puVar28[1];
    uVar65 = local_918 & 0xff;
    if (*(int *)((long)param_1 + 4) < 3) {
      FUN_02ce6adc(lVar2,plVar64,uVar44,uVar69,uVar60,param_2,param_1,uVar46,uVar26,&local_918,
                   puVar28);
    }
    else if (*(int *)((long)param_1 + 4) == 3) {
      FUN_02ce6230(lVar2,plVar64,uVar44,uVar69,uVar60,param_2,param_1,uVar46,uVar26,&local_918,
                   puVar28);
    }
    else {
      FUN_02ccbd28(local_910);
      FUN_02ccbd28();
      FUN_02ccbd28();
      uStack_848 = 0;
      local_850 = 0;
      uStack_838 = 0;
      local_840 = 0;
      uStack_868 = 0;
      local_870 = 0;
      uStack_858 = 0;
      local_860 = 0;
      uStack_878 = 0;
      local_880 = 0;
      iVar25 = *(int *)((long)param_1 + 4);
      if (iVar25 < 10) {
        uVar72 = (ulong)uVar44;
        if (*(int *)((long)param_1 + 0x20) == 0) {
          puVar37 = (undefined *)0x0;
          uVar34 = 1;
          if ((0x3f < uVar69) && (4 < iVar25)) {
            uVar31 = uVar69 + uVar72;
            if (*(ulong *)((long)param_1 + 0x18) >> 0x14 != 0) {
              local_120[0x1e] = 0;
              local_120[0x1f] = 0;
              local_120[0x1c] = 0;
              local_120[0x1d] = 0;
              local_120[0x1a] = 0;
              local_120[0x1b] = 0;
              local_120[0x18] = 0;
              local_120[0x19] = 0;
              local_120[0x16] = 0;
              local_120[0x17] = 0;
              local_120[0x14] = 0;
              local_120[0x15] = 0;
              local_120[0x12] = 0;
              local_120[0x13] = 0;
              local_120[0x10] = 0;
              local_120[0x11] = 0;
              local_120[0xe] = 0;
              local_120[0xf] = 0;
              local_120[0xc] = 0;
              local_120[0xd] = 0;
              local_120[10] = 0;
              local_120[0xb] = 0;
              local_120[8] = 0;
              local_120[9] = 0;
              local_120[6] = 0;
              local_120[7] = 0;
              local_120[4] = 0;
              local_120[5] = 0;
              local_120[2] = 0;
              local_120[3] = 0;
              local_120[0] = 0;
              local_120[1] = 0;
              memset(&local_7a0,0,0x680);
              uVar48 = uVar72 + 0x40;
              uVar36 = 0;
              uVar57 = uVar72;
              do {
                if (uVar57 + 2 < uVar48) {
                  lVar45 = 2;
                  bVar19 = *(byte *)((long)plVar64 + (ulong)((int)uVar57 + 1U & uVar10));
                  bVar17 = *(byte *)((long)plVar64 + (uVar57 & uVar60));
                  do {
                    bVar18 = bVar19;
                    bVar19 = *(byte *)((long)plVar64 + (ulong)((int)uVar57 + (int)lVar45 & uVar10));
                    uVar59 = (ulong)(bVar19 >> 3);
                    lVar50 = (ulong)(byte)(&DAT_01a82488)
                                          [(ulong)(byte)(System_Uri_MoreInfo_TypeInfo
                                                         [(ulong)bVar17 + 0x500] |
                                                        System_Uri_MoreInfo_TypeInfo
                                                        [(ulong)bVar18 + 0x400]) * 4] * 0x80 +
                             -0x7a0;
                    iVar38 = *(int *)((long)&local_7a0 + uVar59 * 4 + lVar50 + 0x7a0);
                    lVar45 = lVar45 + 1;
                    local_120[uVar59] = local_120[uVar59] + 1;
                    *(int *)((long)&local_7a0 + uVar59 * 4 + lVar50 + 0x7a0) = iVar38 + 1;
                    bVar17 = bVar18;
                  } while (lVar45 != 0x40);
                  uVar36 = uVar36 + 0x3e;
                }
                uVar48 = uVar48 + 0x1000;
                uVar57 = uVar57 + 0x1000;
              } while (uVar48 <= uVar31);
              puVar66 = local_120;
              uVar48 = 0;
              dVar78 = 0.0;
              do {
                uVar57 = (ulong)*puVar66;
                if (*puVar66 < 0x100) {
                  dVar74 = (double)(&DAT_01a812e8)[uVar57];
                }
                else {
                  dVar74 = log2((double)uVar57);
                }
                uVar59 = (ulong)puVar66[1];
                if (puVar66[1] < 0x100) {
                  dVar75 = (double)(&DAT_01a812e8)[uVar59];
                }
                else {
                  dVar75 = log2((double)uVar59);
                }
                uVar48 = uVar48 + uVar57 + uVar59;
                puVar66 = puVar66 + 2;
                dVar78 = (dVar78 - dVar74 * (double)uVar57) - dVar75 * (double)uVar59;
              } while (puVar66 < local_120 + 0x20);
              if (uVar48 != 0) {
                if (uVar48 < 0x100) {
                  dVar74 = (double)(&DAT_01a812e8)[uVar48];
                }
                else {
                  dVar74 = log2((double)uVar48);
                }
                dVar78 = dVar78 + dVar74 * (double)uVar48;
              }
              lVar45 = 0;
              dVar74 = 0.0;
              do {
                puVar63 = &local_7a0 + lVar45 * 0x10;
                dVar75 = 0.0;
                if (puVar63 < auStack_720 + lVar45 * 0x10) {
                  uVar48 = 0;
                  dVar75 = 0.0;
                  do {
                    uVar57 = (ulong)(uint)*puVar63;
                    if ((uint)*puVar63 < 0x100) {
                      dVar76 = (double)(&DAT_01a812e8)[uVar57];
                    }
                    else {
                      dVar76 = log2((double)uVar57);
                    }
                    uVar59 = (ulong)*(uint *)((long)puVar63 + 4);
                    if (*(uint *)((long)puVar63 + 4) < 0x100) {
                      dVar79 = (double)(&DAT_01a812e8)[uVar59];
                    }
                    else {
                      dVar79 = log2((double)uVar59);
                    }
                    puVar63 = puVar63 + 1;
                    uVar48 = uVar48 + uVar57 + uVar59;
                    dVar75 = (dVar75 - dVar76 * (double)uVar57) - dVar79 * (double)uVar59;
                  } while (puVar63 < auStack_720 + lVar45 * 0x10);
                  if (uVar48 != 0) {
                    if (uVar48 < 0x100) {
                      dVar76 = (double)(&DAT_01a812e8)[uVar48];
                    }
                    else {
                      dVar76 = log2((double)uVar48);
                    }
                    dVar75 = dVar75 + dVar76 * (double)uVar48;
                  }
                }
                lVar45 = lVar45 + 1;
                dVar74 = dVar74 + dVar75;
              } while (lVar45 != 0xd);
              dVar74 = (1.0 / (double)uVar36) * dVar74;
              if ((dVar74 <= 3.0) && (DAT_0137dfb8 <= (1.0 / (double)uVar36) * dVar78 - dVar74)) {
                puVar37 = &DAT_01a82488;
                uVar34 = 0xd;
                goto LAB_02cb8384;
              }
            }
            uVar48 = uVar72 + 0x40;
            auStack_794[5] = 0;
            uStack_798 = 0;
            auStack_794[0] = 0;
            local_7a0 = 0;
            auStack_794[3] = 0;
            auStack_794[4] = 0;
            auStack_794[1] = 0;
            auStack_794[2] = 0;
            if (uVar48 <= uVar31) {
              lVar45 = uVar48 - uVar72;
              uVar57 = uVar72;
              do {
                if (uVar57 + 1 < uVar48) {
                  iVar38 = *(int *)(&DAT_013dd400 +
                                   ((ulong)(*(byte *)((long)plVar64 + (uVar57 & uVar60)) >> 4) & 0xc
                                   ));
                  lVar50 = 1;
                  do {
                    iVar49 = (int)lVar50;
                    iVar5 = iVar38 * 3;
                    lVar50 = lVar50 + 1;
                    iVar38 = *(int *)(&DAT_013dd400 +
                                     ((ulong)(*(byte *)((long)plVar64 +
                                                       (ulong)((int)uVar57 + iVar49 & uVar10)) >> 4)
                                     & 0xc));
                    iVar5 = iVar38 + iVar5;
                    *(int *)((long)&local_7a0 + (long)iVar5 * 4) =
                         *(int *)((long)&local_7a0 + (long)iVar5 * 4) + 1;
                  } while (lVar45 != lVar50);
                }
                uVar48 = uVar48 + 0x1000;
                uVar57 = uVar57 + 0x1000;
              } while (uVar48 <= uVar31);
            }
            lVar45 = 0;
            local_120[0x22] = 0;
            local_120[0x20] = 0;
            local_120[0x21] = 0;
            local_120[2] = 0;
            local_120[3] = 0;
            local_120[0] = 0;
            local_120[1] = 0;
            local_120[4] = 0;
            local_120[5] = 0;
            do {
              uVar36 = (uint)lVar45 & 0xff;
              uVar11 = uVar36 % 6;
              uVar36 = uVar36 % 3;
              iVar38 = *(int *)((long)&local_7a0 + lVar45 * 4);
              uVar35 = local_120[uVar11];
              lVar45 = lVar45 + 1;
              local_120[(ulong)uVar36 + 0x20] = local_120[(ulong)uVar36 + 0x20] + iVar38;
              local_120[uVar11] = uVar35 + iVar38;
            } while (lVar45 != 9);
            puVar66 = local_120 + 0x20;
            lVar45 = 0;
            dVar78 = 0.0;
            while( true ) {
              uVar31 = (ulong)*puVar66;
              if (*puVar66 < 0x100) {
                dVar74 = (double)(&DAT_01a812e8)[uVar31];
              }
              else {
                dVar74 = log2((double)uVar31);
              }
              uVar48 = lVar45 + uVar31;
              dVar78 = dVar78 - dVar74 * (double)uVar31;
              if (local_120 + 0x23 <= puVar66 + 1) break;
              uVar36 = puVar66[1];
              uVar31 = (ulong)uVar36;
              if (uVar36 < 0x100) {
                dVar74 = (double)(&DAT_01a812e8)[uVar31];
              }
              else {
                dVar74 = log2((double)uVar31);
              }
              lVar45 = uVar48 + uVar31;
              dVar78 = dVar78 - dVar74 * (double)uVar31;
              puVar66 = puVar66 + 2;
            }
            if (uVar48 != 0) {
              if (uVar48 < 0x100) {
                dVar74 = (double)(&DAT_01a812e8)[uVar48];
              }
              else {
                dVar74 = log2((double)uVar48);
              }
              dVar78 = dVar78 + dVar74 * (double)uVar48;
            }
            puVar66 = local_120;
            lVar45 = 0;
            puVar68 = local_120 + 3;
            dVar74 = 0.0;
            while( true ) {
              uVar31 = (ulong)*puVar66;
              if (*puVar66 < 0x100) {
                dVar75 = (double)(&DAT_01a812e8)[uVar31];
              }
              else {
                dVar75 = log2((double)uVar31);
              }
              uVar48 = lVar45 + uVar31;
              dVar74 = dVar74 - dVar75 * (double)uVar31;
              if (puVar68 <= puVar66 + 1) break;
              uVar36 = puVar66[1];
              uVar31 = (ulong)uVar36;
              if (uVar36 < 0x100) {
                dVar75 = (double)(&DAT_01a812e8)[uVar31];
              }
              else {
                dVar75 = log2((double)uVar31);
              }
              lVar45 = uVar48 + uVar31;
              dVar74 = dVar74 - dVar75 * (double)uVar31;
              puVar66 = puVar66 + 2;
            }
            if (uVar48 != 0) {
              if (uVar48 < 0x100) {
                dVar75 = (double)(&DAT_01a812e8)[uVar48];
              }
              else {
                dVar75 = log2((double)uVar48);
              }
              dVar74 = dVar74 + dVar75 * (double)uVar48;
            }
            lVar45 = 0;
            dVar75 = 0.0;
            while( true ) {
              uVar31 = (ulong)*puVar68;
              if (*puVar68 < 0x100) {
                dVar76 = (double)(&DAT_01a812e8)[uVar31];
              }
              else {
                dVar76 = log2((double)uVar31);
              }
              uVar48 = lVar45 + uVar31;
              dVar75 = dVar75 - dVar76 * (double)uVar31;
              if (local_120 + 6 <= puVar68 + 1) break;
              uVar36 = puVar68[1];
              uVar31 = (ulong)uVar36;
              if (uVar36 < 0x100) {
                dVar76 = (double)(&DAT_01a812e8)[uVar31];
              }
              else {
                dVar76 = log2((double)uVar31);
              }
              lVar45 = uVar48 + uVar31;
              dVar75 = dVar75 - dVar76 * (double)uVar31;
              puVar68 = puVar68 + 2;
            }
            if (uVar48 != 0) {
              if (uVar48 < 0x100) {
                dVar76 = (double)(&DAT_01a812e8)[uVar48];
              }
              else {
                dVar76 = log2((double)uVar48);
              }
              dVar75 = dVar75 + dVar76 * (double)uVar48;
            }
            lVar45 = 0;
            dVar76 = 0.0;
            do {
              puVar66 = (uint *)((long)&local_7a0 + lVar45 * 0xc);
              lVar50 = 0;
              dVar79 = 0.0;
              while( true ) {
                uVar31 = (ulong)*puVar66;
                if (*puVar66 < 0x100) {
                  dVar77 = (double)(&DAT_01a812e8)[uVar31];
                }
                else {
                  dVar77 = log2((double)uVar31);
                }
                uVar48 = lVar50 + uVar31;
                dVar79 = dVar79 - dVar77 * (double)uVar31;
                if (auStack_794 + lVar45 * 3 <= puVar66 + 1) break;
                uVar36 = puVar66[1];
                uVar31 = (ulong)uVar36;
                if (uVar36 < 0x100) {
                  dVar77 = (double)(&DAT_01a812e8)[uVar31];
                }
                else {
                  dVar77 = log2((double)uVar31);
                }
                lVar50 = uVar48 + uVar31;
                dVar79 = dVar79 - dVar77 * (double)uVar31;
                puVar66 = puVar66 + 2;
              }
              if (uVar48 != 0) {
                if (uVar48 < 0x100) {
                  dVar77 = (double)(&DAT_01a812e8)[uVar48];
                }
                else {
                  dVar77 = log2((double)uVar48);
                }
                dVar79 = dVar79 + dVar77 * (double)uVar48;
              }
              lVar45 = lVar45 + 1;
              dVar76 = dVar76 + dVar79;
            } while (lVar45 != 3);
            dVar79 = 1.0 / (double)(local_120[0x21] + local_120[0x20] + local_120[0x22]);
            dVar78 = dVar78 * dVar79;
            dVar75 = (dVar74 + dVar75) * dVar79;
            dVar74 = dVar78 * 10.0;
            if (6 < iVar25) {
              dVar74 = dVar76 * dVar79;
            }
            if ((DAT_0137dfb8 <= dVar78 - dVar75) || (DAT_0137dfb8 <= dVar78 - dVar74)) {
              if (DAT_0137eab0 <= dVar75 - dVar74) {
                puVar37 = &UNK_01a82588;
                uVar34 = 3;
              }
              else {
                puVar37 = &UNK_01a82688;
                uVar34 = 2;
              }
            }
            else {
              puVar37 = (undefined *)0x0;
              uVar34 = 1;
            }
          }
        }
        else {
          puVar37 = (undefined *)0x0;
          uVar34 = 1;
        }
LAB_02cb8384:
        uVar80 = uVar46;
        FUN_02ca8e48(lVar2,plVar64,uVar72,uVar60,uVar13,uVar14,puVar8,uVar34,puVar37,uVar46,uVar26,
                     local_910);
        uVar39 = (undefined4)((ulong)uVar80 >> 0x20);
      }
      else {
        uVar34 = CONCAT44(uVar39,iVar24);
        FUN_02ca8640(lVar2,plVar64,uVar44,uVar60,auStack_830,uVar13,uVar14,uVar46,uVar26,uVar34,
                     local_910);
        uVar39 = (undefined4)((ulong)uVar34 >> 0x20);
      }
      if (3 < *(int *)((long)param_1 + 4)) {
        FUN_02ca9aa0(local_7e4,local_910);
      }
      FUN_02ce4b70(lVar2,plVar64,uVar44,uVar69,uVar60,uVar13,uVar14,param_2,auStack_830,
                   CONCAT44(uVar39,iVar24),uVar46,uVar26,local_910,&local_918,puVar28);
      FUN_02ccbd38(lVar2,local_910);
      FUN_02ccbd38(lVar2,auStack_8e0);
      FUN_02ccbd38(lVar2,auStack_8b0);
      FUN_02cd98fc(lVar2,local_880);
      local_880 = 0;
      FUN_02cd98fc(lVar2,local_870);
      local_870 = 0;
      FUN_02cd98fc(lVar2,local_860);
      local_860 = 0;
      FUN_02cd98fc(lVar2,local_850);
      local_850 = 0;
      FUN_02cd98fc(lVar2,local_840);
    }
    if (local_918 >> 3 <= uVar69 + 4) goto LAB_02cb84e4;
    *(undefined8 *)((long)param_1 + 0x118) = *(undefined8 *)((long)param_1 + 0x158);
    *puVar61 = *puVar4;
    *puVar28 = uVar15;
    puVar28[1] = uVar16;
    local_918 = uVar65;
  }
  FUN_02ce6e54(param_2,plVar64,uVar44,uVar60,uVar69,&local_918,puVar28);
LAB_02cb84e4:
  uVar65 = *(ulong *)((long)param_1 + 0xa8);
  uVar35 = (uint)*(ulong *)((long)param_1 + 0x108);
  bVar17 = puVar28[local_918 >> 3];
  *(byte *)((long)param_1 + 0x162) = (byte)local_918 & 7;
  uVar36 = (uint)uVar65;
  uVar44 = ((uVar35 & 0x3fffffff) - (uVar35 & 0x40000000)) + 0x80000000;
  if (*(ulong *)((long)param_1 + 0x108) < 0xc0000000) {
    uVar44 = uVar35;
  }
  uVar35 = ((uVar36 & 0x3fffffff) - (uVar36 & 0x40000000)) + 0x80000000;
  if (uVar65 < 0xc0000000) {
    uVar35 = uVar36;
  }
  *(ushort *)((long)param_1 + 0x160) = (ushort)bVar17;
  *(ulong *)((long)param_1 + 0x100) = uVar65;
  *(ulong *)((long)param_1 + 0x108) = uVar65;
  if (uVar35 < uVar44) {
    *(undefined4 *)((long)param_1 + 0x1a4) = 0;
  }
  if ((uVar65 != 0) &&
     (*(undefined1 *)((long)param_1 + 0x164) =
           *(undefined1 *)((long)plVar64 + (ulong)(uVar36 - 1 & uVar10)), uVar65 != 1)) {
    *(undefined1 *)((long)param_1 + 0x165) =
         *(undefined1 *)((long)plVar64 + (ulong)(uVar36 - 2 & uVar10));
  }
  *puVar40 = 0;
  *(undefined8 *)((long)param_1 + 0xf0) = 0;
  *(undefined8 *)((long)param_1 + 0x158) = *(undefined8 *)((long)param_1 + 0x118);
  *puVar4 = *puVar61;
  *param_5 = puVar28;
  *param_4 = local_918 >> 3;
  return 1;
}


