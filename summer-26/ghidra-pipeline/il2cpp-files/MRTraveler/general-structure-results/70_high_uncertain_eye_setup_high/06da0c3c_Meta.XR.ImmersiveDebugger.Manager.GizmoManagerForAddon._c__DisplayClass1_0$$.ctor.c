/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.GizmoManagerForAddon.<>c__DisplayClass1_0$$.ctor
ENTRY_POINT: 06da0c3c
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_8;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_GizmoManagerForAddon_<>c__DisplayClass1_0___ctor
               (undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  uint uVar2;
  uint in_w8;
  long in_x9;
  long in_x10;
  undefined4 in_w11;
  ulong in_x12;
  long lVar3;
  ulong in_x14;
  long lVar4;
  long *unaff_x21;
  
  do {
    if ((long)(int)in_x14 <= (long)in_x12) {
      (**(code **)(*unaff_x21 + 0x1a8))();
      FUN_06da1194();
      FUN_06da1860();
      FUN_06da1c2c();
      return;
    }
    lVar3 = unaff_x21[0x1b];
    if (lVar3 == 0) {
LAB_06da0d20:
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    uVar2 = *(uint *)(lVar3 + 0x18);
    if (uVar2 == 0) goto LAB_06da0cd0;
    lVar4 = *(long *)(lVar3 + 0x20);
    if (lVar4 == 0) goto LAB_06da0d20;
    if ((*(uint *)(lVar4 + 0x18) <= in_x12) || (in_x14 <= in_x12)) {
LAB_06da0cd0:
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb38();
    }
    uVar1 = in_w11;
    if (*(int *)(lVar4 + in_x10 * 4) == 0) {
      uVar1 = 0xffffffff;
    }
    *(undefined4 *)(in_x9 + in_x10 * 4) = uVar1;
    if ((in_w8 < 2) || (uVar2 < 2)) goto LAB_06da0cd0;
    lVar3 = *(long *)(lVar3 + 0x28);
    if (lVar3 == 0) goto LAB_06da0d20;
    if (*(uint *)(lVar3 + 0x18) <= in_x12) goto LAB_06da0cd0;
    lVar4 = *(long *)(param_3 + 0x28);
    uVar1 = in_w11;
    if (*(int *)(lVar3 + in_x10 * 4) == 0) {
      uVar1 = 0xffffffff;
    }
    if (lVar4 == 0) goto LAB_06da0d20;
    if (*(uint *)(lVar4 + 0x18) <= in_x12) goto LAB_06da0cd0;
    *(undefined4 *)(lVar4 + in_x10 * 4) = uVar1;
    if (in_w8 == 0) goto LAB_06da0cd0;
    if (in_x9 == 0) goto LAB_06da0d20;
    in_x14 = (ulong)*(uint *)(in_x9 + 0x18);
    in_x12 = in_x10 - 7;
    in_x10 = in_x10 + 1;
  } while( true );
}


