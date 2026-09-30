/*
FUNCTION_NAME: Meta.XR.Movement.NativeUtilityHelper$$FillJointMapping
ENTRY_POINT: 06daad20
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


void Meta_XR_Movement_NativeUtilityHelper__FillJointMapping(void)

{
  long lVar1;
  uint uVar2;
  char in_NG;
  bool in_ZR;
  char in_OV;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  float *pfVar9;
  uint uVar10;
  long lVar11;
  long unaff_x19;
  int unaff_w20;
  long unaff_x21;
  long unaff_x22;
  int iVar12;
  long lVar13;
  
  if (in_ZR || in_NG != in_OV) {
    if (unaff_x21 == 0) {
LAB_06daaf28:
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    uVar10 = unaff_w20 * 0x12;
    iVar12 = uVar10 + 0xc;
    do {
      lVar8 = *(long *)(unaff_x22 + 0x30);
      uVar2 = *(uint *)(unaff_x21 + 0x18);
      lVar4 = 0;
      iVar6 = 0;
      lVar13 = (ulong)uVar10 << 0x20;
      lVar3 = lVar8 + 0x20;
      do {
        lVar11 = 0;
        uVar7 = iVar6 + uVar10;
        do {
          if (uVar2 <= uVar7) goto LAB_06daaf24;
          if (lVar8 == 0) goto LAB_06daaf28;
          if ((ulong)*(uint *)(lVar8 + 0x18) <= (ulong)(lVar4 + lVar11)) goto LAB_06daaf24;
          lVar1 = (long)(int)uVar7;
          uVar7 = uVar7 + 3;
          *(undefined4 *)(lVar3 + lVar11 * 4) = *(undefined4 *)(unaff_x21 + lVar1 * 4 + 0x20);
          lVar11 = lVar11 + 1;
        } while (lVar11 != 6);
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
        uVar7 = iVar12 + (int)uVar5;
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
      if (unaff_x19 == 0) goto LAB_06daaf28;
      uVar2 = *(uint *)(unaff_x19 + 0x18);
      uVar5 = 0;
      do {
        if ((ulong)uVar2 <= uVar10 + uVar5) {
LAB_06daaf24:
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb38();
        }
        pfVar9 = (float *)(unaff_x19 + (lVar13 >> 0x1e) + 0x20);
        lVar3 = *(long *)(unaff_x22 + 0x38);
        if (lVar3 == 0) goto LAB_06daaf28;
        if (*(uint *)(lVar3 + 0x18) <= uVar5) goto LAB_06daaf24;
        lVar4 = uVar5 * 4;
        uVar5 = uVar5 + 1;
        lVar13 = lVar13 + 0x100000000;
        *pfVar9 = *pfVar9 + *(float *)(lVar3 + lVar4 + 0x20);
      } while (uVar5 != 6);
      FUN_0712485c(lVar3,6);
      FUN_071245a8();
      unaff_w20 = unaff_w20 + 1;
      uVar10 = uVar10 + 0x12;
      iVar12 = iVar12 + 0x12;
    } while (unaff_w20 != 0x20);
  }
  return;
}


