/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.ControllerButtonsMapper$$set_ButtonClickActions
ENTRY_POINT: 05178d04
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_7;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_BuildingBlocks_ControllerButtonsMapper__set_ButtonClickActions(long param_1)

{
  undefined4 uVar1;
  ushort uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *unaff_x19;
  int unaff_w20;
  int iVar7;
  long unaff_x21;
  long unaff_x22;
  code *pcVar8;
  undefined8 uVar9;
  int unaff_w24;
  undefined8 unaff_x25;
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  long in_stack_00000020;
  long in_stack_00000028;
  
  do {
    param_1 = FUN_02dcfd18(param_1);
    uVar2 = *(ushort *)(*(long *)(unaff_x21 + 0x20) + 0x135);
    lVar4 = *(long *)(unaff_x21 + 0x20);
    iVar7 = unaff_w20;
    do {
      pcVar8 = (code *)**(undefined8 **)(*(long *)(param_1 + 0xc0) + 0x38);
      if ((uVar2 & 1) == 0) {
        lVar4 = FUN_02dcfd18(lVar4);
      }
      iVar3 = (*pcVar8)(unaff_x22,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x38));
      lVar4 = *unaff_x19;
      if (iVar3 + -1 <= unaff_w24) {
        if ((lVar4 != 0) && (lVar4 = *(long *)(lVar4 + 0x18), lVar4 != 0)) {
          lVar6 = *(long *)(unaff_x21 + 0x20);
          uVar2 = *(ushort *)(lVar6 + 0x135);
          lVar5 = lVar6;
          if ((uVar2 & 1) == 0) {
            lVar6 = FUN_02dcfd18(lVar6);
            uVar2 = *(ushort *)(*(long *)(unaff_x21 + 0x20) + 0x135);
            lVar5 = *(long *)(unaff_x21 + 0x20);
          }
          pcVar8 = (code *)**(undefined8 **)(*(long *)(lVar6 + 0xc0) + 0x38);
          if ((uVar2 & 1) == 0) {
            lVar5 = FUN_02dcfd18(lVar5);
          }
          iVar3 = (*pcVar8)(lVar4,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x38));
          lVar4 = *unaff_x19;
          *(int *)((long)unaff_x19 + 0x1c) = iVar3 + -1;
          if (lVar4 != 0) {
            uVar1 = *(undefined4 *)(lVar4 + 0x30);
            *(int *)(unaff_x19 + 3) = iVar7;
            *(undefined4 *)(unaff_x19 + 4) = uVar1;
            in_stack_00000028 = *(long *)(lVar4 + 0x28);
            in_stack_00000020 = *(long *)(lVar4 + 0x20);
LAB_05178f6c:
            unaff_x19[2] = in_stack_00000028;
            unaff_x19[1] = in_stack_00000020;
            return;
          }
        }
LAB_05178e54:
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      if ((lVar4 == 0) || (lVar4 = *(long *)(lVar4 + 0x18), lVar4 == 0)) goto LAB_05178e54;
      lVar6 = *(long *)(unaff_x21 + 0x20);
      uVar2 = *(ushort *)(lVar6 + 0x135);
      lVar5 = lVar6;
      if ((uVar2 & 1) == 0) {
        lVar6 = FUN_02dcfd18(lVar6);
        uVar2 = *(ushort *)(*(long *)(unaff_x21 + 0x20) + 0x135);
        lVar5 = *(long *)(unaff_x21 + 0x20);
      }
      uVar9 = **(undefined8 **)(*(long *)(lVar6 + 0xc0) + 0x18);
      if ((uVar2 & 1) == 0) {
        lVar5 = FUN_02dcfd18(lVar5);
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x18);
      in_stack_00000010 = unaff_x25;
      in_stack_00000018._4_4_ = unaff_w24;
      (**(code **)(lVar5 + 0x10))(uVar9,lVar5,lVar4,&stack0x00000010,&stack0x00000020);
      lVar5 = *(long *)(unaff_x21 + 0x20);
      uVar2 = *(ushort *)(lVar5 + 0x135);
      lVar4 = lVar5;
      if ((uVar2 & 1) == 0) {
        lVar5 = FUN_02dcfd18(lVar5);
        uVar2 = *(ushort *)(*(long *)(unaff_x21 + 0x20) + 0x135);
        lVar4 = *(long *)(unaff_x21 + 0x20);
      }
      pcVar8 = (code *)**(undefined8 **)(*(long *)(lVar5 + 0xc0) + 0x28);
      if ((uVar2 & 1) == 0) {
        FUN_02dcfd18(lVar4);
      }
      iVar3 = (*pcVar8)();
      unaff_w20 = iVar7 - iVar3;
      *(int *)(unaff_x19 + 4) = iVar3;
      if (iVar7 < iVar3) {
        *(int *)(unaff_x19 + 3) = iVar7;
        *(int *)((long)unaff_x19 + 0x1c) = unaff_w24;
        if ((*unaff_x19 != 0) && (lVar4 = *(long *)(*unaff_x19 + 0x18), lVar4 != 0)) {
          lVar6 = *(long *)(unaff_x21 + 0x20);
          uVar2 = *(ushort *)(lVar6 + 0x135);
          lVar5 = lVar6;
          if ((uVar2 & 1) == 0) {
            lVar6 = FUN_02dcfd18(lVar6);
            uVar2 = *(ushort *)(*(long *)(unaff_x21 + 0x20) + 0x135);
            lVar5 = *(long *)(unaff_x21 + 0x20);
          }
          uVar9 = **(undefined8 **)(*(long *)(lVar6 + 0xc0) + 0x18);
          if ((uVar2 & 1) == 0) {
            lVar5 = FUN_02dcfd18(lVar5);
          }
          lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x18);
          in_stack_00000010 = (long)&stack0x00000018 + 4;
          in_stack_00000018._4_4_ = unaff_w24;
          (**(code **)(lVar5 + 0x10))(uVar9,lVar5,lVar4,&stack0x00000010,&stack0x00000020);
          goto LAB_05178f6c;
        }
        goto LAB_05178e54;
      }
      unaff_w24 = unaff_w24 + 1;
      if ((*unaff_x19 == 0) || (unaff_x22 = *(long *)(*unaff_x19 + 0x18), unaff_x22 == 0))
      goto LAB_05178e54;
      param_1 = *(long *)(unaff_x21 + 0x20);
      uVar2 = *(ushort *)(param_1 + 0x135);
      lVar4 = param_1;
      iVar7 = unaff_w20;
    } while ((uVar2 & 1) != 0);
  } while( true );
}


