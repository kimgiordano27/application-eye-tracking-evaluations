/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsJsonParser$$TryParseObject
ENTRY_POINT: 06775d30
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 72
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_3;telemetry_or_network_hits_2
*/


undefined8 Unity_VisualScripting_FullSerializer_fsJsonParser__TryParseObject(void)

{
  int iVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x27;
  
  uVar3 = FUN_04957484();
  *(undefined4 *)(unaff_x27 + 0x3c) = uVar3;
  puVar2 = System_Tuple<Action<object>,_object>_TypeInfo;
  if (*(long *)(unaff_x22 + 0x40) != 0) {
    iVar1 = *(int *)(*(long *)(unaff_x22 + 0x40) + 0x3c);
    lVar4 = *(long *)System_Tuple<Action<object>,_object>_TypeInfo;
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
      lVar4 = *(long *)puVar2;
    }
    if (iVar1 == **(int **)(lVar4 + 0xb8)) {
                    /* catch() { ... } // from try @ 06775fa4 with catch @ 06775fa8
                       try { // try from 06775fa8 to 06875fff has its CatchHandler @ 06775ce8 */
                    /* catch() { ... } // from try @ 06775fa0 with catch @ 06775fac */
                    /* catch() { ... } // from try @ 06775f9c with catch @ 06775fb0 */
      thunk_FUN_03037804(PTR_DAT_06f6d640);
                    /* catch() { ... } // from try @ 06775dbc with catch @ 06775fb4 */
      uVar5 = thunk_FUN_0301080c();
                    /* catch() { ... } // from try @ 06775f98 with catch @ 06775fb8 */
                    /* catch() { ... } // from try @ 06775df0 with catch @ 06775fbc */
                    /* catch() { ... } // from try @ 06775f94 with catch @ 06775fc0 */
                    /* catch() { ... } // from try @ 06775f90 with catch @ 06775fc4 */
      uVar6 = thunk_FUN_03037804(System_Tuple<Vector3,_float>_TypeInfo);
                    /* catch() { ... } // from try @ 06775f8c with catch @ 06775fc8 */
                    /* catch() { ... } // from try @ 06775f88 with catch @ 06775fcc */
                    /* catch() { ... } // from try @ 06775f84 with catch @ 06775fd0 */
                    /* catch() { ... } // from try @ 06775f80 with catch @ 06775fd4 */
      FUN_05aeefcc(uVar5,uVar6,0);
                    /* catch() { ... } // from try @ 06775f74 with catch @ 06775fd8 */
                    /* catch() { ... } // from try @ 06775e10 with catch @ 06775fdc */
                    /* catch() { ... } // from try @ 06775ef0 with catch @ 06775fe0 */
      uVar6 = thunk_FUN_03037804(System_Tuple<Vector3,_Vector3>_TypeInfo);
                    /* catch() { ... } // from try @ 06775e5c with catch @ 06775fe4 */
                    /* catch() { ... } // from try @ 06775e88 with catch @ 06775fe8 */
                    /* WARNING: Subroutine does not return */
      FUN_02fe93c0(uVar5,uVar6);
    }
    FUN_06775614();
    lVar4 = FUN_06774a04();
    *(undefined1 *)(unaff_x21 + 0x26) = 1;
    *(undefined1 *)(unaff_x20 + 0x26) = 1;
    if (lVar4 != 0) {
      *(undefined1 *)(lVar4 + 0x26) = 1;
      return 0;
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 06775fa4 to 06875fa7 has its CatchHandler @ 06775fa8 */
  FUN_02fe94e8();
}


