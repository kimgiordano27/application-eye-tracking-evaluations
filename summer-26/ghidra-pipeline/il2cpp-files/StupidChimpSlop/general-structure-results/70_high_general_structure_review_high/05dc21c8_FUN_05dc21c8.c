/*
FUNCTION_NAME: FUN_05dc21c8
ENTRY_POINT: 05dc21c8
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_5;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void FUN_05dc21c8(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((DAT_06a584bb & 1) == 0) {
    FUN_02d4dc40(Method_UnityEngine_UIElements_ScrollView_OnVerticalSliderViewDataRestored__);
    FUN_02d4dc40(Method_UnityEngine_UIElements_ScrollView_PostPointerUpAnimation__);
    FUN_02d4dc40(Method_System_ComponentModel_TypeDescriptor_GetAssociation__);
    FUN_02d4dc40(Method_System_ComponentModel_TypeDescriptor_GetDescriptor__);
    FUN_02d4dc40(Method_UnityEngine_UIElements_ScrollView_UpdateElasticBehaviour__);
    DAT_06a584bb = 1;
  }
  FUN_05dbfdfc(param_1,param_2);
  puVar1 = Method_System_ComponentModel_TypeDescriptor_GetAssociation__;
  if (param_2 != 0) {
    lVar5 = *(long *)(param_2 + 0x10);
    uVar3 = thunk_FUN_02d8a638(*(undefined8 *)
                                Method_UnityEngine_UIElements_ScrollView_OnVerticalSliderViewDataRestored__
                              );
    FUN_04d28f90(uVar3,param_1,*(undefined8 *)puVar1,0);
    puVar2 = Method_System_ComponentModel_TypeDescriptor_GetDescriptor__;
    puVar1 = Method_UnityEngine_UIElements_ScrollView_PostPointerUpAnimation__;
    if (lVar5 != 0) {
      FUN_05d57748(lVar5,uVar3,0);
      lVar5 = *(long *)(param_2 + 0x10);
      uVar3 = thunk_FUN_02d8a638(*(undefined8 *)puVar1);
      FUN_04d28f90(uVar3,param_1,*(undefined8 *)puVar2,0);
      if (lVar5 != 0) {
        FUN_05d578a8(lVar5,uVar3,0);
        if (*(long *)(param_1 + 0x288) != 0) {
          *(undefined8 *)(*(long *)(param_1 + 0x288) + 0x20) = *(undefined8 *)(param_2 + 0x10);
          thunk_FUN_02dc1ef0();
          if (*(char *)(param_1 + 0x298) != '\0') {
            return;
          }
          if (*(long *)(param_1 + 0x288) != 0) {
            FUN_05d7d584(*(long *)(param_1 + 0x288),0);
            uVar3 = *(undefined8 *)(param_2 + 0x10);
            uVar4 = *(undefined8 *)(param_1 + 0x278);
            if (*(int *)(*(long *)Method_UnityEngine_UIElements_ScrollView_UpdateElasticBehaviour__
                        + 0xe4) == 0) {
              thunk_FUN_02dabd98();
            }
            FUN_05d5ded0(uVar3,uVar4,0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d4dee8();
}


