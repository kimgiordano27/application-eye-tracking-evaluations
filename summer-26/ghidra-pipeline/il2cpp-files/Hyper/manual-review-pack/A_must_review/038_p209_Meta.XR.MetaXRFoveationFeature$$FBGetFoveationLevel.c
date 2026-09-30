/*
FUNCTION_NAME: Meta.XR.MetaXRFoveationFeature$$FBGetFoveationLevel
ENTRY_POINT: 0906c7a8
PROGRAM: Hyper-libil2cpp.so
SCORE: 141
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;validity_gate;paired_state_refs;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;paired_field_refs_with_eye_source;strong_foveation_hits_4;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void Meta_XR_MetaXRFoveationFeature__FBGetFoveationLevel(void)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined4 *puVar4;
  ulong uVar5;
  undefined4 *puVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  long unaff_x19;
  long *plVar10;
  long *plVar11;
  
  plVar11 = *(long **)(unaff_x19 + 0x60);
  if (plVar11 != (long *)0x0) {
    lVar3 = *plVar11;
    plVar10 = *(long **)(unaff_x19 + 0x38);
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
      piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_0ac783d8) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_0906c808;
        }
        uVar5 = uVar5 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_04980e68(plVar11,*(long *)PTR_DAT_0ac783d8,0);
LAB_0906c808:
    plVar11 = (long *)(*(code *)*puVar2)(plVar11,puVar2[1]);
    if (plVar11 != (long *)0x0) {
      lVar3 = *plVar11;
      uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar5 != 0) {
        piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_0ac43fe0) {
            puVar2 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_0906c870;
          }
          uVar5 = uVar5 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined8 *)FUN_04980e68(plVar11,*(long *)PTR_DAT_0ac43fe0,0);
LAB_0906c870:
      uVar5 = (*(code *)*puVar2)(plVar11,puVar2[1]);
      if ((uVar5 & 1) == 0) {
        puVar4 = (undefined4 *)(unaff_x19 + 0x50);
        puVar6 = (undefined4 *)(unaff_x19 + 0x54);
        puVar8 = (undefined4 *)(unaff_x19 + 0x58);
        puVar9 = (undefined4 *)(unaff_x19 + 0x5c);
      }
      else {
        puVar4 = (undefined4 *)(unaff_x19 + 0x40);
        puVar6 = (undefined4 *)(unaff_x19 + 0x44);
        puVar8 = (undefined4 *)(unaff_x19 + 0x48);
        puVar9 = (undefined4 *)(unaff_x19 + 0x4c);
      }
      if (plVar10 != (long *)0x0) {
        (**(code **)(*plVar10 + 0x2a8))
                  (*puVar4,*puVar6,*puVar8,*puVar9,plVar10,*(undefined8 *)(*plVar10 + 0x2b0));
        if (*(long *)(unaff_x19 + 0x20) != 0) {
          lVar3 = FUN_0a178414(*(long *)(unaff_x19 + 0x20),0);
          if ((*(long *)(unaff_x19 + 0x20) != 0) &&
             (iVar1 = FUN_0a18bd78(*(long *)(unaff_x19 + 0x20),0), lVar3 != 0)) {
            FUN_0a17ba14(lVar3,0 < iVar1,0);
            if ((*(long *)(unaff_x19 + 0x28) != 0) &&
               (lVar3 = FUN_0a178414(*(long *)(unaff_x19 + 0x28),0), lVar3 != 0)) {
              FUN_0a17ba14(lVar3,*(char *)(unaff_x19 + 0x68) == '\0',0);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


