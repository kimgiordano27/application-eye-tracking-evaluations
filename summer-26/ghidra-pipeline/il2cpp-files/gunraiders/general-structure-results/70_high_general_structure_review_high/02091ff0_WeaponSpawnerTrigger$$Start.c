/*
FUNCTION_NAME: WeaponSpawnerTrigger$$Start
ENTRY_POINT: 02091ff0
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

void WeaponSpawnerTrigger__Start(undefined1 param_1 [16],undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined2 uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  undefined4 uVar13;
  long lVar14;
  long *plVar15;
  ulong uVar16;
  ulong uVar17;
  long *plVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  long *plVar22;
  long *plVar23;
  long lVar24;
  long lVar25;
  float *pfVar26;
  long lVar27;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  int iVar28;
  undefined8 uVar29;
  uint *puVar30;
  long *plVar31;
  int iVar32;
  undefined8 *puVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  double dVar44;
  ulong uVar45;
  undefined8 uVar46;
  float fVar47;
  float fVar48;
  ulong uVar49;
  float fVar50;
  ulong uVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  undefined4 uVar57;
  float fVar58;
  undefined4 uVar59;
  float fVar60;
  uint uStack0000000000000024;
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
  ulong in_stack_00000160;
  undefined4 in_stack_00000168;
  undefined4 uStack0000000000000170;
  undefined8 uStack0000000000000174;
  
  FUN_01c5d288();
  *(undefined1 *)(unaff_x20 + 0x348) = 1;
  in_stack_00000148 = 0.0;
  *(undefined8 *)(unaff_x21 + 0x60) = 0;
  *(undefined8 *)(unaff_x21 + 0xc4) = 0;
  *(undefined8 *)(unaff_x21 + 0xbc) = 0;
  *(undefined8 *)(unaff_x21 + 0xa8) = 0;
  *(undefined8 *)(unaff_x21 + 0xa0) = 0;
  *(undefined8 *)(unaff_x21 + 0xb8) = 0;
  *(undefined8 *)(unaff_x21 + 0xb0) = 0;
  *(undefined8 *)(unaff_x21 + 0x94) = 0;
  *(undefined8 *)(unaff_x21 + 0x8c) = 0;
  *(undefined8 *)(unaff_x21 + 0x78) = 0;
  *(undefined8 *)(unaff_x21 + 0x70) = 0;
  *(undefined8 *)(unaff_x21 + 0x88) = 0;
  *(undefined8 *)(unaff_x21 + 0x80) = 0;
  *(undefined8 *)(unaff_x21 + 0x54) = 0;
  *(undefined8 *)(unaff_x21 + 0x4c) = 0;
  *(undefined8 *)(unaff_x21 + 0x38) = 0;
  *(undefined8 *)(unaff_x21 + 0x30) = 0;
  *(undefined8 *)(unaff_x21 + 0x48) = 0;
  *(undefined8 *)(unaff_x21 + 0x40) = 0;
  *(undefined8 *)(unaff_x21 + 0x24) = 0;
  *(undefined8 *)(unaff_x21 + 0x1c) = 0;
  *(undefined8 *)(unaff_x21 + 0x18) = 0;
  *(undefined8 *)(unaff_x21 + 0x10) = 0;
  in_stack_000000e8 = 0;
  in_stack_000000e0 = 0;
  plVar22 = unaff_x19 + 0xf;
  bVar1 = *(byte *)((long)unaff_x19 + 0x4c4);
  *(undefined2 *)((long)unaff_x19 + 0x4c4) = 0;
  puVar5 = System_Collections_Generic_List<Glyph>_TypeInfo;
  puVar2 = System_Collections_Generic_List<GOAPWorldState>_TypeInfo;
  puVar3 = PTR_DAT_042392c0;
  uStack0000000000000024 = (uint)bVar1;
  if (*plVar22 != 0) {
    fStack0000000000000030 = (float)FUN_03d554d8(*plVar22,0);
    *(undefined4 *)(unaff_x19 + 0x99) = 0xffffffff;
    fStack000000000000002c = (float)param_2;
    fStack0000000000000028 = (float)param_3;
    lVar14 = thunk_FUN_01c496e0(*(undefined8 *)puVar5);
    FUN_02d4f880(lVar14,*(undefined8 *)puVar2);
    puVar6 = System_Collections_Generic_List<GOAPPathRequest>_TypeInfo;
    puVar5 = System_Collections_Generic_List<FriendInfo>_TypeInfo;
    puVar2 = PTR_DAT_04239450;
    lVar24 = *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x58);
    if (lVar24 != 0) {
      iVar9 = 0;
      puVar33 = (undefined8 *)PTR_DAT_042397f8;
      do {
        puVar4 = System_Collections_Generic_List<GameObject>_TypeInfo;
        lVar24 = *(long *)(lVar24 + 0x70);
        if (lVar24 == 0) break;
        if (*(int *)(lVar24 + 0x18) <= iVar9) {
          iVar9 = 0;
          goto WeaponsRackWeapon__Start;
        }
        plVar15 = (long *)FUN_02d4fd88(lVar24,iVar9,*puVar33);
        if (plVar15 == (long *)0x0) break;
        if (((*(char *)((long)plVar15 + 0x1fc) == '\0') &&
            (uVar16 = (**(code **)(*plVar15 + 0x218))(plVar15,*(undefined8 *)(*plVar15 + 0x220)),
            (uVar16 & 1) == 0)) && ((char)plVar15[0x3d] == '\0')) {
          uVar29 = **(undefined8 **)(*(long *)puVar2 + 0xb8);
          if (*(int *)(*(long *)PTR_DAT_0422f9e8 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          uVar16 = FUN_03d4f3bc(uVar29,0,0);
          if ((uVar16 & 1) == 0) {
LAB_02092178:
            uVar29 = **(undefined8 **)(*(long *)puVar2 + 0xb8);
            if (*(int *)(*(long *)PTR_DAT_0422f9e8 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8();
            }
            uVar16 = FUN_03d4f3bc(uVar29,0,0);
            puVar4 = PTR_DAT_042392d8;
            if ((uVar16 & 1) != 0) {
              if (**(long **)(*(long *)puVar2 + 0xb8) == 0) break;
              if (*(int *)(**(long **)(*(long *)puVar2 + 0xb8) + 0x20) == 0x80) {
                if ((**(long **)(*(long *)PTR_DAT_04239590 + 0xb8) != 0) &&
                   (lVar24 = *(long *)(**(long **)(*(long *)PTR_DAT_04239590 + 0xb8) + 0x20),
                   lVar24 != 0)) {
                  if ((*(char *)(lVar24 + 0x390) == '\0') || ((char)plVar15[0x72] == '\0'))
                  goto LAB_0209210c;
                  goto LAB_02092264;
                }
                break;
              }
            }
            lVar24 = plVar15[0x3f];
            lVar25 = *(long *)PTR_DAT_042392d8;
            if (*(int *)(lVar25 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8();
              lVar25 = *(long *)puVar4;
            }
            if (**(long **)(lVar25 + 0xb8) == 0) break;
            puVar33 = (undefined8 *)PTR_DAT_042397f8;
            if ((int)lVar24 == *(int *)(**(long **)(lVar25 + 0xb8) + 0x1a0)) goto LAB_0209210c;
          }
          else {
            lVar24 = **(long **)(*(long *)puVar2 + 0xb8);
            if (lVar24 == 0) break;
            if (*(int *)(lVar24 + 0x20) != 0x40) goto LAB_02092178;
          }
LAB_02092264:
          if (lVar14 == 0) break;
          lVar24 = plVar15[0x3b];
          lVar25 = *(long *)(lVar14 + 0x10);
          lVar27 = *(long *)puVar6;
          *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
          if (lVar25 == 0) break;
          uVar11 = *(uint *)(lVar14 + 0x18);
          if (uVar11 < *(uint *)(lVar25 + 0x18)) {
            *(uint *)(lVar14 + 0x18) = uVar11 + 1;
            *(long *)(lVar25 + (long)(int)uVar11 * 8 + 0x20) = lVar24;
          }
          else {
            FUN_02d5004c(lVar14,lVar24,
                         *(undefined8 *)(*(long *)(*(long *)(lVar27 + 0x20) + 0xc0) + 0x70));
          }
        }
LAB_0209210c:
        iVar9 = iVar9 + 1;
        lVar24 = *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x58);
      } while (lVar24 != 0);
    }
  }
  goto LAB_02093f0c;
WeaponsRackWeapon__Start:
  lVar24 = *(long *)puVar5;
  if (*(int *)(lVar24 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
    lVar24 = *(long *)puVar5;
  }
  fVar39 = DAT_00b9350c;
  fVar54 = DAT_00b931d0;
  fVar38 = DAT_00b93090;
  fStack0000000000000068 = (float)param_3;
  fVar47 = (float)param_2;
  lVar25 = **(long **)(lVar24 + 0xb8);
  if (lVar25 == 0) goto LAB_02093f0c;
  if (*(int *)(lVar25 + 0x18) <= iVar9) {
    if (lVar14 != 0) {
      plVar15 = (long *)PTR_DAT_0422fa60;
      plVar31 = (long *)System_AccessViolationException_var;
      if (*(int *)(lVar14 + 0x18) < 1) {
        plVar18 = (long *)0x0;
        goto LAB_020928b4;
      }
      lVar24 = 0x4b4;
      if ((char)unaff_x19[0x13] != '\0') {
        lVar24 = 0x4b8;
      }
      lVar25 = *(long *)(*(long *)(*(long *)PTR_DAT_04239378 + 0xb8) + 8);
      if (lVar25 != 0) {
        uVar21 = (ulong)(uint)DAT_00b9323c;
        fStack0000000000000048 = *(float *)((long)unaff_x19 + 0x4ac) + DAT_00b9323c;
        fVar47 = *(float *)((long)unaff_x19 + lVar24) * DAT_00b93120;
        uVar16 = (ulong)(uint)fVar47;
        iVar9 = 0;
        iVar10 = -1;
        if (*(int *)(lVar25 + 0x30) != 4) {
          fVar47 = *(float *)((long)unaff_x19 + lVar24);
        }
        goto LAB_02092478;
      }
    }
    goto LAB_02093f0c;
  }
  if (*(int *)(lVar24 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
    lVar25 = **(long **)(*(long *)puVar5 + 0xb8);
    if (lVar25 == 0) goto LAB_02093f0c;
  }
  lVar24 = FUN_02d4fd88(lVar25,iVar9,*(undefined8 *)puVar4);
  if (lVar24 == 0) goto LAB_02093f0c;
  if (*(char *)(lVar24 + 0x4d) == '\0') {
    lVar24 = *(long *)puVar5;
    if (*(int *)(lVar24 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
      lVar24 = *(long *)puVar5;
    }
    if ((**(long **)(lVar24 + 0xb8) == 0) ||
       (uVar29 = FUN_02d4fd88(**(long **)(lVar24 + 0xb8),iVar9,*(undefined8 *)puVar4), lVar14 == 0))
    goto LAB_02093f0c;
    lVar24 = *(long *)(lVar14 + 0x10);
    lVar25 = *(long *)puVar6;
    *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
    if (lVar24 == 0) goto LAB_02093f0c;
    uVar11 = *(uint *)(lVar14 + 0x18);
    if (uVar11 < *(uint *)(lVar24 + 0x18)) {
      *(uint *)(lVar14 + 0x18) = uVar11 + 1;
      *(undefined8 *)(lVar24 + (long)(int)uVar11 * 8 + 0x20) = uVar29;
    }
    else {
      FUN_02d5004c(lVar14,uVar29,*(undefined8 *)(*(long *)(*(long *)(lVar25 + 0x20) + 0xc0) + 0x70))
      ;
    }
  }
  iVar9 = iVar9 + 1;
  goto WeaponsRackWeapon__Start;
LAB_02092478:
  do {
    fVar60 = (float)uVar16;
    lVar24 = FUN_02d4fd88(lVar14,iVar9,
                          *(undefined8 *)System_Collections_Generic_List<GUILayoutEntry>_TypeInfo);
    if ((lVar24 == 0) || (*(long *)(lVar24 + 0x40) == 0)) goto LAB_02093f0c;
    fVar34 = (float)FUN_03d554d8(*(long *)(lVar24 + 0x40),0);
    if (*plVar22 == 0) goto LAB_02093f0c;
    uVar16 = uVar21;
    fVar43 = fVar60;
    fVar35 = (float)FUN_03d554d8(*plVar22,0);
    uVar17 = uVar16;
    if (DAT_0452d9af == '\0') {
      FUN_01c5d288(plVar15);
      DAT_0452d9af = '\x01';
    }
    if (*(int *)(*plVar15 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    fVar60 = fVar60 - fVar43;
    fVar58 = (float)uVar21 - (float)uVar16;
    fVar34 = fVar34 - fVar35;
    fVar52 = fVar58 * fVar58 + fVar34 * fVar34 + fVar60 * fVar60;
    fVar35 = SQRT(fVar52);
    uVar16 = (ulong)(uint)fVar35;
    uVar21 = uVar17;
    fVar43 = fStack0000000000000048;
    iVar28 = iVar10;
    if ((fVar35 < fStack0000000000000048) && (fVar35 < *(float *)(unaff_x19 + 0x96))) {
      if (*plVar22 == 0) goto LAB_02093f0c;
      fVar37 = fVar35;
      fVar36 = (float)FUN_03d55c58(*plVar22,0);
      if (DAT_0452d9aa == '\0') {
        FUN_01c5d288(plVar15);
        uVar17 = uVar17 & 0xffffffff;
        DAT_0452d9aa = '\x01';
      }
      if (*(int *)(*plVar15 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
        uVar17 = uVar17 & 0xffffffff;
      }
      fVar41 = (float)uVar17;
      fVar52 = SQRT(fVar52 * (fVar41 * fVar41 + fVar36 * fVar36 + fVar37 * fVar37));
      fVar53 = 0.0;
      fVar40 = fVar38;
      if (fVar38 <= fVar52) {
        fVar52 = (fVar58 * fVar41 + fVar34 * fVar36 + fVar60 * fVar37) / fVar52;
        uVar17 = 0xbf800000;
        if (fVar52 < -1.0) {
          fVar52 = -1.0;
        }
        if (*(int *)(*plVar15 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        dVar44 = acos((double)fVar52);
        fVar53 = (float)dVar44 * fVar39;
        fVar40 = fVar39;
      }
      fVar60 = (float)uVar17;
      uVar16 = (ulong)(uint)fVar40;
      uVar21 = uVar17;
      if (fVar53 < fVar47) {
        if (*plVar22 == 0) goto LAB_02093f0c;
        fVar34 = (float)FUN_03d554d8(*plVar22,0);
        if (*plVar22 == 0) goto LAB_02093f0c;
        fVar52 = fVar40;
        fVar43 = fVar60;
        fVar58 = (float)FUN_03d55c58(*plVar22,0);
        fVar37 = cosf(fVar53 * fVar54);
        lVar24 = *plVar31;
        if (*(int *)(lVar24 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
          lVar24 = *plVar31;
        }
        iVar32 = 1;
        fVar37 = fVar35 * fVar37;
        if (fVar37 <= 0.25) {
          fVar37 = 0.25;
        }
        fVar36 = fVar60 + fVar37 * fVar43;
        uVar16 = (ulong)(uint)fVar36;
        uVar21 = (ulong)(uint)(fVar37 * fVar52);
        uVar17 = (ulong)(uint)fVar34;
        uVar20 = (ulong)(uint)fVar60;
        uVar19 = (ulong)(uint)fVar40;
        while( true ) {
          if (*(int *)(lVar24 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
            lVar24 = *plVar31;
          }
          plVar15 = (long *)PTR_DAT_0422fa60;
          fVar43 = fVar35;
          iVar28 = iVar9;
          if (**(int **)(lVar24 + 0xb8) <= iVar32) break;
          uVar51 = (ulong)(uint)fVar60;
          uVar49 = (ulong)(uint)fVar40;
          uVar45 = FUN_0203e30c(fVar34,uVar49,uVar51,fVar34 + fVar37 * fVar58,
                                fVar40 + fVar37 * fVar52,fVar36,0);
          uVar8 = FUN_03d4a6ac(*(undefined4 *)((long)unaff_x19 + 0x4ec),0);
          if (*(int *)(*(long *)PTR_DAT_042312b8 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8(*(long *)PTR_DAT_042312b8);
          }
          uVar17 = FUN_03da9ed0(uVar17,uVar19,uVar20,uVar45,uVar49,uVar51,&stack0x00000180,uVar8,1,0
                               );
          plVar31 = (long *)System_AccessViolationException_var;
          plVar15 = (long *)PTR_DAT_0422fa60;
          uVar16 = uVar19;
          uVar21 = uVar20;
          fVar43 = fStack0000000000000048;
          iVar28 = iVar10;
          if ((uVar17 & 1) != 0) break;
          lVar24 = *(long *)System_AccessViolationException_var;
          iVar32 = iVar32 + 1;
          uVar17 = uVar45;
          uVar20 = uVar51;
          uVar19 = uVar49;
        }
      }
    }
    fStack0000000000000048 = fVar43;
    fVar34 = (float)uVar21;
    fVar60 = (float)uVar16;
    iVar9 = iVar9 + 1;
    iVar10 = iVar28;
  } while (iVar9 < *(int *)(lVar14 + 0x18));
  if (iVar28 == -1) {
    plVar18 = (long *)0x0;
    fVar47 = fVar60;
    fStack0000000000000068 = fVar34;
  }
  else {
    lVar24 = FUN_02d4fd88(lVar14,iVar28,
                          *(undefined8 *)System_Collections_Generic_List<GUILayoutEntry>_TypeInfo);
    if ((lVar24 == 0) || (*(long *)(lVar24 + 0x40) == 0)) goto LAB_02093f0c;
    fStack0000000000000030 = (float)FUN_03d554d8(*(long *)(lVar24 + 0x40),0);
    plVar18 = (long *)FUN_02d4fd88(lVar14,iVar28,
                                   *(undefined8 *)
                                    System_Collections_Generic_List<GUILayoutEntry>_TypeInfo);
    fVar54 = *(float *)((long)unaff_x19 + 0x4cc);
    *(undefined1 *)((long)unaff_x19 + 0x4c4) = 1;
    fVar38 = (float)FUN_03d52334(0);
    fStack0000000000000068 = 0.0;
    fVar54 = fVar54 - fVar38 * *(float *)((long)unaff_x19 + 0x4d4);
    if (fVar54 <= 0.0) {
      fVar54 = 0.0;
    }
    *(float *)((long)unaff_x19 + 0x4cc) = fVar54;
    if (DAT_0452da32 == '\0') {
      fStack0000000000000068 = 0.0;
      FUN_01c5d288(PTR_DAT_0422fa60);
      DAT_0452da32 = '\x01';
    }
    if (*(int *)(*plVar15 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    fVar47 = INFINITY;
    iVar9 = -0x80000000;
    if ((float)(int)fVar54 != INFINITY) {
      iVar9 = (int)fVar54;
    }
    *(int *)(unaff_x19 + 0x31) = iVar9;
    (**(code **)(*unaff_x19 + 0x198))(unaff_x19,iVar9,*(undefined8 *)(*unaff_x19 + 0x1a0));
    if (plVar18 == (long *)0x0) goto LAB_02093f0c;
    *(int *)(unaff_x19 + 0x99) = (int)plVar18[9];
    *(undefined1 *)((long)unaff_x19 + 0x4c5) = *(undefined1 *)((long)plVar18 + 0x4c);
    fStack0000000000000028 = fVar34;
    fStack000000000000002c = fVar60;
  }
LAB_020928b4:
  if (*(int *)(*(long *)PTR_DAT_0422f9e8 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  uVar16 = FUN_03d4dc54(plVar18,0,0);
  if ((uVar16 & 1) != 0) {
    if (*plVar22 == 0) goto LAB_02093f0c;
    uVar8 = FUN_03d554d8(*plVar22,0);
    if (*plVar22 == 0) goto LAB_02093f0c;
    fVar38 = fVar47;
    fVar54 = fStack0000000000000068;
    fVar39 = (float)FUN_03d55c58(*plVar22,0);
    if (DAT_0452d813 == '\0') {
      FUN_01c5d288(PTR_DAT_0422fa60);
      DAT_0452d813 = '\x01';
    }
    if (*(int *)(*plVar15 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    fVar60 = DAT_00b9323c;
    fVar34 = SQRT(fVar54 * fVar54 + fVar39 * fVar39 + fVar38 * fVar38);
    if (fVar34 <= DAT_00b9323c) {
      if (DAT_0452d6e9 == '\0') {
        FUN_01c5d288(PTR_DAT_042301b0);
        DAT_0452d6e9 = '\x01';
      }
      pfVar26 = *(float **)(*(long *)PTR_DAT_042301b0 + 0xb8);
      fVar39 = *pfVar26;
      fVar38 = pfVar26[1];
      fVar54 = pfVar26[2];
    }
    else {
      fVar39 = fVar39 / fVar34;
      fVar38 = fVar38 / fVar34;
      fVar54 = fVar54 / fVar34;
    }
    lVar14 = *(long *)(*(long *)(*(long *)PTR_DAT_04239378 + 0xb8) + 8);
    if (lVar14 == 0) goto LAB_02093f0c;
    if (*(int *)(lVar14 + 0x30) == 4) {
      lVar14 = FUN_03d01dcc(0);
      if (lVar14 == 0) goto LAB_02093f0c;
      iVar9 = FUN_03d013a0(lVar14,0);
      lVar14 = FUN_03d01dcc(0);
      if (lVar14 == 0) goto LAB_02093f0c;
      iVar10 = FUN_03d013dc(lVar14,0);
      lVar14 = FUN_03d01dcc(0);
      if (lVar14 == 0) goto LAB_02093f0c;
      fVar43 = 0.0;
      FUN_03d01bec(&stack0x00000098,(float)iVar9 * 0.5,(float)iVar10 * 0.5,lVar14,0);
      uVar59 = uStack00000000000000ac;
      uVar13 = uStack00000000000000a8;
      fVar34 = fStack00000000000000a4;
      in_stack_00000140 = in_stack_00000098;
      in_stack_00000148 = fStack00000000000000a0;
      if (*plVar22 == 0) goto LAB_02093f0c;
      lVar14 = unaff_x19[0x4e];
      fVar35 = fStack00000000000000a4;
      fVar52 = (float)FUN_03d55b58(*plVar22,0);
      fVar58 = (float)FUN_03d3e23c((int)lVar14,0);
      if (unaff_x19[0xf] == 0) goto LAB_02093f0c;
      uVar57 = *(undefined4 *)((long)unaff_x19 + 0x26c);
      fVar37 = fVar52;
      fVar36 = fVar35;
      fVar40 = (float)FUN_03d55a58(unaff_x19[0xf],0);
      fVar41 = (float)FUN_03d3e23c(uVar57,0);
      if (unaff_x19[0xf] == 0) goto LAB_02093f0c;
      fVar53 = fVar40;
      fVar56 = fVar37;
      fVar42 = (float)FUN_03d554d8(unaff_x19[0xf],0);
      if (*plVar22 == 0) goto LAB_02093f0c;
      fVar48 = fVar58 * fVar37 + fVar52 * fVar36 + fVar43 * fVar40;
      uVar16 = (ulong)(uint)fVar48;
      fVar50 = fVar52 * fVar41 + fVar35 * fVar36 + fVar43 * fVar37;
      uVar21 = (ulong)(uint)fVar50;
      fVar55 = (fVar35 * fVar40 + fVar58 * fVar36 + fVar43 * fVar41) - fVar52 * fVar37;
      fVar48 = fVar48 - fVar35 * fVar41;
      fVar50 = fVar50 - fVar58 * fVar40;
      fVar58 = ((fVar43 * fVar36 - fVar58 * fVar41) - fVar52 * fVar40) - fVar35 * fVar37;
      uVar29 = FUN_03d55c58(*plVar22,0);
      fVar43 = fVar50;
      fVar35 = fVar48;
      fVar52 = (float)FUN_03d3e4e0(fVar55,fVar48,fVar50,fVar58,uVar29,uVar16,uVar21,0);
      fVar58 = (float)FUN_03d3e4e0(fVar55,fVar48,fVar50,fVar58,fVar34,uVar13,uVar59,0);
      fVar34 = fVar50;
      if (DAT_0452d813 == '\0') {
        FUN_01c5d288(PTR_DAT_0422fa60);
        DAT_0452d813 = '\x01';
      }
      if (*(int *)(*plVar15 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      puVar3 = PTR_DAT_042392d8;
      fVar36 = fVar50 * fVar50;
      fVar37 = SQRT(fVar36 + fVar58 * fVar58 + fVar48 * fVar48);
      if (fVar37 <= fVar60) {
        if (DAT_0452d6e9 == '\0') {
          FUN_01c5d288(PTR_DAT_042301b0);
          DAT_0452d6e9 = '\x01';
        }
        pfVar26 = *(float **)(*(long *)PTR_DAT_042301b0 + 0xb8);
        fVar58 = *pfVar26;
        fVar48 = pfVar26[1];
        fVar50 = pfVar26[2];
      }
      else {
        fVar58 = fVar58 / fVar37;
        fVar48 = fVar48 / fVar37;
        fVar50 = fVar50 / fVar37;
      }
      lVar14 = *(long *)puVar3;
      if (*(int *)(lVar14 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
        lVar14 = *(long *)puVar3;
      }
      if (**(long **)(lVar14 + 0xb8) == 0) goto LAB_02093f0c;
      uVar29 = *(undefined8 *)(**(long **)(lVar14 + 0xb8) + 0x1c0);
      if (*(int *)(*(long *)PTR_DAT_0422f9e8 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uVar16 = FUN_03d4f3bc(uVar29,0,0);
      if ((uVar16 & 1) == 0) {
LAB_02092e04:
        uVar12 = 0;
        uVar11 = 0;
        lVar14 = 0;
      }
      else {
        lVar14 = *(long *)puVar3;
        if (*(int *)(lVar14 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
          lVar14 = *(long *)puVar3;
        }
        lVar24 = **(long **)(lVar14 + 0xb8);
        if ((lVar24 == 0) || (*(long *)(lVar24 + 0x1c0) == 0)) goto LAB_02093f0c;
        if (*(int *)(*(long *)(lVar24 + 0x1c0) + 0x20) != 0x28) goto LAB_02092e04;
        if (*(int *)(lVar14 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
          lVar24 = **(long **)(*(long *)puVar3 + 0xb8);
          if (lVar24 == 0) goto LAB_02093f0c;
        }
        if (*(long *)(lVar24 + 0x1c0) == 0) goto LAB_02093f0c;
        lVar14 = FUN_0230c12c(*(long *)(lVar24 + 0x1c0),*(undefined8 *)PTR_DAT_042397a8);
        if (*(int *)(*(long *)PTR_DAT_0422f9e8 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(*(long *)PTR_DAT_0422f9e8);
        }
        uVar16 = FUN_03d4dd60(lVar14,0);
        if ((uVar16 & 1) == 0) {
          uVar12 = 0;
          uVar11 = 0;
        }
        else {
          if (((lVar14 == 0) || (*(long *)(lVar14 + 0x5d8) == 0)) ||
             (lVar24 = FUN_03d468e8(*(long *)(lVar14 + 0x5d8),0), lVar24 == 0)) goto LAB_02093f0c;
          uVar11 = FUN_03d49a30(lVar24,0);
          if ((*(long *)(lVar14 + 0x5e0) == 0) ||
             (lVar24 = FUN_03d4a698(*(long *)(lVar14 + 0x5e0),0), lVar24 == 0)) goto LAB_02093f0c;
          uVar12 = FUN_03d49a30(lVar24,0);
          if ((*(long *)(lVar14 + 0x5d8) == 0) ||
             (lVar24 = FUN_03d468e8(*(long *)(lVar14 + 0x5d8),0), lVar24 == 0)) goto LAB_02093f0c;
          FUN_03d499ec(lVar24,0,0);
          if (*(long *)(lVar14 + 0x5e0) == 0) goto LAB_02093f0c;
          FUN_03d499ec(*(long *)(lVar14 + 0x5e0),0,0);
        }
      }
      in_stack_00000098 = in_stack_00000140;
      fStack00000000000000a0 = in_stack_00000148;
      uVar13 = FUN_03d4a6ac((int)unaff_x19[0x4f],0);
      if (*(int *)(*(long *)PTR_DAT_042312b8 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8(*(long *)PTR_DAT_042312b8);
      }
      in_stack_000000c8 = in_stack_00000098;
      fStack00000000000000d0 = fStack00000000000000a0;
      fStack00000000000000d4 = fVar58;
      fStack00000000000000d8 = fVar48;
      fStack00000000000000dc = fVar50;
      uVar16 = FUN_03da9b1c(0x7f800000,&stack0x000000c8,&stack0x00000110,uVar13,1,0);
      if ((uVar16 & 1) == 0) {
        fVar42 = fVar42 + fVar52;
        fVar36 = fVar53 + fVar35;
        fVar56 = fVar56 + fVar43;
      }
      else {
        fVar56 = fVar34;
        fVar42 = (float)FUN_03dad9a8(&stack0x00000110,0);
        fVar43 = fVar36;
        fVar34 = fVar56;
      }
      plVar15 = (long *)PTR_DAT_0422fa60;
      if (*(int *)(*(long *)PTR_DAT_0422f9e8 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uVar16 = FUN_03d4dd60(lVar14,0);
      if ((uVar16 & 1) != 0) {
        if (((lVar14 == 0) || (*(long *)(lVar14 + 0x5d8) == 0)) ||
           (lVar24 = FUN_03d468e8(*(long *)(lVar14 + 0x5d8),0), lVar24 == 0)) goto LAB_02093f0c;
        FUN_03d499ec(lVar24,uVar11 & 1,0);
        if (*(long *)(lVar14 + 0x5e0) == 0) goto LAB_02093f0c;
        FUN_03d499ec(*(long *)(lVar14 + 0x5e0),uVar12 & 1,0);
      }
      if (*plVar22 == 0) goto LAB_02093f0c;
      fVar35 = (float)FUN_03d554d8(*plVar22,0);
      plVar31 = (long *)System_AccessViolationException_var;
      if (*plVar22 == 0) goto LAB_02093f0c;
      fVar58 = fVar56 - fVar34;
      fVar37 = fVar36 - fVar43;
      fVar52 = (float)FUN_03d55c58(*plVar22,0);
      fVar58 = fVar58 * fVar34;
      if (0.0 < fVar58 + (fVar42 - fVar35) * fVar52 + fVar37 * fVar43) {
        if (*plVar22 == 0) goto LAB_02093f0c;
        fVar47 = fVar58;
        fStack0000000000000068 = fVar39;
        uVar8 = FUN_03d554d8(*plVar22,0);
        if (*plVar22 == 0) goto LAB_02093f0c;
        fVar38 = fVar47;
        fVar54 = fStack0000000000000068;
        fVar39 = (float)FUN_03d554d8(*plVar22,0);
        if (DAT_0452d813 == '\0') {
          FUN_01c5d288(PTR_DAT_0422fa60);
          DAT_0452d813 = '\x01';
        }
        fVar42 = fVar42 - fVar39;
        fVar36 = fVar36 - fVar38;
        fVar56 = fVar56 - fVar54;
        if (*(int *)(*plVar15 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        fVar39 = SQRT(fVar56 * fVar56 + fVar42 * fVar42 + fVar36 * fVar36);
        if (fVar39 <= fVar60) {
          if (DAT_0452d6e9 == '\0') {
            FUN_01c5d288(PTR_DAT_042301b0);
            DAT_0452d6e9 = '\x01';
          }
          pfVar26 = *(float **)(*(long *)PTR_DAT_042301b0 + 0xb8);
          fVar38 = pfVar26[1];
          fVar54 = pfVar26[2];
          fVar39 = *pfVar26;
        }
        else {
          fVar38 = fVar36 / fVar39;
          fVar54 = fVar56 / fVar39;
          fVar39 = fVar42 / fVar39;
        }
      }
    }
    fStack000000000000008c = fVar39;
    uStack0000000000000080 = uVar8;
    fStack0000000000000088 = fStack0000000000000068;
    fStack0000000000000084 = fVar47;
    fStack0000000000000090 = fVar38;
    fStack0000000000000094 = fVar54;
    FUN_020e350c(&stack0x00000098,*(undefined4 *)((long)unaff_x19 + 0x4ac),unaff_x19,
                 &stack0x00000080,(int)unaff_x19[0x4f],0);
    in_stack_00000158 = CONCAT44(fStack00000000000000a4,fStack00000000000000a0);
    uVar16 = CONCAT44(uStack00000000000000ac,uStack00000000000000a8);
    uVar21 = CONCAT44(uStack00000000000000b8,uStack00000000000000b4);
    in_stack_00000150 = in_stack_00000098;
    in_stack_00000168 = uStack00000000000000b0;
    uStack0000000000000174 = uStack00000000000000bc;
    uStack0000000000000170 = uStack00000000000000b8;
    in_stack_00000160 = uVar16;
    lVar14 = FUN_03dad9e8(&stack0x00000150,0);
    if (*(int *)(*(long *)PTR_DAT_0422f9e8 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8(*(long *)PTR_DAT_0422f9e8);
    }
    uVar17 = FUN_03d4f3bc(lVar14,0,0);
    if ((uVar17 & 1) == 0) {
      if (*plVar22 == 0) goto LAB_02093f0c;
      fStack0000000000000030 = (float)FUN_03d554d8(*plVar22,0);
      if (*plVar22 == 0) goto LAB_02093f0c;
      fVar38 = (float)uVar16;
      fVar54 = (float)uVar21;
      fVar39 = (float)FUN_03d55c58(*plVar22,0);
      fVar47 = *(float *)((long)unaff_x19 + 0x4ac);
      fStack0000000000000030 = fStack0000000000000030 + fVar39 * fVar47;
      fStack000000000000002c = (float)uVar16 + fVar38 * fVar47;
      fStack0000000000000028 = (float)uVar21 + fVar54 * fVar47;
    }
    else {
      fStack0000000000000030 = (float)FUN_03dad9a8(&stack0x00000150,0);
      fStack000000000000002c = (float)uVar16;
      fStack0000000000000028 = (float)uVar21;
      if (*(float *)(unaff_x19 + 0x98) < 0.0) {
        uVar17 = uVar16;
        uVar20 = uVar21;
        lVar24 = FUN_03dad8fc(&stack0x00000150,0);
        if (lVar24 == 0) goto LAB_02093f0c;
        uVar19 = FUN_03d47010(lVar24,*(undefined8 *)UnityEngine_RaycastHit2D___var,0);
        if ((uVar19 & 1) == 0) {
          if (lVar14 == 0) goto LAB_02093f0c;
          plVar23 = (long *)FUN_0230c7e8(lVar14,*(undefined8 *)float___var);
          fVar38 = (float)uVar17;
          if (*(int *)(*(long *)PTR_DAT_0422f9e8 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8(*(long *)PTR_DAT_0422f9e8);
          }
          uVar17 = FUN_03d4f3bc(plVar23,0,0);
          if ((uVar17 & 1) == 0) {
            if (*(int *)(*(long *)PTR_DAT_04237a90 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8();
            }
            uVar16 = FUN_03568cd0(0);
            if ((uVar16 & 1) != 0) {
              lVar14 = FUN_0230c12c(lVar14,*(undefined8 *)
                                            System_Collections_Generic_KeyValuePair<string,_JSONNode>_TypeInfo
                                   );
              if (*(int *)(*(long *)PTR_DAT_0422f9e8 + 0xe0) == 0) {
                thunk_FUN_01c1d1e8(*(long *)PTR_DAT_0422f9e8);
              }
              uVar16 = FUN_03d4f3bc(lVar14,0,0);
              if ((uVar16 & 1) != 0) {
                if ((*plVar22 == 0) || (lVar24 = FUN_03d468ac(*plVar22,0), lVar24 == 0))
                goto LAB_02093f0c;
                fVar39 = (float)FUN_03d554d8(lVar24,0);
                uVar16 = uVar20;
                fVar54 = fVar38;
                fVar47 = (float)FUN_03dad9a8(&stack0x00000150,0);
                uVar21 = uVar16;
                if (DAT_0452d9af == '\0') {
                  FUN_01c5d288(PTR_DAT_0422fa60);
                  DAT_0452d9af = '\x01';
                }
                fVar60 = (float)uVar20 - (float)uVar16;
                if (*(int *)(*plVar15 + 0xe0) == 0) {
                  thunk_FUN_01c1d1e8();
                }
                fVar60 = fVar60 * fVar60;
                uVar16 = (ulong)(uint)fVar60;
                uVar8 = FUN_020943e8(SQRT(fVar60 + (fVar39 - fVar47) * (fVar39 - fVar47) +
                                                   (fVar38 - fVar54) * (fVar38 - fVar54)),unaff_x19)
                ;
                if (lVar14 == 0) goto LAB_02093f0c;
                FUN_01f616e0(lVar14,uVar8,0);
                uVar29 = FUN_03dad9a8(&stack0x00000150,0);
                if (*(int *)(*(long *)PTR_DAT_04231ee0 + 0xe0) == 0) {
                  thunk_FUN_01c1d1e8();
                }
                FUN_01ddc32c(uVar29,uVar16,uVar21,0x3f800000,0,
                             *(undefined8 *)System_Collections_Generic_List<BranchLabel>_TypeInfo,0,
                             0,0,0,0);
              }
            }
          }
          else {
            if (*plVar22 == 0) goto LAB_02093f0c;
            lVar14 = FUN_03d468ac(*plVar22,0);
            fVar54 = (float)uVar20;
            if (lVar14 == 0) goto LAB_02093f0c;
            fVar34 = (float)FUN_03d554d8(lVar14,0);
            fVar39 = fVar38;
            fVar60 = fVar54;
            fVar43 = (float)FUN_03dad9a8(&stack0x00000150,0);
            fVar47 = fVar60;
            if (DAT_0452d9af == '\0') {
              FUN_01c5d288(PTR_DAT_0422fa60);
              DAT_0452d9af = '\x01';
            }
            if (*(int *)(*plVar15 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8();
            }
            fVar54 = (fVar54 - fVar60) * (fVar54 - fVar60);
            uVar8 = FUN_020943e8(SQRT(fVar54 + (fVar34 - fVar43) * (fVar34 - fVar43) +
                                               (fVar38 - fVar39) * (fVar38 - fVar39)),unaff_x19);
            if (plVar23 == (long *)0x0) goto LAB_02093f0c;
            uVar29 = FUN_0230c12c(plVar23,*(undefined8 *)
                                           System_Func<T1,_T2,_T3,_T4,_T5,_T6,_T7,_T8,_T9,_TResult>_var
                                 );
            uVar13 = *(undefined4 *)((long)unaff_x19 + 0x1a4);
            lVar14 = FUN_03d468ac(unaff_x19,0);
            if (lVar14 == 0) goto LAB_02093f0c;
            fVar38 = (float)FUN_03d55c58(lVar14,0);
            (**(code **)(*plVar23 + 0x1c8))
                      (fStack0000000000000030,uVar16 & 0xffffffff,uVar21 & 0xffffffff,-fVar38,
                       -fVar54,-fVar47,plVar23,uVar29,uVar8,uVar13,1,(int)unaff_x19[4],0,0);
            *(undefined4 *)(unaff_x19 + 0x98) = *(undefined4 *)((long)unaff_x19 + 0x4bc);
            plVar31 = (long *)System_AccessViolationException_var;
            plVar15 = (long *)PTR_DAT_0422fa60;
          }
        }
        else {
          lVar14 = **(long **)(*(long *)PTR_DAT_04239ed8 + 0xb8);
          uVar29 = FUN_03dad9a8(&stack0x00000150,0);
          uVar16 = uVar17;
          uVar21 = uVar20;
          uVar46 = FUN_03dad9c0(&stack0x00000150,0);
          if (lVar14 == 0) goto LAB_02093f0c;
          FUN_020448a0(uVar29,uVar17,uVar20,uVar46,uVar16,uVar21,lVar14,0);
          fVar54 = (float)uVar20;
          fVar38 = (float)uVar17;
          lVar14 = FUN_03dad8fc(&stack0x00000150,0);
          if (lVar14 == 0) goto LAB_02093f0c;
          lVar14 = FUN_0230c12c(lVar14,*(undefined8 *)
                                        JsonResponseGeneral<CloudPlayerPrefab>_TypeInfo);
          if ((lVar14 == 0) || (*(long *)(lVar14 + 0x20) == 0)) {
            uVar29 = 0;
          }
          else {
            uVar29 = *(undefined8 *)(*(long *)(lVar14 + 0x20) + 0x48);
          }
          if (*(int *)(*(long *)PTR_DAT_0422f9e8 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          uVar16 = FUN_03d4f3bc(uVar29,0,0);
          puVar3 = PTR_DAT_042305b8;
          if ((uVar16 & 1) != 0) {
            if ((lVar14 == 0) || (*(long *)(lVar14 + 0x20) == 0)) goto LAB_02093f0c;
            lVar25 = *(long *)(*(long *)(lVar14 + 0x20) + 0x48);
            plVar15 = (long *)FUN_01c5d2fc(*(undefined8 *)PTR_DAT_042305b8,2);
            uVar8 = FUN_03dad9a8(&stack0x00000150,0);
            puVar2 = PTR_DAT_042301b0;
            in_stack_00000098 = CONCAT44(fVar38,uVar8);
            fStack00000000000000a0 = fVar54;
            lVar24 = thunk_FUN_01c49334(*(undefined8 *)PTR_DAT_042301b0,&stack0x00000098);
            if (plVar15 == (long *)0x0) goto LAB_02093f0c;
            if ((lVar24 != 0) &&
               (lVar27 = thunk_FUN_01c495e4(lVar24,*(undefined8 *)(*plVar15 + 0x40)), lVar27 == 0))
            goto LAB_02093f14;
            if ((int)plVar15[3] == 0) goto LAB_02093f10;
            plVar15[4] = lVar24;
            uStack0000000000000070 = FUN_03dad9c0(&stack0x00000150,0);
            fStack0000000000000074 = fVar38;
            in_stack_00000078 = fVar54;
            lVar24 = thunk_FUN_01c49334(*(undefined8 *)puVar2,&stack0x00000070);
            if ((lVar24 != 0) &&
               (lVar27 = thunk_FUN_01c495e4(lVar24,*(undefined8 *)(*plVar15 + 0x40)), lVar27 == 0))
            goto LAB_02093f14;
            if (*(uint *)(plVar15 + 3) < 2) goto LAB_02093f10;
            plVar15[5] = lVar24;
            if (lVar25 == 0) goto LAB_02093f0c;
            FUN_0357c4c8(lVar25,*(undefined8 *)
                                 System_Collections_Generic_KeyValuePair<string,_JToken>_TypeInfo,1,
                         plVar15,0);
            puVar2 = PTR_DAT_0422fa60;
            if ((*plVar22 == 0) || (lVar24 = FUN_03d468ac(*plVar22,0), lVar24 == 0))
            goto LAB_02093f0c;
            fVar60 = (float)FUN_03d554d8(lVar24,0);
            fVar39 = fVar38;
            fVar47 = fVar54;
            fVar34 = (float)FUN_03dad9a8(&stack0x00000150,0);
            if (DAT_0452d9af == '\0') {
              FUN_01c5d288(PTR_DAT_0422fa60);
              DAT_0452d9af = '\x01';
            }
            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8();
            }
            uVar7 = FUN_020943e8(SQRT((fVar54 - fVar47) * (fVar54 - fVar47) +
                                      (fVar60 - fVar34) * (fVar60 - fVar34) +
                                      (fVar38 - fVar39) * (fVar38 - fVar39)),unaff_x19);
            if ((*(long *)(lVar14 + 0x20) == 0) ||
               (lVar14 = *(long *)(*(long *)(lVar14 + 0x20) + 0x48), lVar14 == 0))
            goto LAB_02093f0c;
            uVar29 = *(undefined8 *)(lVar14 + 0x80);
            plVar15 = (long *)FUN_01c5d2fc(*(undefined8 *)puVar3,2);
            if (*(int *)(*(long *)PTR_DAT_04237a90 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8(*(long *)PTR_DAT_04237a90);
            }
            lVar24 = FUN_035679d0(0);
            if (plVar15 == (long *)0x0) goto LAB_02093f0c;
            if ((lVar24 != 0) &&
               (lVar25 = thunk_FUN_01c495e4(lVar24,*(undefined8 *)(*plVar15 + 0x40)), lVar25 == 0))
            goto LAB_02093f14;
            if ((int)plVar15[3] == 0) goto LAB_02093f10;
            plVar15[4] = lVar24;
            uStack000000000000006c = uVar7;
            lVar24 = thunk_FUN_01c49334(*(undefined8 *)PTR_DAT_042305d0,(long)&stack0x00000068 + 4);
            if ((lVar24 != 0) &&
               (lVar25 = thunk_FUN_01c495e4(lVar24,*(undefined8 *)(*plVar15 + 0x40)), lVar25 == 0))
            goto LAB_02093f14;
            if (*(uint *)(plVar15 + 3) < 2) goto LAB_02093f10;
            plVar15[5] = lVar24;
            FUN_0357c5cc(lVar14,*(undefined8 *)
                                 System_Collections_Generic_KeyValuePair<string,_JSONNode>_TypeInfo,
                         uVar29,plVar15,0);
            plVar31 = (long *)System_AccessViolationException_var;
            plVar15 = (long *)PTR_DAT_0422fa60;
          }
          *(undefined4 *)(unaff_x19 + 0x98) = *(undefined4 *)((long)unaff_x19 + 0x4bc);
        }
      }
    }
    fVar54 = *(float *)((long)unaff_x19 + 0x4cc);
    *(undefined1 *)((long)unaff_x19 + 0x4c4) = 1;
    fVar38 = (float)FUN_03d52334(0);
    fVar54 = fVar54 - fVar38 * *(float *)((long)unaff_x19 + 0x4d4);
    if (fVar54 <= 0.0) {
      fVar54 = 0.0;
    }
    *(float *)((long)unaff_x19 + 0x4cc) = fVar54;
    if (DAT_0452da32 == '\0') {
      FUN_01c5d288(PTR_DAT_0422fa60);
      DAT_0452da32 = '\x01';
    }
    if (*(int *)(*plVar15 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    iVar9 = -0x80000000;
    if ((float)(int)fVar54 != INFINITY) {
      iVar9 = (int)fVar54;
    }
    *(int *)(unaff_x19 + 0x31) = iVar9;
    (**(code **)(*unaff_x19 + 0x198))(unaff_x19,iVar9,*(undefined8 *)(*unaff_x19 + 0x1a0));
  }
  lVar14 = *plVar22;
  if (*(int *)(*plVar31 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  uVar16 = (ulong)(uint)fStack000000000000002c;
  uVar21 = (ulong)(uint)fStack0000000000000028;
  lVar14 = FUN_0209458c(fStack0000000000000030,uVar16,lVar14);
  if (unaff_x19[0x91] == 0) goto LAB_02093f0c;
  FUN_03d11ba4(unaff_x19[0x91],lVar14,0);
  if (*(int *)(*(long *)PTR_DAT_0422f9e8 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  uVar17 = FUN_03d4dd60(plVar18,0);
  if ((uVar17 & 1) == 0) {
    if (DAT_00b93494 <= *(float *)(unaff_x19 + 0x9e)) {
      if (lVar14 == 0) goto LAB_02093f0c;
      if (*(int *)(lVar14 + 0x18) == 0) goto LAB_02093f10;
      if (*plVar22 == 0) {
LAB_02093f0c:
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      lVar14 = lVar14 + (long)(*(int *)(lVar14 + 0x18) + -1) * 0xc;
      uVar8 = *(undefined4 *)(lVar14 + 0x20);
      uVar13 = *(undefined4 *)(lVar14 + 0x24);
      uVar59 = *(undefined4 *)(lVar14 + 0x28);
      lVar14 = **(long **)(*(long *)PTR_DAT_04239ed8 + 0xb8);
      fVar38 = DAT_00b93494;
      fVar54 = (float)FUN_03d55c58(*plVar22,0);
      if (lVar14 == 0) goto LAB_02093f0c;
      FUN_02044538(uVar8,uVar13,uVar59,-fVar54,-fVar38,-(float)uVar21,lVar14,0);
      *(undefined4 *)(unaff_x19 + 0x9e) = 0;
    }
    lVar14 = *plVar31;
    if (*(int *)(lVar14 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
      lVar14 = *plVar31;
    }
    FUN_020940f8(*(undefined4 *)(*(long *)(lVar14 + 0xb8) + 4),unaff_x19);
  }
  else {
    lVar24 = *plVar31;
    if (*(int *)(lVar24 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
      lVar24 = *plVar31;
    }
    FUN_020940f8(*(undefined4 *)(*(long *)(lVar24 + 0xb8) + 8),unaff_x19);
    if (*(float *)(unaff_x19 + 0x98) < 0.0) {
      uStack0000000000000104 = 0;
      uStack0000000000000100 = 0;
      uStack00000000000000f8 = 0;
      uStack00000000000000fc = 0;
      in_stack_000000f0 = 0;
      in_stack_000000e8 = 0;
      in_stack_000000e0 = 0;
      if (lVar14 != 0) {
        uVar17 = 0;
        puVar30 = (uint *)(lVar14 + 0x28);
        lVar24 = 0x100000000;
        do {
          fVar38 = (float)uVar16;
          if ((long)((int)*(ulong *)(lVar14 + 0x18) + -1) <= (long)uVar17) {
            lVar14 = 0;
            plVar15 = (long *)PTR_DAT_0422fa60;
            goto LAB_020934f0;
          }
          uVar16 = *(ulong *)(lVar14 + 0x18) & 0xffffffff;
          if ((uVar16 <= uVar17) || (uVar17 = uVar17 + 1, uVar16 <= uVar17)) goto LAB_02093f10;
          lVar25 = lVar14 + (lVar24 >> 0x20) * 0xc;
          uVar11 = puVar30[-2];
          uVar16 = (ulong)puVar30[-1];
          uVar21 = (ulong)*puVar30;
          uVar13 = *(undefined4 *)(lVar25 + 0x20);
          uVar59 = *(undefined4 *)(lVar25 + 0x24);
          uVar57 = *(undefined4 *)(lVar25 + 0x28);
          uVar8 = FUN_03d4a6ac((int)unaff_x19[0x4f],0);
          if (*(int *)(*(long *)PTR_DAT_042312b8 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8(*(long *)PTR_DAT_042312b8);
          }
          puVar30 = puVar30 + 3;
          lVar24 = lVar24 + 0x100000000;
          uVar20 = FUN_03da9ed0(uVar11,uVar16,uVar21,uVar13,uVar59,uVar57,&stack0x000000e0,uVar8,1,0
                               );
          fVar38 = (float)uVar16;
        } while ((uVar20 & 1) == 0);
        lVar14 = FUN_03dad8fc(&stack0x000000e0,0);
        plVar15 = (long *)PTR_DAT_0422fa60;
        if (lVar14 != 0) {
          lVar14 = FUN_0230c12c(lVar14,*(undefined8 *)
                                        JsonResponseGeneral<CloudPlayerPrefab>_TypeInfo);
LAB_020934f0:
          if (((*plVar22 != 0) && (fVar54 = (float)FUN_03d554d8(*plVar22,0), plVar18 != (long *)0x0)
              ) && (uVar16 = uVar21, fVar39 = fVar38, lVar24 = FUN_03d468ac(plVar18,0), lVar24 != 0)
             ) {
            fVar47 = (float)FUN_03d554d8(lVar24,0);
            uVar17 = uVar16;
            if (DAT_0452d9af == '\0') {
              FUN_01c5d288(PTR_DAT_0422fa60);
              DAT_0452d9af = '\x01';
            }
            fVar60 = (float)uVar21 - (float)uVar16;
            if (*(int *)(*plVar15 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8();
            }
            fVar60 = fVar60 * fVar60;
            uVar16 = (ulong)(uint)fVar60;
            uVar8 = FUN_020943e8(SQRT(fVar60 + (fVar54 - fVar47) * (fVar54 - fVar47) +
                                               (fVar38 - fVar39) * (fVar38 - fVar39)),unaff_x19);
            if (*(int *)(*(long *)PTR_DAT_0422f9e8 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8(*(long *)PTR_DAT_0422f9e8);
            }
            uVar21 = FUN_03d4f3bc(lVar14,0,0);
            if ((uVar21 & 1) == 0) {
              lVar24 = plVar18[0x1b];
              uVar13 = *(undefined4 *)((long)unaff_x19 + 0x1a4);
              lVar14 = FUN_03d468ac(unaff_x19,0);
              fVar54 = (float)uVar17;
              fVar38 = (float)uVar16;
              if (lVar14 == 0) goto LAB_02093f0c;
              fVar39 = (float)FUN_03d55c58(lVar14,0);
              (**(code **)(*plVar18 + 0x1c8))
                        (fStack0000000000000030,fStack000000000000002c,fStack0000000000000028,
                         -fVar39,-fVar38,-fVar54,plVar18,lVar24,uVar8,uVar13,1,(int)unaff_x19[4],0,0
                        );
            }
            else {
              lVar24 = **(long **)(*(long *)PTR_DAT_04239ed8 + 0xb8);
              uVar29 = FUN_03dad9a8(&stack0x000000e0,0);
              uVar21 = uVar16;
              uVar20 = uVar17;
              uVar46 = FUN_03dad9c0(&stack0x000000e0,0);
              if (lVar24 == 0) goto LAB_02093f0c;
              FUN_020448a0(uVar29,uVar16,uVar17,uVar46,uVar21,uVar20,lVar24,0);
              fVar54 = (float)uVar17;
              fVar38 = (float)uVar16;
              if ((lVar14 == 0) || (*(long *)(lVar14 + 0x20) == 0)) {
                uVar29 = 0;
              }
              else {
                uVar29 = *(undefined8 *)(*(long *)(lVar14 + 0x20) + 0x48);
              }
              if (*(int *)(*(long *)PTR_DAT_0422f9e8 + 0xe0) == 0) {
                thunk_FUN_01c1d1e8();
              }
              uVar16 = FUN_03d4f3bc(uVar29,0,0);
              puVar3 = PTR_DAT_042305b8;
              if ((uVar16 & 1) != 0) {
                if ((lVar14 == 0) || (*(long *)(lVar14 + 0x20) == 0)) goto LAB_02093f0c;
                lVar25 = *(long *)(*(long *)(lVar14 + 0x20) + 0x48);
                plVar22 = (long *)FUN_01c5d2fc(*(undefined8 *)PTR_DAT_042305b8,2);
                uVar13 = FUN_03dad9a8(&stack0x000000e0,0);
                puVar2 = PTR_DAT_042301b0;
                in_stack_00000098 = CONCAT44(fVar38,uVar13);
                fStack00000000000000a0 = fVar54;
                lVar24 = thunk_FUN_01c49334(*(undefined8 *)PTR_DAT_042301b0,&stack0x00000098);
                if (plVar22 == (long *)0x0) goto LAB_02093f0c;
                if ((lVar24 != 0) &&
                   (lVar27 = thunk_FUN_01c495e4(lVar24,*(undefined8 *)(*plVar22 + 0x40)),
                   lVar27 == 0)) {
LAB_02093f14:
                  uVar29 = thunk_FUN_01c58458();
                    /* WARNING: Subroutine does not return */
                  FUN_01c5d37c(uVar29,0);
                }
                if ((int)plVar22[3] == 0) {
LAB_02093f10:
                    /* WARNING: Subroutine does not return */
                  FUN_01c5d4ac();
                }
                plVar22[4] = lVar24;
                uStack0000000000000070 = FUN_03dad9c0(&stack0x000000e0,0);
                fStack0000000000000074 = fVar38;
                in_stack_00000078 = fVar54;
                lVar24 = thunk_FUN_01c49334(*(undefined8 *)puVar2,&stack0x00000070);
                if ((lVar24 != 0) &&
                   (lVar27 = thunk_FUN_01c495e4(lVar24,*(undefined8 *)(*plVar22 + 0x40)),
                   lVar27 == 0)) goto LAB_02093f14;
                if (*(uint *)(plVar22 + 3) < 2) goto LAB_02093f10;
                plVar22[5] = lVar24;
                if (lVar25 == 0) goto LAB_02093f0c;
                FUN_0357c4c8(lVar25,*(undefined8 *)
                                     System_Collections_Generic_KeyValuePair<string,_JToken>_TypeInfo
                             ,1,plVar22,0);
                if ((*(long *)(lVar14 + 0x20) == 0) ||
                   (lVar14 = *(long *)(*(long *)(lVar14 + 0x20) + 0x48), lVar14 == 0))
                goto LAB_02093f0c;
                uVar29 = *(undefined8 *)(lVar14 + 0x80);
                plVar22 = (long *)FUN_01c5d2fc(*(undefined8 *)puVar3,2);
                if (*(int *)(*(long *)PTR_DAT_04237a90 + 0xe0) == 0) {
                  thunk_FUN_01c1d1e8(*(long *)PTR_DAT_04237a90);
                }
                lVar24 = FUN_035679d0(0);
                if (plVar22 == (long *)0x0) goto LAB_02093f0c;
                if ((lVar24 != 0) &&
                   (lVar25 = thunk_FUN_01c495e4(lVar24,*(undefined8 *)(*plVar22 + 0x40)),
                   lVar25 == 0)) goto LAB_02093f14;
                if ((int)plVar22[3] == 0) goto LAB_02093f10;
                plVar22[4] = lVar24;
                uStack000000000000006c = (undefined2)uVar8;
                lVar24 = thunk_FUN_01c49334(*(undefined8 *)PTR_DAT_042305d0,
                                            (long)&stack0x00000068 + 4);
                if ((lVar24 != 0) &&
                   (lVar25 = thunk_FUN_01c495e4(lVar24,*(undefined8 *)(*plVar22 + 0x40)),
                   lVar25 == 0)) goto LAB_02093f14;
                if (*(uint *)(plVar22 + 3) < 2) goto LAB_02093f10;
                plVar22[5] = lVar24;
                FUN_0357c5cc(lVar14,*(undefined8 *)
                                     System_Collections_Generic_KeyValuePair<string,_JSONNode>_TypeInfo
                             ,uVar29,plVar22,0);
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
  fVar54 = *(float *)(unaff_x19 + 0x9e);
  fVar38 = (float)FUN_03d52334(0);
  *(float *)(unaff_x19 + 0x9e) = fVar54 + fVar38;
  if ((uStack0000000000000024 == 0) && (*(char *)((long)unaff_x19 + 0x4c4) != '\0')) {
    lVar24 = unaff_x19[0x9b];
    lVar14 = unaff_x19[0xf];
    if (*(int *)(*(long *)PTR_DAT_04231ee0 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    FUN_01ddc680(0x3f800000,0,lVar24,lVar14,0,0,0,0,0);
  }
  return;
}


