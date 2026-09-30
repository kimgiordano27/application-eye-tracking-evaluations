/*
FUNCTION_NAME: Unity.Properties.TypeTraits<StyleCursor>$$get_IsArray
ENTRY_POINT: 058d2608
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction
EVIDENCE: validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2
*/


void Unity_Properties_TypeTraits<StyleCursor>__get_IsArray
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  undefined8 uVar6;
  long lVar7;
  undefined8 *unaff_x24;
  
  FUN_064612a8(param_2,param_3,*(undefined8 *)(*(long *)(param_1 + 0xc0) + 200));
  puVar1 = PTR_DAT_08495770;
  FUN_045993d4();
  if (((*(long *)(unaff_x19 + 0x2d8) != 0) &&
      (lVar5 = *(long *)(*(long *)(unaff_x19 + 0x2d8) + 0x338), lVar5 != 0)) &&
     (plVar2 = *(long **)(lVar5 + 0x2d8), plVar2 != (long *)0x0)) {
    (**(code **)(*plVar2 + 0x248))(plVar2,0,*(undefined8 *)(*plVar2 + 0x250));
    if ((*unaff_x21 != 0) && (lVar5 = *(long *)(*unaff_x21 + 0x330), lVar5 != 0)) {
      uVar6 = *(undefined8 *)(lVar5 + 0x2d8);
      uVar3 = thunk_FUN_03ac74bc(*unaff_x24);
      FUN_064612a8();
      FUN_045993d4(uVar6,uVar3,*(undefined8 *)puVar1);
      if ((*(long *)(unaff_x19 + 0x2d8) != 0) &&
         ((lVar5 = *(long *)(*(long *)(unaff_x19 + 0x2d8) + 0x330), lVar5 != 0 &&
          (plVar2 = *(long **)(lVar5 + 0x2d8), plVar2 != (long *)0x0)))) {
        (**(code **)(*plVar2 + 0x248))(plVar2,0,*(undefined8 *)(*plVar2 + 0x250));
        lVar5 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x60);
        if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_03ac4090();
        }
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        if ((*(ushort *)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x60) + 0x135) &
            1) == 0) {
          FUN_03ac4090();
        }
        FUN_07e0aa30();
        lVar7 = *(long *)(unaff_x19 + 0x2d0);
        lVar5 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0xa0);
        if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_03ac4090();
        }
        if (lVar7 != 0) {
          FUN_07e0aa30(lVar7,*(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x10),0);
          if (*(long *)(unaff_x19 + 0x2d0) != 0) {
            uVar4 = FUN_07e3cae8(*(long *)(unaff_x19 + 0x2d0),0);
            if ((uVar4 & 1) == 0) {
              return;
            }
            if ((*(long *)(unaff_x19 + 0x2d0) != 0) &&
               (plVar2 = *(long **)(*(long *)(unaff_x19 + 0x2d0) + 0x2e8), plVar2 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x058d2874. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(*plVar2 + 0x188))(plVar2,*(undefined8 *)(*plVar2 + 400));
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


