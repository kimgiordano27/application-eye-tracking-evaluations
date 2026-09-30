/*
FUNCTION_NAME: FUN_02352b80
ENTRY_POINT: 02352b80
PROGRAM: Lovesick-libil2cpp.so
SCORE: 155
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_4;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_eye_api_context_without_clear_sink_hits_2
*/


long FUN_02352b80(undefined8 param_1,undefined8 param_2,undefined8 param_3,float param_4,
                 float param_5,float param_6,long param_7)

{
  undefined *puVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  float *pfVar10;
  float fVar11;
  undefined4 local_78;
  undefined4 uStack_74;
  
  puVar1 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  if ((DAT_03781d28 & 1) == 0) {
    thunk_FUN_00d48444(Method_OVRGLTFAnimatinonNode_CopyData<Vector3>__);
    thunk_FUN_00d48444(Method_SaveData_<>c__DisplayClass127_0_<AddCharacterManagerData>b__1__);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<string,_MB_TexArrayForProperty>_MoveNext__
                      );
    thunk_FUN_00d48444(PTR_DAT_033f5aa8);
    thunk_FUN_00d48444(StringLiteral_2362);
    thunk_FUN_00d48444(OVRManager_XrApi_TypeInfo);
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    thunk_FUN_00d48444(UnityEngine_Texture2D_var);
    DAT_03781d28 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar3 = FUN_0268b4e0(param_7,0,0);
  puVar1 = StringLiteral_2362;
  if ((uVar3 & 1) != 0) {
    thunk_FUN_00d48444(PTR_DAT_033f37c8);
    uVar4 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    uVar9 = thunk_FUN_00d48444(
                              Method_System_Collections_Generic_List<NotePrefabMapping_PrefabPoolEntry>_get_Count__
                              );
    FUN_016ec5b8(uVar4,uVar9,0);
    uVar9 = thunk_FUN_00d48444(Method_System_Linq_Enumerable_First<int>__);
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar4,uVar9);
  }
  if (param_7 != 0) {
    uVar4 = FUN_0230bd48(param_7,0,0);
    lVar5 = FUN_010dfe04(uVar4,*(undefined8 *)puVar1);
    lVar6 = FUN_0230fea8(param_7,0);
    if (lVar6 != 0) {
      uVar2 = GreenerGames_SecondaryKeyDictionary<__Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType>__ContainsSecondaryKey
                        (lVar6,*(undefined8 *)
                                Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<string,_MB_TexArrayForProperty>_MoveNext__
                        );
      if (*(long *)(param_7 + 0x40) == 0) {
        lVar7 = 0;
      }
      else {
        lVar7 = thunk_FUN_00d62348(*(undefined8 *)PTR_DAT_033f5aa8);
        if (lVar7 == 0) goto LAB_02352e98;
        FUN_01298da0(lVar7,*(undefined8 *)
                            Method_SaveData_<>c__DisplayClass127_0_<AddCharacterManagerData>b__1__);
        FUN_0232f164(*(undefined8 *)(param_7 + 0x40),lVar7,0);
      }
      lVar8 = thunk_FUN_00d62348(*(undefined8 *)UnityEngine_Texture2D_var);
      if (lVar8 != 0) {
        FUN_023392a0(lVar8,0);
        FUN_02338f44(param_1,param_2,param_3,lVar8,0);
        if (DAT_0377518c == '\0') {
          thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
          DAT_0377518c = '\x01';
        }
        if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        fVar11 = SQRT(param_6 * param_6 + param_4 * param_4 + param_5 * param_5);
        if (fVar11 <= DAT_028aa038) {
          if (DAT_03774d76 == '\0') {
            thunk_FUN_00d48444(
                              Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                              );
            DAT_03774d76 = '\x01';
          }
          pfVar10 = *(float **)
                     (*(long *)
                       Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                     + 0xb8);
          param_4 = *pfVar10;
          param_5 = pfVar10[1];
          param_6 = pfVar10[2];
        }
        else {
          param_4 = param_4 / fVar11;
          param_5 = param_5 / fVar11;
          param_6 = param_6 / fVar11;
        }
        FUN_02339004(param_4,param_5,param_6,lVar8,0);
        puVar1 = Method_OVRGLTFAnimatinonNode_CopyData<Vector3>__;
        if (lVar5 != 0) {
          FUN_00ca0af8(lVar5,lVar8,*(undefined8 *)OVRManager_XrApi_TypeInfo);
          local_78 = uVar2;
          uStack_74 = uVar2;
          FUN_0129a054(lVar6,&uStack_74,&local_78,*(undefined8 *)puVar1);
          if (lVar7 != 0) {
            local_78 = 0xffffffff;
            uStack_74 = uVar2;
            FUN_0129a054(lVar7,&uStack_74,&local_78,*(undefined8 *)puVar1);
            FUN_02310a38(param_7,lVar5,0,0);
            FUN_0230ff4c(param_7,lVar6,0);
            FUN_02310070(param_7,lVar7,0);
            return lVar8;
          }
        }
      }
    }
  }
LAB_02352e98:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


