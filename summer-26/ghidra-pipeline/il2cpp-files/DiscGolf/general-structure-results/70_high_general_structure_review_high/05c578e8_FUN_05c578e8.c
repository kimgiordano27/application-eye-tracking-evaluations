/*
FUNCTION_NAME: FUN_05c578e8
ENTRY_POINT: 05c578e8
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_6;telemetry_or_network_hits_2
*/


void FUN_05c578e8(undefined8 param_1,long param_2,uint param_3,uint param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint local_24;
  
  if (0x80000000 < param_3) {
    local_24 = param_3;
    uVar5 = thunk_FUN_02dfd288(
                              Method_System_Collections_Generic_Dictionary<string,_SessionProperty>_get_Keys__
                              );
    uVar5 = thunk_FUN_02dd2d7c(uVar5,&local_24);
    uVar6 = thunk_FUN_02dfd288(
                              Method_System_Collections_Generic_Dictionary<string,_SessionProperty>_set_Item__
                              );
    uVar6 = FUN_0534f2b4(uVar6,0);
    thunk_FUN_02dfd288(PTR_DAT_06a0d1c8);
    uVar2 = thunk_FUN_02dd3144();
    uVar3 = thunk_FUN_02dfd288(Method_System_Collections_Generic_Dictionary<string,_float>__ctor__);
    FUN_05450b2c(uVar2,uVar3,uVar5,uVar6,0);
    uVar5 = thunk_FUN_02dfd288(
                              Method_UnityEngine_Rendering_DynamicArray<RenderGraphObjectPool_SharedObjectPoolBase>_GetEnumerator__
                              );
                    /* WARNING: Subroutine does not return */
    FUN_02d96724(uVar2,uVar5);
  }
  if (param_4 < 4) {
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    uVar1 = FUN_05c07294(param_2,0);
    if ((uVar1 & 1) == 0) {
      uVar1 = FUN_05c08d10(param_2,0);
      if ((uVar1 & 1) != 0) {
        FUN_05c0cb40(param_2,param_3,param_4,0);
        return;
      }
      uVar5 = thunk_FUN_02dfd288(
                                Method_System_Collections_Generic_Dictionary<string,_PropertyInfo>__ctor__
                                );
      uVar5 = FUN_0534f2b4(uVar5,0);
    }
    else {
      uVar5 = thunk_FUN_02dfd288(PTR_DAT_069fc180);
      uVar5 = FUN_02d966a4(uVar5,1);
      plVar4 = (long *)thunk_FUN_02da6564(param_1,0);
      FUN_02979e58();
      uVar6 = (**(code **)(*plVar4 + 0x368))(plVar4,*(undefined8 *)(*plVar4 + 0x370));
      FUN_02979e58(uVar5);
      FUN_0297c314(uVar5,uVar6);
      FUN_02978e90(uVar5,0,uVar6);
      uVar6 = thunk_FUN_02dfd288(
                                Method_System_Collections_Generic_Dictionary<string,_float>_set_Item__
                                );
      uVar5 = FUN_0534f23c(uVar6,uVar5,0);
    }
    thunk_FUN_02dfd288(PTR_DAT_069ff3c8);
    uVar6 = thunk_FUN_02dd3144();
    FUN_054e8008(uVar6,uVar5,0);
    uVar5 = thunk_FUN_02dfd288(
                              Method_UnityEngine_Rendering_DynamicArray<RenderGraphObjectPool_SharedObjectPoolBase>_GetEnumerator__
                              );
                    /* WARNING: Subroutine does not return */
    FUN_02d96724(uVar6,uVar5);
  }
  thunk_FUN_02dfd288(PTR_DAT_06a0d1c8);
  uVar5 = thunk_FUN_02dd3144();
  uVar6 = thunk_FUN_02dfd288(PTR_DAT_06a18c40);
  FUN_05453f78(uVar5,uVar6,0);
  uVar6 = thunk_FUN_02dfd288(
                            Method_UnityEngine_Rendering_DynamicArray<RenderGraphObjectPool_SharedObjectPoolBase>_GetEnumerator__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_02d96724(uVar5,uVar6);
}


