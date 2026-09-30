/*
FUNCTION_NAME: FUN_0221c5a4
ENTRY_POINT: 0221c5a4
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0221c788) */
/* WARNING: Removing unreachable block (ram,0x0221c704) */
/* WARNING: Removing unreachable block (ram,0x0221c77c) */
/* WARNING: Removing unreachable block (ram,0x0221c798) */
/* WARNING: Removing unreachable block (ram,0x0221c750) */

void FUN_0221c5a4(long param_1,long param_2)

{
  char cVar1;
  undefined *puVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  int *piVar7;
  undefined8 uVar8;
  long *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  long *local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  char local_34 [4];
  
  if ((DAT_0412225a & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cbed08);
    DAT_0412225a = 1;
  }
  local_60 = (long *)0x0;
  uStack_58 = 0;
  local_50 = 0;
  uVar8 = *(undefined8 *)(param_1 + 0xb8);
  *(undefined1 *)(param_1 + 0x130) = 1;
  local_34[0] = '\0';
  FUN_027e0bd8(uVar8,local_34,0);
  cVar1 = *(char *)(param_1 + 0xb0);
  thunk_FUN_01a4b338();
  if (cVar1 == '\0') {
    if (*(long *)(param_1 + 0x100) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    Animancer_FadeGroup__get_TargetWeight
              (*(long *)(param_1 + 0x100),&local_78,
               *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x130));
    puVar2 = PTR_DAT_03cbed08;
    uStack_58 = uStack_70;
    local_60 = local_78;
    local_50 = local_68;
    while (uVar4 = FUN_021b51c8(&local_60,
                                *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x150)
                               ), (uVar4 & 1) != 0) {
      FUN_01b7a454(&local_60,&local_78,
                   *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x140));
      plVar3 = local_78;
      if (local_78 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      lVar6 = *local_78;
      uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar4 != 0) {
        piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
            puVar5 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_0221c6cc;
          }
          uVar4 = uVar4 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar4 != 0);
      }
      puVar5 = (undefined8 *)FUN_01a472ec(local_78,*(long *)puVar2,0);
LAB_0221c6cc:
      (*(code *)*puVar5)(plVar3,puVar5[1]);
    }
    FUN_021b51c4(&local_60,*(undefined8 *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x158));
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    FUN_029e814c(param_1,0);
    if (*(long *)(param_1 + 0x118) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    FUN_027de940(*(long *)(param_1 + 0x118),0);
  }
  if (local_34[0] != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(uVar8,0);
  }
  if (param_1 != 0) {
    FUN_029e814c(param_1,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


