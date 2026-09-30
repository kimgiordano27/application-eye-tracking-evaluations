/*
FUNCTION_NAME: FUN_027e068c
ENTRY_POINT: 027e068c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


long FUN_027e068c(undefined8 param_1,uint param_2)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 local_48;
  long local_38;
  
  if ((DAT_04125092 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cd7210);
    DAT_04125092 = 1;
  }
  local_48 = 0;
  lVar2 = FUN_027df29c();
  puVar1 = PTR_DAT_03cd7210;
  if (lVar2 == 0) goto OVRManager___cctor;
  local_38 = *(long *)(lVar2 + 0x30);
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(&local_38);
  lVar2 = local_38;
  if (local_38 == 0) {
    if ((param_2 >> 1 & 1) == 0) {
      uVar5 = 0;
      lVar2 = 0;
      lVar4 = 0;
      lVar8 = 0;
    }
    else {
      lVar2 = 0;
      uVar5 = 0;
LAB_027e07b4:
      lVar4 = 0;
      lVar8 = 0;
      uVar6 = uVar5;
      if (lVar2 == 0) {
joined_r0x027e07c0:
        lVar4 = 0;
        if (uVar6 == 0) {
          lVar2 = *(long *)puVar1;
          if (*(int *)(lVar2 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar2 = *(long *)puVar1;
          }
          return **(long **)(lVar2 + 0xb8);
        }
      }
    }
  }
  else {
    if ((*(byte *)(local_38 + 0x30) >> 1 & 1) != 0) {
      return 0;
    }
    if (((param_2 & 1) == 0) && (plVar3 = *(long **)(local_38 + 0x10), plVar3 != (long *)0x0)) {
      lVar4 = (**(code **)(*plVar3 + 0x1c8))(plVar3,*(undefined8 *)(*plVar3 + 0x1d0));
    }
    else {
      lVar4 = 0;
    }
    local_48 = FUN_027e08b8(&local_38);
    uVar5 = FUN_0263f694(&local_48,0);
    lVar8 = 0;
    if ((uVar5 & 1) != 0) {
      local_48 = FUN_027e08b8(&local_38);
      lVar8 = FUN_0263f6a8(&local_48,0);
    }
    uVar5 = *(ulong *)(lVar2 + 0x38);
    lVar2 = *(long *)(lVar2 + 0x40);
    if (((param_2 >> 1 & 1) != 0) && (lVar4 == 0)) {
      if (lVar8 == 0) goto LAB_027e07b4;
      uVar6 = FUN_0262fe20(lVar8,0);
      lVar4 = 0;
      if ((lVar2 == 0) && (uVar5 == 0)) {
        uVar6 = uVar6 & 1;
        goto joined_r0x027e07c0;
      }
    }
  }
  lVar7 = thunk_FUN_01a89e68(*(undefined8 *)puVar1);
  FUN_027b3d9c(lVar7,0);
  if (lVar7 != 0) {
    *(long *)(lVar7 + 0x10) = lVar4;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists((long *)(lVar7 + 0x10),lVar4);
    *(long *)(lVar7 + 0x20) = lVar8;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists((long *)(lVar7 + 0x20),lVar8);
    *(ulong *)(lVar7 + 0x38) = uVar5;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists((ulong *)(lVar7 + 0x38),uVar5)
    ;
    *(long *)(lVar7 + 0x40) = lVar2;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists((long *)(lVar7 + 0x40),lVar2);
    *(uint *)(lVar7 + 0x30) = *(uint *)(lVar7 + 0x30) | 1;
    return lVar7;
  }
OVRManager___cctor:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


