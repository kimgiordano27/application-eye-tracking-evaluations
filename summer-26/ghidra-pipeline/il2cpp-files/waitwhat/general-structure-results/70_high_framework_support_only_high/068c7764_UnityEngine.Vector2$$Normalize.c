/*
FUNCTION_NAME: UnityEngine.Vector2$$Normalize
ENTRY_POINT: 068c7764
PROGRAM: waitwhat-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void UnityEngine_Vector2__Normalize(undefined1 param_1 [16])

{
  char cVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long unaff_x19;
  long unaff_x20;
  undefined4 uVar11;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000010;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  
  uStack0000000000000000 = param_1._0_8_;
  uStack0000000000000018 = param_1._8_4_;
  uStack000000000000001c = param_1._12_4_;
  uStack0000000000000010 = uStack0000000000000000;
  FUN_068b07f0();
  if ((*(char *)(unaff_x19 + 0x2e8) != '\0') && (*(char *)(unaff_x19 + 0x3a4) != '\0')) {
    uVar11 = FUN_069e3174(0);
    *(undefined1 *)(unaff_x19 + 0x3ac) = 0;
    *(undefined4 *)(unaff_x19 + 0x3a8) = uVar11;
  }
  lVar4 = FUN_068b06d0();
  if (lVar4 == 0) goto LAB_068c78e8;
  if (*(int *)(lVar4 + 0x18) != 1) {
    return;
  }
  if (unaff_x20 == 0) goto LAB_068c78e8;
  cVar1 = *(char *)(unaff_x19 + 0x2f4);
  uVar5 = FUN_06852520();
  puVar2 = OVRPlugin_OVRP_1_2_0_TypeInfo;
  plVar6 = (long *)thunk_FUN_031c3cac(uVar5,*(undefined8 *)OVRPlugin_OVRP_1_2_0_TypeInfo);
  if (plVar6 == (long *)0x0) {
LAB_068c7874:
    if (cVar1 != '\0') {
      return;
    }
  }
  else {
    lVar8 = *plVar6;
    lVar4 = *(long *)puVar2;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar4) {
          puVar7 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto UnityEngine_Vector2__get_normalized;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar7 = (undefined8 *)FUN_031c0d08(plVar6,lVar4,0);
UnityEngine_Vector2__get_normalized:
    iVar3 = (*(code *)*puVar7)(plVar6,puVar7[1]);
    if (iVar3 == 0) goto LAB_068c7874;
    lVar8 = *plVar6;
    lVar4 = *(long *)puVar2;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar4) {
          puVar7 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_068c7888;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar7 = (undefined8 *)FUN_031c0d08(plVar6,lVar4,0);
LAB_068c7888:
    iVar3 = (*(code *)*puVar7)(plVar6,puVar7[1]);
    if (iVar3 != 2) {
      return;
    }
  }
  uVar9 = FUN_068c45bc();
  if ((uVar9 & 1) != 0) {
    lVar4 = *(long *)(unaff_x19 + 0x50);
    FUN_06a6354c();
    if (lVar4 == 0) {
LAB_068c78e8:
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    FUN_069e7098(lVar4,0);
  }
  return;
}


