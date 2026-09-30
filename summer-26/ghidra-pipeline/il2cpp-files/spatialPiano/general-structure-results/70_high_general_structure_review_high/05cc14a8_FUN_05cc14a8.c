/*
FUNCTION_NAME: FUN_05cc14a8
ENTRY_POINT: 05cc14a8
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_3;strong_file_logging_hits_3;telemetry_or_network_hits_3;cap_below_near_certain_without_eye_anchor_or_ordered_structure;functionality_data_collection_or_telemetry_hits_6
*/


void FUN_05cc14a8(undefined8 param_1,long param_2,long param_3)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  float fVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  if ((DAT_06bc331e & 1) == 0) {
    FUN_02f08768(
                Method_Unity_Collections_FixedStringMethods_CompareTo<FixedString128Bytes,_FixedString64Bytes>__
                );
    FUN_02f08768(PTR_DAT_067c9e50);
    FUN_02f08768(PTR_DAT_067c8f48);
    FUN_02f08768(Method_UnityEngine_GraphicsBuffer_SetData<Vector4>__);
    FUN_02f08768(Method_GoalManager_CloseModal__);
    FUN_02f08768(Method_UnityEngine_Rendering_GraphicsFence_InitPostAllocation__);
    FUN_02f08768(Method_UnityEngine_Rendering_GraphicsFence_Validate__);
    FUN_02f08768(
                Method_UnityEngine_Experimental_Rendering_GraphicsFormatUtility_GetDepthStencilFormat__
                );
    DAT_06bc331e = 1;
  }
  puVar2 = Method_GoalManager_CloseModal__;
  if (param_2 == 0) {
    puVar8 = (undefined8 *)Method_UnityEngine_Rendering_GraphicsFence_Validate__;
    if (*(int *)(*(long *)PTR_DAT_067c8f48 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
      puVar8 = (undefined8 *)Method_UnityEngine_Rendering_GraphicsFence_Validate__;
    }
  }
  else if (param_3 == 0) {
    puVar8 = (undefined8 *)
             Method_UnityEngine_Experimental_Rendering_GraphicsFormatUtility_GetDepthStencilFormat__
    ;
    if (*(int *)(*(long *)PTR_DAT_067c8f48 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
      puVar8 = (undefined8 *)
               Method_UnityEngine_Experimental_Rendering_GraphicsFormatUtility_GetDepthStencilFormat__
      ;
    }
  }
  else {
    if (*(int *)(*(long *)Method_GoalManager_CloseModal__ + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar4 = FUN_05cbf8c4();
    if ((uVar4 & 1) != 0) {
      lVar5 = *(long *)puVar2;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
        lVar5 = *(long *)puVar2;
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
      if (lVar5 != 0) {
        lVar5 = FUN_05cc2378(lVar5,0);
        puVar3 = Method_UnityEngine_GraphicsBuffer_SetData<Vector4>__;
        lVar7 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
        if (lVar7 != 0) {
          uVar9 = *(undefined8 *)(lVar7 + 0x28);
          uVar12 = *(undefined8 *)(lVar7 + 0x40);
          lVar7 = *(long *)Method_UnityEngine_GraphicsBuffer_SetData<Vector4>__;
          if (*(int *)(lVar7 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
            lVar7 = *(long *)puVar3;
          }
          uVar1 = *(undefined4 *)(*(long *)(lVar7 + 0xb8) + 0x10);
          uVar6 = FUN_05c9cd38(param_2,0);
          if (lVar5 != 0) {
            uVar12 = NEON_scvtf(uVar12,4);
            uVar11 = NEON_fmov(0x3f800000,4);
            fVar10 = (float)((ulong)uVar11 >> 0x20) / (float)((ulong)uVar12 >> 0x20);
            UnityEngine_TextCore_Text_SpriteAsset__get_height(lVar5,uVar1,uVar6,0);
            thunk_FUN_060c0210(lVar5,*(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x14),uVar9
                               ,0);
            thunk_FUN_060bfdac(CONCAT44(fVar10,(float)uVar11 / (float)uVar12),fVar10,0,0,lVar5,
                               *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x18),0);
            if (*(int *)(*(long *)PTR_DAT_067c9e50 + 0xe4) == 0) {
              thunk_FUN_02f6670c();
            }
            FUN_05caf8c8(param_1,param_3,0,0,0xffffffff,0xffffffff);
            if (*(int *)(*(long *)
                          Method_Unity_Collections_FixedStringMethods_CompareTo<FixedString128Bytes,_FixedString64Bytes>__
                        + 0xe4) == 0) {
              thunk_FUN_02f6670c();
            }
            FUN_05caaf68(0x3f800000,0x3f800000,0,0,param_1,lVar5,0,0);
            return;
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    puVar8 = (undefined8 *)Method_UnityEngine_Rendering_GraphicsFence_InitPostAllocation__;
    if (*(int *)(*(long *)PTR_DAT_067c8f48 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
      puVar8 = (undefined8 *)Method_UnityEngine_Rendering_GraphicsFence_InitPostAllocation__;
    }
  }
  UnityEngine_TextCore_Text_TextGenerator__get_m_LineOffset(*puVar8,0);
  return;
}


