/*
FUNCTION_NAME: OVRPlugin.UnifiedConsent$$GetConsentMarkdownText
ENTRY_POINT: 05698d58
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_16;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05698ff8) */

void OVRPlugin_UnifiedConsent__GetConsentMarkdownText(long param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  uint *puVar4;
  long lVar5;
  undefined4 uVar6;
  ulong uVar7;
  uint uVar8;
  int *piVar9;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  undefined4 unaff_w25;
  long *in_stack_00000028;
  
code_r0x05698d58:
  puVar2 = (undefined8 *)(param_1 + 0x138);
  do {
    plVar3 = (long *)(*(code *)*puVar2)(unaff_x21,puVar2[1]);
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    if (*(long *)(*plVar3 + 0x40) != *(long *)(*unaff_x23 + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96be0();
    }
    puVar4 = (uint *)thunk_FUN_02dd328c();
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    uVar8 = *puVar4;
    if (*(uint *)(unaff_x20 + 0x18) <= uVar8) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96868();
    }
    if (*(char *)(unaff_x20 + (int)uVar8 + 0x20) != '\0') {
      if (uVar8 == 1) {
        if (unaff_x19 == 0) {
LAB_05698fe8:
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        lVar5 = *(long *)(unaff_x19 + 0x10);
        *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
        if (lVar5 == 0) goto LAB_05698fe8;
        uVar8 = *(uint *)(unaff_x19 + 0x18);
        if (uVar8 < *(uint *)(lVar5 + 0x18)) {
          *(uint *)(unaff_x19 + 0x18) = uVar8 + 1;
          *(undefined4 *)(lVar5 + (long)(int)uVar8 * 4 + 0x20) = unaff_w25;
          *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
        }
        else {
          FUN_03fb652c();
          lVar5 = *(long *)(unaff_x19 + 0x10);
          *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
        }
        uVar8 = *(uint *)(unaff_x19 + 0x18);
        if (uVar8 < *(uint *)(lVar5 + 0x18)) {
          uVar6 = 3;
LAB_05698ed8:
          *(uint *)(unaff_x19 + 0x18) = uVar8 + 1;
          *(undefined4 *)(lVar5 + (long)(int)uVar8 * 4 + 0x20) = uVar6;
        }
        else {
          FUN_03fb652c();
        }
      }
      else if (uVar8 == 0) {
        if (unaff_x19 == 0) {
LAB_05698fe4:
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        lVar5 = *(long *)(unaff_x19 + 0x10);
        *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
        if (lVar5 == 0) goto LAB_05698fe4;
        uVar8 = *(uint *)(unaff_x19 + 0x18);
        if (uVar8 < *(uint *)(lVar5 + 0x18)) {
          *(uint *)(unaff_x19 + 0x18) = uVar8 + 1;
          *(undefined4 *)(lVar5 + (long)(int)uVar8 * 4 + 0x20) = 0;
          *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
        }
        else {
          FUN_03fb652c();
          lVar5 = *(long *)(unaff_x19 + 0x10);
          *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
        }
        uVar8 = *(uint *)(unaff_x19 + 0x18);
        if (uVar8 < *(uint *)(lVar5 + 0x18)) {
          uVar6 = 2;
          goto LAB_05698ed8;
        }
        FUN_03fb652c();
      }
    }
    if (in_stack_00000028 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar5 = *in_stack_00000028;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x22) {
          puVar2 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_05698cf4;
        }
        uVar7 = uVar7 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar7 != 0);
    }
    puVar2 = (undefined8 *)FUN_02dd004c(in_stack_00000028,*unaff_x22,0);
LAB_05698cf4:
    uVar7 = (*(code *)*puVar2)(in_stack_00000028,puVar2[1]);
    puVar1 = PTR_DAT_069fbff0;
    if ((uVar7 & 1) == 0) {
      plVar3 = (long *)thunk_FUN_02dd3048(in_stack_00000028,*(undefined8 *)PTR_DAT_069fbff0);
      if (plVar3 == (long *)0x0) {
        return;
      }
      lVar5 = *plVar3;
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar7 == 0) goto LAB_05698f88;
      piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      break;
    }
    if (in_stack_00000028 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    param_1 = *in_stack_00000028;
    uVar7 = (ulong)*(ushort *)(param_1 + 0x12e);
    unaff_x21 = in_stack_00000028;
    if (uVar7 != 0) {
      piVar9 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x22) {
          param_1 = param_1 + (long)(*piVar9 + 1) * 0x10;
          goto code_r0x05698d58;
        }
        uVar7 = uVar7 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar7 != 0);
    }
    puVar2 = (undefined8 *)FUN_02dd004c(in_stack_00000028,*unaff_x22,1);
  } while( true );
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar9 = piVar9 + 4;
    if (uVar7 == 0) break;
    if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
      puVar2 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_05698fa4;
    }
  }
LAB_05698f88:
  puVar2 = (undefined8 *)FUN_02dd004c(plVar3,*(long *)puVar1,0);
LAB_05698fa4:
  (*(code *)*puVar2)(plVar3,puVar2[1]);
  return;
}


