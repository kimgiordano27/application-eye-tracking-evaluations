/*
FUNCTION_NAME: FUN_027ed584
ENTRY_POINT: 027ed584
PROGRAM: vrlegs-libil2cpp.so
SCORE: 94
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_4;strong_foveation_hits_1;functionality_foveated_rendering
*/


void FUN_027ed584(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,uint param_5
                 ,uint param_6,undefined8 param_7)

{
  undefined *puVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_48;
  
  local_48 = param_4;
  if ((DAT_0412512a & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cc9e10);
    FUN_01ab69ac(PTR_DAT_03cd7210);
    DAT_0412512a = 1;
  }
  *(undefined8 *)(param_1 + 0x18) = param_2;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
            ((undefined8 *)(param_1 + 0x18),param_2);
  *(undefined8 *)(param_1 + 0x20) = param_3;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
            ((undefined8 *)(param_1 + 0x20),param_3);
  *(undefined8 *)(param_1 + 0x28) = param_7;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
            ((undefined8 *)(param_1 + 0x28),param_7);
  if ((param_5 & 0xffffffa0) == 0) {
    uVar2 = param_6 | param_5;
    if (*(long *)(param_1 + 0x18) == 0 || (param_6 & 0x200) != 0) {
      uVar2 = param_6 | param_5 | 0x2000000;
    }
    thunk_FUN_01a4b338();
    *(uint *)(param_1 + 0x38) = uVar2;
    if ((((param_5 >> 2 & 1) != 0) && (*(long *)(param_1 + 0x30) != 0)) &&
       (uVar2 = FUN_027edf4c(), (uVar2 >> 3 & 1) == 0)) {
      if (*(long *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      FUN_027edb08();
    }
    if (*(int *)(*(long *)PTR_DAT_03cc9e10 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    puVar1 = PTR_DAT_03cd7210;
    uVar3 = OVRManager__SetFoveatedRenderingLevel(&local_48,0);
    if ((uVar3 & 1) != 0) {
      FUN_027edb7c(param_1,local_48,0,0);
    }
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar4 = FUN_027e063c();
    FUN_027ede5c(param_1,uVar4);
    return;
  }
  thunk_FUN_01a6ca08(PTR_DAT_03cbde98);
  uVar4 = thunk_FUN_01a89e68();
  uVar5 = thunk_FUN_01a6ca08(PTR_DAT_03cefdd0);
  FUN_026b3fc8(uVar4,uVar5,0);
  uVar5 = thunk_FUN_01a6ca08(PTR_DAT_03cfd490);
                    /* WARNING: Subroutine does not return */
  FUN_01ab6b14(uVar4,uVar5);
}


