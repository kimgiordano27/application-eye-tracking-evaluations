/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$GetEnumerator
ENTRY_POINT: 03b61b90
PROGRAM: hellodot-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03b61c48) */

void Unity_Collections_NativeArray<OVRPlugin_Vector4f>__GetEnumerator(void)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  int unaff_w24;
  long unaff_x25;
  uint unaff_w26;
  
  do {
    if (*(uint *)(unaff_x25 + 0x18) <= unaff_w26) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c84();
    }
    memcpy((void *)(unaff_x25 + (long)(int)unaff_w26 * (long)unaff_w24 + 0x20),&stack0x00000000,
           0x160);
    lVar2 = *unaff_x19;
    uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x23) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_03b61a94;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_02ce0a7c();
LAB_03b61a94:
    uVar4 = (*(code *)*puVar1)();
    if ((uVar4 & 1) == 0) {
                    /* try { // try from 03b61bb8 to 03c61cd3 has its CatchHandler @ 03b61bb8
                       catch() { ... } // from try @ 03b61bb8 with catch @ 03b61bb8
                       catch() { ... } // from try @ 03b61db0 with catch @ 03b61bb8
                       catch() { ... } // from try @ 03b61e78 with catch @ 03b61bb8
                       catch() { ... } // from try @ 03b61e80 with catch @ 03b61bb8
                       catch() { ... } // from try @ 03b61f24 with catch @ 03b61bb8 */
      if (unaff_x19 == (long *)0x0) {
        return;
      }
      lVar2 = *unaff_x19;
      uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar4 == 0) goto LAB_03b61bec;
      piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      break;
    }
    lVar2 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x140);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02ce0978(lVar2);
    }
    lVar3 = *unaff_x19;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == lVar2) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_03b61b0c;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_02ce0a7c();
LAB_03b61b0c:
    (*(code *)*puVar1)(&stack0x00000160);
    memcpy(&stack0x000002c0,&stack0x00000160,0x160);
    unaff_x25 = *(long *)(unaff_x21 + 0x10);
    if (unaff_x25 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    unaff_w26 = *(uint *)(unaff_x21 + 0x18);
    if (unaff_w26 == *(uint *)(unaff_x25 + 0x18)) {
      FUN_03b5fee4();
      unaff_x25 = *(long *)(unaff_x21 + 0x10);
      unaff_w26 = *(uint *)(unaff_x21 + 0x18);
    }
    *(uint *)(unaff_x21 + 0x18) = unaff_w26 + 1;
    memcpy(&stack0x00000160,&stack0x000002c0,0x160);
    if (unaff_x25 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    memcpy(&stack0x00000000,&stack0x00000160,0x160);
  } while( true );
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar5 = piVar5 + 4;
    if (uVar4 == 0) break;
    if (*(long *)(piVar5 + -2) == *unaff_x22) {
      puVar1 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
      goto LAB_03b61c08;
    }
  }
LAB_03b61bec:
  puVar1 = (undefined8 *)FUN_02ce0a7c();
LAB_03b61c08:
  (*(code *)*puVar1)();
  return;
}


