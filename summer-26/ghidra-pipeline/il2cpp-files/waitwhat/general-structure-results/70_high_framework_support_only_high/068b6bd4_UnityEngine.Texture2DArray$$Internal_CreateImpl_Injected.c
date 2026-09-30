/*
FUNCTION_NAME: UnityEngine.Texture2DArray$$Internal_CreateImpl_Injected
ENTRY_POINT: 068b6bd4
PROGRAM: waitwhat-libil2cpp.so
SCORE: 89
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_4
*/


void UnityEngine_Texture2DArray__Internal_CreateImpl_Injected(ulong param_1)

{
  int iVar1;
  undefined *puVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  int *piVar7;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  if ((param_1 & 1) == 0) {
    FUN_03188a78(OVRPlugin_OVRP_1_19_0_TypeInfo);
    FUN_03188a78(OVR_OpenVR_IVROverlay__SetKeyboardTransformAbsolute_TypeInfo);
    FUN_03188a78(System_IO_Enumeration_FileSystemEnumerableFactory_<>c__DisplayClass5_0_TypeInfo);
    FUN_03188a78(PTR_DAT_070f2d40);
    *(undefined1 *)(unaff_x21 + 0x177) = 1;
  }
  if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03188cd8();
  }
  iVar1 = *(int *)(unaff_x19 + 0x18);
  *(undefined4 *)(unaff_x19 + 0x18) = 0;
  *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
  if (0 < iVar1) {
    FUN_0595236c(*(undefined8 *)(unaff_x19 + 0x10),0,iVar1,0);
  }
  uVar3 = FUN_069d3398();
  if ((uVar3 & 1) != 0) {
    plVar4 = (long *)FUN_068b3948();
    puVar2 = OVRPlugin_OVRP_1_19_0_TypeInfo;
    if (plVar4 != (long *)0x0) {
      lVar6 = *plVar4;
      uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar3 != 0) {
        piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)OVRPlugin_OVRP_1_19_0_TypeInfo) {
            puVar5 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_068b6cac;
          }
          uVar3 = uVar3 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar3 != 0);
      }
      puVar5 = (undefined8 *)FUN_031c0d08(plVar4,*(long *)OVRPlugin_OVRP_1_19_0_TypeInfo,0);
LAB_068b6cac:
      uVar3 = (*(code *)*puVar5)(plVar4,puVar5[1]);
      if ((uVar3 & 1) != 0) {
        lVar6 = *plVar4;
        uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar3 != 0) {
          piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
              puVar5 = (undefined8 *)(lVar6 + (long)(*piVar7 + 3) * 0x10 + 0x138);
              goto LAB_068b6da0;
            }
            uVar3 = uVar3 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar3 != 0);
        }
        puVar5 = (undefined8 *)FUN_031c0d08(plVar4,*(long *)puVar2,3);
LAB_068b6da0:
                    /* WARNING: Could not recover jumptable at 0x068b6dc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)*puVar5)(plVar4);
        return;
      }
    }
    if (*(char *)(unaff_x20 + 0x2c9) != '\0') {
      FUN_042e4c6c();
      return;
    }
    if (*(int *)(*(long *)PTR_DAT_070f2d40 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    FUN_0686b5e4();
    FUN_042e4c6c();
    *(undefined1 *)(unaff_x20 + 0x2c9) = 1;
  }
  return;
}


