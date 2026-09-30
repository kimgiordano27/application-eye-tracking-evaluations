/*
FUNCTION_NAME: OVRPlugin$$GetHandState
ENTRY_POINT: 03687f08
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_9;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03688020) */

void OVRPlugin__GetHandState(long param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *plVar6;
  long *unaff_x22;
  long *unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  undefined4 uStack0000000000000000;
  undefined4 uStack0000000000000004;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined4 in_stack_00000018;
  
  do {
    uVar4 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == param_3) {
          puVar2 = (undefined8 *)(param_1 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_03687f4c;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238(unaff_x22,param_3,0);
LAB_03687f4c:
    uVar4 = (*(code *)*puVar2)(unaff_x22,unaff_x21);
    if ((uVar4 & 1) != 0) {
      FUN_036880f0(uStack0000000000000010,uStack0000000000000014,in_stack_00000018,
                   uStack0000000000000000,uStack0000000000000004,uStack0000000000000008,
                   uStack000000000000000c);
    }
    do {
      lVar3 = *unaff_x19;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *unaff_x25) {
            puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_03687e04;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined8 *)FUN_01ecb238();
LAB_03687e04:
      uVar4 = (*(code *)*puVar2)();
      if ((uVar4 & 1) == 0) {
        if (unaff_x19 == (long *)0x0) {
          return;
        }
        lVar3 = *unaff_x19;
        uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar4 == 0) goto LAB_03687fb8;
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        goto LAB_03687fa0;
      }
      lVar3 = *unaff_x19;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *unaff_x26) {
            puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_03687e60;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined8 *)FUN_01ecb238();
LAB_03687e60:
      unaff_x21 = (*(code *)*puVar2)();
      if (*(long *)(unaff_x20 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      plVar6 = *(long **)(*(long *)(unaff_x20 + 0x20) + 0x28);
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar3 = *plVar6;
      uVar1 = *(undefined4 *)(unaff_x21 + 0x14);
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *unaff_x27) {
            puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 9) * 0x10 + 0x138);
            goto LAB_03687ed8;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined8 *)FUN_01ecb238(plVar6,*unaff_x27,9);
LAB_03687ed8:
      uVar4 = (*(code *)*puVar2)(plVar6,uVar1,&stack0x00000010,puVar2[1]);
    } while ((uVar4 & 1) == 0);
    if (*(long *)(unaff_x20 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    unaff_x22 = *(long **)(*(long *)(unaff_x20 + 0x20) + 0x50);
    if (unaff_x22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    param_1 = *unaff_x22;
    param_3 = *unaff_x28;
  } while( true );
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar5 = piVar5 + 4;
    if (uVar4 == 0) break;
LAB_03687fa0:
    if (*(long *)(piVar5 + -2) == *unaff_x24) {
      puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
      goto LAB_03687fd4;
    }
  }
LAB_03687fb8:
  puVar2 = (undefined8 *)FUN_01ecb238();
LAB_03687fd4:
  (*(code *)*puVar2)();
  return;
}


