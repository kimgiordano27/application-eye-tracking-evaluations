/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Qpl.Annotation>$$.ctor
ENTRY_POINT: 06e2eeb4
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
               (long param_1,uint param_2,int param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char in_NG;
  char in_OV;
  int iVar4;
  long lVar5;
  int in_w8;
  ushort *in_x9;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  undefined8 uVar6;
  uint uVar7;
  undefined8 uVar8;
  
  if (in_NG != in_OV) {
    in_w8 = in_w8 + 1;
  }
  if ((*in_x9 & 1) == 0) {
    param_1 = FUN_04980b34();
  }
  lVar5 = *(long *)(*(long *)(param_1 + 0xc0) + 0x48);
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_04980b34();
  }
  uVar1 = param_2 + (in_w8 >> 1);
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  if ((*(ushort *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
    FUN_04980b34();
  }
  FUN_06e2e8f4();
  if ((*(ushort *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
    FUN_04980b34();
  }
  FUN_06e2e8f4();
  if ((*(ushort *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
    FUN_04980b34();
  }
  FUN_06e2e8f4();
  if (unaff_x20 == 0) {
LAB_06e2f178:
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  if (uVar1 < *(uint *)(unaff_x20 + 0x18)) {
    uVar7 = param_3 - 1;
    lVar5 = unaff_x20 + (long)(int)uVar1 * 0xc;
    uVar6 = *(undefined8 *)(lVar5 + 0x20);
    uVar2 = *(undefined4 *)(lVar5 + 0x28);
    if ((*(ushort *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
      FUN_04980b34();
    }
    FUN_06e2ea00();
    if ((int)uVar7 <= (int)param_2) {
LAB_06e2f0f8:
      lVar5 = *(long *)(unaff_x21 + 0x20);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_04980b34();
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x48);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_04980b34();
      }
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      if ((*(ushort *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
        FUN_04980b34();
      }
      FUN_06e2ea00();
      return param_2;
    }
    while (param_2 = param_2 + 1, param_2 < *(uint *)(unaff_x20 + 0x18)) {
      if (unaff_x22 == 0) goto LAB_06e2f178;
      lVar5 = unaff_x20 + (long)(int)param_2 * 0xc;
      uVar8 = *(undefined8 *)(lVar5 + 0x20);
      uVar3 = *(undefined4 *)(lVar5 + 0x28);
      if ((*(ushort *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
        FUN_04980b34();
      }
      iVar4 = (**(code **)(unaff_x22 + 0x18))
                        (*(undefined8 *)(unaff_x22 + 0x40),uVar8,uVar3,uVar6,uVar2,
                         *(undefined8 *)(unaff_x22 + 0x28));
      if (-1 < iVar4) {
        do {
          uVar7 = uVar7 - 1;
          if (*(uint *)(unaff_x20 + 0x18) <= uVar7) goto LAB_06e2f174;
          lVar5 = unaff_x20 + (long)(int)uVar7 * 0xc;
          uVar8 = *(undefined8 *)(lVar5 + 0x20);
          uVar3 = *(undefined4 *)(lVar5 + 0x28);
          if ((*(ushort *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
            FUN_04980b34();
          }
          iVar4 = (**(code **)(unaff_x22 + 0x18))
                            (*(undefined8 *)(unaff_x22 + 0x40),uVar6,uVar2,uVar8,uVar3,
                             *(undefined8 *)(unaff_x22 + 0x28));
        } while (iVar4 < 0);
        if ((int)uVar7 <= (int)param_2) goto LAB_06e2f0f8;
        lVar5 = *(long *)(unaff_x21 + 0x20);
        if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_04980b34();
        }
        lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x48);
        if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_04980b34();
        }
        if (*(int *)(lVar5 + 0xe4) == 0) {
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


