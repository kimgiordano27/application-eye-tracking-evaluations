/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.AR.Inputs.ScreenSpaceRotateInput$$TryReadValue
ENTRY_POINT: 036c4684
PROGRAM: FruitBladeVR-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector
EVIDENCE: weak_xr_or_state_hits_18;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_8;repeated_pose_getters
*/


undefined8
UnityEngine_XR_Interaction_Toolkit_AR_Inputs_ScreenSpaceRotateInput__TryReadValue
          (undefined1 param_1 [16],float param_2,float param_3,long param_4,float *param_5)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 local_50;
  float local_44;
  
  if ((DAT_03ef704e & 1) == 0) {
    FUN_01c5c92c(
                PTR_Method_UnityEngine_XR_Interaction_Toolkit_Inputs_Readers_XRInputValueReader<int>_ReadValue___03ce5ad0
                );
    FUN_01c5c92c(
                PTR_Method_UnityEngine_XR_Interaction_Toolkit_Inputs_Readers_XRInputValueReader<float>_TryReadValue___03ce25b8
                );
    FUN_01c5c92c(
                PTR_Method_UnityEngine_XR_Interaction_Toolkit_Inputs_Readers_XRInputValueReader<Vector2>_TryReadValue___03ce2730
                );
    DAT_03ef704e = 1;
  }
  local_44 = 0.0;
  local_50 = 0;
  if (*(long *)(param_4 + 0x28) == 0) {
LAB_036c48e4:
                    /* WARNING: Subroutine does not return */
    FUN_01c5cbd4();
  }
  uVar2 = UnityEngine_XR_Interaction_Toolkit_Inputs_Readers_XRInputValueReader<float>__TryReadValue
                    (*(long *)(param_4 + 0x28),&local_44,
                     *(undefined8 *)
                      PTR_Method_UnityEngine_XR_Interaction_Toolkit_Inputs_Readers_XRInputValueReader<float>_TryReadValue___03ce25b8
                    );
  if ((uVar2 & 1) == 0) {
    if (*(long *)(param_4 + 0x38) == 0) goto LAB_036c48e4;
    iVar1 = UnityEngine_XR_Interaction_Toolkit_Inputs_Readers_XRInputValueReader<int>__ReadValue
                      (*(long *)(param_4 + 0x38),
                       *(undefined8 *)
                        PTR_Method_UnityEngine_XR_Interaction_Toolkit_Inputs_Readers_XRInputValueReader<int>_ReadValue___03ce5ad0
                      );
    if (1 < iVar1) {
      if (*(long *)(param_4 + 0x30) == 0) goto LAB_036c48e4;
      uVar2 = UnityEngine_XR_Interaction_Toolkit_Inputs_Readers_XRInputValueReader<Vector2>__TryReadValue
                        (*(long *)(param_4 + 0x30),&local_50,
                         *(undefined8 *)
                          PTR_Method_UnityEngine_XR_Interaction_Toolkit_Inputs_Readers_XRInputValueReader<Vector2>_TryReadValue___03ce2730
                        );
      if ((uVar2 & 1) != 0) {
        if ((*(long *)(param_4 + 0x20) == 0) ||
           (lVar5 = *(long *)(*(long *)(param_4 + 0x20) + 0x50), lVar5 == 0)) goto LAB_036c48e4;
        uVar6 = UnityEngine_Transform__get_forward(lVar5,0);
        if (DAT_03ef1418 == '\0') {
          FUN_01c5c92c(PTR_UnityEngine_Vector3_TypeInfo_03cb5ab0);
          DAT_03ef1418 = '\x01';
        }
        lVar4 = *(long *)(*(long *)PTR_UnityEngine_Vector3_TypeInfo_03cb5ab0 + 0xb8);
        fVar11 = *(float *)(lVar4 + 0x18);
        UnityEngine_Quaternion__LookRotation
                  (uVar6,param_2,param_3,fVar11,*(undefined4 *)(lVar4 + 0x1c),
                   *(undefined4 *)(lVar4 + 0x20),0);
        fVar7 = (float)UnityEngine_Quaternion__Inverse(0);
        fVar9 = param_2;
        fVar10 = param_3;
        fVar12 = fVar11;
        fVar8 = (float)UnityEngine_Transform__get_rotation(lVar5,0);
        fVar9 = (float)UnityEngine_Quaternion__op_Multiply
                                 ((param_2 * fVar10 + fVar11 * fVar8 + fVar7 * fVar12) -
                                  param_3 * fVar9,
                                  (param_3 * fVar8 + fVar11 * fVar9 + param_2 * fVar12) -
                                  fVar7 * fVar10,
                                  (fVar7 * fVar9 + fVar11 * fVar10 + param_3 * fVar12) -
                                  param_2 * fVar8,
                                  ((fVar11 * fVar12 - fVar7 * fVar8) - param_2 * fVar9) -
                                  param_3 * fVar10,(undefined4)local_50,local_50._4_4_,0,0);
        fVar10 = (float)UnityEngine_Screen__get_dpi(0);
        local_44 = (fVar9 / fVar10) * -50.0;
        goto LAB_036c4708;
      }
    }
    if (DAT_03ef1437 == '\0') {
      FUN_01c5c92c(PTR_UnityEngine_Vector2_TypeInfo_03cb6560);
      DAT_03ef1437 = '\x01';
    }
    uVar3 = 0;
    *(undefined8 *)param_5 =
         **(undefined8 **)(*(long *)PTR_UnityEngine_Vector2_TypeInfo_03cb6560 + 0xb8);
  }
  else {
    local_44 = -local_44;
LAB_036c4708:
    *param_5 = local_44;
    uVar3 = 1;
    param_5[1] = 0.0;
  }
  return uVar3;
}


