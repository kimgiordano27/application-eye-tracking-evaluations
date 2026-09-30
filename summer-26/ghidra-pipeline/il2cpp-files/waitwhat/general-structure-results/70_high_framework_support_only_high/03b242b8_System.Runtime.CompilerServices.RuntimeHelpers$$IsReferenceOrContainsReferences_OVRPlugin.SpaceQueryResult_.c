/*
FUNCTION_NAME: System.Runtime.CompilerServices.RuntimeHelpers$$IsReferenceOrContainsReferences<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 03b242b8
PROGRAM: waitwhat-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03b244dc) */
/* WARNING: Removing unreachable block (ram,0x03b244ec) */

int System_Runtime_CompilerServices_RuntimeHelpers__IsReferenceOrContainsReferences<OVRPlugin_SpaceQueryResult>
              (long param_1,undefined8 param_2,long param_3)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong in_x9;
  code *pcVar7;
  int *in_x10;
  int *piVar8;
  long unaff_x19;
  long unaff_x20;
  size_t unaff_x21;
  void *unaff_x22;
  int unaff_w23;
  undefined8 *unaff_x24;
  long *unaff_x25;
  long *plVar9;
  long unaff_x26;
  long *unaff_x27;
  long unaff_x29;
  
code_r0x03b242b8:
  in_x10 = in_x10 + 4;
  if (!(bool)in_ZR) goto LAB_03b242a8;
LAB_03b242c0:
  puVar1 = (undefined8 *)FUN_031c0d08(unaff_x25,param_3,0);
  do {
    uVar2 = (*(code *)*puVar1)(unaff_x25,puVar1[1]);
    if ((uVar2 & 1) == 0) {
      unaff_w23 = -1;
LAB_03b243fc:
      plVar9 = *(long **)(unaff_x29 + -0x20);
      if (plVar9 == (long *)0x0) goto LAB_03b24468;
      lVar4 = *plVar9;
      uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar2 == 0) goto LAB_03b24440;
      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      break;
    }
    plVar9 = *(long **)(unaff_x29 + -0x20);
    if (plVar9 == (long *)0x0) {
      if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      goto LAB_03b24558;
    }
    lVar4 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x10);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_031c09d4(lVar4);
    }
    lVar6 = *plVar9;
    uVar2 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar2 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar4) {
          lVar4 = lVar6 + (long)*piVar8 * 0x10 + 0x138;
          goto LAB_03b2435c;
        }
        uVar2 = uVar2 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar2 != 0);
    }
    lVar4 = FUN_031c0d08(plVar9,lVar4,0);
LAB_03b2435c:
    lVar4 = *(long *)(lVar4 + 8);
    *(void **)(unaff_x29 + -0x18) = unaff_x22;
    (**(code **)(lVar4 + 0x10))(*(undefined8 *)(lVar4 + 8),lVar4,plVar9,unaff_x29 + -0x18);
    memcpy(unaff_x24,unaff_x22,unaff_x21);
    if (unaff_x20 == 0) {
      if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      goto LAB_03b24558;
    }
    puVar1 = unaff_x24;
    if (-1 < *(int *)(*(long *)(*(long *)(unaff_x19 + 0x38) + 0x20) + 0x28)) {
      puVar1 = (undefined8 *)*unaff_x24;
    }
    puVar5 = *(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x30);
    uVar3 = *puVar5;
    pcVar7 = (code *)puVar5[2];
    *(undefined8 **)(unaff_x29 + -0x18) = puVar1;
    (*pcVar7)(uVar3);
    if (*(char *)(unaff_x29 + -0xc) != '\0') goto LAB_03b243fc;
    unaff_x25 = *(long **)(unaff_x29 + -0x20);
    unaff_w23 = unaff_w23 + 1;
    if (unaff_x25 == (long *)0x0) {
      if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      goto LAB_03b24558;
    }
    param_1 = *unaff_x25;
    param_3 = *unaff_x27;
    in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (in_x9 == 0) goto LAB_03b242c0;
    in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
LAB_03b242a8:
    if (*(long *)(in_x10 + -2) != param_3) {
      in_x9 = in_x9 - 1;
      in_ZR = in_x9 == 0;
      goto code_r0x03b242b8;
    }
    puVar1 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
  } while( true );
  while( true ) {
    uVar2 = uVar2 - 1;
    piVar8 = piVar8 + 4;
    if (uVar2 == 0) break;
    if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_070c2e88) {
      puVar1 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_03b2445c;
    }
  }
LAB_03b24440:
  puVar1 = (undefined8 *)FUN_031c0d08(plVar9,*(long *)PTR_DAT_070c2e88,0);
LAB_03b2445c:
  (*(code *)*puVar1)(plVar9,puVar1[1]);
LAB_03b24468:
  if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return unaff_w23;
  }
LAB_03b24558:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


