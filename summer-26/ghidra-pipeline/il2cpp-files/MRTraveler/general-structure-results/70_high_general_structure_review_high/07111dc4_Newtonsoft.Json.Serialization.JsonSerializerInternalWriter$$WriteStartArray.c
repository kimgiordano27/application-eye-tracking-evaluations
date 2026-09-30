/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$WriteStartArray
ENTRY_POINT: 07111dc4
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__WriteStartArray
               (long param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  uint uVar12;
  long *plVar13;
  
  puVar4 = PTR_DAT_08e6baa0;
  if ((DAT_0941c23d & 1) == 0) {
    FUN_03c8f898(PTR_DAT_08e6baa0);
    FUN_03c8f898(PTR_DAT_08e6a6b8);
    DAT_0941c23d = 1;
  }
  lVar5 = FUN_03c8f97c(*(undefined8 *)puVar4,0x38);
  plVar13 = (long *)(param_1 + 0x18);
  *plVar13 = lVar5;
  thunk_FUN_03d233cc(plVar13,lVar5);
  FUN_07145224(param_1,0);
  if (param_2 == -0x80000000) {
    iVar8 = -0x765b1379;
  }
  else {
    if (*(int *)(*(long *)PTR_DAT_08e6a6b8 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    iVar8 = -param_2;
    if (-1 < param_2) {
      iVar8 = param_2;
    }
    iVar8 = 0x9a4ec86 - iVar8;
  }
  lVar5 = *plVar13;
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  uVar7 = *(ulong *)(lVar5 + 0x18);
  uVar6 = (uint)uVar7;
  if (0x37 < uVar6) {
    uVar12 = 0;
    iVar10 = 0x36;
    *(int *)(lVar5 + 0xfc) = iVar8;
    iVar9 = 1;
    while( true ) {
      uVar1 = uVar12 + 0x15;
      uVar2 = uVar12 - 0x22;
      uVar12 = uVar1;
      if (0x36 < (int)uVar1) {
        uVar12 = uVar2;
      }
      if (uVar6 <= uVar12) break;
      iVar3 = iVar8 - iVar9;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 0x7fffffff;
      }
      iVar10 = iVar10 + -1;
      *(int *)(lVar5 + (long)(int)uVar12 * 4 + 0x20) = iVar9;
      iVar8 = iVar9;
      iVar9 = iVar3;
      if (iVar10 == 0) {
        iVar8 = 1;
        do {
          lVar11 = 0;
          do {
            if ((uVar7 & 0xffffffff) - 1 == lVar11) goto LAB_07111f7c;
            iVar10 = 0x1e;
            if (0x18 < lVar11 + 1U) {
              iVar10 = -0x19;
            }
            uVar12 = (int)lVar11 + iVar10 + 2;
            if (uVar6 <= uVar12) goto LAB_07111f7c;
            iVar10 = *(int *)(lVar5 + 0x24 + lVar11 * 4) -
                     *(int *)(lVar5 + (long)(int)uVar12 * 4 + 0x20);
            if (iVar10 < 0) {
              iVar10 = iVar10 + 0x7fffffff;
            }
            *(int *)(lVar5 + 0x24 + lVar11 * 4) = iVar10;
            lVar11 = lVar11 + 1;
          } while (lVar11 != 0x37);
          iVar8 = iVar8 + 1;
          if (iVar8 == 5) {
            *(undefined8 *)(param_1 + 0x10) = DAT_018afb28;
            return;
          }
        } while( true );
      }
    }
  }
LAB_07111f7c:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb38();
}


