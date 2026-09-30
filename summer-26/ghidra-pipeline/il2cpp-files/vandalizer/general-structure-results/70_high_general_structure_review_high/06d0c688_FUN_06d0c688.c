/*
FUNCTION_NAME: FUN_06d0c688
ENTRY_POINT: 06d0c688
PROGRAM: vandalizer-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction
EVIDENCE: validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_6
*/


void FUN_06d0c688(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  long lStack_30;
  undefined8 uStack_28;
  
  if ((bRam0000000007a50c0e & 1) == 0) {
    FUN_031f20f4(UnityEngine_UIElements_StyleValuePropertyBag<StyleInt,_int>_TypeInfo);
    FUN_031f20f4(UnityEngine_UIElements_StyleValuePropertyBag<StyleLength,_Length>_TypeInfo);
    FUN_031f20f4(
                UnityEngine_UIElements_StyleValuePropertyBag<StyleBackgroundPosition,_BackgroundPosition>_TypeInfo
                );
    FUN_031f20f4(UnityEngine_UIElements_StyleValuePropertyBag<StyleRotate,_Rotate>_TypeInfo);
    FUN_031f20f4(
                UnityEngine_UIElements_StyleValuePropertyBag<StyleBackgroundSize,_BackgroundSize>_TypeInfo
                );
    FUN_031f20f4(UnityEngine_UIElements_StyleValuePropertyBag<StyleCursor,_Cursor>_TypeInfo);
    FUN_031f20f4(UnityEngine_UIElements_StyleValuePropertyBag<StyleScale,_Scale>_TypeInfo);
    bRam0000000007a50c0e = 1;
  }
  puVar1 = UnityEngine_UIElements_StyleValuePropertyBag<StyleCursor,_Cursor>_TypeInfo;
  lStack_30 = 0;
  uStack_28 = 0;
  if (*(long *)(param_1 + 0x40) != 0) {
    FUN_057eb7e4(*(long *)(param_1 + 0x40),param_2,0,
                 *(undefined8 *)
                  UnityEngine_UIElements_StyleValuePropertyBag<StyleCursor,_Cursor>_TypeInfo);
    if (*(long *)(param_1 + 0x50) != 0) {
      FUN_05827784(0x3f800000,*(long *)(param_1 + 0x50),param_2,
                   *(undefined8 *)
                    UnityEngine_UIElements_StyleValuePropertyBag<StyleBackgroundSize,_BackgroundSize>_TypeInfo
                  );
      if (*(long *)(param_1 + 0x58) != 0) {
        FUN_057eb7e4(*(long *)(param_1 + 0x58),param_2,0,*(undefined8 *)puVar1);
        if (*(long *)(param_1 + 0x38) != 0) {
          uVar3 = FUN_05815364(*(long *)(param_1 + 0x38),param_2,&uStack_28,
                               *(undefined8 *)
                                UnityEngine_UIElements_StyleValuePropertyBag<StyleLength,_Length>_TypeInfo
                              );
          if ((uVar3 & 1) == 0) {
            if (*(long *)(param_1 + 0x38) != 0) {
              iVar2 = FUN_05813518(*(long *)(param_1 + 0x38),
                                   *(undefined8 *)
                                    UnityEngine_UIElements_StyleValuePropertyBag<StyleRotate,_Rotate>_TypeInfo
                                  );
              if (iVar2 == 0) {
                FUN_06d0d10c(param_1,*(undefined8 *)(param_1 + 0x20));
              }
              return;
            }
          }
          else if (*(long *)(param_1 + 0x48) != 0) {
            uVar3 = FUN_05815364(*(long *)(param_1 + 0x48),uStack_28,&lStack_30,
                                 *(undefined8 *)
                                  UnityEngine_UIElements_StyleValuePropertyBag<StyleBackgroundPosition,_BackgroundPosition>_TypeInfo
                                );
            if ((uVar3 & 1) != 0) {
              if (lStack_30 == 0) goto LAB_06d0c828;
              FUN_04320214(lStack_30,param_2,
                           *(undefined8 *)
                            UnityEngine_UIElements_StyleValuePropertyBag<StyleScale,_Scale>_TypeInfo
                          );
            }
            FUN_06d0d10c(param_1,uStack_28);
            if (*(long *)(param_1 + 0x38) != 0) {
              FUN_05814d2c(*(long *)(param_1 + 0x38),param_2,
                           *(undefined8 *)
                            UnityEngine_UIElements_StyleValuePropertyBag<StyleInt,_int>_TypeInfo);
              return;
            }
          }
        }
      }
    }
  }
LAB_06d0c828:
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


