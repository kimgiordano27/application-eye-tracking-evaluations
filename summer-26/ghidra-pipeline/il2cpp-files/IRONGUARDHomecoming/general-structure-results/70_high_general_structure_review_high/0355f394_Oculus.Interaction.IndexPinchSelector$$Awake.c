/*
FUNCTION_NAME: Oculus.Interaction.IndexPinchSelector$$Awake
ENTRY_POINT: 0355f394
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_6
*/


void Oculus_Interaction_IndexPinchSelector__Awake(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  uint in_w8;
  uint uVar7;
  long *unaff_x21;
  long unaff_x22;
  undefined8 *unaff_x23;
  undefined8 uVar8;
  
  puVar1 = Method_Unity_VisualScripting_FullSerializer_Internal_fsVersionManager_GetVersionedType__;
  if (in_w8 < 0x53) {
    if (in_w8 == 0x4f) {
switchD_0355f3d0_caseD_6f:
      if (*(int *)(*(long *)
                    Method_Unity_VisualScripting_FullSerializer_Internal_fsVersionManager_GetVersionedType__
                  + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar3 = FUN_0351c438(0);
      *unaff_x23 = uVar3;
      thunk_FUN_01f51358();
      if (*(int *)(*(long *)Method_ftLightmaps_OnSceneChangedPlay__ + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      lVar4 = FUN_0350aed8(0);
      *unaff_x21 = lVar4;
LAB_0355f5f8:
      thunk_FUN_01f51358();
      goto switchD_0355f3d0_caseD_70;
    }
    if (in_w8 != 0x52) goto switchD_0355f3d0_caseD_70;
switchD_0355f3d0_caseD_72:
    if (*(int *)(*(long *)
                  Method_Unity_VisualScripting_FullSerializer_Internal_fsVersionManager_GetVersionedType__
                + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar3 = FUN_0351c438(0);
    *unaff_x23 = uVar3;
    thunk_FUN_01f51358();
    if (*(int *)(*(long *)Method_ftLightmaps_OnSceneChangedPlay__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    lVar4 = FUN_0350aed8(0);
    *unaff_x21 = lVar4;
    thunk_FUN_01f51358();
    if ((*(uint *)(unaff_x22 + 0x24) >> 0xb & 1) == 0) goto switchD_0355f3d0_caseD_70;
    uVar7 = *(uint *)(unaff_x22 + 0x24) | 0x2000;
LAB_0355f66c:
    *(uint *)(unaff_x22 + 0x24) = uVar7;
  }
  else {
    switch(in_w8) {
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
      lVar4 = FUN_0350aed8(0);
      *unaff_x21 = lVar4;
      thunk_FUN_01f51358();
      if (*(int *)(*(long *)
                    Method_Unity_VisualScripting_FullSerializer_Internal_fsVersionManager_GetVersionedType__
                  + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar3 = FUN_0351c438(0);
      *unaff_x23 = uVar3;
      goto LAB_0355f5f8;
    case 0x75:
      if (*(int *)(*(long *)
                    Method_Unity_VisualScripting_FullSerializer_Internal_fsVersionManager_GetVersionedType__
                  + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar3 = FUN_0351c438(0);
      *unaff_x23 = uVar3;
      thunk_FUN_01f51358();
      if (*(int *)(*(long *)Method_ftLightmaps_OnSceneChangedPlay__ + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      lVar4 = FUN_0350aed8(0);
      *unaff_x21 = lVar4;
      thunk_FUN_01f51358();
      if ((*(uint *)(unaff_x22 + 0x24) >> 0xb & 1) == 0) break;
      uVar7 = *(uint *)(unaff_x22 + 0x24) | 0x4000;
      goto LAB_0355f66c;
    default:
      if (in_w8 == 0x55) {
        if (*(int *)(*(long *)
                      Method_Unity_VisualScripting_FullSerializer_Internal_fsVersionManager_GetVersionedType__
                    + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar3 = FUN_0351c438(0);
        *unaff_x23 = uVar3;
        thunk_FUN_01f51358();
        *(undefined8 *)(unaff_x22 + 0x28) = 0;
        *(uint *)(unaff_x22 + 0x24) = *(uint *)(unaff_x22 + 0x24) | 0x300;
        if ((*unaff_x21 != 0) && (lVar4 = *(long *)(*unaff_x21 + 0x78), lVar4 != 0)) {
          uVar3 = thunk_FUN_01ecaf38(lVar4,0);
          uVar8 = *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vpmaxnm_f32__;
          if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) ==
              0) {
            thunk_FUN_01ee6d7c(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
          }
          uVar8 = FUN_03579868(uVar8,0);
          uVar5 = FUN_03583338(uVar3,uVar8,0);
          if ((uVar5 & 1) == 0) break;
          if (*unaff_x21 != 0) {
            plVar6 = (long *)FUN_0350b30c(*unaff_x21,0);
            puVar2 = Method_ftLightmaps_OnSceneChangedPlay__;
            if (plVar6 == (long *)0x0) {
              *unaff_x21 = 0;
            }
            else if ((*plVar6 != *(long *)Method_ftLightmaps_OnSceneChangedPlay__) ||
                    (*unaff_x21 = (long)plVar6, *plVar6 != *(long *)puVar2)) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08cfc(plVar6);
            }
            thunk_FUN_01f51358();
            lVar4 = *unaff_x21;
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            uVar3 = FUN_0351c438(0);
            if (lVar4 != 0) {
              FUN_0350aadc(lVar4,uVar3,0);
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
  if (*(int *)(*(long *)Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_36__ + 0xe0) ==
      0) {
    thunk_FUN_01ee6d7c();
  }
  FUN_035561b4();
  return;
}


