/*
FUNCTION_NAME: Meta.XR.MetaXREyeTrackedFoveationFeature$$get_eyeTrackedFoveatedRenderingSupported
ENTRY_POINT: 04f2c15c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 168
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_7;weak_xr_or_state_hits_2;validity_or_gating_hits_5;paired_field_refs_with_eye_source;strong_foveation_hits_4;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void Meta_XR_MetaXREyeTrackedFoveationFeature__get_eyeTrackedFoveatedRenderingSupported
               (long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  undefined4 *puVar5;
  long in_x9;
  ulong uVar6;
  undefined4 *puVar7;
  int *in_x10;
  int *piVar8;
  undefined4 *puVar9;
  long in_x11;
  undefined4 *puVar10;
  long unaff_x19;
  long *unaff_x20;
  
  while (in_x11 != param_3) {
    in_x9 = in_x9 + -1;
    if (in_x9 == 0) {
      puVar2 = (undefined8 *)FUN_02b7654c();
      goto LAB_04f2c18c;
    }
    in_x11 = *(long *)(in_x10 + 2);
    in_x10 = in_x10 + 4;
  }
  puVar2 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
LAB_04f2c18c:
  plVar3 = (long *)(*(code *)*puVar2)();
  if (plVar3 != (long *)0x0) {
    lVar4 = *plVar3;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_06322e08) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_04f2c1f4;
        }
        uVar6 = uVar6 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_02b7654c(plVar3,*(long *)PTR_DAT_06322e08,0);
LAB_04f2c1f4:
    uVar6 = (*(code *)*puVar2)(plVar3,puVar2[1]);
    if ((uVar6 & 1) == 0) {
      puVar5 = (undefined4 *)(unaff_x19 + 0x50);
      puVar7 = (undefined4 *)(unaff_x19 + 0x54);
      puVar9 = (undefined4 *)(unaff_x19 + 0x58);
      puVar10 = (undefined4 *)(unaff_x19 + 0x5c);
    }
    else {
      puVar5 = (undefined4 *)(unaff_x19 + 0x40);
      puVar7 = (undefined4 *)(unaff_x19 + 0x44);
      puVar9 = (undefined4 *)(unaff_x19 + 0x48);
      puVar10 = (undefined4 *)(unaff_x19 + 0x4c);
    }
    if (unaff_x20 != (long *)0x0) {
      (**(code **)(*unaff_x20 + 0x2a8))(*puVar5,*puVar7,*puVar9,*puVar10);
      if (*(long *)(unaff_x19 + 0x20) != 0) {
        lVar4 = FUN_05c89410(*(long *)(unaff_x19 + 0x20),0);
        if ((*(long *)(unaff_x19 + 0x20) != 0) &&
           (iVar1 = FUN_05c9de68(*(long *)(unaff_x19 + 0x20),0), lVar4 != 0)) {
          FUN_05c8cb28(lVar4,0 < iVar1,0);
          if ((*(long *)(unaff_x19 + 0x28) != 0) &&
             (lVar4 = FUN_05c89410(*(long *)(unaff_x19 + 0x28),0), lVar4 != 0)) {
            FUN_05c8cb28(lVar4,*(char *)(unaff_x19 + 0x68) == '\0',0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


