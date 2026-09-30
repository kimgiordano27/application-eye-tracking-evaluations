/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Qpl.Annotation>$$.ctor
ENTRY_POINT: 06e2ef44
PROGRAM: Hyper-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>___ctor
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  int unaff_w23;
  undefined8 uVar5;
  uint unaff_w26;
  uint uVar6;
  undefined8 uVar7;
  
  FUN_06e2e8f4(param_2,param_3,unaff_w19,unaff_w23,*(undefined8 *)(param_1 + 0x70));
  if ((*(ushort *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
    FUN_04980b34();
  }
  FUN_06e2e8f4();
  if (unaff_x20 == 0) {
LAB_06e2f178:
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  if (unaff_w26 < *(uint *)(unaff_x20 + 0x18)) {
    uVar6 = unaff_w23 - 1;
    lVar4 = unaff_x20 + (long)(int)unaff_w26 * 0xc;
    uVar5 = *(undefined8 *)(lVar4 + 0x20);
    uVar1 = *(undefined4 *)(lVar4 + 0x28);
    if ((*(ushort *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
      FUN_04980b34();
    }
    FUN_06e2ea00();
    if ((int)uVar6 <= (int)unaff_w19) {
LAB_06e2f0f8:
      lVar4 = *(long *)(unaff_x21 + 0x20);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_04980b34();
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x48);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_04980b34();
      }
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      if ((*(ushort *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
        FUN_04980b34();
      }
      FUN_06e2ea00();
      return unaff_w19;
    }
    while (unaff_w19 = unaff_w19 + 1, unaff_w19 < *(uint *)(unaff_x20 + 0x18)) {
      if (unaff_x22 == 0) goto LAB_06e2f178;
      lVar4 = unaff_x20 + (long)(int)unaff_w19 * 0xc;
      uVar7 = *(undefined8 *)(lVar4 + 0x20);
      uVar2 = *(undefined4 *)(lVar4 + 0x28);
      if ((*(ushort *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
        FUN_04980b34();
      }
      iVar3 = (**(code **)(unaff_x22 + 0x18))
                        (*(undefined8 *)(unaff_x22 + 0x40),uVar7,uVar2,uVar5,uVar1,
                         *(undefined8 *)(unaff_x22 + 0x28));
      if (-1 < iVar3) {
        do {
          uVar6 = uVar6 - 1;
          if (*(uint *)(unaff_x20 + 0x18) <= uVar6) goto LAB_06e2f174;
          lVar4 = unaff_x20 + (long)(int)uVar6 * 0xc;
          uVar7 = *(undefined8 *)(lVar4 + 0x20);
          uVar2 = *(undefined4 *)(lVar4 + 0x28);
          if ((*(ushort *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
            FUN_04980b34();
          }
          iVar3 = (**(code **)(unaff_x22 + 0x18))
                            (*(undefined8 *)(unaff_x22 + 0x40),uVar5,uVar1,uVar7,uVar2,
                             *(undefined8 *)(unaff_x22 + 0x28));
        } while (iVar3 < 0);
        if ((int)uVar6 <= (int)unaff_w19) goto LAB_06e2f0f8;
        lVar4 = *(long *)(unaff_x21 + 0x20);
        if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_04980b34();
        }
        lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x48);
        if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_04980b34();
        }
        if (*(int *)(lVar4 + 0xe4) == 0) {
          thunk_FUN_049a583c();
        }
        if ((*(ushort *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
          FUN_04980b34();
        }
        FUN_06e2ea00();
      }
    }
  }
LAB_06e2f174:
                    /* WARNING: Subroutine does not return */
  FUN_04948194();
}


