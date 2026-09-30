/*
FUNCTION_NAME: FUN_01088bc8
ENTRY_POINT: 01088bc8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_19;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_01088bc8(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  short sVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  
  if ((DAT_0377626f & 1) == 0) {
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_105__);
    thunk_FUN_00d48444(Oculus_Interaction_Grab_GrabPoseScore_TypeInfo);
    thunk_FUN_00d48444(TMPro_TMP_InputField_SubmitEvent_TypeInfo);
    DAT_0377626f = 1;
  }
  puVar3 = Method_OVRPlugin_<>c_<_cctor>b__796_105__;
  puVar2 = TMPro_TMP_InputField_SubmitEvent_TypeInfo;
  puVar1 = Oculus_Interaction_Grab_GrabPoseScore_TypeInfo;
  if (param_2 == 0) goto LAB_01088e24;
  *(undefined8 *)(param_2 + 0x138) = *(undefined8 *)(param_2 + 0x130);
  uVar5 = FUN_015ff8a0(*(undefined8 *)(param_2 + 0x128),0);
  uVar6 = FUN_015ff8a0(*(undefined8 *)(param_2 + 0x138),0);
  if ((uVar5 & 1) == 0) {
    uVar11 = *(undefined8 *)(param_2 + 0x128);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    lVar7 = FUN_02020414(uVar11,*(undefined8 *)puVar1,*(undefined8 *)puVar2,0);
    if (lVar7 == 0) goto LAB_01088e24;
    uVar8 = *(undefined4 *)(lVar7 + 0x10);
  }
  else {
    uVar8 = 0;
  }
  *(undefined4 *)(param_2 + 0x150) = uVar8;
  if ((uVar6 & 1) == 0) {
    uVar11 = *(undefined8 *)(param_2 + 0x138);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    lVar7 = FUN_02020414(uVar11,*(undefined8 *)puVar1,*(undefined8 *)puVar2,0);
    if (lVar7 == 0) goto LAB_01088e24;
    uVar8 = *(undefined4 *)(lVar7 + 0x10);
  }
  else {
    uVar8 = 0;
  }
  *(undefined4 *)(param_2 + 0x154) = uVar8;
  if ((uVar5 & 1) == 0) {
    if (*(long *)(param_2 + 0x128) == 0) goto LAB_01088e24;
    iVar10 = *(int *)(*(long *)(param_2 + 0x128) + 0x10);
    if ((uVar6 & 1) != 0) goto LAB_01088d04;
LAB_01088ce4:
    if (*(long *)(param_2 + 0x138) == 0) goto LAB_01088e24;
    iVar9 = *(int *)(*(long *)(param_2 + 0x138) + 0x10);
  }
  else {
    iVar10 = 0;
    if ((uVar6 & 1) == 0) goto LAB_01088ce4;
LAB_01088d04:
    iVar9 = 0;
  }
  if (3 < iVar10) {
    if (*(long *)(param_2 + 0x128) == 0) goto LAB_01088e24;
    sVar4 = FUN_015fa29c(*(long *)(param_2 + 0x128),iVar10 + -1,0);
    if (sVar4 == 0x3e) {
      iVar10 = iVar10 + -3;
      do {
        if (*(long *)(param_2 + 0x128) == 0) goto LAB_01088e24;
        sVar4 = FUN_015fa29c(*(long *)(param_2 + 0x128),iVar10,0);
        if (sVar4 == 0x3c) {
          if (*(long *)(param_2 + 0x128) == 0) goto LAB_01088e24;
          sVar4 = FUN_015fa29c(*(long *)(param_2 + 0x128),iVar10 + 1,0);
          if (sVar4 != 0x2f) {
            *(int *)(param_2 + 0x150) = *(int *)(param_2 + 0x150) + 1;
          }
          break;
        }
        iVar10 = iVar10 + -1;
      } while (-1 < iVar10);
    }
  }
  if (3 < iVar9) {
    if (*(long *)(param_2 + 0x138) == 0) {
LAB_01088e24:
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    sVar4 = FUN_015fa29c(*(long *)(param_2 + 0x138),iVar9 + -1,0);
    if (sVar4 == 0x3e) {
      iVar9 = iVar9 + -3;
      do {
        if (*(long *)(param_2 + 0x138) == 0) goto LAB_01088e24;
        sVar4 = FUN_015fa29c(*(long *)(param_2 + 0x138),iVar9,0);
        if (sVar4 == 0x3c) {
          if (*(long *)(param_2 + 0x138) != 0) {
            sVar4 = FUN_015fa29c(*(long *)(param_2 + 0x138),iVar9 + 1,0);
            if (sVar4 == 0x2f) {
              return;
            }
            *(int *)(param_2 + 0x154) = *(int *)(param_2 + 0x154) + 1;
            return;
          }
          goto LAB_01088e24;
        }
        iVar9 = iVar9 + -1;
      } while (-1 < iVar9);
    }
  }
  return;
}


