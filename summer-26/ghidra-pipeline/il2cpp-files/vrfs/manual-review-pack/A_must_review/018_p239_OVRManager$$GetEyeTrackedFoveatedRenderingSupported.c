/*
FUNCTION_NAME: OVRManager$$GetEyeTrackedFoveatedRenderingSupported
ENTRY_POINT: 02fc72cc
PROGRAM: vrfs-libil2cpp.so
SCORE: 165
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_4;validity_or_gating_hits_5;paired_field_refs_with_eye_source;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


undefined8 OVRManager__GetEyeTrackedFoveatedRenderingSupported(long *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined1 in_CY;
  ulong uVar4;
  undefined8 uVar5;
  bool bVar6;
  long lVar7;
  undefined4 unaff_w19;
  long unaff_x20;
  long unaff_x21;
  uint uVar8;
  long unaff_x22;
  int unaff_w23;
  char unaff_w25;
  long unaff_x26;
  int unaff_w27;
  int *unaff_x28;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  
  do {
    if ((bool)in_CY) {
LAB_02fc74b4:
                    /* WARNING: Subroutine does not return */
      FUN_0160eebc();
    }
    if (param_1 == (long *)0x0) {
LAB_02fc74b8:
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    uVar4 = (**(code **)(*param_1 + 0x1b8))
                      (param_1,*(undefined4 *)(unaff_x26 + unaff_x22 * 0x10 + 0x28),
                       uStack000000000000000c,*(undefined8 *)(*param_1 + 0x1c0));
    if ((uVar4 & 1) != 0) {
      if (unaff_w25 == '\x02') {
        uStack0000000000000008 = uStack000000000000000c;
        lVar7 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0xa8);
        if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
          lVar7 = FUN_015c2790();
        }
        uVar5 = thunk_FUN_015d01b0(lVar7,&stack0x00000008);
        FUN_031dbe34(uVar5,0);
      }
      else if (unaff_w25 == '\x01') {
        if ((uint)unaff_x22 < *(uint *)(unaff_x26 + 0x18)) {
          *(undefined4 *)(unaff_x26 + unaff_x22 * 0x10 + 0x2c) = unaff_w19;
          return 1;
        }
        goto LAB_02fc74b4;
      }
      return 0;
    }
    uVar4 = (ulong)*(uint *)(unaff_x26 + 0x18);
    do {
      if ((uint)uVar4 <= (uint)unaff_x22) goto LAB_02fc74b4;
      uVar8 = *(uint *)(unaff_x26 + unaff_x22 * 0x10 + 0x24);
      if ((int)(uint)uVar4 <= unaff_w23) {
        FUN_031dbf48(0);
      }
      uVar4 = *(ulong *)(unaff_x26 + 0x18);
      unaff_w23 = unaff_w23 + 1;
      if ((uint)uVar4 <= uVar8) {
        if (*(int *)(unaff_x20 + 0x28) < 1) {
          uVar8 = *(uint *)(unaff_x20 + 0x20);
          if (uVar8 == (uint)uVar4) {
            (**(code **)(*(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x168) + 8))();
            lVar7 = *(long *)(unaff_x20 + 0x10);
            *(uint *)(unaff_x20 + 0x20) = uVar8 + 1;
            if (lVar7 == 0) goto LAB_02fc74b8;
            uVar1 = *(uint *)(lVar7 + 0x18);
            iVar3 = 0;
            if (uVar1 != 0) {
              iVar3 = unaff_w27 / (int)uVar1;
            }
            uVar2 = unaff_w27 - iVar3 * uVar1;
            if (uVar1 <= uVar2) goto LAB_02fc74b4;
            unaff_x26 = *(long *)(unaff_x20 + 0x18);
            unaff_x28 = (int *)(lVar7 + (ulong)uVar2 * 4 + 0x20);
          }
          else {
            unaff_x26 = *(long *)(unaff_x20 + 0x18);
            *(uint *)(unaff_x20 + 0x20) = uVar8 + 1;
          }
          if (unaff_x26 == 0) goto LAB_02fc74b8;
          bVar6 = false;
        }
        else {
          uVar8 = *(uint *)(unaff_x20 + 0x24);
          *(int *)(unaff_x20 + 0x28) = *(int *)(unaff_x20 + 0x28) + -1;
          bVar6 = true;
        }
        if (uVar8 < *(uint *)(unaff_x26 + 0x18)) {
          if (bVar6) {
            *(undefined4 *)(unaff_x20 + 0x24) =
                 *(undefined4 *)(unaff_x26 + (long)(int)uVar8 * 0x10 + 0x24);
          }
          lVar7 = unaff_x26 + (long)(int)uVar8 * 0x10;
          *(int *)(lVar7 + 0x20) = unaff_w27;
          *(int *)(lVar7 + 0x24) = *unaff_x28 + -1;
          *(undefined4 *)(lVar7 + 0x28) = uStack000000000000000c;
          *(undefined4 *)(lVar7 + 0x2c) = unaff_w19;
          *unaff_x28 = uVar8 + 1;
          return 1;
        }
        goto LAB_02fc74b4;
      }
      unaff_x22 = (long)(int)uVar8;
    } while (*(int *)(unaff_x26 + (long)(int)uVar8 * 0x10 + 0x20) != unaff_w27);
    param_1 = (long *)(**(code **)(*(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x10) +
                                  8))();
    in_CY = *(uint *)(unaff_x26 + 0x18) <= uVar8;
  } while( true );
}


