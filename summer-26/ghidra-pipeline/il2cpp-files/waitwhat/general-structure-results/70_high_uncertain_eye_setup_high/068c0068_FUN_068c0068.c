/*
FUNCTION_NAME: FUN_068c0068
ENTRY_POINT: 068c0068
PROGRAM: waitwhat-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_9;weak_xr_or_state_hits_7;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_9
*/


uint FUN_068c0068(long param_1,undefined8 param_2,undefined8 *param_3)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  int *piVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 local_58;
  undefined8 uStack_50;
  long *local_48;
  long *local_38;
  
  if ((DAT_075591c1 & 1) == 0) {
    FUN_03188a78(
                UnityEngine_UIElements_InlineStyleAccessPropertyBag_BorderBottomWidthProperty_TypeInfo
                );
    FUN_03188a78(
                UnityEngine_UIElements_InlineStyleAccessPropertyBag_BorderLeftColorProperty_TypeInfo
                );
    FUN_03188a78(
                UnityEngine_UIElements_InlineStyleAccessPropertyBag_BorderLeftWidthProperty_TypeInfo
                );
    FUN_03188a78(Oculus_Avatar2_OvrPluginTracking_HandTrackingDelegate_TypeInfo);
    FUN_03188a78(
                UnityEngine_UIElements_InlineStyleAccessPropertyBag_BorderRightColorProperty_TypeInfo
                );
    FUN_03188a78(
                UnityEngine_UIElements_InlineStyleAccessPropertyBag_BorderRightWidthProperty_TypeInfo
                );
    FUN_03188a78(System_Linq_Expressions_Interpreter_NotEqualInstruction_NotEqualByte_TypeInfo);
    FUN_03188a78(Oculus_Avatar2_OvrPluginTracking_OvrPluginEyeTrackingProvider_TypeInfo);
    DAT_075591c1 = 1;
  }
  *param_3 = 0;
  param_3[1] = 0;
  local_38 = (long *)0x0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = (long *)0x0;
  if (*(long *)(param_1 + 0x30) == 0) goto LAB_068c0310;
  uVar7 = FUN_06858f90(*(long *)(param_1 + 0x30),param_2,&local_38,0);
  if ((uVar7 & 1) != 0) {
    if (*(char *)(param_1 + 0x15c) == '\0') {
      uVar6 = 1;
      *param_3 = local_38;
      param_3[1] = 0;
      goto FUN_068c02f4;
    }
    if (local_38 != (long *)0x0) {
      bVar1 = *(byte *)(*(long *)
                         System_Linq_Expressions_Interpreter_NotEqualInstruction_NotEqualByte_TypeInfo
                       + 0x130);
      if ((bVar1 <= *(byte *)(*local_38 + 0x130)) &&
         (*(long *)(*(long *)(*local_38 + 200) + (ulong)bVar1 * 8 + -8) ==
          *(long *)System_Linq_Expressions_Interpreter_NotEqualInstruction_NotEqualByte_TypeInfo)) {
        plVar11 = (long *)local_38[0x29];
        if (plVar11 != (long *)0x0) {
          lVar9 = *plVar11;
          uVar12 = *(undefined8 *)(param_1 + 0x1c8);
          uVar7 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar7 != 0) {
            piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) ==
                  *(long *)Oculus_Avatar2_OvrPluginTracking_HandTrackingDelegate_TypeInfo) {
                puVar8 = (undefined8 *)(lVar9 + (long)(*piVar10 + 5) * 0x10 + 0x138);
                goto LAB_068c01d0;
              }
              uVar7 = uVar7 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar7 != 0);
          }
          puVar8 = (undefined8 *)
                   FUN_031c0d08(plVar11,*(long *)
                                         Oculus_Avatar2_OvrPluginTracking_HandTrackingDelegate_TypeInfo
                                ,5);
LAB_068c01d0:
          (*(code *)*puVar8)(plVar11,uVar12,puVar8[1]);
          if (*(long *)(param_1 + 0x1c8) != 0) {
            FUN_042e54fc(&local_58,*(long *)(param_1 + 0x1c8),
                         *(undefined8 *)
                          UnityEngine_UIElements_InlineStyleAccessPropertyBag_BorderRightWidthProperty_TypeInfo
                        );
            puVar5 = Oculus_Avatar2_OvrPluginTracking_OvrPluginEyeTrackingProvider_TypeInfo;
            puVar4 = 
            UnityEngine_UIElements_InlineStyleAccessPropertyBag_BorderRightColorProperty_TypeInfo;
            puVar3 = 
            UnityEngine_UIElements_InlineStyleAccessPropertyBag_BorderLeftColorProperty_TypeInfo;
            do {
              do {
                do {
                  uVar6 = FUN_054518b4(&local_58,*(undefined8 *)puVar3);
                  plVar11 = local_48;
                  if ((uVar6 & 1) == 0) {
                    FUN_054518b0(&local_58,
                                 *(undefined8 *)
                                  UnityEngine_UIElements_InlineStyleAccessPropertyBag_BorderBottomWidthProperty_TypeInfo
                                );
                    goto LAB_068c02f0;
                  }
                } while (local_48 == (long *)0x0);
                lVar9 = *local_48;
                bVar1 = *(byte *)(*(long *)puVar5 + 0x130);
              } while ((*(byte *)(lVar9 + 0x130) < bVar1) ||
                      (*(long *)(*(long *)(lVar9 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar5)
                      );
              uVar7 = (ulong)*(ushort *)(lVar9 + 0x12e);
              if (uVar7 != 0) {
                piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar10 + -2) == *(long *)puVar4) {
                    puVar8 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
                    goto LAB_068c02ac;
                  }
                  uVar7 = uVar7 - 1;
                  piVar10 = piVar10 + 4;
                } while (uVar7 != 0);
              }
              puVar8 = (undefined8 *)FUN_031c0d08(local_48,*(long *)puVar4,0);
LAB_068c02ac:
              uVar7 = (*(code *)*puVar8)(plVar11,puVar8[1]);
              puVar2 = 
              UnityEngine_UIElements_InlineStyleAccessPropertyBag_BorderBottomWidthProperty_TypeInfo
              ;
            } while ((uVar7 & 1) == 0);
            *param_3 = local_38;
            param_3[1] = plVar11;
            FUN_054518b0(&local_58,*(undefined8 *)puVar2);
            goto FUN_068c02f4;
          }
        }
LAB_068c0310:
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
    }
  }
LAB_068c02f0:
  uVar6 = 0;
FUN_068c02f4:
  return uVar6 & 1;
}


