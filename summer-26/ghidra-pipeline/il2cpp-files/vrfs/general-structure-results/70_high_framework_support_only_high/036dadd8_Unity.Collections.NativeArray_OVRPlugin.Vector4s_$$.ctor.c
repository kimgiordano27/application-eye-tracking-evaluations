/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$.ctor
ENTRY_POINT: 036dadd8
PROGRAM: vrfs-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 Unity_Collections_NativeArray<OVRPlugin_Vector4s>___ctor(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  if ((unaff_x20 != 0) && (*(long *)(unaff_x20 + 0xe0) != 0)) {
    uVar2 = *(uint *)(*(long *)(unaff_x20 + 0xe0) + 0x90);
    uVar1 = 7;
    if (uVar2 != 0xff) {
      uVar1 = uVar2;
    }
    if ((unaff_x21 != 0) && (*(long *)(unaff_x21 + 0xe0) != 0)) {
      uVar3 = *(uint *)(*(long *)(unaff_x21 + 0xe0) + 0x90);
      uVar10 = *(undefined8 *)(unaff_x21 + 0xc0);
      uVar9 = *(undefined8 *)(unaff_x20 + 0xc0);
      uVar2 = 7;
      if (uVar3 != 0xff) {
        uVar2 = uVar3;
      }
      if (*(int *)(*(long *)PTR_DAT_06e34bf8 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      uVar5 = FUN_047562e8(uVar10,uVar9,0);
      if (((((uVar5 & 1) != 0) &&
           ((((*(char *)(unaff_x20 + 0x76) != '\0' || (*(char *)(unaff_x21 + 0x76) == '\0')) &&
             (uVar5 = FUN_036dc96c(), (uVar5 & 1) != 0)) &&
            ((*(long *)(unaff_x20 + 0x90) == 0 ||
             (uVar5 = FUN_036dc9b0(uVar5,*(undefined8 *)(unaff_x20 + 0xe0),
                                   *(undefined8 *)(unaff_x21 + 0xe0)), (uVar5 & 1) != 0)))))) &&
          ((uVar2 | uVar1) == uVar2)) &&
         (((*(long *)(unaff_x21 + 200) != 0 && (*(long *)(unaff_x20 + 200) != 0)) &&
          (uVar5 = FUN_03fc5448(*(long *)(unaff_x21 + 200),*(long *)(unaff_x20 + 200),0xffffffe3,0),
          (uVar5 & 1) != 0)))) {
        return 1;
      }
      plVar6 = (long *)FUN_0160edfc(*(undefined8 *)PTR_DAT_06e57350,2);
      if (plVar6 != (long *)0x0) {
        lVar8 = *(long *)(unaff_x21 + 0xc0);
        if ((lVar8 != 0) &&
           (lVar7 = thunk_FUN_015d0480(lVar8,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0)) {
LAB_036daf84:
          uVar9 = thunk_FUN_015f0d94();
                    /* WARNING: Subroutine does not return */
          FUN_0160ee7c(uVar9,0);
        }
        if ((int)plVar6[3] != 0) {
          plVar6[4] = lVar8;
          thunk_FUN_01656ef8(plVar6 + 4,lVar8);
          lVar8 = *(long *)(unaff_x20 + 0xc0);
          if ((lVar8 != 0) &&
             (lVar7 = thunk_FUN_015d0480(lVar8,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0))
          goto LAB_036daf84;
          puVar4 = PTR_DAT_06dd57c0;
          if (1 < *(uint *)(plVar6 + 3)) {
            plVar6[5] = lVar8;
            thunk_FUN_01656ef8(plVar6 + 5,lVar8);
            uVar9 = FUN_04748adc(*(undefined8 *)puVar4,plVar6,0);
            *(undefined8 *)(unaff_x19 + 0x40) = uVar9;
            thunk_FUN_01656ef8((undefined8 *)(unaff_x19 + 0x40),uVar9);
            return 0;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_0160eebc();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


