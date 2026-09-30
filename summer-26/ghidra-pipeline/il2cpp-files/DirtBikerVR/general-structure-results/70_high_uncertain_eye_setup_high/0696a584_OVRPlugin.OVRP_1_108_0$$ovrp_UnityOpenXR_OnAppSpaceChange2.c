/*
FUNCTION_NAME: OVRPlugin.OVRP_1_108_0$$ovrp_UnityOpenXR_OnAppSpaceChange2
ENTRY_POINT: 0696a584
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_108_0__ovrp_UnityOpenXR_OnAppSpaceChange2(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  undefined4 *puVar3;
  long unaff_x19;
  undefined8 *puVar4;
  long unaff_x20;
  long *plVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  
  thunk_FUN_03ae8be4(param_1);
  lVar1 = FUN_04658320();
  plVar5 = (long *)(unaff_x19 + 0x40);
  *plVar5 = lVar1;
  thunk_FUN_03afed3c(plVar5,lVar1);
  if (*plVar5 != 0) {
    lVar1 = FUN_07c9c69c(*plVar5,0);
    if (DAT_08974d89 == '\0') {
      FUN_03a8a718(PTR_DAT_084868a0);
      DAT_08974d89 = '\x01';
    }
    plVar2 = *(long **)(unaff_x20 + 0x80);
    if (plVar2 != (long *)0x0) {
      uVar9 = *(undefined8 *)(*(long *)(*(long *)PTR_DAT_084868a0 + 0xb8) + 0x18);
      fVar8 = *(float *)(*(long *)(*(long *)PTR_DAT_084868a0 + 0xb8) + 0x20);
      fVar6 = (float)(**(code **)(*plVar2 + 0x338))(plVar2,*(undefined8 *)(*plVar2 + 0x340));
      plVar2 = *(long **)(unaff_x20 + 0x80);
      if (plVar2 != (long *)0x0) {
        fVar7 = (float)(**(code **)(*plVar2 + 0x228))(plVar2,*(undefined8 *)(*plVar2 + 0x230));
        if (lVar1 != 0) {
          fVar6 = fVar6 + fVar7;
          FUN_07cab7ec(-(float)uVar9 * fVar6,-(float)((ulong)uVar9 >> 0x20) * fVar6,fVar6 * -fVar8,
                       lVar1,0);
          if (*plVar5 != 0) {
            lVar1 = FUN_07c9c69c(*plVar5,0);
            if (DAT_08974d8a == '\0') {
              FUN_03a8a718(PTR_DAT_08486860);
              DAT_08974d8a = '\x01';
            }
            if (lVar1 != 0) {
              puVar3 = *(undefined4 **)(*(long *)PTR_DAT_08486860 + 0xb8);
              FUN_07cac71c(*puVar3,puVar3[1],puVar3[2],puVar3[3],lVar1,0);
              if (*plVar5 != 0) {
                lVar1 = FUN_04561560(*plVar5,*(undefined8 *)PTR_DAT_084b7010);
                plVar5 = (long *)(unaff_x19 + 0x30);
                *plVar5 = lVar1;
                thunk_FUN_03afed3c(plVar5,lVar1);
                if (*plVar5 != 0) {
                  thunk_FUN_07ca23d0(*plVar5,*(undefined8 *)PTR_DAT_084b7030,0);
                  if (*plVar5 != 0) {
                    uVar9 = FUN_07d1c684(*plVar5,0);
                    puVar4 = (undefined8 *)(unaff_x19 + 0x58);
                    *puVar4 = uVar9;
                    thunk_FUN_03afed3c(puVar4,0);
                    plVar5 = *(long **)(unaff_x20 + 0x80);
                    if (plVar5 != (long *)0x0) {
                      (**(code **)(*plVar5 + 0x248))(plVar5,*(undefined8 *)(*plVar5 + 0x250));
                      FUN_07d1d2c8(puVar4,0);
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
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


