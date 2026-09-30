/*
FUNCTION_NAME: OVRPlugin$$get_eyeTrackedFoveatedRenderingEnabled
ENTRY_POINT: 027f1008
PROGRAM: vrlegs-libil2cpp.so
SCORE: 153
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_4;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void OVRPlugin__get_eyeTrackedFoveatedRenderingEnabled(long param_1)

{
  byte bVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  long in_x9;
  ulong uVar6;
  int *piVar7;
  int unaff_w21;
  int unaff_w22;
  int iVar8;
  long *unaff_x23;
  long *unaff_x24;
  long *unaff_x26;
  long *unaff_x27;
  int unaff_w28;
  long *unaff_x29;
  long *in_stack_00000018;
  
  do {
    if ((*(long *)(in_x9 + -8) == param_1) && ((*(byte *)((long)unaff_x23 + 0x1a) >> 3 & 1) == 0)) {
      FUN_0221f9e0();
      (**(code **)(*unaff_x23 + 0x178))(unaff_x23);
    }
    do {
      do {
        unaff_w22 = unaff_w22 + 1;
        if (unaff_w28 == unaff_w22) {
          if (unaff_w28 < 1) goto LAB_027f1274;
          iVar8 = 0;
          goto LAB_027f1068;
        }
        FUN_0221f8ec();
      } while (in_stack_00000018 == (long *)0x0);
      param_1 = *unaff_x24;
    } while (*(byte *)(*in_stack_00000018 + 0x130) < *(byte *)(param_1 + 0x130));
    in_x9 = *(long *)(*in_stack_00000018 + 200) + (ulong)*(byte *)(param_1 + 0x130) * 8;
    unaff_x23 = in_stack_00000018;
  } while( true );
LAB_027f1068:
  FUN_0221f8ec();
  if (in_stack_00000018 != (long *)0x0) {
    FUN_0221f9e0();
    lVar5 = *in_stack_00000018;
    plVar3 = in_stack_00000018;
    if (lVar5 != *unaff_x29) {
      plVar3 = (long *)0x0;
    }
    if (plVar3 == (long *)0x0) {
      bVar1 = *(byte *)(*(long *)PTR_DAT_03cfd5d0 + 0x130);
      if ((*(byte *)(lVar5 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(lVar5 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_03cfd5d0)) {
        lVar5 = *unaff_x26;
        plVar3 = (long *)thunk_FUN_01a89d6c(in_stack_00000018,lVar5);
        if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6ee0(in_stack_00000018,lVar5);
        }
        if (unaff_w21 == 0) {
          lVar5 = *plVar3;
          uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar6 != 0) {
            piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == *unaff_x26) {
                puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 1) * 0x10 + 0x138);
                goto LAB_027f11cc;
              }
              uVar6 = uVar6 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar6 != 0);
          }
          puVar4 = (undefined8 *)FUN_01a472ec(plVar3,*unaff_x26,1);
LAB_027f11cc:
          uVar6 = (*(code *)*puVar4)(plVar3,puVar4[1]);
          if ((uVar6 & 1) != 0) {
            uVar2 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cfd5a8);
            FUN_027f28f8(uVar2,plVar3);
            FUN_027e5eb0(uVar2,0);
            goto LAB_027f1268;
          }
        }
        lVar5 = *plVar3;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *unaff_x26) {
              puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_027f1258;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar4 = (undefined8 *)FUN_01a472ec(plVar3,*unaff_x26,0);
LAB_027f1258:
        (*(code *)*puVar4)(plVar3);
      }
      else {
        (**(code **)(lVar5 + 0x178))(in_stack_00000018);
      }
    }
    else {
      lVar5 = *unaff_x27;
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar5 = *unaff_x27;
      }
      uVar2 = FUN_01ab69c8(lVar5);
      FUN_025c8448(plVar3,unaff_w21,uVar2,0);
    }
  }
LAB_027f1268:
  iVar8 = iVar8 + 1;
  if (iVar8 == unaff_w28) {
LAB_027f1274:
    if (DAT_0412519c == '\0') {
      FUN_01ab69ac(PTR_DAT_03cd7350);
      DAT_0412519c = '\x01';
    }
    if (*(int *)(*(long *)PTR_DAT_03cd7350 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    return;
  }
  goto LAB_027f1068;
}


