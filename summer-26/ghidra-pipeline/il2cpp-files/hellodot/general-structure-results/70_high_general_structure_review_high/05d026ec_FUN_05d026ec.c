/*
FUNCTION_NAME: FUN_05d026ec
ENTRY_POINT: 05d026ec
PROGRAM: hellodot-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_7;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_3
*/


long * FUN_05d026ec(long *param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  int *piVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  long lVar20;
  long lVar21;
  undefined8 uVar22;
  
  puVar3 = System_ArraySegment<byte>_TypeInfo;
  if ((DAT_06a7a565 & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_0663fed0);
    AkMIDIEventCallbackInfo__get_byProgramNum(System_ArraySegment<int>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_0663fea8);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_0663feb0);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_0663feb8);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_0663fed8);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (Niantic_Zeppelin_Assets_AssetLoadRequest<Object>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (System_Action<XRInputModalityManager_InputMode>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(System_ArraySegment<byte>_TypeInfo);
    DAT_06a7a565 = 1;
  }
  plVar9 = (long *)thunk_FUN_02cea894(*(undefined8 *)puVar3);
  FUN_05d09cbc(plVar9,0);
  puVar3 = PTR_DAT_0663feb0;
  plVar17 = (long *)param_1[3];
  if (plVar17 == (long *)0x0) {
LAB_05d03794:
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  lVar14 = *plVar17;
  uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
  if (uVar15 != 0) {
    piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
    do {
      if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_0663feb0) {
        puVar10 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
        goto LAB_05d02800;
      }
      uVar15 = uVar15 - 1;
      piVar16 = piVar16 + 4;
    } while (uVar15 != 0);
  }
  puVar10 = (undefined8 *)FUN_02ce0a7c(plVar17,*(long *)PTR_DAT_0663feb0,0);
LAB_05d02800:
  uVar11 = (*(code *)*puVar10)(plVar17,1,puVar10[1]);
  if (plVar9 == (long *)0x0) goto LAB_05d03794;
  (**(code **)(*plVar9 + 0x188))(plVar9,uVar11,*(undefined8 *)(*plVar9 + 400));
  puVar2 = PTR_DAT_0663fea8;
  plVar17 = (long *)param_1[3];
  if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  lVar14 = *plVar17;
  uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
  if (uVar15 != 0) {
    piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
    do {
      if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_0663fea8) {
        puVar10 = (undefined8 *)(lVar14 + (long)(*piVar16 + 1) * 0x10 + 0x138);
        goto LAB_05d02888;
      }
      uVar15 = uVar15 - 1;
      piVar16 = piVar16 + 4;
    } while (uVar15 != 0);
  }
  puVar10 = (undefined8 *)FUN_02ce0a7c(plVar17,*(long *)PTR_DAT_0663fea8,1);
LAB_05d02888:
  uVar7 = (*(code *)*puVar10)(plVar17,1,puVar10[1]);
  puVar5 = PTR_DAT_0663fed8;
  puVar4 = PTR_DAT_0663feb8;
  if (uVar7 - 4 < 6) {
    plVar17 = (long *)param_1[4];
    if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    lVar14 = *plVar17;
    uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_0663fed8) {
          puVar10 = (undefined8 *)(lVar14 + (long)(*piVar16 + 3) * 0x10 + 0x138);
          goto LAB_05d029b0;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar10 = (undefined8 *)FUN_02ce0a7c(plVar17,*(long *)PTR_DAT_0663fed8,3);
LAB_05d029b0:
    plVar17 = (long *)(*(code *)*puVar10)(plVar17,puVar10[1]);
    puVar2 = System_Action<XRInputModalityManager_InputMode>_TypeInfo;
    if (plVar17 != (long *)0x0) {
      bVar1 = *(byte *)(*(long *)PTR_DAT_0663fed0 + 0x130);
      if ((*(byte *)(*plVar17 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar17 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_0663fed0)
         ) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce8018(plVar17);
      }
    }
    lVar14 = *(long *)System_Action<XRInputModalityManager_InputMode>_TypeInfo;
    if (*(int *)(lVar14 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
      lVar14 = *(long *)puVar2;
    }
    FUN_05bb44a0(param_1,*(undefined8 *)(*(long *)(lVar14 + 0xb8) + 0x1c8),0);
    plVar12 = (long *)FUN_05d037d4(param_1);
    lVar14 = param_1[2];
    if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    *(int *)(lVar14 + 0x18) = *(int *)(lVar14 + 0x18) + -1;
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    plVar18 = (long *)param_1[4];
    uVar11 = (**(code **)(*plVar12 + 0x1b8))(plVar12,*(undefined8 *)(*plVar12 + 0x1c0));
    if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    lVar14 = *plVar18;
    uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)puVar5) {
          puVar10 = (undefined8 *)(lVar14 + (long)(*piVar16 + 6) * 0x10 + 0x138);
          goto LAB_05d02ab8;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar10 = (undefined8 *)FUN_02ce0a7c(plVar18,*(long *)puVar5,6);
LAB_05d02ab8:
    (*(code *)*puVar10)(plVar18,plVar17,uVar11,puVar10[1]);
  }
  else {
    if ((uVar7 & 0xfffffffe) == 10) {
      plVar17 = (long *)param_1[4];
      if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      lVar14 = *plVar17;
      uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_0663fed8) {
            puVar10 = (undefined8 *)(lVar14 + (long)(*piVar16 + 3) * 0x10 + 0x138);
            goto LAB_05d02ae0;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar10 = (undefined8 *)FUN_02ce0a7c(plVar17,*(long *)PTR_DAT_0663fed8,3);
LAB_05d02ae0:
      plVar17 = (long *)(*(code *)*puVar10)(plVar17,puVar10[1]);
      puVar6 = System_Action<XRInputModalityManager_InputMode>_TypeInfo;
      if (plVar17 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)PTR_DAT_0663fed0 + 0x130);
        if ((*(byte *)(*plVar17 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar17 + 200) + (ulong)bVar1 * 8 + -8) !=
            *(long *)PTR_DAT_0663fed0)) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce8018(plVar17);
        }
      }
      lVar14 = *(long *)System_Action<XRInputModalityManager_InputMode>_TypeInfo;
      if (*(int *)(lVar14 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
        lVar14 = *(long *)puVar6;
      }
      FUN_05bb44a0(param_1,*(undefined8 *)(*(long *)(lVar14 + 0xb8) + 0x1d0),0);
      plVar12 = (long *)FUN_05d05254(param_1);
      lVar14 = param_1[2];
      if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      *(int *)(lVar14 + 0x18) = *(int *)(lVar14 + 0x18) + -1;
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      plVar18 = (long *)param_1[4];
      uVar11 = (**(code **)(*plVar12 + 0x1b8))(plVar12,*(undefined8 *)(*plVar12 + 0x1c0));
      if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      lVar14 = *plVar18;
      uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)puVar5) {
            puVar10 = (undefined8 *)(lVar14 + (long)(*piVar16 + 6) * 0x10 + 0x138);
            goto LAB_05d02d98;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar10 = (undefined8 *)FUN_02ce0a7c(plVar18,*(long *)puVar5,6);
LAB_05d02d98:
      (*(code *)*puVar10)(plVar18,plVar17,uVar11,puVar10[1]);
      plVar9[4] = plVar12[4];
      plVar18 = (long *)param_1[3];
      if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      lVar14 = *plVar18;
      uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)puVar2) {
            puVar10 = (undefined8 *)(lVar14 + (long)(*piVar16 + 1) * 0x10 + 0x138);
            goto LAB_05d02ec8;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar10 = (undefined8 *)FUN_02ce0a7c(plVar18,*(long *)puVar2,1);
LAB_05d02ec8:
      iVar8 = (*(code *)*puVar10)(plVar18,1,puVar10[1]);
      if (iVar8 == 0x2e) {
        lVar14 = *(long *)puVar6;
        if (*(int *)(lVar14 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
          lVar14 = *(long *)puVar6;
        }
        FUN_05bb44a0(param_1,*(undefined8 *)(*(long *)(lVar14 + 0xb8) + 0x1d8),0);
        plVar18 = (long *)FUN_05d05fa8(param_1);
        lVar14 = param_1[2];
        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        *(int *)(lVar14 + 0x18) = *(int *)(lVar14 + 0x18) + -1;
        if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        plVar19 = (long *)param_1[4];
        uVar11 = (**(code **)(*plVar18 + 0x1b8))(plVar18,*(undefined8 *)(*plVar18 + 0x1c0));
        if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        lVar14 = *plVar19;
        uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar15 != 0) {
          piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == *(long *)puVar5) {
              puVar10 = (undefined8 *)(lVar14 + (long)(*piVar16 + 6) * 0x10 + 0x138);
              goto LAB_05d03374;
            }
            uVar15 = uVar15 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar15 != 0);
        }
        puVar10 = (undefined8 *)FUN_02ce0a7c(plVar19,*(long *)puVar5,6);
LAB_05d03374:
        (*(code *)*puVar10)(plVar19,plVar17,uVar11,puVar10[1]);
        if (plVar18[4] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        lVar21 = plVar12[4];
        uVar11 = System_Collections_Generic_List<FocusController_FocusedElement>__get_Item
                           (plVar18[4],
                            *(undefined8 *)Niantic_Zeppelin_Assets_AssetLoadRequest<Object>_TypeInfo
                           );
        lVar14 = thunk_FUN_02cea894(*(undefined8 *)System_ArraySegment<int>_TypeInfo);
        FUN_04f7383c(lVar14,0);
        *(long *)(lVar14 + 0x10) = lVar21;
        *(undefined8 *)(lVar14 + 0x18) = uVar11;
        plVar9[4] = lVar14;
      }
      goto LAB_05d03114;
    }
    if (uVar7 != 0x2e) {
      lVar14 = param_1[3];
      thunk_FUN_02c7737c(PTR_DAT_0663ff30);
      uVar11 = thunk_FUN_02cea894();
      uVar22 = thunk_FUN_02c7737c(PTR_DAT_065c8668);
      FUN_05bb0c68(uVar11,uVar22,0x13,0,lVar14,0);
      uVar22 = thunk_FUN_02c7737c(Niantic_Zeppelin_Assets_AssetRequest<string[]>_TypeInfo);
                    /* WARNING: Subroutine does not return */
      FUN_02ce7b54(uVar11,uVar22);
    }
    plVar17 = (long *)param_1[4];
    if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    lVar14 = *plVar17;
    uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_0663fed8) {
          puVar10 = (undefined8 *)(lVar14 + (long)(*piVar16 + 3) * 0x10 + 0x138);
          goto LAB_05d02be8;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar10 = (undefined8 *)FUN_02ce0a7c(plVar17,*(long *)PTR_DAT_0663fed8,3);
LAB_05d02be8:
    plVar17 = (long *)(*(code *)*puVar10)(plVar17,puVar10[1]);
    puVar2 = System_Action<XRInputModalityManager_InputMode>_TypeInfo;
    if (plVar17 != (long *)0x0) {
      bVar1 = *(byte *)(*(long *)PTR_DAT_0663fed0 + 0x130);
      if ((*(byte *)(*plVar17 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar17 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_0663fed0)
         ) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce8018(plVar17);
      }
    }
    lVar21 = param_1[3];
    lVar14 = *(long *)System_Action<XRInputModalityManager_InputMode>_TypeInfo;
    if (*(int *)(lVar14 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
      lVar14 = *(long *)puVar2;
    }
    lVar14 = (**(code **)(*param_1 + 0x1b8))
                       (param_1,lVar21,0x2e,*(undefined8 *)(*(long *)(lVar14 + 0xb8) + 0x1b0),
                        *(undefined8 *)(*param_1 + 0x1c0));
    if (lVar14 == 0) {
      lVar21 = 0;
    }
    else {
      uVar11 = *(undefined8 *)puVar4;
      lVar21 = thunk_FUN_02cea798(lVar14,uVar11);
      if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce8018(lVar14,uVar11);
      }
    }
    plVar12 = (long *)param_1[4];
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    lVar14 = *plVar12;
    uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)puVar5) {
          puVar10 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_05d02cf4;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar10 = (undefined8 *)FUN_02ce0a7c(plVar12,*(long *)puVar5,0);
LAB_05d02cf4:
    plVar12 = (long *)(*(code *)*puVar10)(plVar12,lVar21,puVar10[1]);
    if (plVar12 != (long *)0x0) {
      bVar1 = *(byte *)(*(long *)PTR_DAT_0663fed0 + 0x130);
      if ((*(byte *)(*plVar12 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_0663fed0)
         ) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce8018(plVar12);
      }
    }
    plVar18 = (long *)param_1[4];
    if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    lVar14 = *plVar18;
    uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)puVar5) {
          puVar10 = (undefined8 *)(lVar14 + (long)(*piVar16 + 6) * 0x10 + 0x138);
          goto LAB_05d02e0c;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar10 = (undefined8 *)FUN_02ce0a7c(plVar18,*(long *)puVar5,6);
LAB_05d02e0c:
    (*(code *)*puVar10)(plVar18,plVar17,plVar12,puVar10[1]);
    FUN_05bb44a0(param_1,*(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x1b8),0);
    plVar12 = (long *)FUN_05cf7c9c(param_1);
    lVar14 = param_1[2];
    if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    *(int *)(lVar14 + 0x18) = *(int *)(lVar14 + 0x18) + -1;
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    plVar18 = (long *)param_1[4];
    uVar11 = (**(code **)(*plVar12 + 0x1b8))(plVar12,*(undefined8 *)(*plVar12 + 0x1c0));
    if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    lVar14 = *plVar18;
    uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)puVar5) {
          puVar10 = (undefined8 *)(lVar14 + (long)(*piVar16 + 6) * 0x10 + 0x138);
          goto LAB_05d02f98;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar10 = (undefined8 *)FUN_02ce0a7c(plVar18,*(long *)puVar5,6);
LAB_05d02f98:
    (*(code *)*puVar10)(plVar18,plVar17,uVar11,puVar10[1]);
    lVar14 = (**(code **)(*param_1 + 0x1b8))
                       (param_1,param_1[3],0x2f,
                        *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x1c0),
                        *(undefined8 *)(*param_1 + 0x1c0));
    if (lVar14 == 0) {
      lVar21 = 0;
    }
    else {
      uVar11 = *(undefined8 *)puVar4;
      lVar21 = thunk_FUN_02cea798(lVar14,uVar11);
      if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce8018(lVar14,uVar11);
      }
    }
    plVar18 = (long *)param_1[4];
    if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    lVar14 = *plVar18;
    uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)puVar5) {
          puVar10 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_05d03054;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar10 = (undefined8 *)FUN_02ce0a7c(plVar18,*(long *)puVar5,0);
LAB_05d03054:
    plVar18 = (long *)(*(code *)*puVar10)(plVar18,lVar21,puVar10[1]);
    if (plVar18 != (long *)0x0) {
      bVar1 = *(byte *)(*(long *)PTR_DAT_0663fed0 + 0x130);
      if ((*(byte *)(*plVar18 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar18 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_0663fed0)
         ) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce8018(plVar18);
      }
    }
    plVar19 = (long *)param_1[4];
    if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    lVar14 = *plVar19;
    uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)puVar5) {
          puVar10 = (undefined8 *)(lVar14 + (long)(*piVar16 + 6) * 0x10 + 0x138);
          goto FUN_05d030f8;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar10 = (undefined8 *)FUN_02ce0a7c(plVar19,*(long *)puVar5,6);
FUN_05d030f8:
    (*(code *)*puVar10)(plVar19,plVar17,plVar18,puVar10[1]);
  }
  plVar9[4] = plVar12[4];
LAB_05d03114:
  plVar12 = (long *)param_1[3];
  if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  lVar14 = *plVar12;
  uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
  if (uVar15 != 0) {
    piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
    do {
      if (*(long *)(piVar16 + -2) == *(long *)puVar3) {
        puVar10 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
        goto LAB_05d03168;
      }
      uVar15 = uVar15 - 1;
      piVar16 = piVar16 + 4;
    } while (uVar15 != 0);
  }
  puVar10 = (undefined8 *)FUN_02ce0a7c(plVar12,*(long *)puVar3,0);
LAB_05d03168:
  uVar11 = (*(code *)*puVar10)(plVar12,0xffffffff,puVar10[1]);
  (**(code **)(*plVar9 + 0x1a8))(plVar9,uVar11,*(undefined8 *)(*plVar9 + 0x1b0));
  plVar12 = (long *)param_1[4];
  if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  lVar14 = *plVar12;
  uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
  if (uVar15 != 0) {
    piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
    do {
      if (*(long *)(piVar16 + -2) == *(long *)puVar5) {
        puVar10 = (undefined8 *)(lVar14 + (long)(*piVar16 + 8) * 0x10 + 0x138);
        goto LAB_05d031e4;
      }
      uVar15 = uVar15 - 1;
      piVar16 = piVar16 + 4;
    } while (uVar15 != 0);
  }
  puVar10 = (undefined8 *)FUN_02ce0a7c(plVar12,*(long *)puVar5,8);
LAB_05d031e4:
  plVar17 = (long *)(*(code *)*puVar10)(plVar12,plVar17,puVar10[1]);
  if (plVar17 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_0663fed0 + 0x130);
    if ((*(byte *)(*plVar17 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar17 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_0663fed0))
    {
                    /* WARNING: Subroutine does not return */
      FUN_02ce8018(plVar17);
    }
  }
  (**(code **)(*plVar9 + 0x1c8))(plVar9,plVar17,*(undefined8 *)(*plVar9 + 0x1d0));
  plVar17 = (long *)param_1[4];
  uVar11 = (**(code **)(*plVar9 + 0x1b8))(plVar9,*(undefined8 *)(*plVar9 + 0x1c0));
  lVar14 = (**(code **)(*plVar9 + 0x178))(plVar9,*(undefined8 *)(*plVar9 + 0x180));
  lVar21 = (**(code **)(*plVar9 + 0x198))(plVar9,*(undefined8 *)(*plVar9 + 0x1a0));
  if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  lVar20 = *(long *)puVar5;
  uVar22 = *(undefined8 *)puVar4;
  if (lVar14 == 0) {
    lVar13 = 0;
  }
  else {
    lVar13 = thunk_FUN_02cea798(lVar14,uVar22);
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce8018(lVar14,uVar22);
    }
    uVar22 = *(undefined8 *)puVar4;
  }
  if (lVar21 == 0) {
    lVar14 = 0;
  }
  else {
    lVar14 = thunk_FUN_02cea798(lVar21,uVar22);
    if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce8018(lVar21,uVar22);
    }
  }
  lVar21 = *plVar17;
  uVar15 = (ulong)*(ushort *)(lVar21 + 0x12e);
  if (uVar15 != 0) {
    piVar16 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
    do {
      if (*(long *)(piVar16 + -2) == lVar20) {
        puVar10 = (undefined8 *)(lVar21 + (long)(*piVar16 + 0x13) * 0x10 + 0x138);
        goto LAB_05d0332c;
      }
      uVar15 = uVar15 - 1;
      piVar16 = piVar16 + 4;
    } while (uVar15 != 0);
  }
  puVar10 = (undefined8 *)FUN_02ce0a7c(plVar17,lVar20,0x13);
LAB_05d0332c:
  (*(code *)*puVar10)(plVar17,uVar11,lVar13,lVar14,puVar10[1]);
  return plVar9;
}


