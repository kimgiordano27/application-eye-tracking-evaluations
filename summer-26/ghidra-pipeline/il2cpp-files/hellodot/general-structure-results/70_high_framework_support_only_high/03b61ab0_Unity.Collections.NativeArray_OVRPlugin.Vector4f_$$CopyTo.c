/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$CopyTo
ENTRY_POINT: 03b61ab0
PROGRAM: hellodot-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03b61c48) */

void Unity_Collections_NativeArray<OVRPlugin_Vector4f>__CopyTo(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  int unaff_w24;
  uint uVar5;
  
  do {
    if ((*(byte *)(param_2 + 0x135) & 1) == 0) {
      param_2 = FUN_02ce0978(param_2);
    }
    lVar2 = *unaff_x19;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == param_2) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_03b61b0c;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_02ce0a7c();
LAB_03b61b0c:
    (*(code *)*puVar1)(&stack0x00000160);
    memcpy(&stack0x000002c0,&stack0x00000160,0x160);
    lVar2 = *(long *)(unaff_x21 + 0x10);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    uVar5 = *(uint *)(unaff_x21 + 0x18);
    if (uVar5 == *(uint *)(lVar2 + 0x18)) {
      FUN_03b5fee4();
      lVar2 = *(long *)(unaff_x21 + 0x10);
      uVar5 = *(uint *)(unaff_x21 + 0x18);
    }
    *(uint *)(unaff_x21 + 0x18) = uVar5 + 1;
    memcpy(&stack0x00000160,&stack0x000002c0,0x160);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    memcpy(&stack0x00000000,&stack0x00000160,0x160);
    if (*(uint *)(lVar2 + 0x18) <= uVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c84();
    }
    memcpy((void *)(lVar2 + (long)(int)uVar5 * (long)unaff_w24 + 0x20),&stack0x00000000,0x160);
    lVar2 = *unaff_x19;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *unaff_x23) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_03b61a94;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_02ce0a7c();
LAB_03b61a94:
    uVar3 = (*(code *)*puVar1)();
    if ((uVar3 & 1) == 0) break;
    param_2 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x140);
  } while( true );
  if (unaff_x19 != (long *)0x0) {
    lVar2 = *unaff_x19;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *unaff_x22) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_03b61c08;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_02ce0a7c();
LAB_03b61c08:
    (*(code *)*puVar1)();
  }
  return;
}


