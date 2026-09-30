/*
FUNCTION_NAME: OVRPlugin$$get_eyeTrackedFoveatedRenderingSupported
ENTRY_POINT: 03685c78
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 162
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;foveation_rendering;frame_behavior;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_4;validity_or_gating_hits_1;paired_field_refs_with_eye_source;strong_foveation_hits_2;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


undefined8 OVRPlugin__get_eyeTrackedFoveatedRenderingSupported(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long *unaff_x19;
  long unaff_x20;
  undefined8 uVar10;
  
  thunk_FUN_01efb3a4();
  thunk_FUN_01efb3a4(Method_OVRControllerTest_<>c_<Start>b__4_26__);
  thunk_FUN_01efb3a4(Method_OVRControllerTest_<>c_<Start>b__4_27__);
  thunk_FUN_01efb3a4(Method_OVRControllerTest_<>c_<Start>b__4_28__);
  thunk_FUN_01efb3a4(Method_OVRControllerTest_<>c_<Start>b__4_20__);
  thunk_FUN_01efb3a4(Method_OVRControllerTest_<>c_<Start>b__4_29__);
  thunk_FUN_01efb3a4(Method_OVRControllerTest_<>c_<Start>b__4_3__);
  *(undefined1 *)(unaff_x20 + 0xe7a) = 1;
  puVar1 = Method_OVRControllerTest_<>c_<Start>b__4_20__;
  if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar7 = *unaff_x19;
  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *(long *)Method_OVRControllerTest_<>c_<Start>b__4_27__) {
        puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_03685d2c;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar5 = (undefined8 *)FUN_01ecb238();
LAB_03685d2c:
  uVar4 = (*(code *)*puVar5)();
  lVar7 = *(long *)puVar1;
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(lVar7);
    lVar7 = *(long *)puVar1;
  }
  puVar3 = Method_OVRControllerTest_<>c_<Start>b__4_3__;
  puVar2 = Method_OVRControllerTest_<>c_<Start>b__4_29__;
  if (*(long *)(*(long *)(lVar7 + 0xb8) + 0x10) == 0) {
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(lVar7);
      lVar7 = *(long *)puVar1;
    }
    uVar10 = **(undefined8 **)(lVar7 + 0xb8);
    uVar6 = thunk_FUN_01f117cc(*(undefined8 *)Method_OVRControllerTest_<>c_<Start>b__4_26__);
    FUN_02e665f4(uVar6,uVar10,*(undefined8 *)Method_OVRControllerTest_<>c_<Start>b__4_28__,0);
    puVar5 = (undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10);
    *puVar5 = uVar6;
    thunk_FUN_01f51358(puVar5,uVar6);
  }
  uVar6 = FUN_023039f4();
  uVar10 = thunk_FUN_01f117cc(*(undefined8 *)puVar3);
  FUN_0255facc(uVar10,uVar4,uVar6,*(undefined8 *)puVar2);
  return uVar10;
}


