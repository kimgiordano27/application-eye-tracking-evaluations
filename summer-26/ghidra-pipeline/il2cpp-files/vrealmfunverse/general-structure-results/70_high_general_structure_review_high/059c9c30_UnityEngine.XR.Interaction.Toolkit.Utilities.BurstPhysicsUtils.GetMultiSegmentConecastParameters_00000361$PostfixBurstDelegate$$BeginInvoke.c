/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.Utilities.BurstPhysicsUtils.GetMultiSegmentConecastParameters_00000361$PostfixBurstDelegate$$BeginInvoke
ENTRY_POINT: 059c9c30
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;ui_interaction;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;ray_or_cast_sink_hits_3;ui_or_gameplay_sink_hits_2;strong_file_logging_hits_5;telemetry_or_network_hits_2;negative_framework_namespace_without_eye_use_flow
*/


void UnityEngine_XR_Interaction_Toolkit_Utilities_BurstPhysicsUtils_GetMultiSegmentConecastParameters_00000361_PostfixBurstDelegate__BeginInvoke
               (long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  uint uStack0000000000000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  puVar3 = Method_System_Data_BinaryNode_SetTypeMismatchError__;
  puVar2 = PTR_DAT_06312a80;
  if ((DAT_066d3ae2 & 1) == 0) {
    FUN_02b3c81c(Method_System_IO_BinaryReader_ReadDecimal__);
    FUN_02b3c81c(Method_System_IO_BinaryReader_ReadString__);
    FUN_02b3c81c(Method_System_IO_BinaryWriter__ctor__);
    FUN_02b3c81c(Method_System_IO_BinaryWriter_Write__);
    FUN_02b3c81c(Method_System_IO_BinaryWriter_Write__);
    FUN_02b3c81c(Method_System_IO_BinaryWriter_Write__);
    FUN_02b3c81c(Method_System_Data_BinaryNode_SetTypeMismatchError__);
    FUN_02b3c81c(PTR_DAT_0631d9f8);
    FUN_02b3c81c(PTR_DAT_06312a80);
    DAT_066d3ae2 = 1;
  }
  lVar5 = *(long *)puVar3;
  lVar7 = *(long *)puVar2;
  uVar1 = *(uint *)(param_1 + 0x20);
  in_stack_00000030 = 0;
  in_stack_00000018 = 0;
  in_stack_00000010 = 0;
  in_stack_00000028 = 0;
  _uStack0000000000000020 = 0;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
    lVar5 = *(long *)puVar3;
  }
  puVar4 = Method_System_IO_BinaryWriter__ctor__;
  puVar3 = Method_System_IO_BinaryReader_ReadString__;
  puVar2 = PTR_DAT_0631d9f8;
  if (**(long **)(lVar5 + 0xb8) != 0) {
    System_Collections_Generic_Dictionary<object,_PokeInteractor_SurfaceHitCache_HitInfo>__System_Collections_ICollection_get_IsSynchronized
              (&stack0x00000010,**(long **)(lVar5 + 0xb8),
               *(undefined8 *)Method_System_IO_BinaryReader_ReadDecimal__);
    while (uVar6 = FUN_047d2544(&stack0x00000010,*(undefined8 *)puVar4), (uVar6 & 1) != 0) {
      if ((uStack0000000000000020 & (uVar1 ^ 0xffffffff)) == 0) {
        lVar7 = FUN_04c0a5c4(lVar7,in_stack_00000028,*(undefined8 *)puVar2,0);
      }
    }
    FUN_047d2668(&stack0x00000010,*(undefined8 *)puVar3);
    if (lVar7 != 0) {
      FUN_04c0eba8(lVar7,0x3b,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


