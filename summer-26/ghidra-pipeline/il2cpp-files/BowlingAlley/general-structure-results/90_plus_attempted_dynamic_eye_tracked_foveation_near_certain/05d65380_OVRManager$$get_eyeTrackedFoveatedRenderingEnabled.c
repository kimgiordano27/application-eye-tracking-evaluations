/*
FUNCTION_NAME: OVRManager$$get_eyeTrackedFoveatedRenderingEnabled
ENTRY_POINT: 05d65380
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 165
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_4;paired_field_refs_with_eye_source;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void OVRManager__get_eyeTrackedFoveatedRenderingEnabled(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  
  puVar4 = PTR_DAT_072b1160;
  puVar3 = PTR_DAT_072b1158;
  puVar2 = PTR_DAT_072b1148;
  if ((DAT_076d861f & 1) == 0) {
    thunk_FUN_032e1da0(PTR_DAT_072b1168);
    thunk_FUN_032e1da0(PTR_DAT_072b1170);
    thunk_FUN_032e1da0(PTR_DAT_072ae1a8);
    thunk_FUN_032e1da0(PTR_DAT_072b1160);
    thunk_FUN_032e1da0(PTR_DAT_072b1178);
    thunk_FUN_032e1da0(PTR_DAT_072b1158);
    thunk_FUN_032e1da0(PTR_DAT_072b1148);
    thunk_FUN_032e1da0(PTR_DAT_072b1180);
    thunk_FUN_032e1da0(PTR_DAT_072b1188);
    DAT_076d861f = 1;
  }
  lVar5 = thunk_FUN_032a56a0(*(undefined8 *)puVar2);
  System_Collections_Generic_List<HIDParser_HIDReportData>__Clear(lVar5,*(undefined8 *)puVar3);
  lVar6 = thunk_FUN_032a56a0(*(undefined8 *)puVar4);
  uVar10 = DAT_0139d8d8;
  *(undefined4 *)(lVar6 + 0x10) = 7;
  *(undefined8 *)(lVar6 + 0x14) = uVar10;
  FUN_059660a0(lVar6,0);
  if (lVar5 != 0) {
    lVar8 = *(long *)(lVar5 + 0x10);
    lVar9 = *(long *)PTR_DAT_072b1178;
    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
    puVar2 = PTR_DAT_072b1188;
    if (lVar8 != 0) {
      uVar1 = *(uint *)(lVar5 + 0x18);
      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
        plVar7 = (long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
        *plVar7 = lVar6;
        thunk_FUN_0333a630(plVar7,lVar6);
      }
      else {
        FUN_041e2c78(lVar5,lVar6,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
      }
      *(long *)(param_1 + 0x40) = lVar5;
      thunk_FUN_0333a630((long *)(param_1 + 0x40),lVar5);
      *(undefined4 *)(param_1 + 0x48) = 0x3d4ccccd;
      lVar5 = *(long *)puVar2;
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar5 = *(long *)puVar2;
      }
      puVar4 = PTR_DAT_072b1170;
      puVar3 = PTR_DAT_072b1168;
      lVar6 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
      if (lVar6 == 0) {
        if (*(int *)(lVar5 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
          lVar5 = *(long *)puVar2;
        }
        uVar10 = **(undefined8 **)(lVar5 + 0xb8);
        lVar6 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072ae1a8);
        FUN_055c676c(lVar6,uVar10,*(undefined8 *)PTR_DAT_072b1180,0);
        plVar7 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
        *plVar7 = lVar6;
        thunk_FUN_0333a630(plVar7,lVar6);
      }
      *(long *)(param_1 + 0x50) = lVar6;
      thunk_FUN_0333a630((long *)(param_1 + 0x50),lVar6);
      uVar10 = thunk_FUN_032a56a0(*(undefined8 *)puVar4);
      FUN_0512be90(uVar10,*(undefined8 *)puVar3);
      *(undefined8 *)(param_1 + 0x58) = uVar10;
      thunk_FUN_0333a630((undefined8 *)(param_1 + 0x58),uVar10);
      thunk_FUN_06be6094(param_1,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


