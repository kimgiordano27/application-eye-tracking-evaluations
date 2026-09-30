/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsReflectedConverter$$TryDeserialize
ENTRY_POINT: 03e91e58
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_13;ui_or_gameplay_sink_hits_8;telemetry_or_network_hits_4
*/


float Unity_VisualScripting_FullSerializer_fsReflectedConverter__TryDeserialize(void)

{
  ulong uVar1;
  int in_w8;
  long *unaff_x21;
  int unaff_w22;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  float fStack000000000000004c;
  
  if (in_w8 == 0) {
    thunk_FUN_01ee6d7c();
  }
  fVar2 = (float)UnityEngine_UIElements_VisualElementFocusRing__SortAndFlattenScopeLists();
  fVar3 = (float)UnityEngine_UIElements_VisualElementFocusRing__SortAndFlattenScopeLists();
  fVar2 = unaff_s8 * fVar3 + unaff_s13 + unaff_s8 * fVar2;
  if (unaff_s14 <= fVar2) {
    unaff_s14 = fVar2;
  }
  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar1 = FUN_0404e8a4();
  if ((uVar1 & 1) != 0) {
    if (*(int *)(*unaff_x21 + 0xe0) == 0) {
                    /* try { // try from 03e91f64 to 03f9210b has its CatchHandler @ 03e91f64
                       catch() { ... } // from try @ 03e91f64 with catch @ 03e91f64
                       catch() { ... } // from try @ 03e92708 with catch @ 03e91f64
                       catch() { ... } // from try @ 03e927cc with catch @ 03e91f64
                       catch() { ... } // from try @ 03e92908 with catch @ 03e91f64
                       catch() { ... } // from try @ 03e92938 with catch @ 03e91f64 */
      thunk_FUN_01ee6d7c();
    }
    uVar1 = FUN_022ee1a4();
    if ((uVar1 & 1) != 0) {
      if (*(int *)(*unaff_x21 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar1 = FUN_0404e8a4();
      fVar2 = 0.0;
      if ((uVar1 & 1) != 0) {
        if (*(int *)(*unaff_x21 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        fVar2 = (float)UnityEngine_UIElements_VisualElementFocusRing__SortAndFlattenScopeLists();
      }
      fStack000000000000004c = unaff_s9;
      if (*(int *)(*unaff_x21 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      fVar3 = (float)UnityEngine_UIElements_VisualElementFocusRing__SortAndFlattenScopeLists();
      fVar4 = (float)UnityEngine_UIElements_VisualElementFocusRing__SortAndFlattenScopeLists();
      fVar5 = (float)UnityEngine_UIElements_VisualElementFocusRing__SortAndFlattenScopeLists();
      fVar6 = (float)UnityEngine_UIElements_VisualElementFocusRing__SortAndFlattenScopeLists();
      fVar5 = unaff_s13 + fVar2 * fVar5 + fVar2 * fVar6;
      fVar6 = fVar5 - fVar2 * fVar3;
      fVar7 = fVar5 - fVar2 * fVar4;
      fVar3 = fVar2 * fVar3 + fVar5;
      fVar5 = fVar2 * fVar4 + fVar5;
      if (unaff_s12 <= fVar6) {
        unaff_s12 = fVar6;
      }
      if (unaff_s11 <= fVar7) {
        unaff_s11 = fVar7;
      }
      if (unaff_s10 <= fVar3) {
        unaff_s10 = fVar3;
      }
      unaff_s9 = fStack000000000000004c;
      if (fStack000000000000004c <= fVar5) {
        unaff_s9 = fVar5;
      }
    }
  }
  if (unaff_s12 <= unaff_s14) {
    unaff_s12 = unaff_s14;
  }
  if (unaff_s11 <= unaff_s14) {
    unaff_s11 = unaff_s14;
  }
  if (unaff_s10 <= unaff_s14) {
    unaff_s10 = unaff_s14;
  }
  if (unaff_s9 <= unaff_s14) {
    unaff_s9 = unaff_s14;
  }
  fVar2 = (float)unaff_w22;
  fVar5 = (float)NEON_fminnm(unaff_s12 + fVar2,0x3f800000);
  fVar4 = (float)NEON_fminnm(unaff_s11 + fVar2,0x3f800000);
  fVar3 = (float)NEON_fminnm(unaff_s10 + fVar2,0x3f800000);
  fVar2 = (float)NEON_fminnm(unaff_s9 + fVar2,0x3f800000);
  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  fVar7 = (float)UnityEngine_UIElements_VisualElementFocusRing__SortAndFlattenScopeLists();
  fVar6 = fVar5 * fVar7;
  if (fVar5 * fVar7 <= fVar4 * fVar7) {
    fVar6 = fVar4 * fVar7;
  }
  fVar4 = fVar3 * fVar7;
  if (fVar3 * fVar7 <= fVar6) {
    fVar4 = fVar6;
  }
  fVar3 = fVar2 * fVar7;
  if (fVar2 * fVar7 <= fVar4) {
    fVar3 = fVar4;
  }
  return fVar3 + 1.25;
}


