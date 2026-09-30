/*
FUNCTION_NAME: System.Runtime.Diagnostics.EtwDiagnosticTrace$$OnUnhandledException
ENTRY_POINT: 055d0090
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;ray_or_cast_sink_hits_1;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x055d06e0) */

void System_Runtime_Diagnostics_EtwDiagnosticTrace__OnUnhandledException(undefined8 *param_1)

{
  byte bVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long *plVar8;
  undefined8 *puVar9;
  long *plVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  int *piVar17;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x23;
  long *unaff_x24;
  
  plVar8 = (long *)thunk_FUN_02f45174(*param_1,*unaff_x23);
  *unaff_x24 = (long)plVar8;
  if (plVar8 != (long *)0x0) {
    lVar14 = *plVar8;
    uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *unaff_x23) {
          puVar9 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_055d00f4;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    puVar9 = (undefined8 *)FUN_02f421d0(plVar8,*unaff_x23,0);
LAB_055d00f4:
    (*(code *)*puVar9)(plVar8,puVar9[1]);
  }
  if (unaff_x21 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c0();
  }
  plVar8 = *(long **)(unaff_x20 + 0x48);
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  plVar8 = (long *)(**(code **)(*plVar8 + 0x1e8))(plVar8,*(undefined8 *)(*plVar8 + 0x1f0));
  puVar7 = 
  Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<float>_SubscribeAndUpdate__;
  puVar6 = 
  UnityEngine_XR_Interaction_Toolkit_Inputs_XRTransformStabilizer_StabilizePosition_00001216_PostfixBurstDelegate_TypeInfo
  ;
  puVar5 = 
  UnityEngine_XR_Interaction_Toolkit_Interactors_XRSocketInteractor_<UpdateCollidersAfterOnTriggerStay>d__67_TypeInfo
  ;
  puVar4 = 
  UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_IsWithinRadius_00000965_PostfixBurstDelegate_TypeInfo
  ;
  puVar3 = PTR_DAT_067c91b8;
  do {
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    lVar15 = *plVar8;
    lVar14 = *(long *)puVar3;
    uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == lVar14) {
          puVar9 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_055d01a8;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    puVar9 = (undefined8 *)FUN_02f421d0(plVar8,lVar14,0);
LAB_055d01a8:
    uVar16 = (*(code *)*puVar9)(plVar8,puVar9[1]);
    if ((uVar16 & 1) == 0) {
      plVar8 = (long *)thunk_FUN_02f45174(plVar8,*unaff_x23);
      if (plVar8 == (long *)0x0) {
        return;
      }
      lVar14 = *plVar8;
      uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar16 == 0) goto LAB_055d05ec;
      piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      break;
    }
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    lVar15 = *plVar8;
    lVar14 = *(long *)puVar3;
    uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == lVar14) {
          puVar9 = (undefined8 *)(lVar15 + (long)(*piVar17 + 1) * 0x10 + 0x138);
          goto LAB_055d0210;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    puVar9 = (undefined8 *)FUN_02f421d0(plVar8,lVar14,1);
LAB_055d0210:
    plVar10 = (long *)(*(code *)*puVar9)(plVar8,puVar9[1]);
    if (plVar10 == (long *)0x0) {
LAB_055d0290:
      uVar16 = FUN_055d0e44(plVar10);
      plVar11 = *(long **)(unaff_x19 + 0x20);
      if ((uVar16 & 1) == 0) {
        if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        lVar14 = plVar10[7];
        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        if (*(int *)(lVar14 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089d0();
        }
        if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        lVar14 = (**(code **)(*plVar11 + 0x308))
                           (plVar11,*(undefined8 *)(lVar14 + 0x20),*(undefined8 *)(*plVar11 + 0x310)
                           );
        if (lVar14 != 0) {
          lVar14 = plVar10[7];
          if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          if (*(int *)(lVar14 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089d0();
          }
          plVar10 = *(long **)(unaff_x19 + 0x20);
          if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          (**(code **)(*plVar10 + 0x318))
                    (plVar10,*(undefined8 *)(lVar14 + 0x20),0,*(undefined8 *)(*plVar10 + 800));
        }
      }
      else {
        if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        (**(code **)(*plVar11 + 0x318))(plVar11,plVar10,plVar10,*(undefined8 *)(*plVar11 + 800));
      }
    }
    else {
      bVar1 = *(byte *)(*plVar10 + 0x130);
      bVar2 = *(byte *)(*(long *)puVar6 + 0x130);
      if ((bVar1 < bVar2) ||
         (lVar14 = *(long *)(*plVar10 + 200),
         *(long *)(lVar14 + (ulong)bVar2 * 8 + -8) != *(long *)puVar6)) {
                    /* WARNING: Subroutine does not return */
        FUN_02f08d48(plVar10);
      }
      bVar2 = *(byte *)(*(long *)puVar4 + 0x130);
      if ((bVar1 < bVar2) || (*(long *)(lVar14 + (ulong)bVar2 * 8 + -8) != *(long *)puVar4)) {
        bVar2 = *(byte *)(*(long *)puVar5 + 0x130);
        if ((bVar1 < bVar2) || (*(long *)(lVar14 + (ulong)bVar2 * 8 + -8) != *(long *)puVar5)) {
                    /* WARNING: Subroutine does not return */
          FUN_02f08d48(plVar10);
        }
        goto LAB_055d0290;
      }
      uVar16 = FUN_055da0c8(plVar10,1);
      plVar11 = *(long **)(unaff_x19 + 0x20);
      if ((uVar16 & 1) == 0) {
        lVar14 = (**(code **)(*plVar10 + 0x268))(plVar10,*(undefined8 *)(*plVar10 + 0x270));
        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        if (*(int *)(lVar14 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089d0();
        }
        if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        lVar14 = (**(code **)(*plVar11 + 0x308))
                           (plVar11,*(undefined8 *)(lVar14 + 0x20),*(undefined8 *)(*plVar11 + 0x310)
                           );
        if (lVar14 != 0) {
          plVar11 = *(long **)(unaff_x19 + 0x20);
          lVar14 = (**(code **)(*plVar10 + 0x268))(plVar10,*(undefined8 *)(*plVar10 + 0x270));
          if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          if (*(int *)(lVar14 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089d0();
          }
          if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          (**(code **)(*plVar11 + 0x318))
                    (plVar11,*(undefined8 *)(lVar14 + 0x20),0,*(undefined8 *)(*plVar11 + 800));
        }
        plVar11 = *(long **)(unaff_x19 + 0x20);
        lVar14 = FUN_055a4c24(plVar10,0);
        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        if (*(int *)(lVar14 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089d0();
        }
        if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        lVar14 = (**(code **)(*plVar11 + 0x308))
                           (plVar11,*(undefined8 *)(lVar14 + 0x20),*(undefined8 *)(*plVar11 + 0x310)
                           );
        if (lVar14 != 0) {
          plVar11 = *(long **)(unaff_x19 + 0x20);
          lVar14 = FUN_055a4c24(plVar10,0);
          if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          if (*(int *)(lVar14 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089d0();
          }
          if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          (**(code **)(*plVar11 + 0x318))
                    (plVar11,*(undefined8 *)(lVar14 + 0x20),0,*(undefined8 *)(*plVar11 + 800));
        }
        lVar14 = (**(code **)(*plVar10 + 0x2c8))(plVar10,*(undefined8 *)(*plVar10 + 0x2d0));
        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        lVar14 = *(long *)(lVar14 + 0x48);
        uVar12 = FUN_055a4c24(plVar10,0);
        uVar13 = thunk_FUN_02f45270(*(undefined8 *)puVar5);
        FUN_055aee44(uVar13,*(undefined8 *)puVar7,uVar12,0);
        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        plVar10 = (long *)FUN_0557ba08(lVar14,uVar13,0);
        if (plVar10 != (long *)0x0) {
          bVar1 = *(byte *)(*(long *)puVar5 + 0x130);
          if ((*(byte *)(*plVar10 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar5)) {
                    /* WARNING: Subroutine does not return */
            FUN_02f08d48(plVar10);
          }
          plVar11 = *(long **)(unaff_x19 + 0x20);
          if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          lVar14 = (**(code **)(*plVar11 + 0x308))
                             (plVar11,plVar10,*(undefined8 *)(*plVar11 + 0x310));
          if (lVar14 != 0) {
            plVar11 = *(long **)(unaff_x19 + 0x20);
            if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f089c8();
            }
            (**(code **)(*plVar11 + 0x318))(plVar11,plVar10,0,*(undefined8 *)(*plVar11 + 800));
          }
          lVar14 = plVar10[7];
          if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          if (*(int *)(lVar14 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089d0();
          }
          plVar11 = *(long **)(unaff_x19 + 0x20);
          if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          lVar14 = (**(code **)(*plVar11 + 0x308))
                             (plVar11,*(undefined8 *)(lVar14 + 0x20),
                              *(undefined8 *)(*plVar11 + 0x310));
          if (lVar14 != 0) {
            lVar14 = plVar10[7];
            if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f089c8();
            }
            if (*(int *)(lVar14 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f089d0();
            }
            plVar10 = *(long **)(unaff_x19 + 0x20);
            if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f089c8();
            }
            (**(code **)(*plVar10 + 0x318))
                      (plVar10,*(undefined8 *)(lVar14 + 0x20),0,*(undefined8 *)(*plVar10 + 800));
          }
        }
      }
      else {
        if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        (**(code **)(*plVar11 + 0x318))(plVar11,plVar10,plVar10,*(undefined8 *)(*plVar11 + 800));
      }
    }
  } while( true );
  while( true ) {
    uVar16 = uVar16 - 1;
    piVar17 = piVar17 + 4;
    if (uVar16 == 0) break;
    if (*(long *)(piVar17 + -2) == *unaff_x23) {
      puVar9 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
      goto LAB_055d0608;
    }
  }
LAB_055d05ec:
  puVar9 = (undefined8 *)FUN_02f421d0(plVar8,*unaff_x23,0);
LAB_055d0608:
  (*(code *)*puVar9)(plVar8,puVar9[1]);
  return;
}


