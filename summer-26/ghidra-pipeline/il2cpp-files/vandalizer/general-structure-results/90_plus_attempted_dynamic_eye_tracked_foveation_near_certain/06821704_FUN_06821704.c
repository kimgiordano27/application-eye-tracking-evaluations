/*
FUNCTION_NAME: FUN_06821704
ENTRY_POINT: 06821704
PROGRAM: vandalizer-libil2cpp.so
SCORE: 94
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: validity_gate;foveation_rendering;keyword_support;attempted_use;dynamic_foveation_possible
EVIDENCE: validity_or_gating_hits_5;strong_foveation_hits_2;eye_or_gaze_keyword_boost_only;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void FUN_06821704(long *param_1,long param_2,long param_3)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined *puVar7;
  
  if ((DAT_07a4dec8 & 1) == 0) {
    FUN_031f20f4(PTR_DAT_07621f40);
    DAT_07a4dec8 = 1;
  }
  if (param_2 == 0) {
    thunk_FUN_03257e30(PTR_DAT_0759c0f0);
    uVar5 = thunk_FUN_0322f148();
    puVar7 = PTR_DAT_0759c0c0;
  }
  else {
    uVar2 = FUN_05c87ee0(param_3,0);
    if ((uVar2 & 1) == 0) {
      lVar3 = FUN_06808b48(param_2,0);
      if (lVar3 != 0) {
        lVar9 = *(long *)(lVar3 + 0x30);
        uVar1 = FUN_03d11bdc(lVar9,*(undefined8 *)PTR_DAT_07621f40);
        if (0 < (int)uVar1) {
          if (lVar9 == 0) goto LAB_06821878;
          uVar2 = 0;
          puVar10 = (undefined8 *)(lVar9 + 0x30);
          do {
            if (*(uint *)(lVar9 + 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
              FUN_031f2398();
            }
            if (((*(byte *)(puVar10 + 5) >> 2 & 1) != 0) &&
               (uVar4 = FUN_068218f0(puVar10 + -2,param_2), (uVar4 & 1) != 0)) {
              if (param_3 == 0) goto LAB_06821878;
              uVar4 = FUN_05c869f4(param_3,puVar10[-2],3,0);
              if ((uVar4 & 1) != 0) {
UnityEngine_Rendering_UnsafeCommandBuffer__ConfigureFoveatedRendering:
                param_1[2] = 0;
                plVar8 = param_1 + 1;
                *plVar8 = 0;
                *param_1 = lVar3;
                thunk_FUN_0329bf60(param_1,lVar3);
                *(int *)(param_1 + 2) = (int)uVar2;
                *plVar8 = param_2;
                thunk_FUN_0329bf60(plVar8,param_2);
                return;
              }
              uVar5 = FUN_0683cd48(*puVar10,0);
              uVar4 = FUN_05c869f4(param_3,uVar5,3,0);
              if ((uVar4 & 1) != 0)
              goto UnityEngine_Rendering_UnsafeCommandBuffer__ConfigureFoveatedRendering;
            }
            uVar2 = uVar2 + 1;
            puVar10 = puVar10 + 0xb;
          } while (uVar1 != uVar2);
        }
        *param_1 = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        return;
      }
LAB_06821878:
                    /* WARNING: Subroutine does not return */
      FUN_031f2390();
    }
    thunk_FUN_03257e30(PTR_DAT_0759c0f0);
    uVar5 = thunk_FUN_0322f148();
    puVar7 = PTR_DAT_07622b30;
  }
  uVar6 = thunk_FUN_03257e30(puVar7);
  FUN_05d6f364(uVar5,uVar6,0);
  uVar6 = thunk_FUN_03257e30(PTR_DAT_07622b38);
                    /* WARNING: Subroutine does not return */
  FUN_031f225c(uVar5,uVar6);
}


