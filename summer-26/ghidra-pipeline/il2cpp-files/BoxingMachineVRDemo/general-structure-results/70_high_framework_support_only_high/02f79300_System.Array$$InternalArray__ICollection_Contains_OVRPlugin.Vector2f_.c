/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Contains<OVRPlugin.Vector2f>
ENTRY_POINT: 02f79300
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__ICollection_Contains<OVRPlugin_Vector2f>(void)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  code *in_x9;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x22;
  long unaff_x24;
  
  lVar2 = (*in_x9)();
  puVar1 = PTR_DAT_0675e1b8;
  if (*(int *)(*(long *)PTR_DAT_0675e1b8 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4(*(long *)PTR_DAT_0675e1b8);
  }
  uVar3 = FUN_0606f530(lVar2,0);
  if ((uVar3 & 1) == 0) {
    return;
  }
  if (lVar2 != 0) {
    lVar2 = *(long *)(lVar2 + 0x20);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar3 = FUN_0606f530(lVar2,0);
    if ((uVar3 & 1) == 0) {
      return;
    }
    if (*(char *)(unaff_x20 + 0x31) != '\0') {
      lVar7 = *(long *)(unaff_x20 + 0x20);
      if (lVar7 == 0) goto LAB_02f79518;
      if (*(uint *)(lVar7 + 0x18) <= unaff_w19) goto LAB_02f7951c;
      lVar7 = *(long *)(lVar7 + unaff_x24 * 8 + 0x20);
      if (lVar7 == 0) goto LAB_02f79518;
      lVar7 = FUN_0335b1b8(lVar7,*(undefined8 *)PTR_DAT_06762c78);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4(*(long *)puVar1);
      }
      uVar3 = FUN_0606f530(lVar7,0);
      if ((uVar3 & 1) != 0) {
        if (lVar7 == 0) goto LAB_02f79518;
        lVar7 = FUN_02f88a3c(lVar7,0);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4(*(long *)puVar1);
        }
        uVar3 = FUN_0606f530(lVar7,0);
        if ((uVar3 & 1) != 0) {
          plVar4 = (long *)FUN_02d60934(*(undefined8 *)PTR_DAT_06762dc8,2);
          if (plVar4 == (long *)0x0) goto LAB_02f79518;
          if ((lVar2 != 0) &&
             (lVar5 = thunk_FUN_02d9d438(lVar2,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0)) {
LAB_02f79520:
            uVar6 = thunk_FUN_02daa0c0();
                    /* WARNING: Subroutine does not return */
            FUN_02d609b4(uVar6,0);
          }
          if ((int)plVar4[3] != 0) {
            plVar4[4] = lVar2;
            thunk_FUN_02dd37b4(plVar4 + 4,lVar2);
            if ((lVar7 != 0) &&
               (lVar2 = thunk_FUN_02d9d438(lVar7,*(undefined8 *)(*plVar4 + 0x40)), lVar2 == 0))
            goto LAB_02f79520;
            if (1 < *(uint *)(plVar4 + 3)) {
              plVar4[5] = lVar7;
              thunk_FUN_02dd37b4(plVar4 + 5,lVar7);
              FUN_02f791d8();
              return;
            }
          }
          goto LAB_02f7951c;
        }
      }
    }
    if (unaff_x22 != 0) {
      if (unaff_w19 < *(uint *)(unaff_x22 + 0x18)) {
        lVar7 = *(long *)(unaff_x22 + unaff_x24 * 0x10 + 0x28);
        if ((lVar7 != 0) && (*(int *)(lVar7 + 0x18) == 1)) {
          uVar6 = *(undefined8 *)(lVar7 + 0x20);
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          uVar3 = FUN_0606a004(uVar6,lVar2,0);
          if ((uVar3 & 1) == 0) {
            return;
          }
        }
        FUN_02f790e8();
        return;
      }
LAB_02f7951c:
                    /* WARNING: Subroutine does not return */
      FUN_02d60af0();
    }
  }
LAB_02f79518:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


