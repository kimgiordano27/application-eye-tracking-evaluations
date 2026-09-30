/*
FUNCTION_NAME: OVRPlugin.OVRP_1_31_0$$.cctor
ENTRY_POINT: 07a68c68
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_31_0___cctor(void)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  long unaff_x19;
  undefined8 uVar8;
  long *unaff_x21;
  float fVar9;
  
  thunk_FUN_040d65a8();
  uVar2 = FUN_089ca704();
  if ((uVar2 & 1) != 0) {
    uVar8 = *(undefined8 *)(unaff_x19 + 0x20);
    if (*(int *)(*unaff_x21 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    uVar2 = FUN_089ca704(uVar8,0,0);
    if ((uVar2 & 1) != 0) {
      lVar5 = *(long *)(unaff_x19 + 0x38);
      if (lVar5 == 0) goto LAB_07a68da0;
      lVar3 = *(long *)(lVar5 + 0x30);
      if (lVar3 != 0) {
        if (*(int *)(lVar5 + 0x28) == 0) {
          lVar5 = *(long *)(lVar3 + 0x18);
          if (lVar5 == 0) goto LAB_07a68da0;
          uVar2 = *(ulong *)(lVar5 + 0x18);
          uVar6 = (uint)uVar2;
          if (0 < (int)uVar6) {
            lVar3 = *(long *)(unaff_x19 + 0x40);
            uVar4 = 0;
            fVar9 = (float)(*(int *)(unaff_x19 + 0x30) + -1) / 100.0;
            do {
              if ((lVar3 == 0) || (lVar7 = *(long *)(lVar3 + 0x18), lVar7 == 0)) goto LAB_07a68da0;
              if ((*(uint *)(lVar7 + 0x18) <= uVar4) || ((uVar2 & 0xffffffff) == uVar4)) {
                    /* WARNING: Subroutine does not return */
                FUN_04077838();
              }
              lVar7 = lVar7 + uVar4 * 4;
              lVar1 = uVar4 * 4;
              uVar4 = uVar4 + 1;
              *(float *)(lVar7 + 0x20) =
                   fVar9 * *(float *)(lVar7 + 0x20) +
                   (1.0 - fVar9) * *(float *)(lVar5 + 0x20 + lVar1);
            } while ((uVar6 & ((int)uVar6 >> 0x1f ^ 0xffffffffU)) != uVar4);
          }
        }
        else {
          if (*(long *)(unaff_x19 + 0x40) == 0) goto LAB_07a68da0;
          *(undefined8 *)(*(long *)(unaff_x19 + 0x40) + 0x18) = *(undefined8 *)(lVar3 + 0x18);
          thunk_FUN_040ec700();
        }
        FUN_07a68da8();
      }
    }
  }
  if (*(long *)(unaff_x19 + 0x38) != 0) {
    if (*(int *)(unaff_x19 + 0x30) == *(int *)(*(long *)(unaff_x19 + 0x38) + 0x3c)) {
      return;
    }
    FUN_07a67cac();
    return;
  }
LAB_07a68da0:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


