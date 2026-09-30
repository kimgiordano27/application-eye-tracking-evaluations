/*
FUNCTION_NAME: Unity.Properties.TypeConverter<TransformOrigin,-StyleTransformOrigin>$$Invoke
ENTRY_POINT: 03f506b4
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction
EVIDENCE: validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2
*/


void Unity_Properties_TypeConverter<TransformOrigin,_StyleTransformOrigin>__Invoke
               (long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long lVar7;
  undefined8 uVar8;
  
  FUN_05df2dbc(param_2,*(undefined8 *)(param_1 + 0x40));
  plVar3 = (long *)*unaff_x21;
  if (plVar3 != (long *)0x0) {
    lVar4 = (**(code **)(*plVar3 + 0x988))(plVar3,*(undefined8 *)(*plVar3 + 0x990));
    uVar5 = thunk_FUN_02b79644(*(undefined8 *)PTR_DAT_06320e98);
    FUN_04981ae4();
    if (lVar4 != 0) {
      FUN_0316d62c(lVar4,uVar5,0,*(undefined8 *)PTR_DAT_06320e90);
      puVar1 = PTR_DAT_06321868;
      if ((*unaff_x21 != 0) && (lVar4 = *(long *)(*unaff_x21 + 0x338), lVar4 != 0)) {
        uVar8 = *(undefined8 *)(lVar4 + 0x2d8);
        uVar5 = thunk_FUN_02b79644(*(undefined8 *)PTR_DAT_06321868);
        FUN_04981ae4();
        puVar2 = PTR_DAT_06321870;
        FUN_031ea8a8(uVar8,uVar5,*(undefined8 *)PTR_DAT_06321870);
        if ((*(long *)(unaff_x19 + 0x2d8) != 0) &&
           ((lVar4 = *(long *)(*(long *)(unaff_x19 + 0x2d8) + 0x338), lVar4 != 0 &&
            (plVar3 = *(long **)(lVar4 + 0x2d8), plVar3 != (long *)0x0)))) {
          (**(code **)(*plVar3 + 0x248))(plVar3,0,*(undefined8 *)(*plVar3 + 0x250));
          if ((*unaff_x21 != 0) && (lVar4 = *(long *)(*unaff_x21 + 0x330), lVar4 != 0)) {
            uVar8 = *(undefined8 *)(lVar4 + 0x2d8);
            uVar5 = thunk_FUN_02b79644(*(undefined8 *)puVar1);
            FUN_04981ae4();
            FUN_031ea8a8(uVar8,uVar5,*(undefined8 *)puVar2);
            if (((*(long *)(unaff_x19 + 0x2d8) != 0) &&
                (lVar4 = *(long *)(*(long *)(unaff_x19 + 0x2d8) + 0x330), lVar4 != 0)) &&
               (plVar3 = *(long **)(lVar4 + 0x2d8), plVar3 != (long *)0x0)) {
              (**(code **)(*plVar3 + 0x248))(plVar3,0,*(undefined8 *)(*plVar3 + 0x250));
              lVar4 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x60);
              if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
                lVar4 = FUN_02b76218();
              }
              if (*(int *)(lVar4 + 0xe4) == 0) {
                thunk_FUN_02b9ad44();
              }
              if ((*(ushort *)
                    (*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x60) + 0x135) & 1)
                  == 0) {
                FUN_02b76218();
              }
              FUN_05df2dbc();
              lVar7 = *(long *)(unaff_x19 + 0x2d0);
              lVar4 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0xa0);
              if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
                lVar4 = FUN_02b76218();
              }
              if (lVar7 != 0) {
                FUN_05df2dbc(lVar7,*(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x10),0);
                if (*(long *)(unaff_x19 + 0x2d0) != 0) {
                  uVar6 = UnityEngine_UIElements_PointerLeaveEvent__PreDispatch
                                    (*(long *)(unaff_x19 + 0x2d0),0);
                  if ((uVar6 & 1) == 0) {
                    return;
                  }
                  if ((*(long *)(unaff_x19 + 0x2d0) != 0) &&
                     (plVar3 = *(long **)(*(long *)(unaff_x19 + 0x2d0) + 0x2e8),
                     plVar3 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x03f509c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    (**(code **)(*plVar3 + 0x188))(plVar3,*(undefined8 *)(*plVar3 + 400));
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


