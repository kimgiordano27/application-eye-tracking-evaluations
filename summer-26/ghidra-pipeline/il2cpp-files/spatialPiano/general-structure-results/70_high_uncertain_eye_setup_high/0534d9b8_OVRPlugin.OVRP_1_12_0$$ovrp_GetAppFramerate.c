/*
FUNCTION_NAME: OVRPlugin.OVRP_1_12_0$$ovrp_GetAppFramerate
ENTRY_POINT: 0534d9b8
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_8;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_5
*/


undefined8 OVRPlugin_OVRP_1_12_0__ovrp_GetAppFramerate(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  ulong in_x9;
  int *in_x10;
  long in_x11;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  ulong unaff_x22;
  long unaff_x23;
  
  do {
    if (in_x11 == param_3) {
      puVar1 = (undefined8 *)(param_1 + (long)(*in_x10 + 1) * 0x10 + 0x138);
      goto LAB_0534d9ec;
    }
    in_x9 = in_x9 - 1;
    in_x10 = in_x10 + 4;
    if (in_x9 == 0) {
      do {
        puVar1 = (undefined8 *)FUN_02f421d0(unaff_x20,param_3,1);
LAB_0534d9ec:
        (*(code *)*puVar1)(unaff_x20,unaff_x23 + 0x30,puVar1[1]);
        unaff_x22 = unaff_x22 + 1;
        if (unaff_x22 == 0x1a) {
          return 1;
        }
        lVar2 = *(long *)(unaff_x19 + 0xa0);
        if (lVar2 == 0) {
OVRPlugin_OVRP_1_12_0__ovrp_GetNodePoseState:
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        if (*(uint *)(lVar2 + 0x18) <= unaff_x22) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089d0();
        }
        unaff_x23 = *(long *)(unaff_x19 + 0x80);
        if (unaff_x23 == 0) goto OVRPlugin_OVRP_1_12_0__ovrp_GetNodePoseState;
        unaff_x20 = *(long **)(lVar2 + unaff_x22 * 8 + 0x20);
        if (unaff_x20 == (long *)0x0) goto OVRPlugin_OVRP_1_12_0__ovrp_GetNodePoseState;
        param_1 = *unaff_x20;
        param_3 = *unaff_x21;
        in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
      } while (in_x9 == 0);
      in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    }
    in_x11 = *(long *)(in_x10 + -2);
  } while( true );
}


