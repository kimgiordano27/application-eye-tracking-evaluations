/*
FUNCTION_NAME: System.Span<OVRPlugin.SpaceDiscoveryResult>$$.ctor
ENTRY_POINT: 07507304
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

void System_Span<OVRPlugin_SpaceDiscoveryResult>___ctor(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x19;
  long *unaff_x21;
  int unaff_w22;
  long *unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  
  puVar1 = (undefined8 *)FUN_04980e68(param_1,param_2,0);
  plVar2 = (long *)(*(code *)*puVar1)();
  do {
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    lVar6 = *plVar2;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x24) {
          puVar1 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_07507390;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar1 = (undefined8 *)FUN_04980e68(plVar2,*unaff_x24,0);
LAB_07507390:
    uVar7 = (*(code *)*puVar1)(plVar2,puVar1[1]);
    if ((uVar7 & 1) == 0) {
      plVar2 = (long *)thunk_FUN_04983e64(plVar2,*unaff_x25);
      if (plVar2 == (long *)0x0) goto LAB_075074d4;
      lVar6 = *plVar2;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 == 0) goto LAB_075074ac;
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      break;
    }
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    lVar6 = *plVar2;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x24) {
          puVar1 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
          goto LAB_075073f8;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar1 = (undefined8 *)FUN_04980e68(plVar2,*unaff_x24,1);
LAB_075073f8:
    lVar6 = (*(code *)*puVar1)(plVar2,puVar1[1]);
    if (lVar6 == 0) {
      thunk_FUN_049ae08c(PTR_DAT_0ac09cb8);
      uVar3 = thunk_FUN_04983f60();
      uVar4 = thunk_FUN_049ae08c(PTR_DAT_0ac44dc0);
      uVar5 = thunk_FUN_049ae08c(PTR_DAT_0ac42228);
      FUN_08cbd67c(uVar3,uVar4,uVar5,0);
                    /* WARNING: Subroutine does not return */
      FUN_04948050(uVar3);
    }
  } while( true );
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
    if (*(long *)(piVar8 + -2) == *unaff_x25) {
      puVar1 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_075074c8;
    }
  }
LAB_075074ac:
  puVar1 = (undefined8 *)FUN_04980e68(plVar2,*unaff_x25,0);
LAB_075074c8:
  (*(code *)*puVar1)(plVar2,puVar1[1]);
LAB_075074d4:
  FUN_07506d88();
  lVar6 = *unaff_x21;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *unaff_x26) {
        puVar1 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
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


