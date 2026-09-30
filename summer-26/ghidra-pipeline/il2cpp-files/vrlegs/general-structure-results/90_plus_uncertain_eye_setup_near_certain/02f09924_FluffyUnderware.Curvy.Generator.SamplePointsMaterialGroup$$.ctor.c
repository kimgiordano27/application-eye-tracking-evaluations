/*
FUNCTION_NAME: FluffyUnderware.Curvy.Generator.SamplePointsMaterialGroup$$.ctor
ENTRY_POINT: 02f09924
PROGRAM: vrlegs-libil2cpp.so
SCORE: 103
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_9;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_6
*/


/* WARNING: Removing unreachable block (ram,0x02f098bc) */
/* WARNING: Removing unreachable block (ram,0x02f09a68) */
/* WARNING: Removing unreachable block (ram,0x02f09794) */
/* WARNING: Removing unreachable block (ram,0x02f09a3c) */
/* WARNING: Removing unreachable block (ram,0x02f098f4) */

void FluffyUnderware_Curvy_Generator_SamplePointsMaterialGroup___ctor
               (undefined8 param_1,int param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long lVar10;
  long *unaff_x23;
  long *unaff_x24;
  undefined8 in_stack_00000018;
  
  if (param_2 == 1) {
    plVar6 = (long *)__cxa_begin_catch();
    lVar10 = *plVar6;
    __cxa_end_catch();
    plVar6 = (long *)thunk_FUN_01a89d6c();
    if (plVar6 != (long *)0x0) {
      lVar7 = *plVar6;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *unaff_x23) {
            puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_02f09598;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)FUN_01a472ec(plVar6,*unaff_x23,0);
LAB_02f09598:
      (*(code *)*puVar4)(plVar6,puVar4[1]);
    }
    if (lVar10 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01a28d1c(lVar10);
    }
    lVar10 = 0;
  }
  else {
    plVar6 = (long *)thunk_FUN_01a89d6c();
    if (plVar6 != (long *)0x0) {
      lVar10 = *plVar6;
      uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *unaff_x23) {
            puVar4 = (undefined8 *)(lVar10 + (long)*piVar9 * 0x10 + 0x138);
            goto code_r0x02f09a04;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)FUN_01a472ec(plVar6,*unaff_x23,0);
code_r0x02f09a04:
      (*(code *)*puVar4)(plVar6,puVar4[1]);
    }
    if (param_2 != 1) {
      if (in_stack_00000018._4_1_ != '\0') {
        OVRManager_<>c__<InitOVRManager>b__424_0();
      }
                    /* WARNING: Subroutine does not return */
      FUN_01b3fef0(param_1);
    }
    plVar6 = (long *)__cxa_begin_catch(param_1);
    lVar10 = *plVar6;
    __cxa_end_catch();
  }
  if (in_stack_00000018._4_1_ != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0();
  }
  if (lVar10 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01a28d1c(lVar10);
  }
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  lVar10 = FUN_02f0a39c();
  if ((lVar10 == 0) || (plVar6 = *(long **)(lVar10 + 0x10), plVar6 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  plVar6 = (long *)(**(code **)(*plVar6 + 0x388))(plVar6,*(undefined8 *)(*plVar6 + 0x390));
  puVar3 = PTR_DAT_03d22258;
  puVar2 = PTR_DAT_03cbed20;
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  do {
    lVar7 = *plVar6;
    lVar10 = *(long *)puVar2;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar10) {
          puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_02f09668;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_01a472ec(plVar6,lVar10,0);
LAB_02f09668:
    uVar8 = (*(code *)*puVar4)(plVar6,puVar4[1]);
    if ((uVar8 & 1) == 0) {
      plVar6 = (long *)thunk_FUN_01a89d6c(plVar6,*unaff_x23);
      if (plVar6 == (long *)0x0) {
        return;
      }
      lVar10 = *plVar6;
      uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar8 == 0) goto LAB_02f0985c;
      piVar9 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      break;
    }
    lVar7 = *plVar6;
    lVar10 = *(long *)puVar2;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar10) {
          puVar4 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
          goto LAB_02f096c8;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_01a472ec(plVar6,lVar10,1);
LAB_02f096c8:
    plVar5 = (long *)(*(code *)*puVar4)(plVar6,puVar4[1]);
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    bVar1 = *(byte *)(*(long *)puVar3 + 0x130);
    if ((*(byte *)(*plVar5 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar3)) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6ee0(plVar5);
    }
    uVar8 = (**(code **)(*plVar5 + 0x1a8))(plVar5,*(undefined8 *)(*plVar5 + 0x1b0));
    if ((uVar8 & 1) == 0) {
      in_stack_00000018._4_1_ = '\0';
      FUN_027e0bd8(plVar5,(long)&stack0x00000018 + 4,0);
      (**(code **)(*plVar5 + 0x1f8))(plVar5);
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar8 = FUN_02f0a8c0();
      if ((uVar8 & 1) != 0) {
        (**(code **)(*plVar5 + 0x1c8))(plVar5,*(undefined8 *)(*plVar5 + 0x1d0));
      }
      if (in_stack_00000018._4_1_ != '\0') {
        OVRManager_<>c__<InitOVRManager>b__424_0(plVar5,0);
      }
    }
    else {
      (**(code **)(*plVar5 + 0x1f8))(plVar5);
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar8 = FUN_02f0a8c0();
      if ((uVar8 & 1) != 0) {
        (**(code **)(*plVar5 + 0x1c8))(plVar5,*(undefined8 *)(*plVar5 + 0x1d0));
      }
    }
  } while( true );
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) break;
    if (*(long *)(piVar9 + -2) == *unaff_x23) {
      puVar4 = (undefined8 *)(lVar10 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_02f09878;
    }
  }
LAB_02f0985c:
  puVar4 = (undefined8 *)FUN_01a472ec(plVar6,*unaff_x23,0);
LAB_02f09878:
  (*(code *)*puVar4)(plVar6,puVar4[1]);
  return;
}


