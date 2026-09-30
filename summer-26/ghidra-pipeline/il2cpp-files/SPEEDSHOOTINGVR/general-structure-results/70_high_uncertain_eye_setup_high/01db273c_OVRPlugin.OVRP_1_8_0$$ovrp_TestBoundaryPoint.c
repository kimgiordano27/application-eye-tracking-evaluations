/*
FUNCTION_NAME: OVRPlugin.OVRP_1_8_0$$ovrp_TestBoundaryPoint
ENTRY_POINT: 01db273c
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01db2978) */

undefined4 OVRPlugin_OVRP_1_8_0__ovrp_TestBoundaryPoint(void)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined4 unaff_w21;
  long *unaff_x22;
  long unaff_x23;
  int iVar8;
  undefined4 uVar9;
  undefined1 *in_stack_00000000;
  char cStack000000000000000c;
  
  puVar5 = PTR_DAT_0235a210;
  cStack000000000000000c = '\0';
  *unaff_x22 = 0;
  thunk_FUN_0106e12c();
  uVar9 = 0;
  puVar1 = (uint *)(unaff_x23 + 0x1c);
  do {
    iVar8 = *(int *)(unaff_x23 + 0x1c);
    thunk_FUN_00ffe618();
    iVar2 = *(int *)(unaff_x23 + 0x20);
    thunk_FUN_00ffe618();
    if (iVar2 <= iVar8) goto LAB_01db293c;
    cStack000000000000000c = '\0';
    if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
      thunk_FUN_01022c14();
    }
    FUN_01daccc0(unaff_x23 + 0x24,unaff_w21,&stack0x0000000c);
    if (cStack000000000000000c == '\0') {
      *in_stack_00000000 = 1;
      return 0;
    }
    uVar3 = *puVar1;
    thunk_FUN_00ffe618();
    thunk_FUN_00ffe618();
    System_Linq_Enumerable_WhereSelectEnumerableIterator<StyleSelectorPart,_object>__Select<object>
              (puVar1,uVar3 + 1);
    iVar8 = *(int *)(unaff_x23 + 0x20);
    thunk_FUN_00ffe618();
    if ((int)uVar3 < iVar8) {
      uVar4 = *(uint *)(unaff_x23 + 0x18);
      thunk_FUN_00ffe618();
      lVar7 = *(long *)(unaff_x23 + 0x10);
      thunk_FUN_00ffe618();
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fdc534();
      }
      uVar4 = uVar4 & uVar3;
      if (*(uint *)(lVar7 + 0x18) <= uVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_00fdc53c();
      }
      lVar7 = *(long *)(lVar7 + (long)(int)uVar4 * 8 + 0x20);
      thunk_FUN_00ffe618();
      *unaff_x22 = lVar7;
      thunk_FUN_0106e12c();
      if (*unaff_x22 == 0) {
        iVar8 = 2;
      }
      else {
        lVar7 = *(long *)(unaff_x23 + 0x10);
        thunk_FUN_00ffe618();
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00fdc534();
        }
        if (*(uint *)(lVar7 + 0x18) <= uVar4) {
                    /* WARNING: Subroutine does not return */
          FUN_00fdc53c();
        }
        puVar6 = (undefined8 *)(lVar7 + (long)(int)uVar4 * 8 + 0x20);
        *puVar6 = 0;
        thunk_FUN_0106e12c(puVar6,0);
        uVar9 = 1;
        iVar8 = 7;
      }
    }
    else {
      thunk_FUN_00ffe618();
      *puVar1 = uVar3;
      *unaff_x22 = 0;
      thunk_FUN_0106e12c();
      iVar8 = 8;
      *in_stack_00000000 = 1;
    }
    if (cStack000000000000000c != '\0') {
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_01022c14();
      }
      FUN_01dad12c(unaff_x23 + 0x24,0);
    }
  } while (iVar8 == 2);
  if (iVar8 != 7) {
LAB_01db293c:
    uVar9 = 0;
  }
  return uVar9;
}


