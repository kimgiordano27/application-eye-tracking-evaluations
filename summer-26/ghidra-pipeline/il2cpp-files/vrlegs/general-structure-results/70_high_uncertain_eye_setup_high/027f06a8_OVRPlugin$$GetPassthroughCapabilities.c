/*
FUNCTION_NAME: OVRPlugin$$GetPassthroughCapabilities
ENTRY_POINT: 027f06a8
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

void OVRPlugin__GetPassthroughCapabilities(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  undefined8 *unaff_x19;
  long *unaff_x21;
  undefined8 in_stack_00000008;
  
  puVar3 = PTR_DAT_03cfd588;
  puVar2 = PTR_DAT_03cbed20;
  do {
    lVar5 = *unaff_x21;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_027f0704;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_01a472ec();
LAB_027f0704:
    uVar6 = (*(code *)*puVar4)();
    if ((uVar6 & 1) == 0) {
      if (unaff_x21 == (long *)0x0) goto LAB_027f083c;
      lVar5 = *unaff_x21;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 == 0) goto LAB_027f0814;
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      break;
    }
    lVar5 = *unaff_x21;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)puVar3) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_027f0760;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_01a472ec();
LAB_027f0760:
    lVar5 = (*(code *)*puVar4)();
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    uVar1 = *(uint *)(lVar5 + 0x38);
    thunk_FUN_01a4b338();
    if (((uVar1 >> 0x15 & 1) != 0) &&
       (uVar1 = *(uint *)(lVar5 + 0x38), thunk_FUN_01a4b338(), (uVar1 >> 0x13 & 1) == 0)) {
      lVar5 = *(long *)(lVar5 + 0x48);
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
  } while( true );
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
    if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_03cbed08) {
      puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_027f0830;
    }
  }
LAB_027f0814:
  puVar4 = (undefined8 *)FUN_01a472ec();
LAB_027f0830:
  (*(code *)*puVar4)();
LAB_027f083c:
  if (in_stack_00000008._4_1_ != '\0') {
    FUN_01a4adbc();
  }
  thunk_FUN_01a4b338();
  *unaff_x19 = 0;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  return;
}


