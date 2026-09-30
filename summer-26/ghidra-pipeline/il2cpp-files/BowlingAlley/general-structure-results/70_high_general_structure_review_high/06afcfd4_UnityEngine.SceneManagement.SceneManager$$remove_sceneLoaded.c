/*
FUNCTION_NAME: UnityEngine.SceneManagement.SceneManager$$remove_sceneLoaded
ENTRY_POINT: 06afcfd4
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_8;ray_or_cast_sink_hits_1;telemetry_or_network_hits_2
*/


void UnityEngine_SceneManagement_SceneManager__remove_sceneLoaded
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *plVar8;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined4 uVar9;
  
  FUN_0501fc88();
  if ((unaff_x21 != 0) && (FUN_04b1cb08(), unaff_x20 != 0)) {
    FUN_06a5b940();
    if ((*(long *)(unaff_x19 + 0x20) != 0) &&
       (lVar2 = FUN_06be99dc(*(long *)(unaff_x19 + 0x20),0), lVar2 != 0)) {
      uVar9 = FUN_06bf4e88(lVar2,0);
      lVar2 = *(long *)(unaff_x19 + 0x68);
      *(undefined4 *)(unaff_x19 + 0xe0) = uVar9;
      *(undefined4 *)(unaff_x19 + 0xe4) = param_2;
      *(undefined4 *)(unaff_x19 + 0xe8) = param_3;
      FUN_066146ac(0);
      if (lVar2 != 0) {
        FUN_04ad6258(lVar2,*unaff_x23);
        lVar2 = *(long *)(unaff_x19 + 0x68);
        lVar4 = *(long *)(unaff_x19 + 0x70);
        uVar3 = thunk_FUN_032a56a0(*unaff_x24);
        FUN_051052b0();
        if ((lVar2 != 0) && (uVar3 = FUN_04b1f2f0(lVar2,uVar3,*unaff_x25), lVar4 != 0)) {
          FUN_06a5b940(lVar4,uVar3,0);
          puVar1 = PTR_DAT_0727b600;
          lVar2 = *(long *)(unaff_x19 + 0x70);
          if (*(int *)(*(long *)PTR_DAT_0727b600 + 0xe0) == 0) {
            thunk_FUN_032cd7c0();
          }
          if (DAT_076ce050 == '\0') {
            thunk_FUN_032e1da0(PTR_DAT_0727b600);
            DAT_076ce050 = '\x01';
          }
          lVar4 = *(long *)puVar1;
          if (*(int *)(lVar4 + 0xe0) == 0) {
            thunk_FUN_032cd7c0();
            lVar4 = *(long *)puVar1;
          }
          plVar8 = (long *)**(undefined8 **)(lVar4 + 0xb8);
          uVar3 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_0727b608);
          FUN_0501d53c();
          if (plVar8 != (long *)0x0) {
            lVar4 = *plVar8;
            uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
            if (uVar6 != 0) {
              piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
              do {
                if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_0727b610) {
                  puVar5 = (undefined8 *)(lVar4 + (long)(*piVar7 + 1) * 0x10 + 0x138);
                  goto LAB_06afd198;
                }
                uVar6 = uVar6 - 1;
                piVar7 = piVar7 + 4;
              } while (uVar6 != 0);
            }
            puVar5 = (undefined8 *)FUN_032937ac(plVar8,*(long *)PTR_DAT_0727b610,1);
LAB_06afd198:
            uVar3 = (*(code *)*puVar5)(plVar8,uVar3,puVar5[1]);
            if (lVar2 != 0) {
              FUN_06a5b940(lVar2,uVar3,0);
              if (*(long *)(unaff_x19 + 0xf0) != 0) {
                FUN_04b19bd4(*(long *)(unaff_x19 + 0xf0),0,
                             *(undefined8 *)
                              Method_UnityEngine_SubsystemsImplementation_SubsystemProvider<XRSessionSubsystem>__ctor__
                            );
                lVar2 = *(long *)(unaff_x19 + 0x70);
                lVar4 = *(long *)(unaff_x19 + 0xf0);
                uVar3 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_07284580);
                FUN_0501b95c();
                if ((lVar4 != 0) &&
                   (uVar3 = FUN_04b19e18(lVar4,uVar3,
                                         *(undefined8 *)
                                          Method_Unity_VisualScripting_FullSerializer_fsDirectConverter<LayerMask>__ctor__
                                        ), lVar2 != 0)) {
                  FUN_06a5b940(lVar2,uVar3,0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


