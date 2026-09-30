/*
FUNCTION_NAME: UniRx.ReactiveProperty<Vector2>$$set_Value
ENTRY_POINT: 04afb8d0
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


uint UniRx_ReactiveProperty<Vector2>__set_Value(long param_1)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  int unaff_w22;
  uint unaff_w23;
  undefined8 in_stack_000000d8;
  
  while( true ) {
    unaff_w22 = unaff_w22 + 1;
    iVar2 = (**(code **)(param_1 + 0x188))();
    if (iVar2 <= unaff_w22) break;
    in_stack_000000d8 = FUN_04afb260();
    lVar3 = **(long **)(*(long *)(unaff_x19 + 0x20) + 0xc0);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0367c9fc();
    }
    lVar6 = *unaff_x20;
    bVar1 = *(byte *)(lVar6 + 0x130);
    if ((bVar1 < *(byte *)(lVar3 + 0x130)) ||
       (*(long *)(*(long *)(lVar6 + 200) + (ulong)*(byte *)(lVar3 + 0x130) * 8 + -8) != lVar3)) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    lVar3 = **(long **)(*(long *)(unaff_x19 + 0x20) + 0xc0);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0367c9fc();
      lVar6 = *unaff_x20;
      bVar1 = *(byte *)(lVar6 + 0x130);
    }
    if (bVar1 < *(byte *)(lVar3 + 0x130)) {
      plVar4 = (long *)0x0;
    }
    else {
      plVar4 = unaff_x20;
      if (*(long *)(*(long *)(lVar6 + 200) + (ulong)*(byte *)(lVar3 + 0x130) * 8 + -8) != lVar3) {
        plVar4 = (long *)0x0;
      }
    }
    uVar5 = FUN_04afb260(plVar4,unaff_w22,
                         *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x70));
    unaff_w23 = FUN_04acf7d4(&stack0x000000d8,uVar5,
                             *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xd8));
    if ((unaff_w23 & 1) == 0) break;
    param_1 = *unaff_x21;
  }
  return unaff_w23 & 1;
}


