/*
FUNCTION_NAME: FUN_06d0c4a8
ENTRY_POINT: 06d0c4a8
PROGRAM: vandalizer-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction
EVIDENCE: validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_6;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_6
*/


void FUN_06d0c4a8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lStack_28;
  
  if ((bRam0000000007a50c0d & 1) == 0) {
    FUN_031f20f4(
                UnityEngine_UIElements_StyleValuePropertyBag<StyleBackgroundPosition,_BackgroundPosition>_TypeInfo
                );
    FUN_031f20f4(
                UnityEngine_UIElements_StyleValuePropertyBag<StyleBackgroundRepeat,_BackgroundRepeat>_TypeInfo
                );
    FUN_031f20f4(
                UnityEngine_UIElements_StyleValuePropertyBag<StyleBackgroundSize,_BackgroundSize>_TypeInfo
                );
    FUN_031f20f4(UnityEngine_UIElements_StyleValuePropertyBag<StyleColor,_Color>_TypeInfo);
    FUN_031f20f4(UnityEngine_UIElements_StyleValuePropertyBag<StyleCursor,_Cursor>_TypeInfo);
    FUN_031f20f4(UnityEngine_UIElements_StyleValuePropertyBag<StyleFloat,_float>_TypeInfo);
    FUN_031f20f4(UnityEngine_UIElements_StyleValuePropertyBag<StyleFont,_Font>_TypeInfo);
    FUN_031f20f4(
                UnityEngine_UIElements_StyleValuePropertyBag<StyleFontDefinition,_FontDefinition>_TypeInfo
                );
    bRam0000000007a50c0d = 1;
  }
  lStack_28 = 0;
  if (*(long *)(param_1 + 0x38) != 0) {
    FUN_05813834(*(long *)(param_1 + 0x38),param_2,param_4,
                 *(undefined8 *)
                  UnityEngine_UIElements_StyleValuePropertyBag<StyleColor,_Color>_TypeInfo);
    if (*(long *)(param_1 + 0x50) != 0) {
      FUN_05827784(0x3f800000,*(long *)(param_1 + 0x50),param_2,
                   *(undefined8 *)
                    UnityEngine_UIElements_StyleValuePropertyBag<StyleBackgroundSize,_BackgroundSize>_TypeInfo
                  );
      puVar1 = UnityEngine_UIElements_StyleValuePropertyBag<StyleCursor,_Cursor>_TypeInfo;
      if (*(long *)(param_1 + 0x40) != 0) {
        FUN_057eb7e4(*(long *)(param_1 + 0x40),param_2,0,
                     *(undefined8 *)
                      UnityEngine_UIElements_StyleValuePropertyBag<StyleCursor,_Cursor>_TypeInfo);
        if (*(long *)(param_1 + 0x58) != 0) {
          FUN_057eb7e4(*(long *)(param_1 + 0x58),param_2,0,*(undefined8 *)puVar1);
          if (*(long *)(param_1 + 0x48) != 0) {
            uVar2 = FUN_05815364(*(long *)(param_1 + 0x48),param_4,&lStack_28,
                                 *(undefined8 *)
                                  UnityEngine_UIElements_StyleValuePropertyBag<StyleBackgroundPosition,_BackgroundPosition>_TypeInfo
                                );
            if ((uVar2 & 1) == 0) {
              lVar3 = thunk_FUN_0322f148(*(undefined8 *)
                                          UnityEngine_UIElements_StyleValuePropertyBag<StyleFontDefinition,_FontDefinition>_TypeInfo
                                        );
              FUN_0431fee8(lVar3,0,*(undefined8 *)
                                    UnityEngine_UIElements_StyleValuePropertyBag<StyleFont,_Font>_TypeInfo
                          );
              lStack_28 = lVar3;
              if (*(long *)(param_1 + 0x48) == 0) goto LAB_06d0c64c;
              FUN_05813834(*(long *)(param_1 + 0x48),param_4,lVar3,
                           *(undefined8 *)
                            UnityEngine_UIElements_StyleValuePropertyBag<StyleBackgroundRepeat,_BackgroundRepeat>_TypeInfo
                          );
            }
            if (lStack_28 != 0) {
              UnityEngine_InputSystem_Utilities_InlinedArray<PointerModel>__Clear
                        (lStack_28,param_2,
                         *(undefined8 *)
                          UnityEngine_UIElements_StyleValuePropertyBag<StyleFloat,_float>_TypeInfo);
              return;
            }
          }
        }
      }
    }
  }
LAB_06d0c64c:
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


