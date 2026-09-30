/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Flex$$UpdateAnchoredPosition
ENTRY_POINT: 052da810
PROGRAM: Untangled-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Flex__UpdateAnchoredPosition
               (undefined1 param_1 [16],float param_2,float param_3)

{
  long unaff_x19;
  long lVar1;
  long unaff_x21;
  float fVar2;
  undefined1 auVar3 [16];
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined4 uStack0000000000000020;
  float fStack0000000000000024;
  float in_stack_00000028;
  
  if (*(long *)(unaff_x19 + 0x330) != 0) {
    FUN_067455d4(*(long *)(unaff_x19 + 0x330),1,0);
    if (*(long *)(unaff_x19 + 0x330) != 0) {
      uStack0000000000000020 = FUN_06745acc(*(long *)(unaff_x19 + 0x330),0);
      fStack0000000000000024 = param_2;
      in_stack_00000028 = param_3;
      if (*(long *)(unaff_x19 + 0x280) != 0) {
        fVar2 = (float)FUN_052c2ae0(*(long *)(unaff_x19 + 0x280),0);
        if (DAT_071babf8 == '\0') {
          FUN_02f07e70(PTR_DAT_06d03010);
          DAT_071babf8 = '\x01';
        }
        if (*(int *)(*(long *)PTR_DAT_06d03010 + 0xe0) == 0) {
          thunk_FUN_02f12b58();
        }
        FUN_0673b9e8(SQRT(param_3 * param_3 + fVar2 * fVar2 + param_2 * param_2) * 0.5,
                     &stack0x00000020,0);
        if (*(long *)(unaff_x19 + 0x330) != 0) {
          FUN_06745b6c(uStack0000000000000020,fStack0000000000000024,in_stack_00000028,
                       *(long *)(unaff_x19 + 0x330),0);
          lVar1 = *(long *)(unaff_x19 + 0x330);
          FUN_052cfe78();
          if (lVar1 != 0) {
            FUN_067441f8(lVar1,0);
            if (*(long *)(unaff_x19 + 0x330) != 0) {
              _in_stack_00000010 = FUN_06746174(*(long *)(unaff_x19 + 0x330),0);
              FUN_0673ba30(0,&stack0x00000010,0);
              if (*(long *)(unaff_x19 + 0x280) != 0) {
                FUN_0673ba38(*(undefined4 *)(*(long *)(unaff_x19 + 0x280) + 0x94),&stack0x00000010,0
                            );
                FUN_0673ba40(*(undefined4 *)(unaff_x21 + 0x9e8),&stack0x00000010,0);
                if (*(long *)(unaff_x19 + 0x330) != 0) {
                  FUN_0674620c(*(long *)(unaff_x19 + 0x330),in_stack_00000010,in_stack_00000018,0);
                  lVar1 = *(long *)(unaff_x19 + 0x280);
                  if (lVar1 != 0) {
                    if ((*(char *)(lVar1 + 0x9e) == '\0') && (*(char *)(lVar1 + 0x9f) == '\0')) {
                      return;
                    }
                    if (*(long *)(unaff_x19 + 0x330) != 0) {
                      FUN_06745754(*(long *)(unaff_x19 + 0x330),2,0);
                      if (*(long *)(unaff_x19 + 0x330) != 0) {
                        auVar3 = FUN_06746748(*(long *)(unaff_x19 + 0x330),0);
                        FUN_0673ba30(0);
                        if (*(long *)(unaff_x19 + 0x280) != 0) {
                          FUN_0673ba38(*(undefined4 *)(*(long *)(unaff_x19 + 0x280) + 0x98));
                          FUN_0673ba40(*(undefined4 *)(unaff_x21 + 0x9e8));
                          if (*(long *)(unaff_x19 + 0x330) != 0) {
                            FUN_067467e0(*(long *)(unaff_x19 + 0x330),auVar3._0_8_,auVar3._8_8_,0);
                            return;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


