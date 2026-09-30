/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsJsonPrinter$$BuildCompressedString
ENTRY_POINT: 06776a04
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_2
*/


void Unity_VisualScripting_FullSerializer_fsJsonPrinter__BuildCompressedString(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long unaff_x19;
  long *plVar11;
  long unaff_x20;
  
  FUN_02fe925c();
                    /* try { // try from 06776a08 to 06876a13 has its CatchHandler @ 06776d10 */
  *(undefined1 *)(unaff_x20 + 0x577) = 1;
  puVar4 = UnityEngine_UI_CoroutineTween_TweenRunner<FloatTween>_TypeInfo;
  puVar2 = UnityEngine_UI_CoroutineTween_TweenRunner<ColorTween>_TypeInfo;
  puVar3 = TMPro_TweenRunner<FloatTween>_TypeInfo;
  puVar1 = Meta_XR_ImmersiveDebugger_Manager_Tweak<int>_TypeInfo;
  if ((*(long *)(unaff_x19 + 0x10) != 0) &&
     (lVar9 = *(long *)(*(long *)(unaff_x19 + 0x10) + 0x10), lVar9 != 0)) {
                    /* try { // try from 06776a2c to 06876a37 has its CatchHandler @ 06776ce0 */
    iVar5 = 8;
    lVar10 = lVar9;
    do {
                    /* try { // try from 06776a50 to 06876a5b has its CatchHandler @ 06776d14 */
      lVar10 = *(long *)(lVar10 + 0x18);
      if (lVar10 == lVar9) {
                    /* try { // try from 06776a6c to 06876a77 has its CatchHandler @ 06776cf4 */
        uVar6 = thunk_FUN_0301080c(*(undefined8 *)
                                    Meta_XR_ImmersiveDebugger_Manager_Tweak<float>_TypeInfo);
        FUN_0424f834(uVar6,0,*(undefined8 *)puVar1,0);
                    /* try { // try from 06776a88 to 06876a93 has its CatchHandler @ 06776ccc */
        lVar9 = thunk_FUN_0301080c(*(undefined8 *)puVar4);
        FUN_04956e3c(lVar9,iVar5,uVar6,*(undefined8 *)puVar2);
        plVar11 = (long *)(unaff_x19 + 0x58);
        *plVar11 = lVar9;
        thunk_FUN_03048534(plVar11,lVar9);
        puVar2 = System_Tuple<string,_string>_TypeInfo;
        puVar1 = System_Tuple<Action<object>,_object>_TypeInfo;
                    /* try { // try from 06776ab0 to 06876ab7 has its CatchHandler @ 06776cb4 */
        if ((*(long *)(unaff_x19 + 0x10) != 0) &&
           (lVar10 = *(long *)(*(long *)(unaff_x19 + 0x10) + 0x10), lVar9 = lVar10, lVar10 != 0))
        goto LAB_06776ad4;
        break;
      }
      iVar5 = iVar5 + 1;
    } while (lVar10 != 0);
  }
LAB_06776a64:
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
LAB_06776ad4:
  lVar7 = *plVar11;
  if (lVar7 == 0) goto LAB_06776a64;
  lVar9 = *(long *)(lVar9 + 0x18);
  if (lVar9 == lVar10) {
    FUN_04956f14(lVar7,*(undefined8 *)puVar3);
    return;
  }
  iVar5 = FUN_04957484(lVar7,lVar9,*(undefined8 *)puVar2);
  if (lVar9 == 0) goto LAB_06776a64;
  *(int *)(lVar9 + 0x3c) = iVar5;
  lVar7 = *(long *)puVar1;
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
    lVar7 = *(long *)puVar1;
  }
  if (**(int **)(lVar7 + 0xb8) == iVar5) {
                    /* try { // try from 06776b24 to 06876b2b has its CatchHandler @ 06776cbc */
    thunk_FUN_03037804(PTR_DAT_06f6d640);
    uVar6 = thunk_FUN_0301080c();
    uVar8 = thunk_FUN_03037804(System_Tuple<Vector3,_float>_TypeInfo);
                    /* try { // try from 06776b44 to 06876b7b has its CatchHandler @ 06776cc8 */
    FUN_05aeefcc(uVar6,uVar8,0);
    uVar8 = thunk_FUN_03037804(Unity_Properties_TypeConverter<bool,_byte>_TypeInfo);
                    /* WARNING: Subroutine does not return */
    FUN_02fe93c0(uVar6,uVar8);
  }
  goto LAB_06776ad4;
}


