/*
FUNCTION_NAME: OVRPlugin$$GetBoundaryDimensions
ENTRY_POINT: 027f0774
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x027f08ac) */
/* WARNING: Removing unreachable block (ram,0x027f084c) */
/* WARNING: Removing unreachable block (ram,0x027f08b8) */
/* WARNING: Removing unreachable block (ram,0x027f0870) */

void OVRPlugin__GetBoundaryDimensions(void)

{
  uint uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  int *piVar4;
  undefined8 *unaff_x19;
  long *unaff_x21;
  long unaff_x23;
  long lVar5;
  long *unaff_x24;
  long *unaff_x25;
  undefined8 in_stack_00000008;
  
  do {
    uVar1 = *(uint *)(unaff_x23 + 0x38);
    thunk_FUN_01a4b338();
    if (((uVar1 >> 0x15 & 1) != 0) &&
       (uVar1 = *(uint *)(unaff_x23 + 0x38), thunk_FUN_01a4b338(), (uVar1 >> 0x13 & 1) == 0)) {
      lVar5 = *(long *)(unaff_x23 + 0x48);
      thunk_FUN_01a4b338();
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      lVar5 = *(long *)(lVar5 + 0x20);
      thunk_FUN_01a4b338();
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      FUN_025c91cc(lVar5,0,0,0);
      FUN_027eff1c();
    }
    lVar5 = *unaff_x21;
    uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *unaff_x24) {
          puVar2 = (undefined8 *)(lVar5 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_027f0704;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined8 *)FUN_01a472ec();
LAB_027f0704:
    uVar3 = (*(code *)*puVar2)();
    if ((uVar3 & 1) == 0) {
      if (unaff_x21 == (long *)0x0) goto LAB_027f083c;
      lVar5 = *unaff_x21;
      uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar3 == 0) goto LAB_027f0814;
      piVar4 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      break;
    }
    lVar5 = *unaff_x21;
    uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *unaff_x25) {
          puVar2 = (undefined8 *)(lVar5 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_027f0760;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined8 *)FUN_01a472ec();
LAB_027f0760:
    unaff_x23 = (*(code *)*puVar2)();
    if (unaff_x23 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
  } while( true );
  while( true ) {
    uVar3 = uVar3 - 1;
    piVar4 = piVar4 + 4;
    if (uVar3 == 0) break;
    if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_03cbed08) {
      puVar2 = (undefined8 *)(lVar5 + (long)*piVar4 * 0x10 + 0x138);
      goto LAB_027f0830;
    }
  }
LAB_027f0814:
  puVar2 = (undefined8 *)FUN_01a472ec();
LAB_027f0830:
  (*(code *)*puVar2)();
LAB_027f083c:
  if (in_stack_00000008._4_1_ != '\0') {
    FUN_01a4adbc();
  }
  thunk_FUN_01a4b338();
  *unaff_x19 = 0;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  return;
}


