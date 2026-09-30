/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Vector3f>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 0265cf1c
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


void System_Array_EmptyInternalEnumerator<OVRPlugin_Vector3f>__System_Collections_IEnumerator_get_Current
               (long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long unaff_x19;
  undefined8 *puVar13;
  long unaff_x21;
  long *plVar14;
  ulong uVar15;
  
  puVar3 = PTR_DAT_06dbf2b0;
  puVar13 = *(undefined8 **)(unaff_x19 + 0x7f0);
  if ((*(byte *)(unaff_x21 + 0x584) & 1) == 0) {
    thunk_FUN_0159f088(PTR_DAT_06dd28e0);
    thunk_FUN_0159f088(PTR_DAT_06dbf2b0);
    thunk_FUN_0159f088(PTR_DAT_06da77f0);
    thunk_FUN_0159f088(PTR_DAT_06ddaf60);
    thunk_FUN_0159f088(PTR_DAT_06e2ecf8);
    thunk_FUN_0159f088(PTR_DAT_06e69db0);
    thunk_FUN_0159f088(PTR_DAT_06d8e940);
    *(undefined1 *)(unaff_x21 + 0x584) = 1;
  }
  puVar2 = PTR_DAT_06d8e940;
  FUN_0203aab4(param_1,*puVar13);
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_016466fc();
  }
  puVar4 = PTR_DAT_06e69db0;
  uVar7 = FUN_0264706c(param_2);
  lVar10 = *(long *)puVar2;
  if (*(int *)(lVar10 + 0xe0) == 0) {
    thunk_FUN_016466fc(lVar10);
  }
  uVar6 = FUN_0370a810(uVar7,0);
  lVar10 = thunk_FUN_015d056c(*(undefined8 *)puVar4);
  if (lVar10 != 0) {
    FUN_043c1c48(lVar10,(ulong)uVar6,*(undefined8 *)PTR_DAT_06e2ecf8);
    plVar14 = (long *)(param_1 + 0x10);
    *plVar14 = lVar10;
    thunk_FUN_01656ef8(plVar14,lVar10);
    puVar5 = PTR_DAT_06ddaf60;
    puVar4 = PTR_DAT_06dd28e0;
    if (0 < (int)uVar6) {
      uVar15 = 0;
      do {
        lVar10 = *plVar14;
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_016466fc();
        }
        uVar7 = FUN_0370a814(uVar15,0);
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_016466fc(*(long *)puVar3);
        }
        uVar7 = FUN_02646f14(param_2,uVar7);
        lVar8 = thunk_FUN_015d056c(*(undefined8 *)puVar4);
        if ((lVar8 == 0) || (FUN_02671c84(lVar8,uVar7), lVar10 == 0)) goto LAB_0265d168;
        lVar11 = *(long *)(lVar10 + 0x10);
        lVar12 = *(long *)puVar5;
        *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
        if (lVar11 == 0) goto LAB_0265d168;
        uVar1 = *(uint *)(lVar10 + 0x18);
        if (uVar1 < *(uint *)(lVar11 + 0x18)) {
          *(uint *)(lVar10 + 0x18) = uVar1 + 1;
          plVar9 = (long *)(lVar11 + (long)(int)uVar1 * 8 + 0x20);
          *plVar9 = lVar8;
          thunk_FUN_01656ef8(plVar9,lVar8);
        }
        else {
          (**(code **)(*(long *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x58) + 8))
                    (lVar10,lVar8);
        }
        uVar15 = uVar15 + 1;
      } while (uVar6 != uVar15);
    }
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_016466fc();
    }
    uVar7 = FUN_02646f98(param_2);
    *(undefined8 *)(param_1 + 0x18) = uVar7;
    thunk_FUN_01656ef8();
    return;
  }
LAB_0265d168:
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


