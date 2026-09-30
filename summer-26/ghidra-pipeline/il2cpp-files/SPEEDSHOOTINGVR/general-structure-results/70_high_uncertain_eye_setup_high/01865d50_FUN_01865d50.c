/*
FUNCTION_NAME: FUN_01865d50
ENTRY_POINT: 01865d50
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_01865d50(long *param_1,undefined8 param_2,int param_3,long param_4)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long *plVar10;
  int iVar11;
  undefined8 *puVar12;
  int iVar13;
  int iVar14;
  long lVar15;
  long *plVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 local_68;
  
  if ((DAT_0247bc21 & 1) == 0) {
    FUN_00fdc2e4(PTR_DAT_0234bed8);
    DAT_0247bc21 = 1;
  }
                    /* try { // try from 01865d9c to 01965dab has its CatchHandler @ 01865dac */
  local_68 = 0;
  plVar10 = (long *)(param_4 + 0x20);
  lVar5 = *(long *)(*(long *)(*plVar10 + 0xc0) + 0x10);
                    /* catch() { ... } // from try @ 01865d28 with catch @ 01865dac
                       catch() { ... } // from try @ 01865d9c with catch @ 01865dac */
                    /* try { // try from 01865db0 to 01965db3 has its CatchHandler @ 01865dbc */
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
                    /* try { // try from 01865db4 to 01965dbf has its CatchHandler @ 01865c10 */
    lVar5 = FUN_0103c244();
  }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 01865db0 with catch @ 01865dbc
                        */
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_01022c14();
  }
  FUN_01ac2188(param_1,param_2,0,*(undefined8 *)(*(long *)(*plVar10 + 0xc0) + 0x18));
  if (param_1 == (long *)0x0) {
LAB_01866560:
                    /* WARNING: Subroutine does not return */
    FUN_00fdc534();
  }
  FUN_0216b764(param_1,0,0);
  lVar5 = FUN_01ac1638(param_1,*(undefined8 *)(*(long *)(*plVar10 + 0xc0) + 0x20));
  if (lVar5 == 0) goto LAB_01866560;
  *(undefined1 *)(lVar5 + 0x20) = 0;
  lVar5 = *(long *)(*(long *)(*plVar10 + 0xc0) + 8);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_0103c244();
  }
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_01022c14();
  }
  lVar5 = *(long *)(*(long *)(*plVar10 + 0xc0) + 8);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_0103c244();
  }
  FUN_021af390(param_1,**(undefined8 **)(lVar5 + 0xb8),0);
  lVar15 = param_1[0x82];
  lVar5 = *(long *)(*(long *)(*plVar10 + 0xc0) + 8);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_0103c244();
  }
  if (lVar15 == 0) goto LAB_01866560;
  FUN_021af390(lVar15,*(undefined8 *)(*(long *)(lVar5 + 0xb8) + 8),0);
  lVar5 = FUN_01ac1638(param_1,*(undefined8 *)(*(long *)(*plVar10 + 0xc0) + 0x20));
  lVar15 = *(long *)(*(long *)(*plVar10 + 0xc0) + 8);
  if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
    lVar15 = FUN_0103c244(lVar15);
  }
  if (lVar5 == 0) goto LAB_01866560;
  FUN_021af390(lVar5,*(undefined8 *)(*(long *)(lVar15 + 0xb8) + 0x10),0);
  *(undefined1 *)(param_1 + 0x8b) = 1;
  if ((*(byte *)(*(long *)(*(long *)(*plVar10 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
    FUN_0103c244();
  }
  lVar5 = thunk_FUN_010400dc();
  FUN_017d2804(lVar5,*(undefined8 *)(*(long *)(*plVar10 + 0xc0) + 0x38));
  param_1[0x8a] = lVar5;
  thunk_FUN_0106e12c(param_1 + 0x8a,lVar5);
  lVar15 = (**(code **)(*param_1 + 0x8a8))(param_1,*(undefined8 *)(*param_1 + 0x8b0));
  bVar1 = 1 < param_3;
  lVar5 = lVar15;
  if (param_3 < 2) {
    iVar11 = 1;
OVRManager_Observable<__Il2CppFullySharedGenericType>__get_Value:
    *(undefined4 *)((long)param_1 + 0x45c) = 0;
  }
  else {
    if (lVar15 == 0) goto LAB_01866560;
    iVar11 = 0;
    if (param_3 != 0) {
      iVar11 = *(int *)(lVar15 + 0x18) / param_3;
    }
    if (1 < iVar11) {
      lVar5 = *(long *)(*(long *)(*plVar10 + 0xc0) + 8);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_0103c244();
      }
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01022c14();
      }
      lVar5 = *(long *)(*(long *)(*plVar10 + 0xc0) + 8);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_0103c244();
      }
      lVar5 = FUN_021af390(param_1,*(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x20),0);
      goto OVRManager_Observable<__Il2CppFullySharedGenericType>__get_Value;
    }
    *(undefined4 *)((long)param_1 + 0x45c) = 0;
    if (iVar11 != 1) goto LAB_01866518;
    bVar1 = false;
  }
  iVar13 = 0;
  iVar2 = 0;
  do {
    if (bVar1) {
      lVar6 = thunk_FUN_010400dc(*(undefined8 *)PTR_DAT_0234bed8);
      FUN_021acc50(lVar6,0);
      lVar5 = *(long *)(*(long *)(*plVar10 + 0xc0) + 8);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_0103c244();
      }
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01022c14();
      }
      lVar5 = *(long *)(*(long *)(*plVar10 + 0xc0) + 8);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_0103c244();
      }
      if (lVar6 == 0) goto LAB_01866560;
      lVar5 = FUN_021af390(lVar6,*(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x28),0);
    }
    else {
      lVar6 = 0;
    }
    if (iVar13 * param_3 < iVar13 * param_3 + param_3) {
      iVar14 = 0;
      bVar4 = true;
      puVar12 = (undefined8 *)(lVar15 + 0x20 + (long)iVar2 * 0x20);
      do {
        if ((*(byte *)(*(long *)(*(long *)(*plVar10 + 0xc0) + 0x50) + 0x135) & 1) == 0) {
          FUN_0103c244();
        }
        lVar5 = thunk_FUN_010400dc();
        FUN_01303218(lVar5,*(undefined8 *)(*(long *)(*plVar10 + 0xc0) + 0x58));
        if (lVar5 == 0) goto LAB_01866560;
        *(long *)(lVar5 + 0x38) = (long)param_1;
        thunk_FUN_0106e12c((long *)(lVar5 + 0x38),param_1);
        if (lVar15 == 0) goto LAB_01866560;
        if (*(uint *)(lVar15 + 0x18) <= (uint)(iVar2 + iVar14)) {
                    /* WARNING: Subroutine does not return */
          FUN_00fdc53c();
        }
        uVar19 = *puVar12;
        uVar18 = puVar12[3];
        uVar8 = puVar12[2];
        *(undefined8 *)(lVar5 + 0x18) = puVar12[1];
        *(undefined8 *)(lVar5 + 0x10) = uVar19;
        *(undefined8 *)(lVar5 + 0x28) = uVar18;
        *(undefined8 *)(lVar5 + 0x20) = uVar8;
        thunk_FUN_0106e12c((undefined8 *)(lVar5 + 0x10),0);
        lVar7 = FUN_010f8634(*(undefined8 *)(*(long *)(*plVar10 + 0xc0) + 0x68));
        if (lVar7 == 0) goto LAB_01866560;
        FUN_021ac820(lVar7,*(undefined8 *)(lVar5 + 0x18),0);
        plVar16 = (long *)(lVar5 + 0x30);
        *plVar16 = lVar7;
        thunk_FUN_0106e12c(plVar16,lVar7);
        if (*plVar16 == 0) goto LAB_01866560;
        FUN_0216b764(*plVar16,1,0);
        lVar17 = *plVar16;
        lVar7 = *(long *)(*(long *)(*plVar10 + 0xc0) + 8);
        if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_0103c244();
        }
        if (*(int *)(lVar7 + 0xe0) == 0) {
          thunk_FUN_01022c14();
        }
        lVar7 = *(long *)(*(long *)(*plVar10 + 0xc0) + 8);
        if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_0103c244();
        }
        if (lVar17 == 0) goto LAB_01866560;
        FUN_021af390(lVar17,*(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x30),0);
        if (bVar4) {
          lVar17 = *plVar16;
          lVar7 = *(long *)(*(long *)(*plVar10 + 0xc0) + 8);
          if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
            lVar7 = FUN_0103c244();
          }
          if (*(int *)(lVar7 + 0xe0) == 0) {
            thunk_FUN_01022c14();
          }
          lVar7 = *(long *)(*(long *)(*plVar10 + 0xc0) + 8);
          if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
            lVar7 = FUN_0103c244();
          }
          if (lVar17 == 0) goto LAB_01866560;
          FUN_021af390(lVar17,*(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x38),0);
        }
        if (*plVar16 == 0) goto LAB_01866560;
        FUN_0198efa4(*plVar16,*(undefined8 *)(lVar5 + 0x10),
                     *(undefined8 *)(*(long *)(*plVar10 + 0xc0) + 0x80));
        lVar7 = *plVar16;
        if ((*(byte *)(*(long *)(*(long *)(*plVar10 + 0xc0) + 0x90) + 0x135) & 1) == 0) {
          FUN_0103c244();
        }
        uVar8 = thunk_FUN_010400dc();
        UnityEngine_UIElements_KeyboardEventBase<object>__get_altKey
                  (uVar8,lVar5,*(undefined8 *)(*(long *)(*plVar10 + 0xc0) + 0x88),
                   *(undefined8 *)(*(long *)(*plVar10 + 0xc0) + 0x98));
        if (lVar7 == 0) goto LAB_01866560;
        FUN_0198ebc8(lVar7,uVar8,*(undefined8 *)(*(long *)(*plVar10 + 0xc0) + 0xa0));
        lVar7 = *plVar16;
        if ((*(byte *)(*(long *)(*(long *)(*plVar10 + 0xc0) + 0xb0) + 0x135) & 1) == 0) {
          FUN_0103c244();
        }
        uVar8 = thunk_FUN_010400dc();
        FUN_016065a0(uVar8,lVar5,*(undefined8 *)(*(long *)(*plVar10 + 0xc0) + 0xa8),
                     *(undefined8 *)(*(long *)(*plVar10 + 0xc0) + 0xb8));
        FUN_011ac314(lVar7,uVar8,*(undefined8 *)(*(long *)(*plVar10 + 0xc0) + 0xc0));
        lVar7 = param_1[0x8a];
        if (lVar7 == 0) goto LAB_01866560;
        uVar8 = *(undefined8 *)(lVar5 + 0x30);
        lVar5 = *(long *)(lVar7 + 0x10);
        lVar17 = *(long *)(*(long *)(*plVar10 + 0xc0) + 0xd0);
        *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
        if (lVar5 == 0) goto LAB_01866560;
        uVar3 = *(uint *)(lVar7 + 0x18);
        if (uVar3 < *(uint *)(lVar5 + 0x18)) {
          *(uint *)(lVar7 + 0x18) = uVar3 + 1;
          puVar9 = (undefined8 *)(lVar5 + (long)(int)uVar3 * 8 + 0x20);
          *puVar9 = uVar8;
          thunk_FUN_0106e12c(puVar9);
        }
        else {
          FUN_017d3030(lVar7,uVar8,
                       *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
        }
        if (bVar1) {
          if (lVar6 == 0) goto LAB_01866560;
          lVar5 = FUN_021b3938(lVar6,*plVar16,0);
        }
        else {
          lVar5 = *(long *)(*(long *)(*plVar10 + 0xc0) + 0x10);
          if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_0103c244();
          }
          if (*(int *)(lVar5 + 0xe0) == 0) {
            thunk_FUN_01022c14();
          }
          lVar5 = FUN_01ac1638(param_1,*(undefined8 *)(*(long *)(*plVar10 + 0xc0) + 0x20));
          if (lVar5 == 0) goto LAB_01866560;
          local_68 = *(undefined8 *)(lVar5 + 0x378);
          lVar5 = FUN_021b39ec(&local_68,*plVar16,0);
        }
        iVar14 = iVar14 + 1;
        bVar4 = false;
        puVar12 = puVar12 + 4;
      } while (param_3 != iVar14);
    }
    iVar14 = param_3 + -3;
    if (param_3 < 3 && 0 < 3 - param_3) {
      do {
        if (bVar1) {
          uVar8 = FUN_01865c8c(lVar5,*(undefined8 *)(*(long *)(*plVar10 + 0xc0) + 0xd8));
          if (lVar6 == 0) goto LAB_01866560;
          lVar5 = FUN_021b3938(lVar6,uVar8,0);
        }
        else {
          lVar5 = *(long *)(*(long *)(*plVar10 + 0xc0) + 0x10);
          if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_0103c244();
          }
          if (*(int *)(lVar5 + 0xe0) == 0) {
            thunk_FUN_01022c14();
          }
          lVar5 = FUN_01ac1638(param_1,*(undefined8 *)(*(long *)(*plVar10 + 0xc0) + 0x20));
          if (lVar5 == 0) goto LAB_01866560;
          local_68 = *(undefined8 *)(lVar5 + 0x378);
          uVar8 = FUN_01865c8c(lVar5,*(undefined8 *)(*(long *)(*plVar10 + 0xc0) + 0xd8));
          lVar5 = FUN_021b39ec(&local_68,uVar8,0);
        }
        bVar4 = iVar14 != -1;
        iVar14 = iVar14 + 1;
      } while (bVar4);
    }
    if (bVar1) {
      lVar5 = *(long *)(*(long *)(*plVar10 + 0xc0) + 0x10);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_0103c244();
      }
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01022c14();
      }
      lVar5 = FUN_01ac1638(param_1,*(undefined8 *)(*(long *)(*plVar10 + 0xc0) + 0x20));
      if (lVar5 == 0) goto LAB_01866560;
      local_68 = *(undefined8 *)(lVar5 + 0x378);
      lVar5 = FUN_021b39ec(&local_68,lVar6,0);
    }
    iVar13 = iVar13 + 1;
    iVar2 = iVar2 + param_3;
  } while (iVar13 != iVar11);
LAB_01866518:
  FUN_01866568(param_1,*(undefined8 *)(*(long *)(*plVar10 + 0xc0) + 0xe0));
  return;
}


