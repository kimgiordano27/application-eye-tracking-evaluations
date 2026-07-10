/*
FUNCTION_NAME: UnityEngine.Rendering.Universal.PostProcessPass$$GetLensFlareLightAttenuation
ENTRY_POINT: 034c1988
PROGRAM: FruitBladeVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_6;repeated_pose_getters;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure;functionality_data_collection_or_telemetry_hits_2
*/


undefined1  [16]
UnityEngine_Rendering_Universal_PostProcessPass__GetLensFlareLightAttenuation
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4,long param_5)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 extraout_s0;
  undefined4 extraout_s0_00;
  undefined4 uVar7;
  float fVar8;
  undefined4 extraout_s0_01;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined8 extraout_var_02;
  undefined8 extraout_var_03;
  undefined8 extraout_var_04;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  
  puVar1 = PTR_UnityEngine_Object_TypeInfo_03cb5a80;
  uVar12 = param_2;
  uVar13 = param_3;
  if ((DAT_03ef5f3d & 1) == 0) {
    FUN_01c5c92c(PTR_UnityEngine_Rendering_LensFlareCommonSRP_TypeInfo_03cd50f8);
    FUN_01c5c92c(PTR_UnityEngine_Object_TypeInfo_03cb5a80);
    DAT_03ef5f3d = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_01cb0d4c();
  }
  uVar3 = UnityEngine_Object__op_Inequality(param_4,0,0);
  if ((uVar3 & 1) != 0) {
    if (param_4 != 0) {
      iVar2 = UnityEngine_Light__get_type(param_4,0);
      if (iVar2 == 0) {
        lVar4 = UnityEngine_Component__get_transform(param_4,0);
        if (lVar4 != 0) {
          uVar5 = UnityEngine_Transform__get_forward(lVar4,0);
          uVar7 = UnityEngine_Light__get_spotAngle(param_4,0);
          fVar8 = (float)UnityEngine_Light__get_innerSpotAngle(param_4,0);
          if (*(int *)(*(long *)PTR_UnityEngine_Rendering_LensFlareCommonSRP_TypeInfo_03cd50f8 +
                      0xe4) == 0) {
            thunk_FUN_01cb0d4c();
          }
          UnityEngine_Rendering_LensFlareCommonSRP__ShapeAttenuationSpotConeLight
                    (uVar5,uVar12,uVar13,param_1,param_2,param_3,uVar7,fVar8 / 180.0,0);
          auVar11._4_4_ = extraout_var_01;
          auVar11._0_4_ = extraout_s0_01;
          auVar11._8_8_ = extraout_var_04;
          return auVar11;
        }
      }
      else {
        if (iVar2 == 2) {
          if (*(int *)(*(long *)PTR_UnityEngine_Rendering_LensFlareCommonSRP_TypeInfo_03cd50f8 +
                      0xe4) == 0) {
            thunk_FUN_01cb0d4c();
          }
          UnityEngine_Rendering_LensFlareCommonSRP__ShapeAttenuationPointLight(0);
          auVar10._4_4_ = extraout_var_00;
          auVar10._0_4_ = extraout_s0_00;
          auVar10._8_8_ = extraout_var_03;
          return auVar10;
        }
        if (iVar2 != 1) goto LAB_034c1ad4;
        lVar4 = UnityEngine_Component__get_transform(param_4,0);
        if (((lVar4 != 0) && (uVar5 = UnityEngine_Transform__get_forward(lVar4,0), param_5 != 0)) &&
           (uVar7 = uVar12, uVar14 = uVar13, lVar4 = UnityEngine_Component__get_transform(param_5,0)
           , lVar4 != 0)) {
          uVar6 = UnityEngine_Transform__get_forward(lVar4,0);
          if (*(int *)(*(long *)PTR_UnityEngine_Rendering_LensFlareCommonSRP_TypeInfo_03cd50f8 +
                      0xe4) == 0) {
            thunk_FUN_01cb0d4c();
          }
          UnityEngine_Rendering_LensFlareCommonSRP__ShapeAttenuationDirLight
                    (uVar5,uVar12,uVar13,uVar6,uVar7,uVar14,0);
          auVar9._4_4_ = extraout_var;
          auVar9._0_4_ = extraout_s0;
          auVar9._8_8_ = extraout_var_02;
          return auVar9;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01c5cbd4();
  }
LAB_034c1ad4:
  return ZEXT816(0x3f800000);
}


