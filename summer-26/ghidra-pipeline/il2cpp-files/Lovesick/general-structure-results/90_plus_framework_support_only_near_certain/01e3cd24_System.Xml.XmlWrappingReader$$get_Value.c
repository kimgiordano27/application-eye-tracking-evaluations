/*
FUNCTION_NAME: System.Xml.XmlWrappingReader$$get_Value
ENTRY_POINT: 01e3cd24
PROGRAM: Lovesick-libil2cpp.so
SCORE: 150
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;data_collection;structure_combo
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_1;strong_file_logging_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_2
*/


void System_Xml_XmlWrappingReader__get_Value(long param_1,undefined4 param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  long *local_70;
  long *local_68;
  
  if ((DAT_0377fbfe & 1) == 0) {
    thunk_FUN_00d48444(PTR_DAT_033ebf18);
    thunk_FUN_00d48444(Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_GetPooled__);
    thunk_FUN_00d48444(StringLiteral_10190);
    thunk_FUN_00d48444(StringLiteral_10099);
    thunk_FUN_00d48444(System_Tuple<bool,_bool,_bool,_bool>_TypeInfo);
    thunk_FUN_00d48444(
                      Method_Meta_XR_MRUtilityKit_AnchorPrefabSpawnerUtilities_GetPrefabWithClosestSizeToAnchor__
                      );
    thunk_FUN_00d48444(
                      Method_System_Tuple<TaskCompletionSource<int>,_Memory<byte>,_byte[]>_get_Item2__
                      );
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_144__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<Color>_get_Count__);
    thunk_FUN_00d48444(StringLiteral_529);
    DAT_0377fbfe = 1;
  }
  puVar6 = Method_OVRPlugin_<>c_<_cctor>b__796_144__;
  local_70 = (long *)0x0;
  if (param_3 == 0) {
    System_Xml_XmlWrappingReader__ReadAttributeValue();
  }
  else {
    puVar1 = (undefined8 *)StringLiteral_10190;
    puVar2 = (undefined8 *)StringLiteral_10099;
    plVar3 = (long *)StringLiteral_529;
    plVar4 = (long *)Method_System_Collections_Generic_List<Color>_get_Count__;
    if (**(long **)(*(long *)Method_OVRPlugin_<>c_<_cctor>b__796_144__ + 0xb8) == 0) {
      lVar8 = thunk_FUN_00d62348(*(undefined8 *)PTR_DAT_033ebf18);
      puVar5 = 
      Method_Meta_XR_MRUtilityKit_AnchorPrefabSpawnerUtilities_GetPrefabWithClosestSizeToAnchor__;
      if (lVar8 == 0) {
LAB_01e3d00c:
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      System_Threading_ThreadLocal<__Il2CppFullySharedGenericType>__Dispose
                (lVar8,0,*(undefined8 *)
                          Method_System_Tuple<TaskCompletionSource<int>,_Memory<byte>,_byte[]>_get_Item2__
                 ,0);
      lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar5);
      if (lVar9 == 0) goto LAB_01e3d00c;
      FUN_0123e180(lVar9,lVar8,0x20,*(undefined8 *)System_Tuple<bool,_bool,_bool,_bool>_TypeInfo);
      FUN_00d744e8(*(undefined8 *)(*(long *)puVar6 + 0xb8),lVar9,0);
      puVar1 = (undefined8 *)StringLiteral_10190;
      puVar2 = (undefined8 *)StringLiteral_10099;
      plVar3 = (long *)StringLiteral_529;
      plVar4 = (long *)Method_System_Collections_Generic_List<Color>_get_Count__;
    }
    do {
      if (**(long **)(*(long *)puVar6 + 0xb8) == 0) goto LAB_01e3d00c;
      uVar10 = FUN_0123e218(**(long **)(*(long *)puVar6 + 0xb8),param_1,param_2,param_3,&local_70,
                            *puVar2);
      if ((uVar10 & 1) == 0) {
        lVar8 = *plVar4;
        if (lVar8 == 0) goto LAB_01e3d00c;
        if ((*(int *)(lVar8 + 0x10) == param_3) &&
           (iVar7 = FUN_015fdbe0(param_1,param_2,lVar8,0,param_3,0), iVar7 == 0)) {
          FUN_01e3d44c();
          return;
        }
        lVar8 = *plVar3;
        if (lVar8 == 0) goto LAB_01e3d00c;
        if ((*(int *)(lVar8 + 0x10) == param_3) &&
           (iVar7 = FUN_015fdbe0(param_1,param_2,lVar8,0,param_3,0), iVar7 == 0)) {
          FUN_01e3d4ac();
          return;
        }
        if (param_1 == 0) goto LAB_01e3d00c;
        lVar9 = **(long **)(*(long *)puVar6 + 0xb8);
        uVar11 = FUN_01601d40(param_1,param_2,param_3,0);
        lVar8 = thunk_FUN_00d62348(*(undefined8 *)puVar6);
        if (lVar8 == 0) goto LAB_01e3d00c;
        FUN_01e3d260(lVar8,uVar11);
        lVar12 = thunk_FUN_00d62348(*(undefined8 *)
                                     Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_GetPooled__
                                   );
        if ((lVar12 == 0) || (FUN_017cc7c0(lVar12,lVar8,0), lVar9 == 0)) goto LAB_01e3d00c;
        FUN_0123e278(lVar9,lVar12,&local_68,*puVar1);
        local_70 = local_68;
        plVar13 = (long *)0x0;
        if (local_68 != (long *)0x0) goto LAB_01e3cfb0;
      }
      else if (local_70 == (long *)0x0) {
        plVar13 = (long *)0x0;
      }
      else {
LAB_01e3cfb0:
        plVar13 = (long *)(**(code **)(*local_70 + 0x198))
                                    (local_70,*(undefined8 *)(*local_70 + 0x1a0));
        if ((plVar13 != (long *)0x0) && (*plVar13 != *(long *)puVar6)) {
                    /* WARNING: Subroutine does not return */
          FUN_00da544c();
        }
      }
    } while (plVar13 == (long *)0x0);
  }
  return;
}


