/*
FUNCTION_NAME: FUN_02f617f0
ENTRY_POINT: 02f617f0
PROGRAM: beastcraft-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_6;strong_file_logging_hits_2
*/


undefined8 FUN_02f617f0(uint param_1)

{
  undefined *puVar1;
  
  puVar1 = Method_UnityEngine_Rendering_DynamicArray<char>__ctor__;
  param_1 = param_1 & 0xf;
  if (param_1 < 9) {
    if (param_1 < 3) {
      if (param_1 == 2) {
        return 4;
      }
      if (param_1 == 1) {
LAB_02f618b8:
        fprintf((FILE *)(Method_UnityEngine_Rendering_DynamicArray<char>__ctor__ + 0x130),
                "libunwind: %s - %s\n","getTableEntrySize",
                "Can\'t binary search on variable length encoded data.");
        fflush((FILE *)(puVar1 + 0x130));
                    /* WARNING: Subroutine does not return */
        abort();
      }
    }
    else {
      if (param_1 == 3) {
                    /* try { // try from 02f6184c to 03061853 has its CatchHandler @ 02f61990 */
                    /* try { // try from 02f61854 to 0306185b has its CatchHandler @ 02f61980 */
        return 8;
      }
                    /* try { // try from 02f61820 to 0306184b has its CatchHandler @ 02f61820
                       catch() { ... } // from try @ 02f61820 with catch @ 02f61820
                       catch() { ... } // from try @ 02f61920 with catch @ 02f61820 */
      if (param_1 == 4) {
        return 0x10;
      }
    }
  }
  else if (param_1 < 0xb) {
    if (param_1 == 10) {
      return 4;
    }
    if (param_1 == 9) goto LAB_02f618b8;
  }
  else {
    if (param_1 == 0xc) {
                    /* try { // try from 02f61864 to 0306191f has its CatchHandler @ 02f61990 */
      return 0x10;
    }
    if (param_1 == 0xb) {
      return 8;
    }
  }
  fprintf((FILE *)(Method_UnityEngine_Rendering_DynamicArray<char>__ctor__ + 0x130),
          "libunwind: %s - %s\n","getTableEntrySize","Unknown DWARF encoding for search table.");
  fflush((FILE *)(puVar1 + 0x130));
                    /* WARNING: Subroutine does not return */
  abort();
}


