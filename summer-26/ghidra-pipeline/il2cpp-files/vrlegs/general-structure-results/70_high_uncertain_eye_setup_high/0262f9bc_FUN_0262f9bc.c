/*
FUNCTION_NAME: FUN_0262f9bc
ENTRY_POINT: 0262f9bc
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0262fb74) */

undefined8 FUN_0262f9bc(long param_1)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  char local_3c [4];
  undefined8 local_38;
  undefined8 local_28;
  
  if ((DAT_04123fe3 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cf2778);
    FUN_01ab69ac(PTR_DAT_03cc1810);
    FUN_01ab69ac(PTR_DAT_03cf22a8);
    DAT_04123fe3 = 1;
  }
  local_28 = 0;
  local_3c[0] = '\0';
  lVar2 = FUN_027df29c(0);
  if (lVar2 != 0) {
    local_38 = FUN_027dece8(lVar2,0);
    local_28 = FUN_027e08b8(&local_38,0);
    uVar3 = FUN_0263f684(&local_28,0);
    if ((uVar3 & 1) == 0) {
      lVar2 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cf2778);
      FUN_027b3d9c(lVar2,0);
      if (lVar2 == 0) goto LAB_0262fb70;
      *(long *)(lVar2 + 0x10) = param_1;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                ((long *)(lVar2 + 0x10),param_1);
      uVar6 = FUN_0263f6a8(&local_28,0);
      *(undefined8 *)(lVar2 + 0x18) = uVar6;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    }
    else {
      lVar2 = param_1;
      if (param_1 == 0) {
        return 0;
      }
    }
    puVar1 = PTR_DAT_03cf22a8;
    plVar4 = (long *)thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cc1810);
    FUN_0269a0ac(plVar4,0);
    lVar5 = *(long *)puVar1;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar5 = *(long *)puVar1;
    }
    uVar6 = *(undefined8 *)(*(long *)(lVar5 + 0xb8) + 8);
    local_3c[0] = '\0';
    FUN_027e0bd8(uVar6,local_3c,0);
    lVar5 = *(long *)puVar1;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar5 = *(long *)puVar1;
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    FUN_02660068(lVar5,plVar4,lVar2,0);
    if (local_3c[0] != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0(uVar6,0);
    }
    if (plVar4 != (long *)0x0) {
      uVar6 = (**(code **)(*plVar4 + 0x428))(plVar4,*(undefined8 *)(*plVar4 + 0x430));
      return uVar6;
    }
  }
LAB_0262fb70:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


