/*
FUNCTION_NAME: FUN_075377b8
ENTRY_POINT: 075377b8
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 86
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_16;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_3;ui_or_gameplay_sink_hits_4;source_validity_pose_sink_structure
*/


undefined8 FUN_075377b8(long *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  
  puVar1 = Method_UniRx_ReactiveProperty<UIScreenRhythm>__ctor__;
  if ((DAT_07ef4cd7 & 1) == 0) {
    FUN_03642964(
                Method_System_Collections_Generic_Dictionary<Column,_MultiColumnCollectionHeader_ColumnData>_Clear__
                );
    FUN_03642964(
                Method_System_Collections_Generic_Dictionary<Column,_MultiColumnCollectionHeader_ColumnData>_set_Item__
                );
    FUN_03642964(PTR_DAT_07a00960);
    FUN_03642964(PTR_DAT_07a00968);
    FUN_03642964(Method_UniRx_ReactiveProperty<UIScreenRhythm>_get_Value__);
    FUN_03642964(Method_UniRx_ReactiveProperty<UIScreenRhythm>_set_Value__);
    FUN_03642964(Method_UniRx_ReactiveProperty<UIScreenRhythm>__ctor__);
    FUN_03642964(Method_UniRx_ReactiveProperty<string>_set_Value__);
    DAT_07ef4cd7 = 1;
  }
  lVar7 = thunk_FUN_0367fe20(*(undefined8 *)puVar1);
  FUN_05e5ae34(lVar7,0);
  puVar5 = Method_UniRx_ReactiveProperty<UIScreenRhythm>_get_Value__;
  puVar4 = 
  Method_System_Collections_Generic_Dictionary<Column,_MultiColumnCollectionHeader_ColumnData>_set_Item__
  ;
  puVar3 = 
  Method_System_Collections_Generic_Dictionary<Column,_MultiColumnCollectionHeader_ColumnData>_Clear__
  ;
  puVar2 = PTR_DAT_07a00968;
  puVar1 = PTR_DAT_07a00960;
  if (lVar7 != 0) {
    puVar16 = (undefined8 *)(lVar7 + 0x10);
    *puVar16 = param_2;
    thunk_FUN_036b7ad0(puVar16,param_2);
    if (*(int *)(*(long *)(PTR_DAT_079f4610 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    uVar6 = FUN_05e31434(param_1,0,0);
    FUN_074ee0ac(uVar6 & 1,0);
    uVar6 = FUN_05c97640(*(undefined8 *)(lVar7 + 0x10),0);
    FUN_074ee0ac((uVar6 ^ 0xffffffff) & 1,0);
    uVar8 = FUN_07537668(param_1,0x74);
    uVar8 = FUN_03cc668c(uVar8,*(undefined8 *)puVar4);
    uVar9 = thunk_FUN_0367fe20(*(undefined8 *)puVar2);
    FUN_04159004(uVar9,lVar7,*(undefined8 *)puVar5,0);
    uVar9 = FUN_03cc7aa0(uVar8,uVar9,*(undefined8 *)puVar1);
    uVar9 = FUN_03cc668c(uVar9,*(undefined8 *)puVar4);
    puVar17 = (undefined8 *)(lVar7 + 0x18);
    *puVar17 = uVar9;
    thunk_FUN_036b7ad0(puVar17,uVar9);
    uVar10 = FUN_03c9bff0(*puVar17,*(undefined8 *)puVar3);
    puVar1 = Method_UniRx_ReactiveProperty<UIScreenRhythm>_set_Value__;
    if ((uVar10 & 1) != 0) {
      uVar8 = thunk_FUN_0367fe20(*(undefined8 *)Method_UniRx_ReactiveProperty<string>_set_Value__);
      FUN_074ecf84(uVar8,lVar7,*(undefined8 *)puVar1,0);
      return uVar8;
    }
    if (param_1 != (long *)0x0) {
      uVar15 = *puVar16;
      uVar9 = (**(code **)(*param_1 + 0x2d8))(param_1,*(undefined8 *)(*param_1 + 0x2e0));
      lVar7 = thunk_FUN_036aa1c8(Method_UniRx_ReactiveProperty<Color>__ctor__);
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      lVar7 = thunk_FUN_036aa1c8(Method_UniRx_ReactiveProperty<Color>__ctor__);
      lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x18);
      uVar11 = thunk_FUN_036aa1c8(PTR_DAT_07a42f20);
      uVar12 = thunk_FUN_036aa1c8(Method_UniRx_ReactiveProperty<Vector2>__ctor__);
      if (lVar7 == 0) {
        lVar7 = thunk_FUN_036aa1c8(Method_UniRx_ReactiveProperty<Color>__ctor__);
        if (*(int *)(lVar7 + 0xe4) == 0) {
          thunk_FUN_036a1978();
        }
        puVar1 = Method_UniRx_ReactiveProperty<Color>__ctor__;
        lVar7 = thunk_FUN_036aa1c8(Method_UniRx_ReactiveProperty<Color>__ctor__);
        uVar18 = **(undefined8 **)(lVar7 + 0xb8);
        thunk_FUN_036aa1c8(
                          Method_System_Collections_Generic_Dictionary<DataContractPairKey,_object>__ctor__
                          );
        lVar7 = thunk_FUN_0367fe20();
        uVar13 = thunk_FUN_036aa1c8(Method_UniRx_ReactiveProperty<Vector2>__ctor__);
        FUN_04159c38(lVar7,uVar18,uVar13,0);
        lVar14 = thunk_FUN_036aa1c8(puVar1);
        *(long *)(*(long *)(lVar14 + 0xb8) + 0x18) = lVar7;
        lVar14 = thunk_FUN_036aa1c8(puVar1);
        thunk_FUN_036b7ad0(*(long *)(lVar14 + 0xb8) + 0x18,lVar7);
      }
      uVar13 = thunk_FUN_036aa1c8(
                                 Method_System_Collections_Generic_Dictionary<Column,_MultiColumnCollectionHeader_ColumnData>_get_Item__
                                 );
      uVar8 = thunk_FUN_03cb9310(uVar8,lVar7,uVar13);
      uVar13 = thunk_FUN_036aa1c8(PTR_DAT_079f7350);
      uVar8 = thunk_FUN_03cc3d70(uVar8,uVar13);
      uVar8 = FUN_05c98f50(uVar11,uVar8,0);
      uVar8 = FUN_05c98b70(uVar12,uVar15,uVar9,uVar8,0);
      thunk_FUN_036aa1c8(PTR_DAT_07a003e8);
      uVar9 = thunk_FUN_0367fe20();
      FUN_075361e4(uVar9,uVar8);
      uVar8 = thunk_FUN_036aa1c8(Method_UniRx_ReactiveProperty<Vector3>__ctor__);
                    /* WARNING: Subroutine does not return */
      FUN_03642acc(uVar9,uVar8);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


