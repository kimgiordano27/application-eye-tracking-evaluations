/*
FUNCTION_NAME: UnityEngine.InputSystem.Keyboard$$SetIMECursorPosition
ENTRY_POINT: 03105b44
PROGRAM: vrlegs-libil2cpp.so
SCORE: 83
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_19;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


void UnityEngine_InputSystem_Keyboard__SetIMECursorPosition(void)

{
  bool bVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  int *piVar8;
  int unaff_w20;
  long *plVar9;
  long *unaff_x25;
  long *unaff_x26;
  long *unaff_x27;
  long *in_stack_00000000;
  
  while (uVar4 = thunk_FUN_025bd1c0(), (uVar4 & 1) == 0) {
    unaff_w20 = unaff_w20 + 1;
    lVar5 = FUN_030df544();
    if ((lVar5 == 0) || (plVar9 = *(long **)(lVar5 + 0x30), plVar9 == (long *)0x0))
    goto LAB_03105b60;
    lVar5 = *plVar9;
    uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar4 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x25) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_03105a54;
        }
        uVar4 = uVar4 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined8 *)FUN_01a472ec(plVar9,*unaff_x25,0);
LAB_03105a54:
    iVar2 = (*(code *)*puVar3)(plVar9,puVar3[1]);
    if (iVar2 <= unaff_w20) {
      unaff_w20 = -1;
      goto LAB_03105b88;
    }
    lVar5 = FUN_030df544();
    if ((lVar5 == 0) || (plVar9 = *(long **)(lVar5 + 0x30), plVar9 == (long *)0x0))
    goto LAB_03105b60;
    lVar5 = *plVar9;
    uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar4 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x26) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto UnityEngine_InputSystem_Keyboard__SetIMEEnabled;
        }
        uVar4 = uVar4 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined8 *)FUN_01a472ec(plVar9,*unaff_x26,0);
UnityEngine_InputSystem_Keyboard__SetIMEEnabled:
    plVar9 = (long *)(*(code *)*puVar3)(plVar9,unaff_w20,puVar3[1]);
    if (plVar9 == (long *)0x0) goto LAB_03105b60;
    lVar5 = *plVar9;
    uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar4 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x27) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_03105b30;
        }
        uVar4 = uVar4 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined8 *)FUN_01a472ec(plVar9,*unaff_x27,0);
LAB_03105b30:
    (*(code *)*puVar3)(plVar9,puVar3[1]);
  }
  if (unaff_w20 < 0) {
LAB_03105b88:
    bVar1 = true;
  }
  else {
    uVar4 = FUN_025be440();
    if ((uVar4 & 1) != 0) {
      return;
    }
    bVar1 = false;
  }
  FUN_01fc13d0();
  if (in_stack_00000000 == (long *)0x0) {
    plVar9 = (long *)FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cbeb18,1);
    lVar5 = thunk_FUN_01a89a98(*(undefined8 *)
                                System_Collections_Generic_Dictionary<NetworkRunner,_List<FusionStats>>_TypeInfo
                              );
    if (plVar9 != (long *)0x0) {
      if ((lVar5 == 0) ||
         (lVar6 = thunk_FUN_01a89d6c(lVar5,*(undefined8 *)(*plVar9 + 0x40)), lVar6 != 0)) {
        if ((int)plVar9[3] != 0) {
          plVar9[4] = lVar5;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar9 + 4,lVar5);
          if (*(int *)(*(long *)PTR_DAT_03cc8320 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          FUN_030e4f20(*(undefined8 *)
                        System_IO_Enumeration_FileSystemEnumerable_FindPredicate<FileSystemInfo>_TypeInfo
                       ,plVar9,0);
          return;
        }
        goto LAB_03105f4c;
      }
      goto UnityEngine_InputSystem_Keyboard__get_numpadMultiplyKey;
    }
  }
  else if ((bVar1) || (uVar4 = FUN_025be440(), (uVar4 & 1) == 0)) {
    plVar9 = (long *)FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cbeb18,2);
    if (plVar9 != (long *)0x0) {
      lVar5 = thunk_FUN_01a89d6c(in_stack_00000000,*(undefined8 *)(*plVar9 + 0x40));
      if (lVar5 != 0) {
        if ((int)plVar9[3] != 0) {
          plVar9[4] = (long)in_stack_00000000;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                    (plVar9 + 4,in_stack_00000000);
          lVar5 = *in_stack_00000000;
          uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar4 != 0) {
            piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == *unaff_x27) {
                puVar3 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
                goto UnityEngine_InputSystem_Keyboard__get_digit6Key;
              }
              uVar4 = uVar4 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar4 != 0);
          }
          puVar3 = (undefined8 *)FUN_01a472ec(in_stack_00000000,*unaff_x27,0);
UnityEngine_InputSystem_Keyboard__get_digit6Key:
          lVar5 = (*(code *)*puVar3)(in_stack_00000000,puVar3[1]);
          if ((lVar5 != 0) &&
             (lVar6 = thunk_FUN_01a89d6c(lVar5,*(undefined8 *)(*plVar9 + 0x40)), lVar6 == 0))
          goto UnityEngine_InputSystem_Keyboard__get_numpadMultiplyKey;
          if (1 < *(uint *)(plVar9 + 3)) {
            plVar9[5] = lVar5;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar9 + 5,lVar5);
            if (*(int *)(*(long *)PTR_DAT_03cc8320 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            FUN_030e04bc(*(undefined8 *)
                          System_IO_Enumeration_FileSystemEnumerable_FindPredicate<FileInfo>_TypeInfo
                         ,plVar9,0);
            lVar5 = FUN_030df544();
            if ((lVar5 != 0) && (plVar9 = *(long **)(lVar5 + 0x30), plVar9 != (long *)0x0)) {
              lVar5 = *plVar9;
              uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
              if (uVar4 != 0) {
                piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar8 + -2) == *unaff_x25) {
                    puVar3 = (undefined8 *)(lVar5 + (long)(*piVar8 + 2) * 0x10 + 0x138);
                    goto FUN_03105ef4;
                  }
                  uVar4 = uVar4 - 1;
                  piVar8 = piVar8 + 4;
                } while (uVar4 != 0);
              }
              puVar3 = (undefined8 *)FUN_01a472ec(plVar9,*unaff_x25,2);
FUN_03105ef4:
              (*(code *)*puVar3)(plVar9,in_stack_00000000,puVar3[1]);
              return;
            }
            goto LAB_03105b60;
          }
        }
        goto LAB_03105f4c;
      }
      goto UnityEngine_InputSystem_Keyboard__get_numpadMultiplyKey;
    }
  }
  else {
    plVar9 = (long *)FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cbeb18,2);
    if (plVar9 != (long *)0x0) {
      lVar5 = thunk_FUN_01a89d6c(in_stack_00000000,*(undefined8 *)(*plVar9 + 0x40));
      if (lVar5 == 0) {
UnityEngine_InputSystem_Keyboard__get_numpadMultiplyKey:
        uVar7 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
        FUN_01ab6b14(uVar7,0);
      }
      if ((int)plVar9[3] != 0) {
        plVar9[4] = (long)in_stack_00000000;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                  (plVar9 + 4,in_stack_00000000);
        lVar5 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cbeda8);
        if ((lVar5 != 0) &&
           (lVar6 = thunk_FUN_01a89d6c(lVar5,*(undefined8 *)(*plVar9 + 0x40)), lVar6 == 0))
        goto UnityEngine_InputSystem_Keyboard__get_numpadMultiplyKey;
        if (1 < *(uint *)(plVar9 + 3)) {
          plVar9[5] = lVar5;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar9 + 5,lVar5);
          if (*(int *)(*(long *)PTR_DAT_03cc8320 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          FUN_030e04bc(*(undefined8 *)
                        System_IO_Enumeration_FileSystemEnumerable_FindPredicate<DirectoryInfo>_TypeInfo
                       ,plVar9,0);
          lVar5 = FUN_030df544();
          if ((lVar5 != 0) && (plVar9 = *(long **)(lVar5 + 0x30), plVar9 != (long *)0x0)) {
            lVar5 = *plVar9;
            uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
            if (uVar4 != 0) {
              piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
              do {
                if (*(long *)(piVar8 + -2) == *unaff_x26) {
                  puVar3 = (undefined8 *)(lVar5 + (long)(*piVar8 + 1) * 0x10 + 0x138);
                  goto UnityEngine_InputSystem_Keyboard__get_capsLockKey;
                }
                uVar4 = uVar4 - 1;
                piVar8 = piVar8 + 4;
              } while (uVar4 != 0);
            }
            puVar3 = (undefined8 *)FUN_01a472ec(plVar9,*unaff_x26,1);
UnityEngine_InputSystem_Keyboard__get_capsLockKey:
            (*(code *)*puVar3)(plVar9,unaff_w20,in_stack_00000000,puVar3[1]);
            return;
          }
          goto LAB_03105b60;
        }
      }
LAB_03105f4c:
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
  }
LAB_03105b60:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


