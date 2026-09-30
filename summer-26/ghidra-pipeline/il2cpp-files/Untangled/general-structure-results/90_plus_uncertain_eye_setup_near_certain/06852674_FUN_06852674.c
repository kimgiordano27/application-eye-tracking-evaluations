/*
FUNCTION_NAME: FUN_06852674
ENTRY_POINT: 06852674
PROGRAM: Untangled-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_10;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_5
*/


void FUN_06852674(long param_1,long *param_2)

{
  byte bVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  ulong uVar5;
  ulong *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *extraout_x1;
  long *plVar9;
  ulong extraout_x1_00;
  ulong uVar10;
  ulong extraout_x1_01;
  ulong extraout_x1_02;
  long lVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  undefined1 auVar15 [16];
  
  plVar9 = param_2;
  if ((DAT_071d6b18 & 1) == 0) {
    FUN_02f07e70(HurricaneVR_Framework_Core_Grabbers_VelocityComparer_TypeInfo);
    FUN_02f07e70(OVRInput_OVRControllerGamepadAndroid_TypeInfo);
    FUN_02f07e70(OVRManager_PassthroughCapabilities_TypeInfo);
    FUN_02f07e70(OVRManager_SystemHeadsetType_TypeInfo);
    FUN_02f07e70(OVRInput_OVRControllerLTouch_TypeInfo);
    FUN_02f07e70(OVRGLTFLoader_<>c__DisplayClass26_0_TypeInfo);
    DAT_071d6b18 = 1;
    plVar9 = extraout_x1;
  }
  if (param_2 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)OVRGLTFLoader_<>c__DisplayClass26_0_TypeInfo + 0x130);
    if ((bVar1 <= *(byte *)(*param_2 + 0x130)) &&
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) ==
        *(long *)OVRGLTFLoader_<>c__DisplayClass26_0_TypeInfo)) {
      auVar3._8_8_ = 0;
      auVar3._0_8_ = plVar9;
      auVar15 = auVar3 << 0x40;
      if (*(long *)(param_1 + 0x448) != 0) {
        uVar5 = FUN_03fd102c(*(long *)(param_1 + 0x448),param_2,
                             *(undefined8 *)OVRManager_PassthroughCapabilities_TypeInfo);
        if ((uVar5 & 1) != 0) {
          return;
        }
        FUN_03abf04c(param_2,*(undefined8 *)(param_1 + 0x450),
                     *(undefined8 *)HurricaneVR_Framework_Core_Grabbers_VelocityComparer_TypeInfo);
        auVar4._8_8_ = 0;
        auVar4._0_8_ = extraout_x1_00;
        auVar15 = auVar4 << 0x40;
        if (*(long *)(param_1 + 0x458) != 0) {
          auVar15 = FUN_068d0d44(*(long *)(param_1 + 0x458),param_2,0);
          uVar10 = auVar15._8_8_;
          uVar5 = auVar15._0_8_;
          lVar11 = *(long *)(param_1 + 0x448);
          if (auVar15._0_4_ < 0) {
            if (lVar11 == 0) goto LAB_06852878;
            uVar12 = *(uint *)(lVar11 + 0x18);
          }
          else {
            if (lVar11 == 0) goto LAB_06852878;
            uVar12 = *(uint *)(lVar11 + 0x18);
            uVar10 = uVar5 & 0xffffffff;
            if (auVar15._0_4_ <= (int)uVar12) {
              FUN_03fd19b4(lVar11,uVar10,param_2,
                           *(undefined8 *)OVRManager_SystemHeadsetType_TypeInfo);
              return;
            }
          }
          auVar15._8_8_ = uVar10;
          auVar15._0_8_ = uVar5;
          lVar13 = *(long *)(lVar11 + 0x10);
          lVar14 = *(long *)OVRInput_OVRControllerGamepadAndroid_TypeInfo;
          *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
          if (lVar13 != 0) {
            if (uVar12 < *(uint *)(lVar13 + 0x18)) {
              *(uint *)(lVar11 + 0x18) = uVar12 + 1;
              puVar6 = (ulong *)(lVar13 + (long)(int)uVar12 * 8 + 0x20);
              *puVar6 = (ulong)param_2;
              thunk_FUN_02f411dc(puVar6,param_2);
              uVar5 = extraout_x1_01;
            }
            else {
              FUN_03fd0c9c(lVar11,param_2,
                           *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
              uVar5 = extraout_x1_02;
            }
            auVar2._8_8_ = 0;
            auVar2._0_8_ = uVar5;
            auVar15 = auVar2 << 0x40;
            if (*(long *)(param_1 + 0x458) != 0) {
              FUN_068d0324(*(long *)(param_1 + 0x458),param_2,0);
              return;
            }
          }
        }
      }
LAB_06852878:
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0(auVar15._0_8_,auVar15._8_8_);
    }
  }
  thunk_FUN_02f239f0(PTR_DAT_06d02080);
  uVar7 = thunk_FUN_02ef1808();
  uVar8 = thunk_FUN_02f239f0(OVRManager_XrApi_TypeInfo);
  FUN_0555e840(uVar7,uVar8,0);
  uVar8 = thunk_FUN_02f239f0(OVRMesh_IOVRMeshDataProvider_TypeInfo);
                    /* WARNING: Subroutine does not return */
  FUN_02f07f94(uVar7,uVar8);
}


