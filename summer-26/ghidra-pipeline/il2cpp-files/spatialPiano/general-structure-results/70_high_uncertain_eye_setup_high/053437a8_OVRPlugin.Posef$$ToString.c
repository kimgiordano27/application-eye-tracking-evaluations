/*
FUNCTION_NAME: OVRPlugin.Posef$$ToString
ENTRY_POINT: 053437a8
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Posef__ToString(long *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long lVar10;
  
  if ((DAT_06bbb4ca & 1) == 0) {
    FUN_02f08768(System_Data_DuplicateNameException_TypeInfo);
    FUN_02f08768(UnityEngine_UIElements_StyleValuePropertyBag<StyleFloat,_float>_TypeInfo);
    DAT_06bbb4ca = 1;
  }
  if (param_1[0xe] != 0) {
    iVar1 = (**(code **)(*param_1 + 0x1c8))(param_1,*(undefined8 *)(*param_1 + 0x1d0));
    lVar10 = param_1[0xe];
    if (lVar10 == 0) {
LAB_053438fc:
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    if (iVar1 != *(int *)(lVar10 + 0x10)) {
      uVar3 = FUN_04735a9c(param_1,*(undefined8 *)System_Data_DuplicateNameException_TypeInfo);
      uVar2 = (**(code **)(*param_1 + 0x1c8))(param_1,*(undefined8 *)(*param_1 + 0x1d0));
      plVar4 = (long *)FUN_053431a4(param_1);
      if (plVar4 == (long *)0x0) {
        uVar6 = 0;
      }
      else {
        lVar7 = *plVar4;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) ==
                *(long *)UnityEngine_UIElements_StyleValuePropertyBag<StyleFloat,_float>_TypeInfo) {
              puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_053438c0;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar5 = (undefined8 *)
                 FUN_02f421d0(plVar4,*(long *)
                                      UnityEngine_UIElements_StyleValuePropertyBag<StyleFloat,_float>_TypeInfo
                              ,0);
LAB_053438c0:
        uVar6 = (*(code *)*puVar5)(plVar4,puVar5[1]);
        if (plVar4 == (long *)0x0) goto LAB_053438fc;
      }
      FUN_05343900(lVar10,uVar3,uVar2,uVar6);
      return;
    }
  }
  return;
}


