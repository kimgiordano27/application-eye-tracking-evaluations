/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Colocation.NetworkAdapter$$set_NetworkData
ENTRY_POINT: 05309ee8
PROGRAM: Untangled-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_8;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MultiplayerBlocks_Colocation_NetworkAdapter__set_NetworkData
               (ulong param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long unaff_x20;
  long lVar6;
  long unaff_x22;
  undefined8 *puVar7;
  long unaff_x23;
  undefined8 *puVar8;
  
  puVar7 = *(undefined8 **)(unaff_x22 + 0x288);
  puVar8 = *(undefined8 **)(unaff_x23 + 0x7c0);
  if ((param_1 & 1) == 0) {
    FUN_02f07e70(PTR_DAT_06d3a288);
    FUN_02f07e70(PTR_DAT_06d3e7c8);
    FUN_02f07e70(PTR_DAT_06d3e7c0);
    FUN_02f07e70(PTR_DAT_06d3e7d0);
    FUN_02f07e70(PTR_DAT_06d3e7d8);
    FUN_02f07e70(PTR_DAT_06d3e7e0);
    *(undefined1 *)(unaff_x20 + 0x307) = 1;
  }
  lVar6 = *(long *)(param_2 + 0x40);
  uVar5 = thunk_FUN_02ef1808(*puVar7);
  FUN_04c0325c(uVar5,param_2,*puVar8,0);
  puVar3 = PTR_DAT_06d3e7d8;
  if (lVar6 != 0) {
    FUN_0530a100(lVar6,uVar5);
    lVar6 = *(long *)(param_2 + 0x40);
    uVar5 = thunk_FUN_02ef1808(*puVar7);
    FUN_04c0325c(uVar5,param_2,*(undefined8 *)puVar3,0);
    puVar4 = PTR_DAT_06d3e7e0;
    puVar1 = PTR_DAT_06d3e7c8;
    if (lVar6 != 0) {
      FUN_0530a1b0(lVar6,uVar5);
      lVar6 = *(long *)(param_2 + 0x40);
      uVar5 = thunk_FUN_02ef1808(*(undefined8 *)puVar1);
      FUN_04cf2650(uVar5,param_2,*(undefined8 *)puVar4,0);
      puVar2 = PTR_DAT_06d3e7d0;
      if (lVar6 != 0) {
        FUN_0530a260(lVar6,uVar5);
        lVar6 = *(long *)(param_2 + 0x40);
        uVar5 = thunk_FUN_02ef1808(*puVar7);
        FUN_04c0325c(uVar5,param_2,*(undefined8 *)puVar2,0);
        if (lVar6 != 0) {
          FUN_0530a310(lVar6,uVar5);
          lVar6 = *(long *)(param_2 + 0x48);
          uVar5 = thunk_FUN_02ef1808(*puVar7);
          FUN_04c0325c(uVar5,param_2,*puVar8,0);
          if (lVar6 != 0) {
            FUN_0530a100(lVar6,uVar5);
            lVar6 = *(long *)(param_2 + 0x48);
            uVar5 = thunk_FUN_02ef1808(*puVar7);
            FUN_04c0325c(uVar5,param_2,*(undefined8 *)puVar3,0);
            if (lVar6 != 0) {
              FUN_0530a1b0(lVar6,uVar5);
              lVar6 = *(long *)(param_2 + 0x48);
              uVar5 = thunk_FUN_02ef1808(*(undefined8 *)puVar1);
              FUN_04cf2650(uVar5,param_2,*(undefined8 *)puVar4,0);
              if (lVar6 != 0) {
                FUN_0530a260(lVar6,uVar5);
                lVar6 = *(long *)(param_2 + 0x48);
                uVar5 = thunk_FUN_02ef1808(*puVar7);
                FUN_04c0325c(uVar5,param_2,*(undefined8 *)puVar2,0);
                if (lVar6 != 0) {
                  FUN_0530a310(lVar6,uVar5);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


