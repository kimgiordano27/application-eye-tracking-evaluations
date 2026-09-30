/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.EyeGazeState>$$.ctor
ENTRY_POINT: 03640b20
PROGRAM: hellodot-libil2cpp.so
SCORE: 152
LABEL: confirmed_gaze_retrieval_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_runtime_retrieval
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;attempted_use;active_gaze_retrieval
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;active_gaze_state_retrieval_with_validity_and_pose;functionality_gaze_retrieval_or_extraction
*/


void System_Array_InternalEnumerator<OVRPlugin_EyeGazeState>___ctor(void)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  int unaff_w19;
  long unaff_x20;
  long unaff_x21;
  undefined8 unaff_x22;
  long unaff_x23;
  long *unaff_x26;
  long unaff_x27;
  long unaff_x29;
  undefined8 uVar11;
  
  if (unaff_x26 != (long *)0x0) {
    lVar6 = *unaff_x26;
    uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_065c8a48) {
          puVar7 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_03640a7c;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar7 = (undefined8 *)FUN_02ce0a7c();
LAB_03640a7c:
    (*(code *)*puVar7)();
  }
  puVar7 = (undefined8 *)PTR_DAT_065dec88;
  puVar3 = PTR_DAT_065dec80;
  puVar2 = PTR_DAT_065dec78;
  if (unaff_x23 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02cbedc4();
  }
  bVar4 = (*(uint *)(unaff_x29 + -0xe4) & 0xff) == 0;
  if ((unaff_w19 == 6) || (unaff_w19 == 0)) {
    uVar5 = FUN_0410be30(unaff_x29 + -0x60,*(undefined8 *)PTR_DAT_065dec58);
    lVar6 = thunk_FUN_02cea894(*(undefined8 *)puVar2);
    if (bVar4) {
      puVar7 = (undefined8 *)puVar3;
    }
    if (bVar4) {
      unaff_x22 = 0;
    }
    FUN_05af3a9c(lVar6,*puVar7,uVar5,0);
    lVar8 = *(long *)(unaff_x20 + 0x20);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    puVar7 = *(undefined8 **)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x58);
    uVar1 = *(undefined1 *)(unaff_x20 + 0x18);
    uVar5 = *puVar7;
    *(bool *)(unaff_x29 + -0x1c) = lVar6 == 0;
    *(undefined1 *)(unaff_x29 + -0x20) = uVar1;
    *(undefined8 *)(unaff_x29 + -0x40) = unaff_x22;
    *(long *)(unaff_x29 + -0x38) = unaff_x29 + -0x1c;
    *(long *)(unaff_x29 + -0x30) = lVar6;
    *(long *)(unaff_x29 + -0x28) = unaff_x29 + -0x20;
    (*(code *)puVar7[2])(uVar5,puVar7,lVar8,unaff_x29 + -0x40,unaff_x29 + -0xd8);
    uVar11 = *(undefined8 *)(unaff_x29 + -0xd0);
    uVar5 = *(undefined8 *)(unaff_x29 + -0xd8);
    puVar7 = *(undefined8 **)(unaff_x29 + -0xe0);
    puVar7[2] = *(undefined8 *)(unaff_x29 + -200);
    puVar7[1] = uVar11;
    *puVar7 = uVar5;
  }
  if (*(long *)(unaff_x27 + 0x28) != *(long *)(unaff_x29 + -0x10)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


