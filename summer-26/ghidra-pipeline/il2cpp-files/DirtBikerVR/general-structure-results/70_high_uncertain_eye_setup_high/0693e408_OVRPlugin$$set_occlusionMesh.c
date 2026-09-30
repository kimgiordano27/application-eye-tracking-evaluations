/*
FUNCTION_NAME: OVRPlugin$$set_occlusionMesh
ENTRY_POINT: 0693e408
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRPlugin__set_occlusionMesh(long *param_1,uint param_2)

{
  long lVar1;
  undefined *puVar2;
  bool bVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  
  if ((DAT_0897cf83 & 1) == 0) {
    FUN_03a8a718(PTR_DAT_084883a0);
    DAT_0897cf83 = 1;
  }
  uVar4 = FUN_0693d17c(param_1,param_2 & 1);
  puVar2 = PTR_DAT_084883a0;
  if ((uVar4 & 1) != 0) {
    if (((param_1[2] != 0) && (lVar6 = *(long *)(param_1[2] + 0xe8), lVar6 != 0)) &&
       (lVar6 = *(long *)(lVar6 + 0x40), lVar6 != 0)) {
      lVar6 = *(long *)(lVar6 + 0xb0);
      uVar5 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_084883a0);
      FUN_07cb26a0(uVar5,param_1,*(undefined8 *)(*param_1 + 0x2f0),0);
      if (lVar6 != 0) {
        FUN_07cb2770(lVar6,uVar5,0);
        if (((param_1[2] != 0) && (lVar6 = *(long *)(param_1[2] + 0xe8), lVar6 != 0)) &&
           (lVar6 = *(long *)(lVar6 + 0x40), lVar6 != 0)) {
          lVar6 = *(long *)(lVar6 + 0xb8);
          uVar5 = thunk_FUN_03ac74bc(*(undefined8 *)puVar2);
          FUN_07cb26a0(uVar5,param_1,*(undefined8 *)(*param_1 + 0x330),0);
          if (lVar6 != 0) {
            FUN_07cb2770(lVar6,uVar5,0);
            if (((param_1[2] != 0) && (lVar6 = *(long *)(param_1[2] + 0xe8), lVar6 != 0)) &&
               (lVar6 = *(long *)(lVar6 + 0x40), lVar6 != 0)) {
              bVar3 = *(char *)(lVar6 + 0x138) != '\0';
              lVar6 = 0x330;
              if (bVar3) {
                lVar6 = 0x2f0;
              }
              lVar1 = 0x328;
              if (bVar3) {
                lVar1 = 0x2e8;
              }
              (**(code **)(*param_1 + lVar1))(param_1,*(undefined8 *)(*param_1 + lVar6));
              goto LAB_0693e538;
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
LAB_0693e538:
  return uVar4 & 1;
}


