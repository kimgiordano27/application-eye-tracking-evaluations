/*
FUNCTION_NAME: FUN_05de4b04
ENTRY_POINT: 05de4b04
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 83
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_3;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_4
*/


void FUN_05de4b04(undefined8 param_1,long *param_2,long *param_3,undefined8 *param_4,ulong param_5)

{
  int iVar1;
  short sVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  ushort *puVar10;
  long lVar11;
  uint uVar12;
  long lVar13;
  short sVar14;
  ushort uVar15;
  long local_80;
  long lStack_78;
  long local_70;
  long lStack_68;
  long local_60 [2];
  
  if ((DAT_06bc3d49 & 1) == 0) {
    FUN_02f08768(
                Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddRasterRenderPass<PostProcessPass_UberPostPassData>__
                );
    FUN_02f08768(Method_System_Runtime_Serialization_Formatters_Binary_ObjectReader_Parse__);
    FUN_02f08768(PTR_DAT_067cc4c8);
    FUN_02f08768(
                Method_UnityEngine_UIElements_TypedUxmlAttributeDescription<SortDirection>_set_defaultValue__
                );
    FUN_02f08768(PTR_DAT_067cc4f8);
    DAT_06bc3d49 = 1;
  }
  puVar5 = 
  Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddRasterRenderPass<PostProcessPass_UberPostPassData>__
  ;
  puVar3 = 
  Method_UnityEngine_UIElements_TypedUxmlAttributeDescription<SortDirection>_set_defaultValue__;
  local_60[0] = 0;
  local_60[1] = 0;
  if ((param_5 & 1) == 0) {
    local_70 = 0;
    lStack_68 = 0;
    FUN_03d52e30(&local_70,0,2,0,
                 *(undefined8 *)
                  Method_UnityEngine_UIElements_TypedUxmlAttributeDescription<SortDirection>_set_defaultValue__
                );
    local_80 = 0;
    lStack_78 = 0;
    param_2[1] = lStack_68;
    *param_2 = local_70;
    FUN_03d52e30(&local_80,8,2,0,*(undefined8 *)puVar3);
    lVar13 = 0;
    param_3[1] = lStack_78;
    *param_3 = local_80;
    lVar11 = *(long *)puVar5;
    do {
      if (*(int *)(lVar11 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
        lVar11 = *(long *)puVar5;
      }
      *(undefined2 *)(*param_3 + lVar13) = *(undefined2 *)(*(long *)(lVar11 + 0xb8) + 0x20);
      lVar13 = lVar13 + 2;
    } while (lVar13 != 0x10);
  }
  else {
    FUN_03d1851c(local_60,8,2,1,*(undefined8 *)PTR_DAT_067cc4f8);
    local_70 = 0;
    lStack_68 = 0;
    FUN_03d52e30(&local_70,8,2,1,*(undefined8 *)puVar3);
    param_3[1] = lStack_68;
    *param_3 = local_70;
    puVar4 = Method_System_Runtime_Serialization_Formatters_Binary_ObjectReader_Parse__;
    iVar1 = *(int *)(param_4 + 1);
    if (iVar1 < 1) {
      puVar10 = (ushort *)*param_3;
    }
    else {
      uVar12 = 0;
      do {
        uVar8 = FUN_0347acb8(*param_4,param_4[1],uVar12,*(undefined8 *)puVar4);
        iVar6 = FUN_0612c25c(uVar8,0);
        puVar10 = (ushort *)*param_3;
        uVar12 = uVar12 + 1 & 0xffff;
        puVar10[iVar6] = puVar10[iVar6] + 1;
      } while ((int)uVar12 < iVar1);
    }
    local_70 = 0;
    lStack_68 = 0;
    FUN_03d52e30(&local_70,(uint)puVar10[1] + (uint)*puVar10 + (uint)puVar10[2],2,0,
                 *(undefined8 *)puVar3);
    param_2[1] = lStack_68;
    *param_2 = local_70;
    iVar6 = (int)param_3[1];
    if (0 < iVar6) {
      lVar11 = *param_3;
      lVar13 = 0;
      sVar14 = 0;
      do {
        sVar2 = *(short *)(lVar11 + lVar13 * 2);
        if (sVar2 == 0) {
          lVar9 = *(long *)puVar5;
          if (*(int *)(lVar9 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
            lVar9 = *(long *)puVar5;
            lVar11 = *param_3;
            iVar6 = (int)param_3[1];
          }
          *(undefined2 *)(lVar11 + lVar13 * 2) = *(undefined2 *)(*(long *)(lVar9 + 0xb8) + 0x20);
        }
        else {
          *(short *)(lVar11 + lVar13 * 2) = sVar14;
          sVar14 = sVar14 + sVar2;
        }
        lVar13 = lVar13 + 1;
      } while (lVar13 < iVar6);
    }
    puVar5 = Method_System_Runtime_Serialization_Formatters_Binary_ObjectReader_Parse__;
    puVar3 = PTR_DAT_067cc4c8;
    if (0 < iVar1) {
      uVar15 = 0;
      do {
        uVar8 = FUN_0347acb8(*param_4,param_4[1],uVar15,*(undefined8 *)puVar5);
        iVar6 = FUN_0612c25c(uVar8,0);
        if (((iVar6 == 0) || (iVar6 = FUN_0612c25c(uVar8,0), iVar6 == 1)) ||
           (iVar6 = FUN_0612c25c(uVar8,0), iVar6 == 2)) {
          iVar7 = FUN_0612c25c(uVar8,0);
          iVar6 = *(int *)(local_60[0] + (long)iVar7 * 4);
          *(int *)(local_60[0] + (long)iVar7 * 4) = iVar6 + 1;
          iVar7 = FUN_0612c25c(uVar8,0);
          *(ushort *)
           (*param_2 + (long)(int)(iVar6 + (uint)*(ushort *)(*param_3 + (long)iVar7 * 2)) * 2) =
               uVar15;
        }
        uVar15 = uVar15 + 1;
      } while ((int)(uint)uVar15 < iVar1);
    }
    FUN_03d18804(local_60,*(undefined8 *)puVar3);
  }
  return;
}


