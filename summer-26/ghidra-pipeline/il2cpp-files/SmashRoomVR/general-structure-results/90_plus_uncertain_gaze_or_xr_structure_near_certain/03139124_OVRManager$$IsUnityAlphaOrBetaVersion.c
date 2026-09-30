/*
FUNCTION_NAME: OVRManager$$IsUnityAlphaOrBetaVersion
ENTRY_POINT: 03139124
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 116
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_14;paired_field_refs_with_eye_source;telemetry_or_network_hits_1;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_1
*/


void OVRManager__IsUnityAlphaOrBetaVersion
               (undefined1 param_1 [16],float param_2,float param_3,float param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  
  if (unaff_x20 != 0) {
    FUN_03928dd4();
    lVar2 = FUN_0391c27c();
    if ((*(long *)(unaff_x19 + 0x40) != 0) &&
       (lVar3 = FUN_0391c27c(*(long *)(unaff_x19 + 0x40),0), lVar3 != 0)) {
      fVar7 = (float)FUN_039274a0(lVar3,0);
      fVar8 = (float)FUN_03914800(0);
      puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
      if (lVar2 != 0) {
        fVar11 = (fVar7 * unaff_s12 + param_4 * unaff_s13 + param_3 * unaff_s14) - param_2 * fVar8;
        fVar10 = (param_3 * fVar8 + param_4 * unaff_s12 + param_2 * unaff_s14) - fVar7 * unaff_s13;
        FUN_03928f54((param_2 * unaff_s13 + param_4 * fVar8 + fVar7 * unaff_s14) -
                     param_3 * unaff_s12,fVar10,fVar11,
                     ((param_4 * unaff_s14 - fVar7 * fVar8) - param_2 * unaff_s12) -
                     param_3 * unaff_s13,lVar2,0);
        uVar6 = *(undefined8 *)(unaff_x19 + 0x30);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar4 = FUN_0391f968(uVar6,0,0);
        if ((uVar4 & 1) == 0) {
          return;
        }
        if (*(long *)(unaff_x19 + 0x30) != 0) {
          uVar6 = FUN_0391c27c(*(long *)(unaff_x19 + 0x30),0);
          uVar5 = FUN_0391c27c();
          lVar2 = *(long *)puVar1;
          if (*(int *)(lVar2 + 0xe0) == 0) {
            thunk_FUN_01ac7298(lVar2);
          }
          uVar4 = FUN_0391f968(uVar6,uVar5,0);
          if ((uVar4 & 1) == 0) {
            return;
          }
          lVar2 = FUN_0391c27c();
          if ((*(long *)(unaff_x19 + 0x30) != 0) &&
             (uVar6 = FUN_0391c27c(*(long *)(unaff_x19 + 0x30),0), lVar2 != 0)) {
            uVar4 = FUN_0392a890(lVar2,uVar6,0);
            if ((uVar4 & 1) != 0) {
              return;
            }
            if (*(long *)(unaff_x19 + 0x30) != 0) {
              lVar2 = FUN_0391c27c(*(long *)(unaff_x19 + 0x30),0);
              lVar3 = FUN_0391c27c();
              if ((lVar3 != 0) && (FUN_03928d34(lVar3,0), lVar2 != 0)) {
                FUN_03928dd4(lVar2,0);
                if (*(long *)(unaff_x19 + 0x30) != 0) {
                  lVar2 = FUN_0391c27c(*(long *)(unaff_x19 + 0x30),0);
                  lVar3 = FUN_0391c27c();
                  if ((lVar3 != 0) && (FUN_039274a0(lVar3,0), lVar2 != 0)) {
                    FUN_03928f54(lVar2,0);
                    if ((*(long *)(unaff_x19 + 0x30) != 0) &&
                       (lVar2 = FUN_0391c27c(*(long *)(unaff_x19 + 0x30),0), lVar2 != 0)) {
                      fVar7 = (float)FUN_03929354(lVar2,0);
                      lVar3 = FUN_0391c27c();
                      if (lVar3 != 0) {
                        fVar8 = (float)FUN_0392a7f0(lVar3,0);
                        if ((*(long *)(unaff_x19 + 0x30) != 0) &&
                           (lVar3 = FUN_0391c27c(*(long *)(unaff_x19 + 0x30),0), lVar3 != 0)) {
                          fVar9 = (float)FUN_0392a7f0(lVar3,0);
                          fVar8 = fVar8 / fVar9;
                          FUN_039293f4(fVar7 * fVar8,fVar10 * fVar8,fVar11 * fVar8,lVar2,0);
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
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


