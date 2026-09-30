/*
FUNCTION_NAME: Oculus.Platform.CAPI$$ovr_Message_GetBlockedUserArray
ENTRY_POINT: 055c16ec
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_1
*/


void Oculus_Platform_CAPI__ovr_Message_GetBlockedUserArray(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *unaff_x23;
  
  LeanTween__value();
  plVar4 = (long *)*unaff_x21;
  uVar2 = FUN_0552e850(0);
  uVar2 = FUN_05362cb4(*unaff_x23,uVar2,0);
  puVar1 = OVRTelemetryMarker_var;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x238))(plVar4,uVar2,*(undefined8 *)(*plVar4 + 0x240));
    uVar2 = *(undefined8 *)(unaff_x20 + 0x70);
    lVar3 = thunk_FUN_02dd3144(*(undefined8 *)puVar1);
    FUN_0556fa28(lVar3,uVar2,0);
    plVar4 = (long *)(unaff_x20 + 0x68);
    *plVar4 = lVar3;
    LeanTween__value(plVar4,lVar3);
    if ((*plVar4 != 0) && (FUN_0556fb90(*plVar4,1,0), unaff_x19 != 0)) {
      lVar3 = *plVar4;
      uVar2 = FUN_05577b78();
      if (lVar3 != 0) {
        puVar5 = (undefined8 *)(lVar3 + 0x58);
        *puVar5 = uVar2;
        LeanTween__value(puVar5,uVar2);
        if (*plVar4 != 0) {
          FUN_055779fc(*plVar4,*(undefined4 *)(unaff_x19 + 0x3c),0);
          if (*plVar4 != 0) {
            *(undefined8 *)(*plVar4 + 0x50) = *(undefined8 *)(unaff_x19 + 0x50);
            LeanTween__value();
            if (*plVar4 != 0) {
              FUN_05577a58(*plVar4,*(undefined4 *)(unaff_x19 + 0x40),0);
              if (*plVar4 != 0) {
                FUN_05577ab4(*plVar4,*(undefined4 *)(unaff_x19 + 0x48),0);
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


