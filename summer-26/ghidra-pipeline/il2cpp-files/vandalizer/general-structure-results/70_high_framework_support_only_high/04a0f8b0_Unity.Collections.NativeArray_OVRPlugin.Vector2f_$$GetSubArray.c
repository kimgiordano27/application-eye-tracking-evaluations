/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$GetSubArray
ENTRY_POINT: 04a0f8b0
PROGRAM: vandalizer-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_8;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint Unity_Collections_NativeArray<OVRPlugin_Vector2f>__GetSubArray(void)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 in_x3;
  long *in_x4;
  long in_x5;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  uint unaff_w19;
  long unaff_x23;
  undefined8 uVar8;
  int unaff_w26;
  
  do {
    uVar1 = unaff_w19 + ((int)(unaff_w26 - unaff_w19) >> 1);
    if (*(uint *)(unaff_x23 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2398();
    }
    if (in_x4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2390();
    }
    lVar3 = *(long *)(in_x5 + 0x20);
    uVar8 = *(undefined8 *)(unaff_x23 + (long)(int)uVar1 * 8 + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0322bef4();
    }
    lVar3 = **(long **)(lVar3 + 0xc0);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0322bef4(lVar3);
    }
    lVar5 = *in_x4;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar3) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_04a0f950;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_0322c1e8(in_x4,lVar3,0);
LAB_04a0f950:
    iVar2 = (*(code *)*puVar4)(in_x4,uVar8,in_x3,puVar4[1]);
    if (iVar2 == 0) {
      return uVar1;
    }
    if (iVar2 < 0) {
      unaff_w19 = uVar1 + 1;
    }
    else {
      unaff_w26 = uVar1 - 1;
    }
    if (unaff_w26 < (int)unaff_w19) {
      return ~unaff_w19;
    }
  } while( true );
}


