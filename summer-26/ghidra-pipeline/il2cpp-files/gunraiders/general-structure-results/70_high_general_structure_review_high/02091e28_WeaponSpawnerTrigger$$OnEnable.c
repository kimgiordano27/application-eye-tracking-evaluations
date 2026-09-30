/*
FUNCTION_NAME: WeaponSpawnerTrigger$$OnEnable
ENTRY_POINT: 02091e28
PROGRAM: gunraiders-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;ray_or_cast_sink_hits_4;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x020925d4) */

void WeaponSpawnerTrigger__OnEnable
               (undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,long *param_4)

{
  char cVar1;
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
  float local_228;
  float local_224;
  float fStack_220;
  float local_208;
  float local_1e8;
  undefined2 local_1e4 [2];
  undefined4 local_1e0;
  float fStack_1dc;
  float local_1d8;
  undefined4 local_1d0;
  float fStack_1cc;
  float local_1c8;
  float fStack_1c4;
  float local_1c0;
  float fStack_1bc;
  undefined8 local_1b8;
  float fStack_1b0;
  float fStack_1ac;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined8 uStack_194;
  undefined8 local_188;
  float local_180;
  float local_17c;
  float fStack_178;
  float local_174;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined4 uStack_158;
  undefined4 local_154;
  undefined4 uStack_150;
  undefined8 uStack_14c;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined4 uStack_128;
  undefined4 local_124;
  undefined4 uStack_120;
  undefined8 uStack_11c;
  undefined8 local_110;
  float local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  ulong uStack_f0;
  undefined4 uStack_e8;
  undefined4 local_e4;
  undefined4 uStack_e0;
  undefined8 uStack_dc;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined4 local_b4;
  undefined4 uStack_b0;
  undefined8 uStack_ac;
  
  if ((DAT_0452f348 & 1) == 0) {
    FUN_01c5d288(PTR_DAT_04239450);
    FUN_01c5d288(float___var);
    FUN_01c5d288(JsonResponseGeneral<CloudPlayerPrefab>_TypeInfo);
    FUN_01c5d288(System_Func<T1,_T2,_T3,_T4,_T5,_T6,_T7,_T8,_T9,_TResult>_var);
    FUN_01c5d288(System_Collections_Generic_KeyValuePair<string,_JSONNode>_TypeInfo);
    FUN_01c5d288(PTR_DAT_042397a8);
    FUN_01c5d288(System_Collections_Generic_List<FriendInfo>_TypeInfo);
    FUN_01c5d288(PTR_DAT_04239378);
    FUN_01c5d288(PTR_DAT_042305d0);
    FUN_01c5d288(System_AccessViolationException_var);
    FUN_01c5d288(System_Collections_Generic_List<GOAPPathRequest>_TypeInfo);
    FUN_01c5d288(System_Collections_Generic_List<GOAPWorldState>_TypeInfo);
    FUN_01c5d288(PTR_DAT_042397f0);
    FUN_01c5d288(System_Collections_Generic_List<GOAPWorldState_Vehicle>_TypeInfo);
    FUN_01c5d288(System_Collections_Generic_List<GUIContent>_TypeInfo);
    FUN_01c5d288(System_Collections_Generic_List<GUILayoutEntry>_TypeInfo);
    FUN_01c5d288(PTR_DAT_042397f8);
    FUN_01c5d288(System_Collections_Generic_List<GameObject>_TypeInfo);
    FUN_01c5d288(System_Collections_Generic_List<Glyph>_TypeInfo);
    FUN_01c5d288(PTR_DAT_04231ee0);
    FUN_01c5d288(PTR_DAT_04239ed8);
    FUN_01c5d288(PTR_DAT_042305b8);
    FUN_01c5d288(PTR_DAT_0422f9e8);
    FUN_01c5d288(PTR_DAT_042392c0);
    FUN_01c5d288(PTR_DAT_04237a90);
    FUN_01c5d288(PTR_DAT_042312b8);
    FUN_01c5d288(PTR_DAT_042392d8);
    FUN_01c5d288(PTR_DAT_04239590);
    FUN_01c5d288(PTR_DAT_042301b0);
    FUN_01c5d288(System_Collections_Generic_KeyValuePair<string,_JSONNode>_TypeInfo);
    FUN_01c5d288(System_Collections_Generic_List<BranchLabel>_TypeInfo);
    FUN_01c5d288(System_Collections_Generic_KeyValuePair<string,_JToken>_TypeInfo);
    FUN_01c5d288(UnityEngine_RaycastHit2D___var);
    DAT_0452f348 = 1;
  }
  local_108 = 0.0;
  local_110 = 0;
  uStack_ac = 0;
  uStack_b0 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  uStack_b8 = 0;
  local_b4 = 0;
  uStack_c0 = 0;
  uStack_dc = 0;
  uStack_e0 = 0;
  uStack_f8 = 0;
  local_100 = 0;
  uStack_e8 = 0;
  local_e4 = 0;
  uStack_f0 = 0;
  uStack_11c = 0;
  uStack_120 = 0;
  uStack_138 = 0;
  local_140 = 0;
  uStack_128 = 0;
  local_124 = 0;
  uStack_130 = 0;
  uStack_14c = 0;
  uStack_150 = 0;
  uStack_158 = 0;
  local_154 = 0;
  uStack_160 = 0;
  uStack_168 = 0;
  local_170 = 0;
  plVar22 = param_4 + 0xf;
  cVar1 = *(char *)((long)param_4 + 0x4c4);
  *(undefined2 *)((long)param_4 + 0x4c4) = 0;
  puVar5 = System_Collections_Generic_List<Glyph>_TypeInfo;
  puVar2 = System_Collections_Generic_List<GOAPWorldState>_TypeInfo;
  puVar3 = PTR_DAT_042392c0;
  if (*plVar22 != 0) {
    fStack_220 = (float)FUN_03d554d8(*plVar22,0);
    *(undefined4 *)(param_4 + 0x99) = 0xffffffff;
    local_224 = (float)param_2;
    local_228 = (float)param_3;
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
  local_1e8 = (float)param_3;
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
      if ((char)param_4[0x13] != '\0') {
        lVar24 = 0x4b8;
      }
      lVar25 = *(long *)(*(long *)(*(long *)PTR_DAT_04239378 + 0xb8) + 8);
      if (lVar25 != 0) {
        uVar21 = (ulong)(uint)DAT_00b9323c;
        local_208 = *(float *)((long)param_4 + 0x4ac) + DAT_00b9323c;
        fVar47 = *(float *)((long)param_4 + lVar24) * DAT_00b93120;
        uVar16 = (ulong)(uint)fVar47;
        iVar9 = 0;
        iVar10 = -1;
        if (*(int *)(lVar25 + 0x30) != 4) {
          fVar47 = *(float *)((long)param_4 + lVar24);
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
    fVar43 = local_208;
    iVar28 = iVar10;
    if ((fVar35 < local_208) && (fVar35 < *(float *)(param_4 + 0x96))) {
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
          uVar8 = FUN_03d4a6ac(*(undefined4 *)((long)param_4 + 0x4ec),0);
          if (*(int *)(*(long *)PTR_DAT_042312b8 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8(*(long *)PTR_DAT_042312b8);
          }
          uVar17 = FUN_03da9ed0(uVar17,uVar19,uVar20,uVar45,uVar49,uVar51,&local_d0,uVar8,1,0);
          plVar31 = (long *)System_AccessViolationException_var;
          plVar15 = (long *)PTR_DAT_0422fa60;
          uVar16 = uVar19;
          uVar21 = uVar20;
          fVar43 = local_208;
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
    local_208 = fVar43;
    fVar34 = (float)uVar21;
    fVar60 = (float)uVar16;
    iVar9 = iVar9 + 1;
    iVar10 = iVar28;
  } while (iVar9 < *(int *)(lVar14 + 0x18));
  if (iVar28 == -1) {
    plVar18 = (long *)0x0;
    fVar47 = fVar60;
    local_1e8 = fVar34;
  }
  else {
    lVar24 = FUN_02d4fd88(lVar14,iVar28,
                          *(undefined8 *)System_Collections_Generic_List<GUILayoutEntry>_TypeInfo);
    if ((lVar24 == 0) || (*(long *)(lVar24 + 0x40) == 0)) goto LAB_02093f0c;
    fStack_220 = (float)FUN_03d554d8(*(long *)(lVar24 + 0x40),0);
    plVar18 = (long *)FUN_02d4fd88(lVar14,iVar28,
                                   *(undefined8 *)
                                    System_Collections_Generic_List<GUILayoutEntry>_TypeInfo);
    fVar54 = *(float *)((long)param_4 + 0x4cc);
    *(undefined1 *)((long)param_4 + 0x4c4) = 1;
    fVar38 = (float)FUN_03d52334(0);
    local_1e8 = 0.0;
    fVar54 = fVar54 - fVar38 * *(float *)((long)param_4 + 0x4d4);
    if (fVar54 <= 0.0) {
      fVar54 = 0.0;
    }
    *(float *)((long)param_4 + 0x4cc) = fVar54;
    if (DAT_0452da32 == '\0') {
      local_1e8 = 0.0;
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
    *(int *)(param_4 + 0x31) = iVar9;
    (**(code **)(*param_4 + 0x198))(param_4,iVar9,*(undefined8 *)(*param_4 + 0x1a0));
    if (plVar18 == (long *)0x0) goto LAB_02093f0c;
    *(int *)(param_4 + 0x99) = (int)plVar18[9];
    *(undefined1 *)((long)param_4 + 0x4c5) = *(undefined1 *)((long)plVar18 + 0x4c);
    local_228 = fVar34;
    local_224 = fVar60;
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
    fVar54 = local_1e8;
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
      FUN_03d01bec(&local_1b8,(float)iVar9 * 0.5,(float)iVar10 * 0.5,lVar14,0);
      uVar59 = uStack_1a4;
      uVar13 = local_1a8;
      fVar34 = fStack_1ac;
      local_110 = local_1b8;
      local_108 = fStack_1b0;
      if (*plVar22 == 0) goto LAB_02093f0c;
      lVar14 = param_4[0x4e];
      fVar35 = fStack_1ac;
      fVar52 = (float)FUN_03d55b58(*plVar22,0);
      fVar58 = (float)FUN_03d3e23c((int)lVar14,0);
      if (param_4[0xf] == 0) goto LAB_02093f0c;
      uVar57 = *(undefined4 *)((long)param_4 + 0x26c);
      fVar37 = fVar52;
      fVar36 = fVar35;
      fVar40 = (float)FUN_03d55a58(param_4[0xf],0);
      fVar41 = (float)FUN_03d3e23c(uVar57,0);
      if (param_4[0xf] == 0) goto LAB_02093f0c;
      fVar53 = fVar40;
      fVar56 = fVar37;
      fVar42 = (float)FUN_03d554d8(param_4[0xf],0);
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
      local_1b8 = local_110;
      fStack_1b0 = local_108;
      uVar13 = FUN_03d4a6ac((int)param_4[0x4f],0);
      if (*(int *)(*(long *)PTR_DAT_042312b8 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8(*(long *)PTR_DAT_042312b8);
      }
      local_188 = local_1b8;
      local_180 = fStack_1b0;
      local_17c = fVar58;
      fStack_178 = fVar48;
      local_174 = fVar50;
      uVar16 = FUN_03da9b1c(0x7f800000,&local_188,&local_140,uVar13,1,0);
      if ((uVar16 & 1) == 0) {
        fVar42 = fVar42 + fVar52;
        fVar36 = fVar53 + fVar35;
        fVar56 = fVar56 + fVar43;
      }
      else {
        fVar56 = fVar34;
        fVar42 = (float)FUN_03dad9a8(&local_140,0);
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
        local_1e8 = fVar39;
        uVar8 = FUN_03d554d8(*plVar22,0);
        if (*plVar22 == 0) goto LAB_02093f0c;
        fVar38 = fVar47;
        fVar54 = local_1e8;
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
    fStack_1c4 = fVar39;
    local_1d0 = uVar8;
    local_1c8 = local_1e8;
    fStack_1cc = fVar47;
    local_1c0 = fVar38;
    fStack_1bc = fVar54;
    FUN_020e350c(&local_1b8,*(undefined4 *)((long)param_4 + 0x4ac),param_4,&local_1d0,
                 (int)param_4[0x4f],0);
    uStack_f8 = CONCAT44(fStack_1ac,fStack_1b0);
    uVar16 = CONCAT44(uStack_1a4,local_1a8);
    uVar21 = CONCAT44(uStack_198,uStack_19c);
    local_100 = local_1b8;
    uStack_e8 = uStack_1a0;
    uStack_dc = uStack_194;
    local_e4 = uStack_19c;
    uStack_e0 = uStack_198;
    uStack_f0 = uVar16;
    lVar14 = FUN_03dad9e8(&local_100,0);
    if (*(int *)(*(long *)PTR_DAT_0422f9e8 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8(*(long *)PTR_DAT_0422f9e8);
    }
    uVar17 = FUN_03d4f3bc(lVar14,0,0);
    if ((uVar17 & 1) == 0) {
      if (*plVar22 == 0) goto LAB_02093f0c;
      fStack_220 = (float)FUN_03d554d8(*plVar22,0);
      if (*plVar22 == 0) goto LAB_02093f0c;
      fVar38 = (float)uVar16;
      fVar54 = (float)uVar21;
      fVar39 = (float)FUN_03d55c58(*plVar22,0);
      fVar47 = *(float *)((long)param_4 + 0x4ac);
      fStack_220 = fStack_220 + fVar39 * fVar47;
      local_224 = (float)uVar16 + fVar38 * fVar47;
      local_228 = (float)uVar21 + fVar54 * fVar47;
    }
    else {
      fStack_220 = (float)FUN_03dad9a8(&local_100,0);
      local_224 = (float)uVar16;
      local_228 = (float)uVar21;
      if (*(float *)(param_4 + 0x98) < 0.0) {
        uVar17 = uVar16;
        uVar20 = uVar21;
        lVar24 = FUN_03dad8fc(&local_100,0);
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
                fVar47 = (float)FUN_03dad9a8(&local_100,0);
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
                                                   (fVar38 - fVar54) * (fVar38 - fVar54)),param_4);
                if (lVar14 == 0) goto LAB_02093f0c;
                FUN_01f616e0(lVar14,uVar8,0);
                uVar29 = FUN_03dad9a8(&local_100,0);
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
            fVar43 = (float)FUN_03dad9a8(&local_100,0);
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
                                               (fVar38 - fVar39) * (fVar38 - fVar39)),param_4);
            if (plVar23 == (long *)0x0) goto LAB_02093f0c;
            uVar29 = FUN_0230c12c(plVar23,*(undefined8 *)
                                           System_Func<T1,_T2,_T3,_T4,_T5,_T6,_T7,_T8,_T9,_TResult>_var
                                 );
            uVar13 = *(undefined4 *)((long)param_4 + 0x1a4);
            lVar14 = FUN_03d468ac(param_4,0);
            if (lVar14 == 0) goto LAB_02093f0c;
            fVar38 = (float)FUN_03d55c58(lVar14,0);
            (**(code **)(*plVar23 + 0x1c8))
                      (fStack_220,uVar16 & 0xffffffff,uVar21 & 0xffffffff,-fVar38,-fVar54,-fVar47,
                       plVar23,uVar29,uVar8,uVar13,1,(int)param_4[4],0,0,
                       *(undefined8 *)(*plVar23 + 0x1d0));
            *(undefined4 *)(param_4 + 0x98) = *(undefined4 *)((long)param_4 + 0x4bc);
            plVar31 = (long *)System_AccessViolationException_var;
            plVar15 = (long *)PTR_DAT_0422fa60;
          }
        }
        else {
          lVar14 = **(long **)(*(long *)PTR_DAT_04239ed8 + 0xb8);
          uVar29 = FUN_03dad9a8(&local_100,0);
          uVar16 = uVar17;
          uVar21 = uVar20;
          uVar46 = FUN_03dad9c0(&local_100,0);
          if (lVar14 == 0) goto LAB_02093f0c;
          FUN_020448a0(uVar29,uVar17,uVar20,uVar46,uVar16,uVar21,lVar14,0);
          fVar54 = (float)uVar20;
          fVar38 = (float)uVar17;
          lVar14 = FUN_03dad8fc(&local_100,0);
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
            uVar8 = FUN_03dad9a8(&local_100,0);
            puVar2 = PTR_DAT_042301b0;
            local_1b8 = CONCAT44(fVar38,uVar8);
            fStack_1b0 = fVar54;
            lVar24 = thunk_FUN_01c49334(*(undefined8 *)PTR_DAT_042301b0,&local_1b8);
            if (plVar15 == (long *)0x0) goto LAB_02093f0c;
            if ((lVar24 != 0) &&
               (lVar27 = thunk_FUN_01c495e4(lVar24,*(undefined8 *)(*plVar15 + 0x40)), lVar27 == 0))
            goto LAB_02093f14;
            if ((int)plVar15[3] == 0) goto LAB_02093f10;
            plVar15[4] = lVar24;
            local_1e0 = FUN_03dad9c0(&local_100,0);
            fStack_1dc = fVar38;
            local_1d8 = fVar54;
            lVar24 = thunk_FUN_01c49334(*(undefined8 *)puVar2,&local_1e0);
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
            fVar34 = (float)FUN_03dad9a8(&local_100,0);
            if (DAT_0452d9af == '\0') {
              FUN_01c5d288(PTR_DAT_0422fa60);
              DAT_0452d9af = '\x01';
            }
            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8();
            }
            uVar7 = FUN_020943e8(SQRT((fVar54 - fVar47) * (fVar54 - fVar47) +
                                      (fVar60 - fVar34) * (fVar60 - fVar34) +
                                      (fVar38 - fVar39) * (fVar38 - fVar39)),param_4);
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
            local_1e4[0] = uVar7;
            lVar24 = thunk_FUN_01c49334(*(undefined8 *)PTR_DAT_042305d0,local_1e4);
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
          *(undefined4 *)(param_4 + 0x98) = *(undefined4 *)((long)param_4 + 0x4bc);
        }
      }
    }
    fVar54 = *(float *)((long)param_4 + 0x4cc);
    *(undefined1 *)((long)param_4 + 0x4c4) = 1;
    fVar38 = (float)FUN_03d52334(0);
    fVar54 = fVar54 - fVar38 * *(float *)((long)param_4 + 0x4d4);
    if (fVar54 <= 0.0) {
      fVar54 = 0.0;
    }
    *(float *)((long)param_4 + 0x4cc) = fVar54;
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
    *(int *)(param_4 + 0x31) = iVar9;
    (**(code **)(*param_4 + 0x198))(param_4,iVar9,*(undefined8 *)(*param_4 + 0x1a0));
  }
  lVar14 = *plVar22;
  if (*(int *)(*plVar31 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  uVar16 = (ulong)(uint)local_224;
  uVar21 = (ulong)(uint)local_228;
  lVar14 = FUN_0209458c(fStack_220,uVar16,lVar14);
  if (param_4[0x91] == 0) goto LAB_02093f0c;
  FUN_03d11ba4(param_4[0x91],lVar14,0);
  if (*(int *)(*(long *)PTR_DAT_0422f9e8 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  uVar17 = FUN_03d4dd60(plVar18,0);
  if ((uVar17 & 1) == 0) {
    if (DAT_00b93494 <= *(float *)(param_4 + 0x9e)) {
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
      *(undefined4 *)(param_4 + 0x9e) = 0;
    }
    lVar14 = *plVar31;
    if (*(int *)(lVar14 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
      lVar14 = *plVar31;
    }
    FUN_020940f8(*(undefined4 *)(*(long *)(lVar14 + 0xb8) + 4),param_4);
  }
  else {
    lVar24 = *plVar31;
    if (*(int *)(lVar24 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
      lVar24 = *plVar31;
    }
    FUN_020940f8(*(undefined4 *)(*(long *)(lVar24 + 0xb8) + 8),param_4);
    if (*(float *)(param_4 + 0x98) < 0.0) {
      uStack_14c = 0;
      uStack_150 = 0;
      uStack_158 = 0;
      local_154 = 0;
      uStack_160 = 0;
      uStack_168 = 0;
      local_170 = 0;
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
          uVar8 = FUN_03d4a6ac((int)param_4[0x4f],0);
          if (*(int *)(*(long *)PTR_DAT_042312b8 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8(*(long *)PTR_DAT_042312b8);
          }
          puVar30 = puVar30 + 3;
          lVar24 = lVar24 + 0x100000000;
          uVar20 = FUN_03da9ed0(uVar11,uVar16,uVar21,uVar13,uVar59,uVar57,&local_170,uVar8,1,0);
          fVar38 = (float)uVar16;
        } while ((uVar20 & 1) == 0);
        lVar14 = FUN_03dad8fc(&local_170,0);
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
                                               (fVar38 - fVar39) * (fVar38 - fVar39)),param_4);
            if (*(int *)(*(long *)PTR_DAT_0422f9e8 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8(*(long *)PTR_DAT_0422f9e8);
            }
            uVar21 = FUN_03d4f3bc(lVar14,0,0);
            if ((uVar21 & 1) == 0) {
              lVar24 = plVar18[0x1b];
              uVar13 = *(undefined4 *)((long)param_4 + 0x1a4);
              lVar14 = FUN_03d468ac(param_4,0);
              fVar54 = (float)uVar17;
              fVar38 = (float)uVar16;
              if (lVar14 == 0) goto LAB_02093f0c;
              fVar39 = (float)FUN_03d55c58(lVar14,0);
              (**(code **)(*plVar18 + 0x1c8))
                        (fStack_220,local_224,local_228,-fVar39,-fVar38,-fVar54,plVar18,lVar24,uVar8
                         ,uVar13,1,(int)param_4[4],0,0,*(undefined8 *)(*plVar18 + 0x1d0));
            }
            else {
              lVar24 = **(long **)(*(long *)PTR_DAT_04239ed8 + 0xb8);
              uVar29 = FUN_03dad9a8(&local_170,0);
              uVar21 = uVar16;
              uVar20 = uVar17;
              uVar46 = FUN_03dad9c0(&local_170,0);
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
                uVar13 = FUN_03dad9a8(&local_170,0);
                puVar2 = PTR_DAT_042301b0;
                local_1b8 = CONCAT44(fVar38,uVar13);
                fStack_1b0 = fVar54;
                lVar24 = thunk_FUN_01c49334(*(undefined8 *)PTR_DAT_042301b0,&local_1b8);
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
                local_1e0 = FUN_03dad9c0(&local_170,0);
                fStack_1dc = fVar38;
                local_1d8 = fVar54;
                lVar24 = thunk_FUN_01c49334(*(undefined8 *)puVar2,&local_1e0);
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
                local_1e4[0] = (undefined2)uVar8;
                lVar24 = thunk_FUN_01c49334(*(undefined8 *)PTR_DAT_042305d0,local_1e4);
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
            *(undefined4 *)(param_4 + 0x98) = *(undefined4 *)((long)param_4 + 0x4bc);
            goto LAB_0209389c;
          }
        }
      }
      goto LAB_02093f0c;
    }
  }
LAB_0209389c:
  fVar54 = *(float *)(param_4 + 0x9e);
  fVar38 = (float)FUN_03d52334(0);
  *(float *)(param_4 + 0x9e) = fVar54 + fVar38;
  if ((cVar1 == '\0') && (*(char *)((long)param_4 + 0x4c4) != '\0')) {
    lVar24 = param_4[0x9b];
    lVar14 = param_4[0xf];
    if (*(int *)(*(long *)PTR_DAT_04231ee0 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    FUN_01ddc680(0x3f800000,0,lVar24,lVar14,0,0,0,0,0);
  }
  return;
}


