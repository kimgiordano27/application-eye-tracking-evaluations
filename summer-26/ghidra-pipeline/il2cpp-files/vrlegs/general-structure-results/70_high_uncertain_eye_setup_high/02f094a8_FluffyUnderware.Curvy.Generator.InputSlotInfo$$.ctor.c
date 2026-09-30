/*
FUNCTION_NAME: FluffyUnderware.Curvy.Generator.InputSlotInfo$$.ctor
ENTRY_POINT: 02f094a8
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02f098fc) */
/* WARNING: Removing unreachable block (ram,0x02f09794) */
/* WARNING: Removing unreachable block (ram,0x02f095b0) */
/* WARNING: Removing unreachable block (ram,0x02f098bc) */
/* WARNING: Removing unreachable block (ram,0x02f09910) */
/* WARNING: Removing unreachable block (ram,0x02f095d4) */
/* WARNING: Removing unreachable block (ram,0x02f095e0) */
/* WARNING: Removing unreachable block (ram,0x02f095e4) */
/* WARNING: Removing unreachable block (ram,0x02f095ec) */
/* WARNING: Removing unreachable block (ram,0x02f098c4) */
/* WARNING: Removing unreachable block (ram,0x02f095f4) */
/* WARNING: Removing unreachable block (ram,0x02f098f0) */
/* WARNING: Removing unreachable block (ram,0x02f0960c) */
/* WARNING: Removing unreachable block (ram,0x02f0961c) */
/* WARNING: Removing unreachable block (ram,0x02f0962c) */
/* WARNING: Removing unreachable block (ram,0x02f09634) */
/* WARNING: Removing unreachable block (ram,0x02f0965c) */
/* WARNING: Removing unreachable block (ram,0x02f09640) */
/* WARNING: Removing unreachable block (ram,0x02f0964c) */
/* WARNING: Removing unreachable block (ram,0x02f09668) */
/* WARNING: Removing unreachable block (ram,0x02f09814) */
/* WARNING: Removing unreachable block (ram,0x02f09828) */
/* WARNING: Removing unreachable block (ram,0x02f0983c) */
/* WARNING: Removing unreachable block (ram,0x02f09844) */
/* WARNING: Removing unreachable block (ram,0x02f0986c) */
/* WARNING: Removing unreachable block (ram,0x02f09850) */
/* WARNING: Removing unreachable block (ram,0x02f0985c) */
/* WARNING: Removing unreachable block (ram,0x02f09878) */
/* WARNING: Removing unreachable block (ram,0x02f09884) */
/* WARNING: Removing unreachable block (ram,0x02f09678) */
/* WARNING: Removing unreachable block (ram,0x02f09688) */
/* WARNING: Removing unreachable block (ram,0x02f09690) */
/* WARNING: Removing unreachable block (ram,0x02f096b8) */
/* WARNING: Removing unreachable block (ram,0x02f0969c) */
/* WARNING: Removing unreachable block (ram,0x02f096a8) */
/* WARNING: Removing unreachable block (ram,0x02f096c8) */
/* WARNING: Removing unreachable block (ram,0x02f098b4) */
/* WARNING: Removing unreachable block (ram,0x02f096dc) */
/* WARNING: Removing unreachable block (ram,0x02f096f4) */
/* WARNING: Removing unreachable block (ram,0x02f098a4) */
/* WARNING: Removing unreachable block (ram,0x02f09708) */
/* WARNING: Removing unreachable block (ram,0x02f0971c) */
/* WARNING: Removing unreachable block (ram,0x02f09750) */
/* WARNING: Removing unreachable block (ram,0x02f09754) */
/* WARNING: Removing unreachable block (ram,0x02f0975c) */
/* WARNING: Removing unreachable block (ram,0x02f0976c) */
/* WARNING: Removing unreachable block (ram,0x02f0977c) */
/* WARNING: Removing unreachable block (ram,0x02f09788) */
/* WARNING: Removing unreachable block (ram,0x02f09798) */
/* WARNING: Removing unreachable block (ram,0x02f097b8) */
/* WARNING: Removing unreachable block (ram,0x02f097bc) */
/* WARNING: Removing unreachable block (ram,0x02f097c4) */
/* WARNING: Removing unreachable block (ram,0x02f098f4) */

void FluffyUnderware_Curvy_Generator_InputSlotInfo___ctor(long param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  int *piVar6;
  long *unaff_x21;
  long *unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  undefined8 in_stack_00000018;
  
code_r0x02f094a8:
  puVar2 = (undefined8 *)(param_1 + 0x138);
  do {
    plVar3 = (long *)(*(code *)*puVar2)();
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    bVar1 = *(byte *)(*unaff_x26 + 0x130);
    if ((*(byte *)(*plVar3 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar3 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x26)) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6ee0(plVar3);
    }
    (**(code **)(*plVar3 + 0x1f8))(plVar3);
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar4 = FUN_02f0a8c0();
    if ((uVar4 & 1) != 0) {
      (**(code **)(*plVar3 + 0x1c8))(plVar3,*(undefined8 *)(*plVar3 + 0x1d0));
    }
    lVar5 = *unaff_x21;
    uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar4 != 0) {
      piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x25) {
          puVar2 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_02f0944c;
        }
        uVar4 = uVar4 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_01a472ec();
LAB_02f0944c:
    uVar4 = (*(code *)*puVar2)();
    if ((uVar4 & 1) == 0) {
      plVar3 = (long *)thunk_FUN_01a89d6c();
      if (plVar3 == (long *)0x0) goto LAB_02f095a4;
      lVar5 = *plVar3;
      uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar4 == 0) goto LAB_02f0957c;
      piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      break;
    }
    param_1 = *unaff_x21;
    uVar4 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (uVar4 != 0) {
      piVar6 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x25) {
          param_1 = param_1 + (long)(*piVar6 + 1) * 0x10;
          goto code_r0x02f094a8;
        }
        uVar4 = uVar4 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_01a472ec();
  } while( true );
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar6 = piVar6 + 4;
    if (uVar4 == 0) break;
    if (*(long *)(piVar6 + -2) == *unaff_x23) {
      puVar2 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
      goto LAB_02f09598;
    }
  }
LAB_02f0957c:
  puVar2 = (undefined8 *)FUN_01a472ec(plVar3,*unaff_x23,0);
LAB_02f09598:
  (*(code *)*puVar2)(plVar3,puVar2[1]);
LAB_02f095a4:
  if (in_stack_00000018._4_1_ != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0();
  }
  return;
}


