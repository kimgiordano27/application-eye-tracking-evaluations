/*
FUNCTION_NAME: FUN_05f45dd4
ENTRY_POINT: 05f45dd4
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction
EVIDENCE: validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_3
*/


undefined8 FUN_05f45dd4(long param_1)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  
  if ((DAT_06dc42fc & 1) == 0) {
    FUN_02d965b8(
                Method_UnityEngine_UIElements_StyleValuePropertyBag<StyleBackgroundPosition,_BackgroundPosition>__ctor__
                );
    FUN_02d965b8(PTR_DAT_06a12228);
    FUN_02d965b8(PTR_DAT_06a12250);
    FUN_02d965b8(
                Method_UnityEngine_UIElements_StyleValuePropertyBag<StyleBackgroundRepeat,_BackgroundRepeat>__ctor__
                );
    FUN_02d965b8(PTR_DAT_069fb9d8);
    DAT_06dc42fc = 1;
  }
  puVar3 = PTR_DAT_069fb9c0;
  if (*(char *)(param_1 + 0x60) == '\0') {
LAB_05f4605c:
    return *(undefined8 *)(param_1 + 0x78);
  }
  plVar13 = (long *)(param_1 + 0x70);
  lVar9 = *(long *)(param_1 + 0x68);
  if (*plVar13 == 0) {
    if (lVar9 == 0) goto LAB_05f46054;
    lVar9 = FUN_02d966a4(*(undefined8 *)PTR_DAT_069fb9d8,*(undefined4 *)(lVar9 + 0x18));
    *plVar13 = lVar9;
    LeanTween__value(plVar13,lVar9);
    FUN_0375e130(*plVar13,**(undefined8 **)(*(long *)(puVar3 + 0x90) + 0xb8),
                 *(undefined8 *)
                  Method_UnityEngine_UIElements_StyleValuePropertyBag<StyleBackgroundPosition,_BackgroundPosition>__ctor__
                );
  }
  else {
    if (lVar9 == 0) goto LAB_05f46054;
    if (*(int *)(*plVar13 + 0x18) != *(int *)(lVar9 + 0x18)) {
      uVar12 = *(undefined8 *)(param_1 + 0x28);
      uVar6 = thunk_FUN_02dfd288(
                                Method_UnityEngine_UIElements_StyleValuePropertyBag<StyleBackgroundSize,_BackgroundSize>__ctor__
                                );
      uVar7 = thunk_FUN_02dfd288(
                                Method_UnityEngine_UIElements_StyleValuePropertyBag<StyleColor,_Color>__ctor__
                                );
      uVar6 = FUN_0536d554(uVar6,uVar12,uVar7,0);
      thunk_FUN_02dfd288(PTR_DAT_069fcb10);
      uVar7 = thunk_FUN_02dd3144();
      Oculus_Avatar2_OvrAvatarDefaultStateListener_AnimationStateChangeDelegate__EndInvoke
                (uVar7,uVar6,0);
      uVar6 = thunk_FUN_02dfd288(
                                Method_UnityEngine_UIElements_StyleValuePropertyBag<StyleCursor,_Cursor>__ctor__
                                );
                    /* WARNING: Subroutine does not return */
      FUN_02d96724(uVar7,uVar6);
    }
  }
  lVar9 = *(long *)(param_1 + 0x78);
  if (lVar9 != 0) {
    iVar1 = *(int *)(lVar9 + 0x18);
    *(undefined4 *)(lVar9 + 0x18) = 0;
    *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
    if (0 < iVar1) {
      FUN_0550afb4(*(undefined8 *)(lVar9 + 0x10),0,iVar1,0);
    }
    puVar5 = PTR_DAT_06a12250;
    puVar4 = PTR_DAT_06a12228;
    lVar9 = *(long *)(param_1 + 0x68);
    if (lVar9 != 0) {
      lVar15 = 4;
      do {
        uVar11 = lVar15 - 4;
        if ((long)(int)*(uint *)(lVar9 + 0x18) <= (long)uVar11) {
          *(undefined1 *)(param_1 + 0x60) = 0;
          goto LAB_05f4605c;
        }
        if (*(uint *)(lVar9 + 0x18) <= uVar11) {
LAB_05f4607c:
                    /* WARNING: Subroutine does not return */
          FUN_02d96868();
        }
        lVar9 = *(long *)(lVar9 + lVar15 * 8);
        if (lVar9 == 0) {
          lVar9 = **(long **)(*(long *)(puVar3 + 0x90) + 0xb8);
        }
        lVar10 = *plVar13;
        if (lVar10 == 0) break;
        if (*(uint *)(lVar10 + 0x18) <= uVar11) goto LAB_05f4607c;
        lVar10 = *(long *)(lVar10 + lVar15 * 8);
        if (lVar10 == 0) {
          lVar10 = **(long **)(*(long *)(puVar3 + 0x90) + 0xb8);
        }
        lVar14 = *(long *)(param_1 + 0x78);
        uVar6 = thunk_FUN_02dd3144(*(undefined8 *)puVar4);
        FUN_0639f5f0(uVar6,lVar9,lVar10,0);
        if (lVar14 == 0) break;
        lVar9 = *(long *)(lVar14 + 0x10);
        lVar10 = *(long *)puVar5;
        *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
        if (lVar9 == 0) break;
        uVar2 = *(uint *)(lVar14 + 0x18);
        if (uVar2 < *(uint *)(lVar9 + 0x18)) {
          *(uint *)(lVar14 + 0x18) = uVar2 + 1;
          puVar8 = (undefined8 *)(lVar9 + (long)(int)uVar2 * 8 + 0x20);
          *puVar8 = uVar6;
          LeanTween__value(puVar8,uVar6);
        }
        else {
          FUN_040101ec(lVar14,uVar6,
                       *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
        }
        lVar9 = *(long *)(param_1 + 0x68);
        lVar15 = lVar15 + 1;
      } while (lVar9 != 0);
    }
  }
LAB_05f46054:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


