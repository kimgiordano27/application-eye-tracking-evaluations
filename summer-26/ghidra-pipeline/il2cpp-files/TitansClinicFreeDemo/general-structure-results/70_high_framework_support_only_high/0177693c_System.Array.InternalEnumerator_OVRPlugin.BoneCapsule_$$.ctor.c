/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.BoneCapsule>$$.ctor
ENTRY_POINT: 0177693c
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_InternalEnumerator<OVRPlugin_BoneCapsule>___ctor
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4,int param_5,
               long param_6,long param_7)

{
  int iVar1;
  char cVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int in_w9;
  long unaff_x19;
  char *pcVar7;
  uint unaff_w24;
  int unaff_w26;
  uint uVar8;
  uint unaff_w29;
  int iStack000000000000000c;
  
  uVar6 = (uint)param_1;
  iVar1 = param_4;
  if (param_4 < 0) {
    iVar1 = param_4 + 1;
  }
  iStack000000000000000c = in_w9;
  do {
    if (iVar1 >> 1 < (int)unaff_w24) {
LAB_01776a60:
      if (unaff_w29 < uVar6) {
        *(char *)(unaff_x19 + (int)unaff_w29 + 0x20) = (char)iStack000000000000000c;
        return;
      }
LAB_01776a94:
                    /* WARNING: Subroutine does not return */
      FUN_01230ca8();
    }
    uVar6 = (uint)param_1;
    uVar8 = unaff_w24 * 2;
    if ((int)uVar8 < param_4) {
      uVar4 = uVar8 + param_5;
      if ((uVar6 <= uVar4 - 1) || (uVar6 <= uVar4)) goto LAB_01776a94;
      if (param_6 == 0) goto LAB_01776a98;
      cVar2 = *(char *)(unaff_x19 + (int)(uVar4 - 1) + 0x20);
      cVar3 = *(char *)(unaff_x19 + (int)uVar4 + 0x20);
      if ((*(byte *)(*(long *)(param_7 + 0x20) + 0x135) & 1) == 0) {
        FUN_0122e748();
      }
      uVar4 = (**(code **)(param_6 + 0x18))
                        (*(undefined8 *)(param_6 + 0x40),cVar2 != '\0',cVar3 != '\0',
                         *(undefined8 *)(param_6 + 0x28));
      uVar6 = (uint)*(undefined8 *)(unaff_x19 + 0x18);
      uVar8 = uVar8 | uVar4 >> 0x1f;
    }
    unaff_w29 = unaff_w26 + uVar8;
    if (uVar6 <= unaff_w29) goto LAB_01776a94;
    pcVar7 = (char *)(unaff_x19 + (int)unaff_w29 + 0x20);
    cVar2 = *pcVar7;
    if (param_6 == 0) {
LAB_01776a98:
                    /* WARNING: Subroutine does not return */
      FUN_01230ca0();
    }
    if ((*(byte *)(*(long *)(param_7 + 0x20) + 0x135) & 1) == 0) {
      FUN_0122e748();
    }
    iVar5 = (**(code **)(param_6 + 0x18))
                      (*(undefined8 *)(param_6 + 0x40),iStack000000000000000c != 0,cVar2 != '\0',
                       *(undefined8 *)(param_6 + 0x28));
    param_1 = *(undefined8 *)(unaff_x19 + 0x18);
    uVar6 = (uint)param_1;
    if (-1 < iVar5) {
      unaff_w29 = unaff_w26 + unaff_w24;
      goto LAB_01776a60;
    }
    if ((uVar6 <= unaff_w29) || (uVar6 <= unaff_w26 + unaff_w24)) goto LAB_01776a94;
    *(char *)(unaff_x19 + (int)(unaff_w26 + unaff_w24) + 0x20) = *pcVar7;
    unaff_w24 = uVar8;
  } while( true );
}


