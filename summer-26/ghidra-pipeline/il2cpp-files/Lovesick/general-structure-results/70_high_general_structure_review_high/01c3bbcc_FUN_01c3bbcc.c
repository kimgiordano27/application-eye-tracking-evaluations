/*
FUNCTION_NAME: FUN_01c3bbcc
ENTRY_POINT: 01c3bbcc
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ray_interaction;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_4;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;negative_generic_transform_raycast_without_eye_source_or_attempt;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x01c3c1ac) */
/* WARNING: Removing unreachable block (ram,0x01c3c198) */
/* WARNING: Removing unreachable block (ram,0x01c3c1c0) */

long * FUN_01c3bbcc(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  int *piVar13;
  undefined8 uVar14;
  undefined8 local_58;
  long *local_48;
  
  if ((DAT_0377ea91 & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_13219);
    thunk_FUN_00d48444(Method_System_Reflection_Emit_EnumBuilder_IsDefined__);
    thunk_FUN_00d48444(Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<NamedValue>__ctor__);
    thunk_FUN_00d48444(PTR_DAT_033f5b68);
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<int,_object>_Add__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<Controller>_Remove__);
    thunk_FUN_00d48444(StringLiteral_7891);
    thunk_FUN_00d48444(Autohand_HandDistanceGrabber_<StartCatchAssist>d__62_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_10310);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<DebugUI_Widget>__ctor__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<ulong,_OVRSpatialAnchor>_Clear__
                      );
    thunk_FUN_00d48444(
                      Method_UnityEngine_UIElements_StylePropertyAnimationSystem_GetOrCreate<StylePropertyAnimationSystem_ValuesTranslate>__
                      );
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List_Enumerator<AnimationMultiSfxPlayer_Mapping>_Dispose__
                      );
    thunk_FUN_00d48444(Method_Meta_WitAi_UnityEventExtensions_SetListener<WitRequest>__);
    thunk_FUN_00d48444(StringLiteral_5027);
    thunk_FUN_00d48444(System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo)
    ;
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<Collider>_Clear__);
    thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
    DAT_0377ea91 = 1;
  }
  local_58 = 0;
  if ((param_1 != (long *)0x0) &&
     (*param_1 !=
      *(long *)System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo)) {
    lVar4 = thunk_FUN_00d93c64(param_1,0);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    uVar5 = FUN_0178be4c(lVar4,0);
    puVar3 = Method_TMPro_TMP_TextProcessingStack<float>__ctor__;
    puVar1 = Method_System_Collections_Generic_List<Collider>_Clear__;
    if ((uVar5 & 1) == 0) {
      uVar14 = *(undefined8 *)
                Method_UnityEngine_UIElements_StylePropertyAnimationSystem_GetOrCreate<StylePropertyAnimationSystem_ValuesTranslate>__
      ;
      if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar14 = FUN_01780344(uVar14,0);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar1);
      }
      uVar5 = FUN_01c60be0(lVar4,uVar14,0);
      if ((uVar5 & 1) == 0) {
        uVar14 = *(undefined8 *)Method_System_Collections_Generic_List<DebugUI_Widget>__ctor__;
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar14 = FUN_01780344(uVar14,0);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)puVar1);
        }
        uVar5 = FUN_01c60be0(lVar4,uVar14,0);
        if ((uVar5 & 1) == 0) {
          uVar14 = *(undefined8 *)StringLiteral_13219;
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar14 = FUN_01780344(uVar14,0);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_00d32864(*(long *)puVar1);
          }
          uVar5 = FUN_01c60be0(lVar4,uVar14,0);
          if ((uVar5 & 1) == 0) {
            uVar14 = *(undefined8 *)
                      Method_System_Collections_Generic_Dictionary<ulong,_OVRSpatialAnchor>_Clear__;
            if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar14 = FUN_01780344(uVar14,0);
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_00d32864(*(long *)puVar1);
            }
            uVar5 = FUN_01c60be0(lVar4,uVar14,0);
            puVar1 = StringLiteral_7891;
            if ((uVar5 & 1) == 0) {
              if (*(int *)(*(long *)Autohand_HandDistanceGrabber_<StartCatchAssist>d__62_TypeInfo +
                          0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              puVar3 = StringLiteral_10310;
              plVar6 = (long *)FUN_01c2ab54(0);
              lVar4 = *(long *)puVar1;
              if (*(int *)(lVar4 + 0xe0) == 0) {
                thunk_FUN_00d32864(lVar4);
              }
              plVar7 = (long *)FUN_01254790(*(undefined8 *)
                                             Method_System_Reflection_Emit_EnumBuilder_IsDefined__);
              puVar2 = Method_System_Collections_Generic_List<Controller>_Remove__;
              if (*(int *)(*(long *)Method_System_Collections_Generic_List<Controller>_Remove__ +
                          0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              plVar8 = (long *)FUN_01254790(*(undefined8 *)
                                             Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<NamedValue>__ctor__
                                           );
              if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              if (plVar7[3] == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              lVar4 = FUN_01c261dc();
              if (*(int *)(*(long *)
                            Method_System_Collections_Generic_List_Enumerator<AnimationMultiSfxPlayer_Mapping>_Dispose__
                          + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              uVar14 = FUN_01c32b68();
              if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c(uVar14,uVar14);
              }
              FUN_01c37e70(lVar4);
              if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              if (plVar8[3] == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              lVar4 = FUN_01c25128();
              uVar14 = FUN_01c32b68();
              if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c(uVar14,uVar14);
              }
              FUN_01c37e70(lVar4);
              if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              if (plVar6[3] == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              uVar14 = FUN_01c2a7ec();
              if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              uVar9 = FUN_01255044(plVar7,*(undefined8 *)
                                           Method_System_Collections_Generic_Dictionary<int,_object>_Add__
                                  );
              FUN_0113ec44(param_1,uVar14,0,&local_58,uVar9,*(undefined8 *)StringLiteral_5027);
              if (plVar6[3] == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              plVar10 = (long *)FUN_01c2a7ec();
              if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              (**(code **)(*plVar10 + 0x208))(plVar10,0,*(undefined8 *)(*plVar10 + 0x210));
              if (plVar6[3] == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              uVar9 = FUN_01c2a7ec();
              uVar14 = local_58;
              if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              uVar11 = FUN_01255044(plVar8,*(undefined8 *)PTR_DAT_033f5b68);
              FUN_0113d1f0(uVar9,0,uVar14,uVar11,&local_48,
                           *(undefined8 *)
                            Method_Meta_WitAi_UnityEventExtensions_SetListener<WitRequest>__);
              lVar4 = *plVar8;
              uVar5 = (ulong)*(ushort *)(lVar4 + 0x12a);
              if (uVar5 != 0) {
                piVar13 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar13 + -2) == *(long *)puVar3) {
                    puVar12 = (undefined8 *)(lVar4 + (long)*piVar13 * 0x10 + 0x138);
                    goto LAB_01c3c094;
                  }
                  uVar5 = uVar5 - 1;
                  piVar13 = piVar13 + 4;
                } while (uVar5 != 0);
              }
              puVar12 = (undefined8 *)FUN_00d59724(plVar8,*(long *)puVar3,0);
LAB_01c3c094:
              (*(code *)*puVar12)(plVar8,puVar12[1]);
              if (plVar7 != (long *)0x0) {
                lVar4 = *plVar7;
                uVar5 = (ulong)*(ushort *)(lVar4 + 0x12a);
                if (uVar5 != 0) {
                  piVar13 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar13 + -2) == *(long *)puVar3) {
                      puVar12 = (undefined8 *)(lVar4 + (long)*piVar13 * 0x10 + 0x138);
                      goto LAB_01c3c0f8;
                    }
                    uVar5 = uVar5 - 1;
                    piVar13 = piVar13 + 4;
                  } while (uVar5 != 0);
                }
                puVar12 = (undefined8 *)FUN_00d59724(plVar7,*(long *)puVar3,0);
LAB_01c3c0f8:
                (*(code *)*puVar12)(plVar7,puVar12[1]);
              }
              param_1 = local_48;
              if (plVar6 != (long *)0x0) {
                lVar4 = *plVar6;
                uVar5 = (ulong)*(ushort *)(lVar4 + 0x12a);
                if (uVar5 != 0) {
                  piVar13 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar13 + -2) == *(long *)puVar3) {
                      puVar12 = (undefined8 *)(lVar4 + (long)*piVar13 * 0x10 + 0x138);
                      goto LAB_01c3c15c;
                    }
                    uVar5 = uVar5 - 1;
                    piVar13 = piVar13 + 4;
                  } while (uVar5 != 0);
                }
                puVar12 = (undefined8 *)FUN_00d59724(plVar6,*(long *)puVar3,0);
LAB_01c3c15c:
                (*(code *)*puVar12)(plVar6,puVar12[1]);
              }
            }
          }
        }
      }
    }
  }
  return param_1;
}


