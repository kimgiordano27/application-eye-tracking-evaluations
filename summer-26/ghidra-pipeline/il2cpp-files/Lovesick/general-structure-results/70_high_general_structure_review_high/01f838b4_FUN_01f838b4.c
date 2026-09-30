/*
FUNCTION_NAME: FUN_01f838b4
ENTRY_POINT: 01f838b4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_3;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


void FUN_01f838b4(long param_1,long *param_2)

{
  byte bVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  int *piVar16;
  long lVar17;
  
  puVar3 = StringLiteral_1918;
  if ((DAT_03780519 & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_GoogleSheetsToUnity_SpreadsheetManager_<Read>d__2_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_00d48444(System_Xml_Base64Decoder_TypeInfo);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<Vector4>__ctor__);
    thunk_FUN_00d48444(System_Reflection_MethodBase___TypeInfo);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<AudioClip>__ctor__);
    thunk_FUN_00d48444(StringLiteral_1918);
    thunk_FUN_00d48444(Meta_WitAi_Events_WitRequestOptionsEvent_TypeInfo);
    thunk_FUN_00d48444(Method_UnityEngine_Rendering_UI_DebugUIHandlerBitField_SetValue__);
    thunk_FUN_00d48444(StringLiteral_5013);
    thunk_FUN_00d48444(Method_UnityEngine_Playables_PlayableExtensions_SetInputCount<Playable>__);
    thunk_FUN_00d48444(StringLiteral_7931);
    thunk_FUN_00d48444(StringLiteral_2669);
    thunk_FUN_00d48444(StringLiteral_12093);
    thunk_FUN_00d48444(
                      Method_UnityEngine_ProBuilder_MeshOperations_CombineMeshes_<>c_<SplitByMaxVertexCount>b__5_0__
                      );
    thunk_FUN_00d48444(
                      Method_Oculus_Interaction_InteractableRegistry_InteractableSet<HandGrabUseInteractor,_HandGrabUseInteractable>_GetEnumerator__
                      );
    thunk_FUN_00d48444(Method_System_Span<char>_op_Implicit__);
    thunk_FUN_00d48444(StringLiteral_10270);
    thunk_FUN_00d48444(
                      Field_<PrivateImplementationDetails>_FADB218011E7702BB9575D0C32A685DA10B5C72EB809BD9A955DB1C76E4D8315
                      );
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<ManifestEntity>__ctor__);
    DAT_03780519 = 1;
  }
  lVar8 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
  puVar3 = StringLiteral_5013;
  if (lVar8 != 0) {
    FUN_0173d27c(lVar8,0);
    *(long *)(param_1 + 0x18) = lVar8;
    lVar8 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
    puVar4 = StringLiteral_12093;
    puVar3 = 
    Method_GoogleSheetsToUnity_SpreadsheetManager_<Read>d__2_System_Collections_IEnumerator_Reset__;
    if (lVar8 != 0) {
      FUN_0173d27c(lVar8,0);
      *(long *)(param_1 + 0x28) = lVar8;
      lVar8 = *(long *)puVar3;
      if (*(int *)(lVar8 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar8 = *(long *)puVar3;
      }
      *(undefined8 *)(param_1 + 0x40) = **(undefined8 **)(lVar8 + 0xb8);
      lVar8 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
      if (lVar8 != 0) {
        FUN_0173d27c(lVar8,0);
        *(long *)(param_1 + 0x48) = lVar8;
        FUN_017b46ec(param_1,0);
        if (param_2 != (long *)0x0) {
          lVar8 = *param_2;
          uVar14 = (ulong)*(ushort *)(lVar8 + 0x12a);
          if (uVar14 != 0) {
            piVar16 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) ==
                  *(long *)Method_System_Collections_Generic_List<Vector4>__ctor__) {
                puVar9 = (undefined8 *)(lVar8 + (long)*piVar16 * 0x10 + 0x138);
                goto LAB_01f83ac4;
              }
              uVar14 = uVar14 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar14 != 0);
          }
          puVar9 = (undefined8 *)
                   FUN_00d59724(param_2,*(long *)
                                         Method_System_Collections_Generic_List<Vector4>__ctor__,0);
LAB_01f83ac4:
          lVar8 = (*(code *)*puVar9)(param_2,0,puVar9[1]);
          puVar7 = Method_UnityEngine_Playables_PlayableExtensions_SetInputCount<Playable>__;
          puVar6 = Method_UnityEngine_Rendering_UI_DebugUIHandlerBitField_SetValue__;
          puVar5 = Method_System_Collections_Generic_List<AudioClip>__ctor__;
          puVar4 = Meta_WitAi_Events_WitRequestOptionsEvent_TypeInfo;
          puVar3 = System_Reflection_MethodBase___TypeInfo;
          if (lVar8 != 0) {
            if (0 < (int)*(ulong *)(lVar8 + 0x18)) {
              uVar14 = 0;
              uVar12 = *(ulong *)(lVar8 + 0x18) & 0xffffffff;
              do {
                if (uVar12 <= uVar14) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da5194();
                }
                plVar11 = *(long **)(lVar8 + 0x20 + uVar14 * 8);
                if (plVar11 == (long *)0x0) goto LAB_01f83e50;
                lVar15 = *plVar11;
                lVar13 = *(long *)puVar3;
                bVar1 = *(byte *)(lVar15 + 300);
                uVar12 = (ulong)*(byte *)(lVar13 + 300);
                if ((*(byte *)(lVar13 + 300) <= bVar1) &&
                   (lVar17 = uVar12 - 1, *(long *)(*(long *)(lVar15 + 200) + lVar17 * 8) == lVar13))
                {
                  *(long **)(param_1 + 0x10) = plVar11;
                  goto LAB_01f83e30;
                }
                bVar2 = *(byte *)(*(long *)puVar5 + 300);
                if ((bVar2 <= bVar1) &&
                   (*(long *)(*(long *)(lVar15 + 200) + (ulong)bVar2 * 8 + -8) == *(long *)puVar5))
                {
                  if (*(long *)(param_1 + 0x18) != 0) {
                    FUN_01f82684();
                    goto LAB_01f83e50;
                  }
                  goto LAB_01f83ee4;
                }
                lVar13 = *(long *)puVar4;
                uVar12 = (ulong)*(byte *)(lVar13 + 300);
                if ((*(byte *)(lVar13 + 300) <= bVar1) &&
                   (lVar17 = uVar12 - 1, *(long *)(*(long *)(lVar15 + 200) + lVar17 * 8) == lVar13))
                {
                  *(long **)(param_1 + 0x20) = plVar11;
                  goto LAB_01f83e30;
                }
                bVar2 = *(byte *)(*(long *)puVar6 + 300);
                if ((bVar2 <= bVar1) &&
                   (*(long *)(*(long *)(lVar15 + 200) + (ulong)bVar2 * 8 + -8) == *(long *)puVar6))
                {
                  if (*(long *)(param_1 + 0x28) != 0) {
                    FUN_01f82fac();
                    goto LAB_01f83e50;
                  }
                  goto LAB_01f83ee4;
                }
                lVar13 = *(long *)puVar7;
                uVar12 = (ulong)*(byte *)(lVar13 + 300);
                if ((bVar1 < *(byte *)(lVar13 + 300)) ||
                   (lVar17 = uVar12 - 1, *(long *)(*(long *)(lVar15 + 200) + lVar17 * 8) != lVar13))
                {
                  lVar13 = *(long *)StringLiteral_7931;
                  uVar12 = (ulong)*(byte *)(lVar13 + 300);
                  if ((*(byte *)(lVar13 + 300) <= bVar1) &&
                     (lVar17 = uVar12 - 1, *(long *)(*(long *)(lVar15 + 200) + lVar17 * 8) == lVar13
                     )) {
                    *(long **)(param_1 + 0x38) = plVar11;
                    goto LAB_01f83e30;
                  }
                  bVar2 = *(byte *)(*(long *)System_Xml_Base64Decoder_TypeInfo + 300);
                  if ((bVar1 < bVar2) ||
                     (*(long *)(*(long *)(lVar15 + 200) + (ulong)bVar2 * 8 + -8) !=
                      *(long *)System_Xml_Base64Decoder_TypeInfo)) {
                    bVar2 = *(byte *)(*(long *)StringLiteral_2669 + 300);
                    if ((bVar1 < bVar2) ||
                       (*(long *)(*(long *)(lVar15 + 200) + (ulong)bVar2 * 8 + -8) !=
                        *(long *)StringLiteral_2669)) {
                      lVar13 = *(long *)
                                Method_UnityEngine_ProBuilder_MeshOperations_CombineMeshes_<>c_<SplitByMaxVertexCount>b__5_0__
                      ;
                      uVar12 = (ulong)*(byte *)(lVar13 + 300);
                      if ((*(byte *)(lVar13 + 300) <= bVar1) &&
                         (lVar17 = uVar12 - 1,
                         *(long *)(*(long *)(lVar15 + 200) + lVar17 * 8) == lVar13)) {
                        *(long **)(param_1 + 0x50) = plVar11;
                        goto LAB_01f83e30;
                      }
                      bVar2 = *(byte *)(*(long *)
                                         Method_Oculus_Interaction_InteractableRegistry_InteractableSet<HandGrabUseInteractor,_HandGrabUseInteractable>_GetEnumerator__
                                       + 300);
                      if ((bVar2 <= bVar1) &&
                         (*(long *)(*(long *)(lVar15 + 200) + (ulong)bVar2 * 8 + -8) ==
                          *(long *)
                           Method_Oculus_Interaction_InteractableRegistry_InteractableSet<HandGrabUseInteractor,_HandGrabUseInteractable>_GetEnumerator__
                         )) {
                        *(undefined1 *)(param_1 + 0x58) = 1;
                        goto LAB_01f83e50;
                      }
                      bVar2 = *(byte *)(*(long *)Method_System_Span<char>_op_Implicit__ + 300);
                      if ((bVar2 <= bVar1) &&
                         (*(long *)(*(long *)(lVar15 + 200) + (ulong)bVar2 * 8 + -8) ==
                          *(long *)Method_System_Span<char>_op_Implicit__)) {
                        *(undefined1 *)(param_1 + 0x59) = 1;
                        goto LAB_01f83e50;
                      }
                      lVar13 = *(long *)StringLiteral_10270;
                      uVar12 = (ulong)*(byte *)(lVar13 + 300);
                      if ((*(byte *)(lVar13 + 300) <= bVar1) &&
                         (lVar17 = uVar12 - 1,
                         *(long *)(*(long *)(lVar15 + 200) + lVar17 * 8) == lVar13)) {
                        *(long *)(param_1 + 0x60) = (long)plVar11;
                        goto LAB_01f83e30;
                      }
                      lVar13 = *(long *)
                                Field_<PrivateImplementationDetails>_FADB218011E7702BB9575D0C32A685DA10B5C72EB809BD9A955DB1C76E4D8315
                      ;
                      uVar12 = (ulong)*(byte *)(lVar13 + 300);
                      if ((*(byte *)(lVar13 + 300) <= bVar1) &&
                         (lVar17 = uVar12 - 1,
                         *(long *)(*(long *)(lVar15 + 200) + lVar17 * 8) == lVar13)) {
                        *(long **)(param_1 + 0x68) = plVar11;
                        goto LAB_01f83e30;
                      }
                      lVar13 = *(long *)
                                Method_System_Collections_Generic_List<ManifestEntity>__ctor__;
                      bVar2 = *(byte *)(lVar13 + 300);
                      if ((bVar1 < bVar2) ||
                         (*(long *)(*(long *)(lVar15 + 200) + ((ulong)bVar2 - 1) * 8) != lVar13))
                      goto LAB_01f83e50;
                      *(long **)(param_1 + 0x70) = plVar11;
                      if (*(byte *)(*plVar11 + 300) < bVar2) goto LAB_01f83ed8;
                      lVar15 = *(long *)(*(long *)(*plVar11 + 200) + ((ulong)bVar2 - 1) * 8);
                      goto LAB_01f83e48;
                    }
                    if (*(long *)(param_1 + 0x48) != 0) {
                      FUN_01f83ee8();
                      goto LAB_01f83e50;
                    }
                    goto LAB_01f83ee4;
                  }
                  uVar10 = (**(code **)(lVar15 + 0x1a8))(plVar11,*(undefined8 *)(lVar15 + 0x1b0));
                  *(undefined8 *)(param_1 + 0x40) = uVar10;
                }
                else {
                  *(long *)(param_1 + 0x30) = (long)plVar11;
LAB_01f83e30:
                  if ((uint)*(byte *)(*plVar11 + 300) < (uint)uVar12) goto LAB_01f83ed8;
                  lVar15 = *(long *)(*(long *)(*plVar11 + 200) + lVar17 * 8);
LAB_01f83e48:
                  if (lVar15 != lVar13) {
LAB_01f83ed8:
                    /* WARNING: Subroutine does not return */
                    FUN_00da544c(plVar11,lVar13);
                  }
                }
LAB_01f83e50:
                uVar12 = (ulong)*(uint *)(lVar8 + 0x18);
                uVar14 = uVar14 + 1;
              } while ((long)uVar14 < (long)(int)*(uint *)(lVar8 + 0x18));
            }
            if (*(char *)(param_1 + 0x58) == '\0') {
              return;
            }
            *(undefined8 *)(param_1 + 0x10) = 0;
            if (*(long *)(param_1 + 0x18) != 0) {
              FUN_0173d318(*(long *)(param_1 + 0x18),0);
              *(undefined8 *)(param_1 + 0x20) = 0;
              if (*(long *)(param_1 + 0x28) != 0) {
                FUN_0173d318(*(long *)(param_1 + 0x28),0);
                *(long *)(param_1 + 0x30) = 0;
                *(undefined8 *)(param_1 + 0x38) = 0;
                *(undefined8 *)(param_1 + 0x40) = 0;
                if (*(long *)(param_1 + 0x48) != 0) {
                  FUN_0173d318(*(long *)(param_1 + 0x48),0);
                  *(undefined8 *)(param_1 + 0x50) = 0;
                  *(undefined1 *)(param_1 + 0x59) = 0;
                  *(long *)(param_1 + 0x60) = 0;
                  *(undefined8 *)(param_1 + 0x68) = 0;
                  *(undefined8 *)(param_1 + 0x70) = 0;
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_01f83ee4:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


