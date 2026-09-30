/*
FUNCTION_NAME: FUN_03955798
ENTRY_POINT: 03955798
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


void FUN_03955798(long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if ((DAT_048383d5 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_UnityEngine_Rendering_VolumeParameter<TonemappingMode>__ctor__);
    thunk_FUN_01efb3a4(
                      Method_Unity_VisualScripting_StaticFunctionInvoker<Quaternion,_Quaternion,_bool>__ctor__
                      );
    DAT_048383d5 = 1;
  }
  puVar1 = Method_UnityEngine_Rendering_VolumeParameter<TonemappingMode>__ctor__;
  if ((param_1 == 0) || (param_2 == 0)) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar4 = thunk_FUN_01f117cc();
    uVar5 = thunk_FUN_01efb3a4(StringLiteral_4238);
    FUN_034efd20(uVar4,uVar5,0);
    uVar5 = thunk_FUN_01efb3a4(StringLiteral_4239);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar4,uVar5);
  }
  lVar2 = FUN_03410698(param_1,0x5c,0x2f,0);
  lVar3 = FUN_01f08890(*(undefined8 *)puVar1,1);
  if (lVar3 != 0) {
    if (*(int *)(lVar3 + 0x18) == 0) {
LAB_03955930:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    *(undefined2 *)(lVar3 + 0x20) = 0x2f;
    if (lVar2 != 0) {
      uVar4 = FUN_03412d78(lVar2,lVar3,0);
      lVar2 = FUN_03410698(param_2,0x5c,0x2f,0);
      lVar3 = FUN_01f08890(*(undefined8 *)puVar1,1);
      if (lVar3 != 0) {
        if (*(int *)(lVar3 + 0x18) == 0) goto LAB_03955930;
        *(undefined2 *)(lVar3 + 0x20) = 0x2f;
        puVar1 = 
        Method_Unity_VisualScripting_StaticFunctionInvoker<Quaternion,_Quaternion,_bool>__ctor__;
        if (lVar2 != 0) {
          uVar5 = FUN_03412d78(lVar2,lVar3,0);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c(*(long *)puVar1);
          }
          lVar2 = FUN_034e3e34(uVar4,0);
          uVar4 = FUN_034e3e34(uVar5,0);
          if (lVar2 != 0) {
            FUN_0340e080(lVar2,uVar4,1,0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


