/*
FUNCTION_NAME: FUN_03585764
ENTRY_POINT: 03585764
PROGRAM: gunraiders-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


uint FUN_03585764(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined1 local_24 [4];
  
  if ((DAT_04537a2b & 1) == 0) {
    FUN_01c5d288(PTR_DAT_042303a0);
    FUN_01c5d288(PTR_DAT_0422fae0);
    FUN_01c5d288(Method_Photon_Voice_LocalVoiceFramed<short>_AddPostProcessor__);
    FUN_01c5d288(System_Data_NameNode_var);
    FUN_01c5d288(PTR_DAT_042305b8);
    FUN_01c5d288(Method_UnityEngine_Splines_SplineDataDictionary<float>_get_Keys__);
    FUN_01c5d288(Method_System_Threading_SparselyPopulatedArray<CancellationCallbackInfo>_Add__);
    FUN_01c5d288(Method_UnityEngine_Splines_SplineDataDictionary<float>_get_Values__);
    DAT_04537a2b = 1;
  }
  if (param_2 == 0) {
    if (*(int *)(*(long *)PTR_DAT_0422fae0 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    FUN_03d046d0(*(undefined8 *)Method_UnityEngine_Splines_SplineDataDictionary<float>_get_Keys__,0)
    ;
  }
  else {
    lVar2 = FUN_0358493c(param_1);
    if (lVar2 == 0) {
      lVar2 = thunk_FUN_01c496e0(*(undefined8 *)System_Data_NameNode_var);
      FUN_0350971c(lVar2,0);
      local_24[0] = *(undefined1 *)(param_2 + 0x18);
      uVar4 = thunk_FUN_01c49334(*(undefined8 *)PTR_DAT_042303a0,local_24);
      if ((lVar2 == 0) ||
         (FUN_0290c838(lVar2,*(undefined8 *)
                              Method_System_Threading_SparselyPopulatedArray<CancellationCallbackInfo>_Add__
                       ,uVar4,*(undefined8 *)
                               Method_Photon_Voice_LocalVoiceFramed<short>_AddPostProcessor__),
         param_1 == 0)) goto LAB_03585958;
      uVar1 = FUN_0354db44(param_1,lVar2,0,0,0);
      goto LAB_03585944;
    }
    plVar3 = (long *)FUN_01c5d2fc(*(undefined8 *)PTR_DAT_042305b8,2);
    if (plVar3 == (long *)0x0) {
LAB_03585958:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    if ((param_1 != 0) &&
       (lVar2 = thunk_FUN_01c495e4(param_1,*(undefined8 *)(*plVar3 + 0x40)), lVar2 == 0)) {
LAB_03585960:
      uVar4 = thunk_FUN_01c58458();
                    /* WARNING: Subroutine does not return */
      FUN_01c5d37c(uVar4,0);
    }
    if ((int)plVar3[3] == 0) {
LAB_0358595c:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4ac();
    }
    plVar3[4] = param_1;
    lVar2 = thunk_FUN_01c495e4(param_2,*(undefined8 *)(*plVar3 + 0x40));
    if (lVar2 == 0) goto LAB_03585960;
    if (*(uint *)(plVar3 + 3) < 2) goto LAB_0358595c;
    plVar3[5] = param_2;
    if (*(int *)(*(long *)PTR_DAT_0422fae0 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    FUN_03d048f0(*(undefined8 *)Method_UnityEngine_Splines_SplineDataDictionary<float>_get_Values__,
                 plVar3,0);
  }
  uVar1 = 0;
LAB_03585944:
  return uVar1 & 1;
}


