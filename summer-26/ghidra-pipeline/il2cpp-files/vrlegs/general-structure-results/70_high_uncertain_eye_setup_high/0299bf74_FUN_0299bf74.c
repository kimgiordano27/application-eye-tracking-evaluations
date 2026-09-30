/*
FUNCTION_NAME: FUN_0299bf74
ENTRY_POINT: 0299bf74
PROGRAM: vrlegs-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_16;functionality_eye_api_context_without_clear_sink_hits_6
*/


/* WARNING: Removing unreachable block (ram,0x0299c2b8) */

void FUN_0299bf74(long *param_1)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  char local_4c [4];
  char local_48 [4];
  char local_44 [4];
  long local_40;
  long local_38;
  
  if ((DAT_04127d25 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03d07b80);
    FUN_01ab69ac(PTR_DAT_03d07ee0);
    FUN_01ab69ac(PTR_DAT_03d07ba0);
    DAT_04127d25 = 1;
  }
  puVar3 = PTR_DAT_03d07ee0;
  puVar2 = PTR_DAT_03d07b80;
  local_44[0] = '\0';
  local_48[0] = '\0';
  local_4c[0] = '\0';
  lVar7 = param_1[0x22];
  while (lVar7 != 0) {
    uVar8 = *(undefined8 *)(lVar7 + 0x40);
    local_44[0] = '\0';
    FUN_027e0bd8(uVar8,local_44,0);
    if (param_1[0x22] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    cVar1 = *(char *)(param_1[0x22] + 0x10);
    if (local_44[0] != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0(uVar8,0);
    }
    if (cVar1 == '\0') {
      if ((param_1[0x22] == 0) || (plVar6 = *(long **)(param_1[0x22] + 0x40), plVar6 == (long *)0x0)
         ) break;
      (**(code **)(*plVar6 + 0x1c8))(plVar6,*(undefined8 *)(*plVar6 + 0x1d0));
    }
    else {
      lVar7 = param_1[0x21];
      local_48[0] = '\0';
      FUN_027e0bd8(lVar7,local_48,0);
      while( true ) {
        if (param_1[0x21] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        lVar4 = *(long *)(param_1[0x21] + 0x10);
        if (lVar4 == 0) break;
        FUN_01ea4674(lVar4,&local_40,*(undefined8 *)puVar2);
        lVar4 = local_40;
        if (local_40 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        if (*(long *)(local_40 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        lVar5 = FUN_02f0ce18(*(long *)(local_40 + 0x10),0);
        if (lVar5 < *(int *)(lVar4 + 0x28)) break;
        lVar4 = *(long *)(lVar4 + 0x20);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        (**(code **)(*param_1 + 0x238))
                  (param_1,lVar4,*(undefined4 *)(lVar4 + 0x18),*(undefined8 *)(*param_1 + 0x240));
        if (param_1[0x21] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        FUN_02211b20(param_1[0x21],*(undefined8 *)puVar3);
      }
      if (local_48[0] != '\0') {
        OVRManager_<>c__<InitOVRManager>b__424_0(lVar7,0);
      }
      lVar7 = param_1[0x20];
      local_4c[0] = '\0';
      FUN_027e0bd8(lVar7,local_4c,0);
      while( true ) {
        if (param_1[0x20] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        lVar4 = *(long *)(param_1[0x20] + 0x10);
        if (lVar4 == 0) break;
        FUN_01ea4674(lVar4,&local_38,*(undefined8 *)puVar2);
        lVar4 = local_38;
        if (local_38 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        if (*(long *)(local_38 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        lVar5 = FUN_02f0ce18(*(long *)(local_38 + 0x10),0);
        if (lVar5 < *(int *)(lVar4 + 0x28)) break;
        plVar6 = (long *)param_1[5];
        if ((plVar6 != (long *)0x0) && (*(int *)((long)plVar6 + 0x1c) == 2)) {
          lVar4 = *(long *)(lVar4 + 0x20);
          if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          (**(code **)(*plVar6 + 0x198))
                    (plVar6,lVar4,*(undefined4 *)(lVar4 + 0x18),*(undefined8 *)(*plVar6 + 0x1a0));
        }
        if (param_1[0x20] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        FUN_02211b20(param_1[0x20],*(undefined8 *)puVar3);
      }
      if (local_4c[0] != '\0') {
        OVRManager_<>c__<InitOVRManager>b__424_0(lVar7,0);
      }
      FUN_027e2830(0,0);
    }
    lVar7 = param_1[0x22];
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


