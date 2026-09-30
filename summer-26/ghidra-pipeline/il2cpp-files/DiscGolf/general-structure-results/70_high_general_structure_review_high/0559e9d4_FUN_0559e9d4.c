/*
FUNCTION_NAME: FUN_0559e9d4
ENTRY_POINT: 0559e9d4
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_10;telemetry_or_network_hits_4;frame_or_lifecycle_behavior
*/


undefined8 FUN_0559e9d4(undefined8 param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  int *piVar8;
  long lVar9;
  undefined8 uVar10;
  
  if ((DAT_06dbb5bc & 1) == 0) {
    FUN_02d965b8(TMPro_TMP_Text_SpecialCharacter_var);
    FUN_02d965b8(Unity_Netcode_NetworkUpdateLoop_NetworkPostLateUpdate_var);
    FUN_02d965b8(UnityEngine_UIElements_UIR_TempMeshAllocatorImpl_ThreadData_var);
    FUN_02d965b8(UnityEngine_UIElements_TemplateAsset_AttributeOverride_var);
    FUN_02d965b8(PTR_DAT_069fbff8);
    FUN_02d965b8(PTR_DAT_069fc720);
    FUN_02d965b8(UnityEngine_UIElements_TemplateAsset_UxmlSerializedDataOverride_var);
    FUN_02d965b8(Meta_XR_ImmersiveDebugger_RuntimeSettings_DistanceOption_var);
    FUN_02d965b8(PTR_DAT_06a1d310);
    DAT_06dbb5bc = 1;
  }
  puVar2 = Meta_XR_ImmersiveDebugger_RuntimeSettings_DistanceOption_var;
  if (param_2 != (long *)0x0) {
    uVar3 = (**(code **)(*param_2 + 0x728))(param_2,0x34,*(undefined8 *)(*param_2 + 0x730));
    lVar5 = *(long *)puVar2;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02df485c(lVar5);
      lVar5 = *(long *)puVar2;
    }
    puVar1 = TMPro_TMP_Text_SpecialCharacter_var;
    puVar6 = *(undefined8 **)(lVar5 + 0xb8);
    lVar9 = puVar6[5];
    if (lVar9 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_02df485c(lVar5);
        puVar6 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
      }
      uVar10 = *puVar6;
      lVar9 = thunk_FUN_02dd3144(*(undefined8 *)
                                  Unity_Netcode_NetworkUpdateLoop_NetworkPostLateUpdate_var);
      FUN_03b7820c(lVar9,uVar10,
                   *(undefined8 *)
                    UnityEngine_UIElements_TemplateAsset_UxmlSerializedDataOverride_var,0);
      plVar4 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x28);
      *plVar4 = lVar9;
      LeanTween__value(plVar4,lVar9);
    }
    plVar4 = (long *)FUN_036170b4(uVar3,lVar9,*(undefined8 *)puVar1);
    if (plVar4 != (long *)0x0) {
      lVar5 = *plVar4;
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) ==
              *(long *)UnityEngine_UIElements_UIR_TempMeshAllocatorImpl_ThreadData_var) {
            puVar6 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_0559eb84;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar6 = (undefined8 *)
               FUN_02dd004c(plVar4,*(long *)
                                    UnityEngine_UIElements_UIR_TempMeshAllocatorImpl_ThreadData_var,
                            0);
LAB_0559eb84:
      plVar4 = (long *)(*(code *)*puVar6)(plVar4,puVar6[1]);
      puVar2 = PTR_DAT_069fbff8;
      if (plVar4 != (long *)0x0) {
        lVar5 = *plVar4;
        uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_069fbff8) {
              puVar6 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_0559ebec;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar6 = (undefined8 *)FUN_02dd004c(plVar4,*(long *)PTR_DAT_069fbff8,0);
LAB_0559ebec:
        uVar7 = (*(code *)*puVar6)(plVar4,puVar6[1]);
        puVar1 = PTR_DAT_069fb9c0;
        if ((uVar7 & 1) == 0) {
          uVar3 = *(undefined8 *)PTR_DAT_06a1d310;
          if (*(int *)(*(long *)(PTR_DAT_069fb9c0 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          uVar3 = FUN_054f73b4(uVar3,0);
          uVar7 = FUN_055006dc(param_2,uVar3,0);
          uVar3 = 0;
          if ((uVar7 & 1) != 0) {
            plVar4 = (long *)FUN_02d966a4(*(undefined8 *)PTR_DAT_069fc720,4);
            lVar5 = *(long *)(puVar1 + 0x48);
            if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
              thunk_FUN_02df485c(*(long *)(puVar1 + 0xe0));
            }
            lVar5 = FUN_054f73b4(lVar5 + 0x20,0);
            if (plVar4 == (long *)0x0) goto LAB_0559ee88;
            if ((lVar5 != 0) &&
               (lVar9 = thunk_FUN_02dd3048(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar9 == 0)) {
LAB_0559ee90:
              uVar3 = thunk_FUN_02de0bec();
                    /* WARNING: Subroutine does not return */
              FUN_02d96724(uVar3,0);
            }
            if ((int)plVar4[3] != 0) {
              plVar4[4] = lVar5;
              LeanTween__value(plVar4 + 4,lVar5);
              lVar5 = FUN_054f73b4(*(long *)(puVar1 + 0x48) + 0x20,0);
              if ((lVar5 != 0) &&
                 (lVar9 = thunk_FUN_02dd3048(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar9 == 0))
              goto LAB_0559ee90;
              if ((*(uint *)(plVar4 + 3) & 0xfffffffe) != 0) {
                plVar4[5] = lVar5;
                LeanTween__value(plVar4 + 5,lVar5);
                lVar5 = FUN_054f73b4(*(long *)(puVar1 + 0x48) + 0x20,0);
                if ((lVar5 != 0) &&
                   (lVar9 = thunk_FUN_02dd3048(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar9 == 0))
                goto LAB_0559ee90;
                if (2 < *(uint *)(plVar4 + 3)) {
                  plVar4[6] = lVar5;
                  LeanTween__value(plVar4 + 6,lVar5);
                  lVar5 = FUN_054f73b4(*(long *)(puVar1 + 0x48) + 0x20,0);
                  if ((lVar5 != 0) &&
                     (lVar9 = thunk_FUN_02dd3048(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar9 == 0)
                     ) goto LAB_0559ee90;
                  if ((*(uint *)(plVar4 + 3) & 0xfffffffc) != 0) {
                    plVar4[7] = lVar5;
                    LeanTween__value(plVar4 + 7,lVar5);
                    uVar3 = FUN_05502908(param_2,plVar4,0);
                    return uVar3;
                  }
                }
              }
            }
                    /* WARNING: Subroutine does not return */
            FUN_02d96868();
          }
        }
        else {
          lVar5 = *plVar4;
          uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar7 != 0) {
            piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) ==
                  *(long *)UnityEngine_UIElements_TemplateAsset_AttributeOverride_var) {
                puVar6 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
                goto LAB_0559ee04;
              }
              uVar7 = uVar7 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar7 != 0);
          }
          puVar6 = (undefined8 *)
                   FUN_02dd004c(plVar4,*(long *)
                                        UnityEngine_UIElements_TemplateAsset_AttributeOverride_var,0
                               );
LAB_0559ee04:
          uVar3 = (*(code *)*puVar6)(plVar4,puVar6[1]);
          lVar5 = *plVar4;
          uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar7 != 0) {
            piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
                puVar6 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
                goto Oculus_Avatar2_OvrAvatarConversions__ConvertSpace;
              }
              uVar7 = uVar7 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar7 != 0);
          }
          puVar6 = (undefined8 *)FUN_02dd004c(plVar4,*(long *)puVar2,0);
Oculus_Avatar2_OvrAvatarConversions__ConvertSpace:
          uVar7 = (*(code *)*puVar6)(plVar4,puVar6[1]);
          if ((uVar7 & 1) != 0) {
            thunk_FUN_02dfd288(UnityEngine_TextCore_Text_TextGenerator_SpecialCharacter_var);
            uVar3 = thunk_FUN_02dd3144();
            uVar10 = thunk_FUN_02dfd288(
                                       UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_var
                                       );
            FUN_05570294(uVar3,uVar10,0);
            uVar10 = thunk_FUN_02dfd288(UnityEngine_TextCore_Text_TextSettings_FontReferenceMap_var)
            ;
                    /* WARNING: Subroutine does not return */
            FUN_02d96724(uVar3,uVar10);
          }
        }
        return uVar3;
      }
    }
  }
LAB_0559ee88:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


