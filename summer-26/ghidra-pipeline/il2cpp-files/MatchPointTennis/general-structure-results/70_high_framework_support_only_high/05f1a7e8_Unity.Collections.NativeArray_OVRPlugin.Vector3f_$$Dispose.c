/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$Dispose
ENTRY_POINT: 05f1a7e8
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_6;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint Unity_Collections_NativeArray<OVRPlugin_Vector3f>__Dispose
               (undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],
               undefined1 param_4 [16])

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
  undefined8 *unaff_x22;
  long unaff_x23;
  uint unaff_w24;
  int unaff_w25;
  int unaff_w26;
  undefined8 uStack0000000000000060;
  undefined8 uStack0000000000000068;
  undefined8 uStack0000000000000070;
  undefined8 uStack0000000000000078;
  undefined8 uStack0000000000000080;
  undefined8 uStack0000000000000088;
  undefined8 uStack0000000000000090;
  undefined8 uStack0000000000000098;
  
  uStack0000000000000098 = param_4._8_8_;
  uStack0000000000000090 = param_4._0_8_;
  uStack0000000000000068 = param_3._8_8_;
  uStack0000000000000060 = param_3._0_8_;
  uStack0000000000000078 = param_2._8_8_;
  uStack0000000000000070 = param_2._0_8_;
  uStack0000000000000088 = param_1._8_8_;
  uStack0000000000000080 = param_1._0_8_;
  do {
    if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    lVar2 = *(long *)(unaff_x20 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_04481fb8();
    }
    lVar2 = **(long **)(lVar2 + 0xc0);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_04481fb8(lVar2);
    }
    lVar4 = *unaff_x21;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar2) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_05f1a888;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_044822ac();
LAB_05f1a888:
    iVar1 = (*(code *)*puVar3)();
    if (iVar1 == 0) {
      return unaff_w24;
    }
    if (iVar1 < 0) {
      unaff_w19 = unaff_w24 + 1;
    }
    else {
      unaff_w25 = unaff_w24 - 1;
    }
    if (unaff_w25 < (int)unaff_w19) {
      return ~unaff_w19;
    }
    unaff_w24 = unaff_w19 + ((int)(unaff_w25 - unaff_w19) >> 1);
    if (*(uint *)(unaff_x23 + 0x18) <= unaff_w24) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e4c();
    }
    lVar2 = unaff_x23 + (long)(int)unaff_w24 * (long)unaff_w26;
    uStack0000000000000098 = *(undefined8 *)(lVar2 + 0x28);
    uStack0000000000000090 = *(undefined8 *)(lVar2 + 0x20);
    uStack0000000000000078 = unaff_x22[3];
    uStack0000000000000070 = unaff_x22[2];
    uStack0000000000000088 = unaff_x22[5];
    uStack0000000000000080 = unaff_x22[4];
    uStack0000000000000068 = unaff_x22[1];
    uStack0000000000000060 = *unaff_x22;
  } while( true );
}


