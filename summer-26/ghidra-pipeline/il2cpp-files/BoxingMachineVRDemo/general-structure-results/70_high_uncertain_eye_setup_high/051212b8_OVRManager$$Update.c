/*
FUNCTION_NAME: OVRManager$$Update
ENTRY_POINT: 051212b8
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05121338) */
/* WARNING: Removing unreachable block (ram,0x05121348) */
/* WARNING: Removing unreachable block (ram,0x0512134c) */
/* WARNING: Removing unreachable block (ram,0x05121360) */
/* WARNING: Removing unreachable block (ram,0x05121368) */
/* WARNING: Removing unreachable block (ram,0x05121390) */
/* WARNING: Removing unreachable block (ram,0x05121374) */
/* WARNING: Removing unreachable block (ram,0x05121380) */
/* WARNING: Removing unreachable block (ram,0x051213a0) */
/* WARNING: Removing unreachable block (ram,0x05121334) */
/* WARNING: Removing unreachable block (ram,0x05121460) */

void OVRManager__Update(void)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x22;
  long *unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  
  do {
    lVar3 = *unaff_x22;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x24) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_051211dc;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_02d9a5d4();
LAB_051211dc:
    uVar4 = (*(code *)*puVar2)();
    if ((uVar4 & 1) == 0) {
      if (unaff_x22 == (long *)0x0) goto LAB_05121328;
      lVar3 = *unaff_x22;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 == 0) goto LAB_05121300;
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      break;
    }
    lVar3 = *unaff_x22;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x26) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_05121238;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_02d9a5d4();
LAB_05121238:
    (*(code *)*puVar2)();
    FUN_0511d858();
    if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    lVar3 = *unaff_x20;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x25) {
          puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 2) * 0x10 + 0x138);
          goto LAB_051212a8;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_02d9a5d4();
LAB_051212a8:
    (*(code *)*puVar2)();
  } while( true );
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar5 = piVar5 + 4;
    if (uVar4 == 0) break;
    if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_0675f3d0) {
      puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
      goto LAB_0512131c;
    }
  }
LAB_05121300:
  puVar2 = (undefined8 *)FUN_02d9a5d4();
LAB_0512131c:
  (*(code *)*puVar2)();
LAB_05121328:
  if (unaff_x20 != (long *)0x0) {
    lVar3 = *unaff_x20;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x25) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_05121400;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_02d9a5d4();
LAB_05121400:
    iVar1 = (*(code *)*puVar2)();
    if (iVar1 < 1) {
      return;
    }
    if (*(long *)(unaff_x19 + 0x28) != 0) {
      *(long **)(*(long *)(unaff_x19 + 0x28) + 0xf8) = unaff_x20;
      thunk_FUN_02dd37b4();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


