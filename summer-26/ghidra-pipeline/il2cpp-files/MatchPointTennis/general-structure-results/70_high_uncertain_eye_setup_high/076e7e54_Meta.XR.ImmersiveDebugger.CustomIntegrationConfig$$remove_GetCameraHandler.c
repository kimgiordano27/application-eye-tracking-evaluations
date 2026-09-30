/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.CustomIntegrationConfig$$remove_GetCameraHandler
ENTRY_POINT: 076e7e54
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_9;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_CustomIntegrationConfig__remove_GetCameraHandler(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  
  if (unaff_x20 != 0) {
    FUN_095420d0();
    if ((*(long *)(unaff_x19 + 0x138) != 0) &&
       (lVar3 = FUN_04c6bfdc(*(long *)(unaff_x19 + 0x138),*unaff_x23), lVar3 != 0)) {
      lVar3 = *(long *)(lVar3 + 0x100);
      uVar4 = thunk_FUN_0448520c(*unaff_x22);
      FUN_09542000();
      if (lVar3 != 0) {
        FUN_095420d0(lVar3,uVar4,0);
        if ((*(long *)(unaff_x19 + 0x140) != 0) &&
           (lVar3 = FUN_04c6bfdc(*(long *)(unaff_x19 + 0x140),*unaff_x23), lVar3 != 0)) {
          lVar3 = *(long *)(lVar3 + 0x100);
          uVar4 = thunk_FUN_0448520c(*unaff_x22);
          FUN_09542000();
          if (lVar3 != 0) {
            FUN_095420d0(lVar3,uVar4,0);
            if ((*(long *)(unaff_x19 + 0x148) != 0) &&
               (lVar3 = FUN_04c6bfdc(*(long *)(unaff_x19 + 0x148),*unaff_x23), lVar3 != 0)) {
              lVar3 = *(long *)(lVar3 + 0x100);
              uVar4 = thunk_FUN_0448520c(*unaff_x22);
              FUN_09542000();
              if (lVar3 != 0) {
                FUN_095420d0(lVar3,uVar4,0);
                if ((*(long *)(unaff_x19 + 0x188) != 0) &&
                   (lVar3 = FUN_04d7a1ac(*(long *)(unaff_x19 + 0x188),
                                         *(undefined8 *)PTR_DAT_09f2f2e8), lVar3 != 0)) {
                  lVar3 = *(long *)(lVar3 + 0x100);
                  uVar4 = thunk_FUN_0448520c(*unaff_x22);
                  FUN_09542000();
                  puVar2 = PTR_DAT_09f21ad0;
                  puVar1 = PTR_DAT_09f20070;
                  if (lVar3 != 0) {
                    FUN_095420d0(lVar3,uVar4,0);
                    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                      thunk_FUN_044a54b4();
                    }
                    uVar4 = FUN_07a1e8c0(0);
                    uVar5 = FUN_07a1e9e8(0);
                    uVar4 = FUN_07a2064c(uVar4,uVar5,0);
                    *(undefined8 *)(unaff_x19 + 0x2e0) = uVar4;
                    *(undefined8 *)(unaff_x19 + 0x2f8) = 0;
                    *(undefined8 *)(unaff_x19 + 0x2f0) = 0;
                    uVar4 = thunk_FUN_0448520c(*(undefined8 *)puVar1);
                    FUN_09834e40(uVar4,0,0);
                    *(undefined8 *)(unaff_x19 + 0x300) = uVar4;
                    thunk_FUN_044bb4b4(unaff_x19 + 0x300,uVar4);
                    puVar1 = PTR_DAT_09f2f330;
                    if (*(char *)(unaff_x19 + 0x40) != '\0') {
                      uVar4 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f2f330);
                      FUN_094bed1c();
                      if (*(int *)(*(long *)PTR_DAT_09f1e6b8 + 0xe4) == 0) {
                        thunk_FUN_044a54b4();
                      }
                      UnityEngine_Rigidbody__AddExplosionForce(uVar4,0);
                      uVar4 = thunk_FUN_0448520c(*(undefined8 *)puVar1);
                      FUN_094bed1c();
                      FUN_094bd318(uVar4,0);
                      return;
                    }
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
  FUN_04447e44();
}


