/*
FUNCTION_NAME: FUN_05db2bd8
ENTRY_POINT: 05db2bd8
PROGRAM: hellodot-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_4
*/


undefined8 FUN_05db2bd8(long param_1,long *param_2,undefined8 *param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined8 extraout_x1;
  long lVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  int *piVar16;
  int iVar17;
  undefined8 uVar18;
  
  if ((DAT_06a7ae2d & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum
              (System_Collections_Generic_IEnumerable<IBehaviorWebStimulus>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (System_Collections_Generic_IEnumerable<IClientServiceRequest>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (System_Collections_Generic_IEnumerable<IConfigurableHttpClientInitializer>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(System_Func<Type,_Func<object[],_object>>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (System_Func<Type,_Tuple<bool,_bool,_bool,_bool>>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (System_Collections_Generic_ICollection<JsonToken>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (System_Collections_Generic_ICollection<UIVertex>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (System_Collections_Generic_ICollection<Vector2>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (System_Collections_Generic_ICollection<UILineInfo>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (
              Unity_VisualScripting_IConnectionCollection<IUnitRelation,_IUnitPort,_IUnitPort>_TypeInfo
              );
    AkMIDIEventCallbackInfo__get_byProgramNum
              (System_Collections_Generic_IEnumerable<ICreature>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (Unity_VisualScripting_IConnection<IUnitPort,_IUnitPort>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (System_Collections_Generic_IEnumerable<IDebugDisplaySettingsPanelDisposable>_TypeInfo
              );
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065de450);
    AkMIDIEventCallbackInfo__get_byProgramNum(System_Collections_Generic_IEnumerable<Guid>_TypeInfo)
    ;
    DAT_06a7ae2d = 1;
  }
  iVar8 = FUN_05db34c4(param_1);
  puVar5 = System_Collections_Generic_IEnumerable<Guid>_TypeInfo;
  lVar12 = *(long *)(param_1 + 0x1e0);
  if (lVar12 == 0) {
LAB_05db2efc:
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  iVar17 = *(int *)(lVar12 + 0x18);
  *(undefined4 *)(lVar12 + 0x18) = 0;
  *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
  if (0 < iVar17) {
    FUN_04f53aa4(*(undefined8 *)(lVar12 + 0x10),0,iVar17,0);
  }
  lVar12 = *(long *)puVar5;
  if (*(int *)(lVar12 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
    lVar12 = *(long *)puVar5;
  }
  lVar12 = *(long *)(*(long *)(lVar12 + 0xb8) + 8);
  if (lVar12 == 0) goto LAB_05db2efc;
  FUN_04679414(lVar12,*(undefined8 *)
                       System_Collections_Generic_IEnumerable<IClientServiceRequest>_TypeInfo);
  puVar7 = System_Collections_Generic_IEnumerable<IDebugDisplaySettingsPanelDisposable>_TypeInfo;
  puVar6 = System_Collections_Generic_IEnumerable<IBehaviorWebStimulus>_TypeInfo;
  puVar4 = System_Collections_Generic_ICollection<Vector2>_TypeInfo;
  puVar3 = System_Func<Type,_Tuple<bool,_bool,_bool,_bool>>_TypeInfo;
  puVar2 = System_Func<Type,_Func<object[],_object>>_TypeInfo;
  if (0 < iVar8) {
    lVar12 = *(long *)(param_1 + 0x1d0);
    if (lVar12 == 0) goto LAB_05db2efc;
    iVar8 = *(int *)(lVar12 + 0x18);
    if (0 < iVar8) {
      iVar17 = 0;
      do {
        uVar9 = FUN_03b5a280(lVar12,iVar17,*(undefined8 *)puVar7);
        lVar12 = thunk_FUN_02cea798(uVar9,*(undefined8 *)puVar3);
        if ((lVar12 != 0) &&
           (plVar10 = (long *)thunk_FUN_02cea798(lVar12,*(undefined8 *)puVar2),
           plVar10 != (long *)0x0)) {
          lVar13 = *plVar10;
          lVar12 = *(long *)puVar2;
          uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
          if (uVar14 != 0) {
            piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == lVar12) {
                puVar11 = (undefined8 *)(lVar13 + (long)(*piVar16 + 6) * 0x10 + 0x138);
                goto LAB_05db2dfc;
              }
              uVar14 = uVar14 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar14 != 0);
          }
          puVar11 = (undefined8 *)FUN_02ce0a7c(plVar10,lVar12,6);
LAB_05db2dfc:
          uVar14 = (*(code *)*puVar11)(plVar10,param_1,puVar11[1]);
          if ((uVar14 & 1) != 0) {
            if (*(long *)(param_1 + 0x1d0) == 0) break;
            lVar12 = *(long *)(param_1 + 0x1e0);
            uVar9 = FUN_03b5a280(*(long *)(param_1 + 0x1d0),iVar17,*(undefined8 *)puVar7);
            if (lVar12 == 0) break;
            lVar13 = *(long *)(lVar12 + 0x10);
            lVar15 = *(long *)puVar4;
            *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
            if (lVar13 == 0) break;
            uVar1 = *(uint *)(lVar12 + 0x18);
            if (uVar1 < *(uint *)(lVar13 + 0x18)) {
              *(uint *)(lVar12 + 0x18) = uVar1 + 1;
              *(undefined8 *)(lVar13 + (long)(int)uVar1 * 8 + 0x20) = uVar9;
            }
            else {
              FUN_039683cc(lVar12,uVar9,
                           *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
            }
            lVar12 = *(long *)puVar5;
            if (*(int *)(lVar12 + 0xe0) == 0) {
              thunk_FUN_02cd038c();
              lVar12 = *(long *)puVar5;
            }
            if (*(long *)(param_1 + 0x1d0) == 0) break;
            lVar12 = *(long *)(*(long *)(lVar12 + 0xb8) + 8);
            uVar9 = FUN_03b5a280(*(long *)(param_1 + 0x1d0),iVar17,*(undefined8 *)puVar7);
            if ((*(long *)(param_1 + 0x1d0) == 0) ||
               (FUN_03b5a280(*(long *)(param_1 + 0x1d0),iVar17,*(undefined8 *)puVar7), lVar12 == 0))
            break;
            FUN_0467928c(lVar12,uVar9,extraout_x1,*(undefined8 *)puVar6);
          }
        }
        iVar17 = iVar17 + 1;
        if (iVar17 == iVar8) goto LAB_05db2f00;
        lVar12 = *(long *)(param_1 + 0x1d0);
      } while (lVar12 != 0);
      goto LAB_05db2efc;
    }
LAB_05db2f00:
    lVar12 = *(long *)(param_1 + 0x1e0);
    if (lVar12 == 0) goto LAB_05db2efc;
    if (1 < *(int *)(lVar12 + 0x18)) {
      lVar13 = *(long *)puVar5;
      if (*(int *)(lVar13 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
        lVar13 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar13 + 0xb8);
      if (*(int *)(*(long *)PTR_DAT_065de450 + 0xe0) == 0) {
        thunk_FUN_02cd038c(*(long *)PTR_DAT_065de450);
      }
      FUN_05ddca8c(param_1,lVar12,uVar9,0);
      lVar12 = *(long *)(param_1 + 0x1e0);
      if (lVar12 == 0) goto LAB_05db2efc;
      iVar8 = *(int *)(lVar12 + 0x18);
      *(undefined4 *)(lVar12 + 0x18) = 0;
      *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
      if (0 < iVar8) {
        FUN_04f53aa4(*(undefined8 *)(lVar12 + 0x10),0,iVar8,0);
        lVar12 = *(long *)(param_1 + 0x1e0);
        if (lVar12 == 0) goto LAB_05db2efc;
      }
      FUN_039685d0(lVar12,**(undefined8 **)(*(long *)puVar5 + 0xb8),
                   *(undefined8 *)System_Collections_Generic_ICollection<UIVertex>_TypeInfo);
    }
    plVar10 = (long *)FUN_05da7b24(param_1);
    puVar2 = System_Collections_Generic_ICollection<JsonToken>_TypeInfo;
    if (plVar10 != (long *)0x0) {
      lVar12 = *plVar10;
      uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar14 != 0) {
        piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) ==
              *(long *)System_Collections_Generic_ICollection<JsonToken>_TypeInfo) {
            puVar11 = (undefined8 *)(lVar12 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_05db3018;
          }
          uVar14 = uVar14 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar14 != 0);
      }
      puVar11 = (undefined8 *)
                FUN_02ce0a7c(plVar10,*(long *)
                                      System_Collections_Generic_ICollection<JsonToken>_TypeInfo,0);
LAB_05db3018:
      uVar14 = (*(code *)*puVar11)(plVar10,puVar11[1]);
      if ((uVar14 & 1) != 0) {
        lVar12 = *(long *)puVar5;
        uVar9 = *(undefined8 *)(param_1 + 0x1e0);
        if (*(int *)(lVar12 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
          lVar12 = *(long *)puVar5;
        }
        lVar13 = *plVar10;
        uVar18 = **(undefined8 **)(lVar12 + 0xb8);
        uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar14 != 0) {
          piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == *(long *)puVar2) {
              puVar11 = (undefined8 *)(lVar13 + (long)(*piVar16 + 3) * 0x10 + 0x138);
              goto LAB_05db3098;
            }
            uVar14 = uVar14 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar14 != 0);
        }
        puVar11 = (undefined8 *)FUN_02ce0a7c(plVar10,*(long *)puVar2,3);
LAB_05db3098:
        (*(code *)*puVar11)(plVar10,param_1,uVar9,uVar18,puVar11[1]);
        lVar12 = *(long *)(param_1 + 0x1e0);
        if (lVar12 == 0) goto LAB_05db2efc;
        iVar8 = *(int *)(lVar12 + 0x18);
        *(undefined4 *)(lVar12 + 0x18) = 0;
        *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
        if (0 < iVar8) {
          FUN_04f53aa4(*(undefined8 *)(lVar12 + 0x10),0,iVar8,0);
          lVar12 = *(long *)(param_1 + 0x1e0);
          if (lVar12 == 0) goto LAB_05db2efc;
        }
        FUN_039685d0(lVar12,**(undefined8 **)(*(long *)puVar5 + 0xb8),
                     *(undefined8 *)System_Collections_Generic_ICollection<UIVertex>_TypeInfo);
      }
    }
    lVar12 = *(long *)(param_1 + 0x1e0);
    if (lVar12 == 0) goto LAB_05db2efc;
    if (*(int *)(lVar12 + 0x18) != 0) {
      lVar13 = FUN_03968108(lVar12,0,*(undefined8 *)
                                      Unity_VisualScripting_IConnection<IUnitPort,_IUnitPort>_TypeInfo
                           );
      lVar12 = 0;
      if (lVar13 != 0) {
        uVar9 = *(undefined8 *)System_Func<Type,_Tuple<bool,_bool,_bool,_bool>>_TypeInfo;
        lVar12 = thunk_FUN_02cea798(lVar13,uVar9);
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce8018(lVar13,uVar9);
        }
      }
      *param_2 = lVar12;
      lVar12 = *(long *)puVar5;
      if (*(int *)(lVar12 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
        lVar12 = *(long *)puVar5;
      }
      lVar12 = *(long *)(*(long *)(lVar12 + 0xb8) + 8);
      if (lVar12 == 0) goto LAB_05db2efc;
      uVar9 = FUN_0467920c(lVar12,*param_2,
                           *(undefined8 *)
                            System_Collections_Generic_IEnumerable<IConfigurableHttpClientInitializer>_TypeInfo
                          );
      uVar18 = 1;
      goto LAB_05db319c;
    }
  }
  uVar18 = 0;
  uVar9 = 0;
  *param_2 = 0;
LAB_05db319c:
  *param_3 = uVar9;
  return uVar18;
}


