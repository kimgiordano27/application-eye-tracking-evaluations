/*
FUNCTION_NAME: OVRPlugin.OVRP_1_5_0$$ovrp_GetSystemRegion
ENTRY_POINT: 01db1ec8
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01db2004) */

bool OVRPlugin_OVRP_1_5_0__ovrp_GetSystemRegion(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  undefined8 *puVar6;
  long *unaff_x19;
  long unaff_x21;
  int *unaff_x22;
  long *unaff_x25;
  bool bVar7;
  long lVar8;
  undefined8 in_stack_00000008;
  
  do {
    bVar5 = false;
    bVar7 = true;
LAB_01db1f08:
    if (in_stack_00000008._4_1_ != '\0') {
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_01022c14();
      }
      FUN_01dad12c();
    }
    if (!bVar5) {
      return bVar7;
    }
    while( true ) {
      iVar1 = *(int *)(unaff_x21 + 0x20);
      thunk_FUN_00ffe618();
      iVar2 = *(int *)(unaff_x21 + 0x1c);
      thunk_FUN_00ffe618();
      if (iVar1 <= iVar2) {
        *unaff_x19 = 0;
        goto LAB_01db1fc8;
      }
      thunk_FUN_00ffe618();
      System_Linq_Enumerable_WhereSelectEnumerableIterator<StyleSelectorPart,_object>__Select<object>
                ();
      iVar3 = *(int *)(unaff_x21 + 0x1c);
      thunk_FUN_00ffe618();
      if (iVar1 <= iVar3) break;
      uVar4 = *(uint *)(unaff_x21 + 0x18);
      thunk_FUN_00ffe618();
      lVar8 = *(long *)(unaff_x21 + 0x10);
      thunk_FUN_00ffe618();
      if (lVar8 == 0) goto LAB_01db1ffc;
      uVar4 = uVar4 & iVar1 - 1U;
      if (*(uint *)(lVar8 + 0x18) <= uVar4) goto LAB_01db2000;
      lVar8 = *(long *)(lVar8 + (long)(int)uVar4 * 8 + 0x20);
      thunk_FUN_00ffe618();
      *unaff_x19 = lVar8;
      thunk_FUN_0106e12c();
      if (*unaff_x19 != 0) {
        lVar8 = *(long *)(unaff_x21 + 0x10);
        thunk_FUN_00ffe618();
        if (lVar8 == 0) {
LAB_01db1ffc:
                    /* WARNING: Subroutine does not return */
          FUN_00fdc534();
        }
        if (*(uint *)(lVar8 + 0x18) <= uVar4) {
LAB_01db2000:
                    /* WARNING: Subroutine does not return */
          FUN_00fdc53c();
        }
        unaff_x19 = (long *)(lVar8 + (long)(int)uVar4 * 8 + 0x20);
        *unaff_x19 = 0;
LAB_01db1fc8:
        thunk_FUN_0106e12c(unaff_x19,0);
        return iVar2 < iVar1;
      }
    }
    in_stack_00000008._4_1_ = '\0';
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_01022c14();
    }
    FUN_01dac6f8();
    iVar2 = *(int *)(unaff_x21 + 0x1c);
    thunk_FUN_00ffe618();
    if (iVar1 <= iVar2) {
      thunk_FUN_00ffe618();
      *unaff_x22 = iVar1;
      *unaff_x19 = 0;
      thunk_FUN_0106e12c();
      bVar5 = false;
      bVar7 = false;
      goto LAB_01db1f08;
    }
    uVar4 = *(uint *)(unaff_x21 + 0x18);
    thunk_FUN_00ffe618();
    lVar8 = *(long *)(unaff_x21 + 0x10);
    thunk_FUN_00ffe618();
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc534();
    }
    uVar4 = uVar4 & iVar1 - 1U;
    if (*(uint *)(lVar8 + 0x18) <= uVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc53c();
    }
    lVar8 = *(long *)(lVar8 + (long)(int)uVar4 * 8 + 0x20);
    thunk_FUN_00ffe618();
    *unaff_x19 = lVar8;
    thunk_FUN_0106e12c();
    if (*unaff_x19 == 0) {
      bVar5 = true;
      goto LAB_01db1f08;
    }
    lVar8 = *(long *)(unaff_x21 + 0x10);
    thunk_FUN_00ffe618();
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc534();
    }
    if (*(uint *)(lVar8 + 0x18) <= uVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc53c();
    }
    puVar6 = (undefined8 *)(lVar8 + (long)(int)uVar4 * 8 + 0x20);
    *puVar6 = 0;
    thunk_FUN_0106e12c(puVar6,0);
  } while( true );
}


