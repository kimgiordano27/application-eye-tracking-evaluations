/*
FUNCTION_NAME: FUN_0355f318
ENTRY_POINT: 0355f318
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_6;telemetry_or_network_hits_7
*/


void FUN_0355f318(ushort *param_1,undefined8 param_2,long *param_3,long *param_4,long param_5)

{
  ushort uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  long *plVar6;
  uint uVar7;
  long lVar8;
  undefined8 uVar9;
  
  if ((DAT_0483322f & 1) == 0) {
    thunk_FUN_01efb3a4(Method_ftLightmaps_OnSceneChangedPlay__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_36__);
    thunk_FUN_01efb3a4(Method_Unity_Burst_Intrinsics_Arm_Neon_vpmaxnm_f32__);
    thunk_FUN_01efb3a4(
                      Method_Unity_VisualScripting_FullSerializer_Internal_fsVersionManager_GetVersionedType__
                      );
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    DAT_0483322f = 1;
  }
  puVar2 = Method_Unity_VisualScripting_FullSerializer_Internal_fsVersionManager_GetVersionedType__;
  if ((int)param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a44();
  }
  uVar1 = *param_1;
  if (uVar1 < 0x53) {
    if (uVar1 == 0x4f) {
switchD_0355f3d0_caseD_6f:
      if (*(int *)(*(long *)
                    Method_Unity_VisualScripting_FullSerializer_Internal_fsVersionManager_GetVersionedType__
                  + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      lVar8 = FUN_0351c438(0);
      *param_4 = lVar8;
      thunk_FUN_01f51358(param_4,lVar8);
      if (*(int *)(*(long *)Method_ftLightmaps_OnSceneChangedPlay__ + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      lVar8 = FUN_0350aed8(0);
      *param_3 = lVar8;
      param_4 = param_3;
LAB_0355f5f8:
      thunk_FUN_01f51358(param_4,lVar8);
      goto switchD_0355f3d0_caseD_70;
    }
    if (uVar1 != 0x52) goto switchD_0355f3d0_caseD_70;
switchD_0355f3d0_caseD_72:
    if (*(int *)(*(long *)
                  Method_Unity_VisualScripting_FullSerializer_Internal_fsVersionManager_GetVersionedType__
                + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    lVar8 = FUN_0351c438(0);
    *param_4 = lVar8;
    thunk_FUN_01f51358(param_4,lVar8);
    if (*(int *)(*(long *)Method_ftLightmaps_OnSceneChangedPlay__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    lVar8 = FUN_0350aed8(0);
    *param_3 = lVar8;
    thunk_FUN_01f51358(param_3,lVar8);
    if ((*(uint *)(param_5 + 0x24) >> 0xb & 1) == 0) goto switchD_0355f3d0_caseD_70;
    uVar7 = *(uint *)(param_5 + 0x24) | 0x2000;
LAB_0355f66c:
    *(uint *)(param_5 + 0x24) = uVar7;
  }
  else {
    switch(uVar1) {
    case 0x6f:
      goto switchD_0355f3d0_caseD_6f;
    case 0x70:
    case 0x71:
    case 0x74:
      break;
    case 0x72:
      goto switchD_0355f3d0_caseD_72;
    case 0x73:
      if (*(int *)(*(long *)Method_ftLightmaps_OnSceneChangedPlay__ + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      lVar8 = FUN_0350aed8(0);
      *param_3 = lVar8;
      thunk_FUN_01f51358(param_3,lVar8);
      if (*(int *)(*(long *)
                    Method_Unity_VisualScripting_FullSerializer_Internal_fsVersionManager_GetVersionedType__
                  + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      lVar8 = FUN_0351c438(0);
      *param_4 = lVar8;
      goto LAB_0355f5f8;
    case 0x75:
      if (*(int *)(*(long *)
                    Method_Unity_VisualScripting_FullSerializer_Internal_fsVersionManager_GetVersionedType__
                  + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      lVar8 = FUN_0351c438(0);
      *param_4 = lVar8;
      thunk_FUN_01f51358(param_4,lVar8);
      if (*(int *)(*(long *)Method_ftLightmaps_OnSceneChangedPlay__ + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      lVar8 = FUN_0350aed8(0);
      *param_3 = lVar8;
      thunk_FUN_01f51358(param_3,lVar8);
      if ((*(uint *)(param_5 + 0x24) >> 0xb & 1) == 0) break;
      uVar7 = *(uint *)(param_5 + 0x24) | 0x4000;
      goto LAB_0355f66c;
    default:
      if (uVar1 == 0x55) {
        if (*(int *)(*(long *)
                      Method_Unity_VisualScripting_FullSerializer_Internal_fsVersionManager_GetVersionedType__
                    + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        lVar8 = FUN_0351c438(0);
        *param_4 = lVar8;
        thunk_FUN_01f51358(param_4,lVar8);
        *(undefined8 *)(param_5 + 0x28) = 0;
        *(uint *)(param_5 + 0x24) = *(uint *)(param_5 + 0x24) | 0x300;
        if ((*param_3 != 0) && (lVar8 = *(long *)(*param_3 + 0x78), lVar8 != 0)) {
          uVar4 = thunk_FUN_01ecaf38(lVar8,0);
          uVar9 = *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vpmaxnm_f32__;
          if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) ==
              0) {
            thunk_FUN_01ee6d7c(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
          }
          uVar9 = FUN_03579868(uVar9,0);
          uVar5 = FUN_03583338(uVar4,uVar9,0);
          if ((uVar5 & 1) == 0) break;
          if (*param_3 != 0) {
            plVar6 = (long *)FUN_0350b30c(*param_3,0);
            puVar3 = Method_ftLightmaps_OnSceneChangedPlay__;
            if (plVar6 == (long *)0x0) {
              *param_3 = 0;
            }
            else if ((*plVar6 != *(long *)Method_ftLightmaps_OnSceneChangedPlay__) ||
                    (*param_3 = (long)plVar6, *plVar6 != *(long *)puVar3)) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08cfc(plVar6);
            }
            thunk_FUN_01f51358(param_3,plVar6);
            lVar8 = *param_3;
            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            uVar4 = FUN_0351c438(0);
            if (lVar8 != 0) {
              FUN_0350aadc(lVar8,uVar4,0);
              break;
            }
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
    }
  }
switchD_0355f3d0_caseD_70:
  lVar8 = *param_3;
  if (*(int *)(*(long *)Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_36__ + 0xe0) ==
      0) {
    thunk_FUN_01ee6d7c();
  }
  FUN_035561b4(param_1,param_2,lVar8);
  return;
}


