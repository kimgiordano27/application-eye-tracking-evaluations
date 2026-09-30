/*
FUNCTION_NAME: FUN_06a514e8
ENTRY_POINT: 06a514e8
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_9;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_3
*/


void FUN_06a514e8(long param_1,long *param_2,long *param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 local_48;
  
  if ((DAT_073aacdd & 1) == 0) {
    FUN_02fe925c(Unity_VisualScripting_FullSerializer_fsForwardConverter_TypeInfo);
    DAT_073aacdd = 1;
  }
  lVar5 = param_1;
  if (param_1 != 0) {
    do {
      lVar5 = *(long *)(lVar5 + 0x90);
      if (lVar5 == 0) goto LAB_06a51608;
    } while (*(long *)(lVar5 + 200) == 0);
    local_48 = *(undefined8 *)(lVar5 + 0x378);
    lVar2 = FUN_06b0d010(&local_48,0);
    local_48 = *(undefined8 *)(param_1 + 0x378);
    lVar3 = FUN_06b0d010(&local_48,0);
    puVar1 = Unity_VisualScripting_FullSerializer_fsForwardConverter_TypeInfo;
    if (lVar2 == lVar3) {
      *param_3 = *(long *)(lVar5 + 200);
      thunk_FUN_03048534(param_3);
      if (*param_3 != 0) {
        *param_2 = *(long *)(*param_3 + 0x20);
        goto UnityEngine_UI_Slider__get_value;
      }
    }
    else {
      if (*(int *)(*(long *)Unity_VisualScripting_FullSerializer_fsForwardConverter_TypeInfo + 0xe0)
          == 0) {
        thunk_FUN_02fdcff0();
      }
      uVar4 = FUN_06a4f6dc(param_1,lVar5);
      if ((uVar4 & 1) == 0) {
LAB_06a51608:
        *param_2 = *(long *)(param_1 + 0xd0);
        thunk_FUN_03048534(param_2);
      }
      else {
        do {
          lVar5 = FUN_06a414b8(lVar5 + 0x88,0);
          *param_2 = lVar5;
          thunk_FUN_03048534(param_2,lVar5);
          lVar2 = *param_2;
          if (lVar2 == 0) goto LAB_06a51670;
          lVar5 = *(long *)(lVar2 + 0x28);
          if (lVar5 == 0) goto LAB_06a51620;
          if (lVar5 == 0) goto LAB_06a51670;
          lVar5 = *(long *)(lVar5 + 0x18);
          if (lVar5 == 0) goto LAB_06a51620;
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_02fdcff0();
          }
          uVar4 = FUN_06a4f6dc(param_1,lVar5);
        } while ((uVar4 & 1) != 0);
      }
      lVar2 = *param_2;
      if (lVar2 != 0) {
LAB_06a51620:
        *param_3 = *(long *)(lVar2 + 0x28);
        param_2 = param_3;
UnityEngine_UI_Slider__get_value:
        thunk_FUN_03048534(param_2);
        return;
      }
    }
  }
LAB_06a51670:
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


