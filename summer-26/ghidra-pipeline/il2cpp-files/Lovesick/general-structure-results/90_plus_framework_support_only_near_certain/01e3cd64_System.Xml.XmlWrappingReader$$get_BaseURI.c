/*
FUNCTION_NAME: System.Xml.XmlWrappingReader$$get_BaseURI
ENTRY_POINT: 01e3cd64
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


void System_Xml_XmlWrappingReader__get_BaseURI(void)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  int unaff_w19;
  long unaff_x21;
  long unaff_x22;
  long *plStack0000000000000000;
  long *in_stack_00000008;
  
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
  *(undefined1 *)(unaff_x22 + 0xbfe) = 1;
  puVar5 = Method_OVRPlugin_<>c_<_cctor>b__796_144__;
  plStack0000000000000000 = (long *)0x0;
  if (unaff_w19 == 0) {
    System_Xml_XmlWrappingReader__ReadAttributeValue();
  }
  else {
    puVar1 = (undefined8 *)StringLiteral_10190;
    plVar2 = (long *)StringLiteral_529;
    plVar3 = (long *)Method_System_Collections_Generic_List<Color>_get_Count__;
    if (**(long **)(*(long *)Method_OVRPlugin_<>c_<_cctor>b__796_144__ + 0xb8) == 0) {
      lVar7 = thunk_FUN_00d62348(*(undefined8 *)PTR_DAT_033ebf18);
      puVar4 = 
      Method_Meta_XR_MRUtilityKit_AnchorPrefabSpawnerUtilities_GetPrefabWithClosestSizeToAnchor__;
      if (lVar7 == 0) {
LAB_01e3d00c:
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      System_Threading_ThreadLocal<__Il2CppFullySharedGenericType>__Dispose
                (lVar7,0,*(undefined8 *)
                          Method_System_Tuple<TaskCompletionSource<int>,_Memory<byte>,_byte[]>_get_Item2__
                 ,0);
      lVar8 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
      if (lVar8 == 0) goto LAB_01e3d00c;
      FUN_0123e180(lVar8,lVar7,0x20,*(undefined8 *)System_Tuple<bool,_bool,_bool,_bool>_TypeInfo);
      FUN_00d744e8(*(undefined8 *)(*(long *)puVar5 + 0xb8),lVar8,0);
      puVar1 = (undefined8 *)StringLiteral_10190;
      plVar2 = (long *)StringLiteral_529;
      plVar3 = (long *)Method_System_Collections_Generic_List<Color>_get_Count__;
    }
    do {
      if (**(long **)(*(long *)puVar5 + 0xb8) == 0) goto LAB_01e3d00c;
      uVar9 = FUN_0123e218();
      if ((uVar9 & 1) == 0) {
        if (*plVar3 == 0) goto LAB_01e3d00c;
        if ((*(int *)(*plVar3 + 0x10) == unaff_w19) && (iVar6 = FUN_015fdbe0(), iVar6 == 0)) {
          FUN_01e3d44c();
          return;
        }
        if (*plVar2 == 0) goto LAB_01e3d00c;
        if ((*(int *)(*plVar2 + 0x10) == unaff_w19) && (iVar6 = FUN_015fdbe0(), iVar6 == 0)) {
          FUN_01e3d4ac();
          return;
        }
        if (unaff_x21 == 0) goto LAB_01e3d00c;
        lVar8 = **(long **)(*(long *)puVar5 + 0xb8);
        uVar10 = FUN_01601d40();
        lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar5);
        if (lVar7 == 0) goto LAB_01e3d00c;
        FUN_01e3d260(lVar7,uVar10);
        lVar11 = thunk_FUN_00d62348(*(undefined8 *)
                                     Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_GetPooled__
                                   );
        if ((lVar11 == 0) || (FUN_017cc7c0(lVar11,lVar7,0), lVar8 == 0)) goto LAB_01e3d00c;
        FUN_0123e278(lVar8,lVar11,&stack0x00000008,*puVar1);
        plStack0000000000000000 = in_stack_00000008;
        plVar12 = (long *)0x0;
        if (in_stack_00000008 != (long *)0x0) goto LAB_01e3cfb0;
      }
      else if (plStack0000000000000000 == (long *)0x0) {
        plVar12 = (long *)0x0;
      }
      else {
LAB_01e3cfb0:
        plVar12 = (long *)(**(code **)(*plStack0000000000000000 + 0x198))
                                    (plStack0000000000000000,
                                     *(undefined8 *)(*plStack0000000000000000 + 0x1a0));
        if ((plVar12 != (long *)0x0) && (*plVar12 != *(long *)puVar5)) {
                    /* WARNING: Subroutine does not return */
          FUN_00da544c();
        }
      }
    } while (plVar12 == (long *)0x0);
  }
  return;
}


