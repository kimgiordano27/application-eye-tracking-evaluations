/*
FUNCTION_NAME: UnityEngine.UIElements.FocusController$$ProcessPendingFocusChange
ENTRY_POINT: 07e42480
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 86
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_8;ui_or_gameplay_sink_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_4
*/


void UnityEngine_UIElements_FocusController__ProcessPendingFocusChange
               (undefined1 param_1 [16],float param_2)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  int *piVar10;
  long unaff_x19;
  long unaff_x20;
  float fVar11;
  undefined4 uVar12;
  float unaff_s10;
  float unaff_s11;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  
  uVar12 = *(undefined4 *)(unaff_x20 + 0xa8);
  fVar11 = (float)FUN_07e06150();
  if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_07e426cc;
  FUN_07e06150(*(long *)(unaff_x19 + 0x10),0);
  if ((*(long *)(unaff_x19 + 0x10) == 0) ||
     (lVar5 = *(long *)(*(long *)(unaff_x19 + 0x10) + 0x2e8), lVar5 == 0)) goto LAB_07e426cc;
  uVar4 = FUN_07d93c18(unaff_s10 - fVar11,unaff_s11 - param_2,uVar12,lVar5,1,0);
  if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_07e426cc;
  plVar6 = (long *)FUN_07e05018(*(long *)(unaff_x19 + 0x10),0);
  if (plVar6 == (long *)0x0) {
LAB_07e42514:
    plVar6 = (long *)0x0;
  }
  else {
    lVar5 = *plVar6;
    bVar1 = *(byte *)(*(long *)PTR_DAT_08493d50 + 0x130);
    if ((*(byte *)(lVar5 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(lVar5 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_08493d50))
    goto LAB_07e42514;
    plVar6 = (long *)(**(code **)(lVar5 + 0x398))(plVar6,*(undefined8 *)(lVar5 + 0x3a0));
  }
  if (-1 < (int)uVar4) {
    lVar5 = FUN_07e41d60();
    if ((lVar5 == 0) || (lVar5 = *(long *)(lVar5 + 0x40), lVar5 == 0)) goto LAB_07e426cc;
    if (*(uint *)(lVar5 + 0x18) <= uVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c8();
    }
    if (*(int *)(lVar5 + (ulong)uVar4 * 0x30 + 0x20) == 0x26afb9) {
      if (*(char *)(unaff_x19 + 0x58) != '\0') {
        return;
      }
      *(undefined1 *)(unaff_x19 + 0x58) = 1;
      if (plVar6 == (long *)0x0) {
        return;
      }
      lVar5 = *plVar6;
      uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)OVRPlugin_TextureRectMatrixf_TypeInfo) {
            puVar7 = (undefined8 *)(lVar5 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_07e4269c;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar7 = (undefined8 *)FUN_03ac43c4(plVar6,*(long *)OVRPlugin_TextureRectMatrixf_TypeInfo,0);
LAB_07e4269c:
      in_stack_00000040 = DAT_015c5128;
      in_stack_00000038 = 0;
      in_stack_00000030 = 0;
      (*(code *)*puVar7)(plVar6,&stack0x00000030,puVar7[1]);
      return;
    }
  }
  if (*(char *)(unaff_x19 + 0x58) != '\0') {
    if (plVar6 != (long *)0x0) {
      if (*(long *)(unaff_x19 + 0x10) == 0) {
LAB_07e426cc:
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      uVar8 = FUN_07dfdfd8(*(long *)(unaff_x19 + 0x10),0);
      FUN_07f6d914(&stack0x00000018,uVar8,0);
      uVar3 = in_stack_00000028;
      uVar2 = in_stack_00000020;
      uVar8 = in_stack_00000018;
      lVar5 = *plVar6;
      uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)OVRPlugin_TextureRectMatrixf_TypeInfo) {
            puVar7 = (undefined8 *)(lVar5 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_07e42650;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar7 = (undefined8 *)FUN_03ac43c4(plVar6,*(long *)OVRPlugin_TextureRectMatrixf_TypeInfo,0);
LAB_07e42650:
      in_stack_00000038 = uVar2;
      in_stack_00000030 = uVar8;
      in_stack_00000040 = uVar3;
      (*(code *)*puVar7)(plVar6,&stack0x00000030,puVar7[1]);
    }
    *(undefined1 *)(unaff_x19 + 0x58) = 0;
  }
  return;
}


