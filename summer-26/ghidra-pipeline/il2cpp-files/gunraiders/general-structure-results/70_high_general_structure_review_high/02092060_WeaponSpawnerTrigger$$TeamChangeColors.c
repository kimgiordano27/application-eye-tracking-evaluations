/*
FUNCTION_NAME: WeaponSpawnerTrigger$$TeamChangeColors
ENTRY_POINT: 02092060
PROGRAM: gunraiders-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;ray_or_cast_sink_hits_2;telemetry_or_network_hits_1;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x020925d4) */

void WeaponSpawnerTrigger__TeamChangeColors
               (undefined1 param_1 [16],undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  long lVar12;
  long *plVar13;
  ulong uVar14;
  ulong uVar15;
  long *plVar16;
  ulong uVar17;
  ulong uVar18;
  long *plVar19;
  long lVar20;
  long lVar21;
  float *pfVar22;
  long lVar23;
  long *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  int iVar24;
  undefined8 uVar25;
  uint *puVar26;
  long *plVar27;
  int iVar28;
  undefined8 *puVar29;
  long *unaff_x26;
  long *unaff_x27;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  double dVar40;
  ulong uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  float fVar45;
  float fVar46;
  ulong uVar47;
  ulong uVar48;
  float fVar49;
  ulong uVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  undefined4 uVar56;
  float fVar57;
  undefined4 uVar58;
  float fVar59;
  undefined8 in_stack_00000020;
  float fStack0000000000000028;
  float fStack000000000000002c;
  float fStack0000000000000030;
  float fStack0000000000000048;
  float fStack0000000000000068;
  undefined2 uStack000000000000006c;
  undefined4 uStack0000000000000070;
  float fStack0000000000000074;
  float in_stack_00000078;
  undefined4 uStack0000000000000080;
  float fStack0000000000000084;
  float fStack0000000000000088;
  float fStack000000000000008c;
  float fStack0000000000000090;
  float fStack0000000000000094;
  undefined8 in_stack_00000098;
  float fStack00000000000000a0;
  float fStack00000000000000a4;
  undefined4 uStack00000000000000a8;
  undefined4 uStack00000000000000ac;
  undefined4 uStack00000000000000b0;
  undefined4 uStack00000000000000b4;
  undefined4 uStack00000000000000b8;
  undefined8 uStack00000000000000bc;
  undefined8 in_stack_000000c8;
  float fStack00000000000000d0;
  float fStack00000000000000d4;
  float fStack00000000000000d8;
  float fStack00000000000000dc;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined4 uStack00000000000000f8;
  undefined4 uStack00000000000000fc;
  undefined4 uStack0000000000000100;
  undefined8 uStack0000000000000104;
  undefined8 in_stack_00000140;
  float in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  undefined4 in_stack_00000168;
  undefined4 uStack0000000000000170;
  undefined8 uStack0000000000000174;
  
  fStack0000000000000030 = (float)FUN_03d554d8();
  *(undefined4 *)(unaff_x19 + 0x99) = 0xffffffff;
  fStack000000000000002c = (float)param_2;
  fStack0000000000000028 = (float)param_3;
  lVar12 = thunk_FUN_01c496e0(*unaff_x20);
  FUN_02d4f880(lVar12,*unaff_x21);
  puVar4 = System_Collections_Generic_List<GOAPPathRequest>_TypeInfo;
  puVar1 = System_Collections_Generic_List<FriendInfo>_TypeInfo;
  puVar2 = PTR_DAT_04239450;
  lVar20 = *(long *)(*(long *)(*unaff_x26 + 0xb8) + 0x58);
  if (lVar20 != 0) {
    iVar7 = 0;
    puVar29 = (undefined8 *)PTR_DAT_042397f8;
    do {
      puVar3 = System_Collections_Generic_List<GameObject>_TypeInfo;
      lVar20 = *(long *)(lVar20 + 0x70);
      if (lVar20 == 0) break;
      if (*(int *)(lVar20 + 0x18) <= iVar7) {
        iVar7 = 0;
        goto WeaponsRackWeapon__Start;
      }
      plVar13 = (long *)FUN_02d4fd88(lVar20,iVar7,*puVar29);
      if (plVar13 == (long *)0x0) break;
      if (((*(char *)((long)plVar13 + 0x1fc) == '\0') &&
          (uVar14 = (**(code **)(*plVar13 + 0x218))(plVar13,*(undefined8 *)(*plVar13 + 0x220)),
          (uVar14 & 1) == 0)) && ((char)plVar13[0x3d] == '\0')) {
        uVar25 = **(undefined8 **)(*(long *)puVar2 + 0xb8);
        if (*(int *)(*(long *)PTR_DAT_0422f9e8 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        uVar14 = FUN_03d4f3bc(uVar25,0,0);
        if ((uVar14 & 1) == 0) {
LAB_02092178:
          uVar25 = **(undefined8 **)(*(long *)puVar2 + 0xb8);
          if (*(int *)(*(long *)PTR_DAT_0422f9e8 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          uVar14 = FUN_03d4f3bc(uVar25,0,0);
          puVar3 = PTR_DAT_042392d8;
          if ((uVar14 & 1) != 0) {
            if (**(long **)(*(long *)puVar2 + 0xb8) == 0) break;
            if (*(int *)(**(long **)(*(long *)puVar2 + 0xb8) + 0x20) == 0x80) {
              if ((**(long **)(*(long *)PTR_DAT_04239590 + 0xb8) != 0) &&
                 (lVar20 = *(long *)(**(long **)(*(long *)PTR_DAT_04239590 + 0xb8) + 0x20),
                 lVar20 != 0)) {
                if ((*(char *)(lVar20 + 0x390) == '\0') || ((char)plVar13[0x72] == '\0'))
                goto LAB_0209210c;
                goto LAB_02092264;
              }
              break;
            }
          }
          lVar20 = plVar13[0x3f];
          lVar21 = *(long *)PTR_DAT_042392d8;
          if (*(int *)(lVar21 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
            lVar21 = *(long *)puVar3;
          }
          if (**(long **)(lVar21 + 0xb8) == 0) break;
          puVar29 = (undefined8 *)PTR_DAT_042397f8;
          if ((int)lVar20 == *(int *)(**(long **)(lVar21 + 0xb8) + 0x1a0)) goto LAB_0209210c;
        }
        else {
          lVar20 = **(long **)(*(long *)puVar2 + 0xb8);
          if (lVar20 == 0) break;
          if (*(int *)(lVar20 + 0x20) != 0x40) goto LAB_02092178;
        }
LAB_02092264:
        if (lVar12 == 0) break;
        lVar20 = plVar13[0x3b];
        lVar21 = *(long *)(lVar12 + 0x10);
        lVar23 = *(long *)puVar4;
        *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
        if (lVar21 == 0) break;
        uVar9 = *(uint *)(lVar12 + 0x18);
        if (uVar9 < *(uint *)(lVar21 + 0x18)) {
          *(uint *)(lVar12 + 0x18) = uVar9 + 1;
          *(long *)(lVar21 + (long)(int)uVar9 * 8 + 0x20) = lVar20;
        }
        else {
          FUN_02d5004c(lVar12,lVar20,
                       *(undefined8 *)(*(long *)(*(long *)(lVar23 + 0x20) + 0xc0) + 0x70));
        }
      }
LAB_0209210c:
      iVar7 = iVar7 + 1;
      lVar20 = *(long *)(*(long *)(*unaff_x26 + 0xb8) + 0x58);
    } while (lVar20 != 0);
  }
  goto LAB_02093f0c;
WeaponsRackWeapon__Start:
  lVar20 = *(long *)puVar1;
  if (*(int *)(lVar20 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
    lVar20 = *(long *)puVar1;
  }
  fVar35 = DAT_00b9350c;
  fVar53 = DAT_00b931d0;
  fVar34 = DAT_00b93090;
  fStack0000000000000068 = (float)param_3;
  fVar59 = (float)param_2;
  lVar21 = **(long **)(lVar20 + 0xb8);
  if (lVar21 == 0) goto LAB_02093f0c;
  if (*(int *)(lVar21 + 0x18) <= iVar7) {
    if (lVar12 != 0) {
      plVar13 = (long *)PTR_DAT_0422fa60;
      plVar27 = (long *)System_AccessViolationException_var;
      if (*(int *)(lVar12 + 0x18) < 1) {
        plVar16 = (long *)0x0;
        goto LAB_020928b4;
      }
      lVar20 = 0x4b4;
      if ((char)unaff_x19[0x13] != '\0') {
        lVar20 = 0x4b8;
      }
      lVar21 = *(long *)(*(long *)(*(long *)PTR_DAT_04239378 + 0xb8) + 8);
      if (lVar21 != 0) {
        uVar17 = (ulong)(uint)DAT_00b9323c;
        fStack0000000000000048 = *(float *)((long)unaff_x19 + 0x4ac) + DAT_00b9323c;
        fVar45 = *(float *)((long)unaff_x19 + lVar20) * DAT_00b93120;
        uVar14 = (ulong)(uint)fVar45;
        iVar7 = 0;
        iVar8 = -1;
        if (*(int *)(lVar21 + 0x30) != 4) {
          fVar45 = *(float *)((long)unaff_x19 + lVar20);
        }
        goto LAB_02092478;
      }
    }
    goto LAB_02093f0c;
  }
  if (*(int *)(lVar20 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
    lVar21 = **(long **)(*(long *)puVar1 + 0xb8);
    if (lVar21 == 0) goto LAB_02093f0c;
  }
  lVar20 = FUN_02d4fd88(lVar21,iVar7,*(undefined8 *)puVar3);
  if (lVar20 == 0) goto LAB_02093f0c;
  if (*(char *)(lVar20 + 0x4d) == '\0') {
    lVar20 = *(long *)puVar1;
    if (*(int *)(lVar20 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
      lVar20 = *(long *)puVar1;
    }
    if ((**(long **)(lVar20 + 0xb8) == 0) ||
       (uVar25 = FUN_02d4fd88(**(long **)(lVar20 + 0xb8),iVar7,*(undefined8 *)puVar3), lVar12 == 0))
    goto LAB_02093f0c;
    lVar20 = *(long *)(lVar12 + 0x10);
    lVar21 = *(long *)puVar4;
    *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
    if (lVar20 == 0) goto LAB_02093f0c;
    uVar9 = *(uint *)(lVar12 + 0x18);
    if (uVar9 < *(uint *)(lVar20 + 0x18)) {
      *(uint *)(lVar12 + 0x18) = uVar9 + 1;
      *(undefined8 *)(lVar20 + (long)(int)uVar9 * 8 + 0x20) = uVar25;
    }
    else {
      FUN_02d5004c(lVar12,uVar25,*(undefined8 *)(*(long *)(*(long *)(lVar21 + 0x20) + 0xc0) + 0x70))
      ;
    }
  }
  iVar7 = iVar7 + 1;
  goto WeaponsRackWeapon__Start;
LAB_02092478:
  do {
    fVar59 = (float)uVar14;
    lVar20 = FUN_02d4fd88(lVar12,iVar7,
                          *(undefined8 *)System_Collections_Generic_List<GUILayoutEntry>_TypeInfo);
    if ((lVar20 == 0) || (*(long *)(lVar20 + 0x40) == 0)) goto LAB_02093f0c;
    fVar30 = (float)FUN_03d554d8(*(long *)(lVar20 + 0x40),0);
    if (*unaff_x27 == 0) goto LAB_02093f0c;
    uVar14 = uVar17;
    fVar39 = fVar59;
    fVar31 = (float)FUN_03d554d8(*unaff_x27,0);
    uVar15 = uVar14;
    if (DAT_0452d9af == '\0') {
      FUN_01c5d288(plVar13);
      DAT_0452d9af = '\x01';
    }
    if (*(int *)(*plVar13 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    fVar59 = fVar59 - fVar39;
    fVar57 = (float)uVar17 - (float)uVar14;
    fVar30 = fVar30 - fVar31;
    fVar51 = fVar57 * fVar57 + fVar30 * fVar30 + fVar59 * fVar59;
    fVar31 = SQRT(fVar51);
    uVar14 = (ulong)(uint)fVar31;
    uVar17 = uVar15;
    fVar39 = fStack0000000000000048;
    iVar24 = iVar8;
    if ((fVar31 < fStack0000000000000048) && (fVar31 < *(float *)(unaff_x19 + 0x96))) {
      if (*unaff_x27 == 0) goto LAB_02093f0c;
      fVar33 = fVar31;
      fVar32 = (float)FUN_03d55c58(*unaff_x27,0);
      if (DAT_0452d9aa == '\0') {
        FUN_01c5d288(plVar13);
        uVar15 = uVar15 & 0xffffffff;
        DAT_0452d9aa = '\x01';
      }
      if (*(int *)(*plVar13 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
        uVar15 = uVar15 & 0xffffffff;
      }
      fVar37 = (float)uVar15;
      fVar51 = SQRT(fVar51 * (fVar37 * fVar37 + fVar32 * fVar32 + fVar33 * fVar33));
      fVar52 = 0.0;
      fVar36 = fVar34;
      if (fVar34 <= fVar51) {
        fVar51 = (fVar57 * fVar37 + fVar30 * fVar32 + fVar59 * fVar33) / fVar51;
        uVar15 = 0xbf800000;
        if (fVar51 < -1.0) {
          fVar51 = -1.0;
        }
        if (*(int *)(*plVar13 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        dVar40 = acos((double)fVar51);
        fVar52 = (float)dVar40 * fVar35;
        fVar36 = fVar35;
      }
      fVar59 = (float)uVar15;
      uVar14 = (ulong)(uint)fVar36;
      uVar17 = uVar15;
      if (fVar52 < fVar45) {
        if (*unaff_x27 == 0) goto LAB_02093f0c;
        fVar30 = (float)FUN_03d554d8(*unaff_x27,0);
        if (*unaff_x27 == 0) goto LAB_02093f0c;
        fVar51 = fVar36;
        fVar39 = fVar59;
        fVar57 = (float)FUN_03d55c58(*unaff_x27,0);
        fVar33 = cosf(fVar52 * fVar53);
        lVar20 = *plVar27;
        if (*(int *)(lVar20 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
          lVar20 = *plVar27;
        }
        iVar28 = 1;
        fVar33 = fVar31 * fVar33;
        if (fVar33 <= 0.25) {
          fVar33 = 0.25;
        }
        fVar32 = fVar59 + fVar33 * fVar39;
        uVar14 = (ulong)(uint)fVar32;
        uVar17 = (ulong)(uint)(fVar33 * fVar51);
        uVar15 = (ulong)(uint)fVar30;
        uVar18 = (ulong)(uint)fVar59;
        uVar48 = (ulong)(uint)fVar36;
        while( true ) {
          if (*(int *)(lVar20 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
            lVar20 = *plVar27;
          }
          plVar13 = (long *)PTR_DAT_0422fa60;
          fVar39 = fVar31;
          iVar24 = iVar7;
          if (**(int **)(lVar20 + 0xb8) <= iVar28) break;
          uVar50 = (ulong)(uint)fVar59;
          uVar47 = (ulong)(uint)fVar36;
          uVar41 = FUN_0203e30c(fVar30,uVar47,uVar50,fVar30 + fVar33 * fVar57,
                                fVar36 + fVar33 * fVar51,fVar32,0);
          uVar6 = FUN_03d4a6ac(*(undefined4 *)((long)unaff_x19 + 0x4ec),0);
          if (*(int *)(*(long *)PTR_DAT_042312b8 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8(*(long *)PTR_DAT_042312b8);
          }
          uVar15 = FUN_03da9ed0(uVar15,uVar48,uVar18,uVar41,uVar47,uVar50,&stack0x00000180,uVar6,1,0
                               );
          plVar27 = (long *)System_AccessViolationException_var;
          plVar13 = (long *)PTR_DAT_0422fa60;
          uVar14 = uVar48;
          uVar17 = uVar18;
          fVar39 = fStack0000000000000048;
          iVar24 = iVar8;
          if ((uVar15 & 1) != 0) break;
          lVar20 = *(long *)System_AccessViolationException_var;
          iVar28 = iVar28 + 1;
          uVar15 = uVar41;
          uVar18 = uVar50;
          uVar48 = uVar47;
        }
      }
    }
    fStack0000000000000048 = fVar39;
    fVar30 = (float)uVar17;
    fVar59 = (float)uVar14;
    iVar7 = iVar7 + 1;
    iVar8 = iVar24;
  } while (iVar7 < *(int *)(lVar12 + 0x18));
  if (iVar24 == -1) {
    plVar16 = (long *)0x0;
    fStack0000000000000068 = fVar30;
  }
  else {
    lVar20 = FUN_02d4fd88(lVar12,iVar24,
                          *(undefined8 *)System_Collections_Generic_List<GUILayoutEntry>_TypeInfo);
    if ((lVar20 == 0) || (*(long *)(lVar20 + 0x40) == 0)) goto LAB_02093f0c;
    fStack0000000000000030 = (float)FUN_03d554d8(*(long *)(lVar20 + 0x40),0);
    fStack000000000000002c = fVar59;
    plVar16 = (long *)FUN_02d4fd88(lVar12,iVar24,
                                   *(undefined8 *)
                                    System_Collections_Generic_List<GUILayoutEntry>_TypeInfo);
    fVar53 = *(float *)((long)unaff_x19 + 0x4cc);
    *(undefined1 *)((long)unaff_x19 + 0x4c4) = 1;
    fVar34 = (float)FUN_03d52334(0);
    fStack0000000000000068 = 0.0;
    fVar53 = fVar53 - fVar34 * *(float *)((long)unaff_x19 + 0x4d4);
    if (fVar53 <= 0.0) {
      fVar53 = 0.0;
    }
    *(float *)((long)unaff_x19 + 0x4cc) = fVar53;
    if (DAT_0452da32 == '\0') {
      fStack0000000000000068 = 0.0;
      FUN_01c5d288(PTR_DAT_0422fa60);
      DAT_0452da32 = '\x01';
    }
    if (*(int *)(*plVar13 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    fVar59 = INFINITY;
    iVar7 = -0x80000000;
    if ((float)(int)fVar53 != INFINITY) {
      iVar7 = (int)fVar53;
    }
    *(int *)(unaff_x19 + 0x31) = iVar7;
    (**(code **)(*unaff_x19 + 0x198))(unaff_x19,iVar7,*(undefined8 *)(*unaff_x19 + 0x1a0));
    if (plVar16 == (long *)0x0) goto LAB_02093f0c;
    *(int *)(unaff_x19 + 0x99) = (int)plVar16[9];
    *(undefined1 *)((long)unaff_x19 + 0x4c5) = *(undefined1 *)((long)plVar16 + 0x4c);
    fStack0000000000000028 = fVar30;
  }
LAB_020928b4:
  if (*(int *)(*(long *)PTR_DAT_0422f9e8 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  uVar14 = FUN_03d4dc54(plVar16,0,0);
  if ((uVar14 & 1) != 0) {
    if (*unaff_x27 == 0) goto LAB_02093f0c;
    uVar6 = FUN_03d554d8(*unaff_x27,0);
    if (*unaff_x27 == 0) goto LAB_02093f0c;
    fVar34 = fVar59;
    fVar53 = fStack0000000000000068;
    fVar35 = (float)FUN_03d55c58(*unaff_x27,0);
    if (DAT_0452d813 == '\0') {
      FUN_01c5d288(PTR_DAT_0422fa60);
      DAT_0452d813 = '\x01';
    }
    if (*(int *)(*plVar13 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    fVar45 = DAT_00b9323c;
    fVar30 = SQRT(fVar53 * fVar53 + fVar35 * fVar35 + fVar34 * fVar34);
    if (fVar30 <= DAT_00b9323c) {
      if (DAT_0452d6e9 == '\0') {
        FUN_01c5d288(PTR_DAT_042301b0);
        DAT_0452d6e9 = '\x01';
      }
      pfVar22 = *(float **)(*(long *)PTR_DAT_042301b0 + 0xb8);
      fVar35 = *pfVar22;
      fVar34 = pfVar22[1];
      fVar53 = pfVar22[2];
    }
    else {
      fVar35 = fVar35 / fVar30;
      fVar34 = fVar34 / fVar30;
      fVar53 = fVar53 / fVar30;
    }
    lVar12 = *(long *)(*(long *)(*(long *)PTR_DAT_04239378 + 0xb8) + 8);
    if (lVar12 == 0) goto LAB_02093f0c;
    if (*(int *)(lVar12 + 0x30) == 4) {
      lVar12 = FUN_03d01dcc(0);
      if (lVar12 == 0) goto LAB_02093f0c;
      iVar7 = FUN_03d013a0(lVar12,0);
      lVar12 = FUN_03d01dcc(0);
      if (lVar12 == 0) goto LAB_02093f0c;
      iVar8 = FUN_03d013dc(lVar12,0);
      lVar12 = FUN_03d01dcc(0);
      if (lVar12 == 0) goto LAB_02093f0c;
      fVar39 = 0.0;
      FUN_03d01bec(&stack0x00000098,(float)iVar7 * 0.5,(float)iVar8 * 0.5,lVar12,0);
      uVar58 = uStack00000000000000ac;
      uVar11 = uStack00000000000000a8;
      fVar30 = fStack00000000000000a4;
      in_stack_00000140 = in_stack_00000098;
      in_stack_00000148 = fStack00000000000000a0;
      if (*unaff_x27 == 0) goto LAB_02093f0c;
      lVar12 = unaff_x19[0x4e];
      fVar31 = fStack00000000000000a4;
      fVar51 = (float)FUN_03d55b58(*unaff_x27,0);
      fVar57 = (float)FUN_03d3e23c((int)lVar12,0);
      if (unaff_x19[0xf] == 0) goto LAB_02093f0c;
      uVar56 = *(undefined4 *)((long)unaff_x19 + 0x26c);
      fVar33 = fVar51;
      fVar32 = fVar31;
      fVar36 = (float)FUN_03d55a58(unaff_x19[0xf],0);
      fVar37 = (float)FUN_03d3e23c(uVar56,0);
      if (unaff_x19[0xf] == 0) goto LAB_02093f0c;
      fVar52 = fVar36;
      fVar55 = fVar33;
      fVar38 = (float)FUN_03d554d8(unaff_x19[0xf],0);
      if (*unaff_x27 == 0) goto LAB_02093f0c;
      fVar46 = fVar57 * fVar33 + fVar51 * fVar32 + fVar39 * fVar36;
      uVar14 = (ulong)(uint)fVar46;
      fVar49 = fVar51 * fVar37 + fVar31 * fVar32 + fVar39 * fVar33;
      uVar17 = (ulong)(uint)fVar49;
      fVar54 = (fVar31 * fVar36 + fVar57 * fVar32 + fVar39 * fVar37) - fVar51 * fVar33;
      fVar46 = fVar46 - fVar31 * fVar37;
      fVar49 = fVar49 - fVar57 * fVar36;
      fVar57 = ((fVar39 * fVar32 - fVar57 * fVar37) - fVar51 * fVar36) - fVar31 * fVar33;
      uVar25 = FUN_03d55c58(*unaff_x27,0);
      fVar39 = fVar49;
      fVar31 = fVar46;
      fVar51 = (float)FUN_03d3e4e0(fVar54,fVar46,fVar49,fVar57,uVar25,uVar14,uVar17,0);
      fVar57 = (float)FUN_03d3e4e0(fVar54,fVar46,fVar49,fVar57,fVar30,uVar11,uVar58,0);
      fVar30 = fVar49;
      if (DAT_0452d813 == '\0') {
        FUN_01c5d288(PTR_DAT_0422fa60);
        DAT_0452d813 = '\x01';
      }
      if (*(int *)(*plVar13 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      puVar2 = PTR_DAT_042392d8;
      fVar32 = fVar49 * fVar49;
      fVar33 = SQRT(fVar32 + fVar57 * fVar57 + fVar46 * fVar46);
      if (fVar33 <= fVar45) {
        if (DAT_0452d6e9 == '\0') {
          FUN_01c5d288(PTR_DAT_042301b0);
          DAT_0452d6e9 = '\x01';
        }
        pfVar22 = *(float **)(*(long *)PTR_DAT_042301b0 + 0xb8);
        fVar57 = *pfVar22;
        fVar46 = pfVar22[1];
        fVar49 = pfVar22[2];
      }
      else {
        fVar57 = fVar57 / fVar33;
        fVar46 = fVar46 / fVar33;
        fVar49 = fVar49 / fVar33;
      }
      lVar12 = *(long *)puVar2;
      if (*(int *)(lVar12 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
        lVar12 = *(long *)puVar2;
      }
      if (**(long **)(lVar12 + 0xb8) == 0) goto LAB_02093f0c;
      uVar25 = *(undefined8 *)(**(long **)(lVar12 + 0xb8) + 0x1c0);
      if (*(int *)(*(long *)PTR_DAT_0422f9e8 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uVar14 = FUN_03d4f3bc(uVar25,0,0);
      if ((uVar14 & 1) == 0) {
LAB_02092e04:
        uVar10 = 0;
        uVar9 = 0;
        lVar12 = 0;
      }
      else {
        lVar12 = *(long *)puVar2;
        if (*(int *)(lVar12 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
          lVar12 = *(long *)puVar2;
        }
        lVar20 = **(long **)(lVar12 + 0xb8);
        if ((lVar20 == 0) || (*(long *)(lVar20 + 0x1c0) == 0)) goto LAB_02093f0c;
        if (*(int *)(*(long *)(lVar20 + 0x1c0) + 0x20) != 0x28) goto LAB_02092e04;
        if (*(int *)(lVar12 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
          lVar20 = **(long **)(*(long *)puVar2 + 0xb8);
          if (lVar20 == 0) goto LAB_02093f0c;
        }
        if (*(long *)(lVar20 + 0x1c0) == 0) goto LAB_02093f0c;
        lVar12 = FUN_0230c12c(*(long *)(lVar20 + 0x1c0),*(undefined8 *)PTR_DAT_042397a8);
        if (*(int *)(*(long *)PTR_DAT_0422f9e8 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(*(long *)PTR_DAT_0422f9e8);
        }
        uVar14 = FUN_03d4dd60(lVar12,0);
        if ((uVar14 & 1) == 0) {
          uVar10 = 0;
          uVar9 = 0;
        }
        else {
          if (((lVar12 == 0) || (*(long *)(lVar12 + 0x5d8) == 0)) ||
             (lVar20 = FUN_03d468e8(*(long *)(lVar12 + 0x5d8),0), lVar20 == 0)) goto LAB_02093f0c;
          uVar9 = FUN_03d49a30(lVar20,0);
          if ((*(long *)(lVar12 + 0x5e0) == 0) ||
             (lVar20 = FUN_03d4a698(*(long *)(lVar12 + 0x5e0),0), lVar20 == 0)) goto LAB_02093f0c;
          uVar10 = FUN_03d49a30(lVar20,0);
          if ((*(long *)(lVar12 + 0x5d8) == 0) ||
             (lVar20 = FUN_03d468e8(*(long *)(lVar12 + 0x5d8),0), lVar20 == 0)) goto LAB_02093f0c;
          FUN_03d499ec(lVar20,0,0);
          if (*(long *)(lVar12 + 0x5e0) == 0) goto LAB_02093f0c;
          FUN_03d499ec(*(long *)(lVar12 + 0x5e0),0,0);
        }
      }
      in_stack_00000098 = in_stack_00000140;
      fStack00000000000000a0 = in_stack_00000148;
      uVar11 = FUN_03d4a6ac((int)unaff_x19[0x4f],0);
      if (*(int *)(*(long *)PTR_DAT_042312b8 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8(*(long *)PTR_DAT_042312b8);
      }
      in_stack_000000c8 = in_stack_00000098;
      fStack00000000000000d0 = fStack00000000000000a0;
      fStack00000000000000d4 = fVar57;
      fStack00000000000000d8 = fVar46;
      fStack00000000000000dc = fVar49;
      uVar14 = FUN_03da9b1c(0x7f800000,&stack0x000000c8,&stack0x00000110,uVar11,1,0);
      if ((uVar14 & 1) == 0) {
        fVar38 = fVar38 + fVar51;
        fVar32 = fVar52 + fVar31;
        fVar55 = fVar55 + fVar39;
      }
      else {
        fVar55 = fVar30;
        fVar38 = (float)FUN_03dad9a8(&stack0x00000110,0);
        fVar39 = fVar32;
        fVar30 = fVar55;
      }
      plVar13 = (long *)PTR_DAT_0422fa60;
      if (*(int *)(*(long *)PTR_DAT_0422f9e8 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uVar14 = FUN_03d4dd60(lVar12,0);
      if ((uVar14 & 1) != 0) {
        if (((lVar12 == 0) || (*(long *)(lVar12 + 0x5d8) == 0)) ||
           (lVar20 = FUN_03d468e8(*(long *)(lVar12 + 0x5d8),0), lVar20 == 0)) goto LAB_02093f0c;
        FUN_03d499ec(lVar20,uVar9 & 1,0);
        if (*(long *)(lVar12 + 0x5e0) == 0) goto LAB_02093f0c;
        FUN_03d499ec(*(long *)(lVar12 + 0x5e0),uVar10 & 1,0);
      }
      if (*unaff_x27 == 0) goto LAB_02093f0c;
      fVar31 = (float)FUN_03d554d8(*unaff_x27,0);
      plVar27 = (long *)System_AccessViolationException_var;
      if (*unaff_x27 == 0) goto LAB_02093f0c;
      fVar57 = fVar55 - fVar30;
      fVar33 = fVar32 - fVar39;
      fVar51 = (float)FUN_03d55c58(*unaff_x27,0);
      fVar57 = fVar57 * fVar30;
      if (0.0 < fVar57 + (fVar38 - fVar31) * fVar51 + fVar33 * fVar39) {
        if (*unaff_x27 == 0) goto LAB_02093f0c;
        fVar59 = fVar57;
        fStack0000000000000068 = fVar35;
        uVar6 = FUN_03d554d8(*unaff_x27,0);
        if (*unaff_x27 == 0) goto LAB_02093f0c;
        fVar34 = fVar59;
        fVar53 = fStack0000000000000068;
        fVar35 = (float)FUN_03d554d8(*unaff_x27,0);
        if (DAT_0452d813 == '\0') {
          FUN_01c5d288(PTR_DAT_0422fa60);
          DAT_0452d813 = '\x01';
        }
        fVar38 = fVar38 - fVar35;
        fVar32 = fVar32 - fVar34;
        fVar55 = fVar55 - fVar53;
        if (*(int *)(*plVar13 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        fVar35 = SQRT(fVar55 * fVar55 + fVar38 * fVar38 + fVar32 * fVar32);
        if (fVar35 <= fVar45) {
          if (DAT_0452d6e9 == '\0') {
            FUN_01c5d288(PTR_DAT_042301b0);
            DAT_0452d6e9 = '\x01';
          }
          pfVar22 = *(float **)(*(long *)PTR_DAT_042301b0 + 0xb8);
          fVar34 = pfVar22[1];
          fVar53 = pfVar22[2];
          fVar35 = *pfVar22;
        }
        else {
          fVar34 = fVar32 / fVar35;
          fVar53 = fVar55 / fVar35;
          fVar35 = fVar38 / fVar35;
        }
      }
    }
    fStack000000000000008c = fVar35;
    uStack0000000000000080 = uVar6;
    fStack0000000000000088 = fStack0000000000000068;
    fStack0000000000000084 = fVar59;
    fStack0000000000000090 = fVar34;
    fStack0000000000000094 = fVar53;
    FUN_020e350c(&stack0x00000098,*(undefined4 *)((long)unaff_x19 + 0x4ac),unaff_x19,
                 &stack0x00000080,(int)unaff_x19[0x4f],0);
    in_stack_00000158 = CONCAT44(fStack00000000000000a4,fStack00000000000000a0);
    uVar25 = CONCAT44(uStack00000000000000ac,uStack00000000000000a8);
    uVar14 = CONCAT44(uStack00000000000000b8,uStack00000000000000b4);
    in_stack_00000150 = in_stack_00000098;
    in_stack_00000168 = uStack00000000000000b0;
    uStack0000000000000174 = uStack00000000000000bc;
    uStack0000000000000170 = uStack00000000000000b8;
    in_stack_00000160 = uVar25;
    lVar12 = FUN_03dad9e8(&stack0x00000150,0);
    if (*(int *)(*(long *)PTR_DAT_0422f9e8 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8(*(long *)PTR_DAT_0422f9e8);
    }
    uVar17 = FUN_03d4f3bc(lVar12,0,0);
    if ((uVar17 & 1) == 0) {
      if (*unaff_x27 == 0) goto LAB_02093f0c;
      fStack0000000000000030 = (float)FUN_03d554d8(*unaff_x27,0);
      if (*unaff_x27 == 0) goto LAB_02093f0c;
      fVar34 = (float)uVar25;
      fVar53 = (float)uVar14;
      fVar35 = (float)FUN_03d55c58(*unaff_x27,0);
      fVar59 = *(float *)((long)unaff_x19 + 0x4ac);
      fStack0000000000000030 = fStack0000000000000030 + fVar35 * fVar59;
      fStack000000000000002c = (float)uVar25 + fVar34 * fVar59;
      fStack0000000000000028 = (float)uVar14 + fVar53 * fVar59;
    }
    else {
      fStack0000000000000030 = (float)FUN_03dad9a8(&stack0x00000150,0);
      fStack000000000000002c = (float)uVar25;
      fStack0000000000000028 = (float)uVar14;
      if (*(float *)(unaff_x19 + 0x98) < 0.0) {
        uVar17 = uVar14;
        lVar20 = FUN_03dad8fc(&stack0x00000150,0);
        if (lVar20 == 0) goto LAB_02093f0c;
        uVar15 = FUN_03d47010(lVar20,*(undefined8 *)UnityEngine_RaycastHit2D___var,0);
        if ((uVar15 & 1) == 0) {
          if (lVar12 == 0) goto LAB_02093f0c;
          plVar19 = (long *)FUN_0230c7e8(lVar12,*(undefined8 *)float___var);
          fVar34 = (float)uVar25;
          if (*(int *)(*(long *)PTR_DAT_0422f9e8 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8(*(long *)PTR_DAT_0422f9e8);
          }
          uVar15 = FUN_03d4f3bc(plVar19,0,0);
          if ((uVar15 & 1) == 0) {
            if (*(int *)(*(long *)PTR_DAT_04237a90 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8();
            }
            uVar14 = FUN_03568cd0(0);
            if ((uVar14 & 1) != 0) {
              lVar12 = FUN_0230c12c(lVar12,*(undefined8 *)
                                            System_Collections_Generic_KeyValuePair<string,_JSONNode>_TypeInfo
                                   );
              if (*(int *)(*(long *)PTR_DAT_0422f9e8 + 0xe0) == 0) {
                thunk_FUN_01c1d1e8(*(long *)PTR_DAT_0422f9e8);
              }
              uVar14 = FUN_03d4f3bc(lVar12,0,0);
              if ((uVar14 & 1) != 0) {
                if ((*unaff_x27 == 0) || (lVar20 = FUN_03d468ac(*unaff_x27,0), lVar20 == 0))
                goto LAB_02093f0c;
                fVar35 = (float)FUN_03d554d8(lVar20,0);
                uVar14 = uVar17;
                fVar53 = fVar34;
                fVar59 = (float)FUN_03dad9a8(&stack0x00000150,0);
                uVar15 = uVar14;
                if (DAT_0452d9af == '\0') {
                  FUN_01c5d288(PTR_DAT_0422fa60);
                  DAT_0452d9af = '\x01';
                }
                fVar45 = (float)uVar17 - (float)uVar14;
                if (*(int *)(*plVar13 + 0xe0) == 0) {
                  thunk_FUN_01c1d1e8();
                }
                fVar45 = fVar45 * fVar45;
                uVar14 = (ulong)(uint)fVar45;
                uVar6 = FUN_020943e8(SQRT(fVar45 + (fVar35 - fVar59) * (fVar35 - fVar59) +
                                                   (fVar34 - fVar53) * (fVar34 - fVar53)),unaff_x19)
                ;
                if (lVar12 == 0) goto LAB_02093f0c;
                FUN_01f616e0(lVar12,uVar6,0);
                uVar25 = FUN_03dad9a8(&stack0x00000150,0);
                if (*(int *)(*(long *)PTR_DAT_04231ee0 + 0xe0) == 0) {
                  thunk_FUN_01c1d1e8();
                }
                FUN_01ddc32c(uVar25,uVar14,uVar15,0x3f800000,0,
                             *(undefined8 *)System_Collections_Generic_List<BranchLabel>_TypeInfo,0,
                             0,0,0,0);
              }
            }
          }
          else {
            if (*unaff_x27 == 0) goto LAB_02093f0c;
            lVar12 = FUN_03d468ac(*unaff_x27,0);
            fVar53 = (float)uVar17;
            if (lVar12 == 0) goto LAB_02093f0c;
            fVar30 = (float)FUN_03d554d8(lVar12,0);
            fVar35 = fVar34;
            fVar45 = fVar53;
            fVar39 = (float)FUN_03dad9a8(&stack0x00000150,0);
            fVar59 = fVar45;
            if (DAT_0452d9af == '\0') {
              FUN_01c5d288(PTR_DAT_0422fa60);
              DAT_0452d9af = '\x01';
            }
            if (*(int *)(*plVar13 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8();
            }
            fVar53 = (fVar53 - fVar45) * (fVar53 - fVar45);
            uVar6 = FUN_020943e8(SQRT(fVar53 + (fVar30 - fVar39) * (fVar30 - fVar39) +
                                               (fVar34 - fVar35) * (fVar34 - fVar35)),unaff_x19);
            if (plVar19 == (long *)0x0) goto LAB_02093f0c;
            uVar25 = FUN_0230c12c(plVar19,*(undefined8 *)
                                           System_Func<T1,_T2,_T3,_T4,_T5,_T6,_T7,_T8,_T9,_TResult>_var
                                 );
            uVar11 = *(undefined4 *)((long)unaff_x19 + 0x1a4);
            lVar12 = FUN_03d468ac(unaff_x19,0);
            if (lVar12 == 0) goto LAB_02093f0c;
            fVar34 = (float)FUN_03d55c58(lVar12,0);
            (**(code **)(*plVar19 + 0x1c8))
                      (fStack0000000000000030,fStack000000000000002c,uVar14 & 0xffffffff,-fVar34,
                       -fVar53,-fVar59,plVar19,uVar25,uVar6,uVar11,1,(int)unaff_x19[4],0,0);
            *(undefined4 *)(unaff_x19 + 0x98) = *(undefined4 *)((long)unaff_x19 + 0x4bc);
            plVar27 = (long *)System_AccessViolationException_var;
            plVar13 = (long *)PTR_DAT_0422fa60;
          }
        }
        else {
          lVar12 = **(long **)(*(long *)PTR_DAT_04239ed8 + 0xb8);
          uVar42 = FUN_03dad9a8(&stack0x00000150,0);
          uVar44 = uVar25;
          uVar14 = uVar17;
          uVar43 = FUN_03dad9c0(&stack0x00000150,0);
          if (lVar12 == 0) goto LAB_02093f0c;
          FUN_020448a0(uVar42,uVar25,uVar17,uVar43,uVar44,uVar14,lVar12,0);
          fVar53 = (float)uVar17;
          fVar34 = (float)uVar25;
          lVar12 = FUN_03dad8fc(&stack0x00000150,0);
          if (lVar12 == 0) goto LAB_02093f0c;
          lVar12 = FUN_0230c12c(lVar12,*(undefined8 *)
                                        JsonResponseGeneral<CloudPlayerPrefab>_TypeInfo);
          if ((lVar12 == 0) || (*(long *)(lVar12 + 0x20) == 0)) {
            uVar25 = 0;
          }
          else {
            uVar25 = *(undefined8 *)(*(long *)(lVar12 + 0x20) + 0x48);
          }
          if (*(int *)(*(long *)PTR_DAT_0422f9e8 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          uVar14 = FUN_03d4f3bc(uVar25,0,0);
          puVar2 = PTR_DAT_042305b8;
          if ((uVar14 & 1) != 0) {
            if ((lVar12 == 0) || (*(long *)(lVar12 + 0x20) == 0)) goto LAB_02093f0c;
            lVar21 = *(long *)(*(long *)(lVar12 + 0x20) + 0x48);
            plVar13 = (long *)FUN_01c5d2fc(*(undefined8 *)PTR_DAT_042305b8,2);
            uVar6 = FUN_03dad9a8(&stack0x00000150,0);
            puVar1 = PTR_DAT_042301b0;
            in_stack_00000098 = CONCAT44(fVar34,uVar6);
            fStack00000000000000a0 = fVar53;
            lVar20 = thunk_FUN_01c49334(*(undefined8 *)PTR_DAT_042301b0,&stack0x00000098);
            if (plVar13 == (long *)0x0) goto LAB_02093f0c;
            if ((lVar20 != 0) &&
               (lVar23 = thunk_FUN_01c495e4(lVar20,*(undefined8 *)(*plVar13 + 0x40)), lVar23 == 0))
            goto LAB_02093f14;
            if ((int)plVar13[3] == 0) goto LAB_02093f10;
            plVar13[4] = lVar20;
            uStack0000000000000070 = FUN_03dad9c0(&stack0x00000150,0);
            fStack0000000000000074 = fVar34;
            in_stack_00000078 = fVar53;
            lVar20 = thunk_FUN_01c49334(*(undefined8 *)puVar1,&stack0x00000070);
            if ((lVar20 != 0) &&
               (lVar23 = thunk_FUN_01c495e4(lVar20,*(undefined8 *)(*plVar13 + 0x40)), lVar23 == 0))
            goto LAB_02093f14;
            if (*(uint *)(plVar13 + 3) < 2) goto LAB_02093f10;
            plVar13[5] = lVar20;
            if (lVar21 == 0) goto LAB_02093f0c;
            FUN_0357c4c8(lVar21,*(undefined8 *)
                                 System_Collections_Generic_KeyValuePair<string,_JToken>_TypeInfo,1,
                         plVar13,0);
            puVar1 = PTR_DAT_0422fa60;
            if ((*unaff_x27 == 0) || (lVar20 = FUN_03d468ac(*unaff_x27,0), lVar20 == 0))
            goto LAB_02093f0c;
            fVar45 = (float)FUN_03d554d8(lVar20,0);
            fVar35 = fVar34;
            fVar59 = fVar53;
            fVar30 = (float)FUN_03dad9a8(&stack0x00000150,0);
            if (DAT_0452d9af == '\0') {
              FUN_01c5d288(PTR_DAT_0422fa60);
              DAT_0452d9af = '\x01';
            }
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8();
            }
            uVar5 = FUN_020943e8(SQRT((fVar53 - fVar59) * (fVar53 - fVar59) +
                                      (fVar45 - fVar30) * (fVar45 - fVar30) +
                                      (fVar34 - fVar35) * (fVar34 - fVar35)),unaff_x19);
            if ((*(long *)(lVar12 + 0x20) == 0) ||
               (lVar12 = *(long *)(*(long *)(lVar12 + 0x20) + 0x48), lVar12 == 0))
            goto LAB_02093f0c;
            uVar25 = *(undefined8 *)(lVar12 + 0x80);
            plVar13 = (long *)FUN_01c5d2fc(*(undefined8 *)puVar2,2);
            if (*(int *)(*(long *)PTR_DAT_04237a90 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8(*(long *)PTR_DAT_04237a90);
            }
            lVar20 = FUN_035679d0(0);
            if (plVar13 == (long *)0x0) goto LAB_02093f0c;
            if ((lVar20 != 0) &&
               (lVar21 = thunk_FUN_01c495e4(lVar20,*(undefined8 *)(*plVar13 + 0x40)), lVar21 == 0))
            goto LAB_02093f14;
            if ((int)plVar13[3] == 0) goto LAB_02093f10;
            plVar13[4] = lVar20;
            uStack000000000000006c = uVar5;
            lVar20 = thunk_FUN_01c49334(*(undefined8 *)PTR_DAT_042305d0,(long)&stack0x00000068 + 4);
            if ((lVar20 != 0) &&
               (lVar21 = thunk_FUN_01c495e4(lVar20,*(undefined8 *)(*plVar13 + 0x40)), lVar21 == 0))
            goto LAB_02093f14;
            if (*(uint *)(plVar13 + 3) < 2) goto LAB_02093f10;
            plVar13[5] = lVar20;
            FUN_0357c5cc(lVar12,*(undefined8 *)
                                 System_Collections_Generic_KeyValuePair<string,_JSONNode>_TypeInfo,
                         uVar25,plVar13,0);
            plVar27 = (long *)System_AccessViolationException_var;
            plVar13 = (long *)PTR_DAT_0422fa60;
          }
          *(undefined4 *)(unaff_x19 + 0x98) = *(undefined4 *)((long)unaff_x19 + 0x4bc);
        }
      }
    }
    fVar53 = *(float *)((long)unaff_x19 + 0x4cc);
    *(undefined1 *)((long)unaff_x19 + 0x4c4) = 1;
    fVar34 = (float)FUN_03d52334(0);
    fVar53 = fVar53 - fVar34 * *(float *)((long)unaff_x19 + 0x4d4);
    if (fVar53 <= 0.0) {
      fVar53 = 0.0;
    }
    *(float *)((long)unaff_x19 + 0x4cc) = fVar53;
    if (DAT_0452da32 == '\0') {
      FUN_01c5d288(PTR_DAT_0422fa60);
      DAT_0452da32 = '\x01';
    }
    if (*(int *)(*plVar13 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    iVar7 = -0x80000000;
    if ((float)(int)fVar53 != INFINITY) {
      iVar7 = (int)fVar53;
    }
    *(int *)(unaff_x19 + 0x31) = iVar7;
    (**(code **)(*unaff_x19 + 0x198))(unaff_x19,iVar7,*(undefined8 *)(*unaff_x19 + 0x1a0));
  }
  lVar12 = *unaff_x27;
  if (*(int *)(*plVar27 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  uVar14 = (ulong)(uint)fStack000000000000002c;
  uVar17 = (ulong)(uint)fStack0000000000000028;
  lVar12 = FUN_0209458c(fStack0000000000000030,uVar14,lVar12);
  if (unaff_x19[0x91] == 0) goto LAB_02093f0c;
  FUN_03d11ba4(unaff_x19[0x91],lVar12,0);
  if (*(int *)(*(long *)PTR_DAT_0422f9e8 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  uVar15 = FUN_03d4dd60(plVar16,0);
  if ((uVar15 & 1) == 0) {
    if (DAT_00b93494 <= *(float *)(unaff_x19 + 0x9e)) {
      if (lVar12 == 0) goto LAB_02093f0c;
      if (*(int *)(lVar12 + 0x18) == 0) goto LAB_02093f10;
      if (*unaff_x27 == 0) {
LAB_02093f0c:
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      lVar12 = lVar12 + (long)(*(int *)(lVar12 + 0x18) + -1) * 0xc;
      uVar6 = *(undefined4 *)(lVar12 + 0x20);
      uVar11 = *(undefined4 *)(lVar12 + 0x24);
      uVar58 = *(undefined4 *)(lVar12 + 0x28);
      lVar12 = **(long **)(*(long *)PTR_DAT_04239ed8 + 0xb8);
      fVar34 = DAT_00b93494;
      fVar53 = (float)FUN_03d55c58(*unaff_x27,0);
      if (lVar12 == 0) goto LAB_02093f0c;
      FUN_02044538(uVar6,uVar11,uVar58,-fVar53,-fVar34,-(float)uVar17,lVar12,0);
      *(undefined4 *)(unaff_x19 + 0x9e) = 0;
    }
    lVar12 = *plVar27;
    if (*(int *)(lVar12 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
      lVar12 = *plVar27;
    }
    FUN_020940f8(*(undefined4 *)(*(long *)(lVar12 + 0xb8) + 4),unaff_x19);
  }
  else {
    lVar20 = *plVar27;
    if (*(int *)(lVar20 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
      lVar20 = *plVar27;
    }
    FUN_020940f8(*(undefined4 *)(*(long *)(lVar20 + 0xb8) + 8),unaff_x19);
    if (*(float *)(unaff_x19 + 0x98) < 0.0) {
      uStack0000000000000104 = 0;
      uStack0000000000000100 = 0;
      uStack00000000000000f8 = 0;
      uStack00000000000000fc = 0;
      in_stack_000000f0 = 0;
      in_stack_000000e8 = 0;
      in_stack_000000e0 = 0;
      if (lVar12 != 0) {
        uVar15 = 0;
        puVar26 = (uint *)(lVar12 + 0x28);
        lVar20 = 0x100000000;
        do {
          fVar34 = (float)uVar14;
          if ((long)((int)*(ulong *)(lVar12 + 0x18) + -1) <= (long)uVar15) {
            lVar12 = 0;
            plVar13 = (long *)PTR_DAT_0422fa60;
            goto LAB_020934f0;
          }
          uVar14 = *(ulong *)(lVar12 + 0x18) & 0xffffffff;
          if ((uVar14 <= uVar15) || (uVar15 = uVar15 + 1, uVar14 <= uVar15)) goto LAB_02093f10;
          lVar21 = lVar12 + (lVar20 >> 0x20) * 0xc;
          uVar9 = puVar26[-2];
          uVar14 = (ulong)puVar26[-1];
          uVar17 = (ulong)*puVar26;
          uVar11 = *(undefined4 *)(lVar21 + 0x20);
          uVar58 = *(undefined4 *)(lVar21 + 0x24);
          uVar56 = *(undefined4 *)(lVar21 + 0x28);
          uVar6 = FUN_03d4a6ac((int)unaff_x19[0x4f],0);
          if (*(int *)(*(long *)PTR_DAT_042312b8 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8(*(long *)PTR_DAT_042312b8);
          }
          puVar26 = puVar26 + 3;
          lVar20 = lVar20 + 0x100000000;
          uVar18 = FUN_03da9ed0(uVar9,uVar14,uVar17,uVar11,uVar58,uVar56,&stack0x000000e0,uVar6,1,0)
          ;
          fVar34 = (float)uVar14;
        } while ((uVar18 & 1) == 0);
        lVar12 = FUN_03dad8fc(&stack0x000000e0,0);
        plVar13 = (long *)PTR_DAT_0422fa60;
        if (lVar12 != 0) {
          lVar12 = FUN_0230c12c(lVar12,*(undefined8 *)
                                        JsonResponseGeneral<CloudPlayerPrefab>_TypeInfo);
LAB_020934f0:
          if (((*unaff_x27 != 0) &&
              (fVar53 = (float)FUN_03d554d8(*unaff_x27,0), plVar16 != (long *)0x0)) &&
             (uVar14 = uVar17, fVar35 = fVar34, lVar20 = FUN_03d468ac(plVar16,0), lVar20 != 0)) {
            fVar59 = (float)FUN_03d554d8(lVar20,0);
            uVar15 = uVar14;
            if (DAT_0452d9af == '\0') {
              FUN_01c5d288(PTR_DAT_0422fa60);
              DAT_0452d9af = '\x01';
            }
            fVar45 = (float)uVar17 - (float)uVar14;
            if (*(int *)(*plVar13 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8();
            }
            fVar45 = fVar45 * fVar45;
            uVar14 = (ulong)(uint)fVar45;
            uVar6 = FUN_020943e8(SQRT(fVar45 + (fVar53 - fVar59) * (fVar53 - fVar59) +
                                               (fVar34 - fVar35) * (fVar34 - fVar35)),unaff_x19);
            if (*(int *)(*(long *)PTR_DAT_0422f9e8 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8(*(long *)PTR_DAT_0422f9e8);
            }
            uVar17 = FUN_03d4f3bc(lVar12,0,0);
            if ((uVar17 & 1) == 0) {
              lVar20 = plVar16[0x1b];
              uVar11 = *(undefined4 *)((long)unaff_x19 + 0x1a4);
              lVar12 = FUN_03d468ac(unaff_x19,0);
              fVar53 = (float)uVar15;
              fVar34 = (float)uVar14;
              if (lVar12 == 0) goto LAB_02093f0c;
              fVar35 = (float)FUN_03d55c58(lVar12,0);
              (**(code **)(*plVar16 + 0x1c8))
                        (fStack0000000000000030,fStack000000000000002c,fStack0000000000000028,
                         -fVar35,-fVar34,-fVar53,plVar16,lVar20,uVar6,uVar11,1,(int)unaff_x19[4],0,0
                        );
            }
            else {
              lVar20 = **(long **)(*(long *)PTR_DAT_04239ed8 + 0xb8);
              uVar25 = FUN_03dad9a8(&stack0x000000e0,0);
              uVar17 = uVar14;
              uVar18 = uVar15;
              uVar44 = FUN_03dad9c0(&stack0x000000e0,0);
              if (lVar20 == 0) goto LAB_02093f0c;
              FUN_020448a0(uVar25,uVar14,uVar15,uVar44,uVar17,uVar18,lVar20,0);
              fVar53 = (float)uVar15;
              fVar34 = (float)uVar14;
              if ((lVar12 == 0) || (*(long *)(lVar12 + 0x20) == 0)) {
                uVar25 = 0;
              }
              else {
                uVar25 = *(undefined8 *)(*(long *)(lVar12 + 0x20) + 0x48);
              }
              if (*(int *)(*(long *)PTR_DAT_0422f9e8 + 0xe0) == 0) {
                thunk_FUN_01c1d1e8();
              }
              uVar14 = FUN_03d4f3bc(uVar25,0,0);
              puVar2 = PTR_DAT_042305b8;
              if ((uVar14 & 1) != 0) {
                if ((lVar12 == 0) || (*(long *)(lVar12 + 0x20) == 0)) goto LAB_02093f0c;
                lVar21 = *(long *)(*(long *)(lVar12 + 0x20) + 0x48);
                plVar13 = (long *)FUN_01c5d2fc(*(undefined8 *)PTR_DAT_042305b8,2);
                uVar11 = FUN_03dad9a8(&stack0x000000e0,0);
                puVar1 = PTR_DAT_042301b0;
                in_stack_00000098 = CONCAT44(fVar34,uVar11);
                fStack00000000000000a0 = fVar53;
                lVar20 = thunk_FUN_01c49334(*(undefined8 *)PTR_DAT_042301b0,&stack0x00000098);
                if (plVar13 == (long *)0x0) goto LAB_02093f0c;
                if ((lVar20 != 0) &&
                   (lVar23 = thunk_FUN_01c495e4(lVar20,*(undefined8 *)(*plVar13 + 0x40)),
                   lVar23 == 0)) {
LAB_02093f14:
                  uVar25 = thunk_FUN_01c58458();
                    /* WARNING: Subroutine does not return */
                  FUN_01c5d37c(uVar25,0);
                }
                if ((int)plVar13[3] == 0) {
LAB_02093f10:
                    /* WARNING: Subroutine does not return */
                  FUN_01c5d4ac();
                }
                plVar13[4] = lVar20;
                uStack0000000000000070 = FUN_03dad9c0(&stack0x000000e0,0);
                fStack0000000000000074 = fVar34;
                in_stack_00000078 = fVar53;
                lVar20 = thunk_FUN_01c49334(*(undefined8 *)puVar1,&stack0x00000070);
                if ((lVar20 != 0) &&
                   (lVar23 = thunk_FUN_01c495e4(lVar20,*(undefined8 *)(*plVar13 + 0x40)),
                   lVar23 == 0)) goto LAB_02093f14;
                if (*(uint *)(plVar13 + 3) < 2) goto LAB_02093f10;
                plVar13[5] = lVar20;
                if (lVar21 == 0) goto LAB_02093f0c;
                FUN_0357c4c8(lVar21,*(undefined8 *)
                                     System_Collections_Generic_KeyValuePair<string,_JToken>_TypeInfo
                             ,1,plVar13,0);
                if ((*(long *)(lVar12 + 0x20) == 0) ||
                   (lVar12 = *(long *)(*(long *)(lVar12 + 0x20) + 0x48), lVar12 == 0))
                goto LAB_02093f0c;
                uVar25 = *(undefined8 *)(lVar12 + 0x80);
                plVar13 = (long *)FUN_01c5d2fc(*(undefined8 *)puVar2,2);
                if (*(int *)(*(long *)PTR_DAT_04237a90 + 0xe0) == 0) {
                  thunk_FUN_01c1d1e8(*(long *)PTR_DAT_04237a90);
                }
                lVar20 = FUN_035679d0(0);
                if (plVar13 == (long *)0x0) goto LAB_02093f0c;
                if ((lVar20 != 0) &&
                   (lVar21 = thunk_FUN_01c495e4(lVar20,*(undefined8 *)(*plVar13 + 0x40)),
                   lVar21 == 0)) goto LAB_02093f14;
                if ((int)plVar13[3] == 0) goto LAB_02093f10;
                plVar13[4] = lVar20;
                uStack000000000000006c = (undefined2)uVar6;
                lVar20 = thunk_FUN_01c49334(*(undefined8 *)PTR_DAT_042305d0,
                                            (long)&stack0x00000068 + 4);
                if ((lVar20 != 0) &&
                   (lVar21 = thunk_FUN_01c495e4(lVar20,*(undefined8 *)(*plVar13 + 0x40)),
                   lVar21 == 0)) goto LAB_02093f14;
                if (*(uint *)(plVar13 + 3) < 2) goto LAB_02093f10;
                plVar13[5] = lVar20;
                FUN_0357c5cc(lVar12,*(undefined8 *)
                                     System_Collections_Generic_KeyValuePair<string,_JSONNode>_TypeInfo
                             ,uVar25,plVar13,0);
              }
            }
            *(undefined4 *)(unaff_x19 + 0x98) = *(undefined4 *)((long)unaff_x19 + 0x4bc);
            goto LAB_0209389c;
          }
        }
      }
      goto LAB_02093f0c;
    }
  }
LAB_0209389c:
  fVar53 = *(float *)(unaff_x19 + 0x9e);
  fVar34 = (float)FUN_03d52334(0);
  *(float *)(unaff_x19 + 0x9e) = fVar53 + fVar34;
  if ((in_stack_00000020._4_4_ == 0) && (*(char *)((long)unaff_x19 + 0x4c4) != '\0')) {
    lVar20 = unaff_x19[0x9b];
    lVar12 = unaff_x19[0xf];
    if (*(int *)(*(long *)PTR_DAT_04231ee0 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    FUN_01ddc680(0x3f800000,0,lVar20,lVar12,0,0,0,0,0);
  }
  return;
}


