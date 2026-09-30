/*
FUNCTION_NAME: UnityEngine.UIElements.MinMaxSlider$$ComputeValueFromKey
ENTRY_POINT: 07deec00
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_8;ui_or_gameplay_sink_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


void UnityEngine_UIElements_MinMaxSlider__ComputeValueFromKey(void)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 *puVar7;
  int *piVar8;
  undefined8 *unaff_x19;
  long unaff_x20;
  long *unaff_x22;
  long lVar9;
  long unaff_x24;
  undefined8 in_stack_00000000;
  undefined4 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  long in_stack_00000058;
  
  uVar3 = FUN_07dfdfd8();
  uVar1 = *(undefined4 *)unaff_x19;
  if (*(int *)(*unaff_x22 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  uVar4 = FUN_07eaa354(uVar1,0);
  if ((uVar4 & 1) == 0) {
LAB_07deedcc:
    if (*(long *)(unaff_x20 + 0x20) != 0) {
      uVar5 = FUN_07dfdfd8(*(long *)(unaff_x20 + 0x20),0);
      in_stack_00000028 = unaff_x19[1];
      in_stack_00000020 = *unaff_x19;
      in_stack_00000030 = unaff_x19[2];
      FUN_07f708b8(uVar5,&stack0x00000020,uVar3,0);
LAB_07deedfc:
      if (*(long *)(unaff_x24 + 0x28) == in_stack_00000058) {
        return;
      }
      goto LAB_07deee38;
    }
  }
  else if (*(long *)(unaff_x20 + 0x20) != 0) {
    uVar5 = FUN_07dfdfd8(*(long *)(unaff_x20 + 0x20),0);
    puVar2 = OVRPlugin_Media_TypeInfo;
    if (*(int *)(*(long *)OVRPlugin_Media_TypeInfo + 0xe4) == 0) {
      thunk_FUN_03ae8be4(*(long *)OVRPlugin_Media_TypeInfo);
    }
    FUN_07de46f4(uVar5);
    if (*(long *)(unaff_x20 + 0x20) != 0) {
      uVar5 = FUN_07dfdfd8(*(long *)(unaff_x20 + 0x20),0);
      uVar4 = FUN_07f69f88(uVar5,0);
      if ((uVar4 & 1) == 0) {
LAB_07deed48:
        if ((*(long *)(unaff_x20 + 0x20) != 0) &&
           (plVar6 = (long *)FUN_07e02864(*(long *)(unaff_x20 + 0x20),0), plVar6 != (long *)0x0)) {
          lVar9 = *plVar6;
          uVar1 = *(undefined4 *)unaff_x19;
          uVar4 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar4 != 0) {
            piVar8 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_084961e0) {
                puVar7 = (undefined8 *)(lVar9 + (long)(*piVar8 + 0x12) * 0x10 + 0x138);
                goto LAB_07deedbc;
              }
              uVar4 = uVar4 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar4 != 0);
          }
          puVar7 = (undefined8 *)FUN_03ac43c4(plVar6,*(long *)PTR_DAT_084961e0,0x12);
LAB_07deedbc:
          (*(code *)*puVar7)(plVar6,uVar1,puVar7[1]);
          goto LAB_07deedcc;
        }
      }
      else if (*(long *)(unaff_x20 + 0x20) != 0) {
        uVar4 = FUN_07e08834(*(long *)(unaff_x20 + 0x20),0);
        if ((uVar4 & 1) == 0) goto LAB_07deed48;
        if (*(long *)(unaff_x20 + 0x20) == 0) goto LAB_07deee24;
        uVar5 = FUN_07dfdfd8(*(long *)(unaff_x20 + 0x20),0);
        uVar1 = *(undefined4 *)unaff_x19;
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_03ae8be4(*(long *)puVar2);
        }
        uVar4 = FUN_07de49dc(uVar5,uVar1);
        if ((uVar4 & 1) == 0) goto LAB_07deed48;
        lVar9 = *(long *)(unaff_x20 + 0x20);
        if (lVar9 == 0) goto LAB_07deee24;
        uVar1 = *(undefined4 *)unaff_x19;
        uVar5 = FUN_07dfdfd8(lVar9,0);
        in_stack_00000048 = unaff_x19[1];
        in_stack_00000040 = *unaff_x19;
        in_stack_00000050 = unaff_x19[2];
        uVar4 = FUN_07f7da98(lVar9,uVar1,uVar5,&stack0x00000040,in_stack_00000000._4_4_,
                             in_stack_00000008,in_stack_00000010,0);
        if ((uVar4 & 1) == 0) goto LAB_07deedcc;
        goto LAB_07deedfc;
      }
    }
  }
LAB_07deee24:
  if (*(long *)(unaff_x24 + 0x28) == in_stack_00000058) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
LAB_07deee38:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


