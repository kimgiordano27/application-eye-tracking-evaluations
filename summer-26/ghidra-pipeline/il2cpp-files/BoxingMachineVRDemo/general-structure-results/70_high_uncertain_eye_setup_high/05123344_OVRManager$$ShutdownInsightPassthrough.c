/*
FUNCTION_NAME: OVRManager$$ShutdownInsightPassthrough
ENTRY_POINT: 05123344
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05123504) */
/* WARNING: Removing unreachable block (ram,0x05123558) */

void OVRManager__ShutdownInsightPassthrough(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  long *unaff_x21;
  long *plVar8;
  long *unaff_x25;
  long *unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  long *unaff_x29;
  
code_r0x05123344:
  do {
    lVar1 = (*(code *)*param_1)();
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    if (*(char *)(lVar1 + 0x80) == '\0') {
      FUN_05101ee4(lVar1,0);
      lVar2 = FUN_05122044();
      lVar3 = FUN_050f7004(lVar1,0);
      if (lVar3 != 0) {
        uVar4 = FUN_050f7004(lVar1,0);
        if (*(int *)(*unaff_x29 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        uVar4 = FUN_05141898(uVar4,0);
        if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        *(undefined8 *)(lVar2 + 0xf0) = uVar4;
        thunk_FUN_02dd37b4();
      }
      if (*(long *)(unaff_x19 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      plVar8 = *(long **)(*(long *)(unaff_x19 + 0x30) + 0xb8);
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      lVar3 = *plVar8;
      uVar4 = *(undefined8 *)(lVar1 + 0x30);
      uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *unaff_x28) {
            puVar5 = (undefined8 *)(lVar3 + (long)(*piVar7 + 5) * 0x10 + 0x138);
            goto LAB_0512346c;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar5 = (undefined8 *)FUN_02d9a5d4(plVar8,*unaff_x28,5);
LAB_0512346c:
      (*(code *)*puVar5)(plVar8,uVar4,lVar2,puVar5[1]);
    }
    lVar1 = *unaff_x21;
    uVar6 = (ulong)*(ushort *)(lVar1 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x26) {
          puVar5 = (undefined8 *)(lVar1 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_051232e8;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar5 = (undefined8 *)FUN_02d9a5d4();
LAB_051232e8:
    uVar6 = (*(code *)*puVar5)();
    if ((uVar6 & 1) == 0) {
      if (unaff_x21 == (long *)0x0) goto LAB_05123508;
      lVar1 = *unaff_x21;
      uVar6 = (ulong)*(ushort *)(lVar1 + 0x12e);
      if (uVar6 == 0) goto LAB_051234d0;
      piVar7 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
      break;
    }
    lVar1 = *unaff_x21;
    uVar6 = (ulong)*(ushort *)(lVar1 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x27) {
          param_1 = (undefined8 *)(lVar1 + (long)*piVar7 * 0x10 + 0x138);
          goto code_r0x05123344;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    param_1 = (undefined8 *)FUN_02d9a5d4();
  } while( true );
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
    if (*(long *)(piVar7 + -2) == *unaff_x25) {
      puVar5 = (undefined8 *)(lVar1 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_051234ec;
    }
  }
LAB_051234d0:
  puVar5 = (undefined8 *)FUN_02d9a5d4();
LAB_051234ec:
  (*(code *)*puVar5)();
LAB_05123508:
  uVar6 = FUN_050f1f10();
  if ((uVar6 & 1) != 0) {
    if (*(long *)(unaff_x19 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    *(undefined1 *)(*(long *)(unaff_x19 + 0x30) + 0xd0) = 0;
  }
  return;
}


