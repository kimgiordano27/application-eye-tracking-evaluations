/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Button$$OnHoverChanged
ENTRY_POINT: 0728f578
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;ui_or_gameplay_sink_hits_8;functionality_eye_api_context_without_clear_sink_hits_1
*/


float Meta_XR_ImmersiveDebugger_UserInterface_Generic_Button__OnHoverChanged
                (long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong in_x9;
  ulong uVar6;
  int *piVar7;
  int *in_x10;
  long *unaff_x19;
  int unaff_w20;
  long *unaff_x23;
  long *unaff_x24;
  float unaff_s8;
  
code_r0x0728f578:
  in_x9 = in_x9 - 1;
  in_x10 = in_x10 + 4;
  if (in_x9 != 0) goto LAB_0728f56c;
LAB_0728f584:
  puVar2 = (undefined8 *)FUN_040b1e00();
  do {
    uVar3 = (*(code *)*puVar2)();
    lVar5 = *unaff_x19;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x23) {
          puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto Meta_XR_ImmersiveDebugger_UserInterface_Generic_ButtonWithIcon__OnHoverChanged;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_040b1e00();
Meta_XR_ImmersiveDebugger_UserInterface_Generic_ButtonWithIcon__OnHoverChanged:
    (*(code *)*puVar2)();
    lVar5 = *unaff_x19;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x24) {
          puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_0728f65c;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_040b1e00();
LAB_0728f65c:
    unaff_w20 = unaff_w20 + 1;
    uVar4 = (*(code *)*puVar2)();
    unaff_s8 = (unaff_s8 + (float)uVar3 * (float)((ulong)uVar4 >> 0x20)) -
               (float)((ulong)uVar3 >> 0x20) * (float)uVar4;
    lVar5 = *unaff_x19;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x23) {
          puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_0728f540;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_040b1e00();
LAB_0728f540:
    iVar1 = (*(code *)*puVar2)();
    if (iVar1 <= unaff_w20) {
      return unaff_s8 * 0.5;
    }
    param_1 = *unaff_x19;
    param_3 = *unaff_x24;
    in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (in_x9 == 0) goto LAB_0728f584;
    in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
LAB_0728f56c:
    if (*(long *)(in_x10 + -2) != param_3) goto code_r0x0728f578;
    puVar2 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
  } while( true );
}


