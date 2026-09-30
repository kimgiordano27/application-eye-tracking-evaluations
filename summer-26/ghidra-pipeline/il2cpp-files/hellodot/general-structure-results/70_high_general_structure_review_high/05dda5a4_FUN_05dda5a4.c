/*
FUNCTION_NAME: FUN_05dda5a4
ENTRY_POINT: 05dda5a4
PROGRAM: hellodot-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_5;telemetry_or_network_hits_4
*/


void FUN_05dda5a4(long param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_48;
  
  if ((DAT_06a7afab & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum(System_Collections_Generic_IList<Vector2>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(System_Collections_Generic_IList<Vector3>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(System_Collections_Generic_IList<Vector4>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (System_Collections_Generic_IList<BatchRequest_InnerRequest>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (System_Collections_Generic_IList<DebugSettings_Option>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (System_Collections_Generic_IList<JsonSchemaGenerator_TypeSchema>_TypeInfo);
    DAT_06a7afab = 1;
  }
  puVar5 = System_Collections_Generic_IList<JsonSchemaGenerator_TypeSchema>_TypeInfo;
  puVar4 = System_Collections_Generic_IList<BatchRequest_InnerRequest>_TypeInfo;
  puVar3 = System_Collections_Generic_IList<Vector3>_TypeInfo;
  puVar2 = System_Collections_Generic_IList<Vector2>_TypeInfo;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  if (*(long *)(param_1 + 0x38) != 0) {
    FUN_03968dbc(&local_58,*(long *)(param_1 + 0x38),
                 *(undefined8 *)System_Collections_Generic_IList<DebugSettings_Option>_TypeInfo);
    while (uVar6 = FUN_0481f4e4(&local_58,*(undefined8 *)puVar3), (uVar6 & 1) != 0) {
      if (local_48 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      if (*(long *)(local_48 + 0x10) == param_2) {
        *(undefined4 *)(local_48 + 0x18) = 1;
        FUN_0481f4e0(&local_58,*(undefined8 *)puVar2);
        return;
      }
    }
    FUN_0481f4e0(&local_58,*(undefined8 *)puVar2);
    lVar10 = *(long *)(param_1 + 0x38);
    lVar7 = thunk_FUN_02cea894(*(undefined8 *)puVar5);
    *(undefined4 *)(lVar7 + 0x1c) = 0x3f800000;
    FUN_04f7383c(lVar7,0);
    *(long *)(lVar7 + 0x10) = param_2;
    *(undefined4 *)(lVar7 + 0x18) = 1;
    if (lVar10 != 0) {
      lVar8 = *(long *)(lVar10 + 0x10);
      lVar9 = *(long *)puVar4;
      *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
      if (lVar8 != 0) {
        uVar1 = *(uint *)(lVar10 + 0x18);
        if (uVar1 < *(uint *)(lVar8 + 0x18)) {
          *(uint *)(lVar10 + 0x18) = uVar1 + 1;
          *(long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) = lVar7;
          return;
        }
        FUN_039683cc(lVar10,lVar7,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70))
        ;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


