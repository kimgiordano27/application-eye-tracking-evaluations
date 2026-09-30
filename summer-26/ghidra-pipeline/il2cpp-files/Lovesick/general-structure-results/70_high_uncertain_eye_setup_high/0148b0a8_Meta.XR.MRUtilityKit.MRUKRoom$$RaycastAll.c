/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKRoom$$RaycastAll
ENTRY_POINT: 0148b0a8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


float Meta_XR_MRUtilityKit_MRUKRoom__RaycastAll(long param_1)

{
  byte bVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  uint unaff_w19;
  long unaff_x20;
  uint unaff_w21;
  uint unaff_w22;
  long unaff_x23;
  long unaff_x24;
  long *unaff_x25;
  uint uVar7;
  float fVar8;
  float unaff_s8;
  float fVar9;
  
  if (param_1 != 0) {
    if (unaff_w22 < *(uint *)(param_1 + 0x18)) {
      lVar4 = *(long *)(unaff_x20 + 0x170);
      if (lVar4 == 0) goto LAB_0148b264;
      if (unaff_w22 < *(uint *)(lVar4 + 0x18)) {
        lVar6 = *(long *)(unaff_x20 + 0xf0);
        if (lVar6 == 0) goto LAB_0148b264;
        if (unaff_w21 < *(uint *)(lVar6 + 0x18)) {
          lVar6 = *(long *)(lVar6 + unaff_x24 * 8 + 0x20);
          if (lVar6 == 0) goto LAB_0148b264;
          if (unaff_w19 < *(uint *)(lVar6 + 0x18)) {
            lVar3 = *unaff_x25;
            bVar1 = *(byte *)(param_1 + (int)unaff_w22 + 0x20);
            bVar2 = *(byte *)(lVar4 + (int)unaff_w22 + 0x20);
            fVar9 = *(float *)(lVar6 + unaff_x23 * 4 + 0x20);
            if (*(int *)(lVar3 + 0xe0) == 0) {
              thunk_FUN_00d32864();
              lVar3 = *unaff_x25;
            }
            lVar4 = *(long *)(unaff_x20 + 0x120);
            if (lVar4 == 0) goto LAB_0148b264;
            if (unaff_w21 < *(uint *)(lVar4 + 0x18)) {
              lVar4 = *(long *)(lVar4 + unaff_x24 * 8 + 0x20);
              if (lVar4 == 0) goto LAB_0148b264;
              if (unaff_w19 < *(uint *)(lVar4 + 0x18)) {
                lVar4 = *(long *)(lVar4 + unaff_x23 * 8 + 0x20);
                if (lVar4 == 0) goto LAB_0148b264;
                if ((uint)bVar2 < *(uint *)(lVar4 + 0x18)) {
                  lVar6 = *(long *)(unaff_x20 + 0x140);
                  if (lVar6 == 0) goto LAB_0148b264;
                  if (unaff_w21 < *(uint *)(lVar6 + 0x18)) {
                    lVar6 = *(long *)(lVar6 + unaff_x24 * 8 + 0x20);
                    if (lVar6 == 0) goto LAB_0148b264;
                    if (unaff_w19 < *(uint *)(lVar6 + 0x18)) {
                      lVar5 = *(long *)(unaff_x20 + 0x180);
                      if (lVar5 == 0) goto LAB_0148b264;
                      if (unaff_w19 < *(uint *)(lVar5 + 0x18)) {
                        lVar5 = *(long *)(lVar5 + unaff_x23 * 8 + 0x20);
                        if (lVar5 == 0) goto LAB_0148b264;
                        if ((uint)bVar2 < *(uint *)(lVar5 + 0x18)) {
                          lVar5 = *(long *)(lVar5 + (ulong)bVar2 * 8 + 0x20);
                          if (lVar5 == 0) goto LAB_0148b264;
                          uVar7 = (uint)bVar1;
                          if (uVar7 < *(uint *)(lVar5 + 0x18)) {
                            lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x30);
                            if (lVar3 == 0) goto LAB_0148b264;
                            fVar8 = (*(float *)(lVar4 + (ulong)bVar2 * 4 + 0x20) -
                                    *(float *)(lVar6 + unaff_x23 * 4 + 0x20) *
                                    (float)*(int *)(lVar5 + (ulong)uVar7 * 4 + 0x20)) * -2.0;
                            uVar7 = 0x80000000;
                            if (fVar8 != INFINITY) {
                              uVar7 = (int)fVar8;
                            }
                            if (uVar7 < *(uint *)(lVar3 + 0x18)) {
                    /* try { // try from 0148b24c to 0158b253 has its CatchHandler @ 0148b87c */
                    /* try { // try from 0148b254 to 0158b25f has its CatchHandler @ 0148b884 */
                              return fVar9 * unaff_s8 *
                                     *(float *)(lVar3 + (long)(int)uVar7 * 4 + 0x20);
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
    FUN_00da5194();
  }
LAB_0148b264:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


