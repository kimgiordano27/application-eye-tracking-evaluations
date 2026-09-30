/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Flex$$get_SizeDeltaWithMargin
ENTRY_POINT: 0728f214
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_10;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Flex__get_SizeDeltaWithMargin
               (long param_1,long param_2)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  int unaff_w19;
  long unaff_x20;
  int unaff_w21;
  long *unaff_x22;
  long unaff_x23;
  long lVar7;
  int unaff_w25;
  int unaff_w26;
  uint unaff_w27;
  undefined4 unaff_w28;
  float fVar8;
  undefined8 in_stack_00000008;
  
  do {
    if (param_1 == 0) {
LAB_0728f254:
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    uVar3 = *(uint *)(param_1 + 0x18);
    iVar5 = 0;
    do {
      uVar2 = unaff_w27 + iVar5;
      if (uVar3 <= uVar2) {
LAB_0728f278:
                    /* WARNING: Subroutine does not return */
        FUN_04077838();
      }
      iVar5 = iVar5 + 1;
      *(undefined4 *)(param_1 + (long)(int)uVar2 * 4 + 0x20) = unaff_w28;
    } while (in_stack_00000008._4_4_ + unaff_w25 + iVar5 != 0);
    unaff_w27 = unaff_w27 + iVar5;
LAB_0728f24c:
    do {
      do {
        if (*(long *)(unaff_x20 + 0x18) == 0) goto LAB_0728f254;
        unaff_x23 = *(long *)(unaff_x23 + 0x18);
        if (unaff_x23 == *(long *)(*(long *)(unaff_x20 + 0x18) + 0x18)) {
          return;
        }
        if (unaff_x23 == 0) goto LAB_0728f254;
      } while (*(char *)(unaff_x23 + 0x35) == '\0');
      if (*(char *)(unaff_x20 + 0xa0) != '\0') {
        fVar8 = (float)FUN_0728b548(unaff_x23);
        param_2 = *(long *)PTR_DAT_09285ae0;
        if (*(int *)(param_2 + 0xe4) == 0) {
          param_2 = thunk_FUN_040d65a8();
        }
        if (ABS(fVar8) < 1.4013e-45) goto LAB_0728f24c;
      }
      lVar7 = *(long *)(unaff_x23 + 0x20);
      lVar6 = lVar7;
      unaff_w25 = 0;
      do {
        iVar5 = unaff_w25;
        if (((lVar6 == 0) || (plVar1 = (long *)(lVar6 + 0x40), *plVar1 == 0)) ||
           (lVar4 = *unaff_x22, lVar4 == 0)) goto LAB_0728f254;
        uVar3 = *(uint *)(lVar4 + 0x18);
        if (uVar3 <= unaff_w27 + iVar5) goto LAB_0728f278;
        lVar6 = *(long *)(lVar6 + 0x38);
        unaff_w25 = iVar5 + 1;
        *(undefined4 *)(lVar4 + (long)(int)(unaff_w27 + iVar5) * 4 + 0x20) =
             *(undefined4 *)(*plVar1 + 0x40);
      } while (lVar6 != lVar7);
      unaff_w27 = unaff_w27 + unaff_w25;
      if (unaff_w25 < unaff_w21) {
        iVar5 = unaff_w26 - iVar5;
        do {
          if (uVar3 <= unaff_w27) goto LAB_0728f278;
          lVar6 = (long)(int)unaff_w27;
          unaff_w27 = unaff_w27 + 1;
          iVar5 = iVar5 + -1;
          *(undefined4 *)(lVar4 + lVar6 * 4 + 0x20) = unaff_w28;
        } while (iVar5 != 0);
      }
      if (unaff_w19 != 1) goto LAB_0728f24c;
      do {
        lVar6 = *unaff_x22;
        param_2 = FUN_0728ee28(param_2,lVar7);
        if (lVar6 == 0) goto LAB_0728f254;
        if (*(uint *)(lVar6 + 0x18) <= unaff_w27) goto LAB_0728f278;
        *(int *)(lVar6 + (long)(int)unaff_w27 * 4 + 0x20) = (int)param_2;
        if (lVar7 == 0) goto LAB_0728f254;
        lVar7 = *(long *)(lVar7 + 0x38);
        unaff_w27 = unaff_w27 + 1;
      } while (lVar7 != *(long *)(unaff_x23 + 0x20));
    } while (unaff_w21 <= unaff_w25);
    param_1 = *unaff_x22;
  } while( true );
}


