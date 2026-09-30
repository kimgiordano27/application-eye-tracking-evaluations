/*
FUNCTION_NAME: UniRx.ReactiveProperty<Vector4>$$set_Value
ENTRY_POINT: 04afc8a8
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


void UniRx_ReactiveProperty<Vector4>__set_Value(void)

{
  char in_NG;
  char in_OV;
  int iVar1;
  long lVar2;
  long lVar3;
  long unaff_x19;
  long *unaff_x20;
  long lVar4;
  
  if (in_NG == in_OV) {
    lVar4 = 4;
    do {
      lVar2 = *(long *)(unaff_x19 + 0x80);
      if (lVar2 == 0) {
LAB_04afc98c:
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      if ((ulong)*(uint *)(lVar2 + 0x18) <= lVar4 - 4U) {
LAB_04afc990:
                    /* WARNING: Subroutine does not return */
        FUN_03642c20();
      }
      lVar3 = unaff_x20[0x10];
      if (lVar3 == 0) goto LAB_04afc98c;
      if ((ulong)*(uint *)(lVar3 + 0x18) <= lVar4 - 4U) goto LAB_04afc990;
      *(undefined8 *)(lVar3 + lVar4 * 8) = *(undefined8 *)(lVar2 + lVar4 * 8);
      iVar1 = (**(code **)(*unaff_x20 + 0x188))();
      lVar2 = lVar4 + -3;
      lVar4 = lVar4 + 1;
    } while (lVar2 < iVar1);
  }
  return;
}


