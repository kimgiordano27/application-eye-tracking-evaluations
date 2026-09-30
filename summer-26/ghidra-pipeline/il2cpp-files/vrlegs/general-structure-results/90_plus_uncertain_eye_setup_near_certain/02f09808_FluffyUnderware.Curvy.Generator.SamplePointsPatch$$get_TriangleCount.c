/*
FUNCTION_NAME: FluffyUnderware.Curvy.Generator.SamplePointsPatch$$get_TriangleCount
ENTRY_POINT: 02f09808
PROGRAM: vrlegs-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02f098f4) */

void FluffyUnderware_Curvy_Generator_SamplePointsPatch__get_TriangleCount(void)

{
  byte bVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  int *piVar6;
  long *unaff_x20;
  long *unaff_x21;
  long *unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  int iVar7;
  long in_stack_00000008;
  undefined8 in_stack_00000018;
  
  iVar7 = 0;
  while( true ) {
    if (in_stack_00000018._4_1_ != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0(unaff_x21,0);
    }
    if (in_stack_00000008 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01a28d1c(in_stack_00000008);
    }
    if (iVar7 == 6) goto LAB_02f0961c;
    if (iVar7 != 0) break;
    do {
      (**(code **)(*unaff_x21 + 0x1f8))(unaff_x21);
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar3 = FUN_02f0a8c0();
      if ((uVar3 & 1) != 0) {
        (**(code **)(*unaff_x21 + 0x1c8))(unaff_x21,*(undefined8 *)(*unaff_x21 + 0x1d0));
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
      if ((uVar3 & 1) == 0)
      goto FluffyUnderware_Curvy_Generator_SamplePointsMaterialGroup__get_StartVertex;
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
    } while ((uVar3 & 1) != 0);
    in_stack_00000018._4_1_ = '\0';
    FUN_027e0bd8(unaff_x21,(long)&stack0x00000018 + 4,0);
    (**(code **)(*unaff_x21 + 0x1f8))(unaff_x21);
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar3 = FUN_02f0a8c0();
    if ((uVar3 & 1) != 0) {
      (**(code **)(*unaff_x21 + 0x1c8))(unaff_x21,*(undefined8 *)(*unaff_x21 + 0x1d0));
    }
    in_stack_00000008 = 0;
    iVar7 = 6;
  }
FluffyUnderware_Curvy_Generator_SamplePointsMaterialGroup__get_StartVertex:
  plVar4 = (long *)thunk_FUN_01a89d6c();
  if (plVar4 != (long *)0x0) {
    lVar5 = *plVar4;
    uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar3 != 0) {
      piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x23) {
          puVar2 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_02f09878;
        }
        uVar3 = uVar3 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined8 *)FUN_01a472ec(plVar4,*unaff_x23,0);
LAB_02f09878:
    (*(code *)*puVar2)(plVar4,puVar2[1]);
  }
  return;
}


