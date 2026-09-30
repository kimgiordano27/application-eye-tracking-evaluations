/*
FUNCTION_NAME: FUN_07395a70
ENTRY_POINT: 07395a70
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_1
*/


void FUN_07395a70(undefined8 param_1,long param_2,long param_3,long param_4,undefined8 param_5,
                 long param_6)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 local_70 [16];
  
  if ((DAT_07ef349f & 1) == 0) {
    FUN_03642964(
                Method_System_Collections_Generic_KeyValuePair<PostProcessingComponentBase,_bool>_get_Value__
                );
    FUN_03642964(Unity_Properties_Internal_SystemVersionPropertyBag_MajorProperty_TypeInfo);
    FUN_03642964(
                Method_System_Collections_Generic_KeyValuePair<SkeletBoneType,_List<Vector3>>_get_Key__
                );
    FUN_03642964(Method_System_Collections_Generic_List<DecalCulledChunk>_Clear__);
    FUN_03642964(PTR_DAT_07a09058);
    FUN_03642964(
                Method_System_Collections_Generic_KeyValuePair<SkeletBoneType,_List<Vector3>>_get_Value__
                );
    DAT_07ef349f = 1;
  }
  puVar3 = Method_System_Collections_Generic_KeyValuePair<SkeletBoneType,_List<Vector3>>_get_Value__
  ;
  puVar2 = Method_System_Collections_Generic_KeyValuePair<SkeletBoneType,_List<Vector3>>_get_Key__;
  local_70 = ZEXT816(0);
  if ((param_2 != 0) && (iVar1 = *(int *)(param_2 + 0x18), 0 < iVar1)) {
    iVar8 = 0;
    puVar7 = (undefined8 *)Unity_Properties_Internal_SystemVersionPropertyBag_MajorProperty_TypeInfo
    ;
    do {
      auVar10 = FUN_044662c8(param_2,iVar8,*(undefined8 *)puVar2);
      local_70 = auVar10;
      iVar4 = FUN_04924498(local_70,*(undefined8 *)puVar3);
      if (iVar4 != 0) {
        if ((param_4 == 0) || (lVar5 = FUN_0459ed6c(param_4,iVar8,*puVar7), lVar5 == 0))
        goto LAB_07395cc0;
        iVar4 = FUN_0719d024(lVar5,0);
        uVar6 = FUN_0459ed6c(param_4,iVar8,*puVar7);
        auVar10 = FUN_044662c8(param_2,iVar8,*(undefined8 *)puVar2);
        if (iVar4 == 1) {
          if (param_3 == 0) {
LAB_07395cc0:
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          auVar11 = FUN_04463984(param_3,iVar8,
                                 *(undefined8 *)
                                  Method_System_Collections_Generic_List<DecalCulledChunk>_Clear__);
          if (param_6 == 0) goto LAB_07395cc0;
          uVar9 = FUN_045f3a0c(param_6,iVar8,*(undefined8 *)PTR_DAT_07a09058);
          FUN_07395cc4(uVar9,0,param_1,uVar6,auVar10._0_8_,auVar10._8_8_,auVar11._0_8_,auVar11._8_8_
                       ,1,0);
          puVar7 = (undefined8 *)
                   Unity_Properties_Internal_SystemVersionPropertyBag_MajorProperty_TypeInfo;
        }
        else {
          if (param_3 == 0) goto LAB_07395cc0;
          auVar11 = FUN_04463984(param_3,iVar8,
                                 *(undefined8 *)
                                  Method_System_Collections_Generic_List<DecalCulledChunk>_Clear__);
          FUN_07395cc4(0,0,param_1,uVar6,auVar10._0_8_,auVar10._8_8_,auVar11._0_8_,auVar11._8_8_,0,1
                      );
        }
      }
      iVar8 = iVar8 + 1;
    } while (iVar1 != iVar8);
  }
  return;
}


