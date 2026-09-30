/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Add<OVRPlugin.Qpl.Annotation.Builder.Entry>
ENTRY_POINT: 03c3cea4
PROGRAM: waitwhat-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool System_Array__InternalArray__ICollection_Add<OVRPlugin_Qpl_Annotation_Builder_Entry>
               (long param_1)

{
  bool bVar1;
  undefined8 uVar2;
  void *pvVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  long unaff_x19;
  size_t unaff_x22;
  int iVar9;
  int unaff_w24;
  undefined8 *unaff_x25;
  long unaff_x27;
  long unaff_x29;
  
  uVar2 = (*(code *)**(undefined8 **)(param_1 + 0x10))();
                    /* try { // try from 03c3ceb8 to 03d3cedf has its CatchHandler @ 03c3cdb4 */
  FUN_0597a900();
  pvVar3 = (void *)(*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x10))();
                    /* try { // try from 03c3cee0 to 03d3ceeb has its CatchHandler @ 03c3cef8 */
  memcpy(unaff_x25,pvVar3,unaff_x22);
  lVar8 = *(long *)(unaff_x19 + 0x38);
  lVar6 = *(long *)(lVar8 + 0x18);
  lVar5 = lVar6;
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_031c09d4(lVar6);
    lVar8 = *(long *)(unaff_x19 + 0x38);
    lVar5 = *(long *)(lVar8 + 0x18);
  }
  uVar4 = *(undefined8 *)(lVar8 + 0x28);
  puVar7 = unaff_x25;
  if (-1 < *(int *)(lVar5 + 0x28)) {
    puVar7 = (undefined8 *)*unaff_x25;
  }
  *(undefined8 **)(unaff_x29 + -0x18) = puVar7;
  FUN_031896ac(lVar6,uVar4,*(undefined8 *)(unaff_x29 + -0x68),uVar2,unaff_x29 + -0x18,
               unaff_x29 + -0xc);
  if (*(char *)(unaff_x29 + -0xc) != '\0') {
    FUN_0597a900();
    uVar2 = (*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x10))();
    FUN_0597a900();
    pvVar3 = (void *)(*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x10))();
    memcpy(unaff_x25,pvVar3,unaff_x22);
    lVar8 = *(long *)(unaff_x19 + 0x38);
    lVar6 = *(long *)(lVar8 + 0x18);
    lVar5 = lVar6;
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_031c09d4(lVar6);
      lVar8 = *(long *)(unaff_x19 + 0x38);
      lVar5 = *(long *)(lVar8 + 0x18);
    }
    uVar4 = *(undefined8 *)(lVar8 + 0x28);
    puVar7 = unaff_x25;
    if (-1 < *(int *)(lVar5 + 0x28)) {
      puVar7 = (undefined8 *)*unaff_x25;
    }
    *(undefined8 **)(unaff_x29 + -0x18) = puVar7;
    FUN_031896ac(lVar6,uVar4,*(undefined8 *)(unaff_x29 + -0x70),uVar2,unaff_x29 + -0x18,
                 unaff_x29 + -0xc);
    if (*(char *)(unaff_x29 + -0xc) != '\0') {
      FUN_0597a900();
      uVar2 = (*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x10))();
      FUN_0597a900();
      pvVar3 = (void *)(*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x10))();
      memcpy(unaff_x25,pvVar3,unaff_x22);
      lVar8 = *(long *)(unaff_x19 + 0x38);
      lVar6 = *(long *)(lVar8 + 0x18);
      lVar5 = lVar6;
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_031c09d4(lVar6);
        lVar8 = *(long *)(unaff_x19 + 0x38);
        lVar5 = *(long *)(lVar8 + 0x18);
      }
      uVar4 = *(undefined8 *)(lVar8 + 0x28);
      puVar7 = unaff_x25;
      if (-1 < *(int *)(lVar5 + 0x28)) {
        puVar7 = (undefined8 *)*unaff_x25;
      }
      *(undefined8 **)(unaff_x29 + -0x18) = puVar7;
      FUN_031896ac(lVar6,uVar4,*(undefined8 *)(unaff_x29 + -0x78),uVar2,unaff_x29 + -0x18,
                   unaff_x29 + -0xc);
      if (*(char *)(unaff_x29 + -0xc) != '\0') {
        uVar2 = FUN_0597a900();
        if (unaff_w24 < 1) {
          bVar1 = true;
        }
        else {
          iVar9 = unaff_w24 + 1;
          do {
            (*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x10))();
            pvVar3 = (void *)(*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x10))();
            memcpy(unaff_x25,pvVar3,unaff_x22);
            lVar8 = *(long *)(unaff_x19 + 0x38);
            lVar6 = *(long *)(lVar8 + 0x18);
            lVar5 = lVar6;
            if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
              lVar6 = FUN_031c09d4(lVar6);
              lVar8 = *(long *)(unaff_x19 + 0x38);
              lVar5 = *(long *)(lVar8 + 0x18);
            }
            uVar4 = *(undefined8 *)(lVar8 + 0x28);
            puVar7 = unaff_x25;
            if (-1 < *(int *)(lVar5 + 0x28)) {
              puVar7 = (undefined8 *)*unaff_x25;
            }
            *(undefined8 **)(unaff_x29 + -0x18) = puVar7;
            FUN_031896ac(lVar6,uVar4);
            bVar1 = *(char *)(unaff_x29 + -0xc) != '\0';
            if (*(char *)(unaff_x29 + -0xc) == '\0') break;
            uVar2 = FUN_0597a900(uVar2,1,0);
            iVar9 = iVar9 + -1;
          } while (1 < iVar9);
        }
        goto LAB_03c3cda8;
      }
    }
  }
  bVar1 = false;
LAB_03c3cda8:
  if (*(long *)(unaff_x27 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar1;
}


