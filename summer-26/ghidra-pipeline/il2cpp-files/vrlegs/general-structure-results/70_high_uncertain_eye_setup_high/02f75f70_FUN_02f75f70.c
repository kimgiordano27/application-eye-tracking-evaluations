/*
FUNCTION_NAME: FUN_02f75f70
ENTRY_POINT: 02f75f70
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02f760dc) */

long FUN_02f75f70(long param_1,ulong param_2)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  int *piVar8;
  char local_34 [4];
  
  if ((DAT_0412acae & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03d24f40);
    DAT_0412acae = 1;
  }
  local_34[0] = '\0';
  if ((param_2 & 1) == 0) {
    plVar3 = (long *)FUN_02f7672c(param_1);
    if (plVar3 != (long *)0x0) {
      plVar3 = (long *)(**(code **)(*plVar3 + 0x178))
                                 (plVar3,*(undefined8 *)(param_1 + 0xb8),0,
                                  *(undefined8 *)(*plVar3 + 0x180));
      if (*(long *)(param_1 + 200) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      lVar2 = FUN_02f6a37c(*(long *)(param_1 + 200),param_1,0,1);
      if (plVar3 != (long *)0x0) {
        uVar4 = (**(code **)(*plVar3 + 0x188))(plVar3,*(undefined8 *)(*plVar3 + 400));
        if ((uVar4 & 1) == 0) {
          *(undefined1 *)(param_1 + 0xa2) = 1;
          uVar1 = FUN_02f79d4c(0);
          uVar7 = thunk_FUN_01a6ca08(PTR_DAT_03d25100);
                    /* WARNING: Subroutine does not return */
          FUN_01ab6b14(uVar1,uVar7);
        }
        if (lVar2 == 0) {
          return 0;
        }
        uVar1 = *(undefined8 *)(param_1 + 0x38);
        local_34[0] = '\0';
        FUN_027e0bd8(uVar1,local_34,0);
        if (*(char *)(param_1 + 0xa1) == '\0') {
          *(long *)(param_1 + 0xd0) = lVar2;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                    ((long *)(param_1 + 0xd0),lVar2);
          if (local_34[0] == '\0') {
            return lVar2;
          }
          OVRManager_<>c__<InitOVRManager>b__424_0(uVar1,0);
          return lVar2;
        }
        uVar1 = thunk_FUN_01a6ca08(PTR_DAT_03d24f10);
        lVar5 = thunk_FUN_01a89d6c(lVar2,uVar1);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6ee0(lVar2,uVar1);
        }
        lVar5 = thunk_FUN_01a6ca08(PTR_DAT_03d24f10);
        uVar1 = thunk_FUN_01a6ca08(PTR_DAT_03d24f10);
        plVar3 = (long *)thunk_FUN_01a89d6c(lVar2,uVar1);
        if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6ee0(lVar2,uVar1);
        }
        lVar2 = *plVar3;
        uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
        if (uVar4 != 0) {
          piVar8 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == lVar5) {
              puVar6 = (undefined8 *)(lVar2 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_02f7619c;
            }
            uVar4 = uVar4 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar4 != 0);
        }
        puVar6 = (undefined8 *)FUN_01a472ec(plVar3,lVar5,0);
LAB_02f7619c:
        (*(code *)*puVar6)(plVar3,3,puVar6[1]);
        if (*(long *)(param_1 + 0xa8) != 0) {
          FUN_026779dc(*(long *)(param_1 + 0xa8),0);
        }
        thunk_FUN_01a6ca08(PTR_DAT_03d24c20);
        uVar1 = thunk_FUN_01a89e68();
        FUN_02f79548(uVar1,0);
        uVar7 = thunk_FUN_01a6ca08(PTR_DAT_03d25100);
                    /* WARNING: Subroutine does not return */
        FUN_01ab6b14(uVar1,uVar7);
      }
    }
  }
  else {
    if (*(long *)(param_1 + 0x108) == 0) {
      uVar1 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03d24f40);
      FUN_02f8321c(uVar1,0,0,0,0);
      *(undefined8 *)(param_1 + 0x108) = uVar1;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                ((undefined8 *)(param_1 + 0x108),uVar1);
    }
    if (*(long *)(param_1 + 200) != 0) {
      lVar2 = FUN_02f6a37c(*(long *)(param_1 + 200),param_1,1,1);
      return lVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


