/*
FUNCTION_NAME: Oculus.Platform.CAPI$$ovr_NetSync_GetPcmBufferMaxSamples
ENTRY_POINT: 035e2a04
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 111
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_6;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x035e2c60) */
/* WARNING: Removing unreachable block (ram,0x035e2bfc) */
/* WARNING: Removing unreachable block (ram,0x035e2c6c) */
/* WARNING: Removing unreachable block (ram,0x035e2c24) */

void Oculus_Platform_CAPI__ovr_NetSync_GetPcmBufferMaxSamples(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  long in_x9;
  ulong uVar7;
  long *in_x10;
  int *piVar8;
  undefined8 *unaff_x19;
  undefined8 in_stack_00000008;
  
  if (in_x9 != 0) {
    piVar8 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *in_x10) {
        puVar4 = (undefined8 *)(param_1 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_035e2a48;
      }
      in_x9 = in_x9 + -1;
      piVar8 = piVar8 + 4;
    } while (in_x9 != 0);
  }
  puVar4 = (undefined8 *)FUN_01ecb238();
LAB_035e2a48:
  plVar5 = (long *)(*(code *)*puVar4)();
  puVar3 = 
  Method_UnityEngine_Rendering_Universal_Internal_DrawObjectsPass_<>c_<ExecutePass>b__15_0__;
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar6 = *plVar5;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_035e2ab8;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar2,0);
LAB_035e2ab8:
    uVar7 = (*(code *)*puVar4)(plVar5,puVar4[1]);
    if ((uVar7 & 1) == 0) {
      if (plVar5 == (long *)0x0) goto LAB_035e2bec;
      lVar6 = *plVar5;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 == 0) goto LAB_035e2bc4;
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      break;
    }
    lVar6 = *plVar5;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar3) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_035e2b14;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar3,0);
LAB_035e2b14:
    lVar6 = (*(code *)*puVar4)(plVar5,puVar4[1]);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar1 = *(uint *)(lVar6 + 0x38);
    thunk_FUN_01f3e6f0();
    if (((uVar1 >> 0x15 & 1) != 0) &&
       (uVar1 = *(uint *)(lVar6 + 0x38), thunk_FUN_01f3e6f0(), (uVar1 >> 0x13 & 1) == 0)) {
      lVar6 = *(long *)(lVar6 + 0x48);
      thunk_FUN_01f3e6f0();
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar6 = *(long *)(lVar6 + 0x20);
      thunk_FUN_01f3e6f0();
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      FUN_035e21f8(lVar6,0,0);
      FUN_035e201c();
    }
  } while( true );
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
    if (*(long *)(piVar8 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_035e2be0;
    }
  }
LAB_035e2bc4:
  puVar4 = (undefined8 *)
           FUN_01ecb238(plVar5,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_035e2be0:
  (*(code *)*puVar4)(plVar5,puVar4[1]);
LAB_035e2bec:
  if (in_stack_00000008._4_1_ != '\0') {
    Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_HingeJoint_op_Implicit();
  }
  thunk_FUN_01f3e6f0();
  *unaff_x19 = 0;
  thunk_FUN_01f51358();
  return;
}


