/*
FUNCTION_NAME: Meta.XR.Movement.NativeUtilityHelper.<>c__DisplayClass3_0$$.ctor
ENTRY_POINT: 06daae98
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_7;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_Movement_NativeUtilityHelper_<>c__DisplayClass3_0___ctor
               (ulong param_1,float param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int iVar6;
  ulong in_x9;
  uint uVar7;
  long lVar8;
  float *pfVar9;
  float *in_x10;
  long lVar10;
  uint uVar11;
  long unaff_x19;
  int unaff_w20;
  long unaff_x21;
  long unaff_x22;
  ulong unaff_x23;
  int unaff_w26;
  long unaff_x27;
  long unaff_x28;
  
  while (param_3 != 0) {
    if (*(uint *)(param_3 + 0x18) <= in_x9) {
LAB_06daaf24:
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb38();
    }
    lVar3 = in_x9 * 4;
    in_x9 = in_x9 + 1;
    unaff_x28 = unaff_x28 + unaff_x27;
    *in_x10 = param_2 + *(float *)(param_3 + lVar3 + 0x20);
    if (in_x9 == 6) {
      FUN_0712485c(param_3,6);
      FUN_071245a8();
      unaff_w20 = unaff_w20 + 1;
      uVar2 = (int)unaff_x23 + 0x12;
      unaff_x23 = (ulong)uVar2;
      unaff_w26 = unaff_w26 + 0x12;
      if (unaff_w20 == 0x20) {
        return;
      }
      lVar8 = *(long *)(unaff_x22 + 0x30);
      uVar7 = *(uint *)(unaff_x21 + 0x18);
      lVar4 = 0;
      iVar6 = 0;
      unaff_x28 = unaff_x23 << 0x20;
      lVar3 = lVar8 + 0x20;
      do {
        lVar10 = 0;
        uVar11 = iVar6 + uVar2;
        do {
          if (uVar7 <= uVar11) goto LAB_06daaf24;
          if (lVar8 == 0) goto LAB_06daaf28;
          if ((ulong)*(uint *)(lVar8 + 0x18) <= (ulong)(lVar4 + lVar10)) goto LAB_06daaf24;
          lVar1 = (long)(int)uVar11;
          uVar11 = uVar11 + 3;
          *(undefined4 *)(lVar3 + lVar10 * 4) = *(undefined4 *)(unaff_x21 + lVar1 * 4 + 0x20);
          lVar10 = lVar10 + 1;
        } while (lVar10 != 6);
        iVar6 = iVar6 + 1;
        lVar4 = lVar4 + 6;
        lVar3 = lVar3 + 0x18;
      } while (iVar6 != 3);
      FUN_071245a8();
      FUN_06dab818();
      FUN_0712485c(*(undefined8 *)(unaff_x22 + 0x38),0);
      FUN_06dab818();
      uVar2 = *(uint *)(unaff_x21 + 0x18);
      uVar5 = 0;
      do {
        uVar7 = unaff_w26 + (int)uVar5;
        if (uVar2 <= uVar7) goto LAB_06daaf24;
        pfVar9 = (float *)(unaff_x21 + (long)(int)uVar7 * 4 + 0x20);
        lVar3 = *(long *)(unaff_x22 + 0x38);
        if (lVar3 == 0) goto LAB_06daaf28;
        if (*(uint *)(lVar3 + 0x18) <= uVar5) goto LAB_06daaf24;
        lVar4 = uVar5 * 4;
        uVar5 = uVar5 + 1;
        *pfVar9 = *pfVar9 + *(float *)(lVar3 + lVar4 + 0x20);
      } while (uVar5 != 6);
      FUN_0712485c(lVar3,6);
      FUN_06dab818();
      if (unaff_x19 == 0) break;
      param_1 = (ulong)*(uint *)(unaff_x19 + 0x18);
      in_x9 = 0;
    }
    if (param_1 <= unaff_x23 + in_x9) goto LAB_06daaf24;
    in_x10 = (float *)(unaff_x19 + (unaff_x28 >> 0x1e) + 0x20);
    param_2 = *in_x10;
    param_3 = *(long *)(unaff_x22 + 0x38);
  }
LAB_06daaf28:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


