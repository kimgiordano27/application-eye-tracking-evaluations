/*
FUNCTION_NAME: System.Array$$IndexOfImpl<OVRPlugin.Qpl.Annotation.Builder.Entry>
ENTRY_POINT: 03f2acf4
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 161
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_3;paired_field_refs_with_eye_source;telemetry_or_network_hits_1;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__IndexOfImpl<OVRPlugin_Qpl_Annotation_Builder_Entry>(long param_1)

{
  byte bVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  long *unaff_x20;
  long unaff_x21;
  int unaff_w22;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  
  while (*(long *)(param_1 + 0x20) != 0) {
    lVar3 = FUN_04de82e0(*(long *)(param_1 + 0x20),unaff_w22,*unaff_x26);
                    /* try { // try from 03f2ad10 to 0402ad37 has its CatchHandler @ 03f2bb40 */
    if (((*(long *)(unaff_x21 + 0x20) == 0) ||
        (lVar4 = FUN_04de82e0(*(long *)(unaff_x21 + 0x20),unaff_w22,*unaff_x26), lVar4 == 0)) ||
       (lVar3 == 0)) break;
    *(undefined1 *)(lVar3 + 0x191) = *(undefined1 *)(lVar4 + 0x191);
    if ((*unaff_x20 == 0) || (lVar3 = *(long *)(*unaff_x20 + 0x20), lVar3 == 0)) break;
    lVar3 = FUN_04de82e0(lVar3,unaff_w22,*unaff_x26);
    if ((*(long *)(unaff_x21 + 0x20) == 0) ||
       ((lVar4 = FUN_04de82e0(*(long *)(unaff_x21 + 0x20),unaff_w22,*unaff_x26), lVar4 == 0 ||
        (lVar3 == 0)))) break;
                    /* try { // try from 03f2ad74 to 0402ad9f has its CatchHandler @ 03f2bb3c */
    *(undefined8 *)(lVar3 + 0x198) = *(undefined8 *)(lVar4 + 0x198);
    thunk_FUN_03afed3c(lVar3 + 0x198);
    if ((*unaff_x20 == 0) || (lVar3 = *(long *)(*unaff_x20 + 0x20), lVar3 == 0)) break;
    lVar3 = FUN_04de82e0(lVar3,unaff_w22,*unaff_x26);
    if (((*(long *)(unaff_x21 + 0x20) == 0) ||
        (lVar4 = FUN_04de82e0(*(long *)(unaff_x21 + 0x20),unaff_w22,*unaff_x26), lVar4 == 0)) ||
       (lVar3 == 0)) break;
    *(undefined8 *)(lVar3 + 0x290) = *(undefined8 *)(lVar4 + 0x290);
    if ((*unaff_x20 == 0) || (lVar3 = *(long *)(*unaff_x20 + 0x20), lVar3 == 0)) break;
    lVar3 = FUN_04de82e0(lVar3,unaff_w22,*unaff_x26);
    if ((*(long *)(unaff_x21 + 0x20) == 0) ||
       ((lVar4 = FUN_04de82e0(*(long *)(unaff_x21 + 0x20),unaff_w22,*unaff_x26), lVar4 == 0 ||
        (lVar3 == 0)))) break;
    *(undefined8 *)(lVar3 + 0x2a0) = *(undefined8 *)(lVar4 + 0x2a0);
    if (*unaff_x20 == 0) break;
    lVar3 = *(long *)(*unaff_x20 + 0x28);
    uVar9 = *(undefined8 *)PTR_DAT_0848e758;
    if (*(int *)(*(long *)(PTR_DAT_08486760 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    uVar9 = FUN_0675ff58(uVar9,0);
    if (*(int *)(*(long *)PTR_DAT_08486738 + 0xe4) == 0) {
      thunk_FUN_03ae8be4(*(long *)PTR_DAT_08486738);
    }
    plVar5 = (long *)FUN_07ca3718(uVar9,0);
    uVar9 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_0848e840);
    if (plVar5 == (long *)0x0) {
LAB_03f2aebc:
      plVar5 = (long *)0x0;
    }
    else {
      bVar1 = *(byte *)(*(long *)PTR_DAT_0848e760 + 0x130);
      if (*(byte *)(*plVar5 + 0x130) < bVar1) goto LAB_03f2aebc;
      if (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_0848e760)
      {
        plVar5 = (long *)0x0;
      }
    }
    FUN_03f1fda0(uVar9,plVar5);
    if (lVar3 == 0) break;
    lVar4 = *(long *)(lVar3 + 0x10);
    lVar7 = *(long *)PTR_DAT_0848e800;
    *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
    if (lVar4 == 0) break;
    uVar2 = *(uint *)(lVar3 + 0x18);
    if (uVar2 < *(uint *)(lVar4 + 0x18)) {
      *(uint *)(lVar3 + 0x18) = uVar2 + 1;
      puVar6 = (undefined8 *)(lVar4 + (long)(int)uVar2 * 8 + 0x20);
      *puVar6 = uVar9;
      thunk_FUN_03afed3c(puVar6,uVar9);
    }
    else {
      FUN_04de85b0(lVar3,uVar9,*(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
    }
    if (*(long *)(unaff_x21 + 0x28) == 0) break;
    if (unaff_w22 < *(int *)(*(long *)(unaff_x21 + 0x28) + 0x18)) {
      if ((*unaff_x20 == 0) || (lVar3 = *(long *)(*unaff_x20 + 0x28), lVar3 == 0)) break;
      lVar3 = FUN_04de82e0(lVar3,unaff_w22,*unaff_x28);
      if ((*(long *)(unaff_x21 + 0x28) == 0) ||
         ((lVar4 = FUN_04de82e0(*(long *)(unaff_x21 + 0x28),unaff_w22,*unaff_x28), lVar4 == 0 ||
          (lVar3 == 0)))) break;
      *(undefined4 *)(lVar3 + 0x10) = *(undefined4 *)(lVar4 + 0x10);
      if ((*unaff_x20 == 0) || (lVar3 = *(long *)(*unaff_x20 + 0x28), lVar3 == 0)) break;
      lVar3 = FUN_04de82e0(lVar3,unaff_w22,*unaff_x28);
      if (((*(long *)(unaff_x21 + 0x28) == 0) ||
          (lVar4 = FUN_04de82e0(*(long *)(unaff_x21 + 0x28),unaff_w22,*unaff_x28), lVar4 == 0)) ||
         (lVar3 == 0)) break;
      *(undefined4 *)(lVar3 + 0x14) = *(undefined4 *)(lVar4 + 0x14);
      if ((*unaff_x20 == 0) || (lVar3 = *(long *)(*unaff_x20 + 0x28), lVar3 == 0)) break;
      lVar3 = FUN_04de82e0(lVar3,unaff_w22,*unaff_x28);
      if ((*(long *)(unaff_x21 + 0x28) == 0) ||
         ((lVar4 = FUN_04de82e0(*(long *)(unaff_x21 + 0x28),unaff_w22,*unaff_x28), lVar4 == 0 ||
          (lVar3 == 0)))) break;
      uVar9 = *(undefined8 *)(lVar4 + 0x18);
      *(undefined4 *)(lVar3 + 0x20) = *(undefined4 *)(lVar4 + 0x20);
      *(undefined8 *)(lVar3 + 0x18) = uVar9;
      if ((*unaff_x20 == 0) || (lVar3 = *(long *)(*unaff_x20 + 0x28), lVar3 == 0)) break;
      lVar3 = FUN_04de82e0(lVar3,unaff_w22,*unaff_x28);
      if (((*(long *)(unaff_x21 + 0x28) == 0) ||
          (lVar4 = FUN_04de82e0(*(long *)(unaff_x21 + 0x28),unaff_w22,*unaff_x28), lVar4 == 0)) ||
         (lVar3 == 0)) break;
      uVar9 = *(undefined8 *)(lVar4 + 0x30);
      *(undefined4 *)(lVar3 + 0x38) = *(undefined4 *)(lVar4 + 0x38);
      *(undefined8 *)(lVar3 + 0x30) = uVar9;
      if ((*unaff_x20 == 0) || (lVar3 = *(long *)(*unaff_x20 + 0x28), lVar3 == 0)) break;
      lVar3 = FUN_04de82e0(lVar3,unaff_w22,*unaff_x28);
      if ((*(long *)(unaff_x21 + 0x28) == 0) ||
         ((lVar4 = FUN_04de82e0(*(long *)(unaff_x21 + 0x28),unaff_w22,*unaff_x28), lVar4 == 0 ||
          (lVar3 == 0)))) break;
      uVar9 = *(undefined8 *)(lVar4 + 0x3c);
      *(undefined4 *)(lVar3 + 0x44) = *(undefined4 *)(lVar4 + 0x44);
      *(undefined8 *)(lVar3 + 0x3c) = uVar9;
      if ((*unaff_x20 == 0) || (lVar3 = *(long *)(*unaff_x20 + 0x28), lVar3 == 0)) break;
      lVar3 = FUN_04de82e0(lVar3,unaff_w22,*unaff_x28);
      if (((*(long *)(unaff_x21 + 0x28) == 0) ||
          (lVar4 = FUN_04de82e0(*(long *)(unaff_x21 + 0x28),unaff_w22,*unaff_x28), lVar4 == 0)) ||
         (lVar3 == 0)) break;
      *(undefined1 *)(lVar3 + 0x48) = *(undefined1 *)(lVar4 + 0x48);
      if ((*unaff_x20 == 0) || (lVar3 = *(long *)(*unaff_x20 + 0x28), lVar3 == 0)) break;
      lVar3 = FUN_04de82e0(lVar3,unaff_w22,*unaff_x28);
      if ((*(long *)(unaff_x21 + 0x28) == 0) ||
         ((lVar4 = FUN_04de82e0(*(long *)(unaff_x21 + 0x28),unaff_w22,*unaff_x28), lVar4 == 0 ||
          (lVar3 == 0)))) break;
      *(undefined1 *)(lVar3 + 0x49) = *(undefined1 *)(lVar4 + 0x49);
      if ((*unaff_x20 == 0) || (lVar3 = *(long *)(*unaff_x20 + 0x28), lVar3 == 0)) break;
      lVar3 = FUN_04de82e0(lVar3,unaff_w22,*unaff_x28);
      if (((*(long *)(unaff_x21 + 0x28) == 0) ||
          (lVar4 = FUN_04de82e0(*(long *)(unaff_x21 + 0x28),unaff_w22,*unaff_x28), lVar4 == 0)) ||
         (lVar3 == 0)) break;
      *(undefined1 *)(lVar3 + 0x4a) = *(undefined1 *)(lVar4 + 0x4a);
      if ((*unaff_x20 == 0) || (lVar3 = *(long *)(*unaff_x20 + 0x28), lVar3 == 0)) break;
      lVar3 = FUN_04de82e0(lVar3,unaff_w22,*unaff_x28);
      if ((*(long *)(unaff_x21 + 0x28) == 0) ||
         ((lVar4 = FUN_04de82e0(*(long *)(unaff_x21 + 0x28),unaff_w22,*unaff_x28), lVar4 == 0 ||
          (lVar3 == 0)))) break;
      *(undefined4 *)(lVar3 + 0x4c) = *(undefined4 *)(lVar4 + 0x4c);
      if ((*unaff_x20 == 0) || (lVar3 = *(long *)(*unaff_x20 + 0x28), lVar3 == 0)) break;
      lVar3 = FUN_04de82e0(lVar3,unaff_w22,*unaff_x28);
      if (((*(long *)(unaff_x21 + 0x28) == 0) ||
          (lVar4 = FUN_04de82e0(*(long *)(unaff_x21 + 0x28),unaff_w22,*unaff_x28), lVar4 == 0)) ||
         (lVar3 == 0)) break;
      *(undefined4 *)(lVar3 + 0x50) = *(undefined4 *)(lVar4 + 0x50);
      if ((*unaff_x20 == 0) || (lVar3 = *(long *)(*unaff_x20 + 0x28), lVar3 == 0)) break;
      lVar3 = FUN_04de82e0(lVar3,unaff_w22,*unaff_x28);
      if ((*(long *)(unaff_x21 + 0x28) == 0) ||
         ((lVar4 = FUN_04de82e0(*(long *)(unaff_x21 + 0x28),unaff_w22,*unaff_x28), lVar4 == 0 ||
          (lVar3 == 0)))) break;
      *(undefined4 *)(lVar3 + 0x54) = *(undefined4 *)(lVar4 + 0x54);
      if ((*unaff_x20 == 0) || (lVar3 = *(long *)(*unaff_x20 + 0x28), lVar3 == 0)) break;
      lVar3 = FUN_04de82e0(lVar3,unaff_w22,*unaff_x28);
      if (((*(long *)(unaff_x21 + 0x28) == 0) ||
          (lVar4 = FUN_04de82e0(*(long *)(unaff_x21 + 0x28),unaff_w22,*unaff_x28), lVar4 == 0)) ||
         (lVar3 == 0)) break;
      *(undefined4 *)(lVar3 + 0x58) = *(undefined4 *)(lVar4 + 0x58);
      if ((*unaff_x20 == 0) || (lVar3 = *(long *)(*unaff_x20 + 0x28), lVar3 == 0)) break;
      lVar3 = FUN_04de82e0(lVar3,unaff_w22,*unaff_x28);
      if ((*(long *)(unaff_x21 + 0x28) == 0) ||
         ((lVar4 = FUN_04de82e0(*(long *)(unaff_x21 + 0x28),unaff_w22,*unaff_x28), lVar4 == 0 ||
          (lVar3 == 0)))) break;
      *(undefined1 *)(lVar3 + 0x5c) = *(undefined1 *)(lVar4 + 0x5c);
      if ((*unaff_x20 == 0) || (lVar3 = *(long *)(*unaff_x20 + 0x28), lVar3 == 0)) break;
      lVar3 = FUN_04de82e0(lVar3,unaff_w22,*unaff_x28);
      if (((*(long *)(unaff_x21 + 0x28) == 0) ||
          (lVar4 = FUN_04de82e0(*(long *)(unaff_x21 + 0x28),unaff_w22,*unaff_x28), lVar4 == 0)) ||
         (lVar3 == 0)) break;
      *(undefined4 *)(lVar3 + 0x60) = *(undefined4 *)(lVar4 + 0x60);
      if ((*unaff_x20 == 0) || (lVar3 = *(long *)(*unaff_x20 + 0x28), lVar3 == 0)) break;
      lVar3 = FUN_04de82e0(lVar3,unaff_w22,*unaff_x28);
      if ((*(long *)(unaff_x21 + 0x28) == 0) ||
         ((lVar4 = FUN_04de82e0(*(long *)(unaff_x21 + 0x28),unaff_w22,*unaff_x28), lVar4 == 0 ||
          (lVar3 == 0)))) break;
      *(undefined4 *)(lVar3 + 100) = *(undefined4 *)(lVar4 + 100);
      if ((*unaff_x20 == 0) || (lVar3 = *(long *)(*unaff_x20 + 0x28), lVar3 == 0)) break;
      lVar3 = FUN_04de82e0(lVar3,unaff_w22,*unaff_x28);
      if (((*(long *)(unaff_x21 + 0x28) == 0) ||
          (lVar4 = FUN_04de82e0(*(long *)(unaff_x21 + 0x28),unaff_w22,*unaff_x28), lVar4 == 0)) ||
         (lVar3 == 0)) break;
      *(undefined1 *)(lVar3 + 0x68) = *(undefined1 *)(lVar4 + 0x68);
      if ((*unaff_x20 == 0) || (lVar3 = *(long *)(*unaff_x20 + 0x28), lVar3 == 0)) break;
      lVar3 = FUN_04de82e0(lVar3,unaff_w22,*unaff_x28);
      if ((*(long *)(unaff_x21 + 0x28) == 0) ||
         ((lVar4 = FUN_04de82e0(*(long *)(unaff_x21 + 0x28),unaff_w22,*unaff_x28), lVar4 == 0 ||
          (lVar3 == 0)))) break;
      *(undefined1 *)(lVar3 + 0x69) = *(undefined1 *)(lVar4 + 0x69);
      if ((*unaff_x20 == 0) || (lVar3 = *(long *)(*unaff_x20 + 0x28), lVar3 == 0)) break;
      lVar3 = FUN_04de82e0(lVar3,unaff_w22,*unaff_x28);
      if (((*(long *)(unaff_x21 + 0x28) == 0) ||
          (lVar4 = FUN_04de82e0(*(long *)(unaff_x21 + 0x28),unaff_w22,*unaff_x28), lVar4 == 0)) ||
         (lVar3 == 0)) break;
      *(undefined1 *)(lVar3 + 0x6a) = *(undefined1 *)(lVar4 + 0x6a);
      if ((*unaff_x20 == 0) || (lVar3 = *(long *)(*unaff_x20 + 0x28), lVar3 == 0)) break;
      lVar3 = FUN_04de82e0(lVar3,unaff_w22,*unaff_x28);
      if ((*(long *)(unaff_x21 + 0x28) == 0) ||
         ((lVar4 = FUN_04de82e0(*(long *)(unaff_x21 + 0x28),unaff_w22,*unaff_x28), lVar4 == 0 ||
          (lVar3 == 0)))) break;
      *(undefined8 *)(lVar3 + 0x70) = *(undefined8 *)(lVar4 + 0x70);
      thunk_FUN_03afed3c((undefined8 *)(lVar3 + 0x70));
      if ((*unaff_x20 == 0) || (lVar3 = *(long *)(*unaff_x20 + 0x28), lVar3 == 0)) break;
      lVar3 = FUN_04de82e0(lVar3,unaff_w22,*unaff_x28);
      if ((*(long *)(unaff_x21 + 0x28) == 0) ||
         (lVar4 = FUN_04de82e0(*(long *)(unaff_x21 + 0x28),unaff_w22,*unaff_x28), lVar4 == 0))
      break;
      uVar10 = *(undefined8 *)(lVar4 + 0x78);
      uVar9 = thunk_FUN_03ac74bc(*unaff_x29);
      FUN_04e86ce4(uVar9,uVar10,*unaff_x27);
      if (lVar3 == 0) break;
      *(undefined8 *)(lVar3 + 0x78) = uVar9;
      thunk_FUN_03afed3c((undefined8 *)(lVar3 + 0x78),uVar9);
      if ((*unaff_x20 == 0) || (lVar3 = *(long *)(*unaff_x20 + 0x28), lVar3 == 0)) break;
      lVar3 = FUN_04de82e0(lVar3,unaff_w22,*unaff_x28);
      if ((*(long *)(unaff_x21 + 0x28) == 0) ||
         (lVar4 = FUN_04de82e0(*(long *)(unaff_x21 + 0x28),unaff_w22,*unaff_x28), lVar4 == 0))
      break;
      uVar10 = *(undefined8 *)(lVar4 + 0x80);
      uVar9 = thunk_FUN_03ac74bc(*unaff_x29);
      FUN_04e86ce4(uVar9,uVar10,*unaff_x27);
      if (lVar3 == 0) break;
      *(undefined8 *)(lVar3 + 0x80) = uVar9;
      thunk_FUN_03afed3c((undefined8 *)(lVar3 + 0x80),uVar9);
      if ((*unaff_x20 == 0) || (lVar3 = *(long *)(*unaff_x20 + 0x28), lVar3 == 0)) break;
      lVar3 = FUN_04de82e0(lVar3,unaff_w22,*unaff_x28);
      if ((*(long *)(unaff_x21 + 0x28) == 0) ||
         ((lVar4 = FUN_04de82e0(*(long *)(unaff_x21 + 0x28),unaff_w22,*unaff_x28), lVar4 == 0 ||
          (lVar3 == 0)))) break;
      *(undefined1 *)(lVar3 + 0x88) = *(undefined1 *)(lVar4 + 0x88);
      if ((*unaff_x20 == 0) || (lVar3 = *(long *)(*unaff_x20 + 0x28), lVar3 == 0)) break;
      lVar3 = FUN_04de82e0(lVar3,unaff_w22,*unaff_x28);
      if (((*(long *)(unaff_x21 + 0x28) == 0) ||
          (lVar4 = FUN_04de82e0(*(long *)(unaff_x21 + 0x28),unaff_w22,*unaff_x28), lVar4 == 0)) ||
         (lVar3 == 0)) break;
      *(undefined4 *)(lVar3 + 0x8c) = *(undefined4 *)(lVar4 + 0x8c);
      if ((*unaff_x20 == 0) || (lVar3 = *(long *)(*unaff_x20 + 0x28), lVar3 == 0)) break;
      lVar3 = FUN_04de82e0(lVar3,unaff_w22,*unaff_x28);
      if ((*(long *)(unaff_x21 + 0x28) == 0) ||
         ((lVar4 = FUN_04de82e0(*(long *)(unaff_x21 + 0x28),unaff_w22,*unaff_x28), lVar4 == 0 ||
          (lVar3 == 0)))) break;
      *(undefined4 *)(lVar3 + 0x90) = *(undefined4 *)(lVar4 + 0x90);
      if ((*unaff_x20 == 0) || (lVar3 = *(long *)(*unaff_x20 + 0x28), lVar3 == 0)) break;
      lVar3 = FUN_04de82e0(lVar3,unaff_w22,*unaff_x28);
      if (((*(long *)(unaff_x21 + 0x28) == 0) ||
          (lVar4 = FUN_04de82e0(*(long *)(unaff_x21 + 0x28),unaff_w22,*unaff_x28), lVar4 == 0)) ||
         (lVar3 == 0)) break;
      *(undefined4 *)(lVar3 + 0x94) = *(undefined4 *)(lVar4 + 0x94);
      if ((*unaff_x20 == 0) || (lVar3 = *(long *)(*unaff_x20 + 0x28), lVar3 == 0)) break;
      lVar3 = FUN_04de82e0(lVar3,unaff_w22,*unaff_x28);
      if ((*(long *)(unaff_x21 + 0x28) == 0) ||
         ((lVar4 = FUN_04de82e0(*(long *)(unaff_x21 + 0x28),unaff_w22,*unaff_x28), lVar4 == 0 ||
          (lVar3 == 0)))) break;
      *(undefined4 *)(lVar3 + 0x98) = *(undefined4 *)(lVar4 + 0x98);
    }
    unaff_w22 = unaff_w22 + 1;
    if (*(long *)(unaff_x21 + 0x20) == 0) break;
    if (*(int *)(*(long *)(unaff_x21 + 0x20) + 0x18) <= unaff_w22) {
      lVar3 = *unaff_x20;
      if (lVar3 != 0) {
        iVar8 = 0;
        goto LAB_03f2b730;
      }
      break;
    }
    if (*unaff_x20 == 0) break;
    lVar3 = *(long *)(*unaff_x20 + 0x20);
    uVar9 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_0848e838);
    FUN_03f87a60(uVar9,0);
    if (lVar3 == 0) break;
    lVar4 = *(long *)(lVar3 + 0x10);
    lVar7 = *(long *)PTR_DAT_0848e7f0;
    *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
    if (lVar4 == 0) break;
    uVar2 = *(uint *)(lVar3 + 0x18);
    if (uVar2 < *(uint *)(lVar4 + 0x18)) {
      *(uint *)(lVar3 + 0x18) = uVar2 + 1;
      puVar6 = (undefined8 *)(lVar4 + (long)(int)uVar2 * 8 + 0x20);
      *puVar6 = uVar9;
      thunk_FUN_03afed3c(puVar6,uVar9);
    }
    else {
      FUN_04de85b0(lVar3,uVar9,*(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
    }
    if ((*unaff_x20 == 0) || (lVar3 = *(long *)(*unaff_x20 + 0x20), lVar3 == 0)) break;
    lVar3 = FUN_04de82e0(lVar3,unaff_w22,*unaff_x26);
    if ((*(long *)(unaff_x21 + 0x20) == 0) ||
       ((lVar4 = FUN_04de82e0(*(long *)(unaff_x21 + 0x20),unaff_w22,*unaff_x26), lVar4 == 0 ||
        (lVar3 == 0)))) break;
    *(undefined1 *)(lVar3 + 0x160) = *(undefined1 *)(lVar4 + 0x160);
    if ((*unaff_x20 == 0) || (lVar3 = *(long *)(*unaff_x20 + 0x20), lVar3 == 0)) break;
    lVar3 = FUN_04de82e0(lVar3,unaff_w22,*unaff_x26);
    if (((*(long *)(unaff_x21 + 0x20) == 0) ||
        (lVar4 = FUN_04de82e0(*(long *)(unaff_x21 + 0x20),unaff_w22,*unaff_x26), lVar4 == 0)) ||
       (lVar3 == 0)) break;
    *(undefined1 *)(lVar3 + 400) = *(undefined1 *)(lVar4 + 400);
    param_1 = *unaff_x20;
    if (param_1 == 0) break;
  }
LAB_03f2b8c0:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
LAB_03f2b730:
  lVar4 = *(long *)(lVar3 + 0x28);
  if (lVar4 == 0) goto LAB_03f2b8c0;
  if (*(int *)(lVar4 + 0x18) <= iVar8) {
    iVar8 = 0;
    goto 
    System_Array__InternalArray__ICollection_Add<ConnectionDataMap_ConnectionSlot<DTLSLayer_DTLSConnectionData>>
    ;
  }
  lVar3 = FUN_04de82e0(lVar4,iVar8,*unaff_x28);
  if ((((unaff_x21 == 0) || (*(long *)(unaff_x21 + 0x28) == 0)) ||
      (lVar4 = FUN_04de82e0(*(long *)(unaff_x21 + 0x28),iVar8,*unaff_x28), lVar4 == 0)) ||
     (lVar3 == 0)) goto LAB_03f2b8c0;
  *(undefined1 *)(lVar3 + 0x48) = *(undefined1 *)(lVar4 + 0x48);
  if ((*unaff_x20 == 0) || (lVar3 = *(long *)(*unaff_x20 + 0x28), lVar3 == 0)) goto LAB_03f2b8c0;
  lVar3 = FUN_04de82e0(lVar3,iVar8,*unaff_x28);
  if ((*(long *)(unaff_x21 + 0x28) == 0) ||
     ((lVar4 = FUN_04de82e0(*(long *)(unaff_x21 + 0x28),iVar8,*unaff_x28), lVar4 == 0 ||
      (lVar3 == 0)))) goto LAB_03f2b8c0;
  *(undefined1 *)(lVar3 + 0x49) = *(undefined1 *)(lVar4 + 0x49);
  if ((*unaff_x20 == 0) || (lVar3 = *(long *)(*unaff_x20 + 0x28), lVar3 == 0)) goto LAB_03f2b8c0;
  lVar3 = FUN_04de82e0(lVar3,iVar8,*unaff_x28);
  if (((*(long *)(unaff_x21 + 0x28) == 0) ||
      (lVar4 = FUN_04de82e0(*(long *)(unaff_x21 + 0x28),iVar8,*unaff_x28), lVar4 == 0)) ||
     (lVar3 == 0)) goto LAB_03f2b8c0;
  iVar8 = iVar8 + 1;
  *(undefined1 *)(lVar3 + 0x4a) = *(undefined1 *)(lVar4 + 0x4a);
  lVar3 = *unaff_x20;
  if (lVar3 == 0) goto LAB_03f2b8c0;
  goto LAB_03f2b730;

  System_Array__InternalArray__ICollection_Add<ConnectionDataMap_ConnectionSlot<DTLSLayer_DTLSConnectionData>>
  :
  lVar3 = *(long *)(lVar3 + 0x20);
  if (lVar3 == 0) goto LAB_03f2b8c0;
  if (*(int *)(lVar3 + 0x18) <= iVar8) {
    System_Array__IndexOfImpl<SerializedCommand>();
    System_Array__IndexOfImpl<Vector4>();
    FUN_03f26eac();
    return;
  }
  lVar3 = FUN_04de82e0(lVar3,iVar8,*unaff_x26);
  if ((((unaff_x21 == 0) || (*(long *)(unaff_x21 + 0x20) == 0)) ||
      (lVar4 = FUN_04de82e0(*(long *)(unaff_x21 + 0x20),iVar8,*unaff_x26), lVar4 == 0)) ||
     (lVar3 == 0)) goto LAB_03f2b8c0;
  *(undefined1 *)(lVar3 + 400) = *(undefined1 *)(lVar4 + 400);
  if ((*unaff_x20 == 0) || (lVar3 = *(long *)(*unaff_x20 + 0x20), lVar3 == 0)) goto LAB_03f2b8c0;
  lVar3 = FUN_04de82e0(lVar3,iVar8,*unaff_x26);
  if ((*(long *)(unaff_x21 + 0x20) == 0) ||
     ((lVar4 = FUN_04de82e0(*(long *)(unaff_x21 + 0x20),iVar8,*unaff_x26), lVar4 == 0 ||
      (lVar3 == 0)))) goto LAB_03f2b8c0;
  iVar8 = iVar8 + 1;
  *(undefined1 *)(lVar3 + 0x191) = *(undefined1 *)(lVar4 + 0x191);
  lVar3 = *unaff_x20;
  if (lVar3 == 0) goto LAB_03f2b8c0;
  goto 
  System_Array__InternalArray__ICollection_Add<ConnectionDataMap_ConnectionSlot<DTLSLayer_DTLSConnectionData>>
  ;
}


