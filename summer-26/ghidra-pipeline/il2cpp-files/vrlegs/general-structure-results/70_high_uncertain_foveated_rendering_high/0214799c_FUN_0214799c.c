/*
FUNCTION_NAME: FUN_0214799c
ENTRY_POINT: 0214799c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 85
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_1;strong_foveation_hits_1;functionality_foveated_rendering
*/


void FUN_0214799c(undefined8 param_1,long param_2,undefined8 param_3,uint param_4,long param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_38;
  
  puVar1 = PTR_DAT_03cc9e10;
                    /* try { // try from 021479c0 to 022479e3 has its CatchHandler @ 02147b1c */
  local_38 = param_3;
  if ((DAT_04121fb4 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cdabc0);
    FUN_01ab69ac(PTR_DAT_03cc9e10);
    DAT_04121fb4 = 1;
  }
  FUN_027b3d9c(param_1,0);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar3 = FUN_027d75b4(&local_38,0);
  lVar4 = *(long *)(**(long **)(*(long *)(param_5 + 0x20) + 0xc0) + 0x80);
  if ((uVar3 & 1) == 0) {
    FUN_018820a8(param_1,lVar4 + 0x20,param_2);
    FUN_018820a8(param_1,*(long *)(**(long **)(*(long *)(param_5 + 0x20) + 0xc0) + 0x80) + 0x40,
                 local_38);
    FUN_01883150(param_1,*(long *)(**(long **)(*(long *)(param_5 + 0x20) + 0xc0) + 0x80) + 0xa0,
                 param_4 & 1);
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    FUN_02146e50(param_2,param_1,*(undefined8 *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x38)
                );
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar3 = OVRManager__SetFoveatedRenderingLevel(&local_38,0);
    uVar2 = local_38;
    if ((uVar3 & 1) != 0) {
      lVar4 = *(long *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x40);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_01a46ff8();
      }
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      lVar4 = *(long *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x40);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_01a46ff8();
      }
      uVar5 = **(undefined8 **)(lVar4 + 0xb8);
      if (*(int *)(*(long *)PTR_DAT_03cdabc0 + 0xe0) == 0) {
        thunk_FUN_01a58e78(*(long *)PTR_DAT_03cdabc0);
      }
      FUN_030bc0b0(&local_78,uVar2,uVar5,param_1,0);
      local_50 = local_68;
      uStack_58 = uStack_70;
      local_60 = local_78;
      uStack_88 = uStack_70;
      local_90 = local_78;
      local_80 = local_68;
      FUN_01887328(param_1,*(long *)(**(long **)(*(long *)(param_5 + 0x20) + 0xc0) + 0x80) + 0x60,
                   &local_90);
    }
  }
  else {
    FUN_01883150(param_1,lVar4 + 0x80,1);
  }
  return;
}


