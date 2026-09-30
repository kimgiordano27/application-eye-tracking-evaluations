/*
FUNCTION_NAME: FUN_07146c0c
ENTRY_POINT: 07146c0c
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 81
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;ui_interaction;data_collection
EVIDENCE: validity_or_gating_hits_3;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_2;strong_file_logging_hits_2
*/


void FUN_07146c0c(long param_1,long param_2,ulong param_3)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  
  if ((DAT_07eed246 & 1) == 0) {
    FUN_03642964(PTR_DAT_079f4e78);
    FUN_03642964(Method_UnityEngine_UIElements_BaseSlider<float>_get_highValue__);
    DAT_07eed246 = 1;
  }
  puVar4 = Method_UnityEngine_UIElements_BaseSlider<float>_get_highValue__;
  puVar3 = PTR_DAT_079f4e78;
  puVar2 = PTR_DAT_079f4610;
  if ((param_1 != 0) && (0 < (int)*(ulong *)(param_1 + 0x18))) {
    uVar9 = 0;
    uVar5 = *(ulong *)(param_1 + 0x18) & 0xffffffff;
    do {
      if (uVar5 <= uVar9) goto LAB_07146d74;
      plVar6 = *(long **)(param_1 + 0x20 + uVar9 * 8);
      if (plVar6 != (long *)0x0) {
        lVar7 = *plVar6;
        if ((lVar7 != *(long *)(puVar2 + 0x90)) && (lVar7 != *(long *)puVar4)) {
          bVar1 = *(byte *)(*(long *)puVar3 + 0x130);
          if ((*(byte *)(lVar7 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(lVar7 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar3)) {
            lVar8 = *(long *)(puVar2 + 0xa0);
            bVar1 = *(byte *)(lVar8 + 0x130);
            if ((*(byte *)(lVar7 + 0x130) < bVar1) ||
               (*(long *)(*(long *)(lVar7 + 200) + (ulong)bVar1 * 8 + -8) != lVar8))
            goto UnityEngine_Collider__Internal_ClosestPointOnBounds;
          }
        }
        if ((param_3 & 0xffffffff) <= uVar9) {
LAB_07146d74:
                    /* WARNING: Subroutine does not return */
          FUN_03642c20();
        }
        lVar7 = *(long *)(param_2 + uVar9 * 8);
        if (lVar7 != 0) {
          if (DAT_07eeccd0 == (code *)0x0) {
            DAT_07eeccd0 = (code *)FUN_03642928(
                                               "UnityEngine.AndroidJNI::DeleteLocalRef(System.IntPtr)"
                                               );
          }
          (*DAT_07eeccd0)(lVar7);
          uVar5 = (ulong)*(uint *)(param_1 + 0x18);
        }
      }
UnityEngine_Collider__Internal_ClosestPointOnBounds:
      uVar9 = uVar9 + 1;
    } while ((long)uVar9 < (long)(int)uVar5);
  }
  return;
}


