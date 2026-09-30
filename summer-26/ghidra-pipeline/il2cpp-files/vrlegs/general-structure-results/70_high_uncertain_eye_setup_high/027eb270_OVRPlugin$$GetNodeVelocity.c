/*
FUNCTION_NAME: OVRPlugin$$GetNodeVelocity
ENTRY_POINT: 027eb270
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x027eb484) */

long * OVRPlugin__GetNodeVelocity(long param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  byte bVar2;
  undefined *puVar3;
  undefined1 in_ZR;
  undefined8 *puVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  ulong in_x9;
  int *in_x10;
  int *piVar8;
  long *unaff_x19;
  long *plVar9;
  long *unaff_x20;
  int iVar10;
  long *unaff_x22;
  long *unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  
  do {
    if ((bool)in_ZR) {
      puVar4 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
      plVar9 = unaff_x19;
      goto LAB_027eb29c;
    }
    in_x9 = in_x9 - 1;
    in_x10 = in_x10 + 4;
    if (in_x9 == 0) {
      do {
        puVar4 = (undefined8 *)FUN_01a472ec();
        plVar9 = unaff_x19;
LAB_027eb29c:
        uVar5 = (*(code *)*puVar4)();
        if ((uVar5 & 1) == 0) {
          iVar10 = 10;
LAB_027eb3a0:
          puVar3 = PTR_DAT_03cbed08;
          plVar6 = (long *)thunk_FUN_01a89d6c();
          if (plVar6 == (long *)0x0) goto LAB_027eb414;
          lVar7 = *plVar6;
          uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar5 == 0) goto LAB_027eb3ec;
          piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          goto LAB_027eb3d4;
        }
        lVar7 = *unaff_x20;
        uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar5 != 0) {
          piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *unaff_x24) {
              puVar4 = (undefined8 *)(lVar7 + (long)(*piVar8 + 1) * 0x10 + 0x138);
              goto LAB_027eb2fc;
            }
            uVar5 = uVar5 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar5 != 0);
        }
        puVar4 = (undefined8 *)FUN_01a472ec();
LAB_027eb2fc:
        plVar6 = (long *)(*(code *)*puVar4)();
        unaff_x19 = plVar9;
        if (plVar6 == (long *)0x0) {
LAB_027eb38c:
          iVar10 = 9;
          plVar9 = unaff_x19;
          goto LAB_027eb3a0;
        }
        bVar1 = *(byte *)(*plVar6 + 0x130);
        bVar2 = *(byte *)(*unaff_x25 + 0x130);
        if ((bVar1 < bVar2) ||
           (lVar7 = *(long *)(*plVar6 + 200), *(long *)(lVar7 + (ulong)bVar2 * 8 + -8) != *unaff_x25
           )) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6ee0();
        }
        unaff_x19 = plVar6;
        if (plVar9 != (long *)0x0) {
          unaff_x19 = plVar9;
        }
        bVar2 = *(byte *)(*unaff_x23 + 0x130);
        if ((bVar1 < bVar2) || (*(long *)(lVar7 + (ulong)bVar2 * 8 + -8) != *unaff_x23))
        goto LAB_027eb38c;
        lVar7 = plVar6[0x12];
        if (*(int *)(*unaff_x22 + 0xe0) == 0) {
          thunk_FUN_01a58e78(*unaff_x22);
        }
        uVar5 = FUN_027d7dac(&stack0x00000008,lVar7,0);
        if ((uVar5 & 1) == 0) goto LAB_027eb38c;
        if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        param_1 = *unaff_x20;
        param_3 = *unaff_x24;
        in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
      } while (in_x9 == 0);
      in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    }
    in_ZR = *(long *)(in_x10 + -2) == param_3;
  } while( true );
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar8 = piVar8 + 4;
    if (uVar5 == 0) break;
LAB_027eb3d4:
    if (*(long *)(piVar8 + -2) == *(long *)puVar3) {
      puVar4 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_027eb408;
    }
  }
LAB_027eb3ec:
  puVar4 = (undefined8 *)FUN_01a472ec(plVar6,*(long *)puVar3,0);
LAB_027eb408:
  (*(code *)*puVar4)(plVar6,puVar4[1]);
LAB_027eb414:
  if ((iVar10 == 10) || (iVar10 == 0)) {
    if (plVar9 != (long *)0x0) {
      bVar1 = *(byte *)(*unaff_x23 + 0x130);
      if ((*(byte *)(*plVar9 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x23)) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6ee0(plVar9);
      }
    }
  }
  else {
    plVar9 = (long *)0x0;
  }
  return plVar9;
}


