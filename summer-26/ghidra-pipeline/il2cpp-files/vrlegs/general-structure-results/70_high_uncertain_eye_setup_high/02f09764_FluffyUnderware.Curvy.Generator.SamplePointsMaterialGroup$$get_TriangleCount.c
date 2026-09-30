/*
FUNCTION_NAME: FluffyUnderware.Curvy.Generator.SamplePointsMaterialGroup$$get_TriangleCount
ENTRY_POINT: 02f09764
PROGRAM: vrlegs-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02f098f4) */
/* WARNING: Removing unreachable block (ram,0x02f09794) */
/* WARNING: Removing unreachable block (ram,0x02f098bc) */

void FluffyUnderware_Curvy_Generator_SamplePointsMaterialGroup__get_TriangleCount
               (undefined8 param_1,undefined8 param_2)

{
  byte bVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  code *in_x9;
  int *piVar6;
  long *unaff_x20;
  long *unaff_x21;
  long *unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  undefined8 in_stack_00000018;
  
  do {
    (*in_x9)(unaff_x21,param_2);
    do {
      if (in_stack_00000018._4_1_ != '\0') {
        OVRManager_<>c__<InitOVRManager>b__424_0(unaff_x21,0);
      }
LAB_02f0961c:
      lVar5 = *unaff_x20;
      uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar3 != 0) {
        piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *unaff_x25) {
            puVar2 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_02f09668;
          }
          uVar3 = uVar3 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar3 != 0);
      }
      puVar2 = (undefined8 *)FUN_01a472ec();
LAB_02f09668:
      uVar3 = (*(code *)*puVar2)();
      if ((uVar3 & 1) == 0) {
        plVar4 = (long *)thunk_FUN_01a89d6c();
        if (plVar4 == (long *)0x0) {
          return;
        }
        lVar5 = *plVar4;
        uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar3 == 0) goto LAB_02f0985c;
        piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        goto LAB_02f09844;
      }
      lVar5 = *unaff_x20;
      uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar3 != 0) {
        piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *unaff_x25) {
            puVar2 = (undefined8 *)(lVar5 + (long)(*piVar6 + 1) * 0x10 + 0x138);
            goto LAB_02f096c8;
          }
          uVar3 = uVar3 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar3 != 0);
      }
      puVar2 = (undefined8 *)FUN_01a472ec();
LAB_02f096c8:
      unaff_x21 = (long *)(*(code *)*puVar2)();
      if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      bVar1 = *(byte *)(*unaff_x26 + 0x130);
      if ((*(byte *)(*unaff_x21 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*unaff_x21 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x26)) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6ee0(unaff_x21);
      }
      uVar3 = (**(code **)(*unaff_x21 + 0x1a8))(unaff_x21,*(undefined8 *)(*unaff_x21 + 0x1b0));
      if ((uVar3 & 1) != 0) {
        (**(code **)(*unaff_x21 + 0x1f8))(unaff_x21);
        if (*(int *)(*unaff_x24 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar3 = FUN_02f0a8c0();
        if ((uVar3 & 1) != 0) {
          (**(code **)(*unaff_x21 + 0x1c8))(unaff_x21,*(undefined8 *)(*unaff_x21 + 0x1d0));
        }
        goto LAB_02f0961c;
      }
      in_stack_00000018._4_1_ = '\0';
      FUN_027e0bd8(unaff_x21,(long)&stack0x00000018 + 4,0);
      (**(code **)(*unaff_x21 + 0x1f8))(unaff_x21);
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar3 = FUN_02f0a8c0();
    } while ((uVar3 & 1) == 0);
    in_x9 = *(code **)(*unaff_x21 + 0x1c8);
    param_2 = *(undefined8 *)(*unaff_x21 + 0x1d0);
  } while( true );
  while( true ) {
    uVar3 = uVar3 - 1;
    piVar6 = piVar6 + 4;
    if (uVar3 == 0) break;
LAB_02f09844:
    if (*(long *)(piVar6 + -2) == *unaff_x23) {
      puVar2 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
      goto LAB_02f09878;
    }
  }
LAB_02f0985c:
  puVar2 = (undefined8 *)FUN_01a472ec(plVar4,*unaff_x23,0);
LAB_02f09878:
  (*(code *)*puVar2)(plVar4,puVar2[1]);
  return;
}


