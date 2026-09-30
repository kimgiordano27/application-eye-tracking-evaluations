/*
FUNCTION_NAME: OVR.OpenVR.IVRCompositor._PostPresentHandoff$$BeginInvoke
ENTRY_POINT: 02004108
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_2;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x020041b0) */

void OVR_OpenVR_IVRCompositor__PostPresentHandoff__BeginInvoke
               (long param_1,undefined8 param_2,long param_3)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  long *plVar2;
  long in_x9;
  int *in_x10;
  long lVar3;
  int unaff_w22;
  long in_stack_00000000;
  undefined8 in_stack_00000008;
  
  do {
    if ((bool)in_ZR) {
      puVar1 = (undefined8 *)FUN_0122ea3c();
OVR_OpenVR_IVRCompositor__PostPresentHandoff__EndInvoke:
      (*(code *)*puVar1)();
      if (in_stack_00000000 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_011e1944(in_stack_00000000);
      }
      if (unaff_w22 != 1) {
        if (in_stack_00000008._4_1_ != '\0') {
          thunk_FUN_0125a7c4();
        }
                    /* WARNING: Subroutine does not return */
        FUN_012f5474();
      }
      plVar2 = (long *)__cxa_begin_catch();
      lVar3 = *plVar2;
      __cxa_end_catch();
      if (in_stack_00000008._4_1_ != '\0') {
        thunk_FUN_0125a7c4();
      }
      if (lVar3 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_011e1944(lVar3);
      }
      return;
    }
    if (*(long *)(in_x10 + -2) == param_3) {
      puVar1 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
      goto OVR_OpenVR_IVRCompositor__PostPresentHandoff__EndInvoke;
    }
    in_x9 = in_x9 + -1;
    in_ZR = in_x9 == 0;
    in_x10 = in_x10 + 4;
  } while( true );
}


