/*
FUNCTION_NAME: FUN_025215bc
ENTRY_POINT: 025215bc
PROGRAM: Lovesick-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


void FUN_025215bc(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 local_38;
  undefined4 local_24;
  
  puVar2 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
                    /* try { // try from 025215dc to 026215f7 has its CatchHandler @ 02521d40 */
  if ((DAT_03782a10 & 1) == 0) {
    thunk_FUN_00d48444(UnityEngine_Events_UnityAction<WitRequest>_TypeInfo);
                    /* try { // try from 025215f8 to 02621607 has its CatchHandler @ 02521d24 */
    thunk_FUN_00d48444(StringLiteral_8968);
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    thunk_FUN_00d48444(
                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<PlayerInput>_GetEnumerator__
                      );
    DAT_03782a10 = 1;
  }
  *(undefined1 *)(param_1 + 0x60) = 1;
  uVar5 = *(undefined8 *)(param_1 + 0x20);
                    /* try { // try from 02521630 to 0262163f has its CatchHandler @ 02521d94 */
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  puVar1 = UnityEngine_Events_UnityAction<WitRequest>_TypeInfo;
                    /* try { // try from 02521640 to 026216bf has its CatchHandler @ 025212b0 */
  uVar3 = FUN_0268b5e4(uVar5,0);
  if ((uVar3 & 1) == 0) {
    lVar4 = *(long *)puVar1;
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar4 = *(long *)puVar1;
    }
    *(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x20) = 0;
  }
  else {
    if (*(long *)(param_1 + 0x20) == 0) goto LAB_02521730;
    lVar4 = *(long *)puVar1;
    uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar4 = *(long *)puVar1;
    }
    *(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x20) = uVar5;
  }
  FUN_02521734(param_1);
  puVar1 = StringLiteral_8968;
  if (*(long *)(param_1 + 0x18) != 0) {
    local_24 = FUN_02683f6c(*(long *)(param_1 + 0x18),0);
                    /* try { // try from 025216c0 to 026216cf has its CatchHandler @ 02521d88 */
    local_38 = 0;
    FUN_01347274(&local_38,&local_24,*(undefined8 *)puVar1);
    *(undefined8 *)(param_1 + 0x58) = local_38;
    if (*(long *)(param_1 + 0x20) != 0) {
      uVar5 = FUN_02520d3c();
      uVar3 = FUN_02520d8c();
      if ((uVar3 & 1) != 0) {
                    /* try { // try from 025216f0 to 026216f3 has its CatchHandler @ 02521d58 */
                    /* try { // try from 025216f4 to 026216fb has its CatchHandler @ 02521d84 */
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar3 = FUN_02681b9c(uVar5,0,0);
        if ((uVar3 & 1) != 0) {
          FUN_025217c4(param_1);
        }
      }
      return;
    }
  }
LAB_02521730:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


