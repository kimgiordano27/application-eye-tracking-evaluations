/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Utils$$LerpPosition
ENTRY_POINT: 0560babc
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Utils__LerpPosition
               (undefined1 param_1 [16],long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  undefined8 *unaff_x23;
  undefined8 uVar7;
  long *unaff_x27;
  code *pcVar8;
  
  uVar7 = param_1._8_8_;
  uVar6 = param_1._0_8_;
  unaff_x23[0xf] = uVar7;
  unaff_x23[0xe] = uVar6;
  unaff_x23[9] = uVar7;
  unaff_x23[8] = uVar6;
  unaff_x23[0xb] = uVar7;
  unaff_x23[10] = uVar6;
  unaff_x23[5] = uVar7;
  unaff_x23[4] = uVar6;
  unaff_x23[7] = uVar7;
  unaff_x23[6] = uVar6;
  unaff_x23[1] = uVar7;
  *unaff_x23 = uVar6;
  unaff_x23[3] = uVar7;
  unaff_x23[2] = uVar6;
  if (*(int *)(param_2 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  lVar4 = FUN_06b26948(0);
  puVar2 = PTR_DAT_07286300;
  puVar1 = PTR_DAT_072862f8;
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_032d5ee8();
  }
  FUN_04120768(&stack0x000000d8,lVar4,*(undefined8 *)PTR_DAT_07286310);
  memcpy(&stack0x000001c0,&stack0x000000d8,0x78);
  do {
    do {
      do {
        do {
          uVar5 = FUN_052ae1e0(&stack0x000001c0,*(undefined8 *)puVar2);
          if ((uVar5 & 1) == 0) {
            FUN_052ae1dc(&stack0x000001c0,*(undefined8 *)puVar1);
            return;
          }
          memcpy(&stack0x00000150,&stack0x000001d0,0x68);
          uVar5 = UnityEngine_GUISkin__get_verticalScrollbarThumb(&stack0x00000150,0);
        } while ((uVar5 & 1) == 0);
        uVar3 = FUN_06b26358(&stack0x00000150,0);
        if (*(int *)(*unaff_x27 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
        }
        uVar5 = FUN_06b268c8(uVar3,0);
      } while ((uVar5 & 1) != 0);
      memcpy(&stack0x000000d8,&stack0x00000150,0x68);
      if (*(int *)(*unaff_x27 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      memcpy(&stack0x00000070,&stack0x000000d8,0x68);
      uVar5 = FUN_06b29388(&stack0x00000070,0);
    } while ((uVar5 & 1) != 0);
    lVar4 = *(long *)(unaff_x22 + 0x38);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    if (*(int *)(lVar4 + 0x18) < 1) {
      memcpy(&stack0x00000008,&stack0x00000150,0x68);
      if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      pcVar8 = *(code **)(unaff_x21 + 0x18);
      uVar6 = *(undefined8 *)(unaff_x21 + 0x40);
      memcpy(&stack0x000000d8,&stack0x00000008,0x68);
      (*pcVar8)(uVar6,&stack0x000000d8,*(undefined8 *)(unaff_x21 + 0x28));
    }
    else {
      uVar6 = FUN_041e29a8(lVar4,*(int *)(lVar4 + 0x18) + -1,
                           *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x130));
      lVar4 = *(long *)(unaff_x22 + 0x38);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      FUN_041e4460(lVar4,*(int *)(lVar4 + 0x18) + -1,
                   *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x138));
      memcpy(&stack0x00000008,&stack0x00000150,0x68);
      if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      pcVar8 = *(code **)(unaff_x20 + 0x18);
      uVar7 = *(undefined8 *)(unaff_x20 + 0x40);
      memcpy(&stack0x000000d8,&stack0x00000008,0x68);
      (*pcVar8)(uVar7,uVar6,&stack0x000000d8,*(undefined8 *)(unaff_x20 + 0x28));
    }
    FUN_0560b598();
  } while( true );
}


