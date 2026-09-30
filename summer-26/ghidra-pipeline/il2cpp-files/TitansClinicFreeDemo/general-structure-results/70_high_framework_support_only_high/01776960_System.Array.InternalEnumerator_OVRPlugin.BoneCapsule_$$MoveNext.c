/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.BoneCapsule>$$MoveNext
ENTRY_POINT: 01776960
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_InternalEnumerator<OVRPlugin_BoneCapsule>__MoveNext(undefined8 param_1)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int in_w3;
  uint uVar5;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  char *pcVar6;
  int unaff_w23;
  uint unaff_w24;
  int unaff_w26;
  int unaff_w27;
  uint uVar7;
  undefined8 in_stack_00000008;
  
  do {
    uVar5 = (uint)param_1;
    uVar7 = unaff_w24 * 2;
    if ((int)uVar7 < unaff_w23) {
      uVar3 = uVar7 + in_w3;
      if ((uVar5 <= uVar3 - 1) || (uVar5 <= uVar3)) goto LAB_01776a94;
      if (unaff_x21 == 0) goto LAB_01776a98;
      cVar1 = *(char *)(unaff_x19 + (int)(uVar3 - 1) + 0x20);
      cVar2 = *(char *)(unaff_x19 + (int)uVar3 + 0x20);
      if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
        FUN_0122e748();
      }
      uVar3 = (**(code **)(unaff_x21 + 0x18))
                        (*(undefined8 *)(unaff_x21 + 0x40),cVar1 != '\0',cVar2 != '\0',
                         *(undefined8 *)(unaff_x21 + 0x28));
      uVar5 = (uint)*(undefined8 *)(unaff_x19 + 0x18);
      uVar7 = uVar7 | uVar3 >> 0x1f;
    }
    uVar3 = unaff_w26 + uVar7;
    if (uVar5 <= uVar3) goto LAB_01776a94;
    pcVar6 = (char *)(unaff_x19 + (int)uVar3 + 0x20);
    cVar1 = *pcVar6;
    if (unaff_x21 == 0) {
LAB_01776a98:
                    /* WARNING: Subroutine does not return */
      FUN_01230ca0();
    }
    if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
      FUN_0122e748();
    }
    iVar4 = (**(code **)(unaff_x21 + 0x18))
                      (*(undefined8 *)(unaff_x21 + 0x40),in_stack_00000008._4_4_ != 0,cVar1 != '\0',
                       *(undefined8 *)(unaff_x21 + 0x28));
    param_1 = *(undefined8 *)(unaff_x19 + 0x18);
    uVar5 = (uint)param_1;
    if (-1 < iVar4) {
      uVar3 = unaff_w26 + unaff_w24;
      goto LAB_01776a60;
    }
    if ((uVar5 <= uVar3) || (uVar5 <= unaff_w26 + unaff_w24)) goto LAB_01776a94;
    *(char *)(unaff_x19 + (int)(unaff_w26 + unaff_w24) + 0x20) = *pcVar6;
    unaff_w24 = uVar7;
    if (unaff_w27 < (int)uVar7) {
LAB_01776a60:
      if (uVar3 < uVar5) {
        *(char *)(unaff_x19 + (int)uVar3 + 0x20) = (char)((ulong)in_stack_00000008 >> 0x20);
        return;
      }
LAB_01776a94:
                    /* WARNING: Subroutine does not return */
      FUN_01230ca8();
    }
  } while( true );
}


