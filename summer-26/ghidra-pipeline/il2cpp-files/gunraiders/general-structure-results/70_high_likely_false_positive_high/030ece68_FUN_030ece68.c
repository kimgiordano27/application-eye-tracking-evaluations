/*
FUNCTION_NAME: FUN_030ece68
ENTRY_POINT: 030ece68
PROGRAM: gunraiders-libil2cpp.so
SCORE: 76
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_7;telemetry_or_network_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x030ee93c) */
/* WARNING: Removing unreachable block (ram,0x030ee950) */
/* WARNING: Removing unreachable block (ram,0x030ee0e0) */
/* WARNING: Removing unreachable block (ram,0x030edc2c) */
/* WARNING: Removing unreachable block (ram,0x030eda74) */
/* WARNING: Removing unreachable block (ram,0x030ed78c) */
/* WARNING: Removing unreachable block (ram,0x030ed828) */
/* WARNING: Removing unreachable block (ram,0x030ed438) */
/* WARNING: Removing unreachable block (ram,0x030ed4e4) */
/* WARNING: Removing unreachable block (ram,0x030ee92c) */
/* WARNING: Removing unreachable block (ram,0x030ee8d8) */
/* WARNING: Removing unreachable block (ram,0x030ee880) */
/* WARNING: Removing unreachable block (ram,0x030ee3c4) */
/* WARNING: Removing unreachable block (ram,0x030ede48) */
/* WARNING: Removing unreachable block (ram,0x030ee944) */
/* WARNING: Removing unreachable block (ram,0x030ed568) */
/* WARNING: Removing unreachable block (ram,0x030ee430) */

void FUN_030ece68(long param_1)

{
  undefined4 uVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  uint uVar9;
  int iVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  undefined8 *puVar14;
  long *plVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  undefined8 uVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  ulong uVar26;
  int *piVar27;
  uint uVar28;
  
  puVar4 = UnityEngine_UIElements_RepeatButton_TypeInfo;
  puVar5 = System_Runtime_Remoting_Activation_ConstructionLevelActivator_TypeInfo;
  if ((DAT_04531dba & 1) == 0) {
    FUN_01c5d288(UnityEngine_UIElements_RepeatButton_TypeInfo);
    FUN_01c5d288(System_Runtime_Remoting_Activation_ConstructionLevelActivator_TypeInfo);
    FUN_01c5d288(PTR_DAT_0422f930);
    FUN_01c5d288(UnityEngine_ResourceRequest_TypeInfo);
    FUN_01c5d288(PTR_DAT_0422fce8);
    FUN_01c5d288(PTR_DAT_04230960);
    FUN_01c5d288(Mono_RuntimeClassHandle_TypeInfo);
    FUN_01c5d288(System_Runtime_Remoting_Messaging_ReturnMessage_TypeInfo);
    FUN_01c5d288(Mono_RuntimeEventHandle_TypeInfo);
    FUN_01c5d288(System_Linq_Expressions_RuntimeVariablesExpression_TypeInfo);
    FUN_01c5d288(System_RuntimeFieldHandle_TypeInfo);
    FUN_01c5d288(Rifle_TypeInfo);
    FUN_01c5d288(System_Reflection_RuntimeFieldInfo_TypeInfo);
    FUN_01c5d288(Photon_Realtime_RoomOptions_TypeInfo);
    FUN_01c5d288(UnityEngine_UIElements_RuntimePanel_TypeInfo);
    DAT_04531dba = 1;
  }
  plVar11 = (long *)thunk_FUN_01c496e0(*(undefined8 *)puVar4);
  FUN_03313b6c(plVar11,0);
  *(undefined1 *)(plVar11 + 2) = 0x30;
  plVar11[3] = 0;
  plVar12 = (long *)thunk_FUN_01c496e0(*(undefined8 *)puVar5);
  FUN_032a7b98(plVar12,0);
  plVar13 = *(long **)(param_1 + 0x38);
  if (plVar13 != (long *)0x0) {
    plVar13 = (long *)(**(code **)(*plVar13 + 0x388))(plVar13,*(undefined8 *)(*plVar13 + 0x390));
    puVar8 = UnityEngine_UIElements_RuntimePanel_TypeInfo;
    puVar7 = Mono_RuntimeClassHandle_TypeInfo;
    puVar6 = System_Runtime_Remoting_Messaging_ReturnMessage_TypeInfo;
    puVar3 = UnityEngine_ResourceRequest_TypeInfo;
    puVar4 = PTR_DAT_04230960;
    if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    do {
      lVar24 = *plVar13;
      lVar23 = *(long *)puVar4;
      uVar26 = (ulong)*(ushort *)(lVar24 + 0x12e);
      if (uVar26 != 0) {
        piVar27 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
        do {
          if (*(long *)(piVar27 + -2) == lVar23) {
            puVar14 = (undefined8 *)(lVar24 + (long)*piVar27 * 0x10 + 0x138);
            goto LAB_030ed030;
          }
          uVar26 = uVar26 - 1;
          piVar27 = piVar27 + 4;
        } while (uVar26 != 0);
      }
      puVar14 = (undefined8 *)FUN_01c72498(plVar13,lVar23,0);
LAB_030ed030:
      uVar26 = (*(code *)*puVar14)(plVar13,puVar14[1]);
      if ((uVar26 & 1) == 0) {
        plVar13 = (long *)thunk_FUN_01c495e4(plVar13,*(undefined8 *)PTR_DAT_0422fce8);
        if (plVar13 == (long *)0x0) goto LAB_030ed1ec;
        lVar23 = *plVar13;
        uVar26 = (ulong)*(ushort *)(lVar23 + 0x12e);
        if (uVar26 == 0) goto LAB_030ed1c4;
        piVar27 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
        goto LAB_030ed1ac;
      }
      lVar24 = *plVar13;
      lVar23 = *(long *)puVar4;
      uVar26 = (ulong)*(ushort *)(lVar24 + 0x12e);
      if (uVar26 != 0) {
        piVar27 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
        do {
          if (*(long *)(piVar27 + -2) == lVar23) {
            puVar14 = (undefined8 *)(lVar24 + (long)(*piVar27 + 1) * 0x10 + 0x138);
            goto LAB_030ed090;
          }
          uVar26 = uVar26 - 1;
          piVar27 = piVar27 + 4;
        } while (uVar26 != 0);
      }
      puVar14 = (undefined8 *)FUN_01c72498(plVar13,lVar23,1);
LAB_030ed090:
      plVar15 = (long *)(*(code *)*puVar14)(plVar13,puVar14[1]);
      if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      bVar2 = *(byte *)(*(long *)puVar7 + 0x130);
      if ((*(byte *)(*plVar15 + 0x130) < bVar2) ||
         (*(long *)(*(long *)(*plVar15 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)puVar7)) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d748(plVar15);
      }
      if (plVar15[2] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      uVar26 = FUN_0315243c(plVar15[2],*(undefined8 *)puVar8,0);
      if ((uVar26 & 1) != 0) {
        if (plVar15[3] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        lVar23 = FUN_030e63cc(plVar15[3],1);
        if (lVar23 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        uVar16 = FUN_030e59c8();
        lVar23 = thunk_FUN_01c496e0(*(undefined8 *)puVar3);
        FUN_030e78b4(lVar23,uVar16);
        if (lVar23 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        if (*(long *)(lVar23 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        lVar23 = FUN_030e63cc(*(long *)(lVar23 + 0x18),0);
        if (lVar23 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        uVar16 = FUN_030e59c8();
        uVar17 = thunk_FUN_01c496e0(*(undefined8 *)puVar6);
        FUN_030e8384(uVar17,uVar16);
        if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        (**(code **)(*plVar12 + 0x308))(plVar12,uVar17,*(undefined8 *)(*plVar12 + 0x310));
      }
    } while( true );
  }
  goto LAB_030ee904;
LAB_030ed3a8:
  plVar19 = (long *)thunk_FUN_01c495e4(plVar19,*(undefined8 *)PTR_DAT_0422fce8);
  if (plVar19 != (long *)0x0) {
    lVar24 = *plVar19;
    uVar26 = (ulong)*(ushort *)(lVar24 + 0x12e);
    if (uVar26 != 0) {
      piVar27 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
      do {
        if (*(long *)(piVar27 + -2) == *(long *)PTR_DAT_0422fce8) {
          puVar14 = (undefined8 *)(lVar24 + (long)*piVar27 * 0x10 + 0x138);
          goto LAB_030ed420;
        }
        uVar26 = uVar26 - 1;
        piVar27 = piVar27 + 4;
      } while (uVar26 != 0);
    }
    puVar14 = (undefined8 *)FUN_01c72498(plVar19,*(long *)PTR_DAT_0422fce8,0);
LAB_030ed420:
    (*(code *)*puVar14)(plVar19,puVar14[1]);
  }
  if ((uVar28 & 1) == 0) {
    if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    (**(code **)(*plVar13 + 0x308))(plVar13,plVar18,*(undefined8 *)(*plVar13 + 0x310));
  }
  goto LAB_030ed240;
code_r0x030edd10:
  lVar25 = *plVar13;
  lVar24 = *(long *)puVar5;
  uVar26 = (ulong)*(ushort *)(lVar25 + 0x12e);
  if (uVar26 != 0) {
    piVar27 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
    do {
      if (*(long *)(piVar27 + -2) == lVar24) {
        puVar14 = (undefined8 *)(lVar25 + (long)(*piVar27 + 1) * 0x10 + 0x138);
        goto LAB_030edd60;
      }
      uVar26 = uVar26 - 1;
      piVar27 = piVar27 + 4;
    } while (uVar26 != 0);
  }
  puVar14 = (undefined8 *)FUN_01c72498(plVar13,lVar24,1);
LAB_030edd60:
  plVar15 = (long *)(*(code *)*puVar14)(plVar13,puVar14[1]);
  if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  bVar2 = *(byte *)(*(long *)puVar4 + 0x130);
  if ((*(byte *)(*plVar15 + 0x130) < bVar2) ||
     (*(long *)(*(long *)(*plVar15 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)puVar4)) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5d748(plVar15);
  }
  if (plVar15[2] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  uVar26 = FUN_0315243c(plVar15[2],*(undefined8 *)puVar3,0);
  if ((uVar26 & 1) != 0) {
    FUN_030e5b98(lVar23,plVar15[3]);
  }
  goto LAB_030edcb4;
code_r0x030ee030:
  if (plVar12[2] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  uVar26 = FUN_0315243c(plVar12[2],*(undefined8 *)puVar6,0);
  if ((uVar26 & 1) != 0) {
LAB_030ee048:
    FUN_030e5b98(plVar13,plVar12[3]);
  }
  goto LAB_030edf2c;
  while( true ) {
    uVar26 = uVar26 - 1;
    piVar27 = piVar27 + 4;
    if (uVar26 == 0) break;
LAB_030ed1ac:
    if (*(long *)(piVar27 + -2) == *(long *)PTR_DAT_0422fce8) {
      puVar14 = (undefined8 *)(lVar23 + (long)*piVar27 * 0x10 + 0x138);
      goto LAB_030ed1e0;
    }
  }
LAB_030ed1c4:
  puVar14 = (undefined8 *)FUN_01c72498(plVar13,*(long *)PTR_DAT_0422fce8,0);
LAB_030ed1e0:
  (*(code *)*puVar14)(plVar13,puVar14[1]);
LAB_030ed1ec:
  plVar13 = (long *)thunk_FUN_01c496e0(*(undefined8 *)puVar5);
  FUN_032a7b98(plVar13,0);
  plVar15 = (long *)thunk_FUN_01c496e0(*(undefined8 *)puVar5);
  FUN_032a7b98(plVar15,0);
  lVar23 = FUN_030eaa24(param_1);
  if (lVar23 != 0) {
    lVar23 = FUN_030ebb44();
    puVar4 = System_Runtime_Remoting_Messaging_ReturnMessage_TypeInfo;
    puVar5 = PTR_DAT_04230960;
    if (lVar23 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
LAB_030ed240:
    uVar26 = FUN_030ebf24(lVar23);
    puVar3 = PTR_DAT_0422fce8;
    if ((uVar26 & 1) != 0) {
      plVar18 = (long *)FUN_030ebb9c(lVar23);
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      plVar19 = (long *)(**(code **)(*plVar12 + 0x388))(plVar12,*(undefined8 *)(*plVar12 + 0x390));
      if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      uVar28 = 0;
      do {
        lVar25 = *plVar19;
        lVar24 = *(long *)puVar5;
        uVar26 = (ulong)*(ushort *)(lVar25 + 0x12e);
        if (uVar26 != 0) {
          piVar27 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
          do {
            if (*(long *)(piVar27 + -2) == lVar24) {
              puVar14 = (undefined8 *)(lVar25 + (long)*piVar27 * 0x10 + 0x138);
              goto LAB_030ed2c8;
            }
            uVar26 = uVar26 - 1;
            piVar27 = piVar27 + 4;
          } while (uVar26 != 0);
        }
        puVar14 = (undefined8 *)FUN_01c72498(plVar19,lVar24,0);
LAB_030ed2c8:
        uVar26 = (*(code *)*puVar14)(plVar19,puVar14[1]);
        if ((uVar26 & 1) == 0) goto LAB_030ed3a8;
        lVar25 = *plVar19;
        lVar24 = *(long *)puVar5;
        uVar26 = (ulong)*(ushort *)(lVar25 + 0x12e);
        if (uVar26 != 0) {
          piVar27 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
          do {
            if (*(long *)(piVar27 + -2) == lVar24) {
              puVar14 = (undefined8 *)(lVar25 + (long)(*piVar27 + 1) * 0x10 + 0x138);
              goto LAB_030ed328;
            }
            uVar26 = uVar26 - 1;
            piVar27 = piVar27 + 4;
          } while (uVar26 != 0);
        }
        puVar14 = (undefined8 *)FUN_01c72498(plVar19,lVar24,1);
LAB_030ed328:
        plVar20 = (long *)(*(code *)*puVar14)(plVar19,puVar14[1]);
        if (plVar20 != (long *)0x0) {
          bVar2 = *(byte *)(*(long *)puVar4 + 0x130);
          if ((*(byte *)(*plVar20 + 0x130) < bVar2) ||
             (*(long *)(*(long *)(*plVar20 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)puVar4)) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d748(plVar20);
          }
        }
        if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        uVar16 = (**(code **)(*plVar18 + 0x1f8))(plVar18,*(undefined8 *)(*plVar18 + 0x200));
        if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        uVar17 = (**(code **)(*plVar20 + 0x1f8))(plVar20,*(undefined8 *)(*plVar20 + 0x200));
        uVar9 = FUN_030e98c8(uVar17,uVar16,uVar17);
        uVar28 = uVar28 | uVar9;
      } while( true );
    }
    plVar18 = (long *)thunk_FUN_01c495e4(lVar23,*(undefined8 *)PTR_DAT_0422fce8);
    if (plVar18 != (long *)0x0) {
      lVar23 = *plVar18;
      uVar26 = (ulong)*(ushort *)(lVar23 + 0x12e);
      if (uVar26 == 0) {
LAB_030ed534:
        puVar14 = (undefined8 *)FUN_01c72498(plVar18,*(long *)puVar3,0);
      }
      else {
        piVar27 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
        while (*(long *)(piVar27 + -2) != *(long *)puVar3) {
          uVar26 = uVar26 - 1;
          piVar27 = piVar27 + 4;
          if (uVar26 == 0) goto LAB_030ed534;
        }
        puVar14 = (undefined8 *)(lVar23 + (long)*piVar27 * 0x10 + 0x138);
      }
      (*(code *)*puVar14)(plVar18,puVar14[1]);
    }
    if (plVar12 == (long *)0x0) goto LAB_030ee904;
    plVar12 = (long *)(**(code **)(*plVar12 + 0x388))(plVar12,*(undefined8 *)(*plVar12 + 0x390));
    puVar4 = System_Runtime_Remoting_Messaging_ReturnMessage_TypeInfo;
    puVar5 = PTR_DAT_04230960;
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
LAB_030ed59c:
    lVar24 = *plVar12;
    lVar23 = *(long *)puVar5;
    uVar26 = (ulong)*(ushort *)(lVar24 + 0x12e);
    if (uVar26 != 0) {
      piVar27 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
      do {
        if (*(long *)(piVar27 + -2) == lVar23) {
          puVar14 = (undefined8 *)(lVar24 + (long)*piVar27 * 0x10 + 0x138);
          goto LAB_030ed5e8;
        }
        uVar26 = uVar26 - 1;
        piVar27 = piVar27 + 4;
      } while (uVar26 != 0);
    }
    puVar14 = (undefined8 *)FUN_01c72498(plVar12,lVar23,0);
LAB_030ed5e8:
    uVar26 = (*(code *)*puVar14)(plVar12,puVar14[1]);
    if ((uVar26 & 1) != 0) {
      lVar24 = *plVar12;
      lVar23 = *(long *)puVar5;
      uVar26 = (ulong)*(ushort *)(lVar24 + 0x12e);
      if (uVar26 != 0) {
        piVar27 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
        do {
          if (*(long *)(piVar27 + -2) == lVar23) {
            puVar14 = (undefined8 *)(lVar24 + (long)(*piVar27 + 1) * 0x10 + 0x138);
            goto LAB_030ed648;
          }
          uVar26 = uVar26 - 1;
          piVar27 = piVar27 + 4;
        } while (uVar26 != 0);
      }
      puVar14 = (undefined8 *)FUN_01c72498(plVar12,lVar23,1);
LAB_030ed648:
      plVar18 = (long *)(*(code *)*puVar14)(plVar12,puVar14[1]);
      if (plVar18 != (long *)0x0) {
        bVar2 = *(byte *)(*(long *)puVar4 + 0x130);
        if ((*(byte *)(*plVar18 + 0x130) < bVar2) ||
           (*(long *)(*(long *)(*plVar18 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)puVar4)) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d748(plVar18);
        }
      }
      lVar23 = FUN_030eaa24(param_1);
      if (lVar23 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      lVar23 = FUN_030ebb44();
      if (lVar23 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      uVar28 = 0;
      while (uVar26 = FUN_030ebf24(lVar23), (uVar26 & 1) != 0) {
        plVar19 = (long *)FUN_030ebb9c(lVar23);
        if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        uVar16 = (**(code **)(*plVar18 + 0x1f8))(plVar18,*(undefined8 *)(*plVar18 + 0x200));
        if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        uVar17 = (**(code **)(*plVar19 + 0x1f8))(plVar19,*(undefined8 *)(*plVar19 + 0x200));
        uVar9 = FUN_030e98c8(uVar17,uVar16,uVar17);
        uVar28 = uVar28 | uVar9;
      }
      plVar19 = (long *)thunk_FUN_01c495e4(lVar23,*(undefined8 *)PTR_DAT_0422fce8);
      if (plVar19 != (long *)0x0) {
        lVar23 = *plVar19;
        uVar26 = (ulong)*(ushort *)(lVar23 + 0x12e);
        if (uVar26 != 0) {
          piVar27 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
          do {
            if (*(long *)(piVar27 + -2) == *(long *)PTR_DAT_0422fce8) {
              puVar14 = (undefined8 *)(lVar23 + (long)*piVar27 * 0x10 + 0x138);
              goto LAB_030ed774;
            }
            uVar26 = uVar26 - 1;
            piVar27 = piVar27 + 4;
          } while (uVar26 != 0);
        }
        puVar14 = (undefined8 *)FUN_01c72498(plVar19,*(long *)PTR_DAT_0422fce8,0);
LAB_030ed774:
        (*(code *)*puVar14)(plVar19,puVar14[1]);
      }
      if ((uVar28 & 1) == 0) {
        if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        (**(code **)(*plVar15 + 0x308))(plVar15,plVar18,*(undefined8 *)(*plVar15 + 0x310));
      }
      goto LAB_030ed59c;
    }
    plVar12 = (long *)thunk_FUN_01c495e4(plVar12,*(undefined8 *)PTR_DAT_0422fce8);
    if (plVar12 != (long *)0x0) {
      lVar23 = *plVar12;
      uVar26 = (ulong)*(ushort *)(lVar23 + 0x12e);
      if (uVar26 == 0) {
LAB_030ed880:
        puVar14 = (undefined8 *)FUN_01c72498(plVar12,*(long *)PTR_DAT_0422fce8,0);
      }
      else {
        piVar27 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
        while (*(long *)(piVar27 + -2) != *(long *)PTR_DAT_0422fce8) {
          uVar26 = uVar26 - 1;
          piVar27 = piVar27 + 4;
          if (uVar26 == 0) goto LAB_030ed880;
        }
        puVar14 = (undefined8 *)(lVar23 + (long)*piVar27 * 0x10 + 0x138);
      }
      (*(code *)*puVar14)(plVar12,puVar14[1]);
    }
    plVar12 = (long *)PTR_DAT_0422fce8;
    if (plVar15 == (long *)0x0) goto LAB_030ee904;
    plVar15 = (long *)(**(code **)(*plVar15 + 0x388))(plVar15,*(undefined8 *)(*plVar15 + 0x390));
    puVar4 = System_Runtime_Remoting_Messaging_ReturnMessage_TypeInfo;
    puVar5 = PTR_DAT_04230960;
    if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
LAB_030ed8f4:
    lVar24 = *plVar15;
    lVar23 = *(long *)puVar5;
    uVar26 = (ulong)*(ushort *)(lVar24 + 0x12e);
    if (uVar26 != 0) {
      piVar27 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
      do {
        if (*(long *)(piVar27 + -2) == lVar23) {
          puVar14 = (undefined8 *)(lVar24 + (long)*piVar27 * 0x10 + 0x138);
          goto LAB_030ed940;
        }
        uVar26 = uVar26 - 1;
        piVar27 = piVar27 + 4;
      } while (uVar26 != 0);
    }
    puVar14 = (undefined8 *)FUN_01c72498(plVar15,lVar23,0);
LAB_030ed940:
    uVar26 = (*(code *)*puVar14)(plVar15,puVar14[1]);
    if ((uVar26 & 1) != 0) {
      lVar24 = *plVar15;
      lVar23 = *(long *)puVar5;
      uVar26 = (ulong)*(ushort *)(lVar24 + 0x12e);
      if (uVar26 != 0) {
        piVar27 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
        do {
          if (*(long *)(piVar27 + -2) == lVar23) {
            puVar14 = (undefined8 *)(lVar24 + (long)(*piVar27 + 1) * 0x10 + 0x138);
            goto LAB_030ed9a0;
          }
          uVar26 = uVar26 - 1;
          piVar27 = piVar27 + 4;
        } while (uVar26 != 0);
      }
      puVar14 = (undefined8 *)FUN_01c72498(plVar15,lVar23,1);
LAB_030ed9a0:
      plVar18 = (long *)(*(code *)*puVar14)(plVar15,puVar14[1]);
      if (plVar18 != (long *)0x0) {
        bVar2 = *(byte *)(*(long *)puVar4 + 0x130);
        if ((*(byte *)(*plVar18 + 0x130) < bVar2) ||
           (*(long *)(*(long *)(*plVar18 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)puVar4)) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d748(plVar18);
        }
      }
      FUN_030ef5d4(param_1,plVar18,0);
      goto LAB_030ed8f4;
    }
    plVar15 = (long *)thunk_FUN_01c495e4(plVar15,*plVar12);
    if (plVar15 != (long *)0x0) {
      lVar23 = *plVar15;
      uVar26 = (ulong)*(ushort *)(lVar23 + 0x12e);
      if (uVar26 == 0) {
LAB_030eda40:
        puVar14 = (undefined8 *)FUN_01c72498(plVar15,*plVar12,0);
      }
      else {
        piVar27 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
        while (*(long *)(piVar27 + -2) != *plVar12) {
          uVar26 = uVar26 - 1;
          piVar27 = piVar27 + 4;
          if (uVar26 == 0) goto LAB_030eda40;
        }
        puVar14 = (undefined8 *)(lVar23 + (long)*piVar27 * 0x10 + 0x138);
      }
      (*(code *)*puVar14)(plVar15,puVar14[1]);
    }
    if (plVar13 == (long *)0x0) goto LAB_030ee904;
    plVar13 = (long *)(**(code **)(*plVar13 + 0x388))(plVar13,*(undefined8 *)(*plVar13 + 0x390));
    puVar4 = System_Runtime_Remoting_Messaging_ReturnMessage_TypeInfo;
    puVar5 = PTR_DAT_04230960;
    if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
LAB_030edaac:
    lVar24 = *plVar13;
    lVar23 = *(long *)puVar5;
    uVar26 = (ulong)*(ushort *)(lVar24 + 0x12e);
    if (uVar26 != 0) {
      piVar27 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
      do {
        if (*(long *)(piVar27 + -2) == lVar23) {
          puVar14 = (undefined8 *)(lVar24 + (long)*piVar27 * 0x10 + 0x138);
          goto LAB_030edaf8;
        }
        uVar26 = uVar26 - 1;
        piVar27 = piVar27 + 4;
      } while (uVar26 != 0);
    }
    puVar14 = (undefined8 *)FUN_01c72498(plVar13,lVar23,0);
LAB_030edaf8:
    uVar26 = (*(code *)*puVar14)(plVar13,puVar14[1]);
    if ((uVar26 & 1) != 0) {
      lVar24 = *plVar13;
      lVar23 = *(long *)puVar5;
      uVar26 = (ulong)*(ushort *)(lVar24 + 0x12e);
      if (uVar26 != 0) {
        piVar27 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
        do {
          if (*(long *)(piVar27 + -2) == lVar23) {
            puVar14 = (undefined8 *)(lVar24 + (long)(*piVar27 + 1) * 0x10 + 0x138);
            goto LAB_030edb58;
          }
          uVar26 = uVar26 - 1;
          piVar27 = piVar27 + 4;
        } while (uVar26 != 0);
      }
      puVar14 = (undefined8 *)FUN_01c72498(plVar13,lVar23,1);
LAB_030edb58:
      plVar15 = (long *)(*(code *)*puVar14)(plVar13,puVar14[1]);
      if (plVar15 != (long *)0x0) {
        bVar2 = *(byte *)(*(long *)puVar4 + 0x130);
        if ((*(byte *)(*plVar15 + 0x130) < bVar2) ||
           (*(long *)(*(long *)(*plVar15 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)puVar4)) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d748(plVar15);
        }
      }
      FUN_030ef388(param_1,plVar15,0);
      goto LAB_030edaac;
    }
    plVar13 = (long *)thunk_FUN_01c495e4(plVar13,*plVar12);
    if (plVar13 != (long *)0x0) {
      lVar23 = *plVar13;
      uVar26 = (ulong)*(ushort *)(lVar23 + 0x12e);
      if (uVar26 == 0) {
LAB_030edbf8:
        puVar14 = (undefined8 *)FUN_01c72498(plVar13,*plVar12,0);
      }
      else {
        piVar27 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
        while (*(long *)(piVar27 + -2) != *plVar12) {
          uVar26 = uVar26 - 1;
          piVar27 = piVar27 + 4;
          if (uVar26 == 0) goto LAB_030edbf8;
        }
        puVar14 = (undefined8 *)(lVar23 + (long)*piVar27 * 0x10 + 0x138);
      }
      (*(code *)*puVar14)(plVar13,puVar14[1]);
    }
    plVar13 = *(long **)(param_1 + 0x38);
    if (plVar13 == (long *)0x0) goto LAB_030ee904;
    iVar10 = (**(code **)(*plVar13 + 0x298))(plVar13,*(undefined8 *)(*plVar13 + 0x2a0));
    puVar14 = (undefined8 *)UnityEngine_UIElements_RepeatButton_TypeInfo;
    if (0 < iVar10) {
      lVar23 = thunk_FUN_01c496e0(*(undefined8 *)UnityEngine_UIElements_RepeatButton_TypeInfo);
      FUN_03313b6c(lVar23,0);
      *(undefined1 *)(lVar23 + 0x10) = 0x30;
      *(undefined8 *)(lVar23 + 0x18) = 0;
      plVar13 = *(long **)(param_1 + 0x38);
      if (plVar13 == (long *)0x0) goto LAB_030ee904;
      plVar13 = (long *)(**(code **)(*plVar13 + 0x388))(plVar13,*(undefined8 *)(*plVar13 + 0x390));
      puVar3 = UnityEngine_UIElements_RuntimePanel_TypeInfo;
      puVar4 = Mono_RuntimeClassHandle_TypeInfo;
      puVar5 = PTR_DAT_04230960;
      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
LAB_030edcb4:
      lVar25 = *plVar13;
      lVar24 = *(long *)puVar5;
      uVar26 = (ulong)*(ushort *)(lVar25 + 0x12e);
      if (uVar26 != 0) {
        piVar27 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
        do {
          if (*(long *)(piVar27 + -2) == lVar24) {
            puVar14 = (undefined8 *)(lVar25 + (long)*piVar27 * 0x10 + 0x138);
            goto LAB_030edd00;
          }
          uVar26 = uVar26 - 1;
          piVar27 = piVar27 + 4;
        } while (uVar26 != 0);
      }
      puVar14 = (undefined8 *)FUN_01c72498(plVar13,lVar24,0);
LAB_030edd00:
      uVar26 = (*(code *)*puVar14)(plVar13,puVar14[1]);
      if ((uVar26 & 1) != 0) goto code_r0x030edd10;
      plVar13 = (long *)thunk_FUN_01c495e4(plVar13,*plVar12);
      if (plVar13 != (long *)0x0) {
        lVar24 = *plVar13;
        uVar26 = (ulong)*(ushort *)(lVar24 + 0x12e);
        if (uVar26 == 0) {
LAB_030ede14:
          puVar14 = (undefined8 *)FUN_01c72498(plVar13,*plVar12,0);
        }
        else {
          piVar27 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
          while (*(long *)(piVar27 + -2) != *plVar12) {
            uVar26 = uVar26 - 1;
            piVar27 = piVar27 + 4;
            if (uVar26 == 0) goto LAB_030ede14;
          }
          puVar14 = (undefined8 *)(lVar24 + (long)*piVar27 * 0x10 + 0x138);
        }
        (*(code *)*puVar14)(plVar13,puVar14[1]);
      }
      puVar14 = (undefined8 *)UnityEngine_UIElements_RepeatButton_TypeInfo;
      if (lVar23 == 0) goto LAB_030ee904;
      plVar13 = *(long **)(lVar23 + 0x20);
      if ((plVar13 != (long *)0x0) &&
         (iVar10 = (**(code **)(*plVar13 + 0x298))(plVar13,*(undefined8 *)(*plVar13 + 0x2a0)),
         0 < iVar10)) {
        lVar23 = FUN_030ef098(param_1,lVar23,
                              *(undefined8 *)
                               System_Linq_Expressions_RuntimeVariablesExpression_TypeInfo);
        if ((lVar23 == 0) || (uVar16 = FUN_030e7a9c(), plVar11 == (long *)0x0)) goto LAB_030ee904;
        FUN_030e5b98(plVar11,uVar16);
      }
    }
    plVar13 = *(long **)(param_1 + 0x38);
    if (plVar13 == (long *)0x0) goto LAB_030ee904;
    iVar10 = (**(code **)(*plVar13 + 0x298))(plVar13,*(undefined8 *)(*plVar13 + 0x2a0));
    if (0 < iVar10) {
      plVar13 = (long *)thunk_FUN_01c496e0(*puVar14);
      FUN_03313b6c(plVar13,0);
      *(undefined1 *)(plVar13 + 2) = 0x30;
      plVar13[3] = 0;
      plVar12 = *(long **)(param_1 + 0x38);
      if (plVar12 == (long *)0x0) goto LAB_030ee904;
      plVar15 = (long *)(**(code **)(*plVar12 + 0x388))(plVar12,*(undefined8 *)(*plVar12 + 0x390));
      puVar6 = System_Reflection_RuntimeFieldInfo_TypeInfo;
      puVar3 = Mono_RuntimeEventHandle_TypeInfo;
      puVar4 = Mono_RuntimeClassHandle_TypeInfo;
      puVar5 = PTR_DAT_04230960;
      if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
LAB_030edf2c:
      lVar24 = *plVar15;
      lVar23 = *(long *)puVar5;
      uVar26 = (ulong)*(ushort *)(lVar24 + 0x12e);
      if (uVar26 != 0) {
        piVar27 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
        do {
          if (*(long *)(piVar27 + -2) == lVar23) {
            puVar14 = (undefined8 *)(lVar24 + (long)*piVar27 * 0x10 + 0x138);
            goto LAB_030edf78;
          }
          uVar26 = uVar26 - 1;
          piVar27 = piVar27 + 4;
        } while (uVar26 != 0);
      }
      puVar14 = (undefined8 *)FUN_01c72498(plVar15,lVar23,0);
LAB_030edf78:
      uVar26 = (*(code *)*puVar14)(plVar15,puVar14[1]);
      plVar12 = (long *)PTR_DAT_0422fce8;
      if ((uVar26 & 1) != 0) {
        lVar24 = *plVar15;
        lVar23 = *(long *)puVar5;
        uVar26 = (ulong)*(ushort *)(lVar24 + 0x12e);
        if (uVar26 != 0) {
          piVar27 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
          do {
            if (*(long *)(piVar27 + -2) == lVar23) {
              puVar14 = (undefined8 *)(lVar24 + (long)(*piVar27 + 1) * 0x10 + 0x138);
              goto System_Runtime_Serialization_Formatters_Binary_BinaryFormatter___ctor;
            }
            uVar26 = uVar26 - 1;
            piVar27 = piVar27 + 4;
          } while (uVar26 != 0);
        }
        puVar14 = (undefined8 *)FUN_01c72498(plVar15,lVar23,1);
System_Runtime_Serialization_Formatters_Binary_BinaryFormatter___ctor:
        plVar12 = (long *)(*(code *)*puVar14)(plVar15,puVar14[1]);
        if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        bVar2 = *(byte *)(*(long *)puVar4 + 0x130);
        if ((*(byte *)(*plVar12 + 0x130) < bVar2) ||
           (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)puVar4)) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d748(plVar12);
        }
        if (plVar12[2] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        uVar26 = FUN_0315243c(plVar12[2],*(undefined8 *)puVar3,0);
        if ((uVar26 & 1) == 0) goto code_r0x030ee030;
        goto LAB_030ee048;
      }
      plVar15 = (long *)thunk_FUN_01c495e4(plVar15,*(undefined8 *)PTR_DAT_0422fce8);
      if (plVar15 != (long *)0x0) {
        lVar23 = *plVar15;
        uVar26 = (ulong)*(ushort *)(lVar23 + 0x12e);
        if (uVar26 == 0) {
LAB_030ee0ac:
          puVar14 = (undefined8 *)FUN_01c72498(plVar15,*plVar12,0);
        }
        else {
          piVar27 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
          while (*(long *)(piVar27 + -2) != *plVar12) {
            uVar26 = uVar26 - 1;
            piVar27 = piVar27 + 4;
            if (uVar26 == 0) goto LAB_030ee0ac;
          }
          puVar14 = (undefined8 *)(lVar23 + (long)*piVar27 * 0x10 + 0x138);
        }
        (*(code *)*puVar14)(plVar15,puVar14[1]);
      }
      puVar14 = (undefined8 *)UnityEngine_UIElements_RepeatButton_TypeInfo;
      if (plVar13 == (long *)0x0) goto LAB_030ee904;
      plVar15 = (long *)plVar13[4];
      if ((plVar15 != (long *)0x0) &&
         (iVar10 = (**(code **)(*plVar15 + 0x298))(plVar15,*(undefined8 *)(*plVar15 + 0x2a0)),
         0 < iVar10)) {
        lVar23 = thunk_FUN_01c496e0(*puVar14);
        FUN_03313b6c(lVar23,0);
        *(undefined8 *)(lVar23 + 0x18) = 0;
        *(undefined1 *)(lVar23 + 0x10) = 0xa0;
        uVar16 = (**(code **)(*plVar13 + 0x178))(plVar13,*(undefined8 *)(*plVar13 + 0x180));
        lVar24 = thunk_FUN_01c496e0(*puVar14);
        FUN_03313b6c(lVar24,0);
        *(undefined1 *)(lVar24 + 0x10) = 4;
        *(undefined8 *)(lVar24 + 0x18) = uVar16;
        FUN_030e5b98(lVar23,lVar24);
        lVar24 = thunk_FUN_01c496e0(*(undefined8 *)UnityEngine_ResourceRequest_TypeInfo);
        uVar16 = *(undefined8 *)Photon_Realtime_RoomOptions_TypeInfo;
        FUN_030e7820();
        *(undefined8 *)(lVar24 + 0x10) = uVar16;
        *(long *)(lVar24 + 0x18) = lVar23;
        uVar16 = FUN_030e7a9c(lVar24);
        if (plVar11 == (long *)0x0) goto LAB_030ee904;
        FUN_030e5b98(plVar11,uVar16);
      }
    }
    plVar13 = *(long **)(param_1 + 0x38);
    if (plVar13 == (long *)0x0) goto LAB_030ee904;
    iVar10 = (**(code **)(*plVar13 + 0x298))(plVar13,*(undefined8 *)(*plVar13 + 0x2a0));
    if (0 < iVar10) {
      lVar23 = thunk_FUN_01c496e0(*puVar14);
      FUN_03313b6c(lVar23,0);
      *(undefined1 *)(lVar23 + 0x10) = 0x30;
      *(undefined8 *)(lVar23 + 0x18) = 0;
      plVar13 = *(long **)(param_1 + 0x38);
      if (plVar13 == (long *)0x0) goto LAB_030ee904;
      plVar13 = (long *)(**(code **)(*plVar13 + 0x388))(plVar13,*(undefined8 *)(*plVar13 + 0x390));
      puVar3 = System_RuntimeFieldHandle_TypeInfo;
      puVar4 = Mono_RuntimeClassHandle_TypeInfo;
      puVar5 = PTR_DAT_04230960;
      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      do {
        lVar25 = *plVar13;
        lVar24 = *(long *)puVar5;
        uVar26 = (ulong)*(ushort *)(lVar25 + 0x12e);
        if (uVar26 != 0) {
          piVar27 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
          do {
            if (*(long *)(piVar27 + -2) == lVar24) {
              puVar14 = (undefined8 *)(lVar25 + (long)*piVar27 * 0x10 + 0x138);
              goto LAB_030ee27c;
            }
            uVar26 = uVar26 - 1;
            piVar27 = piVar27 + 4;
          } while (uVar26 != 0);
        }
        puVar14 = (undefined8 *)FUN_01c72498(plVar13,lVar24,0);
LAB_030ee27c:
        uVar26 = (*(code *)*puVar14)(plVar13,puVar14[1]);
        if ((uVar26 & 1) == 0) {
          plVar13 = (long *)thunk_FUN_01c495e4(plVar13,*plVar12);
          if (plVar13 != (long *)0x0) {
            lVar24 = *plVar13;
            uVar26 = (ulong)*(ushort *)(lVar24 + 0x12e);
            if (uVar26 == 0) {
LAB_030ee390:
              puVar14 = (undefined8 *)FUN_01c72498(plVar13,*plVar12,0);
            }
            else {
              piVar27 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
              while (*(long *)(piVar27 + -2) != *plVar12) {
                uVar26 = uVar26 - 1;
                piVar27 = piVar27 + 4;
                if (uVar26 == 0) goto LAB_030ee390;
              }
              puVar14 = (undefined8 *)(lVar24 + (long)*piVar27 * 0x10 + 0x138);
            }
            (*(code *)*puVar14)(plVar13,puVar14[1]);
          }
          puVar14 = (undefined8 *)UnityEngine_UIElements_RepeatButton_TypeInfo;
          if (lVar23 == 0) goto LAB_030ee904;
          plVar12 = *(long **)(lVar23 + 0x20);
          if ((plVar12 == (long *)0x0) ||
             (iVar10 = (**(code **)(*plVar12 + 0x298))(plVar12,*(undefined8 *)(*plVar12 + 0x2a0)),
             iVar10 < 1)) break;
          lVar23 = FUN_030ef098(param_1,lVar23,
                                *(undefined8 *)
                                 System_Linq_Expressions_RuntimeVariablesExpression_TypeInfo);
          if ((lVar23 == 0) || (uVar16 = FUN_030e7a9c(), plVar11 == (long *)0x0)) goto LAB_030ee904;
          FUN_030e5b98(plVar11,uVar16);
          goto LAB_030ee458;
        }
        lVar25 = *plVar13;
        lVar24 = *(long *)puVar5;
        uVar26 = (ulong)*(ushort *)(lVar25 + 0x12e);
        if (uVar26 != 0) {
          piVar27 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
          do {
            if (*(long *)(piVar27 + -2) == lVar24) {
              puVar14 = (undefined8 *)(lVar25 + (long)(*piVar27 + 1) * 0x10 + 0x138);
              goto LAB_030ee2dc;
            }
            uVar26 = uVar26 - 1;
            piVar27 = piVar27 + 4;
          } while (uVar26 != 0);
        }
        puVar14 = (undefined8 *)FUN_01c72498(plVar13,lVar24,1);
LAB_030ee2dc:
        plVar15 = (long *)(*(code *)*puVar14)(plVar13,puVar14[1]);
        if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        bVar2 = *(byte *)(*(long *)puVar4 + 0x130);
        if ((*(byte *)(*plVar15 + 0x130) < bVar2) ||
           (*(long *)(*(long *)(*plVar15 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)puVar4)) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d748(plVar15);
        }
        if (plVar15[2] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        uVar26 = FUN_0315243c(plVar15[2],*(undefined8 *)puVar3,0);
        if ((uVar26 & 1) != 0) {
          FUN_030e5b98(lVar23,plVar15[3]);
        }
      } while( true );
    }
    if (plVar11 == (long *)0x0) goto LAB_030ee904;
LAB_030ee458:
    uVar16 = (**(code **)(*plVar11 + 0x178))(plVar11,*(undefined8 *)(*plVar11 + 0x180));
    lVar23 = thunk_FUN_01c496e0(*puVar14);
    FUN_03313b6c(lVar23,0);
    *(undefined1 *)(lVar23 + 0x10) = 4;
    *(undefined8 *)(lVar23 + 0x18) = uVar16;
    lVar24 = thunk_FUN_01c496e0(*puVar14);
    FUN_03313b6c(lVar24,0);
    *(undefined1 *)(lVar24 + 0x10) = 0xa0;
    *(undefined8 *)(lVar24 + 0x18) = 0;
    FUN_030e5b98(lVar24,lVar23);
    lVar23 = thunk_FUN_01c496e0(*(undefined8 *)UnityEngine_ResourceRequest_TypeInfo);
    uVar16 = *(undefined8 *)Photon_Realtime_RoomOptions_TypeInfo;
    FUN_030e7820();
    *(undefined8 *)(lVar23 + 0x10) = uVar16;
    *(long *)(lVar23 + 0x18) = lVar24;
    lVar24 = thunk_FUN_01c496e0(*puVar14);
    FUN_03313b6c(lVar24,0);
    *(undefined1 *)(lVar24 + 0x10) = 0x30;
    *(undefined8 *)(lVar24 + 0x18) = 0;
    if (*(long *)(param_1 + 0x10) != 0) {
      uVar16 = FUN_01c5d2fc(*(undefined8 *)PTR_DAT_0422f930,0x14);
      plVar11 = *(long **)(param_1 + 0x40);
      if (plVar11 == (long *)0x0) {
        plVar11 = (long *)FUN_0318d6e0(0);
        *(long **)(param_1 + 0x40) = plVar11;
        if (plVar11 == (long *)0x0) goto LAB_030ee904;
      }
      (**(code **)(*plVar11 + 0x198))(plVar11,uVar16,*(undefined8 *)(*plVar11 + 0x1a0));
      if (*(long *)(lVar23 + 0x18) == 0) goto LAB_030ee904;
      uVar17 = *(undefined8 *)(param_1 + 0x10);
      uVar1 = *(undefined4 *)(param_1 + 0x34);
      lVar25 = FUN_030e63cc(*(long *)(lVar23 + 0x18),0);
      if (lVar25 == 0) goto LAB_030ee904;
      uVar21 = FUN_030e59c8();
      uVar17 = FUN_030e9774(uVar21,uVar17,uVar16,uVar1,uVar21);
      lVar25 = thunk_FUN_01c496e0(*puVar14);
      FUN_03313b6c(lVar25,0);
      *(undefined8 *)(lVar25 + 0x18) = 0;
      *(undefined1 *)(lVar25 + 0x10) = 0x30;
      uVar21 = FUN_030e6a68(*(undefined8 *)Rifle_TypeInfo);
      FUN_030e5b98(lVar25,uVar21);
      lVar22 = thunk_FUN_01c496e0(*puVar14);
      FUN_03313b6c(lVar22,0);
      *(undefined1 *)(lVar22 + 0x10) = 5;
      *(undefined8 *)(lVar22 + 0x18) = 0;
      FUN_030e5b98(lVar25,lVar22);
      lVar22 = thunk_FUN_01c496e0(*puVar14);
      FUN_03313b6c(lVar22,0);
      *(undefined1 *)(lVar22 + 0x10) = 0x30;
      *(undefined8 *)(lVar22 + 0x18) = 0;
      FUN_030e5b98(lVar22,lVar25);
      lVar25 = thunk_FUN_01c496e0(*puVar14);
      FUN_03313b6c(lVar25,0);
      *(undefined1 *)(lVar25 + 0x10) = 4;
      *(undefined8 *)(lVar25 + 0x18) = uVar17;
      FUN_030e5b98(lVar22,lVar25);
      FUN_030e5b98(lVar24,lVar22);
      lVar25 = thunk_FUN_01c496e0(*puVar14);
      FUN_03313b6c(lVar25,0);
      *(undefined1 *)(lVar25 + 0x10) = 4;
      *(undefined8 *)(lVar25 + 0x18) = uVar16;
      FUN_030e5b98(lVar24,lVar25);
      uVar16 = FUN_030e68e4(*(undefined4 *)(param_1 + 0x34));
      FUN_030e5b98(lVar24,uVar16);
    }
    lVar25 = FUN_01c5d2fc(*(undefined8 *)PTR_DAT_0422f930,1);
    if (lVar25 != 0) {
      if (*(int *)(lVar25 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4ac();
      }
      *(undefined1 *)(lVar25 + 0x20) = 3;
      lVar22 = thunk_FUN_01c496e0(*puVar14);
      FUN_03313b6c(lVar22,0);
      *(undefined1 *)(lVar22 + 0x10) = 2;
      *(long *)(lVar22 + 0x18) = lVar25;
      plVar11 = (long *)thunk_FUN_01c496e0(*puVar14);
      FUN_03313b6c(plVar11,0);
      *(undefined1 *)(plVar11 + 2) = 0x30;
      plVar11[3] = 0;
      FUN_030e5b98(plVar11,lVar22);
      uVar16 = FUN_030e7a9c(lVar23);
      FUN_030e5b98(plVar11,uVar16);
      plVar12 = *(long **)(lVar24 + 0x20);
      if ((plVar12 != (long *)0x0) &&
         (iVar10 = (**(code **)(*plVar12 + 0x298))(plVar12,*(undefined8 *)(*plVar12 + 0x2a0)),
         0 < iVar10)) {
        FUN_030e5b98(plVar11,lVar24);
      }
                    /* WARNING: Could not recover jumptable at 0x030ee778. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar11 + 0x178))(plVar11,*(undefined8 *)(*plVar11 + 0x180));
      return;
    }
  }
LAB_030ee904:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


