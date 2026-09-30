/*
FUNCTION_NAME: FUN_0262ada8
ENTRY_POINT: 0262ada8
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0262b208) */

void FUN_0262ada8(long *param_1)

{
  long *plVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined8 uVar13;
  long lVar14;
  char local_74 [4];
  undefined8 local_70;
  undefined8 uStack_68;
  
  if ((DAT_04124004 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cf21f8);
    FUN_01ab69ac(PTR_DAT_03cf21c0);
    FUN_01ab69ac(PTR_DAT_03cf21d8);
    FUN_01ab69ac(PTR_DAT_03cf25d0);
    FUN_01ab69ac(PTR_DAT_03cf2650);
    DAT_04124004 = 1;
  }
  puVar3 = PTR_DAT_03cf25d0;
  local_70 = 0;
  uStack_68 = 0;
  local_74[0] = '\0';
  lVar5 = *(long *)PTR_DAT_03cf25d0;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar5 = *(long *)puVar3;
  }
  puVar3 = PTR_DAT_03cf2650;
  plVar6 = *(long **)(*(long *)(lVar5 + 0xb8) + 0x20);
  if (plVar6 != (long *)0x0) {
    plVar6 = (long *)(**(code **)(*plVar6 + 0x308))(plVar6,param_1,*(undefined8 *)(*plVar6 + 0x310))
    ;
    if (plVar6 != (long *)0x0) {
      lVar5 = *(long *)puVar3;
      bVar2 = *(byte *)(lVar5 + 0x130);
      if ((bVar2 <= *(byte *)(*plVar6 + 0x130)) &&
         (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar2 * 8 + -8) == lVar5)) {
        return;
      }
    }
    if (*(int *)(*(long *)PTR_DAT_03cf25d0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar7 = FUN_02632750(param_1,&uStack_68,&local_70);
    uVar13 = uStack_68;
    uVar8 = local_70;
    if ((uVar7 & 1) != 0) {
      if (*(int *)(*(long *)PTR_DAT_03cf25d0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_0262ac1c(uVar13,uVar8,param_1);
    }
    if (*(int *)(*(long *)PTR_DAT_03cf25d0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar7 = FUN_02632520(param_1,&uStack_68,&local_70);
    uVar13 = uStack_68;
    uVar8 = local_70;
    if ((uVar7 & 1) != 0) {
      if (*(int *)(*(long *)PTR_DAT_03cf25d0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_0262aa90(uVar13,uVar8,param_1);
    }
    puVar4 = PTR_DAT_03cf25d0;
    lVar5 = *(long *)PTR_DAT_03cf25d0;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar5 = *(long *)puVar4;
    }
    plVar6 = *(long **)(*(long *)(lVar5 + 0xb8) + 0x20);
    if (plVar6 != (long *)0x0) {
      uVar8 = (**(code **)(*plVar6 + 0x3b8))(plVar6,*(undefined8 *)(*plVar6 + 0x3c0));
      local_74[0] = '\0';
      FUN_027e0bd8(uVar8,local_74,0);
      lVar5 = thunk_FUN_01a89e68(*(undefined8 *)puVar3);
      FUN_027b3d9c(lVar5,0);
      if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      lVar9 = (**(code **)(*param_1 + 0x8f8))(param_1,0x34,*(undefined8 *)(*param_1 + 0x900));
      puVar3 = PTR_DAT_03cf21d8;
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      if (0 < (int)*(ulong *)(lVar9 + 0x18)) {
        uVar7 = 0;
        plVar6 = (long *)(lVar5 + 0x18);
        plVar1 = (long *)(lVar5 + 0x10);
        uVar12 = *(ulong *)(lVar9 + 0x18) & 0xffffffff;
        do {
          if (uVar12 <= uVar7) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c44();
          }
          uVar13 = *(undefined8 *)(lVar9 + 0x20 + uVar7 * 8);
          if (*(int *)(*(long *)PTR_DAT_03cf21c0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          plVar10 = (long *)FUN_02620f4c(uVar13);
          if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          if (*plVar10 != *(long *)puVar3) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6ee0(plVar10);
          }
          if ((char)plVar10[6] != '\0') {
            lVar14 = plVar10[5];
            uVar11 = (**(code **)(*plVar10 + 0x1b8))(plVar10,*(undefined8 *)(*plVar10 + 0x1c0));
            if (*(int *)(*(long *)PTR_DAT_03cf25d0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar11 = FUN_0263237c(lVar14,uVar11);
            uVar12 = (**(code **)(*plVar10 + 0x1a8))(plVar10,*(undefined8 *)(*plVar10 + 0x1b0));
            if ((uVar12 & 1) == 0) {
              if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01ab6c3c();
              }
              plVar10 = (long *)*plVar6;
              if (plVar10 == (long *)0x0) {
                lVar14 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cf21f8);
                FUN_02733e6c(lVar14,0);
                *plVar6 = lVar14;
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar6,lVar14);
                plVar10 = (long *)*plVar6;
                if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01ab6c3c();
                }
              }
              (**(code **)(*plVar10 + 0x318))(plVar10,uVar11,uVar13,*(undefined8 *)(*plVar10 + 800))
              ;
            }
            else {
              if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01ab6c3c();
              }
              plVar10 = (long *)*plVar1;
              if (plVar10 == (long *)0x0) {
                lVar14 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cf21f8);
                FUN_02733e6c(lVar14,0);
                *plVar1 = lVar14;
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar1,lVar14);
                plVar10 = (long *)*plVar1;
                if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01ab6c3c();
                }
              }
              (**(code **)(*plVar10 + 0x318))(plVar10,uVar11,uVar13,*(undefined8 *)(*plVar10 + 800))
              ;
            }
          }
          uVar12 = (ulong)*(uint *)(lVar9 + 0x18);
          uVar7 = uVar7 + 1;
        } while ((long)uVar7 < (long)(int)*(uint *)(lVar9 + 0x18));
      }
      lVar9 = *(long *)PTR_DAT_03cf25d0;
      if (*(int *)(lVar9 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar9 = *(long *)PTR_DAT_03cf25d0;
      }
      plVar6 = *(long **)(*(long *)(lVar9 + 0xb8) + 0x20);
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x318))(plVar6,param_1,lVar5,*(undefined8 *)(*plVar6 + 800));
        if (local_74[0] != '\0') {
          OVRManager_<>c__<InitOVRManager>b__424_0(uVar8,0);
        }
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c(0,param_1);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


