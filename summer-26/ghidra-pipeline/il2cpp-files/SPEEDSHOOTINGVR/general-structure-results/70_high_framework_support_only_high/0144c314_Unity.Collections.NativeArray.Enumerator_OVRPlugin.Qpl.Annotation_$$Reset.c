/*
FUNCTION_NAME: Unity.Collections.NativeArray.Enumerator<OVRPlugin.Qpl.Annotation>$$Reset
ENTRY_POINT: 0144c314
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 Unity_Collections_NativeArray_Enumerator<OVRPlugin_Qpl_Annotation>__Reset(ulong param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long unaff_x19;
  long unaff_x20;
  int unaff_w21;
  uint uVar8;
  long unaff_x22;
  uint unaff_w23;
  char unaff_w24;
  long unaff_x25;
  int unaff_w26;
  int *unaff_x27;
  undefined4 unaff_s8;
  undefined4 unaff_s9;
  undefined4 unaff_s10;
  undefined4 unaff_s11;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  
  while( true ) {
    if ((int)param_1 <= unaff_w21) {
      FUN_01d69580(0);
    }
    param_1 = *(ulong *)(unaff_x25 + 0x18);
    unaff_w21 = unaff_w21 + 1;
    if ((uint)param_1 <= unaff_w23) break;
    lVar7 = (long)(int)unaff_w23;
    if (*(int *)(unaff_x25 + (long)(int)unaff_w23 * (long)(int)unaff_x22 + 0x20) == unaff_w26) {
      plVar4 = (long *)FUN_01169cd0(*(undefined8 *)
                                     (*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x18));
      if (*(uint *)(unaff_x25 + 0x18) <= unaff_w23) goto LAB_0144c4e0;
      if (plVar4 == (long *)0x0) {
LAB_0144c4e4:
                    /* WARNING: Subroutine does not return */
        FUN_00fdc534();
      }
      uVar5 = (**(code **)(*plVar4 + 0x1b8))
                        (plVar4,*(undefined4 *)(unaff_x25 + lVar7 * unaff_x22 + 0x28),
                         uStack000000000000000c,*(undefined8 *)(*plVar4 + 0x1c0));
      if ((uVar5 & 1) != 0) {
        if (unaff_w24 == '\x02') {
          uStack0000000000000008 = uStack000000000000000c;
          uVar6 = thunk_FUN_0103fd0c(*(undefined8 *)
                                      (*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x70),
                                     &stack0x00000008);
          FUN_01d6947c(uVar6,0);
        }
        else if (unaff_w24 == '\x01') {
          if (unaff_w23 < *(uint *)(unaff_x25 + 0x18)) {
            lVar7 = unaff_x25 + lVar7 * 0x1c;
            *(undefined4 *)(lVar7 + 0x2c) = unaff_s11;
            *(undefined4 *)(lVar7 + 0x30) = unaff_s10;
            *(undefined4 *)(lVar7 + 0x34) = unaff_s9;
            *(undefined4 *)(lVar7 + 0x38) = unaff_s8;
            return 1;
          }
          goto LAB_0144c4e0;
        }
        return 0;
      }
      param_1 = (ulong)*(uint *)(unaff_x25 + 0x18);
    }
    if ((uint)param_1 <= unaff_w23) goto LAB_0144c4e0;
    unaff_w23 = *(uint *)(unaff_x25 + lVar7 * unaff_x22 + 0x24);
  }
  if (*(int *)(unaff_x19 + 0x28) < 1) {
    uVar8 = *(uint *)(unaff_x19 + 0x20);
    if (uVar8 == (uint)param_1) {
      FUN_0144c888();
      lVar7 = *(long *)(unaff_x19 + 0x10);
      *(uint *)(unaff_x19 + 0x20) = uVar8 + 1;
      if (lVar7 == 0) goto LAB_0144c4e4;
      uVar1 = *(uint *)(lVar7 + 0x18);
      iVar3 = 0;
      if (uVar1 != 0) {
        iVar3 = unaff_w26 / (int)uVar1;
      }
      uVar2 = unaff_w26 - iVar3 * uVar1;
      if (uVar1 <= uVar2) goto LAB_0144c4e0;
      unaff_x25 = *(long *)(unaff_x19 + 0x18);
      unaff_x27 = (int *)(lVar7 + (ulong)uVar2 * 4 + 0x20);
    }
    else {
      unaff_x25 = *(long *)(unaff_x19 + 0x18);
      *(uint *)(unaff_x19 + 0x20) = uVar8 + 1;
    }
    if (unaff_x25 == 0) goto LAB_0144c4e4;
    if (*(uint *)(unaff_x25 + 0x18) <= uVar8) {
LAB_0144c4e0:
                    /* WARNING: Subroutine does not return */
      FUN_00fdc53c();
    }
    lVar7 = (long)(int)uVar8;
  }
  else {
    *(int *)(unaff_x19 + 0x28) = *(int *)(unaff_x19 + 0x28) + -1;
    uVar8 = *(uint *)(unaff_x19 + 0x24);
    if (*(uint *)(unaff_x25 + 0x18) <= uVar8) goto LAB_0144c4e0;
    lVar7 = (long)(int)uVar8;
    *(undefined4 *)(unaff_x19 + 0x24) = *(undefined4 *)(unaff_x25 + lVar7 * 0x1c + 0x24);
  }
  lVar7 = unaff_x25 + lVar7 * 0x1c;
  *(int *)(lVar7 + 0x20) = unaff_w26;
  *(int *)(lVar7 + 0x24) = *unaff_x27 + -1;
  *(undefined4 *)(lVar7 + 0x2c) = unaff_s11;
  *(undefined4 *)(lVar7 + 0x30) = unaff_s10;
  *(undefined4 *)(lVar7 + 0x34) = unaff_s9;
  *(undefined4 *)(lVar7 + 0x38) = unaff_s8;
  *(undefined4 *)(lVar7 + 0x28) = uStack000000000000000c;
  *unaff_x27 = uVar8 + 1;
  return 1;
}


