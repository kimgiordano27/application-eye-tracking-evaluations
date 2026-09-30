/*
FUNCTION_NAME: FUN_0654f3a0
ENTRY_POINT: 0654f3a0
PROGRAM: Untangled-libil2cpp.so
SCORE: 103
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_12;weak_xr_or_state_hits_10;validity_or_gating_hits_8;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void FUN_0654f3a0(undefined8 param_1,long *param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  
  puVar1 = PTR_DAT_06d02220;
                    /* try { // try from 0654f3a4 to 0664f3a7 has its CatchHandler @ 0654f3d0 */
                    /* try { // try from 0654f3a8 to 0664f3df has its CatchHandler @ 0654ebb8 */
                    /* catch() { ... } // from try @ 0654f3a4 with catch @ 0654f3d0 */
  if ((DAT_071ce6a4 & 1) == 0) {
                    /* try { // try from 0654f3e0 to 0664f3e7 has its CatchHandler @ 0654f3fc */
    FUN_02f07e70(OVRPlugin_BoneCapsule___TypeInfo);
                    /* try { // try from 0654f3e8 to 0664f3f3 has its CatchHandler @ 0654ebb8 */
    FUN_02f07e70(PTR_DAT_06d02378);
                    /* try { // try from 0654f3f4 to 0664f3fb has its CatchHandler @ 0654f3fc */
    FUN_02f07e70(OVRPlugin_EyeGazeState___TypeInfo);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0654f378 with catch @ 0654f3fc
                       catch(type#2 @ 00000000) { ... } // from try @ 0654f3e0 with catch @ 0654f3fc
                       catch(type#2 @ 00000000) { ... } // from try @ 0654f3f4 with catch @ 0654f3fc
                        */
    FUN_02f07e70(PTR_DAT_06d02220);
    FUN_02f07e70(OVRPlugin_FaceTrackingDataSource___TypeInfo);
    FUN_02f07e70(OVRPlugin_GetBoneSkeleton2Delegate___TypeInfo);
    FUN_02f07e70(UnityEngine_InputSystem_InputControlScheme_SchemeJson___TypeInfo);
    FUN_02f07e70(PTR_DAT_06d3be30);
    FUN_02f07e70(PTR_DAT_06d02568);
    FUN_02f07e70(OVRPlugin_GetBoneSkeleton3Delegate___TypeInfo);
    FUN_02f07e70(UnityEngine_InputSystem_LowLevel_InputEventTrace_DeviceInfo___TypeInfo);
    FUN_02f07e70(PTR_DAT_06d38e18);
    DAT_071ce6a4 = 1;
  }
  lVar5 = FUN_02f07f14(*(undefined8 *)puVar1,7);
  plVar6 = (long *)thunk_FUN_02ebbee0(param_1,0);
  if (plVar6 != (long *)0x0) {
    uVar7 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
    if (lVar5 != 0) {
      if (*(int *)(lVar5 + 0x18) != 0) {
        *(undefined8 *)(lVar5 + 0x20) = uVar7;
        thunk_FUN_02f411dc((undefined8 *)(lVar5 + 0x20),uVar7);
        puVar4 = OVRPlugin_GetBoneSkeleton2Delegate___TypeInfo;
        puVar1 = PTR_DAT_06d02568;
        if (1 < *(uint *)(lVar5 + 0x18)) {
          *(undefined8 *)(lVar5 + 0x28) =
               *(undefined8 *)OVRPlugin_GetBoneSkeleton3Delegate___TypeInfo;
          thunk_FUN_02f411dc();
          lVar8 = *(long *)puVar4;
          if (*(int *)(lVar8 + 0xe0) == 0) {
            thunk_FUN_02f12b58();
            lVar8 = *(long *)puVar4;
          }
          puVar3 = OVRPlugin_BoneCapsule___TypeInfo;
          puVar2 = PTR_DAT_06d02378;
          uVar7 = *(undefined8 *)puVar1;
          lVar9 = *(long *)(*(long *)(lVar8 + 0xb8) + 8);
          if (lVar9 == 0) {
            if (*(int *)(lVar8 + 0xe0) == 0) {
              thunk_FUN_02f12b58();
              lVar8 = *(long *)puVar4;
            }
            uVar10 = **(undefined8 **)(lVar8 + 0xb8);
            lVar9 = thunk_FUN_02ef1808(*(undefined8 *)OVRPlugin_EyeGazeState___TypeInfo);
            FUN_05138548(lVar9,uVar10,*(undefined8 *)OVRPlugin_FaceTrackingDataSource___TypeInfo,0);
            plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 8);
            *plVar6 = lVar9;
            thunk_FUN_02f411dc(plVar6,lVar9);
          }
          uVar10 = FUN_03a25128(param_3,lVar9,*(undefined8 *)puVar3);
          uVar10 = FUN_03a2ed10(uVar10,*(undefined8 *)puVar2);
          uVar7 = FUN_05465f68(uVar7,uVar10,0);
          if (2 < *(uint *)(lVar5 + 0x18)) {
            *(undefined8 *)(lVar5 + 0x30) = uVar7;
            thunk_FUN_02f411dc((undefined8 *)(lVar5 + 0x30),uVar7);
            if (3 < *(uint *)(lVar5 + 0x18)) {
              *(undefined8 *)(lVar5 + 0x38) =
                   *(undefined8 *)UnityEngine_InputSystem_InputControlScheme_SchemeJson___TypeInfo;
              thunk_FUN_02f411dc();
              puVar1 = UnityEngine_InputSystem_LowLevel_InputEventTrace_DeviceInfo___TypeInfo;
              if (param_2 == (long *)0x0) goto LAB_0654f6e0;
              local_58 = FUN_0654e2e0(param_2);
              local_68 = *(undefined8 *)puVar1;
              uStack_60 = 0xffffffffffffffff;
              uVar7 = FUN_05638848(&local_68,0);
              if (4 < *(uint *)(lVar5 + 0x18)) {
                *(undefined8 *)(lVar5 + 0x40) = uVar7;
                thunk_FUN_02f411dc((undefined8 *)(lVar5 + 0x40),uVar7);
                if (5 < *(uint *)(lVar5 + 0x18)) {
                  *(undefined8 *)(lVar5 + 0x48) = *(undefined8 *)PTR_DAT_06d3be30;
                  thunk_FUN_02f411dc((undefined8 *)(lVar5 + 0x48));
                  uVar7 = (**(code **)(*param_2 + 0x168))(param_2,*(undefined8 *)(*param_2 + 0x170))
                  ;
                  puVar1 = PTR_DAT_06d38e18;
                  if (6 < *(uint *)(lVar5 + 0x18)) {
                    *(undefined8 *)(lVar5 + 0x50) = uVar7;
                    thunk_FUN_02f411dc();
                    uVar7 = FUN_0546583c(lVar5,0);
                    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                      thunk_FUN_02f12b58(*(long *)puVar1);
                    }
                    FUN_0654e488(uVar7);
                    return;
                  }
                }
              }
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_02f080c8();
    }
  }
LAB_0654f6e0:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


