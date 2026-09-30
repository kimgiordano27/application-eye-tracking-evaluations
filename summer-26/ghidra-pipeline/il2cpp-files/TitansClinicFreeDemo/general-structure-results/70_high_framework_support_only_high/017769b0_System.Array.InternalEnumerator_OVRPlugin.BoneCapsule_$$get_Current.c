/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.BoneCapsule>$$get_Current
ENTRY_POINT: 017769b0
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_InternalEnumerator<OVRPlugin_BoneCapsule>__get_Current(void)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  uint unaff_w22;
  char *pcVar6;
  int unaff_w23;
  uint unaff_w24;
  uint unaff_w25;
  int unaff_w26;
  int unaff_w27;
  uint unaff_w28;
  uint uVar7;
  int iStack0000000000000008;
  int iStack000000000000000c;
  
  do {
    uVar2 = (**(code **)(unaff_x21 + 0x18))
                      (*(undefined8 *)(unaff_x21 + 0x40),unaff_w22 != 0,unaff_w25 != 0,
                       *(undefined8 *)(unaff_x21 + 0x28));
    uVar5 = *(undefined8 *)(unaff_x19 + 0x18);
    unaff_w28 = unaff_w28 | uVar2 >> 0x1f;
    uVar2 = unaff_w24;
    do {
      unaff_w24 = unaff_w28;
      uVar7 = unaff_w26 + unaff_w24;
      if ((uint)uVar5 <= uVar7) goto LAB_01776a94;
      pcVar6 = (char *)(unaff_x19 + (int)uVar7 + 0x20);
      cVar1 = *pcVar6;
      if (unaff_x21 == 0) goto LAB_01776a98;
      if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
        FUN_0122e748();
      }
      iVar3 = (**(code **)(unaff_x21 + 0x18))
                        (*(undefined8 *)(unaff_x21 + 0x40),iStack000000000000000c != 0,cVar1 != '\0'
                         ,*(undefined8 *)(unaff_x21 + 0x28));
      uVar5 = *(undefined8 *)(unaff_x19 + 0x18);
      uVar4 = (uint)uVar5;
      if (-1 < iVar3) {
        uVar7 = unaff_w26 + uVar2;
LAB_01776a60:
        if (uVar7 < uVar4) {
          *(char *)(unaff_x19 + (int)uVar7 + 0x20) = (char)((ulong)_iStack0000000000000008 >> 0x20);
          return;
        }
        goto LAB_01776a94;
      }
      if ((uVar4 <= uVar7) || (uVar4 <= unaff_w26 + uVar2)) goto LAB_01776a94;
      *(char *)(unaff_x19 + (int)(unaff_w26 + uVar2) + 0x20) = *pcVar6;
      if (unaff_w27 < (int)unaff_w24) goto LAB_01776a60;
      unaff_w28 = unaff_w24 * 2;
      uVar2 = unaff_w24;
    } while (unaff_w23 <= (int)unaff_w28);
    uVar2 = unaff_w28 + iStack0000000000000008;
    if ((uVar4 <= uVar2 - 1) || (uVar4 <= uVar2)) {
LAB_01776a94:
                    /* WARNING: Subroutine does not return */
      FUN_01230ca8();
    }
    if (unaff_x21 == 0) {
LAB_01776a98:
                    /* WARNING: Subroutine does not return */
      FUN_01230ca0();
    }
    unaff_w22 = (uint)*(byte *)(unaff_x19 + (int)(uVar2 - 1) + 0x20);
    unaff_w25 = (uint)*(byte *)(unaff_x19 + (int)uVar2 + 0x20);
    if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
      FUN_0122e748();
    }
  } while( true );
}


