/*
FUNCTION_NAME: System.Xml.XmlBaseReader.NamespaceManager$$Register
ENTRY_POINT: 0554a2a8
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 81
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;ray_or_cast_sink_hits_1;telemetry_or_network_hits_6;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x0554abc8) */

void System_Xml_XmlBaseReader_NamespaceManager__Register
               (long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  uint uVar2;
  byte bVar3;
  char cVar4;
  undefined *puVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  char *pcVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long *plVar17;
  long *plVar18;
  long lVar19;
  code *pcVar20;
  ulong uVar21;
  ulong uVar22;
  uint in_w10;
  int *piVar23;
  long *unaff_x19;
  long unaff_x20;
  undefined8 uVar24;
  undefined *unaff_x29;
  ulong in_stack_00000010;
  
  if ((in_w10 < *(byte *)(param_3 + 0x130)) ||
     (*(long *)(*(long *)(param_1 + 200) + (ulong)*(byte *)(param_3 + 0x130) * 8 + -8) != param_3))
  {
                    /* WARNING: Subroutine does not return */
    FUN_02f08d48();
  }
  plVar6 = (long *)(**(code **)(param_1 + 0x388))(param_2,*(undefined8 *)(param_1 + 0x390));
  plVar8 = (long *)PTR_DAT_067c91b8;
  do {
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    lVar19 = *plVar6;
    uVar22 = (ulong)*(ushort *)(lVar19 + 0x12e);
    if (uVar22 != 0) {
      piVar23 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
      do {
        if (*(long *)(piVar23 + -2) == *plVar8) {
          puVar7 = (undefined8 *)(lVar19 + (long)*piVar23 * 0x10 + 0x138);
          goto LAB_0554a344;
        }
        uVar22 = uVar22 - 1;
        piVar23 = piVar23 + 4;
      } while (uVar22 != 0);
    }
    puVar7 = (undefined8 *)FUN_02f421d0(plVar6,*plVar8,0);
LAB_0554a344:
    uVar22 = (*(code *)*puVar7)(plVar6,puVar7[1]);
    puVar5 = PTR_DAT_067c91b0;
    if ((uVar22 & 1) == 0) {
      plVar8 = (long *)thunk_FUN_02f45174(plVar6,*(undefined8 *)PTR_DAT_067c91b0);
      if (plVar8 == (long *)0x0) {
        return;
      }
      lVar19 = *plVar8;
      uVar22 = (ulong)*(ushort *)(lVar19 + 0x12e);
      if (uVar22 == 0) goto LAB_0554aa5c;
      piVar23 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
      break;
    }
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    lVar19 = *plVar6;
    uVar22 = (ulong)*(ushort *)(lVar19 + 0x12e);
    if (uVar22 != 0) {
      piVar23 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
      do {
        if (*(long *)(piVar23 + -2) == *plVar8) {
          puVar7 = (undefined8 *)(lVar19 + (long)(*piVar23 + 1) * 0x10 + 0x138);
          goto LAB_0554a3ac;
        }
        uVar22 = uVar22 - 1;
        piVar23 = piVar23 + 4;
      } while (uVar22 != 0);
    }
    puVar7 = (undefined8 *)FUN_02f421d0(plVar6,*plVar8,1);
LAB_0554a3ac:
    plVar8 = (long *)(*(code *)*puVar7)(plVar6,puVar7[1]);
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    lVar19 = *plVar8;
    bVar3 = *(byte *)(*unaff_x19 + 0x130);
    if ((*(byte *)(lVar19 + 0x130) < bVar3) ||
       (*(long *)(*(long *)(lVar19 + 200) + (ulong)bVar3 * 8 + -8) != *unaff_x19)) {
                    /* WARNING: Subroutine does not return */
      FUN_02f08d48(plVar8);
    }
    plVar9 = (long *)(**(code **)(lVar19 + 0x2e8))(plVar8,0,*(undefined8 *)(lVar19 + 0x2f0));
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    if (*plVar9 != *(long *)(unaff_x29 + 0x90)) {
                    /* WARNING: Subroutine does not return */
      FUN_02f08d48();
    }
    uVar22 = FUN_04f6d65c(plVar9,*(undefined8 *)
                                  UnityEngine_XR_Interaction_Toolkit_Inputs_XRTransformStabilizer_StabilizeOptimalRotation_00001217_PostfixBurstDelegate_TypeInfo
                          ,0);
    pcVar20 = *(code **)(*plVar8 + 0x2e8);
    if ((uVar22 & 1) == 0) {
      plVar9 = (long *)(*pcVar20)(plVar8,1,*(undefined8 *)(*plVar8 + 0x2f0));
      if ((plVar9 != (long *)0x0) && (*plVar9 != *(long *)(unaff_x29 + 0x90))) {
                    /* WARNING: Subroutine does not return */
        FUN_02f08d48(plVar9);
      }
      lVar19 = (**(code **)(*plVar8 + 0x2e8))(plVar8,2,*(undefined8 *)(*plVar8 + 0x2f0));
      if (lVar19 == 0) {
        lVar10 = 0;
      }
      else {
        uVar24 = *(undefined8 *)PTR_DAT_067cb890;
        lVar10 = thunk_FUN_02f45174(lVar19,uVar24);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f08d48(lVar19,uVar24);
        }
      }
      lVar19 = (**(code **)(*plVar8 + 0x2e8))(plVar8,3,*(undefined8 *)(*plVar8 + 0x2f0));
      if (lVar19 == 0) {
        lVar13 = 0;
      }
      else {
        uVar24 = *(undefined8 *)PTR_DAT_067cb890;
        lVar13 = thunk_FUN_02f45174(lVar19,uVar24);
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f08d48(lVar19,uVar24);
        }
      }
      lVar19 = (**(code **)(*plVar8 + 0x2e8))(plVar8,4,*(undefined8 *)(*plVar8 + 0x2f0));
      if (lVar19 == 0) {
        lVar14 = 0;
      }
      else {
        uVar24 = *(undefined8 *)PTR_DAT_067cb890;
        lVar14 = thunk_FUN_02f45174(lVar19,uVar24);
        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f08d48(lVar19,uVar24);
        }
      }
      plVar11 = (long *)(**(code **)(*plVar8 + 0x2e8))(plVar8,5,*(undefined8 *)(*plVar8 + 0x2f0));
      if (plVar11 != (long *)0x0) {
        bVar3 = *(byte *)(*(long *)
                           UnityEngine_XR_ARSubsystems_XRSessionSubsystemDescriptor_Cinfo_TypeInfo +
                         0x130);
        if ((*(byte *)(*plVar11 + 0x130) < bVar3) ||
           (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar3 * 8 + -8) !=
            *(long *)UnityEngine_XR_ARSubsystems_XRSessionSubsystemDescriptor_Cinfo_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_02f08d48(plVar11);
        }
      }
      if ((in_stack_00000010 & 0x100000000) == 0) {
        lVar19 = unaff_x20;
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
      }
      else {
        if (*(long *)(unaff_x20 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        if (*(int *)(lVar10 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089d0();
        }
        lVar19 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0x28);
        if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        lVar19 = FUN_0558c44c(lVar19,*(undefined4 *)(lVar10 + 0x20),0);
      }
      plVar8 = (long *)FUN_02f0880c(*(undefined8 *)
                                     UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_IsWithinRadius_00000965_BurstDirectCall_TypeInfo
                                    ,*(int *)(lVar10 + 0x18) + -1);
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      if (0 < (int)plVar8[3]) {
        uVar22 = 0;
        do {
          if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          uVar21 = uVar22 + 1;
          if (*(uint *)(lVar10 + 0x18) <= uVar21) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089d0();
          }
          if (*(long *)(lVar19 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          lVar15 = FUN_0557e298(*(long *)(lVar19 + 0x40),*(undefined4 *)(lVar10 + 0x24 + uVar22 * 4)
                                ,0);
          if ((lVar15 != 0) &&
             (lVar16 = thunk_FUN_02f45174(lVar15,*(undefined8 *)(*plVar8 + 0x40)), lVar16 == 0)) {
            uVar24 = thunk_FUN_02f52b60();
                    /* WARNING: Subroutine does not return */
            FUN_02f0888c(uVar24,0);
          }
          uVar2 = *(uint *)(plVar8 + 3);
          if (uVar2 <= uVar22) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089d0();
          }
          plVar8[uVar22 + 4] = lVar15;
          uVar22 = uVar21;
        } while ((long)uVar21 < (long)(int)uVar2);
      }
      if ((in_stack_00000010 & 0x100000000) == 0) {
        lVar19 = unaff_x20;
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
      }
      else {
        if (*(long *)(unaff_x20 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        if (*(int *)(lVar13 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089d0();
        }
        lVar19 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0x28);
        if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        lVar19 = FUN_0558c44c(lVar19,*(undefined4 *)(lVar13 + 0x20),0);
      }
      plVar17 = (long *)FUN_02f0880c(*(undefined8 *)
                                      UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_IsWithinRadius_00000965_BurstDirectCall_TypeInfo
                                     ,*(int *)(lVar13 + 0x18) + -1);
      if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      if (0 < (int)plVar17[3]) {
        uVar22 = 0;
        do {
          if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          uVar21 = uVar22 + 1;
          if (*(uint *)(lVar13 + 0x18) <= uVar21) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089d0();
          }
          if (*(long *)(lVar19 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          lVar10 = FUN_0557e298(*(long *)(lVar19 + 0x40),*(undefined4 *)(lVar13 + 0x24 + uVar22 * 4)
                                ,0);
          if ((lVar10 != 0) &&
             (lVar15 = thunk_FUN_02f45174(lVar10,*(undefined8 *)(*plVar17 + 0x40)), lVar15 == 0)) {
            uVar24 = thunk_FUN_02f52b60();
                    /* WARNING: Subroutine does not return */
            FUN_02f0888c(uVar24,0);
          }
          uVar2 = *(uint *)(plVar17 + 3);
          if (uVar2 <= uVar22) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089d0();
          }
          plVar17[uVar22 + 4] = lVar10;
          uVar22 = uVar21;
        } while ((long)uVar21 < (long)(int)uVar2);
      }
      plVar18 = (long *)thunk_FUN_02f45270(*(undefined8 *)
                                            UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_IsWithinRadius_00000965_PostfixBurstDelegate_TypeInfo
                                          );
      FUN_055a2550(plVar18,plVar9,plVar8,plVar17,0);
      unaff_x19 = (long *)PTR_DAT_067d4730;
      unaff_x29 = PTR_DAT_067c9338;
      plVar8 = (long *)PTR_DAT_067c91b8;
      if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      if (*(int *)(lVar14 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089d0();
      }
      if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      (**(code **)(*plVar18 + 0x288))
                (plVar18,*(undefined4 *)(lVar14 + 0x20),*(undefined8 *)(*plVar18 + 0x290));
      if ((*(uint *)(lVar14 + 0x18) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089d0();
      }
      (**(code **)(*plVar18 + 0x2e8))
                (plVar18,*(undefined4 *)(lVar14 + 0x24),*(undefined8 *)(*plVar18 + 0x2f0));
      if (*(uint *)(lVar14 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089d0();
      }
      (**(code **)(*plVar18 + 0x2a8))
                (plVar18,*(undefined4 *)(lVar14 + 0x28),*(undefined8 *)(*plVar18 + 0x2b0));
      plVar18[6] = (long)plVar11;
      if (*(long *)(unaff_x20 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      FUN_0557b654(*(long *)(unaff_x20 + 0x48),plVar18,0,0);
    }
    else {
      plVar9 = (long *)(*pcVar20)(plVar8,1);
      if ((plVar9 != (long *)0x0) && (*plVar9 != *(long *)(unaff_x29 + 0x90))) {
                    /* WARNING: Subroutine does not return */
        FUN_02f08d48(plVar9);
      }
      lVar19 = (**(code **)(*plVar8 + 0x2e8))(plVar8,2,*(undefined8 *)(*plVar8 + 0x2f0));
      if (lVar19 == 0) {
        lVar10 = 0;
      }
      else {
        uVar24 = *(undefined8 *)PTR_DAT_067cb890;
        lVar10 = thunk_FUN_02f45174(lVar19,uVar24);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f08d48(lVar19,uVar24);
        }
      }
      plVar11 = (long *)(**(code **)(*plVar8 + 0x2e8))(plVar8,3,*(undefined8 *)(*plVar8 + 0x2f0));
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      if (*(long *)(*plVar11 + 0x40) != *(long *)(*(long *)(unaff_x29 + 0x28) + 0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_02f08d48();
      }
      pcVar12 = (char *)thunk_FUN_02f453b8();
      cVar4 = *pcVar12;
      plVar8 = (long *)(**(code **)(*plVar8 + 0x2e8))(plVar8,4,*(undefined8 *)(*plVar8 + 0x2f0));
      if (plVar8 != (long *)0x0) {
        bVar3 = *(byte *)(*(long *)
                           UnityEngine_XR_ARSubsystems_XRSessionSubsystemDescriptor_Cinfo_TypeInfo +
                         0x130);
        if ((*(byte *)(*plVar8 + 0x130) < bVar3) ||
           (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar3 * 8 + -8) !=
            *(long *)UnityEngine_XR_ARSubsystems_XRSessionSubsystemDescriptor_Cinfo_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_02f08d48(plVar8);
        }
      }
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      plVar11 = (long *)FUN_02f0880c(*(undefined8 *)
                                      UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_IsWithinRadius_00000965_BurstDirectCall_TypeInfo
                                     ,*(undefined4 *)(lVar10 + 0x18));
      if (0 < (int)*(ulong *)(lVar10 + 0x18)) {
        uVar21 = *(ulong *)(lVar10 + 0x18) & 0xffffffff;
        uVar22 = 0;
        do {
          if (uVar21 <= uVar22) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089d0();
          }
          if (*(long *)(unaff_x20 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          lVar19 = FUN_0557e298(*(long *)(unaff_x20 + 0x40),
                                *(undefined4 *)(lVar10 + 0x20 + uVar22 * 4),0);
          if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          if ((lVar19 != 0) &&
             (lVar13 = thunk_FUN_02f45174(lVar19,*(undefined8 *)(*plVar11 + 0x40)), lVar13 == 0)) {
            uVar24 = thunk_FUN_02f52b60();
                    /* WARNING: Subroutine does not return */
            FUN_02f0888c(uVar24,0);
          }
          if (*(uint *)(plVar11 + 3) <= uVar22) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089d0();
          }
          uVar1 = uVar22 + 1;
          plVar11[uVar22 + 4] = lVar19;
          uVar21 = (ulong)*(uint *)(lVar10 + 0x18);
          uVar22 = uVar1;
        } while ((long)uVar1 < (long)(int)*(uint *)(lVar10 + 0x18));
      }
      lVar19 = thunk_FUN_02f45270(*(undefined8 *)
                                   UnityEngine_XR_Interaction_Toolkit_Interactors_XRSocketInteractor_<UpdateCollidersAfterOnTriggerStay>d__67_TypeInfo
                                 );
      FUN_055aeee4(lVar19,plVar9,plVar11,cVar4 != '\0',0);
      if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      *(long **)(lVar19 + 0x30) = plVar8;
      if (*(long *)(unaff_x20 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      FUN_0557b64c(*(long *)(unaff_x20 + 0x48),lVar19,0);
      plVar8 = (long *)PTR_DAT_067c91b8;
    }
  } while( true );
  while( true ) {
    uVar22 = uVar22 - 1;
    piVar23 = piVar23 + 4;
    if (uVar22 == 0) break;
    if (*(long *)(piVar23 + -2) == *(long *)puVar5) {
      puVar7 = (undefined8 *)(lVar19 + (long)*piVar23 * 0x10 + 0x138);
      goto LAB_0554aa78;
    }
  }
LAB_0554aa5c:
  puVar7 = (undefined8 *)FUN_02f421d0(plVar8,*(long *)puVar5,0);
LAB_0554aa78:
  (*(code *)*puVar7)(plVar8,puVar7[1]);
  return;
}


