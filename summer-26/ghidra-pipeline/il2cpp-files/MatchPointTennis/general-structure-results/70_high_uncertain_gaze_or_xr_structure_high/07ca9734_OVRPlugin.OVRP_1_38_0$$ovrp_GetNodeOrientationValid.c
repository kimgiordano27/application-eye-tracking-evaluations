/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_GetNodeOrientationValid
ENTRY_POINT: 07ca9734
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 75
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_gaze_retrieval_or_extraction
*/


undefined8
OVRPlugin_OVRP_1_38_0__ovrp_GetNodeOrientationValid(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  ulong in_x9;
  int *in_x10;
  long in_x11;
  long unaff_x19;
  long *unaff_x20;
  uint unaff_w21;
  long *unaff_x22;
  long unaff_x23;
  
  do {
    if (in_x11 == param_3) {
      puVar1 = (undefined8 *)(param_1 + (long)(*in_x10 + 1) * 0x10 + 0x138);
      goto LAB_07ca9768;
    }
    in_x9 = in_x9 - 1;
    in_x10 = in_x10 + 4;
    if (in_x9 == 0) {
      do {
        puVar1 = (undefined8 *)FUN_044822ac(unaff_x20,param_3,1);
LAB_07ca9768:
        (*(code *)*puVar1)(unaff_x20,unaff_x23 + 0x30,puVar1[1]);
        unaff_w21 = unaff_w21 + 1;
        if (unaff_w21 == 0x1a) {
          return 1;
        }
        lVar2 = *(long *)(unaff_x19 + 0xa0);
        if (lVar2 == 0) {
LAB_07ca9798:
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        if (*(uint *)(lVar2 + 0x18) <= unaff_w21) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e4c();
        }
        unaff_x23 = *(long *)(unaff_x19 + 0x80);
        if (unaff_x23 == 0) goto LAB_07ca9798;
        unaff_x20 = *(long **)(lVar2 + (long)(int)unaff_w21 * 8 + 0x20);
        if (unaff_x20 == (long *)0x0) goto LAB_07ca9798;
        param_1 = *unaff_x20;
        param_3 = *unaff_x22;
        in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
      } while (in_x9 == 0);
      in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    }
    in_x11 = *(long *)(in_x10 + -2);
  } while( true );
}


