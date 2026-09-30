/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Vector3f>$$.cctor
ENTRY_POINT: 0265cf7c
PROGRAM: vrfs-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_EmptyInternalEnumerator<OVRPlugin_Vector3f>___cctor(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long unaff_x21;
  long *plVar12;
  ulong uVar13;
  long unaff_x24;
  long *unaff_x26;
  
  thunk_FUN_0159f088();
  thunk_FUN_0159f088(PTR_DAT_06d8e940);
  *(undefined1 *)(unaff_x21 + 0x584) = 1;
  puVar2 = PTR_DAT_06d8e940;
  FUN_0203aab4();
  if (*(int *)(*unaff_x26 + 0xe0) == 0) {
    thunk_FUN_016466fc();
  }
  puVar3 = PTR_DAT_06e69db0;
  uVar6 = FUN_0264706c();
  lVar9 = *(long *)puVar2;
  if (*(int *)(lVar9 + 0xe0) == 0) {
    thunk_FUN_016466fc(lVar9);
  }
  uVar5 = FUN_0370a810(uVar6,0);
  lVar9 = thunk_FUN_015d056c(*(undefined8 *)puVar3);
  if (lVar9 != 0) {
    FUN_043c1c48(lVar9,(ulong)uVar5,*(undefined8 *)PTR_DAT_06e2ecf8);
    plVar12 = (long *)(unaff_x24 + 0x10);
    *plVar12 = lVar9;
    thunk_FUN_01656ef8(plVar12,lVar9);
    puVar4 = PTR_DAT_06ddaf60;
    puVar3 = PTR_DAT_06dd28e0;
    if (0 < (int)uVar5) {
      uVar13 = 0;
      do {
        lVar9 = *plVar12;
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_016466fc();
        }
        FUN_0370a814(uVar13,0);
        if (*(int *)(*unaff_x26 + 0xe0) == 0) {
          thunk_FUN_016466fc(*unaff_x26);
        }
        uVar6 = FUN_02646f14();
        lVar7 = thunk_FUN_015d056c(*(undefined8 *)puVar3);
        if ((lVar7 == 0) || (FUN_02671c84(lVar7,uVar6), lVar9 == 0)) goto LAB_0265d168;
        lVar10 = *(long *)(lVar9 + 0x10);
        lVar11 = *(long *)puVar4;
        *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
        if (lVar10 == 0) goto LAB_0265d168;
        uVar1 = *(uint *)(lVar9 + 0x18);
        if (uVar1 < *(uint *)(lVar10 + 0x18)) {
          *(uint *)(lVar9 + 0x18) = uVar1 + 1;
          plVar8 = (long *)(lVar10 + (long)(int)uVar1 * 8 + 0x20);
          *plVar8 = lVar7;
          thunk_FUN_01656ef8(plVar8,lVar7);
        }
        else {
          (**(code **)(*(long *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x58) + 8))
                    (lVar9,lVar7);
        }
        uVar13 = uVar13 + 1;
      } while (uVar5 != uVar13);
    }
    if (*(int *)(*unaff_x26 + 0xe0) == 0) {
      thunk_FUN_016466fc();
    }
    uVar6 = FUN_02646f98();
    *(undefined8 *)(unaff_x24 + 0x18) = uVar6;
    thunk_FUN_01656ef8();
    return;
  }
LAB_0265d168:
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


