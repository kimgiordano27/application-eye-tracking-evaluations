/*
FUNCTION_NAME: FUN_0556a56c
ENTRY_POINT: 0556a56c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_21;telemetry_or_network_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x0556ac60) */

void FUN_0556a56c(long param_1,long param_2)

{
  ulong uVar1;
  uint uVar2;
  byte bVar3;
  char cVar4;
  undefined *puVar5;
  undefined *puVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  char *pcVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  int *piVar20;
  undefined8 uVar21;
  
  puVar6 = PTR_DAT_067ddbb0;
  if ((DAT_06bbf939 & 1) == 0) {
    FUN_02f08768(PTR_DAT_067ddbb0);
    FUN_02f08768(PTR_DAT_067d4730);
    FUN_02f08768(
                UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_IsWithinRadius_00000965_BurstDirectCall_TypeInfo
                );
    FUN_02f08768(System_Xml_Schema_XdrBuilder_XdrBeginChildFunction_TypeInfo);
    FUN_02f08768(PTR_DAT_067c91b0);
    FUN_02f08768(PTR_DAT_067c91b8);
    FUN_02f08768(PTR_DAT_067cb890);
    FUN_02f08768(UnityEngine_XR_ARSubsystems_XRSessionSubsystemDescriptor_Cinfo_TypeInfo);
    FUN_02f08768(Method_Unity_AppUI_UI_AnchorPopup<Popover>_get_outsideClickDismissEnabled__);
    DAT_06bbf939 = 1;
  }
  uVar21 = *(undefined8 *)puVar6;
  if (*(int *)(*(long *)(PTR_DAT_067c9338 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  uVar21 = FUN_050e4454(uVar21,0);
  if ((param_2 == 0) ||
     (plVar7 = (long *)FUN_04feade0(param_2,*(undefined8 *)
                                             Method_Unity_AppUI_UI_AnchorPopup<Popover>_get_outsideClickDismissEnabled__
                                    ,uVar21,0), plVar7 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  lVar17 = *plVar7;
  bVar3 = *(byte *)(*(long *)PTR_DAT_067d4730 + 0x130);
  if ((*(byte *)(lVar17 + 0x130) < bVar3) ||
     (*(long *)(*(long *)(lVar17 + 200) + (ulong)bVar3 * 8 + -8) != *(long *)PTR_DAT_067d4730)) {
                    /* WARNING: Subroutine does not return */
    FUN_02f08d48();
  }
  plVar7 = (long *)(**(code **)(lVar17 + 0x388))(plVar7,*(undefined8 *)(lVar17 + 0x390));
  puVar6 = PTR_DAT_067c91b8;
  do {
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    lVar18 = *plVar7;
    lVar17 = *(long *)puVar6;
    uVar19 = (ulong)*(ushort *)(lVar18 + 0x12e);
    if (uVar19 != 0) {
      piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) == lVar17) {
          puVar8 = (undefined8 *)(lVar18 + (long)*piVar20 * 0x10 + 0x138);
          goto LAB_0556a718;
        }
        uVar19 = uVar19 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar19 != 0);
    }
    puVar8 = (undefined8 *)FUN_02f421d0(plVar7,lVar17,0);
LAB_0556a718:
    uVar19 = (*(code *)*puVar8)(plVar7,puVar8[1]);
    puVar5 = PTR_DAT_067c91b0;
    if ((uVar19 & 1) == 0) {
      plVar7 = (long *)thunk_FUN_02f45174(plVar7,*(undefined8 *)PTR_DAT_067c91b0);
      if (plVar7 == (long *)0x0) {
        return;
      }
      lVar17 = *plVar7;
      uVar19 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar19 == 0) goto LAB_0556ab6c;
      piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      break;
    }
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    lVar18 = *plVar7;
    lVar17 = *(long *)puVar6;
    uVar19 = (ulong)*(ushort *)(lVar18 + 0x12e);
    if (uVar19 != 0) {
      piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) == lVar17) {
          puVar8 = (undefined8 *)(lVar18 + (long)(*piVar20 + 1) * 0x10 + 0x138);
          goto LAB_0556a780;
        }
        uVar19 = uVar19 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar19 != 0);
    }
    puVar8 = (undefined8 *)FUN_02f421d0(plVar7,lVar17,1);
LAB_0556a780:
    plVar9 = (long *)(*(code *)*puVar8)(plVar7,puVar8[1]);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    lVar17 = *plVar9;
    bVar3 = *(byte *)(*(long *)PTR_DAT_067d4730 + 0x130);
    if ((*(byte *)(lVar17 + 0x130) < bVar3) ||
       (*(long *)(*(long *)(lVar17 + 200) + (ulong)bVar3 * 8 + -8) != *(long *)PTR_DAT_067d4730)) {
                    /* WARNING: Subroutine does not return */
      FUN_02f08d48(plVar9);
    }
    plVar10 = (long *)(**(code **)(lVar17 + 0x2e8))(plVar9,0,*(undefined8 *)(lVar17 + 0x2f0));
    if ((plVar10 != (long *)0x0) && (*plVar10 != *(long *)(PTR_DAT_067c9338 + 0x90))) {
                    /* WARNING: Subroutine does not return */
      FUN_02f08d48(plVar10);
    }
    lVar17 = (**(code **)(*plVar9 + 0x2e8))(plVar9,1,*(undefined8 *)(*plVar9 + 0x2f0));
    if (lVar17 == 0) {
      lVar18 = 0;
    }
    else {
      uVar21 = *(undefined8 *)PTR_DAT_067cb890;
      lVar18 = thunk_FUN_02f45174(lVar17,uVar21);
      if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f08d48(lVar17,uVar21);
      }
    }
    lVar17 = (**(code **)(*plVar9 + 0x2e8))(plVar9,2,*(undefined8 *)(*plVar9 + 0x2f0));
    if (lVar17 == 0) {
      lVar11 = 0;
    }
    else {
      uVar21 = *(undefined8 *)PTR_DAT_067cb890;
      lVar11 = thunk_FUN_02f45174(lVar17,uVar21);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f08d48(lVar17,uVar21);
      }
    }
    plVar12 = (long *)(**(code **)(*plVar9 + 0x2e8))(plVar9,3,*(undefined8 *)(*plVar9 + 0x2f0));
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    if (*(long *)(*plVar12 + 0x40) != *(long *)(*(long *)(PTR_DAT_067c9338 + 0x28) + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_02f08d48();
    }
    pcVar13 = (char *)thunk_FUN_02f453b8();
    cVar4 = *pcVar13;
    plVar9 = (long *)(**(code **)(*plVar9 + 0x2e8))(plVar9,4,*(undefined8 *)(*plVar9 + 0x2f0));
    if (plVar9 != (long *)0x0) {
      bVar3 = *(byte *)(*(long *)
                         UnityEngine_XR_ARSubsystems_XRSessionSubsystemDescriptor_Cinfo_TypeInfo +
                       0x130);
      if ((*(byte *)(*plVar9 + 0x130) < bVar3) ||
         (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar3 * 8 + -8) !=
          *(long *)UnityEngine_XR_ARSubsystems_XRSessionSubsystemDescriptor_Cinfo_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
        FUN_02f08d48(plVar9);
      }
    }
    if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    plVar12 = (long *)FUN_02f0880c(*(undefined8 *)
                                    UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_IsWithinRadius_00000965_BurstDirectCall_TypeInfo
                                   ,*(int *)(lVar18 + 0x18) + -1);
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    if (0 < (int)plVar12[3]) {
      uVar19 = 0;
      do {
        if (*(int *)(lVar18 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089d0();
        }
        if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        lVar17 = FUN_0558c44c(*(long *)(param_1 + 0x28),*(undefined4 *)(lVar18 + 0x20),0);
        if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        uVar1 = uVar19 + 1;
        if (*(uint *)(lVar18 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089d0();
        }
        if (*(long *)(lVar17 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        lVar17 = FUN_0557e298(*(long *)(lVar17 + 0x40),*(undefined4 *)(lVar18 + 0x24 + uVar19 * 4),0
                             );
        if ((lVar17 != 0) &&
           (lVar14 = thunk_FUN_02f45174(lVar17,*(undefined8 *)(*plVar12 + 0x40)), lVar14 == 0)) {
          uVar21 = thunk_FUN_02f52b60();
                    /* WARNING: Subroutine does not return */
          FUN_02f0888c(uVar21,0);
        }
        uVar2 = *(uint *)(plVar12 + 3);
        if (uVar2 <= uVar19) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089d0();
        }
        plVar12[uVar19 + 4] = lVar17;
        uVar19 = uVar1;
      } while ((long)uVar1 < (long)(int)uVar2);
    }
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    plVar15 = (long *)FUN_02f0880c(*(undefined8 *)
                                    UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_IsWithinRadius_00000965_BurstDirectCall_TypeInfo
                                   ,*(int *)(lVar11 + 0x18) + -1);
    if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    if (0 < (int)plVar15[3]) {
      uVar19 = 0;
      do {
        if (*(int *)(lVar11 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089d0();
        }
        if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        lVar17 = FUN_0558c44c(*(long *)(param_1 + 0x28),*(undefined4 *)(lVar11 + 0x20),0);
        if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        uVar1 = uVar19 + 1;
        if (*(uint *)(lVar11 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089d0();
        }
        if (*(long *)(lVar17 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        lVar17 = FUN_0557e298(*(long *)(lVar17 + 0x40),*(undefined4 *)(lVar11 + 0x24 + uVar19 * 4),0
                             );
        if ((lVar17 != 0) &&
           (lVar18 = thunk_FUN_02f45174(lVar17,*(undefined8 *)(*plVar15 + 0x40)), lVar18 == 0)) {
          uVar21 = thunk_FUN_02f52b60();
                    /* WARNING: Subroutine does not return */
          FUN_02f0888c(uVar21,0);
        }
        uVar2 = *(uint *)(plVar15 + 3);
        if (uVar2 <= uVar19) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089d0();
        }
        plVar15[uVar19 + 4] = lVar17;
        uVar19 = uVar1;
      } while ((long)uVar1 < (long)(int)uVar2);
    }
    plVar16 = (long *)thunk_FUN_02f45270(*(undefined8 *)
                                          System_Xml_Schema_XdrBuilder_XdrBeginChildFunction_TypeInfo
                                        );
    FUN_05582310(plVar16,plVar10,plVar12,plVar15,0,0);
    if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    *(undefined1 *)((long)plVar16 + 0x7a) = 0;
    (**(code **)(*plVar16 + 0x1e8))(plVar16,cVar4 != '\0',*(undefined8 *)(*plVar16 + 0x1f0));
    lVar17 = *(long *)(param_1 + 0x30);
    plVar16[3] = (long)plVar9;
    if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    FUN_055854fc(lVar17,plVar16,0);
    *(undefined1 *)((long)plVar16 + 0x7a) = 1;
  } while( true );
  while( true ) {
    uVar19 = uVar19 - 1;
    piVar20 = piVar20 + 4;
    if (uVar19 == 0) break;
    if (*(long *)(piVar20 + -2) == *(long *)puVar5) {
      puVar8 = (undefined8 *)(lVar17 + (long)*piVar20 * 0x10 + 0x138);
      goto LAB_0556ab88;
    }
  }
LAB_0556ab6c:
  puVar8 = (undefined8 *)FUN_02f421d0(plVar7,*(long *)puVar5,0);
LAB_0556ab88:
  (*(code *)*puVar8)(plVar7,puVar8[1]);
  return;
}


