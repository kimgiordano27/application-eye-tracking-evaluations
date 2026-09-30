/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.GizmoManagerForAddon$$.ctor
ENTRY_POINT: 06da0c84
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


void Meta_XR_ImmersiveDebugger_Manager_GizmoManagerForAddon___ctor
               (undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  undefined1 in_ZR;
  undefined1 in_CY;
  int in_w8;
  long in_x9;
  long in_x10;
  undefined4 in_w11;
  ulong in_x12;
  long in_x13;
  long lVar2;
  long lVar3;
  uint in_w15;
  long *unaff_x21;
  
  while (((bool)in_CY && !(bool)in_ZR && (1 < in_w15))) {
    lVar2 = *(long *)(in_x13 + 0x28);
    if (lVar2 == 0) {
LAB_06da0d20:
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    if (*(uint *)(lVar2 + 0x18) <= in_x12) break;
    lVar3 = *(long *)(param_3 + 0x28);
    uVar1 = in_w11;
    if (*(int *)(lVar2 + in_x10 * 4) == 0) {
      uVar1 = 0xffffffff;
    }
    if (lVar3 == 0) goto LAB_06da0d20;
    if (*(uint *)(lVar3 + 0x18) <= in_x12) break;
    *(undefined4 *)(lVar3 + in_x10 * 4) = uVar1;
    lVar2 = in_x10 + 1;
    if (in_w8 == 0) break;
    if (in_x9 == 0) goto LAB_06da0d20;
    in_x12 = in_x10 - 7;
    if ((long)(int)*(uint *)(in_x9 + 0x18) <= (long)in_x12) {
      (**(code **)(*unaff_x21 + 0x1a8))();
      FUN_06da1194();
      FUN_06da1860();
      FUN_06da1c2c();
      return;
    }
    in_x13 = unaff_x21[0x1b];
    if (in_x13 == 0) goto LAB_06da0d20;
    in_w15 = *(uint *)(in_x13 + 0x18);
    if (in_w15 == 0) break;
    lVar3 = *(long *)(in_x13 + 0x20);
    if (lVar3 == 0) goto LAB_06da0d20;
    if ((*(uint *)(lVar3 + 0x18) <= in_x12) || (*(uint *)(in_x9 + 0x18) <= in_x12)) break;
    uVar1 = in_w11;
    if (*(int *)(lVar3 + lVar2 * 4) == 0) {
      uVar1 = 0xffffffff;
    }
    in_CY = in_w8 != 0;
    in_ZR = in_w8 == 1;
    *(undefined4 *)(in_x9 + lVar2 * 4) = uVar1;
    in_x10 = lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb38();
}


