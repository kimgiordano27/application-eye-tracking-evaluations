/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.ButtonWithLabel$$get_Background
ENTRY_POINT: 0728f978
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_12;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_ButtonWithLabel__get_Background
               (long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined4 extraout_var;
  long lVar3;
  ulong uVar4;
  ulong in_x9;
  int *piVar5;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  int unaff_w24;
  int unaff_w25;
  long *unaff_x26;
  long *unaff_x27;
  long lVar6;
  long unaff_x28;
  undefined4 unaff_w29;
  undefined1 auVar7 [12];
  
  do {
    piVar5 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == param_3) {
        puVar2 = (undefined8 *)(param_1 + (long)*piVar5 * 0x10 + 0x138);
        goto LAB_0728f9b4;
      }
      in_x9 = in_x9 - 1;
      piVar5 = piVar5 + 4;
    } while (in_x9 != 0);
    do {
      puVar2 = (undefined8 *)FUN_040b1e00();
LAB_0728f9b4:
      (*(code *)*puVar2)();
      if (unaff_x28 == 0) {
LAB_0728fa08:
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      lVar3 = *(long *)(unaff_x22 + 0x28);
      *(undefined4 *)(unaff_x28 + 0x44) = extraout_var;
      *(undefined4 *)(unaff_x22 + 0x58) = 1;
      if (lVar3 == 0) goto LAB_0728fa08;
      unaff_w25 = unaff_w25 + 1;
      *(undefined4 *)(lVar3 + 0x58) = unaff_w29;
      lVar3 = *unaff_x19;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *unaff_x26) {
            puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_0728f82c;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined8 *)FUN_040b1e00();
LAB_0728f82c:
      iVar1 = (*(code *)*puVar2)();
      if (iVar1 <= unaff_w25) {
        return;
      }
      lVar3 = *unaff_x21;
      if (unaff_x22 == 0) {
        if (((lVar3 == 0) ||
            (unaff_x22 = FUN_07289ed8(lVar3,*(undefined8 *)(unaff_x20 + 0x10)), unaff_x22 == 0)) ||
           (*unaff_x21 == 0)) goto LAB_0728fa08;
        FUN_0728a2f0(unaff_x22,*(undefined8 *)(unaff_x20 + 0x10),unaff_x22,
                     *(undefined8 *)(unaff_x22 + 0x28));
      }
      else {
        if (lVar3 == 0) goto LAB_0728fa08;
        FUN_0728a960(lVar3,*(undefined8 *)(unaff_x20 + 0x10),unaff_x22);
        unaff_x22 = *(long *)(unaff_x22 + 0x38);
      }
      if (unaff_w24 != 0) {
        lVar3 = *unaff_x19;
        uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar4 != 0) {
          piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar5 + -2) == *unaff_x26) {
              puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
              goto LAB_0728f8e0;
            }
            uVar4 = uVar4 - 1;
            piVar5 = piVar5 + 4;
          } while (uVar4 != 0);
        }
        puVar2 = (undefined8 *)FUN_040b1e00();
LAB_0728f8e0:
        (*(code *)*puVar2)();
      }
      if (unaff_x22 == 0) goto LAB_0728fa08;
      lVar3 = *unaff_x19;
      lVar6 = *(long *)(unaff_x22 + 0x40);
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *unaff_x27) {
            puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_0728f948;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined8 *)FUN_040b1e00();
LAB_0728f948:
      auVar7 = (*(code *)*puVar2)();
      if (lVar6 == 0) goto LAB_0728fa08;
      *(undefined1 (*) [12])(lVar6 + 0x28) = auVar7;
      param_3 = *unaff_x27;
      param_1 = *unaff_x19;
      unaff_x28 = *(long *)(unaff_x22 + 0x40);
      in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
    } while (in_x9 == 0);
  } while( true );
}


