/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Button$$Init
ENTRY_POINT: 0728f3ac
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_8;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Button__Init(long param_1)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  int in_w9;
  int in_w10;
  uint in_w11;
  uint in_w12;
  int iVar6;
  long in_x13;
  long lVar7;
  long lVar8;
  long lVar9;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  
  do {
    if (in_w12 != 0) {
      lVar7 = *(long *)(param_1 + 0x20);
      lVar8 = *unaff_x21;
      iVar6 = 0;
      lVar9 = lVar7;
      do {
        if (((lVar8 == 0) || (lVar9 == 0)) || (lVar4 = *(long *)(lVar9 + 0x40), lVar4 == 0))
        goto LAB_0728f474;
        uVar3 = in_w10 + iVar6;
        if (*(uint *)(lVar8 + 0x18) <= uVar3) goto LAB_0728f484;
        uVar5 = *(undefined8 *)(lVar4 + 0x28);
        lVar8 = lVar8 + (long)(int)uVar3 * 0x10;
        *(undefined4 *)(lVar8 + 0x28) = *(undefined4 *)(lVar4 + 0x30);
        *(undefined8 *)(lVar8 + 0x20) = uVar5;
        lVar8 = *unaff_x21;
        if ((lVar8 == 0) || (plVar1 = (long *)(lVar9 + 0x40), *plVar1 == 0)) goto LAB_0728f474;
        if (*(uint *)(lVar8 + 0x18) <= uVar3) goto LAB_0728f484;
        lVar9 = *(long *)(lVar9 + 0x38);
        iVar6 = iVar6 + 1;
        *(undefined4 *)(lVar8 + (long)(int)uVar3 * 0x10 + 0x2c) = *(undefined4 *)(*plVar1 + 0x44);
      } while (lVar9 != lVar7);
      lVar8 = *unaff_x20;
      if (lVar8 == 0) {
LAB_0728f474:
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      uVar3 = *(uint *)(lVar8 + 0x18);
      if (uVar3 <= in_w11) {
LAB_0728f484:
                    /* WARNING: Subroutine does not return */
        FUN_04077838();
      }
      uVar2 = in_w11 + 1;
      *(int *)(lVar8 + (long)(int)in_w11 * 4 + 0x20) = in_w9;
      if (uVar3 <= uVar2) goto LAB_0728f484;
      in_x13 = *(long *)(unaff_x19 + 0x18);
      in_w10 = in_w10 + iVar6;
      in_w11 = in_w11 + 2;
      in_w9 = in_w9 + iVar6;
      *(int *)(lVar8 + (long)(int)uVar2 * 4 + 0x20) = iVar6;
    }
    if (in_x13 == 0) goto LAB_0728f474;
    param_1 = *(long *)(param_1 + 0x18);
    if (param_1 == *(long *)(in_x13 + 0x18)) {
      return;
    }
    if (param_1 == 0) goto LAB_0728f474;
    in_w12 = (uint)*(byte *)(param_1 + 0x35);
  } while( true );
}


