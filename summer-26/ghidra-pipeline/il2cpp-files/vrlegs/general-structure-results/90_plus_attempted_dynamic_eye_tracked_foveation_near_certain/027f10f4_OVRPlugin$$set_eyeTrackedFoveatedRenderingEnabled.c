/*
FUNCTION_NAME: OVRPlugin$$set_eyeTrackedFoveatedRenderingEnabled
ENTRY_POINT: 027f10f4
PROGRAM: vrlegs-libil2cpp.so
SCORE: 153
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_4;validity_or_gating_hits_4;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void OVRPlugin__set_eyeTrackedFoveatedRenderingEnabled(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long in_x9;
  ulong uVar4;
  int *piVar5;
  uint in_w11;
  int unaff_w21;
  int unaff_w22;
  long *unaff_x24;
  long *unaff_x26;
  long lVar6;
  long *unaff_x27;
  int unaff_w28;
  long *unaff_x29;
  long *in_stack_00000018;
  
  do {
    if ((in_w11 < *(byte *)(in_x9 + 0x130)) ||
       (*(long *)(*(long *)(param_1 + 200) + (ulong)*(byte *)(in_x9 + 0x130) * 8 + -8) != in_x9)) {
      lVar6 = *unaff_x26;
      plVar1 = (long *)thunk_FUN_01a89d6c(unaff_x24,lVar6);
      if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6ee0(unaff_x24,lVar6);
      }
      if (unaff_w21 == 0) {
        lVar6 = *plVar1;
        uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar4 != 0) {
          piVar5 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar5 + -2) == *unaff_x26) {
              puVar2 = (undefined8 *)(lVar6 + (long)(*piVar5 + 1) * 0x10 + 0x138);
              goto LAB_027f11cc;
            }
            uVar4 = uVar4 - 1;
            piVar5 = piVar5 + 4;
          } while (uVar4 != 0);
        }
        puVar2 = (undefined8 *)FUN_01a472ec(plVar1,*unaff_x26,1);
LAB_027f11cc:
        uVar4 = (*(code *)*puVar2)(plVar1,puVar2[1]);
        if ((uVar4 & 1) != 0) {
          uVar3 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cfd5a8);
          FUN_027f28f8(uVar3,plVar1);
          FUN_027e5eb0(uVar3,0);
          goto LAB_027f1268;
        }
      }
      lVar6 = *plVar1;
      uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *unaff_x26) {
            puVar2 = (undefined8 *)(lVar6 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_027f1258;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined8 *)FUN_01a472ec(plVar1,*unaff_x26,0);
LAB_027f1258:
      (*(code *)*puVar2)(plVar1);
    }
    else {
      (**(code **)(param_1 + 0x178))(unaff_x24);
    }
LAB_027f1268:
    while( true ) {
      do {
        unaff_w22 = unaff_w22 + 1;
        if (unaff_w22 == unaff_w28) {
          if (DAT_0412519c == '\0') {
            FUN_01ab69ac(PTR_DAT_03cd7350);
            DAT_0412519c = '\x01';
          }
          if (*(int *)(*(long *)PTR_DAT_03cd7350 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          return;
        }
        FUN_0221f8ec();
      } while (in_stack_00000018 == (long *)0x0);
      FUN_0221f9e0();
      param_1 = *in_stack_00000018;
      plVar1 = in_stack_00000018;
      if (param_1 != *unaff_x29) {
        plVar1 = (long *)0x0;
      }
      if (plVar1 == (long *)0x0) break;
      lVar6 = *unaff_x27;
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar6 = *unaff_x27;
      }
      uVar3 = FUN_01ab69c8(lVar6);
      FUN_025c8448(plVar1,unaff_w21,uVar3,0);
    }
    in_w11 = (uint)*(byte *)(param_1 + 0x130);
    in_x9 = *(long *)PTR_DAT_03cfd5d0;
    unaff_x24 = in_stack_00000018;
  } while( true );
}


