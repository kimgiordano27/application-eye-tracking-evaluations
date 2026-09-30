/*
FUNCTION_NAME: OVRManager$$GetCurrentDisplaySubsystemDescriptor
ENTRY_POINT: 0512111c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;functionality_eye_api_context_without_clear_sink_hits_2
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

void OVRManager__GetCurrentDisplaySubsystemDescriptor(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long in_x10;
  int *piVar8;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long *unaff_x25;
  
  lVar6 = *unaff_x21;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == **(long **)(in_x10 + 0xac0)) {
        puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_0512116c;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar4 = (undefined8 *)FUN_02d9a5d4();
LAB_0512116c:
  plVar5 = (long *)(*(code *)*puVar4)();
  puVar2 = PTR_DAT_0676aab8;
  puVar1 = PTR_DAT_0675f3d8;
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  do {
    lVar6 = *plVar5;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_051211dc;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_02d9a5d4(plVar5,*(long *)puVar1,0);
LAB_051211dc:
    uVar7 = (*(code *)*puVar4)(plVar5,puVar4[1]);
    if ((uVar7 & 1) == 0) {
      if (plVar5 == (long *)0x0) goto LAB_05121328;
      lVar6 = *plVar5;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 == 0) goto LAB_05121300;
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      break;
    }
    lVar6 = *plVar5;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_05121238;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_02d9a5d4(plVar5,*(long *)puVar2,0);
LAB_05121238:
    (*(code *)*puVar4)(plVar5,puVar4[1]);
    FUN_0511d858();
    if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    lVar6 = *unaff_x20;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x25) {
          puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 2) * 0x10 + 0x138);
          goto LAB_051212a8;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_02d9a5d4();
LAB_051212a8:
    (*(code *)*puVar4)();
  } while( true );
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
    if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_0675f3d0) {
      puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_0512131c;
    }
  }
LAB_05121300:
  puVar4 = (undefined8 *)FUN_02d9a5d4(plVar5,*(long *)PTR_DAT_0675f3d0,0);
LAB_0512131c:
  (*(code *)*puVar4)(plVar5,puVar4[1]);
LAB_05121328:
  if (unaff_x20 != (long *)0x0) {
    lVar6 = *unaff_x20;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x25) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_05121400;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_02d9a5d4();
LAB_05121400:
    iVar3 = (*(code *)*puVar4)();
    if (iVar3 < 1) {
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


