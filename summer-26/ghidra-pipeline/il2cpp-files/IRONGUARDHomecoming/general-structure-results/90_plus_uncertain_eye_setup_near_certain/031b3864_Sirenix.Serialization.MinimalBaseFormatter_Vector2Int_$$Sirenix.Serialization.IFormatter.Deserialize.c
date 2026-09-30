/*
FUNCTION_NAME: Sirenix.Serialization.MinimalBaseFormatter<Vector2Int>$$Sirenix.Serialization.IFormatter.Deserialize
ENTRY_POINT: 031b3864
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


/* WARNING: Removing unreachable block (ram,0x031b3998) */
/* WARNING: Removing unreachable block (ram,0x031b3994) */
/* WARNING: Removing unreachable block (ram,0x031b39d8) */

void Sirenix_Serialization_MinimalBaseFormatter<Vector2Int>__Sirenix_Serialization_IFormatter_Deserialize
               (long param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long in_x9;
  int *piVar5;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x23;
  long *unaff_x24;
  
code_r0x031b3864:
  puVar2 = (undefined8 *)(param_1 + in_x9 * 0x10 + 0x138);
  while (uVar1 = (*(code *)*puVar2)(), (uVar1 & 1) != 0) {
                    /* try { // try from 031b3880 to 032b388f has its CatchHandler @ 031b3890 */
    lVar3 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x140);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
                    /* catch() { ... } // from try @ 031b3804 with catch @ 031b3890
                       catch() { ... } // from try @ 031b3880 with catch @ 031b3890 */
                    /* try { // try from 031b3894 to 032b3897 has its CatchHandler @ 031b38a0 */
      lVar3 = FUN_01ecaf44(lVar3);
                    /* try { // try from 031b3898 to 032b38a3 has its CatchHandler @ 031b3740 */
    }
    lVar4 = *unaff_x23;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 031b3894 with catch @ 031b38a0
                        */
    uVar1 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar1 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == lVar3) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_031b3820;
        }
        uVar1 = uVar1 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar1 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238();
LAB_031b3820:
    (*(code *)*puVar2)();
    FUN_031b3308();
    param_1 = *unaff_x23;
    uVar1 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (uVar1 != 0) {
      piVar5 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x24) {
          in_x9 = (long)*piVar5;
          goto code_r0x031b3864;
        }
        uVar1 = uVar1 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar1 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238();
  }
  if (unaff_x23 != (long *)0x0) {
    lVar3 = *unaff_x23;
    uVar1 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar1 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_031b397c;
        }
        uVar1 = uVar1 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar1 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238();
LAB_031b397c:
    (*(code *)*puVar2)();
  }
  *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
  return;
}


