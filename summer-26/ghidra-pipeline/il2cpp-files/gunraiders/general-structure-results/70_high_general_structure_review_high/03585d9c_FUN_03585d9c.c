/*
FUNCTION_NAME: FUN_03585d9c
ENTRY_POINT: 03585d9c
PROGRAM: gunraiders-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_6;telemetry_or_network_hits_3
*/


uint FUN_03585d9c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined1 local_44 [4];
  
  if ((DAT_04537a2d & 1) == 0) {
    FUN_01c5d288(PTR_DAT_042303a0);
    FUN_01c5d288(PTR_DAT_0422fae0);
    FUN_01c5d288(Method_Photon_Voice_LocalVoiceFramed<short>_AddPostProcessor__);
    FUN_01c5d288(System_Data_NameNode_var);
    FUN_01c5d288(PTR_DAT_042305b8);
    FUN_01c5d288(Method_System_Threading_SparselyPopulatedArray<CancellationCallbackInfo>_Add__);
    FUN_01c5d288(Method_UnityEngine_Splines_SplineDataDictionary<float4>_GetOrCreate__);
    DAT_04537a2d = 1;
  }
  lVar6 = FUN_0358493c(param_1);
  puVar2 = System_Data_NameNode_var;
  if (lVar6 == 0) {
    plVar10 = (long *)FUN_01c5d2fc(*(undefined8 *)PTR_DAT_042305b8,1);
    if (plVar10 != (long *)0x0) {
      if ((param_1 != 0) &&
         (lVar6 = thunk_FUN_01c495e4(param_1,*(undefined8 *)(*plVar10 + 0x40)), lVar6 == 0)) {
        uVar9 = thunk_FUN_01c58458();
                    /* WARNING: Subroutine does not return */
        FUN_01c5d37c(uVar9,0);
      }
      if ((int)plVar10[3] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4ac();
      }
      plVar10[4] = param_1;
      if (*(int *)(*(long *)PTR_DAT_0422fae0 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      FUN_03d048f0(*(undefined8 *)
                    Method_UnityEngine_Splines_SplineDataDictionary<float4>_GetOrCreate__,plVar10,0)
      ;
      uVar5 = 0;
LAB_03585f4c:
      return uVar5 & 1;
    }
  }
  else {
    lVar7 = thunk_FUN_01c496e0(*(undefined8 *)System_Data_NameNode_var);
    FUN_0350971c(lVar7,0);
    puVar4 = Method_System_Threading_SparselyPopulatedArray<CancellationCallbackInfo>_Add__;
    puVar3 = Method_Photon_Voice_LocalVoiceFramed<short>_AddPostProcessor__;
    puVar1 = PTR_DAT_042303a0;
    if (lVar7 != 0) {
      FUN_0290c838(lVar7,*(undefined8 *)
                          Method_System_Threading_SparselyPopulatedArray<CancellationCallbackInfo>_Add__
                   ,0,*(undefined8 *)Method_Photon_Voice_LocalVoiceFramed<short>_AddPostProcessor__)
      ;
      lVar8 = thunk_FUN_01c496e0(*(undefined8 *)puVar2);
      FUN_0350971c(lVar8,0);
      local_44[0] = *(undefined1 *)(lVar6 + 0x18);
      uVar9 = thunk_FUN_01c49334(*(undefined8 *)puVar1,local_44);
      if ((lVar8 != 0) &&
         (FUN_0290c838(lVar8,*(undefined8 *)puVar4,uVar9,*(undefined8 *)puVar3), param_1 != 0)) {
        uVar5 = FUN_0354db44(param_1,lVar7,lVar8,0,0);
        goto LAB_03585f4c;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


