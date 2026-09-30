/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsBaseConverter$$SerializeMember<Vector2>
ENTRY_POINT: 0406055c
PROGRAM: Waifu-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x040605c4) */

undefined1  [16]
Unity_VisualScripting_FullSerializer_fsBaseConverter__SerializeMember<Vector2>
          (undefined8 param_1,int param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 in_stack_00000030 [16];
  
  if (param_2 != 1) {
    Unity_Collections_NativeList<ulong>__get_Capacity(&stack0x00000020,DAT_083f8d18);
                    /* WARNING: Subroutine does not return */
    FUN_02e0237c(param_1);
  }
  plVar1 = (long *)__cxa_begin_catch(param_1);
  lVar2 = *plVar1;
  __cxa_end_catch();
  Unity_Collections_NativeList<ulong>__get_Capacity(&stack0x00000020,DAT_083f8d18);
  if (lVar2 == 0) {
    return in_stack_00000030;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0336c660(lVar2);
}


