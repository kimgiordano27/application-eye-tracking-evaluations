/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneDebugger$$ShowRoomDetailsDebugger
ENTRY_POINT: 01492fb8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8
Meta_XR_MRUtilityKit_SceneDebugger__ShowRoomDetailsDebugger
          (code *param_1,undefined8 param_2,long param_3,undefined8 param_4,undefined8 *param_5,
          undefined8 param_6)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  long *unaff_x19;
  long unaff_x20;
  long lVar7;
  uint uVar8;
  long lVar9;
  long *unaff_x23;
  long *unaff_x24;
  int unaff_w26;
  undefined8 in_stack_00000008;
  
  do {
    (*param_1)(param_2,param_3,param_4,param_5,param_6);
    do {
      *(int *)(unaff_x20 + 0x3c) = unaff_w26;
      uVar8 = 1;
      do {
        do {
          lVar7 = *unaff_x24;
          if (*(int *)(*unaff_x23 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar2 = FUN_02681b9c(lVar7,0,0);
          if ((uVar8 & uVar2) == 0) {
            lVar7 = *unaff_x24;
            if (*(int *)(*unaff_x23 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar6 = FUN_02681b9c(lVar7,0,0);
            if ((uVar6 & 1) == 0) {
              if (unaff_x19 == (long *)0x0) goto LAB_01493250;
            }
            else {
              if (unaff_x19 == (long *)0x0) goto LAB_01493250;
              uVar6 = (**(code **)(*unaff_x19 + 0x338))();
              if ((uVar6 & 1) != 0) {
                *(undefined8 *)(unaff_x20 + 0x18) = 0;
                *(undefined4 *)(unaff_x20 + 0x10) = 2;
                return 1;
              }
            }
            uVar6 = (**(code **)(*unaff_x19 + 0x338))();
            if ((uVar6 & 1) != 0) {
              (**(code **)(*unaff_x19 + 0x3b8))();
            }
            return 0;
          }
          if (unaff_x19 == (long *)0x0) goto LAB_01493250;
          iVar3 = (**(code **)(*unaff_x19 + 0x2b8))();
          if (iVar3 < *(int *)(unaff_x20 + 0x38)) {
            *(int *)(unaff_x20 + 0x40) = *(int *)(unaff_x20 + 0x40) + 1;
          }
          *(int *)(unaff_x20 + 0x38) = iVar3;
          if (*(long *)(unaff_x20 + 0x28) == 0) goto LAB_01493250;
          iVar5 = *(int *)(unaff_x20 + 0x40);
          iVar4 = FUN_02658e60(*(long *)(unaff_x20 + 0x28),0);
          lVar7 = *(long *)(unaff_x20 + 0x30);
          if (lVar7 == 0) goto LAB_01493250;
          iVar1 = *(int *)(unaff_x20 + 0x3c);
          uVar8 = 0;
          unaff_w26 = iVar1 + *(int *)(lVar7 + 0x18);
        } while (iVar3 + iVar4 * iVar5 <= unaff_w26);
        lVar9 = *unaff_x24;
        if (lVar9 == 0) goto LAB_01493250;
        iVar5 = FUN_02658e60(lVar9,0);
        iVar3 = 0;
        if (iVar5 != 0) {
          iVar3 = iVar1 / iVar5;
        }
        uVar6 = FUN_02658f14(lVar9,lVar7,iVar1 - iVar3 * iVar5,0);
        uVar8 = 1;
      } while ((uVar6 & 1) == 0);
      lVar7 = unaff_x19[0xb];
    } while (lVar7 == 0);
    if (lVar7 == 0) {
LAB_01493250:
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    param_4 = *(undefined8 *)(unaff_x20 + 0x30);
    in_stack_00000008 = 0;
    param_1 = *(code **)(lVar7 + 0x18);
    param_2 = *(undefined8 *)(lVar7 + 0x40);
    param_6 = *(undefined8 *)(lVar7 + 0x28);
    param_3 = (long)&stack0x00000008 + 4;
    param_5 = &stack0x00000008;
  } while( true );
}


