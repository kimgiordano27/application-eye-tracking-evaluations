/*
FUNCTION_NAME: FUN_02f42920
ENTRY_POINT: 02f42920
PROGRAM: vrlegs-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x02f435d4) */
/* WARNING: Removing unreachable block (ram,0x02f43578) */
/* WARNING: Removing unreachable block (ram,0x02f43480) */
/* WARNING: Removing unreachable block (ram,0x02f4354c) */
/* WARNING: Removing unreachable block (ram,0x02f42f00) */
/* WARNING: Removing unreachable block (ram,0x02f42f04) */
/* WARNING: Removing unreachable block (ram,0x02f43544) */
/* WARNING: Removing unreachable block (ram,0x02f43548) */

long * FUN_02f42920(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  undefined8 *puVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  ulong uVar20;
  int *piVar21;
  undefined8 uVar22;
  uint uVar23;
  undefined8 local_80;
  undefined8 uStack_78;
  char local_64 [4];
  
  puVar3 = PTR_DAT_03cfe690;
  if ((DAT_0412ab1e & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cbf900);
    FUN_01ab69ac(PTR_DAT_03cfb838);
    FUN_01ab69ac(PTR_DAT_03d22a90);
    FUN_01ab69ac(PTR_DAT_03d229f0);
    FUN_01ab69ac(PTR_DAT_03d23de8);
    FUN_01ab69ac(PTR_DAT_03cbed58);
    FUN_01ab69ac(PTR_DAT_03cf21f8);
    FUN_01ab69ac(PTR_DAT_03d229e0);
    FUN_01ab69ac(PTR_DAT_03cca1a0);
                    /* try { // try from 02f429c4 to 03042a07 has its CatchHandler @ 02f429c4
                       catch() { ... } // from try @ 02f429c4 with catch @ 02f429c4
                       catch() { ... } // from try @ 02f42a44 with catch @ 02f429c4
                       catch() { ... } // from try @ 02f42a8c with catch @ 02f429c4
                       catch() { ... } // from try @ 02f42af4 with catch @ 02f429c4 */
    FUN_01ab69ac(PTR_DAT_03cbed08);
    FUN_01ab69ac(PTR_DAT_03cbed20);
    FUN_01ab69ac(PTR_DAT_03cfffe8);
    FUN_01ab69ac(PTR_DAT_03d23df0);
    FUN_01ab69ac(PTR_DAT_03d23df8);
    FUN_01ab69ac(PTR_DAT_03d239b0);
                    /* try { // try from 02f42a08 to 03042a17 has its CatchHandler @ 02f42a5c */
    FUN_01ab69ac(PTR_DAT_03d23cb8);
    FUN_01ab69ac(PTR_DAT_03cfe690);
    FUN_01ab69ac(PTR_DAT_03cc07a8);
    FUN_01ab69ac(PTR_DAT_03cbe5e8);
                    /* try { // try from 02f42a38 to 03042a43 has its CatchHandler @ 02f42a58 */
    FUN_01ab69ac(PTR_DAT_03ce5b70);
                    /* try { // try from 02f42a44 to 03042a73 has its CatchHandler @ 02f429c4 */
    FUN_01ab69ac(PTR_DAT_03ce5b68);
    DAT_0412ab1e = 1;
  }
                    /* catch(type#1 @ 03abd138) { ... } // from try @ 02f42a38 with catch @ 02f42a58
                        */
                    /* catch(type#1 @ 03abd138) { ... } // from try @ 02f42a08 with catch @ 02f42a5c
                        */
  local_64[0] = '\0';
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  puVar13 = (undefined8 *)PTR_DAT_03cfffe8;
                    /* try { // try from 02f42a74 to 03042a8b has its CatchHandler @ 02f42aec */
  plVar6 = (long *)FUN_02f428b4(param_1);
  puVar4 = PTR_DAT_03d23cb8;
  if (plVar6 != (long *)0x0) {
                    /* try { // try from 02f42a8c to 03042adb has its CatchHandler @ 02f429c4 */
    lVar7 = *(long *)PTR_DAT_03d23cb8;
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar7 = *(long *)puVar4;
    }
    uStack_78 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x68);
    local_80 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x60);
    uVar8 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cbed58,&local_80);
    lVar7 = *plVar6;
    uVar20 = (ulong)*(ushort *)(lVar7 + 0x12e);
                    /* try { // try from 02f42adc to 03042aeb has its CatchHandler @ 02f42aec */
    if (uVar20 != 0) {
      piVar21 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
                    /* catch() { ... } // from try @ 02f42a74 with catch @ 02f42aec
                       catch() { ... } // from try @ 02f42adc with catch @ 02f42aec */
                    /* try { // try from 02f42af0 to 03042af3 has its CatchHandler @ 02f42afc */
        if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_03cca1a0) {
          puVar9 = (undefined8 *)(lVar7 + (long)*piVar21 * 0x10 + 0x138);
          goto LAB_02f42b1c;
        }
                    /* try { // try from 02f42af4 to 03042aff has its CatchHandler @ 02f429c4 */
        uVar20 = uVar20 - 1;
        piVar21 = piVar21 + 4;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02f42af0 with catch @ 02f42afc
                        */
      } while (uVar20 != 0);
    }
    puVar9 = (undefined8 *)FUN_01a472ec(plVar6,*(long *)PTR_DAT_03cca1a0,0);
LAB_02f42b1c:
    uVar8 = (*(code *)*puVar9)(plVar6,uVar8,puVar9[1]);
    plVar10 = (long *)thunk_FUN_01a89d6c(uVar8,*puVar13);
    if (plVar10 != (long *)0x0) {
      return plVar10;
    }
  }
  puVar4 = PTR_DAT_03d23cb8;
  lVar7 = *(long *)PTR_DAT_03d23cb8;
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar7 = *(long *)puVar4;
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x38);
  thunk_FUN_01a4b338();
  puVar4 = PTR_DAT_03d23cb8;
  if (lVar7 == 0) {
    lVar7 = *(long *)PTR_DAT_03d23cb8;
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar7 = *(long *)puVar4;
    }
    uVar8 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x78);
    local_64[0] = '\0';
    FUN_027e0bd8(uVar8,local_64,0);
    lVar7 = *(long *)puVar4;
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar7 = *(long *)puVar4;
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x38);
    thunk_FUN_01a4b338();
    puVar4 = PTR_DAT_03d23cb8;
    if (lVar7 == 0) {
      uVar22 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cf21f8);
      FUN_02733e6c(uVar22,0);
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      thunk_FUN_01a4b338();
      puVar9 = (undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x38);
      *puVar9 = uVar22;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar9,uVar22);
    }
    if (local_64[0] != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0(uVar8,0);
    }
  }
  if (param_1 == 0) goto LAB_02f43558;
  lVar7 = thunk_FUN_01a5dd74(param_1,0);
  puVar4 = PTR_DAT_03d23cb8;
  lVar19 = *(long *)PTR_DAT_03d23cb8;
  if (*(int *)(lVar19 + 0xe0) == 0) {
    thunk_FUN_01a58e78(lVar19);
    lVar19 = *(long *)puVar4;
  }
  plVar10 = *(long **)(*(long *)(lVar19 + 0xb8) + 0x38);
  thunk_FUN_01a4b338();
  puVar2 = PTR_DAT_03d23df8;
  if (plVar10 == (long *)0x0) goto LAB_02f43558;
  lVar19 = (**(code **)(*plVar10 + 0x308))(plVar10,lVar7,*(undefined8 *)(*plVar10 + 0x310));
  if (lVar19 == 0) {
    lVar19 = *(long *)puVar4;
    if (*(int *)(lVar19 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar19 = *(long *)puVar4;
    }
    uVar8 = *(undefined8 *)(*(long *)(lVar19 + 0xb8) + 0x78);
    local_64[0] = '\0';
    FUN_027e0bd8(uVar8,local_64,0);
    lVar19 = *(long *)puVar4;
    if (*(int *)(lVar19 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar19 = *(long *)puVar4;
    }
    plVar10 = *(long **)(*(long *)(lVar19 + 0xb8) + 0x38);
    thunk_FUN_01a4b338();
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar19 = (**(code **)(*plVar10 + 0x308))(plVar10,lVar7,*(undefined8 *)(*plVar10 + 0x310));
    if (lVar19 == 0) {
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      lVar19 = FUN_02f45ca8(lVar7);
      if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      uVar5 = FUN_02f22eb4(lVar19,0);
      plVar10 = (long *)thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cbf900);
      Newtonsoft_Json_Utilities_StringUtils__ToLower(plVar10,uVar5,0);
      plVar12 = (long *)FUN_02f239a0(lVar19,0);
      puVar3 = PTR_DAT_03cbed20;
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      do {
        lVar11 = *plVar12;
        lVar19 = *(long *)puVar3;
        uVar20 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar20 != 0) {
          piVar21 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar21 + -2) == lVar19) {
              puVar13 = (undefined8 *)(lVar11 + (long)*piVar21 * 0x10 + 0x138);
              goto LAB_02f430b0;
            }
            uVar20 = uVar20 - 1;
            piVar21 = piVar21 + 4;
          } while (uVar20 != 0);
        }
        puVar13 = (undefined8 *)FUN_01a472ec(plVar12,lVar19,0);
LAB_02f430b0:
        uVar20 = (*(code *)*puVar13)(plVar12,puVar13[1]);
        puVar13 = (undefined8 *)PTR_DAT_03cfffe8;
        puVar2 = PTR_DAT_03cbed08;
        if ((uVar20 & 1) == 0) {
          plVar12 = (long *)thunk_FUN_01a89d6c(plVar12,*(undefined8 *)PTR_DAT_03cbed08);
          if (plVar12 == (long *)0x0) goto ToolBuddy_ThirdParty_VectorGraphics_Shape__get_Contours;
          lVar19 = *plVar12;
          uVar20 = (ulong)*(ushort *)(lVar19 + 0x12e);
          if (uVar20 == 0) goto ToolBuddy_ThirdParty_VectorGraphics_PathProperties__set_Head;
          piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
          goto ToolBuddy_ThirdParty_VectorGraphics_PathProperties__get_Stroke;
        }
        lVar11 = *plVar12;
        lVar19 = *(long *)puVar3;
        uVar20 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar20 != 0) {
          piVar21 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar21 + -2) == lVar19) {
              puVar13 = (undefined8 *)(lVar11 + (long)(*piVar21 + 1) * 0x10 + 0x138);
              goto LAB_02f43110;
            }
            uVar20 = uVar20 - 1;
            piVar21 = piVar21 + 4;
          } while (uVar20 != 0);
        }
        puVar13 = (undefined8 *)FUN_01a472ec(plVar12,lVar19,1);
LAB_02f43110:
        plVar14 = (long *)(*(code *)*puVar13)(plVar12,puVar13[1]);
        if (plVar14 != (long *)0x0) {
          lVar19 = *plVar14;
          bVar1 = *(byte *)(*(long *)PTR_DAT_03d22a90 + 0x130);
          if ((*(byte *)(lVar19 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(lVar19 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)PTR_DAT_03d22a90)) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6ee0(plVar14);
          }
          if (lVar19 == *(long *)PTR_DAT_03d23df0) {
            lVar19 = plVar14[3];
            if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            lVar19 = FUN_02f452c4(lVar19);
            if (*(int *)(*(long *)PTR_DAT_03cbe5e8 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar20 = FUN_02787b20(lVar19,0,0);
            if ((uVar20 & 1) != 0) {
              uVar22 = FUN_025b1328(*(undefined8 *)PTR_DAT_03ce5b68,plVar14[2],0);
              plVar15 = (long *)FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cc07a8,1);
              if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01ab6c3c();
              }
              if ((lVar19 != 0) &&
                 (lVar11 = thunk_FUN_01a89d6c(lVar19,*(undefined8 *)(*plVar15 + 0x40)), lVar11 == 0)
                 ) {
                uVar8 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
                FUN_01ab6b14(uVar8,0);
              }
              if ((int)plVar15[3] == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01ab6c44();
              }
              plVar15[4] = lVar19;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar15 + 4,lVar19);
              if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01ab6c3c();
              }
              plVar15 = (long *)FUN_0278a354(lVar7,uVar22,plVar15,0);
              uVar20 = FUN_0267de10(plVar15,0,0);
              if ((uVar20 & 1) != 0) {
                if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01ab6c3c();
                }
                uVar20 = FUN_0267dcdc(plVar15,0);
                if (((uVar20 & 1) == 0) && (uVar20 = FUN_0267dd3c(plVar15,0), (uVar20 & 1) != 0)) {
                  uVar22 = FUN_025b1328(*(undefined8 *)PTR_DAT_03ce5b70,plVar14[2],0);
                  plVar16 = (long *)FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cc07a8,2);
                  if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01ab6c3c();
                  }
                  if ((lVar19 != 0) &&
                     (lVar11 = thunk_FUN_01a89d6c(lVar19,*(undefined8 *)(*plVar16 + 0x40)),
                     lVar11 == 0)) {
                    uVar8 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
                    FUN_01ab6b14(uVar8,0);
                  }
                  if ((int)plVar16[3] == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01ab6c44();
                  }
                  plVar16[4] = lVar19;
                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                            (plVar16 + 4,lVar19);
                  lVar11 = (**(code **)(*plVar15 + 0x448))
                                     (plVar15,*(undefined8 *)(*plVar15 + 0x450));
                  if ((lVar11 != 0) &&
                     (lVar17 = thunk_FUN_01a89d6c(lVar11,*(undefined8 *)(*plVar16 + 0x40)),
                     lVar17 == 0)) {
                    uVar8 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
                    FUN_01ab6b14(uVar8,0);
                  }
                  if (*(uint *)(plVar16 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
                    FUN_01ab6c44();
                  }
                  plVar16[5] = lVar11;
                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                            (plVar16 + 5,lVar11);
                  lVar11 = FUN_0278a354(lVar7,uVar22,plVar16,0);
                  uVar20 = FUN_0267de10(lVar11,0,0);
                  if ((uVar20 & 1) != 0) {
                    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01ab6c3c();
                    }
                    uVar20 = FUN_0267dcdc(lVar11,0);
                    if (((uVar20 & 1) != 0) || (uVar20 = FUN_0267dd3c(lVar11,0), (uVar20 & 1) == 0))
                    {
                      lVar11 = 0;
                    }
                  }
                  lVar17 = plVar14[2];
                  uVar22 = (**(code **)(*plVar15 + 0x448))
                                     (plVar15,*(undefined8 *)(*plVar15 + 0x450));
                  uVar18 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03d239b0);
                  FUN_02f3ce64(uVar18,lVar7,lVar17,uVar22,lVar19,plVar15,lVar11,0,0);
                  if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01ab6c3c();
                  }
                  (**(code **)(*plVar10 + 0x308))(plVar10,uVar18,*(undefined8 *)(*plVar10 + 0x310));
                }
              }
            }
          }
        }
      } while( true );
    }
    uVar22 = *(undefined8 *)PTR_DAT_03d23df8;
    lVar11 = thunk_FUN_01a89d6c(lVar19,uVar22);
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6ee0(lVar19,uVar22);
    }
    goto LAB_02f4351c;
  }
  uVar8 = *(undefined8 *)puVar2;
  lVar11 = thunk_FUN_01a89d6c(lVar19,uVar8);
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6ee0(lVar19,uVar8);
  }
  goto LAB_02f42be8;
  while( true ) {
    uVar20 = uVar20 - 1;
    piVar21 = piVar21 + 4;
    if (uVar20 == 0) break;
ToolBuddy_ThirdParty_VectorGraphics_PathProperties__get_Stroke:
    if (*(long *)(piVar21 + -2) == *(long *)puVar2) {
      puVar9 = (undefined8 *)(lVar19 + (long)*piVar21 * 0x10 + 0x138);
      goto LAB_02f43464;
    }
  }
ToolBuddy_ThirdParty_VectorGraphics_PathProperties__set_Head:
  puVar9 = (undefined8 *)FUN_01a472ec(plVar12,*(long *)puVar2,0);
LAB_02f43464:
  (*(code *)*puVar9)(plVar12,puVar9[1]);
ToolBuddy_ThirdParty_VectorGraphics_Shape__get_Contours:
  puVar3 = PTR_DAT_03d23cb8;
  if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  uVar5 = (**(code **)(*plVar10 + 0x298))(plVar10,*(undefined8 *)(*plVar10 + 0x2a0));
  lVar11 = FUN_01ab6a94(*(undefined8 *)PTR_DAT_03d23df8,uVar5);
  (**(code **)(*plVar10 + 0x368))(plVar10,lVar11,0,*(undefined8 *)(*plVar10 + 0x370));
  lVar19 = *(long *)puVar3;
  if (*(int *)(lVar19 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar19 = *(long *)puVar3;
  }
  plVar10 = *(long **)(*(long *)(lVar19 + 0xb8) + 0x38);
  thunk_FUN_01a4b338();
  if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  (**(code **)(*plVar10 + 0x318))(plVar10,lVar7,lVar11,*(undefined8 *)(*plVar10 + 800));
LAB_02f4351c:
  if (local_64[0] != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(uVar8,0);
  }
LAB_02f42be8:
  if (lVar11 != 0) {
    plVar10 = (long *)FUN_01ab6a94(*puVar13,*(undefined4 *)(lVar11 + 0x18));
    puVar4 = PTR_DAT_03d23de8;
    puVar3 = PTR_DAT_03d229e0;
    if (0 < *(int *)(lVar11 + 0x18)) {
      uVar23 = 0;
      do {
        plVar12 = (long *)thunk_FUN_01a89d6c(param_1,*(undefined8 *)puVar3);
        if (plVar12 == (long *)0x0) {
LAB_02f42c94:
          plVar12 = (long *)FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cfb838,1);
          lVar7 = *(long *)PTR_DAT_03d229f0;
          if (*(int *)(lVar7 + 0xe0) == 0) {
            thunk_FUN_01a58e78(lVar7);
            lVar7 = *(long *)PTR_DAT_03d229f0;
          }
          if (plVar12 == (long *)0x0) goto LAB_02f43558;
          lVar7 = **(long **)(lVar7 + 0xb8);
          if ((lVar7 != 0) &&
             (lVar19 = thunk_FUN_01a89d6c(lVar7,*(undefined8 *)(*plVar12 + 0x40)), lVar19 == 0))
          goto LAB_02f43560;
          if ((int)plVar12[3] == 0) goto LAB_02f4355c;
          plVar12[4] = lVar7;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar12 + 4,lVar7);
        }
        else {
          lVar19 = *plVar12;
          lVar7 = *(long *)puVar3;
          uVar20 = (ulong)*(ushort *)(lVar19 + 0x12e);
          if (uVar20 != 0) {
            piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
            do {
              if (*(long *)(piVar21 + -2) == lVar7) {
                puVar13 = (undefined8 *)(lVar19 + (long)*piVar21 * 0x10 + 0x138);
                goto LAB_02f42c7c;
              }
              uVar20 = uVar20 - 1;
              piVar21 = piVar21 + 4;
            } while (uVar20 != 0);
          }
          puVar13 = (undefined8 *)FUN_01a472ec(plVar12,lVar7,0);
LAB_02f42c7c:
          lVar7 = (*(code *)*puVar13)(plVar12,puVar13[1]);
          if (lVar7 == 0) goto LAB_02f42c94;
          plVar12 = (long *)0x0;
        }
        if (*(uint *)(lVar11 + 0x18) <= uVar23) {
LAB_02f4355c:
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        lVar7 = *(long *)(lVar11 + (long)(int)uVar23 * 8 + 0x20);
        if (lVar7 == 0) goto LAB_02f43558;
        uVar8 = *(undefined8 *)(lVar7 + 0xd8);
        lVar19 = thunk_FUN_01a89e68(*(undefined8 *)puVar4);
        FUN_02f2d730(lVar19,lVar7,uVar8,param_1,plVar12,0);
        if (plVar10 == (long *)0x0) goto LAB_02f43558;
        if ((lVar19 != 0) &&
           (lVar7 = thunk_FUN_01a89d6c(lVar19,*(undefined8 *)(*plVar10 + 0x40)), lVar7 == 0)) {
LAB_02f43560:
          uVar8 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
          FUN_01ab6b14(uVar8,0);
        }
        if (*(uint *)(plVar10 + 3) <= uVar23) goto LAB_02f4355c;
        plVar10[(long)(int)uVar23 + 4] = lVar19;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                  (plVar10 + (long)(int)uVar23 + 4,lVar19);
        uVar23 = uVar23 + 1;
      } while ((int)uVar23 < *(int *)(lVar11 + 0x18));
    }
    puVar3 = PTR_DAT_03d23cb8;
    if (plVar6 != (long *)0x0) {
      lVar7 = *(long *)PTR_DAT_03d23cb8;
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar7 = *(long *)puVar3;
      }
      uStack_78 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x68);
      local_80 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x60);
      uVar8 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cbed58,&local_80);
      lVar7 = *plVar6;
      uVar20 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar20 != 0) {
        piVar21 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_03cca1a0) {
            puVar13 = (undefined8 *)(lVar7 + (long)(*piVar21 + 1) * 0x10 + 0x138);
            goto LAB_02f42fbc;
          }
          uVar20 = uVar20 - 1;
          piVar21 = piVar21 + 4;
        } while (uVar20 != 0);
      }
      puVar13 = (undefined8 *)FUN_01a472ec(plVar6,*(long *)PTR_DAT_03cca1a0,1);
LAB_02f42fbc:
      (*(code *)*puVar13)(plVar6,uVar8,plVar10,puVar13[1]);
    }
    return plVar10;
  }
LAB_02f43558:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


