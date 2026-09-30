/*
FUNCTION_NAME: FUN_01eba960
ENTRY_POINT: 01eba960
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 79
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FUN_01eba960(long param_1,long *param_2,long param_3,undefined8 param_4,undefined8 param_5,
                 long param_6,long *param_7,ulong param_8)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  if ((DAT_0293d794 & 1) == 0) {
    thunk_FUN_01279b34(PTR_DAT_027bb950);
    thunk_FUN_01279b34(PTR_DAT_027bb9e8);
    DAT_0293d794 = 1;
  }
  FUN_01fab77c(param_1,0);
  *(long *)(param_1 + 0x10) = (long)param_2;
  thunk_FUN_01286abc((long *)(param_1 + 0x10),param_2);
  *(long *)(param_1 + 0x18) = param_3;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  thunk_FUN_01286abc((undefined8 *)(param_1 + 0x40),0);
  *(undefined8 *)(param_1 + 0x48) = 0;
  thunk_FUN_01286abc((undefined8 *)(param_1 + 0x48),0);
  *(undefined8 *)(param_1 + 0x28) = param_4;
  thunk_FUN_01286abc((undefined8 *)(param_1 + 0x28),param_4);
  *(undefined8 *)(param_1 + 0x30) = param_5;
  thunk_FUN_01286abc((undefined8 *)(param_1 + 0x30),param_5);
  *(undefined1 *)(param_1 + 0x54) = 0;
  if (param_2 != (long *)0x0) {
    lVar6 = *(long *)PTR_DAT_027bb950;
    bVar1 = *(byte *)(lVar6 + 0x130);
    if ((bVar1 <= *(byte *)(*param_2 + 0x130)) &&
       (*(long *)(*(long *)(*param_2 + 200) + ((ulong)bVar1 - 1) * 8) == lVar6)) {
      *(long *)(param_1 + 0x60) = (long)param_2;
      if ((*(byte *)(*param_2 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*param_2 + 200) + ((ulong)bVar1 - 1) * 8) != lVar6)) {
                    /* WARNING: Subroutine does not return */
        FUN_01230f60(param_2);
      }
      thunk_FUN_01286abc((long *)(param_1 + 0x60),param_2);
    }
  }
  if (param_6 == 0) goto LAB_01ebaaec;
  uVar2 = FUN_01ee3bf4(param_7,0,0);
  uVar3 = param_8;
  if ((uVar2 & 1) == 0) {
joined_r0x01ebaaac:
    if (uVar3 == 0) goto LAB_01ebaaec;
  }
  else {
    if ((param_7 == (long *)0x0) ||
       (lVar6 = (**(code **)(*param_7 + 0x238))(param_7,*(undefined8 *)(*param_7 + 0x240)),
       lVar6 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_01230ca0();
    }
    uVar3 = OVRPlugin__set_tiledMultiResLevel(lVar6,0);
    if (param_8 == 0) {
      uVar3 = uVar3 & 1;
      goto joined_r0x01ebaaac;
    }
  }
  if (param_6 == param_3) {
    uVar4 = thunk_FUN_01279b34(PTR_DAT_027bba10);
    uVar4 = FUN_01f942e0(uVar4,0);
    thunk_FUN_01279b34(PTR_DAT_027b5260);
    uVar5 = thunk_FUN_0124bba8();
    FUN_01eb38e0(uVar5,uVar4);
    uVar4 = thunk_FUN_01279b34(PTR_DAT_027bba18);
                    /* WARNING: Subroutine does not return */
    FUN_01230b78(uVar5,uVar4);
  }
  uVar4 = thunk_FUN_0124bba8(*(undefined8 *)PTR_DAT_027bb9e8);
  FUN_01eb4ff0(uVar4,param_6,param_7,param_8);
  *(undefined8 *)(param_1 + 0x58) = uVar4;
  thunk_FUN_01286abc((undefined8 *)(param_1 + 0x58),uVar4);
LAB_01ebaaec:
  FUN_01eb8bd4(param_1);
  return;
}


