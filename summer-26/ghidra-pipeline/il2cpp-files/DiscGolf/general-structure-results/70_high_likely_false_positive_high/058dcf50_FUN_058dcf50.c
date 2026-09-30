/*
FUNCTION_NAME: FUN_058dcf50
ENTRY_POINT: 058dcf50
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 76
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_8;telemetry_or_network_hits_3
*/


undefined8 FUN_058dcf50(long param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  uint uVar14;
  undefined4 local_64;
  
  puVar3 = UnityEngine_UI_Button_<OnFinishSubmit>d__9_TypeInfo;
  puVar2 = PTR_DAT_069fc180;
  if ((DAT_06dc0e3b & 1) == 0) {
    FUN_02d965b8(PTR_DAT_069ff7e0);
    FUN_02d965b8(PTR_DAT_06a1d5c0);
    FUN_02d965b8(System_Runtime_Serialization_XmlObjectSerializer_TypeInfo);
    FUN_02d965b8(UnityEngine_UI_Button_<OnFinishSubmit>d__9_TypeInfo);
    FUN_02d965b8(PTR_DAT_069fc180);
    FUN_02d965b8(System_Xml_Schema_XmlSchemaUnique_TypeInfo);
    DAT_06dc0e3b = 1;
  }
  plVar4 = (long *)FUN_02d966a4(*(undefined8 *)puVar2,*(undefined4 *)(param_1 + 0x24));
  lVar10 = *(long *)puVar3;
  if (*(int *)(lVar10 + 0xe4) == 0) {
    thunk_FUN_02df485c(lVar10);
    lVar10 = *(long *)puVar3;
  }
  lVar11 = **(long **)(lVar10 + 0xb8);
  if (lVar11 != 0) {
    if (*(uint *)(lVar11 + 0x18) <= *(uint *)(param_1 + 0x20)) goto LAB_058dd77c;
    lVar13 = *(long *)(lVar11 + (long)(int)*(uint *)(param_1 + 0x20) * 8 + 0x20);
    if (lVar13 == 0) goto LAB_058dd778;
    if (*(int *)(lVar13 + 0x18) == 0x14) {
      if (*(int *)(param_1 + 0x24) != 2) {
        uVar8 = FUN_05909904(*(undefined8 *)(param_1 + 0x18),0);
LAB_058dd840:
        uVar9 = thunk_FUN_02dfd288(Oculus_Avatar2_CAPI_BodyPoseCallback_TypeInfo);
                    /* WARNING: Subroutine does not return */
        FUN_02d96724(uVar8,uVar9);
      }
      lVar10 = *(long *)(param_1 + 0x28);
      if (lVar10 == 0) goto LAB_058dd778;
      if (*(int *)(lVar10 + 0x18) == 0) goto LAB_058dd77c;
      plVar5 = *(long **)(lVar10 + 0x20);
      if ((plVar5 == (long *)0x0) ||
         (lVar10 = (**(code **)(*plVar5 + 0x1a8))
                             (plVar5,param_2,param_3,*(undefined8 *)(*plVar5 + 0x1b0)),
         plVar4 == (long *)0x0)) goto LAB_058dd778;
      if ((lVar10 != 0) &&
         (lVar11 = thunk_FUN_02dd3048(lVar10,*(undefined8 *)(*plVar4 + 0x40)), lVar11 == 0)) {
LAB_058dd780:
        uVar8 = thunk_FUN_02de0bec();
                    /* WARNING: Subroutine does not return */
        FUN_02d96724(uVar8,0);
      }
      if ((int)plVar4[3] == 0) goto LAB_058dd77c;
      plVar4[4] = lVar10;
      LeanTween__value(plVar4 + 4,lVar10);
      lVar10 = *(long *)(param_1 + 0x28);
      if (lVar10 == 0) goto LAB_058dd778;
      if ((*(uint *)(lVar10 + 0x18) & 0xfffffffe) == 0) goto LAB_058dd77c;
      lVar10 = FUN_058dd85c(param_1,*(undefined8 *)(lVar10 + 0x28));
      if ((lVar10 != 0) &&
         (lVar11 = thunk_FUN_02dd3048(lVar10,*(undefined8 *)(*plVar4 + 0x40)), lVar11 == 0))
      goto LAB_058dd780;
      if ((*(uint *)(plVar4 + 3) & 0xfffffffe) == 0) goto LAB_058dd77c;
      plVar4[5] = lVar10;
      LeanTween__value(plVar4 + 5,lVar10);
    }
    else {
      if (*(int *)(lVar10 + 0xe4) == 0) {
        thunk_FUN_02df485c(lVar10);
        lVar11 = **(long **)(*(long *)puVar3 + 0xb8);
        if (lVar11 == 0) goto LAB_058dd778;
      }
      puVar2 = PTR_DAT_06a1d5c0;
      if (*(uint *)(lVar11 + 0x18) <= *(uint *)(param_1 + 0x20)) goto LAB_058dd77c;
      lVar10 = *(long *)(lVar11 + (long)(int)*(uint *)(param_1 + 0x20) * 8 + 0x20);
      if (lVar10 == 0) goto LAB_058dd778;
      if ((*(int *)(lVar10 + 0x18) != 0x13) && (0 < *(int *)(param_1 + 0x24))) {
        lVar11 = 0;
        lVar10 = 0;
        do {
          lVar13 = *(long *)(param_1 + 0x28);
          if (lVar13 == 0) goto LAB_058dd778;
          uVar14 = (uint)lVar10;
          if (*(uint *)(lVar13 + 0x18) <= uVar14) goto LAB_058dd77c;
          plVar5 = *(long **)(lVar13 + lVar10 * 8 + 0x20);
          if ((plVar5 == (long *)0x0) ||
             (lVar13 = (**(code **)(*plVar5 + 0x1a8))
                                 (plVar5,param_2,param_3,*(undefined8 *)(*plVar5 + 0x1b0)),
             plVar4 == (long *)0x0)) goto LAB_058dd778;
          if ((lVar13 != 0) &&
             (lVar6 = thunk_FUN_02dd3048(lVar13,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0))
          goto LAB_058dd780;
          if (*(uint *)(plVar4 + 3) <= uVar14) goto LAB_058dd77c;
          plVar4[lVar10 + 4] = lVar13;
          LeanTween__value((long)plVar4 + lVar11 + 0x20,lVar13);
          lVar13 = *(long *)puVar3;
          if (*(int *)(lVar13 + 0xe4) == 0) {
            thunk_FUN_02df485c();
            lVar13 = *(long *)puVar3;
          }
          lVar13 = **(long **)(lVar13 + 0xb8);
          if (lVar13 == 0) goto LAB_058dd778;
          if (*(uint *)(lVar13 + 0x18) <= *(uint *)(param_1 + 0x20)) goto LAB_058dd77c;
          lVar13 = *(long *)(lVar13 + (long)(int)*(uint *)(param_1 + 0x20) * 8 + 0x20);
          if (lVar13 == 0) goto LAB_058dd778;
          if (*(char *)(lVar13 + 0x28) == '\0') goto LAB_058dd6cc;
          if (*(uint *)(plVar4 + 3) <= uVar14) goto LAB_058dd77c;
          lVar13 = *(long *)puVar2;
          lVar6 = plVar4[lVar10 + 4];
          if (*(int *)(lVar13 + 0xe4) == 0) {
            thunk_FUN_02df485c();
            lVar13 = *(long *)puVar2;
          }
          if (lVar6 == **(long **)(lVar13 + 0xb8)) {
LAB_058dd75c:
            if (*(int *)(lVar13 + 0xe4) == 0) {
              thunk_FUN_02df485c();
              lVar13 = *(long *)puVar2;
            }
            return **(undefined8 **)(lVar13 + 0xb8);
          }
          lVar13 = *(long *)(PTR_DAT_069fb9c0 + 0x10);
          if (*(int *)(*(long *)(PTR_DAT_069fb9c0 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          uVar8 = FUN_054f73b4(lVar13 + 0x20,0);
          lVar13 = *(long *)puVar3;
          if (*(int *)(lVar13 + 0xe4) == 0) {
            thunk_FUN_02df485c(lVar13);
            lVar13 = *(long *)puVar3;
          }
          lVar13 = **(long **)(lVar13 + 0xb8);
          if (lVar13 == 0) goto LAB_058dd778;
          if (*(uint *)(lVar13 + 0x18) <= *(uint *)(param_1 + 0x20)) goto LAB_058dd77c;
          lVar13 = *(long *)(lVar13 + (long)(int)*(uint *)(param_1 + 0x20) * 8 + 0x20);
          if ((lVar13 == 0) || (lVar13 = *(long *)(lVar13 + 0x30), lVar13 == 0)) goto LAB_058dd778;
          if (*(uint *)(lVar13 + 0x18) <= uVar14) goto LAB_058dd77c;
          uVar7 = FUN_055006dc(uVar8,*(undefined8 *)(lVar13 + lVar10 * 8 + 0x20),0);
          if ((uVar7 & 1) != 0) {
            lVar13 = *(long *)puVar2;
            goto LAB_058dd75c;
          }
          if (*(uint *)(plVar4 + 3) <= uVar14) goto LAB_058dd77c;
          if (plVar4[lVar10 + 4] == 0) goto LAB_058dd778;
          uVar8 = thunk_FUN_02da6564(plVar4[lVar10 + 4],0);
          lVar13 = *(long *)puVar3;
          if (*(int *)(lVar13 + 0xe4) == 0) {
            thunk_FUN_02df485c(lVar13);
            lVar13 = *(long *)puVar3;
          }
          lVar13 = **(long **)(lVar13 + 0xb8);
          if (lVar13 == 0) goto LAB_058dd778;
          if (*(uint *)(lVar13 + 0x18) <= *(uint *)(param_1 + 0x20)) goto LAB_058dd77c;
          lVar13 = *(long *)(lVar13 + (long)(int)*(uint *)(param_1 + 0x20) * 8 + 0x20);
          if ((lVar13 == 0) || (lVar13 = *(long *)(lVar13 + 0x30), lVar13 == 0)) goto LAB_058dd778;
          if (*(uint *)(lVar13 + 0x18) <= uVar14) goto LAB_058dd77c;
          uVar9 = *(undefined8 *)(lVar13 + lVar10 * 8 + 0x20);
          if (*(int *)(*(long *)(PTR_DAT_069fb9c0 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          uVar7 = FUN_05501380(uVar8,uVar9,0);
          if ((uVar7 & 1) != 0) {
            lVar13 = *(long *)puVar3;
            if (*(int *)(lVar13 + 0xe4) == 0) {
              thunk_FUN_02df485c();
              lVar13 = *(long *)puVar3;
            }
            lVar13 = **(long **)(lVar13 + 0xb8);
            if (lVar13 == 0) goto LAB_058dd778;
            if (*(uint *)(lVar13 + 0x18) <= *(uint *)(param_1 + 0x20)) goto LAB_058dd77c;
            lVar13 = *(long *)(lVar13 + (long)(int)*(uint *)(param_1 + 0x20) * 8 + 0x20);
            if ((lVar13 == 0) || (lVar13 = *(long *)(lVar13 + 0x30), lVar13 == 0))
            goto LAB_058dd778;
            if (*(uint *)(lVar13 + 0x18) <= uVar14) goto LAB_058dd77c;
            uVar8 = *(undefined8 *)(lVar13 + lVar10 * 8 + 0x20);
            lVar13 = *(long *)(PTR_DAT_069fb9c0 + 0x48);
            if (*(int *)(*(long *)(PTR_DAT_069fb9c0 + 0xe0) + 0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            uVar9 = FUN_054f73b4(lVar13 + 0x20,0);
            uVar7 = FUN_055006dc(uVar8,uVar9,0);
            if ((uVar7 & 1) != 0) {
              if (*(uint *)(plVar4 + 3) <= uVar14) goto LAB_058dd77c;
              if (plVar4[lVar10 + 4] == 0) goto LAB_058dd778;
              uVar8 = thunk_FUN_02da6564(plVar4[lVar10 + 4],0);
              if (*(int *)(*(long *)System_Runtime_Serialization_XmlObjectSerializer_TypeInfo + 0xe4
                          ) == 0) {
                thunk_FUN_02df485c(*(long *)
                                    System_Runtime_Serialization_XmlObjectSerializer_TypeInfo);
              }
              uVar8 = System_Runtime_Interop_UnsafeNativeMethods__EventUnregister(uVar8,0);
              uVar7 = FUN_059049b0(uVar8,0);
              if ((uVar7 & 1) != 0) {
                if (uVar14 < *(uint *)(plVar4 + 3)) {
                  lVar13 = plVar4[lVar10 + 4];
                  uVar8 = FUN_05903c00(param_1,0);
                  if (*(int *)(*(long *)PTR_DAT_069ff7e0 + 0xe4) == 0) {
                    thunk_FUN_02df485c(*(long *)PTR_DAT_069ff7e0);
                  }
                  local_64 = FUN_0545d8f8(lVar13,uVar8,0);
                  lVar13 = thunk_FUN_02dd2d7c(*(undefined8 *)(PTR_DAT_069fb9c0 + 0x48),&local_64);
                  if ((lVar13 == 0) ||
                     (lVar6 = thunk_FUN_02dd3048(lVar13,*(undefined8 *)(*plVar4 + 0x40)), lVar6 != 0
                     )) {
                    if (uVar14 < *(uint *)(plVar4 + 3)) {
                      plVar4[lVar10 + 4] = lVar13;
                      LeanTween__value((long)plVar4 + lVar11 + 0x20,lVar13);
                      goto LAB_058dd6cc;
                    }
                    goto LAB_058dd77c;
                  }
                  goto LAB_058dd780;
                }
                goto LAB_058dd77c;
              }
            }
            lVar13 = *(long *)puVar3;
            if (*(int *)(lVar13 + 0xe4) == 0) {
              thunk_FUN_02df485c();
              lVar13 = *(long *)puVar3;
            }
            lVar6 = **(long **)(lVar13 + 0xb8);
            if (lVar6 == 0) goto LAB_058dd778;
            if (*(uint *)(lVar6 + 0x18) <= *(uint *)(param_1 + 0x20)) goto LAB_058dd77c;
            lVar12 = *(long *)(lVar6 + (long)(int)*(uint *)(param_1 + 0x20) * 8 + 0x20);
            if (lVar12 == 0) goto LAB_058dd778;
            if (*(int *)(lVar12 + 0x18) != 0x1d) {
              if (*(int *)(lVar13 + 0xe4) == 0) {
                thunk_FUN_02df485c();
                lVar13 = *(long *)puVar3;
                lVar6 = **(long **)(lVar13 + 0xb8);
                if (lVar6 == 0) goto LAB_058dd778;
              }
              if (*(uint *)(lVar6 + 0x18) <= *(uint *)(param_1 + 0x20)) goto LAB_058dd77c;
              lVar12 = *(long *)(lVar6 + (long)(int)*(uint *)(param_1 + 0x20) * 8 + 0x20);
              if (lVar12 == 0) goto LAB_058dd778;
              if (*(int *)(lVar12 + 0x18) == 0x10) goto LAB_058dd60c;
              if (*(int *)(lVar13 + 0xe4) == 0) {
                thunk_FUN_02df485c();
                lVar6 = **(long **)(*(long *)puVar3 + 0xb8);
                if (lVar6 == 0) goto LAB_058dd778;
              }
              if (*(uint *)(lVar6 + 0x18) <= *(uint *)(param_1 + 0x20)) goto LAB_058dd77c;
              lVar13 = *(long *)(lVar6 + (long)(int)*(uint *)(param_1 + 0x20) * 8 + 0x20);
              if (lVar13 == 0) goto LAB_058dd778;
              if (*(int *)(lVar13 + 0x18) == 4) goto LAB_058dd60c;
LAB_058dd79c:
              puVar2 = UnityEngine_UI_Button_<OnFinishSubmit>d__9_TypeInfo;
              thunk_FUN_02dfd288(UnityEngine_UI_Button_<OnFinishSubmit>d__9_TypeInfo);
              FUN_0297e1b4();
              lVar11 = thunk_FUN_02dfd288(puVar2);
              iVar1 = *(int *)(param_1 + 0x20);
              uVar8 = **(undefined8 **)(lVar11 + 0xb8);
              FUN_02979e58(uVar8);
              lVar11 = FUN_0297be74(uVar8,(long)iVar1);
              FUN_02979e58();
              uVar9 = *(undefined8 *)(lVar11 + 0x10);
              lVar11 = thunk_FUN_02dfd288(puVar2);
              iVar1 = *(int *)(param_1 + 0x20);
              uVar8 = **(undefined8 **)(lVar11 + 0xb8);
              FUN_02979e58(uVar8);
              lVar11 = FUN_0297be74(uVar8,(long)iVar1);
              FUN_02979e58();
              uVar8 = *(undefined8 *)(lVar11 + 0x30);
              FUN_02979e58(uVar8);
              uVar8 = FUN_0297be74(uVar8,lVar10);
              uVar8 = FUN_05909ab0(uVar9,uVar14 + 1,uVar8,0);
              goto LAB_058dd840;
            }
LAB_058dd60c:
            lVar13 = *(long *)(PTR_DAT_069fb9c0 + 0x90);
            if (*(int *)(*(long *)(PTR_DAT_069fb9c0 + 0xe0) + 0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            uVar8 = FUN_054f73b4(lVar13 + 0x20,0);
            if (*(uint *)(plVar4 + 3) <= uVar14) goto LAB_058dd77c;
            if (plVar4[lVar10 + 4] == 0) goto LAB_058dd778;
            uVar9 = thunk_FUN_02da6564(plVar4[lVar10 + 4],0);
            uVar7 = FUN_05501380(uVar8,uVar9,0);
            if ((uVar7 & 1) != 0) {
              uVar8 = *(undefined8 *)System_Xml_Schema_XmlSchemaUnique_TypeInfo;
              if (*(int *)(*(long *)(PTR_DAT_069fb9c0 + 0xe0) + 0xe4) == 0) {
                thunk_FUN_02df485c();
              }
              uVar8 = FUN_054f73b4(uVar8,0);
              if (*(uint *)(plVar4 + 3) <= uVar14) goto LAB_058dd77c;
              if (plVar4[lVar10 + 4] == 0) goto LAB_058dd778;
              uVar9 = thunk_FUN_02da6564(plVar4[lVar10 + 4],0);
              uVar7 = FUN_05501380(uVar8,uVar9,0);
              if ((uVar7 & 1) != 0) goto LAB_058dd79c;
            }
          }
LAB_058dd6cc:
          lVar10 = lVar10 + 1;
          lVar11 = lVar11 + 8;
        } while ((int)lVar10 < *(int *)(param_1 + 0x24));
      }
    }
    lVar10 = *(long *)puVar3;
    if (*(int *)(lVar10 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      lVar10 = *(long *)puVar3;
    }
    lVar10 = **(long **)(lVar10 + 0xb8);
    if (lVar10 != 0) {
      if (*(uint *)(lVar10 + 0x18) <= *(uint *)(param_1 + 0x20)) {
LAB_058dd77c:
                    /* WARNING: Subroutine does not return */
        FUN_02d96868();
      }
      lVar10 = *(long *)(lVar10 + (long)(int)*(uint *)(param_1 + 0x20) * 8 + 0x20);
      if (lVar10 != 0) {
        uVar8 = FUN_058ddad4(param_1,*(undefined4 *)(lVar10 + 0x18),plVar4,param_2,param_3);
        return uVar8;
      }
    }
  }
LAB_058dd778:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


