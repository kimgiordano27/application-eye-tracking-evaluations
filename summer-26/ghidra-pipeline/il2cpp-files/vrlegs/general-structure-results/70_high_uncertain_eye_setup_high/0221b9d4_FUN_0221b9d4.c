/*
FUNCTION_NAME: FUN_0221b9d4
ENTRY_POINT: 0221b9d4
PROGRAM: vrlegs-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0221bae0) */
/* WARNING: Removing unreachable block (ram,0x0221bb70) */

void FUN_0221b9d4(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 local_60;
  long *plStack_58;
  long *local_50;
  char local_44 [4];
  long local_40;
  long local_38;
  long local_28;
  
  local_40 = param_2;
  local_38 = param_1;
  if ((DAT_04122258 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cbec30);
    FUN_01ab69ac(PTR_DAT_03ccf278);
    FUN_01ab69ac(PTR_DAT_03cdbda0);
    DAT_04122258 = 1;
  }
  plStack_58 = &local_38;
  local_50 = &local_40;
  local_44[0] = '\0';
  local_60 = 0;
  while (*(char *)(param_1 + 0x130) == '\0') {
    plVar1 = *(long **)(param_1 + 0x118);
    if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    (**(code **)(*plVar1 + 0x1c8))(plVar1,*(undefined8 *)(*plVar1 + 0x1d0));
    while( true ) {
      if (*(char *)(local_38 + 0x130) != '\0') goto LAB_0221bbf8;
      uVar3 = *(undefined8 *)(local_38 + 0x110);
      local_44[0] = '\0';
      FUN_027e0bd8(uVar3,local_44,0);
      lVar2 = *(long *)(local_38 + 0x110);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      if (*(int *)(lVar2 + 0x20) < 1) {
        lVar2 = 0;
      }
      else {
        FUN_022661a4(lVar2,&local_28,
                     *(undefined8 *)(*(long *)(*(long *)(local_40 + 0x20) + 0xc0) + 0xd8));
        lVar2 = local_28;
      }
      if (local_44[0] != '\0') {
        OVRManager_<>c__<InitOVRManager>b__424_0(uVar3,0);
      }
      param_1 = local_38;
      if (lVar2 == 0) break;
      FUN_0221be04(local_38,lVar2,
                   *(undefined8 *)(*(long *)(*(long *)(local_40 + 0x20) + 0xc0) + 0xb0));
      if (*(long *)(local_38 + 0x120) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      FUN_021c7ff8(*(long *)(local_38 + 0x120),lVar2,*(undefined4 *)(lVar2 + 0x18),
                   *(undefined8 *)(*(long *)(*(long *)(local_40 + 0x20) + 0xc0) + 0xb8));
    }
  }
LAB_0221bbf8:
  FUN_018a0478(&local_60);
  return;
}


