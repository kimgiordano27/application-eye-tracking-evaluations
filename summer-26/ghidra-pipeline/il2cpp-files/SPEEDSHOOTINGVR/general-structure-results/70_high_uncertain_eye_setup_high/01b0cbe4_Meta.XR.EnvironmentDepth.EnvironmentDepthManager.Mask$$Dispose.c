/*
FUNCTION_NAME: Meta.XR.EnvironmentDepth.EnvironmentDepthManager.Mask$$Dispose
ENTRY_POINT: 01b0cbe4
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_EnvironmentDepth_EnvironmentDepthManager_Mask__Dispose(void)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  undefined8 uVar6;
  
  FUN_01d68ae8();
  lVar3 = *(long *)(unaff_x21 + 0x10);
  if (lVar3 != 0) {
    uVar2 = *(uint *)(lVar3 + 0x20);
    if (0 < (int)uVar2) {
      lVar3 = *(long *)(lVar3 + 0x18);
      if (lVar3 == 0) goto LAB_01b0cc74;
      uVar4 = 0;
      puVar5 = (undefined8 *)(lVar3 + 0x2c);
      do {
        if (*(uint *)(lVar3 + 0x18) <= uVar4) {
LAB_01b0cc5c:
                    /* WARNING: Subroutine does not return */
          FUN_00fdc53c();
        }
        if (-1 < *(int *)((long)puVar5 + -0xc)) {
          if (*(uint *)(unaff_x20 + 0x18) <= unaff_w19) goto LAB_01b0cc5c;
          uVar6 = *puVar5;
          lVar1 = unaff_x20 + (long)(int)unaff_w19 * 0x10;
          unaff_w19 = unaff_w19 + 1;
          *(undefined8 *)(lVar1 + 0x28) = puVar5[1];
          *(undefined8 *)(lVar1 + 0x20) = uVar6;
        }
        uVar4 = uVar4 + 1;
        puVar5 = (undefined8 *)((long)puVar5 + 0x1c);
      } while (uVar2 != uVar4);
    }
    return;
  }
LAB_01b0cc74:
                    /* WARNING: Subroutine does not return */
  FUN_00fdc534();
}


