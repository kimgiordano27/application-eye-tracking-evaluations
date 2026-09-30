/*
FUNCTION_NAME: OVRPlugin$$get_foveatedRenderingLevel
ENTRY_POINT: 027f11dc
PROGRAM: vrlegs-libil2cpp.so
SCORE: 104
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRPlugin__get_foveatedRenderingLevel(void)

{
  long *plVar1;
  byte bVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  int unaff_w21;
  int unaff_w22;
  long *unaff_x23;
  long *unaff_x26;
  long *unaff_x27;
  int unaff_w28;
  long *unaff_x29;
  long *in_stack_00000018;
  
code_r0x027f11dc:
  uVar4 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cfd5a8);
  FUN_027f28f8(uVar4,unaff_x23);
  FUN_027e5eb0(uVar4,0);
LAB_027f1268:
  while( true ) {
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
      lVar5 = *in_stack_00000018;
      plVar1 = in_stack_00000018;
      if (lVar5 != *unaff_x29) {
        plVar1 = (long *)0x0;
      }
      if (plVar1 == (long *)0x0) break;
      lVar5 = *unaff_x27;
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar5 = *unaff_x27;
      }
      uVar4 = FUN_01ab69c8(lVar5);
      FUN_025c8448(plVar1,unaff_w21,uVar4,0);
    }
    bVar2 = *(byte *)(*(long *)PTR_DAT_03cfd5d0 + 0x130);
    if ((*(byte *)(lVar5 + 0x130) < bVar2) ||
       (*(long *)(*(long *)(lVar5 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)PTR_DAT_03cfd5d0))
    break;
    (**(code **)(lVar5 + 0x178))(in_stack_00000018);
  }
  lVar5 = *unaff_x26;
  unaff_x23 = (long *)thunk_FUN_01a89d6c(in_stack_00000018,lVar5);
  if (unaff_x23 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6ee0(in_stack_00000018,lVar5);
  }
  if (unaff_w21 == 0) {
    lVar5 = *unaff_x23;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x26) {
          puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 1) * 0x10 + 0x138);
          goto LAB_027f11cc;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_01a472ec(unaff_x23,*unaff_x26,1);
LAB_027f11cc:
    uVar6 = (*(code *)*puVar3)(unaff_x23,puVar3[1]);
    if ((uVar6 & 1) != 0) goto code_r0x027f11dc;
  }
  lVar5 = *unaff_x23;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *unaff_x26) {
        puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_027f1258;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar3 = (undefined8 *)FUN_01a472ec(unaff_x23,*unaff_x26,0);
LAB_027f1258:
  (*(code *)*puVar3)(unaff_x23);
  goto LAB_027f1268;
}


