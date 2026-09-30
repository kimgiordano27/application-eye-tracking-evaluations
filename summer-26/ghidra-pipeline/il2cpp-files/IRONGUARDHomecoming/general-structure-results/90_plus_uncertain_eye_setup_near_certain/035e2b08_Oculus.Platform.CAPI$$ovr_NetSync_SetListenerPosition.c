/*
FUNCTION_NAME: Oculus.Platform.CAPI$$ovr_NetSync_SetListenerPosition
ENTRY_POINT: 035e2b08
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x035e2c60) */
/* WARNING: Removing unreachable block (ram,0x035e2bfc) */
/* WARNING: Removing unreachable block (ram,0x035e2c6c) */
/* WARNING: Removing unreachable block (ram,0x035e2c24) */

void Oculus_Platform_CAPI__ovr_NetSync_SetListenerPosition(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *in_x10;
  int *piVar5;
  undefined8 *unaff_x19;
  long *unaff_x21;
  long *unaff_x24;
  long *unaff_x25;
  undefined8 in_stack_00000008;
  
code_r0x035e2b08:
  puVar2 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
  do {
    lVar3 = (*(code *)*puVar2)();
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 035e2c54 to 036e2c87 has its CatchHandler @ 035e2bd8 */
      FUN_01f08a3c();
    }
    uVar1 = *(uint *)(lVar3 + 0x38);
    thunk_FUN_01f3e6f0();
    if (((uVar1 >> 0x15 & 1) != 0) &&
       (uVar1 = *(uint *)(lVar3 + 0x38), thunk_FUN_01f3e6f0(), (uVar1 >> 0x13 & 1) == 0)) {
      lVar3 = *(long *)(lVar3 + 0x48);
      thunk_FUN_01f3e6f0();
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar3 = *(long *)(lVar3 + 0x20);
      thunk_FUN_01f3e6f0();
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      FUN_035e21f8(lVar3,0,0);
      FUN_035e201c();
    }
    lVar3 = *unaff_x21;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x24) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_035e2ab8;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238();
LAB_035e2ab8:
    uVar4 = (*(code *)*puVar2)();
    if ((uVar4 & 1) == 0) {
      if (unaff_x21 == (long *)0x0) goto LAB_035e2bec;
      lVar3 = *unaff_x21;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 == 0) goto LAB_035e2bc4;
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      break;
    }
    param_1 = *unaff_x21;
    uVar4 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (uVar4 != 0) {
      in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (*(long *)(in_x10 + -2) == *unaff_x25) goto code_r0x035e2b08;
        uVar4 = uVar4 - 1;
        in_x10 = in_x10 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238();
  } while( true );
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar5 = piVar5 + 4;
    if (uVar4 == 0) break;
    if (*(long *)(piVar5 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
      goto LAB_035e2be0;
    }
  }
LAB_035e2bc4:
  puVar2 = (undefined8 *)FUN_01ecb238();
LAB_035e2be0:
  (*(code *)*puVar2)();
LAB_035e2bec:
  if (in_stack_00000008._4_1_ != '\0') {
    Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_HingeJoint_op_Implicit();
  }
  thunk_FUN_01f3e6f0();
  *unaff_x19 = 0;
  thunk_FUN_01f51358();
  return;
}


