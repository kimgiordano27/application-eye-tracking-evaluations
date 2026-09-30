/*
FUNCTION_NAME: Amazon.Runtime.Telemetry.Metrics.Meter$$Dispose
ENTRY_POINT: 0408e778
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


void Amazon_Runtime_Telemetry_Metrics_Meter__Dispose(ulong param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  int iVar5;
  
                    /* catch() { ... } // from try @ 0408e570 with catch @ 0408e778 */
  if ((param_1 & 1) != 0) {
    thunk_FUN_03d1e194(PTR_DAT_091a4f90);
    uVar2 = thunk_FUN_03d2ef40();
    uVar3 = thunk_FUN_03d1e194(PTR_DAT_091ab3a8);
    FUN_071b07cc(uVar2,uVar3,0);
    uVar3 = thunk_FUN_03d1e194(PTR_DAT_091ab3b0);
                    /* WARNING: Subroutine does not return */
    FUN_03d2d414(uVar2,uVar3);
  }
                    /* catch() { ... } // from try @ 0408e660 with catch @ 0408e77c
                       catch() { ... } // from try @ 0408e758 with catch @ 0408e77c */
  if (unaff_x20 != 0) {
    lVar4 = *(long *)(unaff_x20 + 0x48);
                    /* catch() { ... } // from try @ 0408e5cc with catch @ 0408e788
                       catch() { ... } // from try @ 0408e750 with catch @ 0408e788
                       catch() { ... } // from try @ 0408e760 with catch @ 0408e788 */
    *(undefined4 *)(unaff_x20 + 0x20) = *(undefined4 *)(unaff_x19 + 0x20);
    if (lVar4 != 0) {
      iVar5 = *(int *)(lVar4 + 0x18);
      *(undefined4 *)(lVar4 + 0x18) = 0;
      *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
      if (0 < iVar5) {
                    /* try { // try from 0408e7a4 to 0418e7a7 has its CatchHandler @ 0408e850 */
        FUN_0719b698(*(undefined8 *)(lVar4 + 0x10),0,iVar5,0);
      }
      lVar4 = *(long *)(unaff_x20 + 0x50);
      if (lVar4 != 0) {
        iVar5 = *(int *)(lVar4 + 0x18);
        *(undefined4 *)(lVar4 + 0x18) = 0;
        *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
        if (0 < iVar5) {
          FUN_0719b698(*(undefined8 *)(lVar4 + 0x10),0,iVar5,0);
          lVar4 = *(long *)(unaff_x20 + 0x50);
          if (lVar4 == 0) goto LAB_0408e8c8;
        }
        puVar1 = PTR_DAT_091ab378;
        FUN_05a00adc(lVar4,*(undefined8 *)(unaff_x19 + 0x50),*(undefined8 *)PTR_DAT_091ab378);
        lVar4 = *(long *)(unaff_x20 + 0x58);
        if (lVar4 != 0) {
          iVar5 = *(int *)(lVar4 + 0x18);
          *(undefined4 *)(lVar4 + 0x18) = 0;
          *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
          if (0 < iVar5) {
            FUN_0719b698(*(undefined8 *)(lVar4 + 0x10),0,iVar5,0);
            lVar4 = *(long *)(unaff_x20 + 0x58);
            if (lVar4 == 0) goto LAB_0408e8c8;
          }
          FUN_05a00adc(lVar4,*(undefined8 *)(unaff_x19 + 0x58),*(undefined8 *)puVar1);
          lVar4 = *(long *)(unaff_x20 + 0x40);
          if (lVar4 != 0) {
            iVar5 = *(int *)(lVar4 + 0x18);
            *(undefined4 *)(lVar4 + 0x18) = 0;
            *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
            if (0 < iVar5) {
              FUN_0719b698(*(undefined8 *)(lVar4 + 0x10),0,iVar5,0);
              lVar4 = *(long *)(unaff_x20 + 0x40);
              if (lVar4 == 0) goto LAB_0408e8c8;
            }
            FUN_05a39940(lVar4,*(undefined8 *)(unaff_x19 + 0x40),*(undefined8 *)PTR_DAT_091ab370);
            puVar1 = PTR_DAT_091ab3a0;
            lVar4 = *(long *)(unaff_x19 + 0x38);
            if (lVar4 != 0) {
              iVar5 = 0;
              do {
                if (*(int *)(lVar4 + 0x18) <= iVar5) {
                  return;
                }
                FUN_05a39464(lVar4,iVar5,*(undefined8 *)puVar1);
                FUN_0408e924();
                lVar4 = *(long *)(unaff_x19 + 0x38);
                iVar5 = iVar5 + 1;
              } while (lVar4 != 0);
            }
          }
        }
      }
    }
  }
LAB_0408e8c8:
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


