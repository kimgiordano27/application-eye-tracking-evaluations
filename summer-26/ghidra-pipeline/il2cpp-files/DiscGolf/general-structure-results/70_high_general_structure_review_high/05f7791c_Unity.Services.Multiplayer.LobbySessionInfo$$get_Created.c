/*
FUNCTION_NAME: Unity.Services.Multiplayer.LobbySessionInfo$$get_Created
ENTRY_POINT: 05f7791c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


float Unity_Services_Multiplayer_LobbySessionInfo__get_Created
                (float param_1,float param_2,float param_3,float param_4,float param_5,float param_6
                ,float param_7,long param_8)

{
  undefined *puVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  fVar11 = param_2;
  fVar14 = param_3;
  if ((DAT_06dc449c & 1) == 0) {
    FUN_02d965b8(
                Method_UnityEngine_UIElements_TypedUxmlAttributeDescription<SortDirection>_set_defaultValue__
                );
    DAT_06dc449c = 1;
  }
  if ((param_8 != 0) && (lVar2 = FUN_0634bb04(param_8,0), lVar2 != 0)) {
    fVar3 = (float)FUN_0635dda4(lVar2,0);
    fVar9 = fVar11;
    fVar12 = fVar14;
    lVar2 = FUN_0634bb04(param_8,0);
    if (lVar2 != 0) {
      fVar4 = (float)FUN_0635dda4(lVar2,0);
      lVar2 = FUN_0634bb04(param_8,0);
      if (lVar2 != 0) {
        fVar15 = param_4 * param_7 * 0.5;
        fVar16 = param_5 * param_7 * 0.5;
        fVar17 = param_6 * param_7 * 0.5;
        fVar10 = param_2 + fVar16;
        fVar13 = param_3 + fVar17;
        uVar5 = FUN_0635f58c(param_1 + fVar15,lVar2,0);
        lVar2 = FUN_0634bb04(param_8,0);
        if (lVar2 != 0) {
          fVar16 = param_2 - fVar16;
          fVar17 = param_3 - fVar17;
          uVar6 = FUN_0635f58c(param_1 - fVar15,lVar2,0);
          lVar2 = FUN_0634bb04(param_8,0);
          if (lVar2 != 0) {
            fVar11 = param_2 + fVar11 * param_7 * 0.5;
            fVar14 = param_3 + fVar14 * param_7 * 0.5;
            uVar7 = FUN_0635f58c(param_1 + fVar3 * param_7 * 0.5,fVar11,fVar14,lVar2,0);
            lVar2 = FUN_0634bb04(param_8,0);
            puVar1 = 
            Method_UnityEngine_UIElements_TypedUxmlAttributeDescription<SortDirection>_set_defaultValue__
            ;
            if (lVar2 != 0) {
              param_2 = param_2 - fVar9 * param_7 * 0.5;
              param_3 = param_3 - fVar12 * param_7 * 0.5;
              uVar8 = FUN_0635f58c(param_1 - fVar4 * param_7 * 0.5,param_2,param_3,lVar2,0);
              if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                thunk_FUN_02df485c();
              }
              fVar11 = (float)FUN_05f77b3c(uVar7,fVar11,fVar14,uVar8,param_2,param_3);
              fVar14 = (float)FUN_05f77b3c(uVar5,fVar10,fVar13,uVar6,fVar16,fVar17);
              fVar14 = fVar14 / fVar11;
              if (fVar11 <= 0.0) {
                fVar14 = 1.0;
              }
              return fVar14;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


