/*
FUNCTION_NAME: Meta.XR.EnvironmentRaycastManager$$PlaceBox
ENTRY_POINT: 01465a4c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


long * Meta_XR_EnvironmentRaycastManager__PlaceBox(void)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined4 *puVar6;
  long unaff_x19;
  int iVar7;
  long *unaff_x21;
  long in_stack_00000008;
  
  lVar2 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                    ();
  if (DAT_03774d76 == '\0') {
    thunk_FUN_00d48444(
                      Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                      );
    DAT_03774d76 = '\x01';
  }
  if (lVar2 != 0) {
    puVar6 = *(undefined4 **)
              (*(long *)
                Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__ +
              0xb8);
    FUN_0269f618(*puVar6,puVar6[1],puVar6[2],lVar2,0);
    plVar3 = (long *)FUN_010e5800();
    if ((plVar3 != (long *)0x0) && (*(undefined1 *)(plVar3 + 6) = 0, unaff_x21 != (long *)0x0)) {
      uVar4 = (**(code **)(*unaff_x21 + 0x178))();
      (**(code **)(*plVar3 + 0x188))(plVar3,uVar4,*(undefined8 *)(*plVar3 + 400));
      lVar2 = FUN_0268fd10(plVar3,0);
      uVar4 = FUN_0268fd10();
      if (lVar2 != 0) {
        FUN_0269fea8(lVar2,uVar4,0);
        plVar5 = (long *)(**(code **)(*plVar3 + 0x1b8))(plVar3,*(undefined8 *)(*plVar3 + 0x1c0));
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 0x528))();
          puVar1 = StringLiteral_1415;
          if (0 < *(int *)(unaff_x19 + 0x18)) {
            iVar7 = 0;
            do {
              lVar2 = (**(code **)(*plVar3 + 0x198))(plVar3,*(undefined8 *)(*plVar3 + 0x1a0));
              FUN_0132138c();
              if ((in_stack_00000008 == 0) ||
                 (uVar4 = FUN_0268fd4c(in_stack_00000008,0), lVar2 == 0)) goto LAB_01465bf0;
              FUN_00ac8520(lVar2,uVar4,*(undefined8 *)puVar1);
              iVar7 = iVar7 + 1;
            } while (iVar7 < *(int *)(unaff_x19 + 0x18));
          }
          return plVar3;
        }
      }
    }
  }
LAB_01465bf0:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


