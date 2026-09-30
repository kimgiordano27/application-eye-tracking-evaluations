/*
FUNCTION_NAME: FUN_05cff52c
ENTRY_POINT: 05cff52c
PROGRAM: hellodot-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_4;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


long * FUN_05cff52c(long *param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  int iVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long *plVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  int *piVar17;
  long *plVar18;
  long *plVar19;
  long lVar20;
  undefined4 uVar21;
  
  puVar3 = System_Action<Object[],_IntPtr,_IntPtr,_int,_int,_Action<TypeDispatchData>>_TypeInfo;
  if ((DAT_06a7a562 & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum(System_Action<DragGesture,_Touch>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_0663fed0);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_0663fea8);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_0663feb0);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_0663feb8);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_0663fed8);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (System_Action<XRInputModalityManager_InputMode>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (System_Action<Object[],_IntPtr,_IntPtr,_int,_int,_Action<TypeDispatchData>>_TypeInfo)
    ;
    DAT_06a7a562 = 1;
  }
  plVar8 = (long *)thunk_FUN_02cea894(*(undefined8 *)puVar3);
  FUN_05d09aa0(plVar8,0);
  plVar18 = (long *)param_1[3];
  if (plVar18 != (long *)0x0) {
    lVar14 = *plVar18;
    uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_0663feb0) {
          puVar9 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
          goto FUN_05cff634;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    puVar9 = (undefined8 *)FUN_02ce0a7c(plVar18,*(long *)PTR_DAT_0663feb0,0);
FUN_05cff634:
    uVar10 = (*(code *)*puVar9)(plVar18,1,puVar9[1]);
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 0x188))(plVar8,uVar10,*(undefined8 *)(*plVar8 + 400));
      puVar3 = PTR_DAT_0663fed8;
      plVar18 = (long *)param_1[4];
      if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      lVar14 = *plVar18;
      uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar16 != 0) {
        piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_0663fed8) {
            puVar9 = (undefined8 *)(lVar14 + (long)(*piVar17 + 3) * 0x10 + 0x138);
            goto LAB_05cff6bc;
          }
          uVar16 = uVar16 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar16 != 0);
      }
      puVar9 = (undefined8 *)FUN_02ce0a7c(plVar18,*(long *)PTR_DAT_0663fed8,3);
LAB_05cff6bc:
      plVar18 = (long *)(*(code *)*puVar9)(plVar18,puVar9[1]);
      puVar4 = System_Action<XRInputModalityManager_InputMode>_TypeInfo;
      if (plVar18 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)PTR_DAT_0663fed0 + 0x130);
        if ((*(byte *)(*plVar18 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar18 + 200) + (ulong)bVar1 * 8 + -8) !=
            *(long *)PTR_DAT_0663fed0)) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce8018(plVar18);
        }
      }
      lVar14 = *(long *)System_Action<XRInputModalityManager_InputMode>_TypeInfo;
      if (*(int *)(lVar14 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
        lVar14 = *(long *)puVar4;
      }
      FUN_05bb44a0(param_1,*(undefined8 *)(*(long *)(lVar14 + 0xb8) + 0x130),0);
      plVar11 = (long *)FUN_05d002fc(param_1);
      lVar14 = param_1[2];
      if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      *(int *)(lVar14 + 0x18) = *(int *)(lVar14 + 0x18) + -1;
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      plVar19 = (long *)param_1[4];
      uVar10 = (**(code **)(*plVar11 + 0x1b8))(plVar11,*(undefined8 *)(*plVar11 + 0x1c0));
      if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      lVar14 = *plVar19;
      uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar16 != 0) {
        piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == *(long *)puVar3) {
            puVar9 = (undefined8 *)(lVar14 + (long)(*piVar17 + 6) * 0x10 + 0x138);
            goto LAB_05cff7c4;
          }
          uVar16 = uVar16 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar16 != 0);
      }
      puVar9 = (undefined8 *)FUN_02ce0a7c(plVar19,*(long *)puVar3,6);
LAB_05cff7c4:
      (*(code *)*puVar9)(plVar19,plVar18,uVar10,puVar9[1]);
      plVar8[4] = plVar11[4];
      puVar5 = System_Action<DragGesture,_Touch>_TypeInfo;
      puVar2 = PTR_DAT_0663fea8;
      plVar11 = (long *)param_1[3];
      do {
        if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        lVar15 = *plVar11;
        lVar14 = *(long *)puVar2;
        uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar16 != 0) {
          piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == lVar14) {
              puVar9 = (undefined8 *)(lVar15 + (long)(*piVar17 + 1) * 0x10 + 0x138);
              goto LAB_05cff848;
            }
            uVar16 = uVar16 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar16 != 0);
        }
        puVar9 = (undefined8 *)FUN_02ce0a7c(plVar11,lVar14,1);
LAB_05cff848:
        uVar6 = (*(code *)*puVar9)(plVar11,1,puVar9[1]);
        plVar11 = (long *)param_1[3];
        if ((uVar6 & 0xfffffffe) != 0x26) {
          if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02ce7c7c();
          }
          lVar14 = *plVar11;
          uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar16 == 0) goto LAB_05cffd0c;
          piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          goto LAB_05cffcf4;
        }
        if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        lVar15 = *plVar11;
        lVar14 = *(long *)puVar2;
        uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar16 != 0) {
          piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == lVar14) {
              puVar9 = (undefined8 *)(lVar15 + (long)(*piVar17 + 1) * 0x10 + 0x138);
              goto LAB_05cff8bc;
            }
            uVar16 = uVar16 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar16 != 0);
        }
        puVar9 = (undefined8 *)FUN_02ce0a7c(plVar11,lVar14,1);
LAB_05cff8bc:
        iVar7 = (*(code *)*puVar9)(plVar11,1,puVar9[1]);
        if (iVar7 == 0x26) {
          lVar14 = *(long *)puVar4;
          lVar15 = param_1[3];
          if (*(int *)(lVar14 + 0xe0) == 0) {
            thunk_FUN_02cd038c();
            lVar14 = *(long *)puVar4;
          }
          lVar14 = (**(code **)(*param_1 + 0x1b8))
                             (param_1,lVar15,0x26,*(undefined8 *)(*(long *)(lVar14 + 0xb8) + 0x138),
                              *(undefined8 *)(*param_1 + 0x1c0));
          if (lVar14 == 0) {
            lVar15 = 0;
          }
          else {
            uVar10 = *(undefined8 *)PTR_DAT_0663feb8;
            lVar15 = thunk_FUN_02cea798(lVar14,uVar10);
            if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02ce8018(lVar14,uVar10);
            }
          }
          plVar11 = (long *)param_1[4];
          if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02ce7c7c();
          }
          lVar14 = *plVar11;
          uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar16 != 0) {
            piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == *(long *)puVar3) {
                puVar9 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
                goto LAB_05cffa48;
              }
              uVar16 = uVar16 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar16 != 0);
          }
          puVar9 = (undefined8 *)FUN_02ce0a7c(plVar11,*(long *)puVar3,0);
LAB_05cffa48:
          plVar11 = (long *)(*(code *)*puVar9)(plVar11,lVar15,puVar9[1]);
          if (plVar11 != (long *)0x0) {
            bVar1 = *(byte *)(*(long *)PTR_DAT_0663fed0 + 0x130);
            if ((*(byte *)(*plVar11 + 0x130) < bVar1) ||
               (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) !=
                *(long *)PTR_DAT_0663fed0)) {
                    /* WARNING: Subroutine does not return */
              FUN_02ce8018(plVar11);
            }
          }
          plVar19 = (long *)param_1[4];
          if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02ce7c7c();
          }
          lVar14 = *plVar19;
          uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar16 != 0) {
            piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == *(long *)puVar3) {
                puVar9 = (undefined8 *)(lVar14 + (long)(*piVar17 + 6) * 0x10 + 0x138);
                goto LAB_05cffb8c;
              }
              uVar16 = uVar16 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar16 != 0);
          }
          puVar9 = (undefined8 *)FUN_02ce0a7c(plVar19,*(long *)puVar3,6);
LAB_05cffb8c:
          (*(code *)*puVar9)(plVar19,plVar18,plVar11,puVar9[1]);
          uVar21 = 9;
        }
        else {
          if (iVar7 != 0x27) {
            lVar14 = param_1[3];
            thunk_FUN_02c7737c(PTR_DAT_0663ff30);
            uVar10 = thunk_FUN_02cea894();
            uVar13 = thunk_FUN_02c7737c(PTR_DAT_065c8668);
            FUN_05bb0c68(uVar10,uVar13,0xd,0,lVar14,0);
            uVar13 = thunk_FUN_02c7737c(
                                       System_Action<ulong,_bool,_OVRSpace,_Guid,_OVRPlugin_SpaceComponentType,_bool>_TypeInfo
                                       );
                    /* WARNING: Subroutine does not return */
            FUN_02ce7b54(uVar10,uVar13);
          }
          lVar14 = *(long *)puVar4;
          lVar15 = param_1[3];
          if (*(int *)(lVar14 + 0xe0) == 0) {
            thunk_FUN_02cd038c();
            lVar14 = *(long *)puVar4;
          }
          lVar14 = (**(code **)(*param_1 + 0x1b8))
                             (param_1,lVar15,0x27,*(undefined8 *)(*(long *)(lVar14 + 0xb8) + 0x140),
                              *(undefined8 *)(*param_1 + 0x1c0));
          if (lVar14 == 0) {
            lVar15 = 0;
          }
          else {
            uVar10 = *(undefined8 *)PTR_DAT_0663feb8;
            lVar15 = thunk_FUN_02cea798(lVar14,uVar10);
            if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02ce8018(lVar14,uVar10);
            }
          }
          plVar11 = (long *)param_1[4];
          if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02ce7c7c();
          }
          lVar14 = *plVar11;
          uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar16 != 0) {
            piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == *(long *)puVar3) {
                puVar9 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
                goto LAB_05cffae8;
              }
              uVar16 = uVar16 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar16 != 0);
          }
          puVar9 = (undefined8 *)FUN_02ce0a7c(plVar11,*(long *)puVar3,0);
LAB_05cffae8:
          plVar11 = (long *)(*(code *)*puVar9)(plVar11,lVar15,puVar9[1]);
          if (plVar11 != (long *)0x0) {
            bVar1 = *(byte *)(*(long *)PTR_DAT_0663fed0 + 0x130);
            if ((*(byte *)(*plVar11 + 0x130) < bVar1) ||
               (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) !=
                *(long *)PTR_DAT_0663fed0)) {
                    /* WARNING: Subroutine does not return */
              FUN_02ce8018(plVar11);
            }
          }
          plVar19 = (long *)param_1[4];
          if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02ce7c7c();
          }
          lVar14 = *plVar19;
          uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar16 != 0) {
            piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == *(long *)puVar3) {
                puVar9 = (undefined8 *)(lVar14 + (long)(*piVar17 + 6) * 0x10 + 0x138);
                goto LAB_05cffbb8;
              }
              uVar16 = uVar16 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar16 != 0);
          }
          puVar9 = (undefined8 *)FUN_02ce0a7c(plVar19,*(long *)puVar3,6);
LAB_05cffbb8:
          (*(code *)*puVar9)(plVar19,plVar18,plVar11,puVar9[1]);
          uVar21 = 8;
        }
        lVar14 = *(long *)puVar4;
        if (*(int *)(lVar14 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
          lVar14 = *(long *)puVar4;
        }
        FUN_05bb44a0(param_1,*(undefined8 *)(*(long *)(lVar14 + 0xb8) + 0x148),0);
        plVar11 = (long *)FUN_05d002fc(param_1);
        lVar14 = param_1[2];
        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        *(int *)(lVar14 + 0x18) = *(int *)(lVar14 + 0x18) + -1;
        if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        plVar19 = (long *)param_1[4];
        uVar10 = (**(code **)(*plVar11 + 0x1b8))(plVar11,*(undefined8 *)(*plVar11 + 0x1c0));
        if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        lVar14 = *plVar19;
        uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar16 != 0) {
          piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == *(long *)puVar3) {
              puVar9 = (undefined8 *)(lVar14 + (long)(*piVar17 + 6) * 0x10 + 0x138);
              goto LAB_05cffc88;
            }
            uVar16 = uVar16 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar16 != 0);
        }
        puVar9 = (undefined8 *)FUN_02ce0a7c(plVar19,*(long *)puVar3,6);
LAB_05cffc88:
        (*(code *)*puVar9)(plVar19,plVar18,uVar10,puVar9[1]);
        lVar15 = plVar8[4];
        lVar20 = plVar11[4];
        lVar14 = thunk_FUN_02cea894(*(undefined8 *)puVar5);
        FUN_04f7383c(lVar14,0);
        *(undefined4 *)(lVar14 + 0x20) = uVar21;
        *(long *)(lVar14 + 0x10) = lVar15;
        *(long *)(lVar14 + 0x18) = lVar20;
        plVar8[4] = lVar14;
        plVar11 = (long *)param_1[3];
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
  while( true ) {
    uVar16 = uVar16 - 1;
    piVar17 = piVar17 + 4;
    if (uVar16 == 0) break;
LAB_05cffcf4:
    if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_0663feb0) {
      puVar9 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
      goto LAB_05cffd28;
    }
  }
LAB_05cffd0c:
  puVar9 = (undefined8 *)FUN_02ce0a7c(plVar11,*(long *)PTR_DAT_0663feb0,0);
LAB_05cffd28:
  uVar10 = (*(code *)*puVar9)(plVar11,0xffffffff,puVar9[1]);
  (**(code **)(*plVar8 + 0x1a8))(plVar8,uVar10,*(undefined8 *)(*plVar8 + 0x1b0));
  plVar11 = (long *)param_1[4];
  if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  lVar14 = *plVar11;
  uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
  if (uVar16 != 0) {
    piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
    do {
      if (*(long *)(piVar17 + -2) == *(long *)puVar3) {
        puVar9 = (undefined8 *)(lVar14 + (long)(*piVar17 + 8) * 0x10 + 0x138);
        goto LAB_05cffda4;
      }
      uVar16 = uVar16 - 1;
      piVar17 = piVar17 + 4;
    } while (uVar16 != 0);
  }
  puVar9 = (undefined8 *)FUN_02ce0a7c(plVar11,*(long *)puVar3,8);
LAB_05cffda4:
  plVar18 = (long *)(*(code *)*puVar9)(plVar11,plVar18,puVar9[1]);
  if (plVar18 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_0663fed0 + 0x130);
    if ((*(byte *)(*plVar18 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar18 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_0663fed0))
    {
                    /* WARNING: Subroutine does not return */
      FUN_02ce8018(plVar18);
    }
  }
  (**(code **)(*plVar8 + 0x1c8))(plVar8,plVar18,*(undefined8 *)(*plVar8 + 0x1d0));
  plVar18 = (long *)param_1[4];
  uVar10 = (**(code **)(*plVar8 + 0x1b8))(plVar8,*(undefined8 *)(*plVar8 + 0x1c0));
  lVar14 = (**(code **)(*plVar8 + 0x178))(plVar8,*(undefined8 *)(*plVar8 + 0x180));
  lVar15 = (**(code **)(*plVar8 + 0x198))(plVar8,*(undefined8 *)(*plVar8 + 0x1a0));
  if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  lVar20 = *(long *)puVar3;
  uVar13 = *(undefined8 *)PTR_DAT_0663feb8;
  if (lVar14 == 0) {
    lVar12 = 0;
  }
  else {
    lVar12 = thunk_FUN_02cea798(lVar14,uVar13);
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce8018(lVar14,uVar13);
    }
    uVar13 = *(undefined8 *)PTR_DAT_0663feb8;
  }
  if (lVar15 == 0) {
    lVar14 = 0;
  }
  else {
    lVar14 = thunk_FUN_02cea798(lVar15,uVar13);
    if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce8018(lVar15,uVar13);
    }
  }
  lVar15 = *plVar18;
  uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
  if (uVar16 != 0) {
    piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
    do {
      if (*(long *)(piVar17 + -2) == lVar20) {
        puVar9 = (undefined8 *)(lVar15 + (long)(*piVar17 + 0x13) * 0x10 + 0x138);
        goto UnityEngine_XR_Interaction_Toolkit_UI_BodyUI_HandMenu__TryGetTrackedAnchors;
      }
      uVar16 = uVar16 - 1;
      piVar17 = piVar17 + 4;
    } while (uVar16 != 0);
  }
  puVar9 = (undefined8 *)FUN_02ce0a7c(plVar18,lVar20,0x13);
UnityEngine_XR_Interaction_Toolkit_UI_BodyUI_HandMenu__TryGetTrackedAnchors:
  (*(code *)*puVar9)(plVar18,uVar10,lVar12,lVar14,puVar9[1]);
  return plVar8;
}


