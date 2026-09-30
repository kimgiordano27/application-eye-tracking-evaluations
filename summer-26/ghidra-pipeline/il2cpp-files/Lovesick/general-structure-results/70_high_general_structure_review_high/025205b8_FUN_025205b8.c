/*
FUNCTION_NAME: FUN_025205b8
ENTRY_POINT: 025205b8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_6;ui_or_gameplay_sink_hits_6;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_025205b8(long param_1,long param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined2 local_48;
  undefined6 uStack_46;
  undefined2 local_38 [2];
  byte local_34 [4];
  
  puVar1 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  if ((DAT_03782a06 & 1) == 0) {
    thunk_FUN_00d48444(Method_UnityEngine_InputSystem_Utilities_CallbackArray<Action>_AddCallback__)
    ;
                    /* try { // try from 02520600 to 02620607 has its CatchHandler @ 02520e5c */
    thunk_FUN_00d48444(
                      Method_UnityEngine_UIElements_FocusEventBase<FocusEvent>_get_focusController__
                      );
    thunk_FUN_00d48444(
                      Method_UnityEngine_InputSystem_InputActionSetupExtensions_ChangeBindingWithPath__
                      );
    thunk_FUN_00d48444(StringLiteral_9027);
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    thunk_FUN_00d48444(
                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<PlayerInput>_GetEnumerator__
                      );
    DAT_03782a06 = 1;
  }
  local_38[0] = 0;
  lVar9 = *(long *)(param_3 + 0x90);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
                    /* try { // try from 02520654 to 02620657 has its CatchHandler @ 02520e04 */
                    /* try { // try from 02520658 to 02620667 has its CatchHandler @ 02520e40 */
  uVar5 = FUN_02681b9c(lVar9,0,0);
  if ((uVar5 & 1) != 0) {
    if (lVar9 == 0) {
LAB_025207d4:
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    iVar4 = FUN_026844c8(lVar9,0);
    if (iVar4 == 1) {
                    /* try { // try from 02520688 to 0262068b has its CatchHandler @ 02520e1c */
      lVar9 = FUN_0268fd4c(lVar9,0);
      if (lVar9 == 0) goto LAB_025207d4;
                    /* try { // try from 025206a0 to 026206a3 has its CatchHandler @ 02520e2c */
      FUN_010e58e8(lVar9,&local_48,
                   *(undefined8 *)
                    Method_UnityEngine_UIElements_FocusEventBase<FocusEvent>_get_focusController__);
      lVar9 = CONCAT62(uStack_46,local_48);
                    /* try { // try from 025206b0 to 026206bb has its CatchHandler @ 02520e28 */
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar5 = FUN_02681b9c(lVar9,0,0);
      if ((uVar5 & 1) != 0) {
        if (lVar9 == 0) goto LAB_025207d4;
        if (*(char *)(lVar9 + 0x60) != '\0') {
                    /* try { // try from 025206d8 to 026206f3 has its CatchHandler @ 02520e68 */
          uVar6 = FUN_025207d8(lVar9);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_00d32864(*(long *)puVar1);
          }
                    /* try { // try from 025206f8 to 02620713 has its CatchHandler @ 02520e38 */
          uVar5 = FUN_02681b9c(uVar6,0,0);
          puVar1 = Method_UnityEngine_InputSystem_InputActionSetupExtensions_ChangeBindingWithPath__
          ;
          if ((uVar5 & 1) != 0) {
                    /* try { // try from 02520714 to 02620757 has its CatchHandler @ 02520374 */
            FUN_010c2c5c(lVar9,&local_48,
                         *(undefined8 *)
                          Method_UnityEngine_InputSystem_Utilities_CallbackArray<Action>_AddCallback__
                        );
            puVar2 = StringLiteral_9027;
            if ((CONCAT62(uStack_46,local_48) == 0) ||
               (lVar7 = *(long *)(CONCAT62(uStack_46,local_48) + 0x18), lVar7 == 0)) {
              local_38[0] = 0;
            }
            else {
              local_34[0] = FUN_02548ff0(lVar7,0);
              local_34[0] = local_34[0] & 1;
                    /* try { // try from 02520758 to 0262075b has its CatchHandler @ 02520dc4 */
                    /* try { // try from 0252075c to 0262076b has its CatchHandler @ 02520374 */
              local_48 = 0;
              FUN_01347274(&local_48,local_34,*(undefined8 *)puVar2);
              local_38[0] = local_48;
                    /* try { // try from 0252076c to 02620777 has its CatchHandler @ 02520de8 */
            }
                    /* try { // try from 02520778 to 02620783 has its CatchHandler @ 02520e50 */
            bVar3 = FUN_00bc4804(local_38,*(undefined8 *)puVar1);
            lVar7 = *(long *)(param_1 + 0x20);
            uVar6 = *(undefined8 *)(param_1 + 0x28);
            uVar8 = FUN_025207d8(lVar9);
            if (lVar7 != 0) {
              *(undefined8 *)(lVar7 + 0xd8) = uVar6;
              *(undefined8 *)(lVar7 + 0xe0) = uVar8;
              *(byte *)(lVar7 + 0xe8) = bVar3 & 1;
              if (param_2 != 0) {
                    /* try { // try from 025207b4 to 026207c3 has its CatchHandler @ 02520e08 */
                FUN_024259e8(param_2,*(undefined8 *)(param_1 + 0x20),0);
                return;
              }
            }
            goto LAB_025207d4;
          }
        }
      }
    }
  }
  return;
}


