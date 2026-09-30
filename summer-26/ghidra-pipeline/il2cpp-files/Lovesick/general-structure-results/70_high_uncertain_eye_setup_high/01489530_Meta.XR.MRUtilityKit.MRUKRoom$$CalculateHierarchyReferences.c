/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKRoom$$CalculateHierarchyReferences
ENTRY_POINT: 01489530
PROGRAM: Lovesick-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_13;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


int Meta_XR_MRUtilityKit_MRUKRoom__CalculateHierarchyReferences(void)

{
  uint uVar1;
  undefined1 in_ZR;
  long lVar2;
  uint in_w8;
  long *in_x9;
  long lVar3;
  long in_x10;
  int in_w11;
  ulong in_x12;
  undefined8 in_x13;
  uint in_w14;
  uint uVar4;
  int in_w15;
  long unaff_x19;
  uint unaff_w20;
  long unaff_x22;
  
  while (in_w11 = in_w11 + in_w15, !(bool)in_ZR) {
    uVar4 = 0;
    do {
      if (in_w14 <= unaff_w20) goto LAB_01489618;
      in_x10 = *in_x9;
      if (in_x10 == 0) goto LAB_0148961c;
      in_x13 = *(undefined8 *)(in_x10 + 0x18);
      if ((uint)in_x13 <= uVar4) goto LAB_01489618;
      lVar3 = *(long *)(unaff_x19 + 0xb0);
      if (lVar3 == 0) goto LAB_0148961c;
      uVar1 = in_w11 + uVar4;
      if (*(uint *)(lVar3 + 0x18) <= uVar1) goto LAB_01489618;
      lVar2 = *(long *)(in_x10 + (long)(int)uVar4 * 8 + 0x20);
      if (lVar2 == 0) goto LAB_0148961c;
      if (*(uint *)(lVar2 + 0x18) <= in_x12) goto LAB_01489618;
      uVar4 = uVar4 + 1;
      *(undefined4 *)(lVar2 + in_x12 * 4 + 0x20) =
           *(undefined4 *)(lVar3 + (long)(int)uVar1 * 4 + 0x20);
    } while (uVar4 != 3);
    in_x12 = in_x12 + 1;
    in_w15 = 3;
    in_ZR = in_x12 == 0xc;
  }
  lVar3 = *(long *)(in_x10 + 0x20);
  if (lVar3 == 0) goto LAB_0148961c;
  if (0xc < *(uint *)(lVar3 + 0x18)) {
    *(undefined4 *)(lVar3 + 0x50) = 0;
    if (1 < (uint)in_x13) {
      lVar3 = *(long *)(in_x10 + 0x28);
      if (lVar3 == 0) {
LAB_0148961c:
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      if ((0xc < *(uint *)(lVar3 + 0x18)) && (*(undefined4 *)(lVar3 + 0x50) = 0, 2 < (uint)in_x13))
      {
        lVar3 = *(long *)(in_x10 + 0x30);
        if (lVar3 == 0) goto LAB_0148961c;
        if (0xc < *(uint *)(lVar3 + 0x18)) {
          *(undefined4 *)(lVar3 + 0x50) = 0;
          lVar3 = *(long *)(unaff_x19 + 0xa8);
          if (lVar3 == 0) goto LAB_0148961c;
          uVar4 = *(uint *)(lVar3 + 0x18);
          if (((((uVar4 != 0) && (in_w8 != 0)) && (1 < uVar4)) && ((1 < in_w8 && (2 < uVar4)))) &&
             ((2 < in_w8 && ((3 < uVar4 && (3 < in_w8)))))) {
            return *(int *)(unaff_x22 + 0x20) * *(int *)(lVar3 + 0x20) +
                   *(int *)(unaff_x22 + 0x24) * *(int *)(lVar3 + 0x24) +
                   *(int *)(unaff_x22 + 0x28) * *(int *)(lVar3 + 0x28) +
                   *(int *)(unaff_x22 + 0x2c) * *(int *)(lVar3 + 0x2c);
          }
        }
      }
    }
  }
LAB_01489618:
                    /* WARNING: Subroutine does not return */
  FUN_00da5194();
}


