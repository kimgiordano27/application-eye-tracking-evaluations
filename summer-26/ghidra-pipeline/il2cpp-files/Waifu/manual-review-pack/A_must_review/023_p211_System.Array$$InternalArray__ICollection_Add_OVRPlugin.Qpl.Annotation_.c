/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Add<OVRPlugin.Qpl.Annotation>
ENTRY_POINT: 0377d45c
PROGRAM: Waifu-libil2cpp.so
SCORE: 137
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_4;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_4
*/


void System_Array__InternalArray__ICollection_Add<OVRPlugin_Qpl_Annotation>(void)

{
  float fVar1;
  float fVar2;
  ulong uVar3;
  long unaff_x19;
  long unaff_x20;
  long lVar4;
  undefined1 unaff_w21;
  undefined8 uVar5;
  float fVar6;
  float fStack0000000000000000;
  float fStack0000000000000004;
  float fStack0000000000000008;
  float fStack000000000000000c;
  float fStack0000000000000010;
  float fStack0000000000000014;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined4 uStack0000000000000020;
  undefined8 uStack0000000000000024;
  
  DataMemoryBarrier(2,3);
  *(undefined1 *)(unaff_x20 + 0xff0) = unaff_w21;
  uStack0000000000000024 = 0;
  uStack0000000000000020 = 0;
  _fStack0000000000000008 = 0;
  _fStack0000000000000000 = 0;
  uStack0000000000000018 = 0;
  uStack000000000000001c = 0;
  _fStack0000000000000010 = 0;
  FUN_0377d634(unaff_x19 + 0x40,*(undefined8 *)(unaff_x19 + 0x28));
  uVar5 = *(undefined8 *)(unaff_x19 + 0x30);
  if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
    FUN_033b9870();
  }
  uVar3 = FUN_07a11b14(uVar5,0);
  if (((uVar3 & 1) != 0) && (uVar3 = FUN_0377d75c(unaff_x19 + 0x40), (uVar3 & 1) != 0)) {
    uVar5 = FUN_07a84b08();
    if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
      FUN_033b9870(DAT_083cf7d8);
    }
    uVar3 = FUN_07a0d2c4(uVar5,0,0);
    if ((uVar3 & 1) != 0) {
      lVar4 = *(long *)(unaff_x19 + 0x30);
      if (lVar4 != 0) {
        if (DAT_086edcc0 == (code *)0x0) {
          DAT_086edcc0 = (code *)FUN_033d1b68("UnityEngine.Renderer::set_enabled(System.Boolean)");
        }
        (*DAT_086edcc0)(lVar4,1);
        lVar4 = *(long *)(unaff_x19 + 0x30);
        if (lVar4 != 0) {
          if (DAT_086ef188 == (code *)0x0) {
            DAT_086ef188 = (code *)FUN_033d1b68("UnityEngine.Component::get_transform()");
          }
          lVar4 = (*DAT_086ef188)(lVar4);
          if (lVar4 != 0) {
            uVar3 = _fStack0000000000000010 & 0xffffffff;
            fVar2 = fStack0000000000000014;
            fVar6 = *(float *)(unaff_x19 + 0x38);
            fVar1 = fStack000000000000000c;
            FUN_07a18dcc(fStack000000000000000c * fVar6 + fStack0000000000000000,
                         fStack0000000000000010 * fVar6 + fStack0000000000000004,
                         fStack0000000000000014 * fVar6 + fStack0000000000000008,lVar4,0);
            lVar4 = *(long *)(unaff_x19 + 0x30);
            if (lVar4 != 0) {
              if (DAT_086ef188 == (code *)0x0) {
                DAT_086ef188 = (code *)FUN_033d1b68("UnityEngine.Component::get_transform()");
              }
              lVar4 = (*DAT_086ef188)(lVar4);
              FUN_07a00a64(fVar1,uVar3,fVar2,0);
              if (lVar4 != 0) {
                FUN_07a1914c(lVar4,0);
                return;
              }
            }
          }
        }
      }
      goto LAB_0377d630;
    }
  }
  lVar4 = *(long *)(unaff_x19 + 0x30);
  if (lVar4 != 0) {
    if (DAT_086edcc0 == (code *)0x0) {
      DAT_086edcc0 = (code *)FUN_033d1b68("UnityEngine.Renderer::set_enabled(System.Boolean)");
    }
    (*DAT_086edcc0)(lVar4,0);
    return;
  }
LAB_0377d630:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


