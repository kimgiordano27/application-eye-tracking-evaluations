/*
FUNCTION_NAME: Sirenix.Serialization.MinimalBaseFormatter<Bounds>$$Sirenix.Serialization.IFormatter.Deserialize
ENTRY_POINT: 031adee0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 159
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x031ae018) */
/* WARNING: Removing unreachable block (ram,0x031ae014) */
/* WARNING: Removing unreachable block (ram,0x031ae05c) */

void Sirenix_Serialization_MinimalBaseFormatter<Bounds>__Sirenix_Serialization_IFormatter_Deserialize
               (code *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  int *piVar5;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x23;
  long *unaff_x24;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  
  while (uVar1 = (*param_1)(), (uVar1 & 1) != 0) {
    lVar3 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x140);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01ecaf44(lVar3);
    }
    lVar4 = *unaff_x23;
    uVar1 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar1 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == lVar3) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_031ade8c;
        }
        uVar1 = uVar1 - 1;
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 031adeac with catch @ 031adf2c
                       try { // try from 031adf2c to 032adf43 has its CatchHandler @ 031ade60 */
        piVar5 = piVar5 + 4;
      } while (uVar1 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238();
LAB_031ade8c:
    (*(code *)*puVar2)(&stack0x00000040);
    FUN_031ad928();
    lVar3 = *unaff_x23;
    uVar1 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar1 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
                    /* try { // try from 031adeac to 032adf2b has its CatchHandler @ 031adf2c */
        if (*(long *)(piVar5 + -2) == *unaff_x24) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_031aded8;
        }
        uVar1 = uVar1 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar1 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238();
LAB_031aded8:
    param_1 = (code *)*puVar2;
  }
  if (unaff_x23 != (long *)0x0) {
    lVar3 = *unaff_x23;
    uVar1 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar1 != 0) {
                    /* try { // try from 031adfc4 to 032adfd3 has its CatchHandler @ 031adfd4 */
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_031adffc;
        }
                    /* catch() { ... } // from try @ 031adf44 with catch @ 031adfd4
                       catch() { ... } // from try @ 031adfc4 with catch @ 031adfd4 */
        uVar1 = uVar1 - 1;
                    /* try { // try from 031adfd8 to 032adfdb has its CatchHandler @ 031adfe4 */
        piVar5 = piVar5 + 4;
                    /* try { // try from 031adfdc to 032adfe7 has its CatchHandler @ 031ade60 */
      } while (uVar1 != 0);
    }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 031adfd8 with catch @ 031adfe4
                        */
                    /* try { // try from 031adfe8 to 032ae2eb has its CatchHandler @ 031adfe8
                       catch() { ... } // from try @ 031adfe8 with catch @ 031adfe8
                       catch() { ... } // from try @ 031ae3c4 with catch @ 031adfe8
                       catch() { ... } // from try @ 031ae48c with catch @ 031adfe8
                       catch() { ... } // from try @ 031ae538 with catch @ 031adfe8 */
    puVar2 = (undefined8 *)FUN_01ecb238();
LAB_031adffc:
    (*(code *)*puVar2)();
  }
  *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
  return;
}


