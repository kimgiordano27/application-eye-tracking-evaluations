/*
FUNCTION_NAME: FUN_07673cac
ENTRY_POINT: 07673cac
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_07673cac(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  
  if ((DAT_08271004 & 1) == 0) {
    FUN_0373b518(
                UnityEngine_InputSystem_Layouts_InputControlLayout_Builder_ControlBuilder_<>c_TypeInfo
                );
    FUN_0373b518(PTR_DAT_07d89900);
    FUN_0373b518(OVRPlugin_Qpl_Annotation_Builder_Entry_TypeInfo);
    DAT_08271004 = 1;
  }
  puVar2 = UnityEngine_InputSystem_Layouts_InputControlLayout_Builder_ControlBuilder_<>c_TypeInfo;
  if (param_1 != 0) {
    uVar3 = FUN_076a07ec(param_1,0);
    lVar5 = *(long *)puVar2;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03798b70(lVar5);
      lVar5 = *(long *)puVar2;
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x88);
    if (lVar5 != 0) {
      uVar4 = FUN_0458c578(lVar5,uVar3,*(undefined8 *)PTR_DAT_07d89900);
      if ((uVar4 & 1) == 0) {
        return;
      }
      lVar5 = *(long *)puVar2;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar5 = *(long *)puVar2;
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x80);
      if (lVar5 != 0) {
        lVar6 = *(long *)(lVar5 + 0x10);
        lVar8 = *(long *)OVRPlugin_Qpl_Annotation_Builder_Entry_TypeInfo;
        *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
        if (lVar6 != 0) {
          uVar1 = *(uint *)(lVar5 + 0x18);
          if (uVar1 < *(uint *)(lVar6 + 0x18)) {
            *(uint *)(lVar5 + 0x18) = uVar1 + 1;
            plVar7 = (long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20);
            *plVar7 = param_1;
            thunk_FUN_037aeb94(plVar7,param_1);
            return;
          }
          FUN_049ceef4(lVar5,param_1,
                       *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


