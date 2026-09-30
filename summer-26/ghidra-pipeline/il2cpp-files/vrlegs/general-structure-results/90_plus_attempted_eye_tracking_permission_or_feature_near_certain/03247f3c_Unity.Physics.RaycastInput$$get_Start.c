/*
FUNCTION_NAME: Unity.Physics.RaycastInput$$get_Start
ENTRY_POINT: 03247f3c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 133
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;frame_behavior;attempted_use
EVIDENCE: strong_eye_source_hits_8;weak_xr_or_state_hits_7;validity_or_gating_hits_4;ray_or_cast_sink_hits_4;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;functionality_eye_api_context_without_clear_sink_hits_8
*/


long Unity_Physics_RaycastInput__get_Start(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  int *piVar8;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long lVar9;
  ulong uVar10;
  
  FUN_01ab69ac(OVRPlugin_Bone___TypeInfo);
  FUN_01ab69ac(OVRPlugin_BoneCapsule___TypeInfo);
  *(undefined1 *)(unaff_x20 + 0x76e) = 1;
  if (unaff_x19 == (long *)0x0) {
    thunk_FUN_01a6ca08(PTR_DAT_03cbdf98);
    uVar4 = thunk_FUN_01a89e68();
    uVar5 = thunk_FUN_01a6ca08(OVRPlugin_EyeGazeState___TypeInfo);
    FUN_026a44fc(uVar4,uVar5,0);
    uVar5 = thunk_FUN_01a6ca08(OVRPlugin_FaceTrackingDataSource___TypeInfo);
                    /* WARNING: Subroutine does not return */
    FUN_01ab6b14(uVar4,uVar5);
  }
  lVar2 = thunk_FUN_01a89e68(*(undefined8 *)OVRPlugin_BoneCapsule___TypeInfo);
  FUN_027b3d9c(lVar2,0);
  puVar1 = OVRPlugin_BodyJointLocation___TypeInfo;
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  *(long *)(lVar2 + 0x10) = unaff_x21;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  *(long **)(lVar2 + 0x18) = unaff_x19;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  FUN_01f279e4(unaff_x21 + 0x20,lVar2,*(undefined8 *)puVar1);
  puVar1 = OVRPlugin_Bone___TypeInfo;
  lVar9 = *(long *)(unaff_x21 + 0x28);
  if ((lVar9 != 0) && (0 < (int)*(ulong *)(lVar9 + 0x18))) {
    uVar10 = 0;
    uVar6 = *(ulong *)(lVar9 + 0x18) & 0xffffffff;
    do {
      if (uVar6 <= uVar10) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      lVar7 = *unaff_x19;
      uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar6 != 0) {
        piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
            puVar3 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_03248038;
          }
          uVar6 = uVar6 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined8 *)FUN_01a472ec();
LAB_03248038:
      (*(code *)*puVar3)();
      uVar6 = (ulong)*(uint *)(lVar9 + 0x18);
      uVar10 = uVar10 + 1;
    } while ((long)uVar10 < (long)(int)*(uint *)(lVar9 + 0x18));
  }
  return lVar2;
}


