/*
FUNCTION_NAME: OVRPlugin.OVRP_1_72_0$$.cctor
ENTRY_POINT: 06977374
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_72_0___cctor(undefined4 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined4 *puVar4;
  long unaff_x19;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  long *unaff_x22;
  
  FUN_07cac71c(*param_1,param_1[1],param_1[2],param_1[3]);
  lVar6 = *(long *)(unaff_x19 + 0x30);
  uVar2 = FUN_07c9c69c();
  if (lVar6 != 0) {
    puVar7 = (undefined8 *)(lVar6 + 0x20);
    *puVar7 = uVar2;
    thunk_FUN_03afed3c(puVar7,uVar2);
    lVar5 = *(long *)(unaff_x19 + 0x30);
    lVar6 = FUN_07c98f88();
    puVar1 = PTR_DAT_084b74f0;
    if (lVar6 != 0) {
      uVar2 = FUN_07cae590(lVar6,*(undefined8 *)PTR_DAT_084b74f0,0);
      if (lVar5 != 0) {
        puVar7 = (undefined8 *)(lVar5 + 0x28);
        *puVar7 = uVar2;
        thunk_FUN_03afed3c(puVar7,uVar2);
        if (*(long *)(unaff_x19 + 0x30) != 0) {
          uVar2 = *(undefined8 *)(*(long *)(unaff_x19 + 0x30) + 0x28);
          if (*(int *)(*unaff_x22 + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          uVar3 = FUN_07c9e200(uVar2,0,0);
          if ((uVar3 & 1) == 0) {
            return;
          }
          lVar6 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_08487320);
          FUN_07c9d2fc(lVar6,*(undefined8 *)puVar1,0);
          if (lVar6 != 0) {
            lVar5 = FUN_07c9c69c(lVar6,0);
            uVar2 = FUN_07c98f88();
            if (lVar5 != 0) {
              FUN_07cacc78(lVar5,uVar2,0);
              lVar5 = FUN_07c9c69c(lVar6,0);
              if (lVar5 != 0) {
                FUN_07cab7ec(0,lVar5,0);
                lVar5 = FUN_07c9c69c(lVar6,0);
                if (DAT_08974d8a == '\0') {
                  FUN_03a8a718(PTR_DAT_08486860);
                  DAT_08974d8a = '\x01';
                }
                if (lVar5 != 0) {
                  puVar4 = *(undefined4 **)(*(long *)PTR_DAT_08486860 + 0xb8);
                  FUN_07cac71c(*puVar4,puVar4[1],puVar4[2],puVar4[3],lVar5,0);
                  lVar5 = *(long *)(unaff_x19 + 0x30);
                  uVar2 = FUN_07c9c69c(lVar6,0);
                  if (lVar5 != 0) {
                    puVar7 = (undefined8 *)(lVar5 + 0x28);
                    *puVar7 = uVar2;
                    thunk_FUN_03afed3c(puVar7,uVar2);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


