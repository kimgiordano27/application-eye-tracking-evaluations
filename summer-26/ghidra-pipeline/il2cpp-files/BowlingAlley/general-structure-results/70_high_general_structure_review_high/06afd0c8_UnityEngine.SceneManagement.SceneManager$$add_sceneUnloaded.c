/*
FUNCTION_NAME: UnityEngine.SceneManagement.SceneManager$$add_sceneUnloaded
ENTRY_POINT: 06afd0c8
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_4;ray_or_cast_sink_hits_1;telemetry_or_network_hits_2
*/


void UnityEngine_SceneManagement_SceneManager__add_sceneUnloaded(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long *plVar6;
  long lVar7;
  
  if (DAT_076ce050 == '\0') {
    thunk_FUN_032e1da0(PTR_DAT_0727b600);
    DAT_076ce050 = '\x01';
  }
  lVar1 = *unaff_x21;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar1 = *unaff_x21;
  }
  plVar6 = (long *)**(undefined8 **)(lVar1 + 0xb8);
  uVar2 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_0727b608);
  FUN_0501d53c();
  if (plVar6 != (long *)0x0) {
    lVar1 = *plVar6;
    uVar4 = (ulong)*(ushort *)(lVar1 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_0727b610) {
          puVar3 = (undefined8 *)(lVar1 + (long)(*piVar5 + 1) * 0x10 + 0x138);
          goto LAB_06afd198;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined8 *)FUN_032937ac(plVar6,*(long *)PTR_DAT_0727b610,1);
LAB_06afd198:
    (*(code *)*puVar3)(plVar6,uVar2,puVar3[1]);
    if (unaff_x20 != 0) {
      FUN_06a5b940();
      if (*(long *)(unaff_x19 + 0xf0) != 0) {
        FUN_04b19bd4(*(long *)(unaff_x19 + 0xf0),0,
                     *(undefined8 *)
                      Method_UnityEngine_SubsystemsImplementation_SubsystemProvider<XRSessionSubsystem>__ctor__
                    );
        lVar1 = *(long *)(unaff_x19 + 0x70);
        lVar7 = *(long *)(unaff_x19 + 0xf0);
        uVar2 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_07284580);
        FUN_0501b95c();
        if ((lVar7 != 0) &&
           (uVar2 = FUN_04b19e18(lVar7,uVar2,
                                 *(undefined8 *)
                                  Method_Unity_VisualScripting_FullSerializer_fsDirectConverter<LayerMask>__ctor__
                                ), lVar1 != 0)) {
          FUN_06a5b940(lVar1,uVar2,0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


