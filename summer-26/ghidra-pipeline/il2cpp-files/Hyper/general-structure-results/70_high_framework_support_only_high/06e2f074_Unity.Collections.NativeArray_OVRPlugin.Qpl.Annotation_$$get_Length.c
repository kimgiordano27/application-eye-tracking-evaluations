/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Qpl.Annotation>$$get_Length
ENTRY_POINT: 06e2f074
PROGRAM: Hyper-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__get_Length
               (code *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  uint unaff_w26;
  undefined8 uVar4;
  int unaff_w29;
  
  while( true ) {
    iVar2 = (*param_1)(param_2);
    if (-1 < iVar2) {
      if ((int)unaff_w26 <= (int)unaff_w19) {
        lVar3 = *(long *)(unaff_x21 + 0x20);
        if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_04980b34();
        }
        lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x48);
        if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_04980b34();
        }
        if (*(int *)(lVar3 + 0xe4) == 0) {
          thunk_FUN_049a583c();
        }
        if ((*(ushort *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
          FUN_04980b34();
        }
        FUN_06e2ea00();
        return unaff_w19;
      }
      lVar3 = *(long *)(unaff_x21 + 0x20);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_04980b34();
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x48);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_04980b34();
      }
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      if ((*(ushort *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
        FUN_04980b34();
      }
      FUN_06e2ea00();
      do {
        unaff_w19 = unaff_w19 + 1;
        if (*(uint *)(unaff_x20 + 0x18) <= unaff_w19) goto LAB_06e2f174;
        if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0494818c();
        }
        lVar3 = unaff_x20 + (long)(int)unaff_w19 * (long)unaff_w29;
        uVar4 = *(undefined8 *)(lVar3 + 0x20);
        uVar1 = *(undefined4 *)(lVar3 + 0x28);
        if ((*(ushort *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
          FUN_04980b34();
        }
        iVar2 = (**(code **)(unaff_x22 + 0x18))(*(undefined8 *)(unaff_x22 + 0x40),uVar4,uVar1);
      } while (iVar2 < 0);
    }
    unaff_w26 = unaff_w26 - 1;
    if (*(uint *)(unaff_x20 + 0x18) <= unaff_w26) break;
    if ((*(ushort *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
      FUN_04980b34();
    }
    param_1 = *(code **)(unaff_x22 + 0x18);
    param_2 = *(undefined8 *)(unaff_x22 + 0x40);
  }
LAB_06e2f174:
                    /* WARNING: Subroutine does not return */
  FUN_04948194();
}


