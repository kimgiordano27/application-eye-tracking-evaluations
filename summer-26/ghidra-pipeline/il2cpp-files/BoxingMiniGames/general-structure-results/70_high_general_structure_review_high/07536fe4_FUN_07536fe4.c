/*
FUNCTION_NAME: FUN_07536fe4
ENTRY_POINT: 07536fe4
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_18;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_4;source_validity_pose_sink_structure
*/


undefined8 FUN_07536fe4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  
  puVar3 = Method_UniRx_ReactiveProperty<int>_get_Value__;
  if ((DAT_07ef4cd1 & 1) == 0) {
    FUN_03642964(Method_UniRx_ReactiveProperty<bool>_set_Value__);
    FUN_03642964(Method_UniRx_ReactiveProperty<Bounds>__ctor__);
    FUN_03642964(Method_UniRx_ReactiveProperty<Bounds>__ctor__);
    FUN_03642964(Method_UniRx_ReactiveProperty<int>_set_Value__);
    FUN_03642964(Method_UniRx_ReactiveProperty<long>__ctor__);
    FUN_03642964(Method_UniRx_ReactiveProperty<long>__ctor__);
    FUN_03642964(Method_UniRx_ReactiveProperty<int>_get_Value__);
    FUN_03642964(Method_UniRx_ReactiveProperty<Color>__ctor__);
    FUN_03642964(Method_UniRx_ReactiveProperty<Quaternion>__ctor__);
    DAT_07ef4cd1 = 1;
  }
  lVar4 = thunk_FUN_0367fe20(*(undefined8 *)puVar3);
  FUN_05e5ae34(lVar4,0);
  puVar2 = Method_UniRx_ReactiveProperty<Quaternion>__ctor__;
  puVar1 = Method_UniRx_ReactiveProperty<long>__ctor__;
  puVar3 = Method_UniRx_ReactiveProperty<Color>__ctor__;
  if ((param_1 != 0) && (lVar4 != 0)) {
    plVar9 = (long *)(lVar4 + 0x10);
    *plVar9 = *(long *)(param_1 + 0x10);
    thunk_FUN_036b7ad0(plVar9);
    uVar5 = thunk_FUN_0367fe20(*(undefined8 *)puVar2);
    FUN_074ecce8(uVar5,lVar4,*(undefined8 *)puVar1,0);
    lVar4 = *(long *)puVar3;
    uVar10 = *(undefined8 *)(param_1 + 0x18);
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_036a1978();
      lVar4 = *(long *)puVar3;
    }
    puVar2 = Method_UniRx_ReactiveProperty<Bounds>__ctor__;
    puVar1 = Method_UniRx_ReactiveProperty<bool>_set_Value__;
    puVar8 = *(undefined8 **)(lVar4 + 0xb8);
    lVar11 = puVar8[1];
    if (lVar11 == 0) {
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_036a1978();
        puVar8 = *(undefined8 **)(*(long *)puVar3 + 0xb8);
      }
      uVar12 = *puVar8;
      lVar11 = thunk_FUN_0367fe20(*(undefined8 *)Method_UniRx_ReactiveProperty<Bounds>__ctor__);
      FUN_04159c38(lVar11,uVar12,*(undefined8 *)Method_UniRx_ReactiveProperty<long>__ctor__,0);
      plVar6 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 8);
      *plVar6 = lVar11;
      thunk_FUN_036b7ad0(plVar6,lVar11);
    }
    uVar10 = FUN_03cb9310(uVar10,lVar11,*(undefined8 *)puVar1);
    uVar10 = FUN_03cc3d70(uVar10,*(undefined8 *)puVar2);
    puVar3 = Method_UniRx_ReactiveProperty<int>_set_Value__;
    plVar9 = (long *)*plVar9;
    if (plVar9 != (long *)0x0) {
      uVar12 = (**(code **)(*plVar9 + 0x1b8))(plVar9,*(undefined8 *)(*plVar9 + 0x1c0));
      uVar7 = thunk_FUN_0367fe20(*(undefined8 *)puVar3);
      FUN_074ed3d8(uVar7,uVar5,uVar10,uVar12,0);
      return uVar7;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


