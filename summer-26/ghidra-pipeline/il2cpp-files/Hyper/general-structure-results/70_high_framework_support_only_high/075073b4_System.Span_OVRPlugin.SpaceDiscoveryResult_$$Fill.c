/*
FUNCTION_NAME: System.Span<OVRPlugin.SpaceDiscoveryResult>$$Fill
ENTRY_POINT: 075073b4
PROGRAM: Hyper-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0750772c) */

void System_Span<OVRPlugin_SpaceDiscoveryResult>__Fill(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  ulong uVar7;
  ulong in_x9;
  int *piVar8;
  long unaff_x19;
  long *unaff_x21;
  int unaff_w22;
  long *unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  long *in_stack_00000028;
  
  do {
    if (in_x9 != 0) {
      piVar8 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == param_3) {
          puVar1 = (undefined8 *)(param_1 + (long)(*piVar8 + 1) * 0x10 + 0x138);
          goto LAB_075073f8;
        }
        in_x9 = in_x9 - 1;
        piVar8 = piVar8 + 4;
      } while (in_x9 != 0);
    }
    puVar1 = (undefined8 *)FUN_04980e68(unaff_x23,param_3,1);
LAB_075073f8:
    lVar2 = (*(code *)*puVar1)(unaff_x23,puVar1[1]);
    if (lVar2 == 0) {
      thunk_FUN_049ae08c(PTR_DAT_0ac09cb8);
      uVar3 = thunk_FUN_04983f60();
      uVar4 = thunk_FUN_049ae08c(PTR_DAT_0ac44dc0);
      uVar5 = thunk_FUN_049ae08c(PTR_DAT_0ac42228);
      FUN_08cbd67c(uVar3,uVar4,uVar5,0);
                    /* WARNING: Subroutine does not return */
      FUN_04948050(uVar3);
    }
    if (in_stack_00000028 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    lVar2 = *in_stack_00000028;
    uVar7 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x24) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_07507390;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar1 = (undefined8 *)FUN_04980e68(in_stack_00000028,*unaff_x24,0);
LAB_07507390:
    uVar7 = (*(code *)*puVar1)(in_stack_00000028,puVar1[1]);
    if ((uVar7 & 1) == 0) {
      plVar6 = (long *)thunk_FUN_04983e64(in_stack_00000028,*unaff_x25);
      if (plVar6 == (long *)0x0) goto LAB_075074d4;
      lVar2 = *plVar6;
      uVar7 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar7 == 0) goto LAB_075074ac;
      piVar8 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      break;
    }
    if (in_stack_00000028 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    param_1 = *in_stack_00000028;
    param_3 = *unaff_x24;
    in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
    unaff_x23 = in_stack_00000028;
  } while( true );
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
    if (*(long *)(piVar8 + -2) == *unaff_x25) {
      puVar1 = (undefined8 *)(lVar2 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_075074c8;
    }
  }
LAB_075074ac:
  puVar1 = (undefined8 *)FUN_04980e68(plVar6,*unaff_x25,0);
LAB_075074c8:
  (*(code *)*puVar1)(plVar6,puVar1[1]);
LAB_075074d4:
  FUN_07506d88();
  lVar2 = *unaff_x21;
  uVar7 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *unaff_x26) {
        puVar1 = (undefined8 *)(lVar2 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_07507548;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar1 = (undefined8 *)FUN_04980e68();
LAB_07507548:
  (*(code *)*puVar1)();
  *(int *)(unaff_x19 + 0x18) = *(int *)(unaff_x19 + 0x18) + unaff_w22;
  return;
}


