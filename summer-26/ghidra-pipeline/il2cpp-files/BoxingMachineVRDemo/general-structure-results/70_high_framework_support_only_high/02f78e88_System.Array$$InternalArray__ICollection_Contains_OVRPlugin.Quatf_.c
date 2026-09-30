/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Contains<OVRPlugin.Quatf>
ENTRY_POINT: 02f78e88
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__ICollection_Contains<OVRPlugin_Quatf>(ulong param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined4 *puVar4;
  long unaff_x19;
  long *unaff_x20;
  undefined8 uVar5;
  long *unaff_x21;
  long *plVar6;
  long lVar7;
  long unaff_x24;
  ulong uVar8;
  long *unaff_x27;
  
  uVar8 = 0;
  param_1 = param_1 & 0xffffffff;
  do {
    if (param_1 <= uVar8) goto LAB_02f790c8;
    lVar7 = *(long *)(unaff_x24 + 0x20 + uVar8 * 8);
    if (*(int *)(*unaff_x27 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar2 = FUN_0606f530(lVar7,0);
    if ((uVar2 & 1) != 0) {
      if (lVar7 == 0) goto LAB_02f790c4;
      lVar3 = FUN_06066c74(lVar7,0);
      if (DAT_06b7224b == '\0') {
        FUN_02d6084c();
        DAT_06b7224b = '\x01';
      }
      if (lVar3 == 0) goto LAB_02f790c4;
      puVar4 = *(undefined4 **)(*unaff_x20 + 0xb8);
      FUN_0607832c(*puVar4,puVar4[1],puVar4[2],lVar3,0);
      lVar3 = FUN_06066c74(lVar7,0);
      if (DAT_06b72246 == '\0') {
        FUN_02d6084c();
        DAT_06b72246 = '\x01';
      }
      if (lVar3 == 0) goto LAB_02f790c4;
      puVar4 = *(undefined4 **)(*unaff_x21 + 0xb8);
      FUN_06079060(*puVar4,puVar4[1],puVar4[2],puVar4[3],lVar3,0);
      lVar7 = FUN_06066c74(lVar7,0);
      if (DAT_06b722a7 == '\0') {
        FUN_02d6084c();
        DAT_06b722a7 = '\x01';
      }
      if (lVar7 == 0) goto LAB_02f790c4;
      lVar3 = *(long *)(*unaff_x20 + 0xb8);
      FUN_0607946c(*(undefined4 *)(lVar3 + 0xc),*(undefined4 *)(lVar3 + 0x10),
                   *(undefined4 *)(lVar3 + 0x14),lVar7,0);
    }
    puVar1 = PTR_DAT_0675e1b8;
    param_1 = (ulong)*(uint *)(unaff_x24 + 0x18);
    uVar8 = uVar8 + 1;
  } while ((long)uVar8 < (long)(int)*(uint *)(unaff_x24 + 0x18));
  if (*(int *)(unaff_x19 + 0x2c) != 0) {
    lVar7 = *(long *)(unaff_x19 + 0x20);
    if (lVar7 == 0) {
LAB_02f790c4:
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    if (1 < *(int *)(lVar7 + 0x18)) {
      uVar5 = *(undefined8 *)(lVar7 + 0x20);
      if (*(int *)(*(long *)PTR_DAT_0675e1b8 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar8 = UnityEngine_Font__add_textureRebuilt(uVar5,0,0);
      if ((uVar8 & 1) == 0) {
        lVar7 = *(long *)(unaff_x19 + 0x20);
        if (lVar7 != 0) {
          lVar3 = 5;
          do {
            if ((long)(int)*(uint *)(lVar7 + 0x18) <= (long)(lVar3 - 4U)) {
              return;
            }
            if ((ulong)*(uint *)(lVar7 + 0x18) <= lVar3 - 4U) {
LAB_02f790c8:
                    /* WARNING: Subroutine does not return */
              FUN_02d60af0();
            }
            plVar6 = *(long **)(lVar7 + lVar3 * 8);
            if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
            }
            uVar8 = FUN_0606f530(plVar6,0);
            if ((uVar8 & 1) != 0) {
              if (plVar6 == (long *)0x0) break;
              (**(code **)(*plVar6 + 0x1c8))
                        (plVar6,uVar5,*(undefined4 *)(unaff_x19 + 0x2c),
                         *(undefined8 *)(*plVar6 + 0x1d0));
              FUN_02f79604(plVar6,0);
              FUN_02f79754(plVar6,0);
              FUN_02f798a4(plVar6,0);
              FUN_02f799f4(plVar6,0);
            }
            lVar7 = *(long *)(unaff_x19 + 0x20);
            lVar3 = lVar3 + 1;
          } while (lVar7 != 0);
        }
        goto LAB_02f790c4;
      }
    }
  }
  return;
}


