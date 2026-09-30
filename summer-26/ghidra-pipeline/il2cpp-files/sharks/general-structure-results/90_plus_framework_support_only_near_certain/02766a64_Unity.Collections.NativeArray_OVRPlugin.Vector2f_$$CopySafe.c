/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$CopySafe
ENTRY_POINT: 02766a64
PROGRAM: sharks-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_8;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_4
*/


uint Unity_Collections_NativeArray<OVRPlugin_Vector2f>__CopySafe(void)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  uint in_w8;
  long lVar5;
  int in_w9;
  ulong uVar6;
  int *piVar7;
  uint unaff_w19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x23;
  int unaff_w25;
  
  do {
    uVar1 = unaff_w19 + (in_w9 >> 1);
    if (in_w8 <= uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_017fc5b0();
    }
    if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_017fc5a8();
    }
    lVar3 = *(long *)(unaff_x20 + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0185daa4();
    }
    lVar3 = **(long **)(lVar3 + 0xc0);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0185daa4(lVar3);
    }
    lVar5 = *unaff_x21;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar3) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto Unity_Collections_NativeArray<OVRPlugin_Vector2f>__CopySafe;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_0185dba8();
Unity_Collections_NativeArray<OVRPlugin_Vector2f>__CopySafe:
    iVar2 = (*(code *)*puVar4)();
    if (iVar2 == 0) {
      return uVar1;
    }
    if (iVar2 < 0) {
      unaff_w19 = uVar1 + 1;
    }
    else {
      unaff_w25 = uVar1 - 1;
    }
    if (unaff_w25 < (int)unaff_w19) {
      return ~unaff_w19;
    }
    in_w8 = *(uint *)(unaff_x23 + 0x18);
    in_w9 = unaff_w25 - unaff_w19;
  } while( true );
}


