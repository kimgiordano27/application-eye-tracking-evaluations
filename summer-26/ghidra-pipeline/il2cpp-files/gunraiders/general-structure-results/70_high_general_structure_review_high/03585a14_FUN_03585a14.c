/*
FUNCTION_NAME: FUN_03585a14
ENTRY_POINT: 03585a14
PROGRAM: gunraiders-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_6;telemetry_or_network_hits_3
*/


uint FUN_03585a14(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  
  if ((DAT_04537a2c & 1) == 0) {
    FUN_01c5d288(PTR_DAT_042303a0);
    FUN_01c5d288(PTR_DAT_0422fae0);
    FUN_01c5d288(Method_Photon_Voice_LocalVoiceFramed<short>_AddPostProcessor__);
    FUN_01c5d288(System_Data_NameNode_var);
    FUN_01c5d288(PTR_DAT_042305b8);
    FUN_01c5d288(Method_UnityEngine_Splines_SplineDataDictionary<float>_set_Item__);
    FUN_01c5d288(Method_UnityEngine_Splines_SplineDataDictionary<float4>__ctor__);
    FUN_01c5d288(Method_System_Threading_SparselyPopulatedArray<CancellationCallbackInfo>_Add__);
    FUN_01c5d288(Method_UnityEngine_Splines_SplineDataDictionary<float4>_GetEnumerator__);
    DAT_04537a2c = 1;
  }
  if (param_2 == 0) {
    if (*(int *)(*(long *)PTR_DAT_0422fae0 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    FUN_03d046d0(*(undefined8 *)
                  Method_UnityEngine_Splines_SplineDataDictionary<float4>_GetEnumerator__,0);
  }
  else {
    lVar6 = FUN_0358493c(param_1);
    puVar2 = System_Data_NameNode_var;
    if (lVar6 == 0) {
      plVar7 = (long *)FUN_01c5d2fc(*(undefined8 *)PTR_DAT_042305b8,1);
      if (plVar7 == (long *)0x0) goto LAB_03585ce0;
      if ((param_1 != 0) &&
         (lVar6 = thunk_FUN_01c495e4(param_1,*(undefined8 *)(*plVar7 + 0x40)), lVar6 == 0))
      goto LAB_03585ce8;
      if ((int)plVar7[3] == 0) goto LAB_03585ce4;
      plVar7[4] = param_1;
      puVar11 = (undefined8 *)Method_UnityEngine_Splines_SplineDataDictionary<float>_set_Item__;
      if (*(int *)(*(long *)PTR_DAT_0422fae0 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
        puVar11 = (undefined8 *)Method_UnityEngine_Splines_SplineDataDictionary<float>_set_Item__;
      }
    }
    else {
      if (*(char *)(lVar6 + 0x18) != *(char *)(param_2 + 0x18)) {
        lVar8 = thunk_FUN_01c496e0(*(undefined8 *)System_Data_NameNode_var);
        FUN_0350971c(lVar8,0);
        puVar1 = PTR_DAT_042303a0;
        local_44[0] = *(undefined1 *)(param_2 + 0x18);
        uVar10 = thunk_FUN_01c49334(*(undefined8 *)PTR_DAT_042303a0,local_44);
        puVar4 = Method_System_Threading_SparselyPopulatedArray<CancellationCallbackInfo>_Add__;
        puVar3 = Method_Photon_Voice_LocalVoiceFramed<short>_AddPostProcessor__;
        if (lVar8 == 0) {
LAB_03585ce0:
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        FUN_0290c838(lVar8,*(undefined8 *)
                            Method_System_Threading_SparselyPopulatedArray<CancellationCallbackInfo>_Add__
                     ,uVar10,*(undefined8 *)
                              Method_Photon_Voice_LocalVoiceFramed<short>_AddPostProcessor__);
        lVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar2);
        FUN_0350971c(lVar9,0);
        local_48[0] = *(undefined1 *)(lVar6 + 0x18);
        uVar10 = thunk_FUN_01c49334(*(undefined8 *)puVar1,local_48);
        if ((lVar9 == 0) ||
           (FUN_0290c838(lVar9,*(undefined8 *)puVar4,uVar10,*(undefined8 *)puVar3), param_1 == 0))
        goto LAB_03585ce0;
        uVar5 = FUN_0354db44(param_1,lVar8,lVar9,0,0);
        goto LAB_03585c04;
      }
      plVar7 = (long *)FUN_01c5d2fc(*(undefined8 *)PTR_DAT_042305b8,2);
      if (plVar7 == (long *)0x0) goto LAB_03585ce0;
      if ((param_1 != 0) &&
         (lVar6 = thunk_FUN_01c495e4(param_1,*(undefined8 *)(*plVar7 + 0x40)), lVar6 == 0)) {
LAB_03585ce8:
        uVar10 = thunk_FUN_01c58458();
                    /* WARNING: Subroutine does not return */
        FUN_01c5d37c(uVar10,0);
      }
      if ((int)plVar7[3] == 0) {
LAB_03585ce4:
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4ac();
      }
      plVar7[4] = param_1;
      lVar6 = thunk_FUN_01c495e4(param_2,*(undefined8 *)(*plVar7 + 0x40));
      if (lVar6 == 0) goto LAB_03585ce8;
      if (*(uint *)(plVar7 + 3) < 2) goto LAB_03585ce4;
      plVar7[5] = param_2;
      puVar11 = (undefined8 *)Method_UnityEngine_Splines_SplineDataDictionary<float4>__ctor__;
      if (*(int *)(*(long *)PTR_DAT_0422fae0 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
        puVar11 = (undefined8 *)Method_UnityEngine_Splines_SplineDataDictionary<float4>__ctor__;
      }
    }
    FUN_03d048f0(*puVar11,plVar7,0);
  }
  uVar5 = 0;
LAB_03585c04:
  return uVar5 & 1;
}


