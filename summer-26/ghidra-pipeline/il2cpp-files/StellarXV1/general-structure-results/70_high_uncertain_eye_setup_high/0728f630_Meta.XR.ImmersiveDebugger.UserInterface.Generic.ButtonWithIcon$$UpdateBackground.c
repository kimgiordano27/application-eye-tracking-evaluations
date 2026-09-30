/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.ButtonWithIcon$$UpdateBackground
ENTRY_POINT: 0728f630
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;ui_or_gameplay_sink_hits_6;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


float Meta_XR_ImmersiveDebugger_UserInterface_Generic_ButtonWithIcon__UpdateBackground
                (long param_1,undefined8 param_2,long param_3)

{
  undefined1 in_ZR;
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  ulong in_x9;
  int *piVar6;
  int *in_x10;
  long *unaff_x19;
  int unaff_w20;
  undefined8 unaff_x21;
  long *unaff_x23;
  long *unaff_x24;
  float unaff_s8;
  
  do {
    if ((bool)in_ZR) {
      puVar2 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
      goto LAB_0728f65c;
    }
    in_x9 = in_x9 - 1;
    in_x10 = in_x10 + 4;
    if (in_x9 == 0) {
      do {
        puVar2 = (undefined8 *)FUN_040b1e00();
LAB_0728f65c:
        unaff_w20 = unaff_w20 + 1;
        uVar3 = (*(code *)*puVar2)();
        unaff_s8 = (unaff_s8 + (float)unaff_x21 * (float)((ulong)uVar3 >> 0x20)) -
                   (float)((ulong)unaff_x21 >> 0x20) * (float)uVar3;
        lVar4 = *unaff_x19;
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == *unaff_x23) {
              puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
              goto LAB_0728f540;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        puVar2 = (undefined8 *)FUN_040b1e00();
LAB_0728f540:
        iVar1 = (*(code *)*puVar2)();
        if (iVar1 <= unaff_w20) {
          return unaff_s8 * 0.5;
        }
        lVar4 = *unaff_x19;
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == *unaff_x24) {
              puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
              goto LAB_0728f5a0;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        puVar2 = (undefined8 *)FUN_040b1e00();
LAB_0728f5a0:
        unaff_x21 = (*(code *)*puVar2)();
        lVar4 = *unaff_x19;
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == *unaff_x23) {
              puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
              goto Meta_XR_ImmersiveDebugger_UserInterface_Generic_ButtonWithIcon__OnHoverChanged;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        puVar2 = (undefined8 *)FUN_040b1e00();
Meta_XR_ImmersiveDebugger_UserInterface_Generic_ButtonWithIcon__OnHoverChanged:
        (*(code *)*puVar2)();
        param_1 = *unaff_x19;
        param_3 = *unaff_x24;
        in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
      } while (in_x9 == 0);
      in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    }
    in_ZR = *(long *)(in_x10 + -2) == param_3;
  } while( true );
}


