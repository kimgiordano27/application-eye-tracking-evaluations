/*
FUNCTION_NAME: FUN_0294acf0
ENTRY_POINT: 0294acf0
PROGRAM: vrfs-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FUN_0294acf0(long param_1)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  
  if ((bRam0000000007233e4d & 1) == 0) {
    thunk_FUN_0159f088(PTR_DAT_06dcbbf0);
    thunk_FUN_0159f088(PTR_DAT_06e1b9c8);
    thunk_FUN_0159f088(PTR_DAT_06e38e90);
    thunk_FUN_0159f088(PTR_DAT_06d9fd78);
    bRam0000000007233e4d = 1;
  }
  puVar1 = PTR_DAT_06d9fd78;
  if (*(long *)(param_1 + 0x30) != 0) {
    lVar3 = FUN_039e6510(*(long *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x50),0);
    plVar7 = (long *)(param_1 + 0x78);
    lVar8 = *plVar7;
    lVar6 = *(long *)puVar1;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_016466fc(lVar6);
    }
    uVar4 = FUN_051d2ac0(lVar3,lVar8,0);
    if ((uVar4 & 1) == 0) {
LAB_0294ae74:
      uVar5 = *(undefined8 *)(param_1 + 0x80);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      FUN_051d2ac0(uVar5,0,0);
      return;
    }
    *plVar7 = lVar3;
    thunk_FUN_01656ef8(plVar7,lVar3);
    if (lVar3 != 0) {
      uVar5 = FUN_01a257e8(lVar3,*(undefined8 *)PTR_DAT_06e38e90);
      *(undefined8 *)(param_1 + 0x80) = uVar5;
      thunk_FUN_01656ef8();
      lVar3 = FUN_051df7a8(lVar3,0);
      if ((lVar3 != 0) && (lVar3 = FUN_0431b09c(lVar3,*(undefined8 *)PTR_DAT_06dcbbf0), lVar3 != 0))
      {
        lVar3 = FUN_036e1350(lVar3,0);
        plVar7 = (long *)(param_1 + 0x88);
        *plVar7 = lVar3;
        thunk_FUN_01656ef8(plVar7,lVar3);
        if (*plVar7 != 0) {
          uVar5 = FUN_0431ae70(*plVar7,*(undefined8 *)PTR_DAT_06e1b9c8);
          *(undefined8 *)(param_1 + 0x90) = uVar5;
          thunk_FUN_01656ef8((undefined8 *)(param_1 + 0x90),uVar5);
          if (*(long *)(param_1 + 0x88) != 0) {
            iVar2 = Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>___ctor
                              (*(long *)(param_1 + 0x88),0);
            if (iVar2 == 0) {
              uVar5 = 0;
            }
            else {
              if (*plVar7 == 0) goto LAB_0294aea4;
              uVar5 = FUN_036e1620(*plVar7,0);
            }
            *(undefined8 *)(param_1 + 0x98) = uVar5;
            thunk_FUN_01656ef8();
            goto LAB_0294ae74;
          }
        }
      }
    }
  }
LAB_0294aea4:
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


