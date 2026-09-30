/*
FUNCTION_NAME: FUN_03709518
ENTRY_POINT: 03709518
PROGRAM: gunraiders-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_21;ui_or_gameplay_sink_hits_6;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x0370a900) */
/* WARNING: Removing unreachable block (ram,0x0370a9cc) */
/* WARNING: Removing unreachable block (ram,0x03709d30) */
/* WARNING: Removing unreachable block (ram,0x0370a6d4) */
/* WARNING: Removing unreachable block (ram,0x0370a988) */

void FUN_03709518(long param_1,long param_2,undefined8 param_3)

{
  byte bVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined8 *puVar13;
  long *plVar14;
  long lVar15;
  undefined8 uVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  ulong uVar20;
  int *piVar21;
  undefined8 uVar22;
  long *plVar23;
  undefined8 local_68;
  
  if ((DAT_045388bf & 1) == 0) {
    FUN_01c5d288(PTR_DAT_0422fb50);
    FUN_01c5d288(PTR_DAT_042305b0);
    FUN_01c5d288(Michsky_UI_ModernUIPack_SliderManager_SliderEvent_TypeInfo);
    FUN_01c5d288(Method_System_Lazy<VolumeManager>_get_Value__);
    FUN_01c5d288(Method_System_Security_Cryptography_CryptoConfig_AddOID__);
    FUN_01c5d288(Method_System_Reflection_CustomAttributeTypedArgument__ctor__);
    FUN_01c5d288(
                Method_System_Collections_Generic_List_Enumerator<VolumeAndPlaneSwitcher_LabelGeometryPair>_MoveNext__
                );
    FUN_01c5d288(PTR_DAT_0422fce8);
    FUN_01c5d288(PTR_DAT_04230960);
    FUN_01c5d288(Method_System_Threading_ExecutionContext_GetObjectData__);
    FUN_01c5d288(PTR_DAT_0422fbe0);
    FUN_01c5d288(
                UnityEngine_Experimental_Rendering_Universal_RenderObjects_RenderObjectsSettings_TypeInfo
                );
    FUN_01c5d288(PTR_DAT_0422fb28);
    FUN_01c5d288(Method_System_Linq_Enumerable_ToArray<Vector4>__);
    FUN_01c5d288(
                Method_UnityEngine_Rendering_ObjectPool_PooledObject<List<DebugUI_Widget>>_System_IDisposable_Dispose__
                );
    FUN_01c5d288(PTR_DAT_0423a830);
    FUN_01c5d288(
                Method_DarkTonic_MasterAudio_EventSounds_AddUGUIHandler<EventSoundsUpdateSelectedHandler>__
                );
    FUN_01c5d288(Method_System_Linq_Enumerable_ToArray<string>__);
    FUN_01c5d288(Method_System_Linq_Enumerable_ToArray<Vertex>__);
    FUN_01c5d288(Method_System_Security_Cryptography_DSA_FromXmlString__);
    FUN_01c5d288(Method_System_Threading_ExecutionContext_Run__);
    FUN_01c5d288(Method_System_Threading_EventWaitHandle__ctor__);
    FUN_01c5d288(Method_System_DBNull_System_IConvertible_ToSingle__);
    FUN_01c5d288(Method_System_Linq_Enumerable_ToArray<Volume>__);
    FUN_01c5d288(
                Method_System_Dynamic_ExpandoObject_System_Collections_Generic_IDictionary<System_String,System_Object>_get_Item__
                );
    FUN_01c5d288(System_Func<Scale,_Scale,_bool>_TypeInfo);
    FUN_01c5d288(UnityEngine_Rendering_Volume___TypeInfo);
    FUN_01c5d288(Method_System_Dynamic_ExpandoObject_TryGetValue__);
    FUN_01c5d288(Method_System_Linq_Enumerable_Select<ResourceLocatorInfo,_string>__);
    FUN_01c5d288(PTR_DAT_042341c8);
    FUN_01c5d288(Method_System_Threading_EventWaitHandle_Set__);
    FUN_01c5d288(Method_UnityEngine_EventSystems_ExecuteEvents_Execute<IMoveHandler>__);
    FUN_01c5d288(InventoryManager_InventoryType_TypeInfo);
    FUN_01c5d288(PTR_DAT_04230f30);
    FUN_01c5d288(Method_System_Collections_Generic_List<PuppetMaster>__ctor__);
    FUN_01c5d288(
                VoxelBusters_EssentialKit_GameServicesCore_Android_NativeLoadLocalPlayerScoreListener_TypeInfo
                );
    FUN_01c5d288(UnityEngine_Events_InvokableCall_TypeInfo);
    FUN_01c5d288(Method_System_Linq_Enumerable_ToArray<SplinePathRef_SliceRef>__);
    FUN_01c5d288(Method_UnityEngine_EventSystems_ExecuteEvents_Execute__);
    FUN_01c5d288(Method_System_Linq_Enumerable_ToList<float>__);
    DAT_045388bf = 1;
  }
  local_68 = 0;
  if (((param_2 != 0) && (*(long *)(param_2 + 0x10) != 0)) &&
     (lVar9 = FUN_03669568(*(long *)(param_2 + 0x10),0), lVar9 != 0)) {
    lVar10 = *(long *)(param_2 + 0x10);
    if (*(int *)(lVar9 + 0x10) == 0) {
      puVar13 = (undefined8 *)PTR_DAT_04230f30;
      if (lVar10 == 0) goto LAB_0370a964;
    }
    else {
      if (lVar10 == 0) goto LAB_0370a964;
      puVar13 = (undefined8 *)(lVar10 + 0xa0);
    }
    uVar22 = *puVar13;
    plVar19 = (long *)(param_1 + 0x10);
    plVar23 = (long *)*plVar19;
    uVar11 = FUN_03669568(lVar10,0);
    if (plVar23 != (long *)0x0) {
      (**(code **)(*plVar23 + 0x1c8))
                (plVar23,uVar22,param_3,uVar11,*(undefined8 *)(*plVar23 + 0x1d0));
      if (*(char *)(param_1 + 0x39) != '\0') {
        if (*(long *)(param_2 + 0x10) == 0) goto LAB_0370a964;
        local_68 = *(undefined8 *)(param_2 + 0x30);
        uVar11 = *(undefined8 *)(*(long *)(param_2 + 0x10) + 0x90);
        lVar9 = *plVar19;
        if (*(int *)(*(long *)PTR_DAT_042305b0 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        uVar22 = FUN_03295500(0);
        uVar22 = FUN_032d073c(&local_68,uVar22,0);
        uVar11 = FUN_03146988(uVar11,uVar22,0);
        puVar6 = Method_UnityEngine_EventSystems_ExecuteEvents_Execute__;
        puVar5 = Method_System_DBNull_System_IConvertible_ToSingle__;
        if (lVar9 == 0) goto LAB_0370a964;
        FUN_03865e10(lVar9,*(undefined8 *)Method_UnityEngine_EventSystems_ExecuteEvents_Execute__,
                     *(undefined8 *)System_Func<Scale,_Scale,_bool>_TypeInfo,
                     *(undefined8 *)Method_System_DBNull_System_IConvertible_ToSingle__,uVar11,0);
        plVar23 = *(long **)(param_1 + 0x40);
        if (plVar23 == (long *)0x0) goto LAB_0370a964;
        lVar9 = *(long *)(param_1 + 0x10);
        plVar23 = (long *)(**(code **)(*plVar23 + 0x308))
                                    (plVar23,param_2,*(undefined8 *)(*plVar23 + 0x310));
        if ((plVar23 == (long *)0x0) ||
           (uVar11 = (**(code **)(*plVar23 + 0x168))(plVar23,*(undefined8 *)(*plVar23 + 0x170)),
           lVar9 == 0)) goto LAB_0370a964;
        FUN_03865e10(lVar9,*(undefined8 *)Method_System_Linq_Enumerable_ToList<float>__,
                     *(undefined8 *)Method_System_Linq_Enumerable_ToArray<Vertex>__,
                     *(undefined8 *)Method_System_Security_Cryptography_DSA_FromXmlString__,uVar11,0
                    );
        iVar8 = FUN_036aec94(param_2,0);
        if (iVar8 == 4) {
          if (*plVar19 == 0) goto LAB_0370a964;
          FUN_03865e10(*plVar19,*(undefined8 *)puVar6,
                       *(undefined8 *)Method_System_Threading_EventWaitHandle__ctor__,
                       *(undefined8 *)puVar5,
                       *(undefined8 *)Method_System_Dynamic_ExpandoObject_TryGetValue__,0);
        }
        iVar8 = FUN_036aec94(param_2,0);
        if (iVar8 == 0x10) {
          if (*plVar19 == 0) goto LAB_0370a964;
          FUN_03865e10(*plVar19,*(undefined8 *)puVar6,
                       *(undefined8 *)Method_System_Threading_EventWaitHandle__ctor__,
                       *(undefined8 *)puVar5,
                       *(undefined8 *)Method_System_Threading_EventWaitHandle_Set__,0);
        }
        uVar12 = FUN_03708320(param_2);
        if ((uVar12 & 1) != 0) {
          if (*plVar19 == 0) goto LAB_0370a964;
          FUN_03865e10(*plVar19,*(undefined8 *)puVar6,
                       *(undefined8 *)Method_System_Linq_Enumerable_ToArray<string>__,
                       *(undefined8 *)puVar5,*(undefined8 *)PTR_DAT_042341c8,0);
        }
      }
      if ((*(long *)(param_2 + 0x10) != 0) &&
         (plVar23 = *(long **)(*(long *)(param_2 + 0x10) + 0x40), plVar23 != (long *)0x0)) {
        plVar23 = (long *)(**(code **)(*plVar23 + 0x1e8))(plVar23,*(undefined8 *)(*plVar23 + 0x1f0))
        ;
        puVar7 = Method_System_Lazy<VolumeManager>_get_Value__;
        puVar6 = Michsky_UI_ModernUIPack_SliderManager_SliderEvent_TypeInfo;
        puVar5 = PTR_DAT_04230960;
        if (plVar23 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
LAB_037099c0:
        do {
          do {
            lVar10 = *plVar23;
            lVar9 = *(long *)puVar5;
            uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar12 != 0) {
              piVar21 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar21 + -2) == lVar9) {
                  puVar13 = (undefined8 *)(lVar10 + (long)*piVar21 * 0x10 + 0x138);
                  goto LAB_03709a0c;
                }
                uVar12 = uVar12 - 1;
                piVar21 = piVar21 + 4;
              } while (uVar12 != 0);
            }
            puVar13 = (undefined8 *)FUN_01c72498(plVar23,lVar9,0);
LAB_03709a0c:
            uVar12 = (*(code *)*puVar13)(plVar23,puVar13[1]);
            puVar3 = PTR_DAT_0422fce8;
            if ((uVar12 & 1) == 0) {
              plVar23 = (long *)thunk_FUN_01c495e4(plVar23,*(undefined8 *)PTR_DAT_0422fce8);
              if (plVar23 == (long *)0x0) goto LAB_03709d24;
              lVar9 = *plVar23;
              uVar12 = (ulong)*(ushort *)(lVar9 + 0x12e);
              if (uVar12 == 0) goto LAB_03709cfc;
              piVar21 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              goto LAB_03709ce4;
            }
            lVar10 = *plVar23;
            lVar9 = *(long *)puVar5;
            uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar12 != 0) {
              piVar21 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar21 + -2) == lVar9) {
                  puVar13 = (undefined8 *)(lVar10 + (long)(*piVar21 + 1) * 0x10 + 0x138);
                  goto LAB_03709a6c;
                }
                uVar12 = uVar12 - 1;
                piVar21 = piVar21 + 4;
              } while (uVar12 != 0);
            }
            puVar13 = (undefined8 *)FUN_01c72498(plVar23,lVar9,1);
LAB_03709a6c:
            plVar14 = (long *)(*(code *)*puVar13)(plVar23,puVar13[1]);
            if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01c5d4a4();
            }
            bVar1 = *(byte *)(*(long *)puVar7 + 0x130);
            if ((*(byte *)(*plVar14 + 0x130) < bVar1) ||
               (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar7)) {
                    /* WARNING: Subroutine does not return */
              FUN_01c5d748(plVar14);
            }
            if (*(int *)((long)plVar14 + 0x84) == 2) {
              lVar9 = FUN_036aee7c(param_2,plVar14,0);
              lVar10 = FUN_03684aec(plVar14,0);
              if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01c5d4a4();
              }
              lVar15 = *(long *)puVar6;
              plVar17 = (long *)PTR_DAT_04230f30;
              if (*(int *)(lVar10 + 0x10) != 0) {
                plVar17 = plVar14 + 0x18;
              }
              lVar10 = *plVar17;
              if (*(int *)(lVar15 + 0xe0) == 0) {
                thunk_FUN_01c1d1e8();
                lVar15 = *(long *)puVar6;
              }
              if (lVar9 != **(long **)(lVar15 + 0xb8)) {
                if (*(char *)((long)plVar14 + 0x91) != '\0') {
                  if (*(int *)(*(long *)
                                Method_System_Reflection_CustomAttributeTypedArgument__ctor__ + 0xe0
                              ) == 0) {
                    thunk_FUN_01c1d1e8();
                  }
                  uVar12 = FUN_037308e4(lVar9,0);
                  if ((uVar12 & 1) != 0) goto LAB_03709bac;
                }
                FUN_036fb6d8(plVar14[7]);
                lVar15 = *plVar19;
                uVar11 = FUN_03682ebc(plVar14,0);
                uVar22 = FUN_03684aec(plVar14,0);
                uVar16 = FUN_036831c8(plVar14,lVar9,0);
                if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01c5d4a4();
                }
                FUN_03865e10(lVar15,lVar10,uVar11,uVar22,uVar16,0);
              }
            }
LAB_03709bac:
          } while ((*(char *)(param_1 + 0x39) == '\0') || (*(int *)((long)plVar14 + 0x84) != 4));
          lVar9 = FUN_036aee7c(param_2,plVar14,0);
          lVar10 = *(long *)puVar6;
          if (*(int *)(lVar10 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
            lVar10 = *(long *)puVar6;
          }
        } while (lVar9 == **(long **)(lVar10 + 0xb8));
        if (*(char *)((long)plVar14 + 0x91) != '\0') {
          if (*(int *)(*(long *)Method_System_Reflection_CustomAttributeTypedArgument__ctor__ + 0xe0
                      ) == 0) {
            thunk_FUN_01c1d1e8();
          }
          uVar12 = FUN_037308e4(lVar9,0);
          if ((uVar12 & 1) != 0) goto LAB_037099c0;
        }
        FUN_036fb6d8(plVar14[7]);
        lVar10 = *plVar19;
        uVar11 = FUN_03682ebc(plVar14,0);
        uVar11 = FUN_03146988(*(undefined8 *)
                               Method_UnityEngine_Rendering_ObjectPool_PooledObject<List<DebugUI_Widget>>_System_IDisposable_Dispose__
                              ,uVar11,0);
        uVar22 = FUN_036831c8(plVar14,lVar9,0);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        FUN_03865e10(lVar10,*(undefined8 *)Method_System_Linq_Enumerable_ToList<float>__,uVar11,
                     *(undefined8 *)Method_System_Security_Cryptography_DSA_FromXmlString__,uVar22,0
                    );
        goto LAB_037099c0;
      }
    }
  }
  goto LAB_0370a964;
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar21 = piVar21 + 4;
    if (uVar12 == 0) break;
LAB_03709ce4:
    if (*(long *)(piVar21 + -2) == *(long *)puVar3) {
      puVar13 = (undefined8 *)(lVar9 + (long)*piVar21 * 0x10 + 0x138);
      goto LAB_03709d18;
    }
  }
LAB_03709cfc:
  puVar13 = (undefined8 *)FUN_01c72498(plVar23,*(long *)puVar3,0);
LAB_03709d18:
  (*(code *)*puVar13)(plVar23,puVar13[1]);
LAB_03709d24:
  if ((*(long *)(param_2 + 0x10) != 0) &&
     (plVar23 = *(long **)(*(long *)(param_2 + 0x10) + 0x40), plVar23 != (long *)0x0)) {
    plVar23 = (long *)(**(code **)(*plVar23 + 0x1e8))(plVar23,*(undefined8 *)(*plVar23 + 0x1f0));
    puVar3 = Method_System_Lazy<VolumeManager>_get_Value__;
    puVar7 = Michsky_UI_ModernUIPack_SliderManager_SliderEvent_TypeInfo;
    puVar6 = PTR_DAT_04230f30;
    puVar5 = PTR_DAT_04230960;
    if (plVar23 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
LAB_03709d78:
    do {
      do {
        lVar10 = *plVar23;
        lVar9 = *(long *)puVar5;
        uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar12 != 0) {
          piVar21 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar21 + -2) == lVar9) {
              puVar13 = (undefined8 *)(lVar10 + (long)*piVar21 * 0x10 + 0x138);
              goto LAB_03709dc4;
            }
            uVar12 = uVar12 - 1;
            piVar21 = piVar21 + 4;
          } while (uVar12 != 0);
        }
        puVar13 = (undefined8 *)FUN_01c72498(plVar23,lVar9,0);
LAB_03709dc4:
        uVar12 = (*(code *)*puVar13)(plVar23,puVar13[1]);
        puVar4 = PTR_DAT_0422fce8;
        if ((uVar12 & 1) == 0) {
          plVar23 = (long *)thunk_FUN_01c495e4(plVar23,*(undefined8 *)PTR_DAT_0422fce8);
          uVar11 = 0;
          if (plVar23 == (long *)0x0) goto LAB_0370a6c8;
          lVar9 = *plVar23;
          uVar12 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar12 == 0) goto LAB_0370a6a0;
          piVar21 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          goto LAB_0370a688;
        }
        lVar10 = *plVar23;
        lVar9 = *(long *)puVar5;
        uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar12 != 0) {
          piVar21 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar21 + -2) == lVar9) {
              puVar13 = (undefined8 *)(lVar10 + (long)(*piVar21 + 1) * 0x10 + 0x138);
              goto LAB_03709e24;
            }
            uVar12 = uVar12 - 1;
            piVar21 = piVar21 + 4;
          } while (uVar12 != 0);
        }
        puVar13 = (undefined8 *)FUN_01c72498(plVar23,lVar9,1);
LAB_03709e24:
        plVar14 = (long *)(*(code *)*puVar13)(plVar23,puVar13[1]);
        if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        bVar1 = *(byte *)(*(long *)puVar3 + 0x130);
        if ((*(byte *)(*plVar14 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar3)) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d748(plVar14);
        }
      } while (*(int *)((long)plVar14 + 0x84) == 4);
      plVar17 = (long *)FUN_036aee7c(param_2,plVar14,0);
      lVar9 = FUN_03684aec(plVar14,0);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      lVar10 = *(long *)puVar7;
      plVar18 = (long *)puVar6;
      if (*(int *)(lVar9 + 0x10) != 0) {
        plVar18 = plVar14 + 0x18;
      }
      lVar9 = *plVar18;
      if (*(int *)(lVar10 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
        lVar10 = *(long *)puVar7;
      }
      if (plVar17 == (long *)**(long **)(lVar10 + 0xb8)) {
LAB_03709efc:
        iVar8 = (**(code **)(*plVar14 + 0x238))(plVar14,*(undefined8 *)(*plVar14 + 0x240));
        if (iVar8 == 3) {
          if (*plVar19 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4a4();
          }
          FUN_03865e10(*plVar19,*(undefined8 *)Method_System_Threading_ExecutionContext_Run__,
                       *(undefined8 *)PTR_DAT_0423a830,
                       *(undefined8 *)Method_System_Linq_Enumerable_ToArray<Volume>__,
                       *(undefined8 *)PTR_DAT_042341c8,0);
        }
      }
      else if (*(char *)((long)plVar14 + 0x91) != '\0') {
        if (*(int *)(*(long *)Method_System_Reflection_CustomAttributeTypedArgument__ctor__ + 0xe0)
            == 0) {
          thunk_FUN_01c1d1e8();
        }
        uVar12 = FUN_037308e4(plVar17,0);
        if ((uVar12 & 1) != 0) goto LAB_03709efc;
      }
      lVar10 = *(long *)puVar7;
      if (*(int *)(lVar10 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
        lVar10 = *(long *)puVar7;
      }
    } while (plVar17 == (long *)**(long **)(lVar10 + 0xb8));
    if (*(char *)((long)plVar14 + 0x91) != '\0') {
      if (*(int *)(*(long *)Method_System_Reflection_CustomAttributeTypedArgument__ctor__ + 0xe0) ==
          0) {
        thunk_FUN_01c1d1e8();
      }
      uVar12 = FUN_037308e4(plVar17,0);
      if ((uVar12 & 1) != 0) goto LAB_03709d78;
    }
    if (*(int *)((long)plVar14 + 0x84) != 2) {
      if (*(int *)((long)plVar14 + 0x84) == 3) {
        bVar2 = true;
        if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_01c5d4a4();
        }
      }
      else {
        uVar12 = FUN_036867f8(plVar14,0);
        if (((uVar12 & 1) != 0) && (uVar12 = FUN_0368686c(plVar14,plVar17,0), (uVar12 & 1) != 0)) {
          FUN_04021d60(*(undefined4 *)(*(long *)PTR_DAT_0422fb28 + 0xe0));
          return;
        }
        plVar18 = (long *)*plVar19;
        uVar11 = FUN_03682ebc(plVar14,0);
        uVar22 = FUN_03684aec(plVar14,0);
        if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        (**(code **)(*plVar18 + 0x1c8))
                  (plVar18,lVar9,uVar11,uVar22,*(undefined8 *)(*plVar18 + 0x1d0));
        bVar2 = false;
        if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
      }
      plVar18 = (long *)thunk_FUN_01c5d21c(plVar17,0);
      uVar12 = FUN_036867f8(plVar14,0);
      if ((uVar12 & 1) == 0) {
        uVar11 = *(undefined8 *)PTR_DAT_0422fb50;
        if (*(int *)(*(long *)PTR_DAT_0422fb28 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        uVar11 = FUN_032e04b8(uVar11,0);
        uVar12 = FUN_032e935c(plVar18,uVar11,0);
        if ((uVar12 & 1) == 0) {
          uVar11 = *(undefined8 *)PTR_DAT_0422fbe0;
          if (*(int *)(*(long *)PTR_DAT_0422fb28 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          uVar11 = FUN_032e04b8(uVar11,0);
          uVar12 = FUN_032e935c(plVar18,uVar11,0);
          if ((uVar12 & 1) != 0) goto LAB_0370a208;
        }
        else {
LAB_0370a208:
          uVar12 = FUN_03708dec(plVar17);
          if ((uVar12 & 1) != 0) {
            if (*plVar19 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01c5d4a4();
            }
            FUN_03865e10(*plVar19,*(undefined8 *)InventoryManager_InventoryType_TypeInfo,
                         *(undefined8 *)Method_System_Collections_Generic_List<PuppetMaster>__ctor__
                         ,*(undefined8 *)
                           Method_DarkTonic_MasterAudio_EventSounds_AddUGUIHandler<EventSoundsUpdateSelectedHandler>__
                         ,*(undefined8 *)
                           Method_System_Dynamic_ExpandoObject_System_Collections_Generic_IDictionary<System_String,System_Object>_get_Item__
                         ,0);
          }
        }
        plVar18 = (long *)*plVar19;
        uVar11 = FUN_036831c8(plVar14,plVar17,0);
        if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4(uVar11,uVar11);
        }
        (**(code **)(*plVar18 + 0x278))(plVar18,uVar11,*(undefined8 *)(*plVar18 + 0x280));
      }
      else {
        uVar12 = FUN_0368686c(plVar14,plVar17,0);
        if ((uVar12 & 1) == 0) {
          uVar11 = *(undefined8 *)
                    UnityEngine_Experimental_Rendering_Universal_RenderObjects_RenderObjectsSettings_TypeInfo
          ;
          if (*(int *)(*(long *)PTR_DAT_0422fb28 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          uVar11 = FUN_032e04b8(uVar11,0);
          uVar12 = FUN_032e935c(plVar18,uVar11,0);
          if ((uVar12 & 1) == 0) {
            uVar11 = *(undefined8 *)
                      Method_System_Collections_Generic_List_Enumerator<VolumeAndPlaneSwitcher_LabelGeometryPair>_MoveNext__
            ;
            if (*(int *)(*(long *)PTR_DAT_0422fb28 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8();
            }
            uVar11 = FUN_032e04b8(uVar11,0);
            uVar12 = FUN_032e935c(plVar18,uVar11,0);
            if ((uVar12 & 1) != 0) goto LAB_0370a384;
            uVar11 = *(undefined8 *)PTR_DAT_0422fb50;
            if (*(int *)(*(long *)PTR_DAT_0422fb28 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8();
            }
            uVar11 = FUN_032e04b8(uVar11,0);
            uVar12 = FUN_032e935c(plVar18,uVar11,0);
            if ((uVar12 & 1) != 0) goto LAB_0370a384;
            if (*(int *)(*(long *)Method_System_Reflection_CustomAttributeTypedArgument__ctor__ +
                        0xe0) == 0) {
              thunk_FUN_01c1d1e8();
            }
            uVar12 = System_Xml_Schema_XsdBuilder__InitAttributeGroupRef(plVar18,0);
            if ((uVar12 & 1) != 0) goto LAB_0370a384;
            bVar1 = *(byte *)(*(long *)PTR_DAT_0422fb28 + 0x130);
            if ((*(byte *)(*plVar17 + 0x130) < bVar1) ||
               (*(long *)(*(long *)(*plVar17 + 200) + (ulong)bVar1 * 8 + -8) !=
                *(long *)PTR_DAT_0422fb28)) {
              uVar11 = FUN_036f9b08(plVar18);
              uVar11 = FUN_03146988(*(undefined8 *)
                                     Method_System_Linq_Enumerable_Select<ResourceLocatorInfo,_string>__
                                    ,uVar11,0);
              if (*plVar19 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01c5d4a4();
              }
              FUN_03865e10(*plVar19,*(undefined8 *)Method_System_Threading_ExecutionContext_Run__,
                           *(undefined8 *)UnityEngine_Events_InvokableCall_TypeInfo,
                           *(undefined8 *)Method_System_Linq_Enumerable_ToArray<Volume>__,uVar11,0);
              if (*plVar19 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01c5d4a4();
              }
              FUN_03865db4(*plVar19,*(undefined8 *)
                                     Method_UnityEngine_EventSystems_ExecuteEvents_Execute<IMoveHandler>__
                           ,*(undefined8 *)
                             VoxelBusters_EssentialKit_GameServicesCore_Android_NativeLoadLocalPlayerScoreListener_TypeInfo
                           ,0);
            }
            else {
              if (*plVar19 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01c5d4a4();
              }
              FUN_03865e10(*plVar19,*(undefined8 *)Method_System_Linq_Enumerable_ToList<float>__,
                           *(undefined8 *)
                            Method_System_Linq_Enumerable_ToArray<SplinePathRef_SliceRef>__,
                           *(undefined8 *)Method_System_Security_Cryptography_DSA_FromXmlString__,
                           *(undefined8 *)UnityEngine_Rendering_Volume___TypeInfo,0);
            }
          }
          else {
LAB_0370a384:
            if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01c5d4a4();
            }
            lVar9 = *plVar19;
            uVar11 = (**(code **)(*plVar18 + 0x2d8))(plVar18,*(undefined8 *)(*plVar18 + 0x2e0));
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01c5d4a4();
            }
            FUN_03865e10(lVar9,*(undefined8 *)Method_System_Linq_Enumerable_ToList<float>__,
                         *(undefined8 *)
                          Method_System_Linq_Enumerable_ToArray<SplinePathRef_SliceRef>__,
                         *(undefined8 *)Method_System_Security_Cryptography_DSA_FromXmlString__,
                         uVar11,0);
          }
          if (*(int *)(*(long *)Method_System_Reflection_CustomAttributeTypedArgument__ctor__ + 0xe0
                      ) == 0) {
            thunk_FUN_01c1d1e8();
          }
          uVar12 = System_Xml_Schema_XsdBuilder__InitAttributeGroupRef(plVar18,0);
          plVar18 = (long *)*plVar19;
          if ((uVar12 & 1) == 0) {
            uVar11 = FUN_036831c8(plVar14,plVar17,0);
            if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01c5d4a4(uVar11,uVar11);
            }
            (**(code **)(*plVar18 + 0x278))(plVar18,uVar11,*(undefined8 *)(*plVar18 + 0x280));
          }
          else {
            FUN_03687248(plVar14,plVar17,plVar18,0,0);
          }
        }
        else {
          if (bVar2) {
            uVar11 = thunk_FUN_01c5d21c(plVar17,0);
            lVar9 = plVar14[7];
            if (*(int *)(*(long *)PTR_DAT_0422fb28 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8();
            }
            uVar12 = FUN_032ea0d4(uVar11,lVar9,0);
            if ((uVar12 & 1) != 0) {
              if (plVar18 != (long *)0x0) {
                uVar11 = (**(code **)(*plVar18 + 0x2c8))(plVar18,*(undefined8 *)(*plVar18 + 0x2d0));
                uVar11 = FUN_0368cb60(uVar11,0);
                uVar22 = thunk_FUN_01c273e8(Method_System_Dynamic_ExpandoObject_TrySetValue__);
                    /* WARNING: Subroutine does not return */
                FUN_01c5d37c(uVar11,uVar22);
              }
                    /* WARNING: Subroutine does not return */
              FUN_01c5d4a4();
            }
            uVar11 = FUN_03682ebc(plVar14,0);
            lVar9 = thunk_FUN_01c496e0(*(undefined8 *)
                                        Method_System_Linq_Enumerable_ToArray<Vector4>__);
            FUN_038b3a88(lVar9,uVar11,0);
            uVar11 = FUN_03684aec(plVar14,0);
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01c5d4a4();
            }
            *(undefined8 *)(lVar9 + 0x28) = uVar11;
            FUN_03687248(plVar14,plVar17,*plVar19,lVar9,0);
            goto LAB_03709d78;
          }
          lVar9 = plVar14[7];
          if (*(int *)(*(long *)PTR_DAT_0422fb28 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          uVar12 = FUN_032ea0d4(plVar18,lVar9,0);
          if ((uVar12 & 1) != 0) {
            lVar9 = *plVar19;
            if (*(int *)(*(long *)Method_System_Reflection_CustomAttributeTypedArgument__ctor__ +
                        0xe0) == 0) {
              thunk_FUN_01c1d1e8();
            }
            uVar11 = FUN_03730b0c(plVar18,0);
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01c5d4a4();
            }
            FUN_03865e10(lVar9,*(undefined8 *)Method_System_Linq_Enumerable_ToList<float>__,
                         *(undefined8 *)
                          Method_System_Linq_Enumerable_ToArray<SplinePathRef_SliceRef>__,
                         *(undefined8 *)Method_System_Security_Cryptography_DSA_FromXmlString__,
                         uVar11,0);
          }
          FUN_03687248(plVar14,plVar17,*plVar19,0,0);
          bVar2 = false;
        }
      }
      if ((!bVar2) && (*(int *)((long)plVar14 + 0x84) != 3)) {
        plVar14 = (long *)*plVar19;
        if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        (**(code **)(*plVar14 + 0x1d8))(plVar14,*(undefined8 *)(*plVar14 + 0x1e0));
      }
    }
    goto LAB_03709d78;
  }
  goto LAB_0370a964;
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar21 = piVar21 + 4;
    if (uVar12 == 0) break;
LAB_0370a688:
    if (*(long *)(piVar21 + -2) == *(long *)puVar4) {
      puVar13 = (undefined8 *)(lVar9 + (long)*piVar21 * 0x10 + 0x138);
      goto LAB_0370a6bc;
    }
  }
LAB_0370a6a0:
  puVar13 = (undefined8 *)FUN_01c72498(plVar23,*(long *)puVar4,0);
LAB_0370a6bc:
  uVar11 = (*(code *)*puVar13)(plVar23,puVar13[1]);
LAB_0370a6c8:
  if (*(long *)(param_1 + 0x18) != 0) {
    plVar23 = (long *)FUN_0370b72c(uVar11,param_2);
    if (plVar23 != (long *)0x0) {
      plVar23 = (long *)(**(code **)(*plVar23 + 0x388))(plVar23,*(undefined8 *)(*plVar23 + 0x390));
      puVar6 = Method_System_Security_Cryptography_CryptoConfig_AddOID__;
      puVar5 = PTR_DAT_04230960;
      if (plVar23 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      do {
        lVar10 = *plVar23;
        lVar9 = *(long *)puVar5;
        uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar12 != 0) {
          piVar21 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar21 + -2) == lVar9) {
              puVar13 = (undefined8 *)(lVar10 + (long)*piVar21 * 0x10 + 0x138);
              goto LAB_0370a760;
            }
            uVar12 = uVar12 - 1;
            piVar21 = piVar21 + 4;
          } while (uVar12 != 0);
        }
        puVar13 = (undefined8 *)FUN_01c72498(plVar23,lVar9,0);
LAB_0370a760:
        uVar12 = (*(code *)*puVar13)(plVar23,puVar13[1]);
        if ((uVar12 & 1) == 0) {
          plVar23 = (long *)thunk_FUN_01c495e4(plVar23,*(undefined8 *)puVar4);
          if (plVar23 == (long *)0x0) goto LAB_0370a904;
          lVar9 = *plVar23;
          uVar12 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar12 == 0) goto LAB_0370a8cc;
          piVar21 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          goto LAB_0370a8b4;
        }
        lVar10 = *plVar23;
        lVar9 = *(long *)puVar5;
        uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar12 != 0) {
          piVar21 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar21 + -2) == lVar9) {
              puVar13 = (undefined8 *)(lVar10 + (long)(*piVar21 + 1) * 0x10 + 0x138);
              goto LAB_0370a7c0;
            }
            uVar12 = uVar12 - 1;
            piVar21 = piVar21 + 4;
          } while (uVar12 != 0);
        }
        puVar13 = (undefined8 *)FUN_01c72498(plVar23,lVar9,1);
LAB_0370a7c0:
        plVar14 = (long *)(*(code *)*puVar13)(plVar23,puVar13[1]);
        if (plVar14 != (long *)0x0) {
          bVar1 = *(byte *)(*(long *)puVar6 + 0x130);
          if ((*(byte *)(*plVar14 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar6)) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d748(plVar14);
          }
        }
        lVar9 = FUN_036b02a0(param_2,plVar14,0);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        if (0 < (int)*(ulong *)(lVar9 + 0x18)) {
          uVar12 = 0;
          uVar20 = *(ulong *)(lVar9 + 0x18) & 0xffffffff;
          do {
            if (uVar20 <= uVar12) {
                    /* WARNING: Subroutine does not return */
              FUN_01c5d4ac();
            }
            if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01c5d4a4();
            }
            uVar11 = *(undefined8 *)(lVar9 + 0x20 + uVar12 * 8);
            lVar10 = (**(code **)(*plVar14 + 0x188))(plVar14,*(undefined8 *)(*plVar14 + 400));
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01c5d4a4();
            }
            uVar22 = FUN_0367145c(lVar10,0);
            FUN_03709518(param_1,uVar11,uVar22);
            uVar20 = (ulong)*(uint *)(lVar9 + 0x18);
            uVar12 = uVar12 + 1;
          } while ((long)uVar12 < (long)(int)*(uint *)(lVar9 + 0x18));
        }
      } while( true );
    }
    goto LAB_0370a964;
  }
  goto LAB_0370a904;
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar21 = piVar21 + 4;
    if (uVar12 == 0) break;
LAB_0370a8b4:
    if (*(long *)(piVar21 + -2) == *(long *)puVar4) {
      puVar13 = (undefined8 *)(lVar9 + (long)*piVar21 * 0x10 + 0x138);
      goto LAB_0370a8e8;
    }
  }
LAB_0370a8cc:
  puVar13 = (undefined8 *)FUN_01c72498(plVar23,*(long *)puVar4,0);
LAB_0370a8e8:
  (*(code *)*puVar13)(plVar23,puVar13[1]);
LAB_0370a904:
  plVar19 = (long *)*plVar19;
  if (plVar19 != (long *)0x0) {
    (**(code **)(*plVar19 + 0x1d8))(plVar19,*(undefined8 *)(*plVar19 + 0x1e0));
    return;
  }
LAB_0370a964:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


