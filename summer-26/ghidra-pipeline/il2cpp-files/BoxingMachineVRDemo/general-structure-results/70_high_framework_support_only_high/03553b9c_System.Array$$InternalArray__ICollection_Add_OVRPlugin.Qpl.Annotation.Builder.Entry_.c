/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Add<OVRPlugin.Qpl.Annotation.Builder.Entry>
ENTRY_POINT: 03553b9c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__ICollection_Add<OVRPlugin_Qpl_Annotation_Builder_Entry>(void)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  void *pvVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  size_t unaff_x21;
  undefined8 *unaff_x24;
  long *unaff_x26;
  int iVar10;
  int unaff_w27;
  undefined8 uVar11;
  long unaff_x29;
  
  uVar11 = *(undefined8 *)(unaff_x29 + -0x78);
  if (*(char *)(unaff_x29 + -0xc) != '\0') {
    FUN_05052640();
    uVar3 = (*(code *)**(undefined8 **)(*unaff_x26 + 0x10))();
    FUN_05052640();
    pvVar4 = (void *)(*(code *)**(undefined8 **)(*unaff_x26 + 0x10))();
    memcpy(unaff_x24,pvVar4,unaff_x21);
    lVar9 = *unaff_x26;
    lVar7 = *(long *)(lVar9 + 0x18);
    lVar6 = lVar7;
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_02d9a2e0(lVar7);
      lVar9 = *unaff_x26;
      lVar6 = *(long *)(lVar9 + 0x18);
    }
    uVar5 = *(undefined8 *)(lVar9 + 0x28);
    puVar8 = unaff_x24;
    if (-1 < *(int *)(lVar6 + 0x28)) {
      puVar8 = (undefined8 *)*unaff_x24;
    }
    *(undefined8 **)(unaff_x29 + -0x18) = puVar8;
    FUN_02d613d0(lVar7,uVar5,*(undefined8 *)(unaff_x29 + -0x60),uVar3,unaff_x29 + -0x18,
                 unaff_x29 + -0xc);
    if (*(char *)(unaff_x29 + -0xc) != '\0') {
      FUN_05052640();
      uVar3 = (*(code *)**(undefined8 **)(*unaff_x26 + 0x10))();
      FUN_05052640();
      pvVar4 = (void *)(*(code *)**(undefined8 **)(*unaff_x26 + 0x10))();
      memcpy(unaff_x24,pvVar4,unaff_x21);
      lVar9 = *unaff_x26;
      lVar7 = *(long *)(lVar9 + 0x18);
      lVar6 = lVar7;
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_02d9a2e0(lVar7);
        lVar9 = *unaff_x26;
        lVar6 = *(long *)(lVar9 + 0x18);
      }
      uVar5 = *(undefined8 *)(lVar9 + 0x28);
      puVar8 = unaff_x24;
      if (-1 < *(int *)(lVar6 + 0x28)) {
        puVar8 = (undefined8 *)*unaff_x24;
      }
      *(undefined8 **)(unaff_x29 + -0x18) = puVar8;
      FUN_02d613d0(lVar7,uVar5,*(undefined8 *)(unaff_x29 + -0x68),uVar3,unaff_x29 + -0x18,
                   unaff_x29 + -0xc);
      if (*(char *)(unaff_x29 + -0xc) != '\0') {
        FUN_05052640();
        uVar3 = (*(code *)**(undefined8 **)(*unaff_x26 + 0x10))();
        FUN_05052640();
        pvVar4 = (void *)(*(code *)**(undefined8 **)(*unaff_x26 + 0x10))();
        memcpy(unaff_x24,pvVar4,unaff_x21);
        lVar9 = *unaff_x26;
        lVar7 = *(long *)(lVar9 + 0x18);
        lVar6 = lVar7;
        if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_02d9a2e0(lVar7);
          lVar9 = *unaff_x26;
          lVar6 = *(long *)(lVar9 + 0x18);
        }
        uVar5 = *(undefined8 *)(lVar9 + 0x28);
        puVar8 = unaff_x24;
        if (-1 < *(int *)(lVar6 + 0x28)) {
          puVar8 = (undefined8 *)*unaff_x24;
        }
        *(undefined8 **)(unaff_x29 + -0x18) = puVar8;
        FUN_02d613d0(lVar7,uVar5,uVar11,uVar3,unaff_x29 + -0x18,unaff_x29 + -0xc);
        if (*(char *)(unaff_x29 + -0xc) != '\0') {
          uVar11 = FUN_05052640();
          if (unaff_w27 < 1) {
            bVar2 = true;
          }
          else {
            iVar10 = unaff_w27 + 1;
            do {
              (*(code *)**(undefined8 **)(*unaff_x26 + 0x10))();
              pvVar4 = (void *)(*(code *)**(undefined8 **)(*unaff_x26 + 0x10))();
              memcpy(unaff_x24,pvVar4,unaff_x21);
              lVar9 = *unaff_x26;
              lVar7 = *(long *)(lVar9 + 0x18);
              lVar6 = lVar7;
              if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
                lVar7 = FUN_02d9a2e0(lVar7);
                lVar9 = *unaff_x26;
                lVar6 = *(long *)(lVar9 + 0x18);
              }
              uVar3 = *(undefined8 *)(lVar9 + 0x28);
              puVar8 = unaff_x24;
              if (-1 < *(int *)(lVar6 + 0x28)) {
                puVar8 = (undefined8 *)*unaff_x24;
              }
              *(undefined8 **)(unaff_x29 + -0x18) = puVar8;
              FUN_02d613d0(lVar7,uVar3);
              cVar1 = *(char *)(unaff_x29 + -0xc);
              if (cVar1 == '\0') break;
              uVar11 = FUN_05052640(uVar11,1,0);
              iVar10 = iVar10 + -1;
            } while (1 < iVar10);
            bVar2 = cVar1 != '\0';
          }
          goto LAB_03553e10;
        }
      }
    }
  }
  bVar2 = false;
LAB_03553e10:
  if (*(long *)(*(long *)(unaff_x29 + -0x70) + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar2);
  }
  return;
}


