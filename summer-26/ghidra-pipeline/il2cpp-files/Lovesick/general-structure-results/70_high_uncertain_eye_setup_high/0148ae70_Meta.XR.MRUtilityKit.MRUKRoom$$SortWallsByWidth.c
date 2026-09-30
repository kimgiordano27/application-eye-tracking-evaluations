/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKRoom$$SortWallsByWidth
ENTRY_POINT: 0148ae70
PROGRAM: Lovesick-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


float Meta_XR_MRUtilityKit_MRUKRoom__SortWallsByWidth(long param_1)

{
  byte bVar1;
  byte bVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  uint unaff_w19;
  long unaff_x20;
  uint unaff_w21;
  uint unaff_w22;
  long lVar10;
  long unaff_x24;
  uint uVar11;
  float fVar12;
  float unaff_s8;
  float fVar13;
  
  puVar3 = 
  Method_System_Collections_Generic_Dictionary<MRUKAnchor_SceneLabels,_List<MRUKAnchor>>_GetEnumerator__
  ;
  if (*(uint *)(param_1 + 0x18) <= unaff_w19) goto LAB_0148b268;
  lVar10 = (long)(int)unaff_w19;
  if (*(char *)(param_1 + lVar10 + 0x20) != '\0') {
    lVar5 = *(long *)(unaff_x20 + 0x110);
    if (lVar5 == 0) goto LAB_0148b264;
    if (*(uint *)(lVar5 + 0x18) <= unaff_w21) goto LAB_0148b268;
    lVar5 = *(long *)(lVar5 + unaff_x24 * 8 + 0x20);
    if (lVar5 == 0) goto LAB_0148b264;
    if (*(uint *)(lVar5 + 0x18) <= unaff_w19) goto LAB_0148b268;
    if (*(int *)(lVar5 + lVar10 * 4 + 0x20) == 2) {
      lVar5 = *(long *)(unaff_x20 + 0x108);
      if (lVar5 == 0) goto LAB_0148b264;
      if (*(uint *)(lVar5 + 0x18) <= unaff_w21) goto LAB_0148b268;
      lVar5 = *(long *)(lVar5 + unaff_x24 * 8 + 0x20);
      if (lVar5 == 0) goto LAB_0148b264;
      if (*(uint *)(lVar5 + 0x18) <= unaff_w19) goto LAB_0148b268;
      if (*(char *)(lVar5 + lVar10 + 0x20) != '\0') {
        lVar5 = *(long *)(unaff_x20 + 0x150);
        if (lVar5 == 0) goto LAB_0148b264;
        if (*(uint *)(lVar5 + 0x18) < 9) goto LAB_0148b268;
        if ((int)unaff_w22 < *(int *)(lVar5 + 0x40)) goto LAB_0148af28;
      }
      lVar5 = *(long *)(unaff_x20 + 0x168);
      if (lVar5 == 0) goto LAB_0148b264;
      if (unaff_w22 < *(uint *)(lVar5 + 0x18)) {
        lVar6 = *(long *)(unaff_x20 + 0x170);
        if (lVar6 == 0) goto LAB_0148b264;
        if (*(uint *)(lVar6 + 0x18) <= unaff_w22) goto LAB_0148b268;
        lVar4 = *(long *)(unaff_x20 + 0xf0);
        if (lVar4 == 0) goto LAB_0148b264;
        if (*(uint *)(lVar4 + 0x18) <= unaff_w21) goto LAB_0148b268;
        lVar4 = *(long *)(lVar4 + unaff_x24 * 8 + 0x20);
        if (lVar4 == 0) goto LAB_0148b264;
        if (*(uint *)(lVar4 + 0x18) <= unaff_w19) goto LAB_0148b268;
        lVar7 = *(long *)
                 Method_System_Collections_Generic_Dictionary<MRUKAnchor_SceneLabels,_List<MRUKAnchor>>_GetEnumerator__
        ;
        bVar1 = *(byte *)(lVar5 + (int)unaff_w22 + 0x20);
        bVar2 = *(byte *)(lVar6 + (int)unaff_w22 + 0x20);
        fVar13 = *(float *)(lVar4 + lVar10 * 4 + 0x20);
        if (*(int *)(lVar7 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar7 = *(long *)puVar3;
        }
        lVar5 = *(long *)(unaff_x20 + 0x120);
        if (lVar5 == 0) goto LAB_0148b264;
        if (*(uint *)(lVar5 + 0x18) <= unaff_w21) goto LAB_0148b268;
        lVar5 = *(long *)(lVar5 + unaff_x24 * 8 + 0x20);
        if (lVar5 == 0) goto LAB_0148b264;
        if (*(uint *)(lVar5 + 0x18) <= unaff_w19) goto LAB_0148b268;
        lVar5 = *(long *)(lVar5 + lVar10 * 8 + 0x20);
        if (lVar5 == 0) goto LAB_0148b264;
        if (*(uint *)(lVar5 + 0x18) <= (uint)bVar2) goto LAB_0148b268;
        lVar6 = *(long *)(unaff_x20 + 0x140);
        if (lVar6 == 0) goto LAB_0148b264;
        if (*(uint *)(lVar6 + 0x18) <= unaff_w21) goto LAB_0148b268;
        lVar6 = *(long *)(lVar6 + unaff_x24 * 8 + 0x20);
        if (lVar6 == 0) goto LAB_0148b264;
        if (*(uint *)(lVar6 + 0x18) <= unaff_w19) goto LAB_0148b268;
        lVar4 = *(long *)(unaff_x20 + 0x180);
        if (lVar4 == 0) goto LAB_0148b264;
        if (*(uint *)(lVar4 + 0x18) <= unaff_w19) goto LAB_0148b268;
        lVar4 = *(long *)(lVar4 + lVar10 * 8 + 0x20);
        if (lVar4 == 0) goto LAB_0148b264;
        if (*(uint *)(lVar4 + 0x18) <= (uint)bVar2) goto LAB_0148b268;
        lVar4 = *(long *)(lVar4 + (ulong)bVar2 * 8 + 0x20);
        if (lVar4 == 0) goto LAB_0148b264;
        uVar11 = (uint)bVar1;
        if (*(uint *)(lVar4 + 0x18) <= uVar11) goto LAB_0148b268;
        lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x30);
        if (lVar7 == 0) goto LAB_0148b264;
        fVar12 = (*(float *)(lVar5 + (ulong)bVar2 * 4 + 0x20) -
                 *(float *)(lVar6 + lVar10 * 4 + 0x20) *
                 (float)*(int *)(lVar4 + (ulong)uVar11 * 4 + 0x20)) * -2.0;
        uVar11 = 0x80000000;
        if (fVar12 != INFINITY) {
          uVar11 = (int)fVar12;
        }
        if (*(uint *)(lVar7 + 0x18) <= uVar11) goto LAB_0148b268;
        goto LAB_0148b238;
      }
      goto LAB_0148b268;
    }
  }
LAB_0148af28:
  lVar5 = *(long *)(unaff_x20 + 0x160);
  if (lVar5 != 0) {
    if (unaff_w22 < *(uint *)(lVar5 + 0x18)) {
      lVar6 = *(long *)(unaff_x20 + 0xf0);
      if (lVar6 == 0) goto LAB_0148b264;
      if (unaff_w21 < *(uint *)(lVar6 + 0x18)) {
        lVar6 = *(long *)(lVar6 + unaff_x24 * 8 + 0x20);
        if (lVar6 == 0) goto LAB_0148b264;
        if (unaff_w19 < *(uint *)(lVar6 + 0x18)) {
          lVar4 = *(long *)
                   Method_System_Collections_Generic_Dictionary<MRUKAnchor_SceneLabels,_List<MRUKAnchor>>_GetEnumerator__
          ;
          bVar1 = *(byte *)(lVar5 + (int)unaff_w22 + 0x20);
          fVar13 = *(float *)(lVar6 + lVar10 * 4 + 0x20);
          if (*(int *)(lVar4 + 0xe0) == 0) {
            thunk_FUN_00d32864();
            lVar4 = *(long *)puVar3;
          }
          lVar5 = *(long *)(unaff_x20 + 0x140);
          if (lVar5 == 0) goto LAB_0148b264;
          if (unaff_w21 < *(uint *)(lVar5 + 0x18)) {
            lVar5 = *(long *)(lVar5 + unaff_x24 * 8 + 0x20);
            if (lVar5 == 0) goto LAB_0148b264;
            if (unaff_w19 < *(uint *)(lVar5 + 0x18)) {
              lVar6 = *(long *)(unaff_x20 + 0x180);
              if (lVar6 == 0) goto LAB_0148b264;
              if (unaff_w19 < *(uint *)(lVar6 + 0x18)) {
                lVar6 = *(long *)(lVar6 + lVar10 * 8 + 0x20);
                if (lVar6 == 0) goto LAB_0148b264;
                if (3 < *(uint *)(lVar6 + 0x18)) {
                  lVar6 = *(long *)(lVar6 + 0x38);
                  if (lVar6 == 0) goto LAB_0148b264;
                  if ((uint)bVar1 < *(uint *)(lVar6 + 0x18)) {
                    lVar7 = *(long *)(unaff_x20 + 0x138);
                    if (lVar7 == 0) goto LAB_0148b264;
                    if (unaff_w21 < *(uint *)(lVar7 + 0x18)) {
                      lVar8 = *(long *)(lVar7 + unaff_x24 * 8 + 0x20);
                      if (lVar8 == 0) goto LAB_0148b264;
                      if (unaff_w19 < *(uint *)(lVar8 + 0x18)) {
                        lVar9 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x28);
                        if (lVar9 == 0) goto LAB_0148b264;
                        if ((uint)bVar1 < *(uint *)(lVar9 + 0x18)) {
                          lVar7 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x30);
                          if (lVar7 == 0) goto LAB_0148b264;
                          fVar12 = *(float *)(lVar5 + lVar10 * 4 + 0x20);
                          fVar12 = (fVar12 + fVar12) *
                                   (float)(*(int *)(lVar6 + (ulong)bVar1 * 4 + 0x20) +
                                          *(int *)(lVar9 + (ulong)bVar1 * 4 + 0x20) *
                                          *(int *)(lVar8 + lVar10 * 4 + 0x20));
                          uVar11 = 0x80000000;
                          if (fVar12 != INFINITY) {
                            uVar11 = (int)fVar12;
                          }
                          if (uVar11 < *(uint *)(lVar7 + 0x18)) {
LAB_0148b238:
                            return fVar13 * unaff_s8 *
                                   *(float *)(lVar7 + (long)(int)uVar11 * 4 + 0x20);
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
LAB_0148b268:
                    /* WARNING: Subroutine does not return */
    FUN_00da5194();
  }
LAB_0148b264:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


