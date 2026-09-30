/*
FUNCTION_NAME: OVRPlugin$$GetCurrentTrackingTransformPose
ENTRY_POINT: 06940924
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 97
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetCurrentTrackingTransformPose(long param_1)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long unaff_x19;
  int unaff_w20;
  uint unaff_w21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  
  while ((*(long *)(param_1 + 0x58) != 0 &&
         (lVar4 = FUN_04de82e0(*(long *)(param_1 + 0x58),unaff_w20,*unaff_x22), lVar4 != 0))) {
    FUN_06940970();
    do {
      if (*(long *)(unaff_x19 + 0x38) == 0) goto LAB_0694096c;
      FUN_04cd13e8(*(long *)(unaff_x19 + 0x38),unaff_w20,unaff_w21 & 1,*unaff_x24);
      unaff_w20 = unaff_w20 + 1;
      if ((*(long *)(unaff_x19 + 0x10) == 0) || (*(long *)(*(long *)(unaff_x19 + 0x10) + 0xe8) == 0)
         ) goto LAB_0694096c;
      iVar1 = FUN_06936294();
      if (iVar1 <= unaff_w20) {
        return;
      }
      if ((((*(long *)(unaff_x19 + 0x10) == 0) ||
           (lVar4 = *(long *)(*(long *)(unaff_x19 + 0x10) + 0xe8), lVar4 == 0)) ||
          (lVar4 = *(long *)(lVar4 + 0x58), lVar4 == 0)) ||
         ((lVar4 = FUN_04de82e0(lVar4,unaff_w20,*unaff_x22), lVar4 == 0 ||
          (plVar2 = *(long **)(lVar4 + 0x80), plVar2 == (long *)0x0)))) goto LAB_0694096c;
      unaff_w21 = (**(code **)(*plVar2 + 0x2e8))(plVar2,*(undefined8 *)(*plVar2 + 0x2f0));
      if (*(long *)(unaff_x19 + 0x38) == 0) goto LAB_0694096c;
      uVar3 = FUN_04cd1394(*(long *)(unaff_x19 + 0x38),unaff_w20,*unaff_x23);
    } while (((uVar3 & 1) != 0) || (((unaff_w21 ^ 1) & 1) != 0));
    if ((*(long *)(unaff_x19 + 0x10) == 0) ||
       (param_1 = *(long *)(*(long *)(unaff_x19 + 0x10) + 0xe8), param_1 == 0)) break;
  }
LAB_0694096c:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


