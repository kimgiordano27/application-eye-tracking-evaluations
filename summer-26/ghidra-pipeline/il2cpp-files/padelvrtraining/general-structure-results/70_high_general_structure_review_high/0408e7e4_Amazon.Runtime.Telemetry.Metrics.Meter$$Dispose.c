/*
FUNCTION_NAME: Amazon.Runtime.Telemetry.Metrics.Meter$$Dispose
ENTRY_POINT: 0408e7e4
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void Amazon_Runtime_Telemetry_Metrics_Meter__Dispose(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  int iVar3;
  
  puVar1 = PTR_DAT_091ab378;
  if (param_1 != 0) {
    FUN_05a00adc(param_1,*(undefined8 *)(unaff_x19 + 0x50),*(undefined8 *)PTR_DAT_091ab378);
    lVar2 = *(long *)(unaff_x20 + 0x58);
    if (lVar2 != 0) {
      iVar3 = *(int *)(lVar2 + 0x18);
      *(undefined4 *)(lVar2 + 0x18) = 0;
      *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
      if (0 < iVar3) {
        FUN_0719b698(*(undefined8 *)(lVar2 + 0x10),0,iVar3,0);
        lVar2 = *(long *)(unaff_x20 + 0x58);
        if (lVar2 == 0) goto LAB_0408e8c8;
      }
      FUN_05a00adc(lVar2,*(undefined8 *)(unaff_x19 + 0x58),*(undefined8 *)puVar1);
      lVar2 = *(long *)(unaff_x20 + 0x40);
      if (lVar2 != 0) {
        iVar3 = *(int *)(lVar2 + 0x18);
        *(undefined4 *)(lVar2 + 0x18) = 0;
        *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
        if (0 < iVar3) {
          FUN_0719b698(*(undefined8 *)(lVar2 + 0x10),0,iVar3,0);
          lVar2 = *(long *)(unaff_x20 + 0x40);
          if (lVar2 == 0) goto LAB_0408e8c8;
        }
        FUN_05a39940(lVar2,*(undefined8 *)(unaff_x19 + 0x40),*(undefined8 *)PTR_DAT_091ab370);
        puVar1 = PTR_DAT_091ab3a0;
        lVar2 = *(long *)(unaff_x19 + 0x38);
        if (lVar2 != 0) {
          iVar3 = 0;
          do {
            if (*(int *)(lVar2 + 0x18) <= iVar3) {
              return;
            }
            FUN_05a39464(lVar2,iVar3,*(undefined8 *)puVar1);
            FUN_0408e924();
            lVar2 = *(long *)(unaff_x19 + 0x38);
            iVar3 = iVar3 + 1;
          } while (lVar2 != 0);
        }
      }
    }
  }
LAB_0408e8c8:
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


