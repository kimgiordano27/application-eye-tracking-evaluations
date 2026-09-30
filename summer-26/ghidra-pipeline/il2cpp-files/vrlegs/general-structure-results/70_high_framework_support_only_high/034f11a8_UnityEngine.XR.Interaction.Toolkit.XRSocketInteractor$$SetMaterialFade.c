/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.XRSocketInteractor$$SetMaterialFade
ENTRY_POINT: 034f11a8
PROGRAM: vrlegs-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x034f13a4) */

undefined8 UnityEngine_XR_Interaction_Toolkit_XRSocketInteractor__SetMaterialFade(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x20;
  undefined8 unaff_x22;
  long *plVar7;
  long lVar8;
  undefined8 in_stack_00000008;
  char cStack0000000000000014;
  undefined8 in_stack_00000018;
  
  cStack0000000000000014 = '\0';
  FUN_027e0bd8();
  lVar1 = thunk_FUN_01a89e68(*(undefined8 *)
                              System_Security_Cryptography_DerSequenceReader_<>c_TypeInfo);
  FUN_027b3d9c(lVar1,0);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  *(undefined8 *)(lVar1 + 0x10) = unaff_x22;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  plVar7 = *(long **)(unaff_x20 + 0x38);
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  lVar4 = *plVar7;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) ==
          *(long *)UnityEngine_Rendering_Universal_Internal_DepthOnlyPass_<>c_TypeInfo) {
        puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_034f1248;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar2 = (undefined8 *)
           FUN_01a472ec(plVar7,*(long *)
                                UnityEngine_Rendering_Universal_Internal_DepthOnlyPass_<>c_TypeInfo,
                        0);
LAB_034f1248:
  in_stack_00000008 = (*(code *)*puVar2)(plVar7,puVar2[1]);
  if (*(int *)(*(long *)PTR_DAT_03cbeeb0 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar3 = FUN_027447a8(&stack0x00000008,0);
  *(undefined8 *)(lVar1 + 0x18) = uVar3;
  lVar8 = *(long *)(unaff_x20 + 0x60);
  lVar4 = lVar8 + 1;
  *(long *)(unaff_x20 + 0x60) = lVar4;
  *(long *)(lVar1 + 0x20) = lVar8;
  if (lVar4 < 1) {
    *(undefined8 *)(unaff_x20 + 0x60) = 1;
  }
  if (*(long *)(unaff_x20 + 0x48) != 0) {
    FUN_02225650(*(long *)(unaff_x20 + 0x48),lVar1,
                 *(undefined8 *)
                  UnityEngine_Rendering_Universal_Internal_DepthOnlyPass_PassData_TypeInfo);
    if (*(long *)(unaff_x20 + 0x50) != 0) {
      in_stack_00000018 = *(undefined8 *)(lVar1 + 0x20);
      FUN_0219b9a4(*(long *)(unaff_x20 + 0x50),&stack0x00000018,lVar1,
                   *(undefined8 *)
                    UnityEngine_Rendering_Universal_Internal_DepthNormalOnlyPass_PassData_TypeInfo);
      uVar3 = *(undefined8 *)(lVar1 + 0x20);
      if (cStack0000000000000014 != '\0') {
        OVRManager_<>c__<InitOVRManager>b__424_0();
      }
      return uVar3;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


