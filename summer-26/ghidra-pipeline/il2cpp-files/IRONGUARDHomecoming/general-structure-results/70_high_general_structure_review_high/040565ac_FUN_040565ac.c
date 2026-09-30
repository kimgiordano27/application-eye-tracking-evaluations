/*
FUNCTION_NAME: FUN_040565ac
ENTRY_POINT: 040565ac
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_6;strong_file_logging_hits_2
*/


void FUN_040565ac(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  if (DAT_0483db67 == '\0') {
    thunk_FUN_01efb3a4(Method_System_Nullable<AxisAlignedBox_BoxSurface>__ctor__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                      );
    thunk_FUN_01efb3a4(Method_UnityEngine_Rendering_VolumeParameter<Vector2>__ctor__);
    thunk_FUN_01efb3a4(StringLiteral_2271);
    DAT_0483db67 = '\x01';
  }
  uVar1 = FUN_0340eec4(param_2,0);
  uVar5 = *(undefined8 *)Method_UnityEngine_Rendering_VolumeParameter<Vector2>__ctor__;
  if ((uVar1 & 1) == 0) {
    uVar5 = param_2;
  }
  if (param_3 == 0) {
    if (*(int *)(*(long *)Method_System_Nullable<AxisAlignedBox_BoxSurface>__ctor__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    plVar2 = (long *)FUN_03532f80(0);
    if (plVar2 == (long *)0x0) goto UnityEngine_UIElements_UIR_Utility__add_FlushPendingResources;
    param_3 = (**(code **)(*plVar2 + 0x218))(plVar2,*(undefined8 *)(*plVar2 + 0x220));
  }
  plVar2 = (long *)FUN_01f08890(*(undefined8 *)
                                 Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                ,2);
  lVar3 = FUN_028a41dc(param_1,uVar5,param_3,0);
  if (plVar2 == (long *)0x0) {
UnityEngine_UIElements_UIR_Utility__add_FlushPendingResources:
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  if ((lVar3 != 0) &&
     (lVar4 = thunk_FUN_01f116d0(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0)) {
LAB_04056740:
    uVar5 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar5,0);
  }
  if ((int)plVar2[3] != 0) {
    plVar2[4] = lVar3;
    thunk_FUN_01f51358(plVar2 + 4,lVar3);
    lVar3 = FUN_028a41dc(param_1 + 8,uVar5,param_3,0);
    if ((lVar3 != 0) &&
       (lVar4 = thunk_FUN_01f116d0(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0))
    goto LAB_04056740;
    if (1 < *(uint *)(plVar2 + 3)) {
      plVar2[5] = lVar3;
      thunk_FUN_01f51358(plVar2 + 5,lVar3);
      FUN_040ca4d8(*(undefined8 *)StringLiteral_2271,plVar2,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a44();
}


