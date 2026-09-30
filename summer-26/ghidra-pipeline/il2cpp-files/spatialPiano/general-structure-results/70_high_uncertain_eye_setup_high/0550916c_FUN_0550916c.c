/*
FUNCTION_NAME: FUN_0550916c
ENTRY_POINT: 0550916c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 FUN_0550916c(long param_1,long *param_2,long *param_3,undefined4 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  if ((DAT_06bbf577 & 1) == 0) {
    FUN_02f08768(OVRPlugin_OVRP_1_36_0_TypeInfo);
    FUN_02f08768(PTR_DAT_067c9c68);
    FUN_02f08768(PTR_DAT_067c98c8);
    FUN_02f08768(PTR_DAT_067c9a50);
    DAT_06bbf577 = 1;
  }
  puVar2 = PTR_DAT_067c9c68;
  puVar1 = PTR_DAT_067c9a50;
  if (param_2 != (long *)0x0) {
    lVar7 = *(long *)(param_1 + 0x18);
    uVar4 = (**(code **)(*param_2 + 0x188))(param_2,*(undefined8 *)(*param_2 + 400));
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_02f6670c(*(long *)puVar2);
    }
    uVar4 = FUN_054bfec0(uVar4,*(undefined8 *)puVar1,0);
    if (((*(long *)(param_1 + 0x10) != 0) &&
        (uVar3 = FUN_054f6fe4(*(long *)(param_1 + 0x10)), lVar7 != 0)) &&
       (auVar8 = FUN_05512e44(lVar7,uVar4,uVar3,0), puVar1 = PTR_DAT_067c98c8, uVar5 = auVar8._0_8_,
       param_3 != (long *)0x0)) {
      lVar7 = *(long *)(param_1 + 0x18);
      uVar4 = (**(code **)(*param_3 + 0x188))(param_3,*(undefined8 *)(*param_3 + 400));
      uVar4 = FUN_054bfec0(uVar4,*(undefined8 *)puVar1,0);
      if ((*(long *)(param_1 + 0x10) != 0) &&
         (uVar3 = FUN_054f6fe4(*(long *)(param_1 + 0x10)), lVar7 != 0)) {
        auVar9 = FUN_05512e44(lVar7,uVar4,uVar3,0);
        uVar6 = auVar9._0_8_;
        FUN_05500c08(param_1,param_2);
        if (*(long *)(param_1 + 0x10) != 0) {
          FUN_054f85b0(*(long *)(param_1 + 0x10),uVar5 & 0xffffffff);
          FUN_05500c08(param_1,param_3);
          if (*(long *)(param_1 + 0x10) != 0) {
            FUN_054f85b0(*(long *)(param_1 + 0x10),uVar6 & 0xffffffff);
            if (*(long *)(param_1 + 0x10) != 0) {
              FUN_054f7c08(*(long *)(param_1 + 0x10),uVar5 & 0xffffffff);
              if (*(long *)(param_1 + 0x10) != 0) {
                FUN_054f7c08(*(long *)(param_1 + 0x10),uVar6 & 0xffffffff);
                puVar1 = OVRPlugin_OVRP_1_36_0_TypeInfo;
                if (*(long *)(param_1 + 0x10) != 0) {
                  FUN_054f9140();
                  uVar4 = thunk_FUN_02f45270(*(undefined8 *)puVar1);
                  FUN_0550da10(uVar4,uVar5,auVar8._8_8_,uVar6,auVar9._8_8_,param_4,0);
                  return uVar4;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


