/*
FUNCTION_NAME: FUN_05cff634
ENTRY_POINT: 05cff634
PROGRAM: hellodot-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_3;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FUN_05cff634(undefined8 *param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  int iVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  int *piVar16;
  long *unaff_x19;
  long *unaff_x20;
  long *plVar17;
  long *plVar18;
  long lVar19;
  undefined4 uVar20;
  
  (*(code *)*param_1)();
  if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  (**(code **)(*unaff_x19 + 0x188))();
  puVar3 = PTR_DAT_0663fed8;
  plVar17 = (long *)unaff_x20[4];
  if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  lVar13 = *plVar17;
  uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
  if (uVar15 != 0) {
    piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
    do {
      if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_0663fed8) {
        puVar8 = (undefined8 *)(lVar13 + (long)(*piVar16 + 3) * 0x10 + 0x138);
        goto LAB_05cff6bc;
      }
      uVar15 = uVar15 - 1;
      piVar16 = piVar16 + 4;
    } while (uVar15 != 0);
  }
  puVar8 = (undefined8 *)FUN_02ce0a7c(plVar17,*(long *)PTR_DAT_0663fed8,3);
LAB_05cff6bc:
  plVar17 = (long *)(*(code *)*puVar8)(plVar17,puVar8[1]);
  puVar4 = System_Action<XRInputModalityManager_InputMode>_TypeInfo;
  if (plVar17 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_0663fed0 + 0x130);
    if ((*(byte *)(*plVar17 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar17 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_0663fed0))
    {
                    /* WARNING: Subroutine does not return */
      FUN_02ce8018(plVar17);
    }
  }
  if (*(int *)(*(long *)System_Action<XRInputModalityManager_InputMode>_TypeInfo + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  FUN_05bb44a0();
  plVar9 = (long *)FUN_05d002fc();
  lVar13 = unaff_x20[2];
  if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  *(int *)(lVar13 + 0x18) = *(int *)(lVar13 + 0x18) + -1;
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  plVar18 = (long *)unaff_x20[4];
  uVar10 = (**(code **)(*plVar9 + 0x1b8))(plVar9,*(undefined8 *)(*plVar9 + 0x1c0));
  if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  lVar13 = *plVar18;
  uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
  if (uVar15 != 0) {
    piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
    do {
      if (*(long *)(piVar16 + -2) == *(long *)puVar3) {
        puVar8 = (undefined8 *)(lVar13 + (long)(*piVar16 + 6) * 0x10 + 0x138);
        goto LAB_05cff7c4;
      }
      uVar15 = uVar15 - 1;
      piVar16 = piVar16 + 4;
    } while (uVar15 != 0);
  }
  puVar8 = (undefined8 *)FUN_02ce0a7c(plVar18,*(long *)puVar3,6);
LAB_05cff7c4:
  (*(code *)*puVar8)(plVar18,plVar17,uVar10,puVar8[1]);
  unaff_x19[4] = plVar9[4];
  puVar5 = System_Action<DragGesture,_Touch>_TypeInfo;
  puVar2 = PTR_DAT_0663fea8;
  plVar9 = (long *)unaff_x20[3];
  do {
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    lVar14 = *plVar9;
    lVar13 = *(long *)puVar2;
    uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == lVar13) {
          puVar8 = (undefined8 *)(lVar14 + (long)(*piVar16 + 1) * 0x10 + 0x138);
          goto LAB_05cff848;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar8 = (undefined8 *)FUN_02ce0a7c(plVar9,lVar13,1);
LAB_05cff848:
    uVar6 = (*(code *)*puVar8)(plVar9,1,puVar8[1]);
    plVar9 = (long *)unaff_x20[3];
    if ((uVar6 & 0xfffffffe) != 0x26) {
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      lVar13 = *plVar9;
      uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar15 == 0) goto LAB_05cffd0c;
      piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      break;
    }
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    lVar14 = *plVar9;
    lVar13 = *(long *)puVar2;
    uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == lVar13) {
          puVar8 = (undefined8 *)(lVar14 + (long)(*piVar16 + 1) * 0x10 + 0x138);
          goto LAB_05cff8bc;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar8 = (undefined8 *)FUN_02ce0a7c(plVar9,lVar13,1);
LAB_05cff8bc:
    iVar7 = (*(code *)*puVar8)(plVar9,1,puVar8[1]);
    if (iVar7 == 0x26) {
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      lVar13 = (**(code **)(*unaff_x20 + 0x1b8))();
      if (lVar13 == 0) {
        lVar14 = 0;
      }
      else {
        uVar10 = *(undefined8 *)PTR_DAT_0663feb8;
        lVar14 = thunk_FUN_02cea798(lVar13,uVar10);
        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce8018(lVar13,uVar10);
        }
      }
      plVar9 = (long *)unaff_x20[4];
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      lVar13 = *plVar9;
      uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)puVar3) {
            puVar8 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_05cffa48;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar8 = (undefined8 *)FUN_02ce0a7c(plVar9,*(long *)puVar3,0);
LAB_05cffa48:
      plVar9 = (long *)(*(code *)*puVar8)(plVar9,lVar14,puVar8[1]);
      if (plVar9 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)PTR_DAT_0663fed0 + 0x130);
        if ((*(byte *)(*plVar9 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_0663fed0
           )) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce8018(plVar9);
        }
      }
      plVar18 = (long *)unaff_x20[4];
      if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      lVar13 = *plVar18;
      uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)puVar3) {
            puVar8 = (undefined8 *)(lVar13 + (long)(*piVar16 + 6) * 0x10 + 0x138);
            goto LAB_05cffb8c;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar8 = (undefined8 *)FUN_02ce0a7c(plVar18,*(long *)puVar3,6);
LAB_05cffb8c:
      (*(code *)*puVar8)(plVar18,plVar17,plVar9,puVar8[1]);
      uVar20 = 9;
    }
    else {
      if (iVar7 != 0x27) {
        lVar13 = unaff_x20[3];
        thunk_FUN_02c7737c(PTR_DAT_0663ff30);
        uVar10 = thunk_FUN_02cea894();
        uVar12 = thunk_FUN_02c7737c(PTR_DAT_065c8668);
        FUN_05bb0c68(uVar10,uVar12,0xd,0,lVar13,0);
        uVar12 = thunk_FUN_02c7737c(
                                   System_Action<ulong,_bool,_OVRSpace,_Guid,_OVRPlugin_SpaceComponentType,_bool>_TypeInfo
                                   );
                    /* WARNING: Subroutine does not return */
        FUN_02ce7b54(uVar10,uVar12);
      }
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      lVar13 = (**(code **)(*unaff_x20 + 0x1b8))();
      if (lVar13 == 0) {
        lVar14 = 0;
      }
      else {
        uVar10 = *(undefined8 *)PTR_DAT_0663feb8;
        lVar14 = thunk_FUN_02cea798(lVar13,uVar10);
        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce8018(lVar13,uVar10);
        }
      }
      plVar9 = (long *)unaff_x20[4];
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      lVar13 = *plVar9;
      uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)puVar3) {
            puVar8 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_05cffae8;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar8 = (undefined8 *)FUN_02ce0a7c(plVar9,*(long *)puVar3,0);
LAB_05cffae8:
      plVar9 = (long *)(*(code *)*puVar8)(plVar9,lVar14,puVar8[1]);
      if (plVar9 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)PTR_DAT_0663fed0 + 0x130);
        if ((*(byte *)(*plVar9 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_0663fed0
           )) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce8018(plVar9);
        }
      }
      plVar18 = (long *)unaff_x20[4];
      if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      lVar13 = *plVar18;
      uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)puVar3) {
            puVar8 = (undefined8 *)(lVar13 + (long)(*piVar16 + 6) * 0x10 + 0x138);
            goto LAB_05cffbb8;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar8 = (undefined8 *)FUN_02ce0a7c(plVar18,*(long *)puVar3,6);
LAB_05cffbb8:
      (*(code *)*puVar8)(plVar18,plVar17,plVar9,puVar8[1]);
      uVar20 = 8;
    }
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    FUN_05bb44a0();
    plVar9 = (long *)FUN_05d002fc();
    lVar13 = unaff_x20[2];
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    *(int *)(lVar13 + 0x18) = *(int *)(lVar13 + 0x18) + -1;
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    plVar18 = (long *)unaff_x20[4];
    uVar10 = (**(code **)(*plVar9 + 0x1b8))(plVar9,*(undefined8 *)(*plVar9 + 0x1c0));
    if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    lVar13 = *plVar18;
    uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)puVar3) {
          puVar8 = (undefined8 *)(lVar13 + (long)(*piVar16 + 6) * 0x10 + 0x138);
          goto LAB_05cffc88;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar8 = (undefined8 *)FUN_02ce0a7c(plVar18,*(long *)puVar3,6);
LAB_05cffc88:
    (*(code *)*puVar8)(plVar18,plVar17,uVar10,puVar8[1]);
    lVar14 = unaff_x19[4];
    lVar19 = plVar9[4];
    lVar13 = thunk_FUN_02cea894(*(undefined8 *)puVar5);
    FUN_04f7383c(lVar13,0);
    *(undefined4 *)(lVar13 + 0x20) = uVar20;
    *(long *)(lVar13 + 0x10) = lVar14;
    *(long *)(lVar13 + 0x18) = lVar19;
    unaff_x19[4] = lVar13;
    plVar9 = (long *)unaff_x20[3];
  } while( true );
  while( true ) {
    uVar15 = uVar15 - 1;
    piVar16 = piVar16 + 4;
    if (uVar15 == 0) break;
    if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_0663feb0) {
      puVar8 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
      goto LAB_05cffd28;
    }
  }
LAB_05cffd0c:
  puVar8 = (undefined8 *)FUN_02ce0a7c(plVar9,*(long *)PTR_DAT_0663feb0,0);
LAB_05cffd28:
  (*(code *)*puVar8)(plVar9,0xffffffff,puVar8[1]);
  (**(code **)(*unaff_x19 + 0x1a8))();
  plVar9 = (long *)unaff_x20[4];
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  lVar13 = *plVar9;
  uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
  if (uVar15 != 0) {
    piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
    do {
      if (*(long *)(piVar16 + -2) == *(long *)puVar3) {
        puVar8 = (undefined8 *)(lVar13 + (long)(*piVar16 + 8) * 0x10 + 0x138);
        goto LAB_05cffda4;
      }
      uVar15 = uVar15 - 1;
      piVar16 = piVar16 + 4;
    } while (uVar15 != 0);
  }
  puVar8 = (undefined8 *)FUN_02ce0a7c(plVar9,*(long *)puVar3,8);
LAB_05cffda4:
  plVar17 = (long *)(*(code *)*puVar8)(plVar9,plVar17,puVar8[1]);
  if (plVar17 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_0663fed0 + 0x130);
    if ((*(byte *)(*plVar17 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar17 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_0663fed0))
    {
                    /* WARNING: Subroutine does not return */
      FUN_02ce8018(plVar17);
    }
  }
  (**(code **)(*unaff_x19 + 0x1c8))();
  plVar17 = (long *)unaff_x20[4];
  uVar10 = (**(code **)(*unaff_x19 + 0x1b8))();
  lVar13 = (**(code **)(*unaff_x19 + 0x178))();
  lVar14 = (**(code **)(*unaff_x19 + 0x198))();
  if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  lVar19 = *(long *)puVar3;
  uVar12 = *(undefined8 *)PTR_DAT_0663feb8;
  if (lVar13 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = thunk_FUN_02cea798(lVar13,uVar12);
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce8018(lVar13,uVar12);
    }
    uVar12 = *(undefined8 *)PTR_DAT_0663feb8;
  }
  if (lVar14 == 0) {
    lVar13 = 0;
  }
  else {
    lVar13 = thunk_FUN_02cea798(lVar14,uVar12);
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce8018(lVar14,uVar12);
    }
  }
  lVar14 = *plVar17;
  uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
  if (uVar15 != 0) {
    piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
    do {
      if (*(long *)(piVar16 + -2) == lVar19) {
        puVar8 = (undefined8 *)(lVar14 + (long)(*piVar16 + 0x13) * 0x10 + 0x138);
        goto UnityEngine_XR_Interaction_Toolkit_UI_BodyUI_HandMenu__TryGetTrackedAnchors;
      }
      uVar15 = uVar15 - 1;
      piVar16 = piVar16 + 4;
    } while (uVar15 != 0);
  }
  puVar8 = (undefined8 *)FUN_02ce0a7c(plVar17,lVar19,0x13);
UnityEngine_XR_Interaction_Toolkit_UI_BodyUI_HandMenu__TryGetTrackedAnchors:
  (*(code *)*puVar8)(plVar17,uVar10,lVar11,lVar13,puVar8[1]);
  return;
}


