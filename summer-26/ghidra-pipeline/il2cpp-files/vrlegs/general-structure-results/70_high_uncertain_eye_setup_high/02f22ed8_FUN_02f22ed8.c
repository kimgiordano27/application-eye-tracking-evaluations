/*
FUNCTION_NAME: FUN_02f22ed8
ENTRY_POINT: 02f22ed8
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_17;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02f232a0) */

long FUN_02f22ed8(long *param_1,long *param_2)

{
  int iVar1;
  undefined *puVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined8 uVar11;
  ulong uVar12;
  ulong uVar13;
  uint uVar14;
  uint uVar15;
  char local_64 [4];
  
  puVar2 = PTR_DAT_03d00008;
  if ((DAT_0412aa0d & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03d00008);
    FUN_01ab69ac(PTR_DAT_03d22a88);
    FUN_01ab69ac(PTR_DAT_03cbe5e8);
    DAT_0412aa0d = 1;
  }
  lVar4 = *(long *)puVar2;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar4 = *(long *)puVar2;
  }
  uVar9 = *(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x10);
  local_64[0] = '\0';
  FUN_027e0bd8(uVar9,local_64,0);
  plVar10 = param_1 + 3;
  if (*plVar10 == 0) {
    lVar4 = FUN_01ab6a94(*(undefined8 *)PTR_DAT_03d22a88,5);
    *plVar10 = lVar4;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar10);
  }
  puVar2 = PTR_DAT_03cbe5e8;
  lVar4 = 0;
  uVar13 = 0;
  do {
    lVar7 = *plVar10;
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    if (*(uint *)(lVar7 + 0x18) <= uVar13) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    uVar11 = *(undefined8 *)(lVar7 + lVar4 + 0x20);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar5 = FUN_02786d28(uVar11,param_2,0);
    lVar7 = *plVar10;
    if ((uVar5 & 1) != 0) {
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      if (*(uint *)(lVar7 + 0x18) <= (uint)uVar13) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      uVar3 = *(uint *)(lVar7 + lVar4 + 0x28);
      if (uVar3 == 0xffffffff) {
        lVar4 = FUN_02f233c8(uVar5,param_2);
      }
      else {
        lVar4 = (**(code **)(*param_1 + 0x1c8))(param_1,*(undefined8 *)(*param_1 + 0x1d0));
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        if (*(uint *)(lVar4 + 0x18) <= uVar3) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        lVar4 = *(long *)(lVar4 + (long)(int)uVar3 * 8 + 0x20);
      }
      goto LAB_02f231f4;
    }
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    if (*(uint *)(lVar7 + 0x18) <= uVar13) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    uVar11 = *(undefined8 *)(lVar7 + lVar4 + 0x20);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar3 = FUN_02786d28(uVar11,0,0);
    if (3 < uVar13) break;
    uVar13 = uVar13 + 1;
    lVar4 = lVar4 + 0x10;
  } while (((uVar3 ^ 1) & 1) != 0);
  uVar3 = *(uint *)(param_1 + 4);
  lVar7 = (long)(int)uVar3;
  lVar4 = param_1[3];
  iVar1 = 0;
  if ((int)(uVar3 + 1) < 5) {
    iVar1 = uVar3 + 1;
  }
  *(int *)(param_1 + 4) = iVar1;
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  if (*(uint *)(lVar4 + 0x18) <= uVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c44();
  }
  plVar6 = (long *)(lVar4 + lVar7 * 0x10 + 0x20);
  *plVar6 = (long)param_2;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar6,param_2);
  uVar13 = (**(code **)(*param_1 + 0x1c8))(param_1,*(undefined8 *)(*param_1 + 0x1d0));
  if (uVar13 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  uVar5 = *(ulong *)(uVar13 + 0x18);
  uVar15 = (uint)uVar5;
  if (0 < (int)uVar15) {
    uVar14 = 0;
    do {
      lVar4 = (**(code **)(*param_1 + 0x1c8))(param_1,*(undefined8 *)(*param_1 + 0x1d0));
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      if (*(uint *)(lVar4 + 0x18) <= uVar14) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      lVar4 = *(long *)(lVar4 + (long)(int)uVar14 * 8 + 0x20);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      uVar11 = thunk_FUN_01a5dd74(lVar4,0);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar13 = FUN_02786d28(uVar11,param_2,0);
      if ((uVar13 & 1) != 0) {
        lVar8 = *plVar10;
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        if (*(uint *)(lVar8 + 0x18) <= uVar3) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        *(uint *)(lVar8 + lVar7 * 0x10 + 0x28) = uVar14;
        goto LAB_02f231f4;
      }
      uVar14 = uVar14 + 1;
    } while (uVar15 != uVar14);
    if (0 < (int)uVar15) {
      uVar12 = 0;
      do {
        lVar4 = (**(code **)(*param_1 + 0x1c8))(param_1,*(undefined8 *)(*param_1 + 0x1d0));
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        if (*(uint *)(lVar4 + 0x18) <= uVar12) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        lVar4 = *(long *)(lVar4 + uVar12 * 8 + 0x20);
        uVar13 = (**(code **)(*param_2 + 0xb98))(param_2,lVar4,*(undefined8 *)(*param_2 + 0xba0));
        if ((uVar13 & 1) != 0) {
          lVar8 = *plVar10;
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          if (*(uint *)(lVar8 + 0x18) <= uVar3) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c44();
          }
          *(int *)(lVar8 + lVar7 * 0x10 + 0x28) = (int)uVar12;
          goto LAB_02f231f4;
        }
        uVar12 = uVar12 + 1;
      } while ((uVar5 & 0xffffffff) != uVar12);
    }
  }
  lVar4 = *plVar10;
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  if (*(uint *)(lVar4 + 0x18) <= uVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c44();
  }
  *(undefined4 *)(lVar4 + lVar7 * 0x10 + 0x28) = 0xffffffff;
  lVar4 = FUN_02f233c8(uVar13,param_2);
LAB_02f231f4:
  if (local_64[0] != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(uVar9,0);
  }
  return lVar4;
}


