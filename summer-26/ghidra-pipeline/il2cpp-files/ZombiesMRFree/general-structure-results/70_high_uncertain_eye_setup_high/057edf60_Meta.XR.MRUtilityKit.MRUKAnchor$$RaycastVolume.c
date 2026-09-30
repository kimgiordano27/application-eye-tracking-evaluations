/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKAnchor$$RaycastVolume
ENTRY_POINT: 057edf60
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUKAnchor__RaycastVolume(void)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x19;
  long unaff_x25;
  int iVar6;
  long unaff_x29;
  
  *(undefined8 *)(unaff_x29 + -0x20) = 0;
  uVar2 = FUN_068b2660();
  if ((uVar2 & 1) != 0) {
    do {
      iVar1 = *(int *)(unaff_x29 + -0x20);
      iVar6 = *(int *)(unaff_x29 + -0x1c);
      if (iVar6 < iVar1) {
        do {
          lVar3 = *(long *)(unaff_x19 + 0x20);
          if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
            lVar3 = FUN_02feb2c4();
          }
          lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x38);
          if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
            lVar3 = FUN_02feb2c4(lVar3);
          }
          lVar4 = *(long *)(unaff_x19 + 0x20);
          if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
            lVar4 = FUN_02feb2c4();
          }
          uVar5 = *(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x40);
          *(int *)(unaff_x29 + -0xc) = iVar6;
          *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0xc;
          FUN_02fe9dc8(lVar3,uVar5);
          iVar6 = iVar6 + 1;
        } while (iVar1 != iVar6);
      }
      uVar2 = FUN_068b2660();
    } while ((uVar2 & 1) != 0);
  }
  if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


