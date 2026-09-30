/*
FUNCTION_NAME: System.Array$$InternalArray__Insert<OVRPlugin.Vector2f>
ENTRY_POINT: 01ea0ac0
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__Insert<OVRPlugin_Vector2f>(void)

{
  undefined *puVar1;
  uint uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  
                    /* try { // try from 01ea0ac0 to 01fa0ac3 has its CatchHandler @ 01ea0ad0 */
                    /* try { // try from 01ea0ac4 to 01fa0ad3 has its CatchHandler @ 01ea0a90 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01ea0ac0 with catch @ 01ea0ad0
                        */
  if ((unaff_x19 != 0) && (plVar3 = (long *)FUN_03beb968(), plVar3 != (long *)0x0)) {
    lVar5 = *plVar3;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)StringLiteral_85) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 6) * 0x10 + 0x138);
          goto LAB_01ea0b30;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_01dde8fc(plVar3,*(long *)StringLiteral_85,6);
LAB_01ea0b30:
    lVar5 = (*(code *)*puVar4)(plVar3,puVar4[1]);
    puVar1 = Field_OVRPassthroughLayer_Settings_colorLutTargetTexture;
    if (lVar5 != 0) {
      uVar2 = FUN_03d72658(lVar5,*(undefined8 *)StringLiteral_86,0);
      lVar5 = thunk_FUN_01de27b8(*(undefined8 *)puVar1);
      FUN_01eda9fc(lVar5,0);
      puVar1 = Field_OVRSpaceQuery_Options__uuidFilter;
      if (lVar5 != 0) {
        *(undefined8 *)(lVar5 + 0x18) = *(undefined8 *)StringLiteral_97;
        thunk_FUN_01e10808();
        *(uint *)(lVar5 + 0x20) = uVar2 & 1;
        *(undefined4 *)(lVar5 + 0x10) = 0x7f;
        FUN_01eda170(*(undefined8 *)puVar1,lVar5,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
}


