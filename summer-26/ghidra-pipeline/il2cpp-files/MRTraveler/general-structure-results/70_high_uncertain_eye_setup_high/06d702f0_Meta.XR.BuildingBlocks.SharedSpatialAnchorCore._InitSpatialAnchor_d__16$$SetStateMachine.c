/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.SharedSpatialAnchorCore.<InitSpatialAnchor>d__16$$SetStateMachine
ENTRY_POINT: 06d702f0
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_BuildingBlocks_SharedSpatialAnchorCore_<InitSpatialAnchor>d__16__SetStateMachine
               (pointer_____offset_0x10___ *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *unaff_x19;
  int unaff_w20;
  long unaff_x21;
  undefined8 unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  int unaff_w27;
  int unaff_w28;
  undefined8 unaff_x29;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  long *in_stack_00000028;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  long in_stack_00000050;
  long in_stack_00000058;
  
  auVar6._8_8_ = unaff_x23;
  auVar6._0_8_ = unaff_x29;
  do {
    if (*(int *)(*(long *)param_1[0x1e0] + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    auVar7 = FUN_085decd4(in_stack_00000050,0,0);
    if ((auVar7._0_8_ & 1) != 0) {
      lVar3 = *unaff_x19;
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
        lVar3 = *unaff_x19;
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
      if (lVar3 == 0) {
LAB_06d7040c:
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      if (*(uint *)(lVar3 + 0x18) <= auVar6._8_4_) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb38();
      }
      if (in_stack_00000050 == 0) goto LAB_06d7040c;
      auVar7 = UnityEngine_UI_Button_<OnFinishSubmit>d__9__MoveNext
                         (in_stack_00000050,
                          *(undefined4 *)(lVar3 + ((auVar6._8_8_ << 0x20) >> 0x1e) + 0x20),0);
      unaff_x24 = in_stack_00000028;
    }
    if (unaff_x21 == 0) {
      FUN_06d74d64(auVar7._0_8_,auVar7._8_8_,in_stack_00000038,in_stack_00000040,in_stack_00000048,
                   in_stack_00000058,unaff_w20,auVar6._0_8_);
    }
    else {
      FUN_06d74e94(auVar7._0_8_,auVar7._8_8_,in_stack_00000038,in_stack_00000040,in_stack_00000048,
                   in_stack_00000058,unaff_x21,unaff_w20);
    }
    unaff_w20 = unaff_w20 + 1;
    do {
      do {
        unaff_w28 = unaff_w28 + 1;
        if (unaff_w28 == unaff_w27) {
          return;
        }
        lVar3 = *unaff_x25;
        uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar4 != 0) {
          piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar5 + -2) == *unaff_x26) {
              puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
              goto LAB_06d70280;
            }
            uVar4 = uVar4 - 1;
            piVar5 = piVar5 + 4;
          } while (uVar4 != 0);
        }
        puVar1 = (undefined8 *)FUN_03cf1348();
LAB_06d70280:
        uVar2 = (*(code *)*puVar1)();
        auVar6 = FUN_06d74c8c(unaff_x24,uVar2);
      } while ((auVar6._0_8_ == 0) || (*(char *)(auVar6._0_8_ + 0x50) == '\0'));
      unaff_x21 = FUN_07454b34(unaff_x24,auVar6._8_8_,0);
      (**(code **)(*unaff_x24 + 600))
                (unaff_x24,auVar6._8_8_ & 0xffffffff,*(undefined8 *)(*unaff_x24 + 0x260));
      if (in_stack_00000058 == 0) goto LAB_06d7040c;
    } while (*(int *)(in_stack_00000058 + 0x18) <= unaff_w20);
    param_1 = &char32_t_const*::typeinfo;
  } while( true );
}


