/*
FUNCTION_NAME: OVA.StellarX.Core.Framework.Presentation.Assets.Components.PhysicsComponent$$RequestSetAsDynamic
ENTRY_POINT: 044253c0
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_9;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2
*/


void OVA_StellarX_Core_Framework_Presentation_Assets_Components_PhysicsComponent__RequestSetAsDynamic
               (long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  long *plVar6;
  long *unaff_x23;
  
  if (param_1 != 0) {
    lVar1 = thunk_FUN_08990a60(param_1,0);
    plVar6 = *(long **)(unaff_x19 + 0xe0);
    if (plVar6 != (long *)0x0) {
      lVar3 = *plVar6;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *unaff_x23) {
            puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_04425424;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined8 *)FUN_040b1e00(plVar6,*unaff_x23,0);
LAB_04425424:
      (*(code *)*puVar2)(plVar6,puVar2[1]);
      if (lVar1 != 0) {
        FUN_08994f60(lVar1,0);
        if (*(long *)(unaff_x19 + 0x88) != 0) {
          lVar1 = FUN_04f384a8(*(long *)(unaff_x19 + 0x88),*(undefined8 *)PTR_DAT_092937d0);
          plVar6 = *(long **)(unaff_x19 + 0xe0);
          if (plVar6 != (long *)0x0) {
            lVar3 = *plVar6;
            uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
            if (uVar4 != 0) {
              piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
              do {
                if (*(long *)(piVar5 + -2) == *unaff_x23) {
                  puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 2) * 0x10 + 0x138);
                  goto LAB_044254b4;
                }
                uVar4 = uVar4 - 1;
                piVar5 = piVar5 + 4;
              } while (uVar4 != 0);
            }
            puVar2 = (undefined8 *)FUN_040b1e00(plVar6,*unaff_x23,2);
LAB_044254b4:
            (*(code *)*puVar2)(plVar6,puVar2[1]);
            if (lVar1 != 0) {
              FUN_089706c0(lVar1,0);
              if ((*(long *)(unaff_x19 + 0x88) != 0) &&
                 (lVar1 = FUN_04f38678(*(long *)(unaff_x19 + 0x88),1,*(undefined8 *)PTR_DAT_09285e80
                                      ), lVar1 != 0)) {
                lVar1 = thunk_FUN_08990a60(lVar1,0);
                plVar6 = *(long **)(unaff_x19 + 0xe0);
                if (plVar6 != (long *)0x0) {
                  lVar3 = *plVar6;
                  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
                  if (uVar4 != 0) {
                    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar5 + -2) == *unaff_x23) {
                        puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 1) * 0x10 + 0x138);
                        goto LAB_04425554;
                      }
                      uVar4 = uVar4 - 1;
                      piVar5 = piVar5 + 4;
                    } while (uVar4 != 0);
                  }
                  puVar2 = (undefined8 *)FUN_040b1e00(plVar6,*unaff_x23,1);
LAB_04425554:
                  (*(code *)*puVar2)(plVar6,puVar2[1]);
                  if (lVar1 != 0) {
                    FUN_08994f60(lVar1,0);
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
  FUN_04077830();
}


