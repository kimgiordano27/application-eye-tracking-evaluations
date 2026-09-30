/*
FUNCTION_NAME: FUN_02f4a14c
ENTRY_POINT: 02f4a14c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x02f4a67c) */

void FUN_02f4a14c(long *param_1)

{
  byte bVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  uint uVar12;
  undefined8 uVar13;
  long *plVar14;
  long lVar15;
  int iVar16;
  uint uVar17;
  char local_64 [4];
  
  puVar3 = PTR_DAT_03cfe690;
  if ((DAT_0412ab43 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cf21f8);
    FUN_01ab69ac(PTR_DAT_03d23f00);
    FUN_01ab69ac(PTR_DAT_03d23f08);
    FUN_01ab69ac(PTR_DAT_03d23f10);
    FUN_01ab69ac(PTR_DAT_03d23f18);
    FUN_01ab69ac(PTR_DAT_03d23f20);
    FUN_01ab69ac(PTR_DAT_03cfe690);
    FUN_01ab69ac(PTR_DAT_03cbebe8);
    FUN_01ab69ac(PTR_DAT_03cbe5e8);
    DAT_0412ab43 = 1;
  }
  lVar8 = *(long *)puVar3;
  local_64[0] = '\0';
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar8 = *(long *)puVar3;
  }
  lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x10);
  thunk_FUN_01a4b338();
  if (lVar8 == 0) {
    lVar8 = *(long *)puVar3;
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar8 = *(long *)puVar3;
    }
    uVar13 = *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x50);
    local_64[0] = '\0';
    FUN_027e0bd8(uVar13,local_64,0);
    lVar8 = *(long *)puVar3;
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar8 = *(long *)puVar3;
    }
    lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x10);
    thunk_FUN_01a4b338();
    if (lVar8 == 0) {
      uVar9 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cf21f8);
      FUN_02733e6c(uVar9,0);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      thunk_FUN_01a4b338();
      puVar10 = (undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x10);
      *puVar10 = uVar9;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar10,uVar9);
    }
    if (local_64[0] != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0(uVar13,0);
    }
  }
  lVar8 = *(long *)puVar3;
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar8 = *(long *)puVar3;
  }
  plVar14 = *(long **)(*(long *)(lVar8 + 0xb8) + 0x10);
  thunk_FUN_01a4b338();
  if (plVar14 != (long *)0x0) {
    uVar11 = (**(code **)(*plVar14 + 0x2e8))(plVar14,param_1,*(undefined8 *)(*plVar14 + 0x2f0));
    puVar3 = PTR_DAT_03cfe690;
    if ((uVar11 & 1) == 0) {
      lVar8 = *(long *)PTR_DAT_03cfe690;
      if (*(int *)(lVar8 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar8 = *(long *)puVar3;
      }
      uVar13 = *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x50);
      local_64[0] = '\0';
      FUN_027e0bd8(uVar13,local_64,0);
      lVar8 = *(long *)puVar3;
      if (*(int *)(lVar8 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar8 = *(long *)puVar3;
      }
      plVar14 = *(long **)(*(long *)(lVar8 + 0xb8) + 0x10);
      thunk_FUN_01a4b338();
      if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      uVar11 = (**(code **)(*plVar14 + 0x2e8))(plVar14,param_1,*(undefined8 *)(*plVar14 + 0x2f0));
      if ((uVar11 & 1) == 0) {
        lVar8 = *(long *)puVar3;
        if (*(int *)(lVar8 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar8 = *(long *)puVar3;
        }
        plVar14 = *(long **)(*(long *)(lVar8 + 0xb8) + 0x10);
        thunk_FUN_01a4b338();
        if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        (**(code **)(*plVar14 + 0x318))(plVar14,param_1,0,*(undefined8 *)(*plVar14 + 800));
        iVar16 = 7;
      }
      else {
        iVar16 = 6;
      }
      if (local_64[0] != '\0') {
        OVRManager_<>c__<InitOVRManager>b__424_0(uVar13,0);
      }
      puVar3 = PTR_DAT_03cbe5e8;
      if ((iVar16 == 7) || (iVar16 == 0)) {
        uVar13 = *(undefined8 *)PTR_DAT_03d23f00;
        if (*(int *)(*(long *)PTR_DAT_03cbe5e8 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar13 = FUN_0277b678(uVar13,0);
        if ((param_1 == (long *)0x0) ||
           (lVar8 = (**(code **)(*param_1 + 0x278))
                              (param_1,uVar13,0,*(undefined8 *)(*param_1 + 0x280)),
           puVar7 = PTR_DAT_03d23f20, puVar6 = PTR_DAT_03d23f10, puVar5 = PTR_DAT_03d23f08,
           puVar4 = PTR_DAT_03cbebe8, lVar8 == 0)) goto LAB_02f4a66c;
        uVar12 = (uint)*(undefined8 *)(lVar8 + 0x18);
        uVar17 = uVar12 - 1;
        if (-1 < (int)uVar17) {
          if (uVar17 < uVar12) {
            bVar2 = false;
            do {
              plVar14 = *(long **)(lVar8 + (ulong)uVar17 * 8 + 0x20);
              if (plVar14 == (long *)0x0) goto LAB_02f4a66c;
              if (*plVar14 != *(long *)puVar5) {
                    /* WARNING: Subroutine does not return */
                FUN_01ab6ee0();
              }
              lVar15 = plVar14[2];
              if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                thunk_FUN_01a58e78(*(long *)puVar3);
              }
              uVar13 = FUN_01ab6d3c(lVar15,*(undefined8 *)puVar4,*(undefined8 *)puVar7);
              uVar11 = FUN_02787b20(uVar13,0,0);
              if ((uVar11 & 1) == 0) {
LAB_02f4a550:
                if ((int)(uVar17 - 1) < 0) {
                  if (bVar2) {
                    return;
                  }
                  goto UniJSON_JsonNode_<ToString>d__3___ctor;
                }
              }
              else {
                uVar9 = *(undefined8 *)puVar6;
                if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                }
                plVar14 = (long *)FUN_0277b678(uVar9,0);
                if (plVar14 == (long *)0x0) goto LAB_02f4a66c;
                uVar11 = (**(code **)(*plVar14 + 0x388))
                                   (plVar14,uVar13,*(undefined8 *)(*plVar14 + 0x390));
                if ((uVar11 & 1) == 0) goto LAB_02f4a550;
                plVar14 = (long *)FUN_0279a67c(uVar13,0);
                if (*(int *)(*(long *)PTR_DAT_03cfe690 + 0xe0) == 0) {
                  thunk_FUN_01a58e78(*(long *)PTR_DAT_03cfe690);
                }
                if (plVar14 != (long *)0x0) {
                  bVar1 = *(byte *)(*(long *)PTR_DAT_03d23f18 + 0x130);
                  if ((*(byte *)(*plVar14 + 0x130) < bVar1) ||
                     (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar1 * 8 + -8) !=
                      *(long *)PTR_DAT_03d23f18)) {
                    /* WARNING: Subroutine does not return */
                    FUN_01ab6ee0(plVar14);
                  }
                }
                FUN_02f49398(plVar14,param_1);
                if ((int)uVar17 < 1) {
                  return;
                }
                bVar2 = true;
              }
              uVar17 = uVar17 - 1;
            } while (uVar17 < *(uint *)(lVar8 + 0x18));
          }
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
UniJSON_JsonNode_<ToString>d__3___ctor:
        uVar13 = (**(code **)(*param_1 + 0xb18))(param_1,*(undefined8 *)(*param_1 + 0xb20));
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01a58e78(*(long *)puVar3);
        }
        uVar11 = FUN_02787b20(uVar13,0,0);
        if ((uVar11 & 1) != 0) {
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar11 = FUN_02787b20(uVar13,param_1,0);
          if ((uVar11 & 1) != 0) {
            if (*(int *)(*(long *)PTR_DAT_03cfe690 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            FUN_02f4a14c(uVar13);
          }
        }
      }
    }
    return;
  }
LAB_02f4a66c:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


