/*
FUNCTION_NAME: FUN_0568a3b8
ENTRY_POINT: 0568a3b8
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_6;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x0568a71c) */

void FUN_0568a3b8(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long *plVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  int *piVar16;
  undefined8 uVar17;
  long lVar18;
  
  if ((DAT_06a5489c & 1) == 0) {
    FUN_02d4dc40(Method_UnityEngine_UIElements_BaseField<Vector2>_get_visualInput__);
    FUN_02d4dc40(Method_UnityEngine_UIElements_BaseField<Vector2>_set_rawValue__);
    FUN_02d4dc40(Method_UnityEngine_UIElements_BaseField<Vector2>_set_value__);
                    /* try { // try from 0568a408 to 0578a433 has its CatchHandler @ 0568a674 */
    FUN_02d4dc40(PTR_DAT_066479a8);
    FUN_02d4dc40(PTR_DAT_066479b0);
    FUN_02d4dc40(Method_UnityEngine_UIElements_BaseField<Vector2Int>_get_labelElement__);
    FUN_02d4dc40(
                Method_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder<Nullable<float>>_AwaitUnsafeOnCompleted<UniTask_Awaiter,_Max_<MaxAsync>d__32>__
                );
    DAT_06a5489c = 1;
  }
  if (*(long *)(param_1 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d4dee8();
  }
  plVar8 = *(long **)(*(long *)(param_1 + 0x48) + 0x18);
  if (plVar8 == (long *)0x0) {
    return;
  }
  plVar8 = (long *)(**(code **)(*plVar8 + 0x388))(plVar8,*(undefined8 *)(*plVar8 + 0x390));
  puVar7 = Method_UnityEngine_UIElements_BaseField<Vector2Int>_get_labelElement__;
  puVar6 = Method_UnityEngine_UIElements_BaseField<Vector2>_set_value__;
  puVar5 = Method_UnityEngine_UIElements_BaseField<Vector2>_set_rawValue__;
  puVar4 = 
  Method_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder<Nullable<float>>_AwaitUnsafeOnCompleted<UniTask_Awaiter,_Max_<MaxAsync>d__32>__
  ;
  puVar3 = PTR_DAT_066479b0;
                    /* try { // try from 0568a470 to 0578a47b has its CatchHandler @ 0568a5f0 */
  do {
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d4dee8();
    }
    lVar14 = *plVar8;
    lVar13 = *(long *)puVar3;
    uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == lVar13) {
          puVar9 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_0568a4f4;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar9 = (undefined8 *)FUN_02d87540(plVar8,lVar13,0);
LAB_0568a4f4:
    uVar15 = (*(code *)*puVar9)(plVar8,puVar9[1]);
    puVar2 = PTR_DAT_066479a8;
    if ((uVar15 & 1) == 0) {
      plVar8 = (long *)thunk_FUN_02d8a53c(plVar8,*(undefined8 *)PTR_DAT_066479a8);
      if (plVar8 == (long *)0x0) {
        return;
      }
      lVar13 = *plVar8;
      uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar15 == 0) goto LAB_0568a6b8;
      piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      break;
    }
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d4dee8();
    }
    lVar14 = *plVar8;
    lVar13 = *(long *)puVar3;
    uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == lVar13) {
          puVar9 = (undefined8 *)(lVar14 + (long)(*piVar16 + 1) * 0x10 + 0x138);
          goto System_Text_RegularExpressions_RegexCharClass__IsMergeable;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar9 = (undefined8 *)FUN_02d87540(plVar8,lVar13,1);
System_Text_RegularExpressions_RegexCharClass__IsMergeable:
    plVar10 = (long *)(*(code *)*puVar9)(plVar8,puVar9[1]);
    if (plVar10 != (long *)0x0) {
      bVar1 = *(byte *)(*(long *)puVar4 + 0x130);
      if ((*(byte *)(*plVar10 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar4)) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4e268(plVar10);
      }
    }
    uVar11 = thunk_FUN_02d8a638(*(undefined8 *)puVar6);
    FUN_0568a788(uVar11,param_1,plVar10);
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d4dee8();
    }
    lVar13 = plVar10[0xb];
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d4dee8();
    }
    uVar17 = *(undefined8 *)(lVar13 + 0x10);
    lVar14 = plVar10[9];
    lVar18 = plVar10[7];
    if (*(int *)(lVar13 + 0x20) == 2) {
      uVar12 = thunk_FUN_02d8a638(*(undefined8 *)puVar7);
      FUN_056870dc(uVar12,uVar11,
                   *(undefined8 *)Method_UnityEngine_UIElements_BaseField<Vector2>_get_visualInput__
                   ,0);
      FUN_056873a0(param_1,uVar17,lVar14,lVar18,uVar12,0);
    }
    else {
      uVar12 = thunk_FUN_02d8a638(*(undefined8 *)puVar7);
      FUN_056870dc(uVar12,uVar11,*(undefined8 *)puVar5,0);
      FUN_056873a0(param_1,uVar17,lVar14,lVar18,uVar12,0);
    }
  } while( true );
  while( true ) {
    uVar15 = uVar15 - 1;
    piVar16 = piVar16 + 4;
    if (uVar15 == 0) break;
    if (*(long *)(piVar16 + -2) == *(long *)puVar2) {
      puVar9 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
      goto LAB_0568a6d4;
    }
  }
LAB_0568a6b8:
  puVar9 = (undefined8 *)FUN_02d87540(plVar8,*(long *)puVar2,0);
LAB_0568a6d4:
  (*(code *)*puVar9)(plVar8,puVar9[1]);
  return;
}


