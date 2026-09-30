/*
FUNCTION_NAME: FUN_055cfe78
ENTRY_POINT: 055cfe78
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;ray_or_cast_sink_hits_2;telemetry_or_network_hits_4;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x055d06e0) */
/* WARNING: Removing unreachable block (ram,0x055d06d8) */

void FUN_055cfe78(long param_1,long param_2)

{
  byte bVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long *plVar9;
  undefined8 *puVar10;
  long *plVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  int *piVar18;
  
  if ((DAT_06bbfba1 & 1) == 0) {
    FUN_02f08768(
                UnityEngine_XR_Interaction_Toolkit_Inputs_XRTransformStabilizer_StabilizePosition_00001216_PostfixBurstDelegate_TypeInfo
                );
    FUN_02f08768(System_Collections_Generic_List<BodyPoseData_JointData>_TypeInfo);
    FUN_02f08768(
                UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_IsWithinRadius_00000965_PostfixBurstDelegate_TypeInfo
                );
    FUN_02f08768(PTR_DAT_067c91b0);
    FUN_02f08768(PTR_DAT_067c91b8);
    FUN_02f08768(
                UnityEngine_XR_Interaction_Toolkit_Interactors_XRSocketInteractor_<UpdateCollidersAfterOnTriggerStay>d__67_TypeInfo
                );
    FUN_02f08768(
                Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<float>_SubscribeAndUpdate__
                );
    DAT_06bbfba1 = 1;
  }
  if ((param_2 != 0) && (plVar9 = *(long **)(param_2 + 0x40), plVar9 != (long *)0x0)) {
    plVar9 = (long *)(**(code **)(*plVar9 + 0x1e8))(plVar9,*(undefined8 *)(*plVar9 + 0x1f0));
    puVar5 = System_Collections_Generic_List<BodyPoseData_JointData>_TypeInfo;
    puVar4 = PTR_DAT_067c91b8;
    do {
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      lVar16 = *plVar9;
      lVar15 = *(long *)puVar4;
      uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
      if (uVar17 != 0) {
        piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == lVar15) {
            puVar10 = (undefined8 *)(lVar16 + (long)*piVar18 * 0x10 + 0x138);
            goto LAB_055cff9c;
          }
          uVar17 = uVar17 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar17 != 0);
      }
      puVar10 = (undefined8 *)FUN_02f421d0(plVar9,lVar15,0);
LAB_055cff9c:
      uVar17 = (*(code *)*puVar10)(plVar9,puVar10[1]);
      puVar3 = PTR_DAT_067c91b0;
      if ((uVar17 & 1) == 0) {
        plVar9 = (long *)thunk_FUN_02f45174(plVar9,*(undefined8 *)PTR_DAT_067c91b0);
        if (plVar9 == (long *)0x0) goto LAB_055d0100;
        lVar15 = *plVar9;
        uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar17 == 0) goto LAB_055d00d8;
        piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        goto LAB_055d00c0;
      }
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      lVar16 = *plVar9;
      lVar15 = *(long *)puVar4;
      uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
      if (uVar17 != 0) {
        piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == lVar15) {
            puVar10 = (undefined8 *)(lVar16 + (long)(*piVar18 + 1) * 0x10 + 0x138);
            goto LAB_055d0004;
          }
          uVar17 = uVar17 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar17 != 0);
      }
      puVar10 = (undefined8 *)FUN_02f421d0(plVar9,lVar15,1);
LAB_055d0004:
      plVar11 = (long *)(*(code *)*puVar10)(plVar9,puVar10[1]);
      if (plVar11 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)puVar5 + 0x130);
        if ((*(byte *)(*plVar11 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar5)) {
                    /* WARNING: Subroutine does not return */
          FUN_02f08d48(plVar11);
        }
      }
      uVar17 = FUN_055d093c(plVar11);
      if ((uVar17 & 1) != 0) {
        plVar12 = *(long **)(param_1 + 0x20);
        if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        (**(code **)(*plVar12 + 0x318))(plVar12,plVar11,plVar11,*(undefined8 *)(*plVar12 + 800));
      }
    } while( true );
  }
  goto LAB_055d0680;
  while( true ) {
    uVar17 = uVar17 - 1;
    piVar18 = piVar18 + 4;
    if (uVar17 == 0) break;
LAB_055d05d4:
    if (*(long *)(piVar18 + -2) == *(long *)puVar3) {
      puVar10 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
      goto LAB_055d0608;
    }
  }
LAB_055d05ec:
  puVar10 = (undefined8 *)FUN_02f421d0(plVar9,*(long *)puVar3,0);
LAB_055d0608:
  (*(code *)*puVar10)(plVar9,puVar10[1]);
  return;
  while( true ) {
    uVar17 = uVar17 - 1;
    piVar18 = piVar18 + 4;
    if (uVar17 == 0) break;
LAB_055d00c0:
    if (*(long *)(piVar18 + -2) == *(long *)puVar3) {
      puVar10 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
      goto LAB_055d00f4;
    }
  }
LAB_055d00d8:
  puVar10 = (undefined8 *)FUN_02f421d0(plVar9,*(long *)puVar3,0);
LAB_055d00f4:
  (*(code *)*puVar10)(plVar9,puVar10[1]);
LAB_055d0100:
  plVar9 = *(long **)(param_2 + 0x48);
  if (plVar9 != (long *)0x0) {
    plVar9 = (long *)(**(code **)(*plVar9 + 0x1e8))(plVar9,*(undefined8 *)(*plVar9 + 0x1f0));
    puVar8 = 
    Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<float>_SubscribeAndUpdate__;
    puVar7 = 
    UnityEngine_XR_Interaction_Toolkit_Inputs_XRTransformStabilizer_StabilizePosition_00001216_PostfixBurstDelegate_TypeInfo
    ;
    puVar6 = 
    UnityEngine_XR_Interaction_Toolkit_Interactors_XRSocketInteractor_<UpdateCollidersAfterOnTriggerStay>d__67_TypeInfo
    ;
    puVar5 = 
    UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_IsWithinRadius_00000965_PostfixBurstDelegate_TypeInfo
    ;
    puVar4 = PTR_DAT_067c91b8;
    do {
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      lVar16 = *plVar9;
      lVar15 = *(long *)puVar4;
      uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
      if (uVar17 != 0) {
        piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == lVar15) {
            puVar10 = (undefined8 *)(lVar16 + (long)*piVar18 * 0x10 + 0x138);
            goto LAB_055d01a8;
          }
          uVar17 = uVar17 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar17 != 0);
      }
      puVar10 = (undefined8 *)FUN_02f421d0(plVar9,lVar15,0);
LAB_055d01a8:
      uVar17 = (*(code *)*puVar10)(plVar9,puVar10[1]);
      if ((uVar17 & 1) == 0) {
        plVar9 = (long *)thunk_FUN_02f45174(plVar9,*(undefined8 *)puVar3);
        if (plVar9 == (long *)0x0) {
          return;
        }
        lVar15 = *plVar9;
        uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar17 == 0) goto LAB_055d05ec;
        piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        goto LAB_055d05d4;
      }
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      lVar16 = *plVar9;
      lVar15 = *(long *)puVar4;
      uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
      if (uVar17 != 0) {
        piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == lVar15) {
            puVar10 = (undefined8 *)(lVar16 + (long)(*piVar18 + 1) * 0x10 + 0x138);
            goto LAB_055d0210;
          }
          uVar17 = uVar17 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar17 != 0);
      }
      puVar10 = (undefined8 *)FUN_02f421d0(plVar9,lVar15,1);
LAB_055d0210:
      plVar11 = (long *)(*(code *)*puVar10)(plVar9,puVar10[1]);
      if (plVar11 == (long *)0x0) {
LAB_055d0290:
        uVar17 = FUN_055d0e44(plVar11);
        plVar12 = *(long **)(param_1 + 0x20);
        if ((uVar17 & 1) == 0) {
          if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          lVar15 = plVar11[7];
          if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          if (*(int *)(lVar15 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089d0();
          }
          if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          lVar15 = (**(code **)(*plVar12 + 0x308))
                             (plVar12,*(undefined8 *)(lVar15 + 0x20),
                              *(undefined8 *)(*plVar12 + 0x310));
          if (lVar15 != 0) {
            lVar15 = plVar11[7];
            if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f089c8();
            }
            if (*(int *)(lVar15 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f089d0();
            }
            plVar11 = *(long **)(param_1 + 0x20);
            if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f089c8();
            }
            (**(code **)(*plVar11 + 0x318))
                      (plVar11,*(undefined8 *)(lVar15 + 0x20),0,*(undefined8 *)(*plVar11 + 800));
          }
        }
        else {
          if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          (**(code **)(*plVar12 + 0x318))(plVar12,plVar11,plVar11,*(undefined8 *)(*plVar12 + 800));
        }
      }
      else {
        bVar1 = *(byte *)(*plVar11 + 0x130);
        bVar2 = *(byte *)(*(long *)puVar7 + 0x130);
        if ((bVar1 < bVar2) ||
           (lVar15 = *(long *)(*plVar11 + 200),
           *(long *)(lVar15 + (ulong)bVar2 * 8 + -8) != *(long *)puVar7)) {
                    /* WARNING: Subroutine does not return */
          FUN_02f08d48(plVar11);
        }
        bVar2 = *(byte *)(*(long *)puVar5 + 0x130);
        if ((bVar1 < bVar2) || (*(long *)(lVar15 + (ulong)bVar2 * 8 + -8) != *(long *)puVar5)) {
          bVar2 = *(byte *)(*(long *)puVar6 + 0x130);
          if ((bVar1 < bVar2) || (*(long *)(lVar15 + (ulong)bVar2 * 8 + -8) != *(long *)puVar6)) {
                    /* WARNING: Subroutine does not return */
            FUN_02f08d48(plVar11);
          }
          goto LAB_055d0290;
        }
        uVar17 = FUN_055da0c8(plVar11,1);
        plVar12 = *(long **)(param_1 + 0x20);
        if ((uVar17 & 1) == 0) {
          lVar15 = (**(code **)(*plVar11 + 0x268))(plVar11,*(undefined8 *)(*plVar11 + 0x270));
          if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          if (*(int *)(lVar15 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089d0();
          }
          if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          lVar15 = (**(code **)(*plVar12 + 0x308))
                             (plVar12,*(undefined8 *)(lVar15 + 0x20),
                              *(undefined8 *)(*plVar12 + 0x310));
          if (lVar15 != 0) {
            plVar12 = *(long **)(param_1 + 0x20);
            lVar15 = (**(code **)(*plVar11 + 0x268))(plVar11,*(undefined8 *)(*plVar11 + 0x270));
            if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f089c8();
            }
            if (*(int *)(lVar15 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f089d0();
            }
            if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f089c8();
            }
            (**(code **)(*plVar12 + 0x318))
                      (plVar12,*(undefined8 *)(lVar15 + 0x20),0,*(undefined8 *)(*plVar12 + 800));
          }
          plVar12 = *(long **)(param_1 + 0x20);
          lVar15 = FUN_055a4c24(plVar11,0);
          if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          if (*(int *)(lVar15 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089d0();
          }
          if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          lVar15 = (**(code **)(*plVar12 + 0x308))
                             (plVar12,*(undefined8 *)(lVar15 + 0x20),
                              *(undefined8 *)(*plVar12 + 0x310));
          if (lVar15 != 0) {
            plVar12 = *(long **)(param_1 + 0x20);
            lVar15 = FUN_055a4c24(plVar11,0);
            if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f089c8();
            }
            if (*(int *)(lVar15 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f089d0();
            }
            if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f089c8();
            }
            (**(code **)(*plVar12 + 0x318))
                      (plVar12,*(undefined8 *)(lVar15 + 0x20),0,*(undefined8 *)(*plVar12 + 800));
          }
          lVar15 = (**(code **)(*plVar11 + 0x2c8))(plVar11,*(undefined8 *)(*plVar11 + 0x2d0));
          if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          lVar15 = *(long *)(lVar15 + 0x48);
          uVar13 = FUN_055a4c24(plVar11,0);
          uVar14 = thunk_FUN_02f45270(*(undefined8 *)puVar6);
          FUN_055aee44(uVar14,*(undefined8 *)puVar8,uVar13,0);
          if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          plVar11 = (long *)FUN_0557ba08(lVar15,uVar14,0);
          if (plVar11 != (long *)0x0) {
            bVar1 = *(byte *)(*(long *)puVar6 + 0x130);
            if ((*(byte *)(*plVar11 + 0x130) < bVar1) ||
               (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar6)) {
                    /* WARNING: Subroutine does not return */
              FUN_02f08d48(plVar11);
            }
            plVar12 = *(long **)(param_1 + 0x20);
            if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f089c8();
            }
            lVar15 = (**(code **)(*plVar12 + 0x308))
                               (plVar12,plVar11,*(undefined8 *)(*plVar12 + 0x310));
            if (lVar15 != 0) {
              plVar12 = *(long **)(param_1 + 0x20);
              if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f089c8();
              }
              (**(code **)(*plVar12 + 0x318))(plVar12,plVar11,0,*(undefined8 *)(*plVar12 + 800));
            }
            lVar15 = plVar11[7];
            if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f089c8();
            }
            if (*(int *)(lVar15 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f089d0();
            }
            plVar12 = *(long **)(param_1 + 0x20);
            if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f089c8();
            }
            lVar15 = (**(code **)(*plVar12 + 0x308))
                               (plVar12,*(undefined8 *)(lVar15 + 0x20),
                                *(undefined8 *)(*plVar12 + 0x310));
            if (lVar15 != 0) {
              lVar15 = plVar11[7];
              if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f089c8();
              }
              if (*(int *)(lVar15 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f089d0();
              }
              plVar11 = *(long **)(param_1 + 0x20);
              if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f089c8();
              }
              (**(code **)(*plVar11 + 0x318))
                        (plVar11,*(undefined8 *)(lVar15 + 0x20),0,*(undefined8 *)(*plVar11 + 800));
            }
          }
        }
        else {
          if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          (**(code **)(*plVar12 + 0x318))(plVar12,plVar11,plVar11,*(undefined8 *)(*plVar12 + 800));
        }
      }
    } while( true );
  }
LAB_055d0680:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


