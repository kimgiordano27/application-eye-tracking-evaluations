/*
FUNCTION_NAME: FUN_07464cbc
ENTRY_POINT: 07464cbc
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_19;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_4
*/


void FUN_07464cbc(undefined1 param_1 [16],float param_2,long param_3)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  int iVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  long *plVar9;
  int iVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  long lVar14;
  int iVar15;
  undefined8 uVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined8 local_c8;
  ulong uStack_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined4 local_a0;
  undefined8 local_88;
  
  if ((DAT_07ef3cfb & 1) == 0) {
    FUN_03642964(Method_System_Collections_Generic_LowLevelDictionary<int,_Task>_set_Item__);
    FUN_03642964(Method_System_Collections_Generic_LowLevelListWithIList<Exception>__ctor__);
    FUN_03642964(
                Method_System_Collections_Generic_LowLevelListWithIList<ExceptionDispatchInfo>__ctor__
                );
    FUN_03642964(
                Method_System_Collections_Generic_LowLevelListWithIList<ExceptionDispatchInfo>__ctor__
                );
    FUN_03642964(
                Method_System_Collections_Generic_List<OVRPlugin_Qpl_Annotation_Builder_Entry>_get_Count__
                );
    FUN_03642964(PTR_DAT_079ffc80);
    FUN_03642964(Method_System_Collections_Generic_LowLevelListWithIList<object>__ctor__);
    FUN_03642964(Method_System_Collections_Generic_LowLevelListWithIList<Task>__ctor__);
    FUN_03642964(Method_System_Collections_Generic_LowLevelList<Exception>_Add__);
    FUN_03642964(Method_System_Data_Listeners<DataViewListener>_Add__);
    FUN_03642964(PTR_DAT_079fd9c8);
    FUN_03642964(Method_System_Collections_Generic_LowLevelList<ExceptionDispatchInfo>_Add__);
    FUN_03642964(Method_System_Collections_Generic_LowLevelList<ExceptionDispatchInfo>_AddRange__);
    DAT_07ef3cfb = 1;
  }
  local_88 = 0;
  plVar6 = (long *)FUN_07464244(param_3);
  puVar3 = 
  Method_System_Collections_Generic_List<OVRPlugin_Qpl_Annotation_Builder_Entry>_get_Count__;
  if (plVar6 == (long *)0x0) goto LAB_0746564c;
  lVar11 = *plVar6;
  uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
  if (uVar12 != 0) {
    piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
    do {
      if (*(long *)(piVar13 + -2) ==
          *(long *)
           Method_System_Collections_Generic_List<OVRPlugin_Qpl_Annotation_Builder_Entry>_get_Count__
         ) {
        puVar7 = (undefined8 *)(lVar11 + (long)(*piVar13 + 6) * 0x10 + 0x138);
        goto LAB_07464e04;
      }
      uVar12 = uVar12 - 1;
      piVar13 = piVar13 + 4;
    } while (uVar12 != 0);
  }
  puVar7 = (undefined8 *)
           FUN_0367cd30(plVar6,*(long *)
                                Method_System_Collections_Generic_List<OVRPlugin_Qpl_Annotation_Builder_Entry>_get_Count__
                        ,6);
LAB_07464e04:
  uVar12 = (*(code *)*puVar7)(plVar6,puVar7[1]);
  if ((uVar12 & 1) == 0) {
    return;
  }
  plVar6 = (long *)FUN_07464244(param_3);
  if (plVar6 == (long *)0x0) goto LAB_0746564c;
  lVar11 = *plVar6;
  uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
  if (uVar12 != 0) {
    piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
    do {
      if (*(long *)(piVar13 + -2) == *(long *)puVar3) {
        puVar7 = (undefined8 *)(lVar11 + (long)(*piVar13 + 9) * 0x10 + 0x138);
        goto LAB_07464e74;
      }
      uVar12 = uVar12 - 1;
      piVar13 = piVar13 + 4;
    } while (uVar12 != 0);
  }
  puVar7 = (undefined8 *)FUN_0367cd30(plVar6,*(long *)puVar3,9);
LAB_07464e74:
  uVar17 = (*(code *)*puVar7)(plVar6,puVar7[1]);
  if (*(int *)(*(long *)PTR_DAT_079fd9c8 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  fVar18 = (float)FUN_07369710(uVar17,&local_88,0);
  if (*(char *)(param_3 + 0x2c) == '\0') {
    if (DAT_07ed7e03 == '\0') {
      FUN_03642964(PTR_DAT_079f7f08);
      DAT_07ed7e03 = '\x01';
    }
    fVar22 = **(float **)(*(long *)PTR_DAT_079f7f08 + 0xb8);
    fVar23 = (*(float **)(*(long *)PTR_DAT_079f7f08 + 0xb8))[1];
    *(float *)(param_3 + 0x24) = fVar18;
    *(float *)(param_3 + 0x28) = param_2;
    *(undefined1 *)(param_3 + 0x2c) = 1;
  }
  else {
    fVar23 = *(float *)(param_3 + 0x28);
    fVar22 = fVar18 - *(float *)(param_3 + 0x24);
    if (DAT_07ed76b8 == '\0') {
      FUN_03642964(PTR_DAT_079f4df8);
      DAT_07ed76b8 = '\x01';
    }
    puVar2 = PTR_DAT_079ffc80;
    fVar23 = param_2 - fVar23;
    fVar21 = ABS(fVar22);
    if (ABS(fVar22) <= 0.0) {
      fVar21 = 0.0;
    }
    fVar20 = **(float **)(*(long *)PTR_DAT_079f4df8 + 0xb8) * 8.0;
    fVar19 = fVar21 * DAT_016511f0;
    if (fVar21 * DAT_016511f0 <= fVar20) {
      fVar19 = fVar20;
    }
    if (ABS(0.0 - fVar22) < fVar19) {
      fVar21 = ABS(fVar23);
      if (fVar21 <= 0.0) {
        fVar21 = 0.0;
      }
      fVar19 = fVar21 * DAT_016511f0;
      if (fVar21 * DAT_016511f0 <= fVar20) {
        fVar19 = fVar20;
      }
      if (ABS(0.0 - fVar23) < fVar19) goto LAB_074650c0;
    }
    *(float *)(param_3 + 0x24) = fVar18;
    *(float *)(param_3 + 0x28) = param_2;
    lVar14 = *(long *)(param_3 + 0x50);
    lVar11 = *(long *)puVar2;
    if (*(int *)(lVar11 + 0xe4) == 0) {
      thunk_FUN_036a1978(lVar11);
      lVar11 = *(long *)puVar2;
    }
    uVar4 = local_88;
    puVar2 = Method_System_Data_Listeners<DataViewListener>_Add__;
    lVar8 = *(long *)Method_System_Data_Listeners<DataViewListener>_Add__;
    uVar17 = *(undefined4 *)(*(long *)(lVar11 + 0xb8) + 8);
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_036a1978();
      lVar8 = *(long *)puVar2;
    }
    puVar7 = *(undefined8 **)(lVar8 + 0xb8);
    lVar11 = puVar7[4];
    if (lVar11 == 0) {
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_036a1978();
        puVar7 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
      }
      uVar16 = *puVar7;
      lVar11 = thunk_FUN_0367fe20(*(undefined8 *)
                                   Method_System_Collections_Generic_LowLevelListWithIList<ExceptionDispatchInfo>__ctor__
                                 );
      FUN_04167024(lVar11,uVar16,
                   *(undefined8 *)
                    Method_System_Collections_Generic_LowLevelListWithIList<object>__ctor__,0);
      plVar6 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x20);
      *plVar6 = lVar11;
      thunk_FUN_036b7ad0(plVar6,lVar11);
    }
    uStack_a8 = (ulong)uStack_a8._4_4_ << 0x20;
    local_b0 = 0;
    Sirenix_Serialization_Utilities_WeakValueSetter<__Il2CppFullySharedGenericType>___ctor
              (&local_b0,*(uint *)(param_3 + 0x14) & 0xf,local_88,
               *(undefined8 *)
                Method_System_Collections_Generic_LowLevelList<ExceptionDispatchInfo>_Add__);
    if (lVar14 == 0) goto LAB_0746564c;
    FUN_03c7f52c(fVar18,param_2,0,fVar22,fVar23,0,lVar14,uVar17,uVar4,lVar11,local_b0,
                 uStack_a8 & 0xffffffff,0,
                 *(undefined8 *)
                  Method_System_Collections_Generic_LowLevelDictionary<int,_Task>_set_Item__);
  }
LAB_074650c0:
  plVar6 = (long *)FUN_07464244(param_3);
  if (plVar6 != (long *)0x0) {
    lVar11 = *plVar6;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)puVar3) {
          puVar7 = (undefined8 *)(lVar11 + (long)(*piVar13 + 10) * 0x10 + 0x138);
          goto LAB_07465120;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar7 = (undefined8 *)FUN_0367cd30(plVar6,*(long *)puVar3,10);
LAB_07465120:
    iVar5 = (*(code *)*puVar7)(plVar6,puVar7[1]);
    puVar2 = Method_System_Data_Listeners<DataViewListener>_Add__;
    if (0 < iVar5) {
      iVar15 = 0;
      plVar6 = (long *)PTR_DAT_079ffc80;
      do {
        plVar9 = (long *)FUN_07464244(param_3);
        if (plVar9 == (long *)0x0) goto LAB_0746564c;
        lVar11 = *plVar9;
        uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)puVar3) {
              puVar7 = (undefined8 *)(lVar11 + (long)(*piVar13 + 7) * 0x10 + 0x138);
              goto LAB_074651ac;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar7 = (undefined8 *)FUN_0367cd30(plVar9,*(long *)puVar3,7);
LAB_074651ac:
        uVar12 = (*(code *)*puVar7)(plVar9,iVar15,puVar7[1]);
        if ((uVar12 & 1) != 0) {
          if (*(int *)(param_3 + 0x18) == iVar15) {
            plVar9 = (long *)FUN_07464244(param_3);
            if (plVar9 == (long *)0x0) goto LAB_0746564c;
            lVar11 = *plVar9;
            uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar12 != 0) {
              piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == *(long *)puVar3) {
                  puVar7 = (undefined8 *)(lVar11 + (long)(*piVar13 + 0xc) * 0x10 + 0x138);
                  goto LAB_0746522c;
                }
                uVar12 = uVar12 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar12 != 0);
            }
            puVar7 = (undefined8 *)FUN_0367cd30(plVar9,*(long *)puVar3,0xc);
LAB_0746522c:
            fVar21 = (float)(*(code *)*puVar7)(plVar9,puVar7[1]);
            if (*(float *)(param_3 + 0x1c) <= fVar21) goto LAB_0746524c;
            iVar10 = *(int *)(param_3 + 0x20);
          }
          else {
LAB_0746524c:
            iVar10 = 0;
            *(int *)(param_3 + 0x18) = iVar15;
            *(undefined4 *)(param_3 + 0x20) = 0;
          }
          *(int *)(param_3 + 0x20) = iVar10 + 1;
          plVar9 = (long *)FUN_07464244(param_3);
          if (plVar9 == (long *)0x0) goto LAB_0746564c;
          lVar11 = *plVar9;
          uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar12 != 0) {
            piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == *(long *)puVar3) {
                puVar7 = (undefined8 *)(lVar11 + (long)(*piVar13 + 0xc) * 0x10 + 0x138);
                goto LAB_074652c0;
              }
              uVar12 = uVar12 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar12 != 0);
          }
          puVar7 = (undefined8 *)FUN_0367cd30(plVar9,*(long *)puVar3,0xc);
LAB_074652c0:
          fVar21 = (float)(*(code *)*puVar7)(plVar9,puVar7[1]);
          plVar9 = (long *)FUN_07464244(param_3);
          if (plVar9 == (long *)0x0) goto LAB_0746564c;
          lVar11 = *plVar9;
          uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar12 != 0) {
            piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == *(long *)puVar3) {
                puVar7 = (undefined8 *)(lVar11 + (long)(*piVar13 + 0xd) * 0x10 + 0x138);
                goto LAB_07465330;
              }
              uVar12 = uVar12 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar12 != 0);
          }
          puVar7 = (undefined8 *)FUN_0367cd30(plVar9,*(long *)puVar3,0xd);
LAB_07465330:
          fVar19 = (float)(*(code *)*puVar7)(plVar9,puVar7[1]);
          lVar11 = *plVar6;
          lVar14 = *(long *)(param_3 + 0x50);
          *(float *)(param_3 + 0x1c) = fVar21 + fVar19;
          if (*(int *)(lVar11 + 0xe4) == 0) {
            thunk_FUN_036a1978(lVar11);
            lVar11 = *plVar6;
          }
          uVar4 = local_88;
          lVar8 = *(long *)puVar2;
          uVar17 = *(undefined4 *)(*(long *)(lVar11 + 0xb8) + 8);
          if (*(int *)(lVar8 + 0xe4) == 0) {
            thunk_FUN_036a1978();
            lVar8 = *(long *)puVar2;
          }
          puVar7 = *(undefined8 **)(lVar8 + 0xb8);
          lVar11 = puVar7[5];
          if (lVar11 == 0) {
            if (*(int *)(lVar8 + 0xe4) == 0) {
              thunk_FUN_036a1978();
              puVar7 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
            }
            uVar16 = *puVar7;
            lVar11 = thunk_FUN_0367fe20(*(undefined8 *)
                                         Method_System_Collections_Generic_LowLevelListWithIList<ExceptionDispatchInfo>__ctor__
                                       );
            FUN_041672c0(lVar11,uVar16,
                         *(undefined8 *)
                          Method_System_Collections_Generic_LowLevelListWithIList<Task>__ctor__,0);
            plVar6 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x28);
            *plVar6 = lVar11;
            thunk_FUN_036b7ad0(plVar6,lVar11);
            plVar6 = (long *)PTR_DAT_079ffc80;
          }
          local_c8 = 0;
          uStack_c0 = 0;
          local_b8 = 0;
          FUN_051efb6c(&local_c8,iVar15,iVar10 + 1,*(uint *)(param_3 + 0x14) & 0xf,local_88,
                       *(undefined8 *)
                        Method_System_Collections_Generic_LowLevelList<ExceptionDispatchInfo>_AddRange__
                      );
          if (lVar14 == 0) goto LAB_0746564c;
          uStack_a8 = uStack_c0;
          local_b0 = local_c8;
          local_a0 = local_b8;
          FUN_03c82010(fVar18,param_2,0,fVar22,fVar23,0,lVar14,uVar17,uVar4,lVar11,&local_b0,1,
                       *(undefined8 *)
                        Method_System_Collections_Generic_LowLevelListWithIList<Exception>__ctor__);
        }
        plVar9 = (long *)FUN_07464244(param_3);
        if (plVar9 == (long *)0x0) goto LAB_0746564c;
        lVar11 = *plVar9;
        uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)puVar3) {
              puVar7 = (undefined8 *)(lVar11 + (long)(*piVar13 + 8) * 0x10 + 0x138);
              goto LAB_074654d0;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar7 = (undefined8 *)FUN_0367cd30(plVar9,*(long *)puVar3,8);
LAB_074654d0:
        uVar12 = (*(code *)*puVar7)(plVar9,iVar15,puVar7[1]);
        if ((uVar12 & 1) != 0) {
          lVar11 = *plVar6;
          uVar17 = *(undefined4 *)(param_3 + 0x20);
          lVar14 = *(long *)(param_3 + 0x50);
          if (*(int *)(lVar11 + 0xe4) == 0) {
            thunk_FUN_036a1978(lVar11);
            lVar11 = *plVar6;
          }
          uVar4 = local_88;
          lVar8 = *(long *)puVar2;
          uVar1 = *(undefined4 *)(*(long *)(lVar11 + 0xb8) + 8);
          if (*(int *)(lVar8 + 0xe4) == 0) {
            thunk_FUN_036a1978();
            lVar8 = *(long *)puVar2;
          }
          puVar7 = *(undefined8 **)(lVar8 + 0xb8);
          lVar11 = puVar7[6];
          if (lVar11 == 0) {
            if (*(int *)(lVar8 + 0xe4) == 0) {
              thunk_FUN_036a1978();
              puVar7 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
            }
            uVar16 = *puVar7;
            lVar11 = thunk_FUN_0367fe20(*(undefined8 *)
                                         Method_System_Collections_Generic_LowLevelListWithIList<ExceptionDispatchInfo>__ctor__
                                       );
            FUN_041672c0(lVar11,uVar16,
                         *(undefined8 *)
                          Method_System_Collections_Generic_LowLevelList<Exception>_Add__,0);
            plVar6 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x30);
            *plVar6 = lVar11;
            thunk_FUN_036b7ad0(plVar6,lVar11);
            plVar6 = (long *)PTR_DAT_079ffc80;
          }
          local_c8 = 0;
          uStack_c0 = 0;
          local_b8 = 0;
          FUN_051efb6c(&local_c8,iVar15,uVar17,*(uint *)(param_3 + 0x14) & 0xf,local_88,
                       *(undefined8 *)
                        Method_System_Collections_Generic_LowLevelList<ExceptionDispatchInfo>_AddRange__
                      );
          if (lVar14 == 0) goto LAB_0746564c;
          uStack_a8 = uStack_c0;
          local_b0 = local_c8;
          local_a0 = local_b8;
          FUN_03c82010(fVar18,param_2,0,fVar22,fVar23,0,lVar14,uVar1,uVar4,lVar11,&local_b0,0,
                       *(undefined8 *)
                        Method_System_Collections_Generic_LowLevelListWithIList<Exception>__ctor__);
        }
        iVar15 = iVar15 + 1;
      } while (iVar15 != iVar5);
    }
    return;
  }
LAB_0746564c:
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


