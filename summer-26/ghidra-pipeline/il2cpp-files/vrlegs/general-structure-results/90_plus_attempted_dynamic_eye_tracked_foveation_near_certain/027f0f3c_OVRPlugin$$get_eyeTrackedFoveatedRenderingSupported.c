/*
FUNCTION_NAME: OVRPlugin$$get_eyeTrackedFoveatedRenderingSupported
ENTRY_POINT: 027f0f3c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 153
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_4;validity_or_gating_hits_6;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


/* WARNING: Removing unreachable block (ram,0x027f13c4) */
/* WARNING: Removing unreachable block (ram,0x027f0f94) */
/* WARNING: Removing unreachable block (ram,0x027f0fa8) */

void OVRPlugin__get_eyeTrackedFoveatedRenderingSupported(long param_1)

{
  int iVar1;
  byte bVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  long in_x9;
  ulong uVar8;
  int *piVar9;
  long unaff_x20;
  int unaff_w21;
  int iVar10;
  long *unaff_x23;
  long *unaff_x26;
  long *unaff_x27;
  long *unaff_x29;
  long *in_stack_00000018;
  
  if ((*(byte *)(param_1 + 0x130) < *(byte *)(in_x9 + 0x130)) ||
     (*(long *)(*(long *)(param_1 + 200) + (ulong)*(byte *)(in_x9 + 0x130) * 8 + -8) != in_x9)) {
    if (param_1 == *(long *)PTR_DAT_03cfd4d8) {
      FUN_027e0bd8();
      puVar3 = PTR_DAT_03cfd5c8;
      iVar1 = *(int *)(unaff_x20 + 0x18);
      if (0 < iVar1) {
        iVar10 = 0;
        do {
          FUN_0221f8ec();
          if (in_stack_00000018 != (long *)0x0) {
            bVar2 = *(byte *)(*(long *)puVar3 + 0x130);
            if (((bVar2 <= *(byte *)(*in_stack_00000018 + 0x130)) &&
                (*(long *)(*(long *)(*in_stack_00000018 + 200) + (ulong)bVar2 * 8 + -8) ==
                 *(long *)puVar3)) && ((*(byte *)((long)in_stack_00000018 + 0x1a) >> 3 & 1) == 0)) {
              FUN_0221f9e0();
              (**(code **)(*in_stack_00000018 + 0x178))(in_stack_00000018);
            }
          }
          iVar10 = iVar10 + 1;
        } while (iVar1 != iVar10);
        if (0 < iVar1) {
          iVar10 = 0;
          do {
            FUN_0221f8ec();
            if (in_stack_00000018 != (long *)0x0) {
              FUN_0221f9e0();
              lVar7 = *in_stack_00000018;
              plVar5 = in_stack_00000018;
              if (lVar7 != *unaff_x29) {
                plVar5 = (long *)0x0;
              }
              if (plVar5 == (long *)0x0) {
                bVar2 = *(byte *)(*(long *)PTR_DAT_03cfd5d0 + 0x130);
                if ((*(byte *)(lVar7 + 0x130) < bVar2) ||
                   (*(long *)(*(long *)(lVar7 + 200) + (ulong)bVar2 * 8 + -8) !=
                    *(long *)PTR_DAT_03cfd5d0)) {
                  lVar7 = *unaff_x26;
                  plVar5 = (long *)thunk_FUN_01a89d6c(in_stack_00000018,lVar7);
                  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01ab6ee0(in_stack_00000018,lVar7);
                  }
                  if (unaff_w21 == 0) {
                    lVar7 = *plVar5;
                    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
                    if (uVar8 != 0) {
                      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar9 + -2) == *unaff_x26) {
                          puVar6 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
                          goto LAB_027f11cc;
                        }
                        uVar8 = uVar8 - 1;
                        piVar9 = piVar9 + 4;
                      } while (uVar8 != 0);
                    }
                    puVar6 = (undefined8 *)FUN_01a472ec(plVar5,*unaff_x26,1);
LAB_027f11cc:
                    uVar8 = (*(code *)*puVar6)(plVar5,puVar6[1]);
                    if ((uVar8 & 1) != 0) {
                      uVar4 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cfd5a8);
                      FUN_027f28f8(uVar4,plVar5);
                      FUN_027e5eb0(uVar4,0);
                      goto LAB_027f1268;
                    }
                  }
                  lVar7 = *plVar5;
                  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
                  if (uVar8 != 0) {
                    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar9 + -2) == *unaff_x26) {
                        puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
                        goto LAB_027f1258;
                      }
                      uVar8 = uVar8 - 1;
                      piVar9 = piVar9 + 4;
                    } while (uVar8 != 0);
                  }
                  puVar6 = (undefined8 *)FUN_01a472ec(plVar5,*unaff_x26,0);
LAB_027f1258:
                  (*(code *)*puVar6)(plVar5);
                }
                else {
                  (**(code **)(lVar7 + 0x178))(in_stack_00000018);
                }
              }
              else {
                lVar7 = *unaff_x27;
                if (*(int *)(lVar7 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                  lVar7 = *unaff_x27;
                }
                uVar4 = FUN_01ab69c8(lVar7);
                FUN_025c8448(plVar5,unaff_w21,uVar4,0);
              }
            }
LAB_027f1268:
            iVar10 = iVar10 + 1;
          } while (iVar10 != iVar1);
        }
      }
      if (DAT_0412519c == '\0') {
        FUN_01ab69ac(PTR_DAT_03cd7350);
        DAT_0412519c = '\x01';
      }
      lVar7 = *(long *)PTR_DAT_03cd7350;
      goto LAB_027f1374;
    }
  }
  else {
    (**(code **)(param_1 + 0x178))();
  }
  if (DAT_0412519c == '\0') {
    FUN_01ab69ac(PTR_DAT_03cd7350);
    DAT_0412519c = '\x01';
  }
  lVar7 = *unaff_x23;
LAB_027f1374:
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  return;
}


