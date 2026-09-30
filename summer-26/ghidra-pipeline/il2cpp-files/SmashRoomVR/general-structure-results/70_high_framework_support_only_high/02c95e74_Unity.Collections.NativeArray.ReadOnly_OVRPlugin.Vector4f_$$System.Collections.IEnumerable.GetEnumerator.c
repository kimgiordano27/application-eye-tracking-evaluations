/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.Vector4f>$$System.Collections.IEnumerable.GetEnumerator
ENTRY_POINT: 02c95e74
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint Unity_Collections_NativeArray_ReadOnly<OVRPlugin_Vector4f>__System_Collections_IEnumerable_GetEnumerator
               (void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  uint unaff_w19;
  long unaff_x20;
  long *unaff_x21;
  void *unaff_x22;
  long unaff_x23;
  uint unaff_w24;
  int unaff_w26;
  int unaff_w27;
  code *unaff_x28;
  
  do {
    iVar1 = (*unaff_x28)();
    if (iVar1 == 0) {
      return unaff_w24;
    }
    if (iVar1 < 0) {
      unaff_w19 = unaff_w24 + 1;
    }
    else {
      unaff_w26 = unaff_w24 - 1;
    }
    if (unaff_w26 < (int)unaff_w19) {
      return ~unaff_w19;
    }
    unaff_w24 = unaff_w19 + ((int)(unaff_w26 - unaff_w19) >> 1);
    if (*(uint *)(unaff_x23 + 0x18) <= unaff_w24) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48180();
    }
    memcpy(&stack0x00000120,(void *)(unaff_x23 + (long)(int)unaff_w24 * (long)unaff_w27 + 0x20),0x60
          );
    memcpy(&stack0x000000c0,unaff_x22,0x60);
    if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    lVar2 = *(long *)(unaff_x20 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01ae9e74();
    }
    lVar2 = **(long **)(lVar2 + 0xc0);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01ae9e74(lVar2);
    }
    memcpy(&stack0x00000060,&stack0x00000120,0x60);
    memcpy(&stack0x00000000,&stack0x000000c0,0x60);
    lVar4 = *unaff_x21;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar2) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_02c95e4c;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ae9f78();
LAB_02c95e4c:
    unaff_x28 = (code *)*puVar3;
    memcpy(&stack0x000001e0,&stack0x00000060,0x60);
    memcpy(&stack0x00000180,&stack0x00000000,0x60);
  } while( true );
}


