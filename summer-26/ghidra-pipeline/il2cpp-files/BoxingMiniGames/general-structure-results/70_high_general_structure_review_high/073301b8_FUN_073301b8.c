/*
FUNCTION_NAME: FUN_073301b8
ENTRY_POINT: 073301b8
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_18;ui_or_gameplay_sink_hits_6;telemetry_or_network_hits_2
*/


void FUN_073301b8(long *param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  undefined8 uVar14;
  undefined8 local_a8;
  undefined8 *puStack_a0;
  long local_98;
  undefined8 local_90;
  undefined8 *puStack_88;
  long local_80;
  undefined8 local_70;
  undefined8 *puStack_68;
  long local_60;
  undefined8 local_48;
  
  if ((DAT_07ef2e92 & 1) == 0) {
    FUN_03642964(
                Method_System_Collections_Generic_List_Enumerator<ProbeBrickPool_BrickChunkAlloc>_get_Current__
                );
    FUN_03642964(
                Method_System_Collections_Generic_List_Enumerator<ProbeVolumeBakingSet_SerializedPerSceneCellList>_get_Current__
                );
    FUN_03642964(
                Method_System_Collections_Generic_List_Enumerator<RenderTreeManager_ElementInsertionData>_MoveNext__
                );
    FUN_03642964(Method_System_Collections_Generic_List_Enumerator<Skelet_Bone>_Dispose__);
    FUN_03642964(PTR_DAT_079fd9c0);
    FUN_03642964(PTR_DAT_079fe6a8);
    FUN_03642964(Method_UnityEngine_UIElements_FocusEventBase<FocusInEvent>_get_focusController__);
    DAT_07ef2e92 = 1;
  }
  local_70 = 0;
  puStack_68 = (undefined8 *)0x0;
  local_60 = 0;
  local_90 = 0;
  puStack_88 = (undefined8 *)0x0;
  local_80 = 0;
  local_48 = 0;
  if (*param_1 != 0) {
    lVar10 = *(long *)(*param_1 + 0x298);
    if ((lVar10 != 0) && (*(char *)(lVar10 + 0x80) != '\0')) {
      thunk_FUN_036aa1c8(PTR_DAT_079f7680);
      uVar14 = thunk_FUN_0367fe20();
      uVar9 = thunk_FUN_036aa1c8(Method_System_Collections_Generic_HashSet<IClippable>_Clear__);
      FUN_05e177c8(uVar14,uVar9,0);
      uVar9 = thunk_FUN_036aa1c8(Method_System_Collections_Generic_HashSet<IPoolable>_Clear__);
                    /* WARNING: Subroutine does not return */
      FUN_03642acc(uVar14,uVar9);
    }
    iVar7 = FUN_0732f648(param_1);
    puVar2 = PTR_DAT_079fe6a8;
    if (iVar7 < 1) {
      return;
    }
    if (*param_1 != 0) {
      uVar14 = *(undefined8 *)(*param_1 + 0x290);
      if (*(int *)(*(long *)PTR_DAT_079fe6a8 + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      lVar10 = FUN_0737c6d4(uVar14,0);
      puVar5 = Method_System_Collections_Generic_List_Enumerator<Skelet_Bone>_Dispose__;
      puVar4 = 
      Method_System_Collections_Generic_List_Enumerator<ProbeVolumeBakingSet_SerializedPerSceneCellList>_get_Current__
      ;
      puVar3 = 
      Method_System_Collections_Generic_List_Enumerator<ProbeBrickPool_BrickChunkAlloc>_get_Current__
      ;
      lVar11 = *param_1;
      if (lVar11 != 0) {
        plVar13 = *(long **)(lVar11 + 0x298);
        if (plVar13 != (long *)0x0) {
          bVar1 = *(byte *)(*(long *)PTR_DAT_079fd9c0 + 0x130);
          if (((bVar1 <= *(byte *)(*plVar13 + 0x130)) &&
              (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar1 * 8 + -8) ==
               *(long *)PTR_DAT_079fd9c0)) && ((char)plVar13[0x18] == '\0')) {
            if (*(long *)(lVar11 + 0x290) == 0) goto LAB_0733051c;
            FUN_0459fb44(&local_a8,*(long *)(lVar11 + 0x290),
                         *(undefined8 *)
                          Method_System_Collections_Generic_List_Enumerator<Skelet_Bone>_Dispose__);
            puVar6 = 
            Method_UnityEngine_UIElements_FocusEventBase<FocusInEvent>_get_focusController__;
            puStack_68 = puStack_a0;
            local_70 = local_a8;
            local_60 = local_98;
            local_a8 = 0;
            puStack_a0 = &local_70;
            while (uVar8 = FUN_05897b28(&local_70,*(undefined8 *)puVar4), lVar11 = local_60,
                  (uVar8 & 1) != 0) {
              if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
                thunk_FUN_036a1978();
              }
              FUN_073861b0(lVar11,0);
            }
            FUN_05897b24(&local_70,*(undefined8 *)puVar3);
          }
        }
        FUN_073300cc(param_1);
        if (*param_1 != 0) {
          uVar14 = FUN_073189b4(*param_1,0);
          FUN_073ba614(uVar14,0);
          if (*param_1 != 0) {
            uVar8 = FUN_07325f08(*param_1,0);
            if ((uVar8 & 1) != 0) {
              if (*param_1 == 0) goto LAB_0733051c;
              FUN_07325fb4(*param_1,0);
            }
            if (lVar10 != 0) {
              FUN_0459fb44(&local_a8,lVar10,*(undefined8 *)puVar5);
              local_80 = local_98;
              puStack_88 = puStack_a0;
              local_90 = local_a8;
              local_a8 = 0;
              puStack_a0 = &local_90;
              while (uVar8 = FUN_05897b28(&local_90,*(undefined8 *)puVar4), lVar11 = local_80,
                    (uVar8 & 1) != 0) {
                if (local_80 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                FUN_073246bc(local_80,1,0,0);
                local_48 = *(undefined8 *)(lVar11 + 0x260);
                FUN_0732fb94(&local_48,0);
                *(undefined8 *)(lVar11 + 0x278) = 0;
                thunk_FUN_036b7ad0(lVar11 + 0x278,0);
                lVar12 = *param_1;
                if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                plVar13 = *(long **)(lVar12 + 0x298);
                if (plVar13 != (long *)0x0) {
                  (**(code **)(*plVar13 + 0x368))
                            (plVar13,lVar11,4,*(undefined8 *)(*plVar13 + 0x370));
                  lVar12 = *param_1;
                  if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03642c18();
                  }
                }
                lVar12 = *(long *)(lVar12 + 0x288);
                if (lVar12 != 0) {
                  (**(code **)(lVar12 + 0x18))
                            (*(undefined8 *)(lVar12 + 0x40),lVar11,*(undefined8 *)(lVar12 + 0x28));
                }
              }
              FUN_05897b24(&local_90,*(undefined8 *)puVar3);
              lVar11 = *param_1;
              if (lVar11 != 0) {
                if (0 < *(int *)(lVar11 + 0x1f8)) {
                  FUN_0732306c(lVar11,(int)*(char *)(lVar11 + 0x10) - *(int *)(lVar11 + 0x1f8),0);
                }
                if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                  thunk_FUN_036a1978();
                }
                FUN_0737c860(lVar10,0);
                if (*param_1 != 0) {
                  FUN_0731f12c(*param_1,4,0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_0733051c:
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


