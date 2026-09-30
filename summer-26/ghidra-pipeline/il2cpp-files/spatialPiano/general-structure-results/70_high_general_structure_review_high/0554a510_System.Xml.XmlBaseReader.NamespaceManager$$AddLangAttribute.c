/*
FUNCTION_NAME: System.Xml.XmlBaseReader.NamespaceManager$$AddLangAttribute
ENTRY_POINT: 0554a510
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

void System_Xml_XmlBaseReader_NamespaceManager__AddLangAttribute(long param_1)

{
  ulong uVar1;
  uint uVar2;
  char cVar3;
  byte bVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  char *pcVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  long *plVar17;
  long *plVar18;
  code *pcVar19;
  ulong uVar20;
  ulong uVar21;
  int *piVar22;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  undefined8 uVar23;
  undefined *unaff_x29;
  ulong in_stack_00000010;
  long *in_stack_00000038;
  
code_r0x0554a510:
  plVar7 = (long *)(**(code **)(param_1 + 0x2e8))(unaff_x23,3,*(undefined8 *)(param_1 + 0x2f0));
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  if (*(long *)(*plVar7 + 0x40) != *(long *)(*(long *)(unaff_x29 + 0x28) + 0x40)) {
                    /* WARNING: Subroutine does not return */
    FUN_02f08d48();
  }
  pcVar8 = (char *)thunk_FUN_02f453b8();
  cVar3 = *pcVar8;
  plVar7 = (long *)(**(code **)(*unaff_x23 + 0x2e8))
                             (unaff_x23,4,*(undefined8 *)(*unaff_x23 + 0x2f0));
  if (plVar7 != (long *)0x0) {
    bVar4 = *(byte *)(*(long *)
                       UnityEngine_XR_ARSubsystems_XRSessionSubsystemDescriptor_Cinfo_TypeInfo +
                     0x130);
    if ((*(byte *)(*plVar7 + 0x130) < bVar4) ||
       (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar4 * 8 + -8) !=
        *(long *)UnityEngine_XR_ARSubsystems_XRSessionSubsystemDescriptor_Cinfo_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
      FUN_02f08d48(plVar7);
    }
  }
  if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  plVar9 = (long *)FUN_02f0880c(*(undefined8 *)
                                 UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_IsWithinRadius_00000965_BurstDirectCall_TypeInfo
                                ,*(undefined4 *)(unaff_x22 + 0x18));
  if (0 < (int)*(ulong *)(unaff_x22 + 0x18)) {
    uVar20 = *(ulong *)(unaff_x22 + 0x18) & 0xffffffff;
    uVar21 = 0;
    do {
      if (uVar20 <= uVar21) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089d0();
      }
      if (*(long *)(unaff_x20 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      lVar10 = FUN_0557e298(*(long *)(unaff_x20 + 0x40),
                            *(undefined4 *)(unaff_x22 + 0x20 + uVar21 * 4),0);
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      if ((lVar10 != 0) &&
         (lVar11 = thunk_FUN_02f45174(lVar10,*(undefined8 *)(*plVar9 + 0x40)), lVar11 == 0)) {
        uVar23 = thunk_FUN_02f52b60();
                    /* WARNING: Subroutine does not return */
        FUN_02f0888c(uVar23,0);
      }
      if (*(uint *)(plVar9 + 3) <= uVar21) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089d0();
      }
      uVar1 = uVar21 + 1;
      plVar9[uVar21 + 4] = lVar10;
      uVar20 = (ulong)*(uint *)(unaff_x22 + 0x18);
      uVar21 = uVar1;
    } while ((long)uVar1 < (long)(int)*(uint *)(unaff_x22 + 0x18));
  }
  lVar10 = thunk_FUN_02f45270(*(undefined8 *)
                               UnityEngine_XR_Interaction_Toolkit_Interactors_XRSocketInteractor_<UpdateCollidersAfterOnTriggerStay>d__67_TypeInfo
                             );
  FUN_055aeee4(lVar10,unaff_x21,plVar9,cVar3 != '\0',0);
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  *(long **)(lVar10 + 0x30) = plVar7;
  if (*(long *)(unaff_x20 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  FUN_0557b64c(*(long *)(unaff_x20 + 0x48),lVar10,0);
  plVar7 = (long *)PTR_DAT_067c91b8;
  do {
    if (in_stack_00000038 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    lVar10 = *in_stack_00000038;
    uVar21 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar21 != 0) {
      piVar22 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar22 + -2) == *plVar7) {
          puVar6 = (undefined8 *)(lVar10 + (long)*piVar22 * 0x10 + 0x138);
          goto LAB_0554a344;
        }
        uVar21 = uVar21 - 1;
        piVar22 = piVar22 + 4;
      } while (uVar21 != 0);
    }
    puVar6 = (undefined8 *)FUN_02f421d0(in_stack_00000038,*plVar7,0);
LAB_0554a344:
    uVar21 = (*(code *)*puVar6)(in_stack_00000038,puVar6[1]);
    puVar5 = PTR_DAT_067c91b0;
    if ((uVar21 & 1) == 0) {
      plVar7 = (long *)thunk_FUN_02f45174(in_stack_00000038,*(undefined8 *)PTR_DAT_067c91b0);
      if (plVar7 == (long *)0x0) {
        return;
      }
      lVar10 = *plVar7;
      uVar21 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar21 == 0) goto LAB_0554aa5c;
      piVar22 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      goto LAB_0554aa44;
    }
    if (in_stack_00000038 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    lVar10 = *in_stack_00000038;
    uVar21 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar21 != 0) {
      piVar22 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar22 + -2) == *plVar7) {
          puVar6 = (undefined8 *)(lVar10 + (long)(*piVar22 + 1) * 0x10 + 0x138);
          goto LAB_0554a3ac;
        }
        uVar21 = uVar21 - 1;
        piVar22 = piVar22 + 4;
      } while (uVar21 != 0);
    }
    puVar6 = (undefined8 *)FUN_02f421d0(in_stack_00000038,*plVar7,1);
LAB_0554a3ac:
    unaff_x23 = (long *)(*(code *)*puVar6)(in_stack_00000038,puVar6[1]);
    if (unaff_x23 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    lVar10 = *unaff_x23;
    bVar4 = *(byte *)(*unaff_x19 + 0x130);
    if ((*(byte *)(lVar10 + 0x130) < bVar4) ||
       (*(long *)(*(long *)(lVar10 + 200) + (ulong)bVar4 * 8 + -8) != *unaff_x19)) {
                    /* WARNING: Subroutine does not return */
      FUN_02f08d48(unaff_x23);
    }
    plVar7 = (long *)(**(code **)(lVar10 + 0x2e8))(unaff_x23,0,*(undefined8 *)(lVar10 + 0x2f0));
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    if (*plVar7 != *(long *)(unaff_x29 + 0x90)) {
                    /* WARNING: Subroutine does not return */
      FUN_02f08d48();
    }
    uVar21 = FUN_04f6d65c(plVar7,*(undefined8 *)
                                  UnityEngine_XR_Interaction_Toolkit_Inputs_XRTransformStabilizer_StabilizeOptimalRotation_00001217_PostfixBurstDelegate_TypeInfo
                          ,0);
    pcVar19 = *(code **)(*unaff_x23 + 0x2e8);
    if ((uVar21 & 1) != 0) break;
    plVar7 = (long *)(*pcVar19)(unaff_x23,1,*(undefined8 *)(*unaff_x23 + 0x2f0));
    if ((plVar7 != (long *)0x0) && (*plVar7 != *(long *)(unaff_x29 + 0x90))) {
                    /* WARNING: Subroutine does not return */
      FUN_02f08d48(plVar7);
    }
    lVar10 = (**(code **)(*unaff_x23 + 0x2e8))(unaff_x23,2,*(undefined8 *)(*unaff_x23 + 0x2f0));
    if (lVar10 == 0) {
      lVar11 = 0;
    }
    else {
      uVar23 = *(undefined8 *)PTR_DAT_067cb890;
      lVar11 = thunk_FUN_02f45174(lVar10,uVar23);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f08d48(lVar10,uVar23);
      }
    }
    lVar10 = (**(code **)(*unaff_x23 + 0x2e8))(unaff_x23,3,*(undefined8 *)(*unaff_x23 + 0x2f0));
    if (lVar10 == 0) {
      lVar12 = 0;
    }
    else {
      uVar23 = *(undefined8 *)PTR_DAT_067cb890;
      lVar12 = thunk_FUN_02f45174(lVar10,uVar23);
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f08d48(lVar10,uVar23);
      }
    }
    lVar10 = (**(code **)(*unaff_x23 + 0x2e8))(unaff_x23,4,*(undefined8 *)(*unaff_x23 + 0x2f0));
    if (lVar10 == 0) {
      lVar13 = 0;
    }
    else {
      uVar23 = *(undefined8 *)PTR_DAT_067cb890;
      lVar13 = thunk_FUN_02f45174(lVar10,uVar23);
      if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f08d48(lVar10,uVar23);
      }
    }
    plVar9 = (long *)(**(code **)(*unaff_x23 + 0x2e8))
                               (unaff_x23,5,*(undefined8 *)(*unaff_x23 + 0x2f0));
    if (plVar9 != (long *)0x0) {
      bVar4 = *(byte *)(*(long *)
                         UnityEngine_XR_ARSubsystems_XRSessionSubsystemDescriptor_Cinfo_TypeInfo +
                       0x130);
      if ((*(byte *)(*plVar9 + 0x130) < bVar4) ||
         (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar4 * 8 + -8) !=
          *(long *)UnityEngine_XR_ARSubsystems_XRSessionSubsystemDescriptor_Cinfo_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
        FUN_02f08d48(plVar9);
      }
    }
    if ((in_stack_00000010 & 0x100000000) == 0) {
      lVar10 = unaff_x20;
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
    }
    else {
      if (*(long *)(unaff_x20 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      if (*(int *)(lVar11 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089d0();
      }
      lVar10 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0x28);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      lVar10 = FUN_0558c44c(lVar10,*(undefined4 *)(lVar11 + 0x20),0);
    }
    plVar14 = (long *)FUN_02f0880c(*(undefined8 *)
                                    UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_IsWithinRadius_00000965_BurstDirectCall_TypeInfo
                                   ,*(int *)(lVar11 + 0x18) + -1);
    if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    if (0 < (int)plVar14[3]) {
      uVar21 = 0;
      do {
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        uVar20 = uVar21 + 1;
        if (*(uint *)(lVar11 + 0x18) <= uVar20) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089d0();
        }
        if (*(long *)(lVar10 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        lVar15 = FUN_0557e298(*(long *)(lVar10 + 0x40),*(undefined4 *)(lVar11 + 0x24 + uVar21 * 4),0
                             );
        if ((lVar15 != 0) &&
           (lVar16 = thunk_FUN_02f45174(lVar15,*(undefined8 *)(*plVar14 + 0x40)), lVar16 == 0)) {
          uVar23 = thunk_FUN_02f52b60();
                    /* WARNING: Subroutine does not return */
          FUN_02f0888c(uVar23,0);
        }
        uVar2 = *(uint *)(plVar14 + 3);
        if (uVar2 <= uVar21) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089d0();
        }
        plVar14[uVar21 + 4] = lVar15;
        uVar21 = uVar20;
      } while ((long)uVar20 < (long)(int)uVar2);
    }
    if ((in_stack_00000010 & 0x100000000) == 0) {
      lVar10 = unaff_x20;
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
    }
    else {
      if (*(long *)(unaff_x20 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      if (*(int *)(lVar12 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089d0();
      }
      lVar10 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0x28);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      lVar10 = FUN_0558c44c(lVar10,*(undefined4 *)(lVar12 + 0x20),0);
    }
    plVar17 = (long *)FUN_02f0880c(*(undefined8 *)
                                    UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_IsWithinRadius_00000965_BurstDirectCall_TypeInfo
                                   ,*(int *)(lVar12 + 0x18) + -1);
    if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    if (0 < (int)plVar17[3]) {
      uVar21 = 0;
      do {
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        uVar20 = uVar21 + 1;
        if (*(uint *)(lVar12 + 0x18) <= uVar20) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089d0();
        }
        if (*(long *)(lVar10 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        lVar11 = FUN_0557e298(*(long *)(lVar10 + 0x40),*(undefined4 *)(lVar12 + 0x24 + uVar21 * 4),0
                             );
        if ((lVar11 != 0) &&
           (lVar15 = thunk_FUN_02f45174(lVar11,*(undefined8 *)(*plVar17 + 0x40)), lVar15 == 0)) {
          uVar23 = thunk_FUN_02f52b60();
                    /* WARNING: Subroutine does not return */
          FUN_02f0888c(uVar23,0);
        }
        uVar2 = *(uint *)(plVar17 + 3);
        if (uVar2 <= uVar21) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089d0();
        }
        plVar17[uVar21 + 4] = lVar11;
        uVar21 = uVar20;
      } while ((long)uVar20 < (long)(int)uVar2);
    }
    plVar18 = (long *)thunk_FUN_02f45270(*(undefined8 *)
                                          UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_IsWithinRadius_00000965_PostfixBurstDelegate_TypeInfo
                                        );
    FUN_055a2550(plVar18,plVar7,plVar14,plVar17,0);
    unaff_x19 = (long *)PTR_DAT_067d4730;
    unaff_x29 = PTR_DAT_067c9338;
    plVar7 = (long *)PTR_DAT_067c91b8;
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    if (*(int *)(lVar13 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089d0();
    }
    if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    (**(code **)(*plVar18 + 0x288))
              (plVar18,*(undefined4 *)(lVar13 + 0x20),*(undefined8 *)(*plVar18 + 0x290));
    if ((*(uint *)(lVar13 + 0x18) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089d0();
    }
    (**(code **)(*plVar18 + 0x2e8))
              (plVar18,*(undefined4 *)(lVar13 + 0x24),*(undefined8 *)(*plVar18 + 0x2f0));
    if (*(uint *)(lVar13 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089d0();
    }
    (**(code **)(*plVar18 + 0x2a8))
              (plVar18,*(undefined4 *)(lVar13 + 0x28),*(undefined8 *)(*plVar18 + 0x2b0));
    plVar18[6] = (long)plVar9;
    if (*(long *)(unaff_x20 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    FUN_0557b654(*(long *)(unaff_x20 + 0x48),plVar18,0,0);
  } while( true );
  unaff_x21 = (long *)(*pcVar19)(unaff_x23,1);
  if ((unaff_x21 != (long *)0x0) && (*unaff_x21 != *(long *)(unaff_x29 + 0x90))) {
                    /* WARNING: Subroutine does not return */
    FUN_02f08d48(unaff_x21);
  }
  lVar10 = (**(code **)(*unaff_x23 + 0x2e8))(unaff_x23,2,*(undefined8 *)(*unaff_x23 + 0x2f0));
  if (lVar10 == 0) {
    unaff_x22 = 0;
  }
  else {
    uVar23 = *(undefined8 *)PTR_DAT_067cb890;
    unaff_x22 = thunk_FUN_02f45174(lVar10,uVar23);
    if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f08d48(lVar10,uVar23);
    }
  }
  param_1 = *unaff_x23;
  goto code_r0x0554a510;
  while( true ) {
    uVar21 = uVar21 - 1;
    piVar22 = piVar22 + 4;
    if (uVar21 == 0) break;
LAB_0554aa44:
    if (*(long *)(piVar22 + -2) == *(long *)puVar5) {
      puVar6 = (undefined8 *)(lVar10 + (long)*piVar22 * 0x10 + 0x138);
      goto LAB_0554aa78;
    }
  }
LAB_0554aa5c:
  puVar6 = (undefined8 *)FUN_02f421d0(plVar7,*(long *)puVar5,0);
LAB_0554aa78:
  (*(code *)*puVar6)(plVar7,puVar6[1]);
  return;
}


