/*
FUNCTION_NAME: Unity.XR.Oculus.OculusLoader$$RuntimeLoadOVRPlugin
ENTRY_POINT: 022df11c
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 88
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_14;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_1
*/


void Unity_XR_Oculus_OculusLoader__RuntimeLoadOVRPlugin(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined4 in_w8;
  long unaff_x21;
  long unaff_x22;
  long lVar5;
  long lVar6;
  long lVar7;
  long unaff_x23;
  undefined8 *unaff_x24;
  long lVar8;
  
  *(undefined4 *)(unaff_x23 + -8) = in_w8;
  *(undefined2 *)(unaff_x23 + 0x28) = 0x101;
  FUN_022e0168();
  puVar2 = PTR_DAT_027d1580;
  if (unaff_x22 != 0) {
    FUN_01b2ac40();
    lVar5 = *(long *)(unaff_x21 + 0x48);
    uVar4 = FUN_022e0400();
    if (lVar5 != 0) {
      FUN_01b2ac40(lVar5,uVar4,*(undefined8 *)puVar2);
      FUN_022870cc();
      lVar5 = thunk_FUN_0124bba8(*unaff_x24);
      thunk_FUN_02292194(lVar5,0);
      if (lVar5 != 0) {
        *(undefined8 *)(lVar5 + 0x28) = *(undefined8 *)PTR_DAT_027d3510;
        thunk_FUN_01286abc((undefined8 *)(lVar5 + 0x28));
        lVar6 = *(long *)(lVar5 + 0x48);
        *(undefined2 *)(lVar5 + 0x50) = 0x101;
        uVar4 = FUN_022e0698();
        puVar3 = PTR_DAT_027d1988;
        if (lVar6 != 0) {
          FUN_01b2ac40(lVar6,uVar4,*(undefined8 *)puVar2);
          lVar7 = *(long *)(lVar5 + 0x48);
          lVar6 = thunk_FUN_0124bba8(*(undefined8 *)puVar3);
          FUN_02292194(lVar6,0);
          puVar1 = PTR_DAT_027b67b8;
          if (lVar6 != 0) {
            *(undefined8 *)(lVar6 + 0x28) = *(undefined8 *)PTR_DAT_027d3520;
            thunk_FUN_01286abc();
            uVar4 = thunk_FUN_0124bba8(*(undefined8 *)puVar1);
            FUN_0180e430();
            *(undefined8 *)(lVar6 + 0x40) = uVar4;
            thunk_FUN_01286abc((undefined8 *)(lVar6 + 0x40),uVar4);
            lVar8 = *(long *)(lVar6 + 0x48);
            uVar4 = FUN_022e09e4();
            if (lVar8 != 0) {
              FUN_01b2ac40(lVar8,uVar4,*(undefined8 *)puVar2);
              lVar8 = *(long *)(lVar6 + 0x48);
              uVar4 = FUN_022e0d30();
              if (lVar8 != 0) {
                FUN_01b2ac40(lVar8,uVar4,*(undefined8 *)puVar2);
                lVar8 = *(long *)(lVar6 + 0x48);
                uVar4 = FUN_022e0f3c();
                if (lVar8 != 0) {
                  FUN_01b2ac40(lVar8,uVar4,*(undefined8 *)puVar2);
                  lVar8 = *(long *)(lVar6 + 0x48);
                  uVar4 = FUN_022e10f8();
                  if (lVar8 != 0) {
                    FUN_01b2ac40(lVar8,uVar4,*(undefined8 *)puVar2);
                    lVar8 = *(long *)(lVar6 + 0x48);
                    uVar4 = FUN_022e12b4();
                    if (lVar8 != 0) {
                      FUN_01b2ac40(lVar8,uVar4,*(undefined8 *)puVar2);
                      lVar8 = *(long *)(lVar6 + 0x48);
                      uVar4 = FUN_022e14cc();
                      if ((lVar8 != 0) &&
                         (FUN_01b2ac40(lVar8,uVar4,*(undefined8 *)puVar2), lVar7 != 0)) {
                        FUN_01b2ac40(lVar7,lVar6,*(undefined8 *)puVar2);
                        lVar6 = *(long *)(lVar5 + 0x48);
                        lVar5 = thunk_FUN_0124bba8(*(undefined8 *)puVar3);
                        FUN_02292194(lVar5,0);
                        if (lVar5 != 0) {
                          *(undefined8 *)(lVar5 + 0x28) = *(undefined8 *)PTR_DAT_027d3528;
                          thunk_FUN_01286abc();
                          uVar4 = thunk_FUN_0124bba8(*(undefined8 *)puVar1);
                          FUN_0180e430();
                          *(undefined8 *)(lVar5 + 0x40) = uVar4;
                          thunk_FUN_01286abc((undefined8 *)(lVar5 + 0x40),uVar4);
                          lVar7 = *(long *)(lVar5 + 0x48);
                          uVar4 = Unity_XR_Oculus_NativeMethods__GetShouldRestartSession();
                          if (lVar7 != 0) {
                            FUN_01b2ac40(lVar7,uVar4,*(undefined8 *)puVar2);
                            lVar7 = *(long *)(lVar5 + 0x48);
                            uVar4 = FUN_022e18a0();
                            if ((lVar7 != 0) &&
                               (FUN_01b2ac40(lVar7,uVar4,*(undefined8 *)puVar2), lVar6 != 0)) {
                              FUN_01b2ac40(lVar6,lVar5,*(undefined8 *)puVar2);
                              FUN_022870cc();
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
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01230ca0();
}


