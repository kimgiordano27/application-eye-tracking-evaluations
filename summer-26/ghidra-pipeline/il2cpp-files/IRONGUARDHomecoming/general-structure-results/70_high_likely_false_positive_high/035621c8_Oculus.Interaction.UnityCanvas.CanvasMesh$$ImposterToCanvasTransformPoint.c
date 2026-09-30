/*
FUNCTION_NAME: Oculus.Interaction.UnityCanvas.CanvasMesh$$ImposterToCanvasTransformPoint
ENTRY_POINT: 035621c8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 74
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_9;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


undefined8 Oculus_Interaction_UnityCanvas_CanvasMesh__ImposterToCanvasTransformPoint(void)

{
  uint uVar1;
  uint uVar2;
  undefined2 uVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  int in_w8;
  long *unaff_x19;
  int *unaff_x20;
  long unaff_x22;
  int unaff_w23;
  long lVar7;
  long *unaff_x24;
  long lVar8;
  long lVar9;
  long *unaff_x27;
  uint uVar10;
  ulong unaff_x29;
  ulong in_stack_00000008;
  
  while( true ) {
    if (in_w8 == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar1 = unaff_w23 + 1;
    unaff_w23 = System_Globalization_TimeSpanFormat_FormatLiterals__get_Start();
    uVar10 = (uint)unaff_x29;
    if (unaff_w23 < 0) break;
    uVar4 = unaff_w23 - uVar1;
    if ((int)(*(uint *)(unaff_x19 + 1) - uVar4) <= (int)uVar10) {
      return 0;
    }
    if (uVar4 == 0) {
      *unaff_x20 = *unaff_x20 + -1;
    }
    else {
      uVar2 = uVar4 + uVar10;
      if (*(uint *)(unaff_x19 + 1) <= uVar2) {
LAB_0356233c:
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      uVar3 = *(undefined2 *)(*unaff_x19 + (long)(int)uVar2 * 2);
      if (*(int *)(*unaff_x27 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar6 = FUN_034f9bb4(uVar3,0);
      if ((uVar6 & 1) == 0) {
        return 0;
      }
      lVar8 = unaff_x19[3];
      lVar7 = *(long *)
               Method_Unity_VisualScripting_UnityOnButtonClickMessageListener_<Start>b__0_0__;
      if ((*(uint *)(unaff_x19 + 1) < uVar10) || (*(uint *)(unaff_x19 + 1) - uVar10 < uVar4)) {
        FUN_0358adfc(0);
      }
      lVar9 = *unaff_x19;
      if ((*(byte *)(*(long *)(lVar7 + 0x20) + 0x135) & 1) == 0) {
        FUN_01ecaf44();
      }
      if (DAT_04832727 == '\0') {
        thunk_FUN_01efb3a4(Method_System_Linq_Expressions_Expression_AddAssign__);
        DAT_04832727 = '\x01';
      }
      if ((*(uint *)(unaff_x22 + 0x10) < uVar1) || (*(uint *)(unaff_x22 + 0x10) - uVar1 < uVar4)) {
        FUN_0358ae74(0x18,0);
      }
      lVar7 = FUN_0340ce04();
      if (lVar8 == 0) goto LAB_03562340;
      iVar5 = FUN_03506fc8(lVar8,lVar9 + (long)(int)uVar10 * 2,uVar4,lVar7 + (long)(int)uVar1 * 2,
                           uVar4,0);
      if (iVar5 != 0) {
        return 0;
      }
      unaff_x29 = (ulong)(uVar2 + 1);
      unaff_x27 = (long *)Method_System_IO_CStreamReader_Read__;
    }
    uVar6 = (ulong)*(uint *)(unaff_x19 + 1);
    if ((int)unaff_x29 < (int)*(uint *)(unaff_x19 + 1)) {
      unaff_x29 = (ulong)(int)unaff_x29;
      do {
        if ((uint)uVar6 <= (uint)unaff_x29) goto LAB_0356233c;
        uVar3 = *(undefined2 *)(*unaff_x19 + unaff_x29 * 2);
        if (*(int *)(*unaff_x27 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar6 = FUN_034f9bb4(uVar3,0);
        if ((uVar6 & 1) == 0) break;
        unaff_x29 = unaff_x29 + 1;
        *unaff_x20 = *unaff_x20 + 1;
        uVar6 = (ulong)(int)unaff_x19[1];
      } while ((long)unaff_x29 < (long)uVar6);
    }
    in_w8 = *(int *)(*unaff_x24 + 0xe0);
  }
  uVar4 = *(int *)(unaff_x22 + 0x10) - uVar1;
  if (uVar4 != 0 && (int)uVar1 <= *(int *)(unaff_x22 + 0x10)) {
    uVar2 = *(uint *)(unaff_x19 + 1);
    if ((int)(uVar2 - uVar4) < (int)uVar10) {
      return 0;
    }
    lVar7 = unaff_x19[3];
    lVar8 = *(long *)Method_Unity_VisualScripting_UnityOnButtonClickMessageListener_<Start>b__0_0__;
    if ((uVar2 < uVar10) || (uVar2 - uVar10 < uVar4)) {
      FUN_0358adfc(0);
    }
    lVar9 = *unaff_x19;
    if ((*(byte *)(*(long *)(lVar8 + 0x20) + 0x135) & 1) == 0) {
      FUN_01ecaf44();
    }
    if (DAT_04832727 == '\0') {
      thunk_FUN_01efb3a4(Method_System_Linq_Expressions_Expression_AddAssign__);
      DAT_04832727 = '\x01';
    }
    if ((*(uint *)(unaff_x22 + 0x10) < uVar1) || (*(uint *)(unaff_x22 + 0x10) - uVar1 < uVar4)) {
      FUN_0358ae74(0x18,0);
    }
    lVar8 = FUN_0340ce04();
    if (lVar7 == 0) {
LAB_03562340:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    iVar5 = FUN_03506fc8(lVar7,lVar9 + (long)(int)uVar10 * 2,uVar4,lVar8 + (long)(int)uVar1 * 2,
                         uVar4,0);
    if (iVar5 != 0) {
      return 0;
    }
  }
  if ((in_stack_00000008 & 0x100000000) != 0) {
    uVar1 = *unaff_x20 + (int)unaff_x19[2];
    if ((int)uVar1 < (int)*(uint *)(unaff_x19 + 1)) {
      if (*(uint *)(unaff_x19 + 1) <= uVar1) goto LAB_0356233c;
      uVar3 = *(undefined2 *)(*unaff_x19 + (long)(int)uVar1 * 2);
      if (*(int *)(*unaff_x27 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar6 = FUN_034fc34c(uVar3,0);
      if ((uVar6 & 1) != 0) {
        return 0;
      }
    }
  }
  return 1;
}


