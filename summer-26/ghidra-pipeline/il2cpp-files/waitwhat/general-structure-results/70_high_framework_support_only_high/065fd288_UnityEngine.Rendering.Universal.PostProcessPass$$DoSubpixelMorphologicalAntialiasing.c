/*
FUNCTION_NAME: UnityEngine.Rendering.Universal.PostProcessPass$$DoSubpixelMorphologicalAntialiasing
ENTRY_POINT: 065fd288
PROGRAM: waitwhat-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;telemetry_or_network_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_2
*/


void UnityEngine_Rendering_Universal_PostProcessPass__DoSubpixelMorphologicalAntialiasing
               (long param_1,ulong param_2,undefined8 param_3)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 *unaff_x22;
  undefined8 uVar4;
  long unaff_x24;
  undefined8 uVar5;
  undefined8 unaff_x26;
  ulong uVar6;
  long *unaff_x27;
  int iVar7;
  undefined1 auVar8 [16];
  long in_stack_00000030;
  long in_stack_00000038;
  undefined8 in_stack_00000040;
  int iStack0000000000000048;
  int iStack000000000000004c;
  undefined8 *in_stack_00000058;
  ulong in_stack_00000060;
  undefined8 in_stack_00000068;
  
  auVar8._8_8_ = in_stack_00000068;
  auVar8._0_8_ = unaff_x26;
  while( true ) {
    uVar6 = auVar8._0_8_;
    System_Collections_Generic_ArraySortHelper<OVRPlugin_Qpl_Annotation_Builder_Entry>__DownHeap
              (param_1,param_2,param_3);
    iVar3 = 0;
    do {
      uVar5 = *unaff_x22;
      uVar4 = *(undefined8 *)(unaff_x24 + 0x18);
      iVar1 = *(int *)(unaff_x22 + 0xb) - auVar8._0_4_;
      if (0x1ff < iVar1) {
        iVar1 = 0x200;
      }
      if (*(int *)(*unaff_x27 + 0xe4) == 0) {
        thunk_FUN_031e5338();
      }
      iVar7 = auVar8._8_4_;
      FUN_06999830(uVar5,iVar7 + iVar3,0,uVar6 & 0xffffffff,in_stack_00000060 & 0xffffffff,iVar1,4,
                   uVar4);
      FUN_06999830(unaff_x22[1],iVar7 + iVar3,0,uVar6 & 0xffffffff,in_stack_00000060 & 0xffffffff,
                   iVar1,4,*(undefined8 *)(unaff_x24 + 0x20));
      FUN_06999830(unaff_x22[2],iVar7 + iVar3,0,uVar6 & 0xffffffff,in_stack_00000060 & 0xffffffff,
                   iVar1,4,*(undefined8 *)(unaff_x24 + 0x28));
      unaff_x27 = (long *)PTR_DAT_070f2fb0;
      if (*(char *)(unaff_x24 + 0xa0) != '\0') {
        uVar5 = unaff_x22[8];
        uVar4 = *(undefined8 *)(unaff_x24 + 0x58);
        if (*(int *)(*(long *)PTR_DAT_070f2fb0 + 0xe4) == 0) {
          thunk_FUN_031e5338();
        }
        FUN_06999830(uVar5,iVar7 + iVar3,0,uVar6 & 0xffffffff,in_stack_00000060,iVar1,4,uVar4);
        unaff_x22 = in_stack_00000058;
      }
      if (*(char *)(unaff_x24 + 0xa3) != '\0') {
        uVar5 = unaff_x22[9];
        uVar4 = *(undefined8 *)(unaff_x24 + 0x60);
        if (*(int *)(*unaff_x27 + 0xe4) == 0) {
          thunk_FUN_031e5338();
        }
        FUN_06999830(uVar5,iVar7 + iVar3,0,uVar6 & 0xffffffff,in_stack_00000060,iVar1,4,uVar4);
        unaff_x22 = in_stack_00000058;
        if (*(char *)(unaff_x24 + 0xa4) != '\0') {
          uVar5 = in_stack_00000058[10];
          uVar4 = *(undefined8 *)(unaff_x24 + 0x68);
          if (*(int *)(*unaff_x27 + 0xe4) == 0) {
            thunk_FUN_031e5338();
          }
          FUN_06999830(uVar5,iVar7 + iVar3,0,uVar6 & 0xffffffff,in_stack_00000060,iVar1,4,uVar4);
        }
      }
      if (iStack000000000000004c == 2) {
        uVar4 = unaff_x22[3];
        uVar5 = *(undefined8 *)(unaff_x24 + 0x30);
        if (*(int *)(*unaff_x27 + 0xe4) == 0) {
          thunk_FUN_031e5338();
        }
        FUN_06999830(uVar4,iVar7 + iVar3,0,uVar6 & 0xffffffff,in_stack_00000060 & 0xffffffff,iVar1,4
                     ,uVar5);
        FUN_06999830(unaff_x22[4],iVar7 + iVar3,0,uVar6 & 0xffffffff,in_stack_00000060 & 0xffffffff,
                     iVar1,4,*(undefined8 *)(unaff_x24 + 0x38));
        FUN_06999830(unaff_x22[5],iVar7 + iVar3,0,uVar6 & 0xffffffff,in_stack_00000060 & 0xffffffff,
                     iVar1,4,*(undefined8 *)(unaff_x24 + 0x40));
        FUN_06999830(unaff_x22[6],iVar7 + iVar3,0,uVar6 & 0xffffffff,in_stack_00000060 & 0xffffffff,
                     iVar1,4,*(undefined8 *)(unaff_x24 + 0x48));
        unaff_x27 = (long *)PTR_DAT_070f2fb0;
      }
      if (*(char *)(unaff_x24 + 0xa1) != '\0') {
        uVar5 = unaff_x22[7];
        uVar4 = *(undefined8 *)(unaff_x24 + 0x50);
        if (*(int *)(*unaff_x27 + 0xe4) == 0) {
          thunk_FUN_031e5338();
        }
        FUN_06999830(uVar5,iVar7 + iVar3,0,uVar6 & 0xffffffff,in_stack_00000060,iVar1,4,uVar4);
        unaff_x22 = in_stack_00000058;
      }
      puVar2 = UnityEngine_UIElements_BaseTreeView_TypeInfo;
      iVar3 = iVar3 + 1;
    } while (iVar3 != 4);
    iStack0000000000000048 = iStack0000000000000048 + 1;
    if (*(int *)(in_stack_00000030 + 0x18) <= iStack0000000000000048) break;
    auVar8 = System_Collections_Generic_ArraySortHelper<OVRPlugin_Qpl_Annotation_Builder_Entry>__DownHeap
                       (in_stack_00000030,iStack0000000000000048,
                        *(undefined8 *)UnityEngine_UIElements_BaseTreeView_TypeInfo);
    if (in_stack_00000038 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    in_stack_00000060 = auVar8._0_8_ >> 0x20;
    param_3 = *(undefined8 *)puVar2;
    param_2 = (ulong)(uint)(iStack0000000000000048 + in_stack_00000040._4_4_);
    param_1 = in_stack_00000038;
  }
  return;
}


