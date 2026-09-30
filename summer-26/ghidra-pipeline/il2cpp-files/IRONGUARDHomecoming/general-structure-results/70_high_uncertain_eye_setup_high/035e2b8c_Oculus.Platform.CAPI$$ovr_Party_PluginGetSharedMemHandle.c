/*
FUNCTION_NAME: Oculus.Platform.CAPI$$ovr_Party_PluginGetSharedMemHandle
ENTRY_POINT: 035e2b8c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x035e2c60) */

void Oculus_Platform_CAPI__ovr_Party_PluginGetSharedMemHandle(void)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  undefined8 *unaff_x19;
  long *unaff_x21;
  long unaff_x23;
  int unaff_w24;
  ulong unaff_x25;
  undefined8 in_stack_00000008;
  
  lVar2 = *unaff_x21;
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) ==
          *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
                    /* try { // try from 035e2bd8 to 036e2c17 has its CatchHandler @ 035e2bd8
                       catch() { ... } // from try @ 035e2bd8 with catch @ 035e2bd8
                       catch() { ... } // from try @ 035e2c54 with catch @ 035e2bd8
                       catch() { ... } // from try @ 035e2c8c with catch @ 035e2bd8
                       catch() { ... } // from try @ 035e2cb0 with catch @ 035e2bd8
                       catch() { ... } // from try @ 035e2d00 with catch @ 035e2bd8 */
        puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
        goto LAB_035e2be0;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)FUN_01ecb238();
LAB_035e2be0:
  (*(code *)*puVar1)();
  if (unaff_x23 == 0) {
    if ((unaff_x25 & 1) != 0) {
      unaff_w24 = 0;
    }
    if (in_stack_00000008._4_1_ != '\0') {
      Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_HingeJoint_op_Implicit();
    }
    if ((unaff_w24 == 7) || (unaff_w24 == 0)) {
      thunk_FUN_01f3e6f0();
      *unaff_x19 = 0;
      thunk_FUN_01f51358();
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01eed990();
}


