/*
FUNCTION_NAME: FUN_016b4d68
ENTRY_POINT: 016b4d68
PROGRAM: Lovesick-libil2cpp.so
SCORE: 105
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 FUN_016b4d68(long param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  
  if ((DAT_03778646 & 1) == 0) {
    thunk_FUN_00d48444(Newtonsoft_Json_JsonReader_State_TypeInfo);
    thunk_FUN_00d48444(Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<TerrainData,_ObiHeightFieldHandle>_get_Count__
                      );
    thunk_FUN_00d48444(System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo)
    ;
    thunk_FUN_00d48444(StringLiteral_5644);
    thunk_FUN_00d48444(StringLiteral_11080);
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_46__);
    thunk_FUN_00d48444(Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<Touch>_get_Item__);
    thunk_FUN_00d48444(System_Action<IInteractor>_TypeInfo);
    thunk_FUN_00d48444(Method_System_Collections_ObjectModel_Collection<Property>_get_Items__);
    thunk_FUN_00d48444(Method_UnityEngine_Rendering_DebugUI_Field<Color>__ctor__);
    thunk_FUN_00d48444(
                      Method_Unity_Jobs_IJobParallelForExtensions_Schedule<OVRTriangleMesh_FlipTriangleWindingJob>__
                      );
    DAT_03778646 = 1;
  }
  if (*(long *)(param_1 + 0x10) == 0) {
    return **(undefined8 **)
             (*(long *)System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo
             + 0xb8);
  }
  plVar5 = (long *)thunk_FUN_00d62348(*(undefined8 *)
                                       Method_System_Collections_Generic_Dictionary<TerrainData,_ObiHeightFieldHandle>_get_Count__
                                     );
  if (plVar5 != (long *)0x0) {
    FUN_0160aa4c(plVar5,0);
    puVar1 = Newtonsoft_Json_JsonReader_State_TypeInfo;
    if (*(long *)(param_1 + 0x10) != 0) {
                    /* try { // try from 016b4e50 to 017b4e9b has its CatchHandler @ 016b503c */
      uVar2 = FUN_015fa29c(*(long *)(param_1 + 0x10),0,0);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar1);
      }
      uVar6 = FUN_016f68bc(uVar2,0);
      uVar9 = *(undefined8 *)(param_1 + 0x10);
      if ((uVar6 & 1) != 0) {
        uVar9 = FUN_01600424(*(undefined8 *)
                              Method_UnityEngine_Rendering_DebugUI_Field<Color>__ctor__,uVar9,
                             *(undefined8 *)
                              Method_UnityEngine_Rendering_DebugUI_Field<Color>__ctor__,0);
      }
                    /* try { // try from 016b4eac to 017b4eaf has its CatchHandler @ 016b502c */
      FUN_0160c430(plVar5,uVar9,0);
      uVar6 = FUN_0179255c(*(undefined8 *)(param_1 + 0x60),0,0);
      if ((uVar6 & 1) != 0) {
        FUN_0160c430(plVar5,*(undefined8 *)
                             Method_Unity_Jobs_IJobParallelForExtensions_Schedule<OVRTriangleMesh_FlipTriangleWindingJob>__
                     ,0);
        plVar7 = *(long **)(param_1 + 0x60);
        if (plVar7 == (long *)0x0) goto LAB_016b50c0;
        uVar9 = (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
        FUN_0160c430(plVar5,uVar9,0);
      }
      if (*(long *)(param_1 + 0x30) == 0) {
LAB_016b4fd8:
        lVar8 = FUN_016b50c4(param_1);
        if (lVar8 != 0) {
          if (*(long *)(lVar8 + 0x18) == 0) {
            FUN_0160c430(plVar5,*(undefined8 *)StringLiteral_11080,0);
          }
          else {
            FUN_0160c430(plVar5,*(undefined8 *)
                                 Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<Touch>_get_Item__
                         ,0);
            puVar1 = Method_OVRPlugin_<>c_<_cctor>b__796_46__;
            if (0 < (int)*(ulong *)(lVar8 + 0x18)) {
              uVar6 = 0;
              uVar10 = *(ulong *)(lVar8 + 0x18) & 0xffffffff;
              do {
                if (uVar10 <= uVar6) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da5194();
                }
                uVar9 = FUN_016f8470(lVar8 + 0x20 + uVar6,*(undefined8 *)puVar1,0);
                FUN_0160c430(plVar5,uVar9,0);
                uVar10 = (ulong)*(uint *)(lVar8 + 0x18);
                uVar6 = uVar6 + 1;
              } while ((long)uVar6 < (long)(int)*(uint *)(lVar8 + 0x18));
            }
          }
        }
        if ((*(byte *)(param_1 + 0x39) & 1) != 0) {
          FUN_0160c430(plVar5,*(undefined8 *)
                               Method_System_Collections_ObjectModel_Collection<Property>_get_Items__
                       ,0);
        }
                    /* WARNING: Could not recover jumptable at 0x016b50b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar9 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
        return uVar9;
      }
      FUN_0160c430(plVar5,*(undefined8 *)StringLiteral_5644,0);
      puVar1 = Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__;
      plVar7 = *(long **)(param_1 + 0x30);
      if (plVar7 != (long *)0x0) {
        iVar3 = (**(code **)(*plVar7 + 0x198))(plVar7,*(undefined8 *)(*plVar7 + 0x1a0));
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)puVar1);
        }
        plVar7 = (long *)FUN_01731954(0);
        if (plVar7 != (long *)0x0) {
          iVar4 = (**(code **)(*plVar7 + 0x198))(plVar7,*(undefined8 *)(*plVar7 + 0x1a0));
          if (iVar3 == iVar4) {
            uVar9 = *(undefined8 *)System_Action<IInteractor>_TypeInfo;
          }
          else {
            plVar7 = *(long **)(param_1 + 0x30);
            if (plVar7 == (long *)0x0) goto LAB_016b50c0;
            uVar9 = (**(code **)(*plVar7 + 0x1a8))(plVar7,*(undefined8 *)(*plVar7 + 0x1b0));
          }
          FUN_0160c430(plVar5,uVar9,0);
          goto LAB_016b4fd8;
        }
      }
    }
  }
LAB_016b50c0:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


