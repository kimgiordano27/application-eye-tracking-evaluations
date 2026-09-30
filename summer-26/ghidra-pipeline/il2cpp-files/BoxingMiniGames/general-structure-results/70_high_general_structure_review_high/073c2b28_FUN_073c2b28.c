/*
FUNCTION_NAME: FUN_073c2b28
ENTRY_POINT: 073c2b28
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_3;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_073c2b28(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined8 *param_5)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  int iVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulong uVar14;
  long *plVar15;
  bool bVar16;
  long lVar17;
  long lVar18;
  undefined8 *puVar19;
  int iVar20;
  long *plVar21;
  bool bVar22;
  undefined8 *puVar23;
  undefined1 auVar24 [16];
  undefined4 local_80;
  int local_7c;
  undefined4 local_74;
  undefined1 local_70 [16];
  
  plVar21 = (long *)Method_System_Collections_Generic_List<Instruction>_set_Item__;
  if ((DAT_07ef3671 & 1) == 0) {
    FUN_03642964(
                Method_Oculus_Interaction_InteractableRegistry_InteractableSet_Enumerator<TouchHandGrabInteractor,_TouchHandGrabInteractable>_get_Current__
                );
    FUN_03642964(Method_System_Collections_Generic_List<InstanceType>__ctor__);
    FUN_03642964(Method_System_Collections_Generic_List<InstanceType>_Add__);
    FUN_03642964(PTR_DAT_07a015c8);
    FUN_03642964(PTR_DAT_07a015c0);
    FUN_03642964(
                Method_UnityEngine_UIElements_InlineStyleAccessPropertyBag_InlineStyleProperty<StyleTransformOrigin,_TransformOrigin>__ctor__
                );
    FUN_03642964(
                Method_UnityEngine_UIElements_InlineStyleAccessPropertyBag_InlineStyleProperty<StyleTranslate,_Translate>__ctor__
                );
    FUN_03642964(
                Method_System_Collections_Generic_Dictionary_Enumerator<string,_List<string>>_get_Current__
                );
    FUN_03642964(
                Method_System_Collections_Generic_Dictionary_Enumerator<string,_List<OpenXRInput_SerializedBinding>>_MoveNext__
                );
    FUN_03642964(Method_System_Collections_Generic_List<Instrument>_get_Count__);
    FUN_03642964(Method_System_Collections_Generic_List<Instruction>_set_Item__);
    FUN_03642964(
                Method_Oculus_Interaction_InteractableRegistry_InteractableSet_Enumerator<SnapInteractor,_SnapInteractable>_Dispose__
                );
    FUN_03642964(PTR_DAT_07a19710);
    DAT_07ef3671 = 1;
  }
  lVar10 = *plVar21;
  local_70._0_8_ = 0;
  local_70._8_8_ = 0;
  local_74 = 0;
  if (*(int *)(lVar10 + 0xe4) == 0) {
    thunk_FUN_036a1978();
    lVar10 = *plVar21;
  }
  auVar7._8_8_ = local_70._8_8_;
  auVar7._0_8_ = local_70._0_8_;
  auVar24._8_8_ = local_70._8_8_;
  auVar24._0_8_ = local_70._0_8_;
  plVar15 = *(long **)(lVar10 + 0xb8);
  lVar10 = *plVar15;
  if (lVar10 != 0) {
    lVar18 = plVar15[1];
    *(undefined4 *)(lVar10 + 0x18) = 0;
    *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
    local_70 = auVar24;
    if (lVar18 != 0) {
      lVar10 = plVar15[2];
      *(undefined4 *)(lVar18 + 0x18) = 0;
      *(int *)(lVar18 + 0x1c) = *(int *)(lVar18 + 0x1c) + 1;
      local_70 = auVar7;
      if (lVar10 != 0) {
        iVar9 = *(int *)(lVar10 + 0x18);
        *(undefined4 *)(lVar10 + 0x18) = 0;
        *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
        if (0 < iVar9) {
          FUN_05e3b0f4(*(undefined8 *)(lVar10 + 0x10),0,iVar9,0);
          plVar15 = *(long **)(*plVar21 + 0xb8);
        }
        auVar8._8_8_ = local_70._8_8_;
        auVar8._0_8_ = local_70._0_8_;
        lVar10 = plVar15[3];
        if (lVar10 != 0) {
          *(undefined4 *)(lVar10 + 0x18) = 0;
          *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
          local_70 = auVar8;
          if (param_1 != 0) {
            local_7c = 0;
            iVar1 = *(int *)(param_1 + 0x54);
            iVar9 = 0;
            bVar16 = false;
            plVar15 = (long *)
                      Method_Oculus_Interaction_InteractableRegistry_InteractableSet_Enumerator<TouchHandGrabInteractor,_TouchHandGrabInteractable>_get_Current__
            ;
            puVar19 = (undefined8 *)
                      Method_System_Collections_Generic_Dictionary_Enumerator<string,_List<string>>_get_Current__
            ;
            puVar23 = (undefined8 *)
                      Method_System_Collections_Generic_Dictionary_Enumerator<string,_List<OpenXRInput_SerializedBinding>>_MoveNext__
            ;
            do {
              if (bVar16) goto LAB_073c3158;
              if (*(int *)(*plVar15 + 0xe4) == 0) {
                thunk_FUN_036a1978();
              }
              lVar10 = FUN_073c099c();
              if (lVar10 == 0) goto LAB_073c31dc;
              auVar24 = FUN_045fe6e0(lVar10,0,*puVar19);
              local_70 = auVar24;
              lVar10 = FUN_073c0924();
              if (lVar10 == 0) goto LAB_073c31dc;
              uVar11 = FUN_04619f28(lVar10,0,*puVar23);
              lVar10 = FUN_073c08ac();
              if (lVar10 == 0) goto LAB_073c31dc;
              uVar12 = FUN_04619f28(lVar10,0,*puVar23);
              lVar10 = FUN_073c0a14();
              if (lVar10 == 0) goto LAB_073c31dc;
              local_80 = FUN_044f811c(lVar10,0,*(undefined8 *)
                                                Method_System_Collections_Generic_List<Instrument>_get_Count__
                                     );
              if (iVar9 < iVar1) {
                bVar22 = false;
                bVar3 = false;
                bVar6 = false;
                bVar5 = false;
                bVar4 = true;
                bVar16 = false;
                do {
                  iVar20 = iVar9;
                  iVar9 = FUN_073cb084(param_1,iVar20,0);
                  if (iVar9 < 4) {
                    if (iVar9 == 1) {
                      uVar14 = FUN_073cb198(param_1,iVar20,6,0);
                      if (((uVar14 & 1) == 0) || (local_7c != 0)) goto LAB_073c2e8c;
                      FUN_07348008(local_70,*(undefined8 *)PTR_DAT_07a19710,0);
                      bVar6 = true;
                      local_7c = 0;
                      bVar16 = true;
                    }
                    else if (iVar9 == 3) {
                      uVar13 = FUN_073cb6ac(param_1,iVar20,0);
                      if (bVar22) {
                        if (!bVar3) {
                          uVar12 = uVar13;
                        }
                        bVar4 = (bool)((bVar3 ^ 1U) & bVar4);
                        bVar22 = true;
                        bVar3 = true;
                      }
                      else {
                        bVar22 = true;
                        uVar11 = uVar13;
                      }
                    }
                    else {
LAB_073c2e8c:
                      bVar4 = false;
                    }
                  }
                  else {
                    if (iVar9 != 7) {
                      if (iVar9 != 0xb) goto LAB_073c2e8c;
                      local_7c = local_7c + 1;
                      break;
                    }
                    uVar13 = FUN_073cb234(param_1,iVar20,0);
                    if (!bVar5) {
                      if (*(int *)(*(long *)
                                    Method_Oculus_Interaction_InteractableRegistry_InteractableSet_Enumerator<SnapInteractor,_SnapInteractable>_Dispose__
                                  + 0xe4) == 0) {
                        thunk_FUN_036a1978();
                      }
                      uVar14 = FUN_073c3518(5,uVar13,&local_74);
                      if ((uVar14 & 1) != 0) {
                        local_80 = FUN_072ffd7c(local_74,0);
                        bVar5 = true;
                        goto LAB_073c2eb4;
                      }
                    }
                    if (bVar6) {
                      bVar4 = false;
                    }
                    else {
                      FUN_07348008(local_70,uVar13,0);
                    }
                    bVar6 = true;
                  }
LAB_073c2eb4:
                  iVar9 = iVar20 + 1;
                } while (iVar20 + 1 < iVar1);
                iVar9 = iVar20 + 1;
                bVar22 = iVar9 < iVar1;
                plVar15 = (long *)
                          Method_Oculus_Interaction_InteractableRegistry_InteractableSet_Enumerator<TouchHandGrabInteractor,_TouchHandGrabInteractable>_get_Current__
                ;
                puVar19 = (undefined8 *)
                          Method_System_Collections_Generic_Dictionary_Enumerator<string,_List<string>>_get_Current__
                ;
                plVar21 = (long *)Method_System_Collections_Generic_List<Instruction>_set_Item__;
                puVar23 = (undefined8 *)
                          Method_System_Collections_Generic_Dictionary_Enumerator<string,_List<OpenXRInput_SerializedBinding>>_MoveNext__
                ;
              }
              else {
                bVar16 = false;
                bVar22 = false;
                bVar4 = true;
              }
              lVar10 = *plVar21;
              if (*(int *)(lVar10 + 0xe4) == 0) {
                thunk_FUN_036a1978();
                lVar10 = *plVar21;
              }
              lVar10 = **(long **)(lVar10 + 0xb8);
              if (lVar10 == 0) goto LAB_073c31dc;
              lVar18 = *(long *)(lVar10 + 0x10);
              lVar17 = *(long *)Method_System_Collections_Generic_List<InstanceType>__ctor__;
              *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
              if (lVar18 == 0) goto LAB_073c31dc;
              uVar2 = *(uint *)(lVar10 + 0x18);
              if (uVar2 < *(uint *)(lVar18 + 0x18)) {
                *(uint *)(lVar10 + 0x18) = uVar2 + 1;
                *(undefined8 *)(lVar18 + (long)(int)uVar2 * 8 + 0x20) = uVar12;
              }
              else {
                FUN_0461a21c(lVar10,uVar12,
                             *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
              }
              lVar10 = *(long *)(*(long *)(*plVar21 + 0xb8) + 8);
              if (lVar10 == 0) goto LAB_073c31dc;
              lVar18 = *(long *)(lVar10 + 0x10);
              lVar17 = *(long *)Method_System_Collections_Generic_List<InstanceType>__ctor__;
              *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
              if (lVar18 == 0) goto LAB_073c31dc;
              uVar2 = *(uint *)(lVar10 + 0x18);
              if (uVar2 < *(uint *)(lVar18 + 0x18)) {
                *(uint *)(lVar10 + 0x18) = uVar2 + 1;
                *(undefined8 *)(lVar18 + (long)(int)uVar2 * 8 + 0x20) = uVar11;
              }
              else {
                FUN_0461a21c(lVar10,uVar11,
                             *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
              }
              lVar10 = *(long *)(*(long *)(*plVar21 + 0xb8) + 0x10);
              if (lVar10 == 0) goto LAB_073c31dc;
              lVar18 = *(long *)(lVar10 + 0x10);
              *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
              if (lVar18 == 0) goto LAB_073c31dc;
              uVar2 = *(uint *)(lVar10 + 0x18);
              if (uVar2 < *(uint *)(lVar18 + 0x18)) {
                lVar18 = lVar18 + (long)(int)uVar2 * 0x10;
                *(uint *)(lVar10 + 0x18) = uVar2 + 1;
                *(undefined1 (*) [16])(lVar18 + 0x20) = local_70;
                thunk_FUN_036b7ad0(lVar18 + 0x28,0);
              }
              else {
                FUN_045fea00();
              }
              lVar10 = *(long *)(*(long *)(*plVar21 + 0xb8) + 0x18);
              if (lVar10 == 0) goto LAB_073c31dc;
              lVar18 = *(long *)(lVar10 + 0x10);
              lVar17 = *(long *)Method_System_Collections_Generic_List<InstanceType>_Add__;
              *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
              if (lVar18 == 0) goto LAB_073c31dc;
              uVar2 = *(uint *)(lVar10 + 0x18);
              if (uVar2 < *(uint *)(lVar18 + 0x18)) {
                *(uint *)(lVar10 + 0x18) = uVar2 + 1;
                *(undefined4 *)(lVar18 + (long)(int)uVar2 * 4 + 0x20) = local_80;
              }
              else {
                FUN_044f8418(lVar10,local_80,
                             *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
              }
            } while ((bool)(bVar22 & bVar4));
            if (bVar4) {
              lVar10 = *plVar21;
              if (*(int *)(lVar10 + 0xe4) == 0) {
                thunk_FUN_036a1978();
                lVar10 = *plVar21;
              }
              *param_4 = *(undefined8 *)(*(long *)(lVar10 + 0xb8) + 0x10);
              thunk_FUN_036b7ad0(param_4);
              *param_2 = **(undefined8 **)(*plVar21 + 0xb8);
              thunk_FUN_036b7ad0(param_2);
              *param_3 = *(undefined8 *)(*(long *)(*plVar21 + 0xb8) + 8);
              thunk_FUN_036b7ad0(param_3);
              uVar11 = *(undefined8 *)(*(long *)(*plVar21 + 0xb8) + 0x18);
            }
            else {
LAB_073c3158:
              if (*(int *)(*plVar15 + 0xe4) == 0) {
                thunk_FUN_036a1978();
              }
              uVar11 = FUN_073c099c();
              *param_4 = uVar11;
              thunk_FUN_036b7ad0();
              uVar11 = FUN_073c08ac();
              *param_2 = uVar11;
              thunk_FUN_036b7ad0();
              uVar11 = FUN_073c0924();
              *param_3 = uVar11;
              thunk_FUN_036b7ad0();
              uVar11 = FUN_073c0a14();
            }
            *param_5 = uVar11;
            thunk_FUN_036b7ad0(param_5);
            return;
          }
        }
      }
    }
  }
LAB_073c31dc:
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


