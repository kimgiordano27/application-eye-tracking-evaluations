/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$ToArray
ENTRY_POINT: 03b61b04
PROGRAM: hellodot-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_8;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03b61c48) */

void Unity_Collections_NativeArray<OVRPlugin_Vector4f>__ToArray(long param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  long in_x9;
  int *piVar3;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  int unaff_w24;
  long lVar4;
  uint uVar5;
  
code_r0x03b61b04:
  puVar1 = (undefined8 *)(param_1 + in_x9 * 0x10 + 0x138);
  do {
    (*(code *)*puVar1)(&stack0x00000160);
    memcpy(&stack0x000002c0,&stack0x00000160,0x160);
    lVar4 = *(long *)(unaff_x21 + 0x10);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    uVar5 = *(uint *)(unaff_x21 + 0x18);
    if (uVar5 == *(uint *)(lVar4 + 0x18)) {
      FUN_03b5fee4();
      lVar4 = *(long *)(unaff_x21 + 0x10);
      uVar5 = *(uint *)(unaff_x21 + 0x18);
    }
    *(uint *)(unaff_x21 + 0x18) = uVar5 + 1;
    memcpy(&stack0x00000160,&stack0x000002c0,0x160);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    memcpy(&stack0x00000000,&stack0x00000160,0x160);
    if (*(uint *)(lVar4 + 0x18) <= uVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c84();
    }
    memcpy((void *)(lVar4 + (long)(int)uVar5 * (long)unaff_w24 + 0x20),&stack0x00000000,0x160);
    lVar4 = *unaff_x19;
    uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar2 != 0) {
      piVar3 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar3 + -2) == *unaff_x23) {
          puVar1 = (undefined8 *)(lVar4 + (long)*piVar3 * 0x10 + 0x138);
          goto LAB_03b61a94;
        }
        uVar2 = uVar2 - 1;
        piVar3 = piVar3 + 4;
      } while (uVar2 != 0);
    }
    puVar1 = (undefined8 *)FUN_02ce0a7c();
LAB_03b61a94:
    uVar2 = (*(code *)*puVar1)();
    if ((uVar2 & 1) == 0) {
      if (unaff_x19 == (long *)0x0) {
        return;
      }
      lVar4 = *unaff_x19;
      uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar2 == 0) goto LAB_03b61bec;
      piVar3 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      break;
    }
    lVar4 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x140);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02ce0978(lVar4);
    }
    param_1 = *unaff_x19;
    uVar2 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (uVar2 != 0) {
      piVar3 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar3 + -2) == lVar4) {
          in_x9 = (long)*piVar3;
          goto code_r0x03b61b04;
        }
        uVar2 = uVar2 - 1;
        piVar3 = piVar3 + 4;
      } while (uVar2 != 0);
    }
    puVar1 = (undefined8 *)FUN_02ce0a7c();
  } while( true );
  while( true ) {
    uVar2 = uVar2 - 1;
    piVar3 = piVar3 + 4;
    if (uVar2 == 0) break;
    if (*(long *)(piVar3 + -2) == *unaff_x22) {
      puVar1 = (undefined8 *)(lVar4 + (long)*piVar3 * 0x10 + 0x138);
      goto LAB_03b61c08;
    }
  }
LAB_03b61bec:
  puVar1 = (undefined8 *)FUN_02ce0a7c();
LAB_03b61c08:
  (*(code *)*puVar1)();
  return;
}


