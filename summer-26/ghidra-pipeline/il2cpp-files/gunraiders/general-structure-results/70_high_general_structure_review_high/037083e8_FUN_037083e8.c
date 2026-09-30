/*
FUNCTION_NAME: FUN_037083e8
ENTRY_POINT: 037083e8
PROGRAM: gunraiders-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_14;strong_pose_or_ray_construction_hits_20;ui_or_gameplay_sink_hits_6;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_037083e8(long param_1,long param_2,long *param_3,undefined4 param_4)

{
  byte bVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined4 uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long *plVar15;
  long lVar16;
  
  if ((DAT_045388b6 & 1) == 0) {
    FUN_01c5d288(PTR_DAT_0422fb50);
    FUN_01c5d288(Michsky_UI_ModernUIPack_SliderManager_SliderEvent_TypeInfo);
    FUN_01c5d288(Method_System_Reflection_CustomAttributeTypedArgument__ctor__);
    FUN_01c5d288(
                Method_System_Collections_Generic_List_Enumerator<VolumeAndPlaneSwitcher_LabelGeometryPair>_MoveNext__
                );
    FUN_01c5d288(Method_System_Threading_ExecutionContext_GetObjectData__);
    FUN_01c5d288(PTR_DAT_0422fbe0);
    FUN_01c5d288(PTR_DAT_0422fc38);
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
    FUN_01c5d288(Method_System_Security_Cryptography_DSA_FromXmlString__);
    FUN_01c5d288(Method_System_Threading_ExecutionContext_Run__);
    FUN_01c5d288(Method_System_Linq_Enumerable_ToArray<Volume>__);
    FUN_01c5d288(
                Method_System_Dynamic_ExpandoObject_System_Collections_Generic_IDictionary<System_String,System_Object>_get_Item__
                );
    FUN_01c5d288(UnityEngine_Rendering_Volume___TypeInfo);
    FUN_01c5d288(Method_System_Linq_Enumerable_Select<ResourceLocatorInfo,_string>__);
    FUN_01c5d288(PTR_DAT_042341c8);
    FUN_01c5d288(Method_UnityEngine_EventSystems_ExecuteEvents_Execute<IMoveHandler>__);
    FUN_01c5d288(InventoryManager_InventoryType_TypeInfo);
    FUN_01c5d288(Method_System_Collections_Generic_List<PuppetMaster>__ctor__);
    FUN_01c5d288(
                VoxelBusters_EssentialKit_GameServicesCore_Android_NativeLoadLocalPlayerScoreListener_TypeInfo
                );
    FUN_01c5d288(UnityEngine_Events_InvokableCall_TypeInfo);
    FUN_01c5d288(Method_System_Linq_Enumerable_ToArray<SplinePathRef_SliceRef>__);
    FUN_01c5d288(Method_System_Linq_Enumerable_ToList<float>__);
    DAT_045388b6 = 1;
  }
  if (param_3 == (long *)0x0) goto LAB_03708da8;
  lVar7 = FUN_036830e0(param_3,param_2,param_4,0);
  if (lVar7 == 0) {
    iVar5 = (**(code **)(*param_3 + 0x238))(param_3,*(undefined8 *)(*param_3 + 0x240));
    if (iVar5 != 3) {
      return;
    }
    lVar8 = *(long *)(param_1 + 0x28);
    if (lVar8 != 0) {
      lVar16 = *(long *)Method_System_Threading_ExecutionContext_Run__;
      uVar11 = *(undefined8 *)PTR_DAT_0423a830;
      uVar13 = *(undefined8 *)Method_System_Linq_Enumerable_ToArray<Volume>__;
      lVar7 = *(long *)PTR_DAT_042341c8;
      goto LAB_03708930;
    }
    goto LAB_03708da8;
  }
  lVar8 = FUN_03684aec(param_3,0);
  if (lVar8 == 0) goto LAB_03708da8;
  if (*(int *)(lVar8 + 0x10) == 0) {
    plVar15 = *(long **)(*(long *)PTR_DAT_0422fc38 + 0xb8);
  }
  else {
    plVar15 = param_3 + 0x18;
  }
  lVar16 = *plVar15;
  uVar6 = (**(code **)(*param_3 + 0x238))(param_3,*(undefined8 *)(*param_3 + 0x240));
  switch(uVar6) {
  case 1:
    if (param_2 == 0) break;
    plVar15 = (long *)FUN_036af620(param_2,param_3,param_4,0);
    uVar9 = FUN_036867f8(param_3,0);
    if (((uVar9 & 1) == 0) || (uVar9 = FUN_0368686c(param_3,plVar15,0), (uVar9 & 1) == 0)) {
LAB_037086e8:
      plVar10 = *(long **)(param_1 + 0x28);
      uVar13 = FUN_03682ebc(param_3,0);
      uVar11 = FUN_03684aec(param_3,0);
      if ((plVar10 == (long *)0x0) ||
         ((**(code **)(*plVar10 + 0x1c8))
                    (plVar10,lVar16,uVar13,uVar11,*(undefined8 *)(*plVar10 + 0x1d0)),
         plVar15 == (long *)0x0)) break;
      bVar2 = false;
    }
    else {
      uVar13 = *(undefined8 *)Method_System_Threading_ExecutionContext_GetObjectData__;
      if (*(int *)(*(long *)PTR_DAT_0422fb28 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      plVar10 = (long *)FUN_032e04b8(uVar13,0);
      if ((plVar15 == (long *)0x0) ||
         (uVar13 = thunk_FUN_01c5d21c(plVar15,0), plVar10 == (long *)0x0)) break;
      uVar9 = (**(code **)(*plVar10 + 0x298))(plVar10,uVar13,*(undefined8 *)(*plVar10 + 0x2a0));
      if ((uVar9 & 1) != 0) goto LAB_037086e8;
      bVar2 = true;
    }
    plVar10 = (long *)thunk_FUN_01c5d21c(plVar15,0);
    uVar9 = FUN_036867f8(param_3,0);
    puVar4 = Michsky_UI_ModernUIPack_SliderManager_SliderEvent_TypeInfo;
    puVar3 = PTR_DAT_0422fb28;
    if ((uVar9 & 1) == 0) {
      uVar13 = *(undefined8 *)PTR_DAT_0422fb50;
      if (*(int *)(*(long *)PTR_DAT_0422fb28 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uVar13 = FUN_032e04b8(uVar13,0);
      uVar9 = FUN_032e935c(plVar10,uVar13,0);
      if ((uVar9 & 1) == 0) {
        uVar13 = *(undefined8 *)PTR_DAT_0422fbe0;
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        uVar13 = FUN_032e04b8(uVar13,0);
        uVar9 = FUN_032e935c(plVar10,uVar13,0);
        if ((uVar9 & 1) != 0) goto LAB_037089c8;
      }
      else {
LAB_037089c8:
        uVar9 = FUN_03708dec(lVar7);
        if ((uVar9 & 1) != 0) {
          if (*(long *)(param_1 + 0x28) == 0) break;
          FUN_03865e10(*(long *)(param_1 + 0x28),
                       *(undefined8 *)InventoryManager_InventoryType_TypeInfo,
                       *(undefined8 *)Method_System_Collections_Generic_List<PuppetMaster>__ctor__,
                       *(undefined8 *)
                        Method_DarkTonic_MasterAudio_EventSounds_AddUGUIHandler<EventSoundsUpdateSelectedHandler>__
                       ,*(undefined8 *)
                         Method_System_Dynamic_ExpandoObject_System_Collections_Generic_IDictionary<System_String,System_Object>_get_Item__
                       ,0);
        }
      }
      plVar10 = *(long **)(param_1 + 0x28);
      if (plVar10 == (long *)0x0) break;
      lVar8 = *plVar10;
LAB_03708a24:
      (**(code **)(lVar8 + 0x278))(plVar10,lVar7,*(undefined8 *)(lVar8 + 0x280));
joined_r0x03708bcc:
      if (bVar2) {
switchD_03708640_default:
        return;
      }
    }
    else {
      lVar7 = *(long *)Michsky_UI_ModernUIPack_SliderManager_SliderEvent_TypeInfo;
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
        lVar7 = *(long *)puVar4;
      }
      if (plVar15 == (long *)**(long **)(lVar7 + 0xb8)) goto joined_r0x03708bcc;
      if (*(char *)((long)param_3 + 0x91) != '\0') {
        if (*(int *)(*(long *)Method_System_Reflection_CustomAttributeTypedArgument__ctor__ + 0xe0)
            == 0) {
          thunk_FUN_01c1d1e8();
        }
        uVar9 = FUN_037308e4(plVar15,0);
        if ((uVar9 & 1) != 0) goto joined_r0x03708bcc;
      }
      uVar9 = FUN_0368686c(param_3,plVar15,0);
      puVar3 = PTR_DAT_0422fb28;
      if ((uVar9 & 1) == 0) {
        uVar13 = *(undefined8 *)
                  UnityEngine_Experimental_Rendering_Universal_RenderObjects_RenderObjectsSettings_TypeInfo
        ;
        if (*(int *)(*(long *)PTR_DAT_0422fb28 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        uVar13 = FUN_032e04b8(uVar13,0);
        uVar9 = FUN_032e935c(plVar10,uVar13,0);
        if ((uVar9 & 1) == 0) {
          uVar13 = *(undefined8 *)
                    Method_System_Collections_Generic_List_Enumerator<VolumeAndPlaneSwitcher_LabelGeometryPair>_MoveNext__
          ;
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          uVar13 = FUN_032e04b8(uVar13,0);
          uVar9 = FUN_032e935c(plVar10,uVar13,0);
          if ((uVar9 & 1) != 0) goto LAB_03708b34;
          uVar13 = *(undefined8 *)PTR_DAT_0422fb50;
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          uVar13 = FUN_032e04b8(uVar13,0);
          uVar9 = FUN_032e935c(plVar10,uVar13,0);
          if ((uVar9 & 1) != 0) goto LAB_03708b34;
          if (*(int *)(*(long *)Method_System_Reflection_CustomAttributeTypedArgument__ctor__ + 0xe0
                      ) == 0) {
            thunk_FUN_01c1d1e8();
          }
          uVar9 = System_Xml_Schema_XsdBuilder__InitAttributeGroupRef(plVar10,0);
          if ((uVar9 & 1) != 0) goto LAB_03708b34;
          bVar1 = *(byte *)(*(long *)puVar3 + 0x130);
          if ((bVar1 <= *(byte *)(*plVar15 + 0x130)) &&
             (*(long *)(*(long *)(*plVar15 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)puVar3)) {
            lVar7 = *(long *)(param_1 + 0x28);
            if (lVar7 == 0) break;
            uVar11 = *(undefined8 *)Method_System_Linq_Enumerable_ToList<float>__;
            uVar12 = *(undefined8 *)Method_System_Linq_Enumerable_ToArray<SplinePathRef_SliceRef>__;
            uVar14 = *(undefined8 *)Method_System_Security_Cryptography_DSA_FromXmlString__;
            uVar13 = *(undefined8 *)UnityEngine_Rendering_Volume___TypeInfo;
            goto LAB_03708b80;
          }
          uVar13 = FUN_036f9b08(plVar10);
          uVar13 = FUN_03146988(*(undefined8 *)
                                 Method_System_Linq_Enumerable_Select<ResourceLocatorInfo,_string>__
                                ,uVar13,0);
          if (*(long *)(param_1 + 0x28) == 0) break;
          FUN_03865e10(*(long *)(param_1 + 0x28),
                       *(undefined8 *)Method_System_Threading_ExecutionContext_Run__,
                       *(undefined8 *)UnityEngine_Events_InvokableCall_TypeInfo,
                       *(undefined8 *)Method_System_Linq_Enumerable_ToArray<Volume>__,uVar13,0);
          if (*(long *)(param_1 + 0x28) == 0) break;
          FUN_03865db4(*(long *)(param_1 + 0x28),
                       *(undefined8 *)
                        Method_UnityEngine_EventSystems_ExecuteEvents_Execute<IMoveHandler>__,
                       *(undefined8 *)
                        VoxelBusters_EssentialKit_GameServicesCore_Android_NativeLoadLocalPlayerScoreListener_TypeInfo
                       ,0);
        }
        else {
LAB_03708b34:
          if (plVar10 == (long *)0x0) break;
          lVar7 = *(long *)(param_1 + 0x28);
          uVar13 = (**(code **)(*plVar10 + 0x2d8))(plVar10,*(undefined8 *)(*plVar10 + 0x2e0));
          if (lVar7 == 0) break;
          uVar11 = *(undefined8 *)Method_System_Linq_Enumerable_ToList<float>__;
          uVar12 = *(undefined8 *)Method_System_Linq_Enumerable_ToArray<SplinePathRef_SliceRef>__;
          uVar14 = *(undefined8 *)Method_System_Security_Cryptography_DSA_FromXmlString__;
LAB_03708b80:
          FUN_03865e10(lVar7,uVar11,uVar12,uVar14,uVar13,0);
        }
        if (*(int *)(*(long *)Method_System_Reflection_CustomAttributeTypedArgument__ctor__ + 0xe0)
            == 0) {
          thunk_FUN_01c1d1e8();
        }
        uVar9 = System_Xml_Schema_XsdBuilder__InitAttributeGroupRef(plVar10,0);
        plVar10 = *(long **)(param_1 + 0x28);
        if ((uVar9 & 1) != 0) {
          FUN_03687248(param_3,plVar15,plVar10,0,0);
          goto joined_r0x03708bcc;
        }
        lVar7 = FUN_036831c8(param_3,plVar15,0);
        if (plVar10 == (long *)0x0) break;
        lVar8 = *plVar10;
        goto LAB_03708a24;
      }
      uVar13 = thunk_FUN_01c5d21c(plVar15,0);
      lVar8 = param_3[7];
      lVar7 = *(long *)PTR_DAT_0422fb28;
      if (bVar2) {
        if (*(int *)(lVar7 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(lVar7);
        }
        uVar9 = FUN_032ea0d4(uVar13,lVar8,0);
        if ((uVar9 & 1) != 0) {
          FUN_019b2708(plVar10);
          uVar13 = (**(code **)(*plVar10 + 0x2c8))(plVar10,*(undefined8 *)(*plVar10 + 0x2d0));
          uVar13 = FUN_0368cb60(uVar13,0);
          uVar11 = thunk_FUN_01c273e8(Method_System_Dynamic_ExpandoObject_TryDeleteValue__);
                    /* WARNING: Subroutine does not return */
          FUN_01c5d37c(uVar13,uVar11);
        }
        uVar13 = FUN_03682ebc(param_3,0);
        lVar7 = thunk_FUN_01c496e0(*(undefined8 *)Method_System_Linq_Enumerable_ToArray<Vector4>__);
        FUN_038b3a88(lVar7,uVar13,0);
        uVar13 = FUN_03684aec(param_3,0);
        if (lVar7 != 0) {
          *(undefined8 *)(lVar7 + 0x28) = uVar13;
          FUN_03687248(param_3,plVar15,*(undefined8 *)(param_1 + 0x28),lVar7,0);
          return;
        }
        break;
      }
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8(lVar7);
      }
      uVar9 = FUN_032ea0d4(uVar13,lVar8,0);
      if ((uVar9 & 1) != 0) {
        lVar7 = *(long *)(param_1 + 0x28);
        if (*(int *)(*(long *)Method_System_Reflection_CustomAttributeTypedArgument__ctor__ + 0xe0)
            == 0) {
          thunk_FUN_01c1d1e8();
        }
        uVar13 = FUN_03730b0c(plVar10,0);
        if (lVar7 == 0) break;
        FUN_03865e10(lVar7,*(undefined8 *)Method_System_Linq_Enumerable_ToList<float>__,
                     *(undefined8 *)Method_System_Linq_Enumerable_ToArray<SplinePathRef_SliceRef>__,
                     *(undefined8 *)Method_System_Security_Cryptography_DSA_FromXmlString__,uVar13,0
                    );
      }
      FUN_03687248(param_3,plVar15,*(undefined8 *)(param_1 + 0x28),0,0);
    }
    plVar15 = *(long **)(param_1 + 0x28);
    if (plVar15 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03708c8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar15 + 0x1d8))(plVar15,*(undefined8 *)(*plVar15 + 0x1e0));
      return;
    }
    break;
  case 2:
    lVar8 = *(long *)(param_1 + 0x28);
    uVar11 = FUN_03682ebc(param_3,0);
    uVar13 = FUN_03684aec(param_3,0);
    if (lVar8 != 0) {
LAB_03708930:
      FUN_03865e10(lVar8,lVar16,uVar11,uVar13,lVar7,0);
      return;
    }
    break;
  case 3:
    plVar15 = *(long **)(param_1 + 0x28);
    if (plVar15 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x037088d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar15 + 0x278))(plVar15,lVar7,*(undefined8 *)(*plVar15 + 0x280));
      return;
    }
    break;
  case 4:
    lVar8 = *(long *)(param_1 + 0x28);
    uVar13 = FUN_03682ebc(param_3,0);
    uVar11 = FUN_03146988(*(undefined8 *)
                           Method_UnityEngine_Rendering_ObjectPool_PooledObject<List<DebugUI_Widget>>_System_IDisposable_Dispose__
                          ,uVar13,0);
    if (lVar8 != 0) {
      lVar16 = *(long *)Method_System_Linq_Enumerable_ToList<float>__;
      uVar13 = *(undefined8 *)Method_System_Security_Cryptography_DSA_FromXmlString__;
      goto LAB_03708930;
    }
    break;
  default:
    goto switchD_03708640_default;
  }
LAB_03708da8:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


