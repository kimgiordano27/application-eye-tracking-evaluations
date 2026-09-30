/*
FUNCTION_NAME: FUN_060d7bd0
ENTRY_POINT: 060d7bd0
PROGRAM: beastcraft-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction
EVIDENCE: validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_4
*/


void FUN_060d7bd0(long *param_1,long *param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long *plVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  long lVar14;
  int *piVar15;
  undefined8 local_b8;
  undefined8 *puStack_b0;
  undefined8 local_a8;
  undefined1 local_a0 [16];
  long local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 *puStack_78;
  undefined8 local_70;
  
  if ((DAT_06e9526f & 1) == 0) {
    FUN_02e3ca1c(PTR_DAT_06a2ed98);
    FUN_02e3ca1c(
                UnityEngine_UIElements_StyleValuePropertyBag<StyleList<TimeValue>,_List<TimeValue>>_TypeInfo
                );
    FUN_02e3ca1c(UnityEngine_UIElements_StyleValuePropertyBag<StyleBackground,_Background>_TypeInfo)
    ;
    FUN_02e3ca1c(PTR_DAT_06a69598);
    FUN_02e3ca1c(PTR_DAT_06a695a0);
    FUN_02e3ca1c(PTR_DAT_06a695a8);
    FUN_02e3ca1c(PTR_DAT_06a5ff30);
    FUN_02e3ca1c(
                UnityEngine_UIElements_StyleValuePropertyBag<StyleBackgroundPosition,_BackgroundPosition>_TypeInfo
                );
    FUN_02e3ca1c(PTR_DAT_06a695b0);
    FUN_02e3ca1c(PTR_DAT_06a2ed80);
    FUN_02e3ca1c(
                UnityEngine_UIElements_StyleValuePropertyBag<StyleBackgroundRepeat,_BackgroundRepeat>_TypeInfo
                );
    FUN_02e3ca1c(
                UnityEngine_UIElements_StyleValuePropertyBag<StyleBackgroundSize,_BackgroundSize>_TypeInfo
                );
    FUN_02e3ca1c(UnityEngine_UIElements_StyleValuePropertyBag<StyleColor,_Color>_TypeInfo);
    FUN_02e3ca1c(UnityEngine_UIElements_StyleValuePropertyBag<StyleCursor,_Cursor>_TypeInfo);
    DAT_06e9526f = 1;
  }
  plVar10 = (long *)param_1[0x15];
  local_80 = 0;
  puStack_78 = (undefined8 *)0x0;
  local_70 = 0;
  local_90 = 0;
  local_88 = 0;
  local_a0._0_8_ = 0;
  local_a0._8_8_ = 0;
  if (plVar10 != (long *)0x0) {
    uVar11 = (**(code **)(*plVar10 + 0x198))(plVar10,param_2,*(undefined8 *)(*plVar10 + 0x1a0));
    if ((uVar11 & 1) == 0) {
      return;
    }
    if (param_2 != (long *)0x0) {
      lVar14 = *param_2;
      uVar11 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar11 != 0) {
        piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_06a5ff30) {
            puVar12 = (undefined8 *)(lVar14 + (long)(*piVar15 + 5) * 0x10 + 0x138);
            goto LAB_060d7d38;
          }
          uVar11 = uVar11 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar11 != 0);
      }
      puVar12 = (undefined8 *)FUN_02e759c0(param_2,*(long *)PTR_DAT_06a5ff30,5);
LAB_060d7d38:
      lVar14 = (*(code *)*puVar12)(param_2,puVar12[1]);
      if (lVar14 != 0) {
        FUN_03f2c008(&local_b8,lVar14,*(undefined8 *)PTR_DAT_06a695b0);
        puVar9 = UnityEngine_UIElements_StyleValuePropertyBag<StyleCursor,_Cursor>_TypeInfo;
        puVar8 = UnityEngine_UIElements_StyleValuePropertyBag<StyleColor,_Color>_TypeInfo;
        puVar7 = 
        UnityEngine_UIElements_StyleValuePropertyBag<StyleBackgroundSize,_BackgroundSize>_TypeInfo;
        puVar6 = UnityEngine_UIElements_StyleValuePropertyBag<StyleBackground,_Background>_TypeInfo;
        puVar5 = 
        UnityEngine_UIElements_StyleValuePropertyBag<StyleList<TimeValue>,_List<TimeValue>>_TypeInfo
        ;
        puVar4 = PTR_DAT_06a695a0;
        puVar3 = PTR_DAT_06a2ed98;
        puVar2 = PTR_DAT_06a2ed80;
        puStack_78 = puStack_b0;
        local_80 = local_b8;
        local_70 = local_a8;
        puStack_b0 = &local_80;
        local_b8 = 0;
        while (uVar11 = FUN_04fc1198(&local_80,*(undefined8 *)puVar4), uVar13 = local_70,
              (uVar11 & 1) != 0) {
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_02e9a04c();
          }
          uVar11 = FUN_062696b0(uVar13,0,0);
          if ((uVar11 & 1) == 0) {
            if (param_1[0x11] == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02e3ccc4();
            }
            uVar11 = FUN_04df1178(param_1[0x11],uVar13,&local_88,*(undefined8 *)puVar6);
            if ((uVar11 & 1) == 0) {
              if (param_1[0x11] == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02e3ccc4();
              }
              FUN_04def610(param_1[0x11],uVar13,param_2,*(undefined8 *)puVar5);
            }
            else {
              uVar13 = FUN_0548df48(*(undefined8 *)puVar7,uVar13,local_88,param_2,0);
              uVar13 = FUN_0548d5a0(*(undefined8 *)puVar9,uVar13,*(undefined8 *)puVar8,0);
              if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                thunk_FUN_02e9a04c();
              }
              lVar14 = *(long *)puVar2;
              bVar1 = *(byte *)(lVar14 + 0x130);
              if (*(byte *)(*param_2 + 0x130) < bVar1) {
                plVar10 = (long *)0x0;
              }
              else {
                plVar10 = param_2;
                if (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) != lVar14) {
                  plVar10 = (long *)0x0;
                }
              }
              FUN_06225060(uVar13,plVar10,0);
            }
          }
        }
        FUN_04fc1194(&local_80,*(undefined8 *)PTR_DAT_06a69598);
        if (param_1[0x29] != 0) {
          local_a0 = FUN_03dd6bc0(param_1[0x29],&local_90,
                                  *(undefined8 *)
                                   UnityEngine_UIElements_StyleValuePropertyBag<StyleBackgroundPosition,_BackgroundPosition>_TypeInfo
                                 );
          puStack_b0 = (undefined8 *)local_a0;
          local_b8 = 0;
          if (local_90 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02e3ccc4();
          }
          *(long *)(local_90 + 0x10) = (long)param_1;
          thunk_FUN_02ee2be8((long *)(local_90 + 0x10),param_1);
          if (local_90 != 0) {
            *(long *)(local_90 + 0x18) = (long)param_2;
                    /* try { // try from 060d7f08 to 061d80fb has its CatchHandler @ 060d7f08
                       catch() { ... } // from try @ 060d7f08 with catch @ 060d7f08
                       catch() { ... } // from try @ 060d8284 with catch @ 060d7f08
                       catch() { ... } // from try @ 060d82b8 with catch @ 060d7f08
                       catch() { ... } // from try @ 060d82c4 with catch @ 060d7f08
                       catch() { ... } // from try @ 060d82fc with catch @ 060d7f08
                       catch() { ... } // from try @ 060d8388 with catch @ 060d7f08 */
            thunk_FUN_02ee2be8((long *)(local_90 + 0x18),param_2);
            (**(code **)(*param_1 + 0x2e8))(param_1,local_90,*(undefined8 *)(*param_1 + 0x2f0));
            FUN_0433752c(local_a0,*(undefined8 *)
                                   UnityEngine_UIElements_StyleValuePropertyBag<StyleBackgroundRepeat,_BackgroundRepeat>_TypeInfo
                        );
            return;
          }
                    /* WARNING: Subroutine does not return */
          FUN_02e3ccc4();
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02e3ccc4();
}


