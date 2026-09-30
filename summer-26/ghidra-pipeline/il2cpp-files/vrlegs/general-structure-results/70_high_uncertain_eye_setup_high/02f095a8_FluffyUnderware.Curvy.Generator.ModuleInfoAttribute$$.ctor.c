/*
FUNCTION_NAME: FluffyUnderware.Curvy.Generator.ModuleInfoAttribute$$.ctor
ENTRY_POINT: 02f095a8
PROGRAM: vrlegs-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x02f09794) */
/* WARNING: Removing unreachable block (ram,0x02f098bc) */
/* WARNING: Removing unreachable block (ram,0x02f098f4) */

void FluffyUnderware_Curvy_Generator_ModuleInfoAttribute___ctor(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long unaff_x22;
  long *unaff_x23;
  long *unaff_x24;
  int unaff_w25;
  ulong unaff_x26;
  undefined8 in_stack_00000018;
  
  if ((unaff_x26 & 1) != 0) {
    unaff_w25 = 0;
    unaff_x22 = 0;
  }
  if (in_stack_00000018._4_1_ != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0();
  }
  if (unaff_x22 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01a28d1c(unaff_x22);
  }
  if (unaff_w25 != 0) {
    return;
  }
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  lVar4 = FUN_02f0a39c();
  if ((lVar4 == 0) || (plVar5 = *(long **)(lVar4 + 0x10), plVar5 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  plVar5 = (long *)(**(code **)(*plVar5 + 0x388))(plVar5,*(undefined8 *)(*plVar5 + 0x390));
  puVar3 = PTR_DAT_03d22258;
  puVar2 = PTR_DAT_03cbed20;
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  do {
    lVar8 = *plVar5;
    lVar4 = *(long *)puVar2;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar4) {
          puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_02f09668;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar6 = (undefined8 *)FUN_01a472ec(plVar5,lVar4,0);
LAB_02f09668:
    uVar9 = (*(code *)*puVar6)(plVar5,puVar6[1]);
    if ((uVar9 & 1) == 0) {
      plVar5 = (long *)thunk_FUN_01a89d6c(plVar5,*unaff_x23);
      if (plVar5 == (long *)0x0) {
        return;
      }
      lVar4 = *plVar5;
      uVar9 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar9 == 0) goto LAB_02f0985c;
      piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      break;
    }
    lVar8 = *plVar5;
    lVar4 = *(long *)puVar2;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar4) {
          puVar6 = (undefined8 *)(lVar8 + (long)(*piVar10 + 1) * 0x10 + 0x138);
          goto LAB_02f096c8;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar6 = (undefined8 *)FUN_01a472ec(plVar5,lVar4,1);
LAB_02f096c8:
    plVar7 = (long *)(*(code *)*puVar6)(plVar5,puVar6[1]);
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    bVar1 = *(byte *)(*(long *)puVar3 + 0x130);
    if ((*(byte *)(*plVar7 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar3)) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6ee0(plVar7);
    }
    uVar9 = (**(code **)(*plVar7 + 0x1a8))(plVar7,*(undefined8 *)(*plVar7 + 0x1b0));
    if ((uVar9 & 1) == 0) {
      in_stack_00000018._4_1_ = '\0';
      FUN_027e0bd8(plVar7,(long)&stack0x00000018 + 4,0);
      (**(code **)(*plVar7 + 0x1f8))(plVar7);
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar9 = FUN_02f0a8c0();
      if ((uVar9 & 1) != 0) {
        (**(code **)(*plVar7 + 0x1c8))(plVar7,*(undefined8 *)(*plVar7 + 0x1d0));
      }
      if (in_stack_00000018._4_1_ != '\0') {
        OVRManager_<>c__<InitOVRManager>b__424_0(plVar7,0);
      }
    }
    else {
      (**(code **)(*plVar7 + 0x1f8))(plVar7);
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar9 = FUN_02f0a8c0();
      if ((uVar9 & 1) != 0) {
        (**(code **)(*plVar7 + 0x1c8))(plVar7,*(undefined8 *)(*plVar7 + 0x1d0));
      }
    }
  } while( true );
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
    if (*(long *)(piVar10 + -2) == *unaff_x23) {
      puVar6 = (undefined8 *)(lVar4 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_02f09878;
    }
  }
LAB_02f0985c:
  puVar6 = (undefined8 *)FUN_01a472ec(plVar5,*unaff_x23,0);
LAB_02f09878:
  (*(code *)*puVar6)(plVar5,puVar6[1]);
  return;
}


