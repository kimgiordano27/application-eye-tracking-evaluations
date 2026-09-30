/*
FUNCTION_NAME: OVRPlugin.OVRP_1_3_0$$.cctor
ENTRY_POINT: 01db1e40
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

byte OVRPlugin_OVRP_1_3_0___cctor(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  undefined8 *puVar5;
  long *unaff_x19;
  long unaff_x21;
  int *unaff_x22;
  uint unaff_w23;
  long *unaff_x25;
  byte unaff_w26;
  int unaff_w27;
  long lVar6;
  undefined8 in_stack_00000008;
  
  do {
    FUN_01dac6f8();
    iVar2 = *(int *)(unaff_x21 + 0x1c);
    thunk_FUN_00ffe618();
    if (iVar2 < unaff_w27) {
      uVar3 = *(uint *)(unaff_x21 + 0x18);
      thunk_FUN_00ffe618();
      lVar6 = *(long *)(unaff_x21 + 0x10);
      thunk_FUN_00ffe618();
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fdc534();
      }
      uVar3 = uVar3 & unaff_w23;
      if (*(uint *)(lVar6 + 0x18) <= uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_00fdc53c();
      }
      lVar6 = *(long *)(lVar6 + (long)(int)uVar3 * 8 + 0x20);
      thunk_FUN_00ffe618();
      *unaff_x19 = lVar6;
      thunk_FUN_0106e12c();
      if (*unaff_x19 == 0) {
        bVar4 = true;
      }
      else {
        lVar6 = *(long *)(unaff_x21 + 0x10);
        thunk_FUN_00ffe618();
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00fdc534();
        }
        if (*(uint *)(lVar6 + 0x18) <= uVar3) {
                    /* WARNING: Subroutine does not return */
          FUN_00fdc53c();
        }
        puVar5 = (undefined8 *)(lVar6 + (long)(int)uVar3 * 8 + 0x20);
        *puVar5 = 0;
        thunk_FUN_0106e12c(puVar5,0);
        bVar4 = false;
        unaff_w26 = 1;
      }
    }
    else {
      thunk_FUN_00ffe618();
      *unaff_x22 = unaff_w27;
      *unaff_x19 = 0;
      thunk_FUN_0106e12c();
      bVar4 = false;
      unaff_w26 = 0;
    }
    if (in_stack_00000008._4_1_ != '\0') {
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_01022c14();
      }
      FUN_01dad12c();
    }
    if (!bVar4) {
LAB_01db1fd8:
      return unaff_w26 & 1;
    }
    while( true ) {
      unaff_w27 = *(int *)(unaff_x21 + 0x20);
      thunk_FUN_00ffe618();
      iVar2 = *(int *)(unaff_x21 + 0x1c);
      thunk_FUN_00ffe618();
      if (unaff_w27 <= iVar2) {
        *unaff_x19 = 0;
        goto LAB_01db1fc8;
      }
      unaff_w23 = unaff_w27 - 1;
      thunk_FUN_00ffe618();
      System_Linq_Enumerable_WhereSelectEnumerableIterator<StyleSelectorPart,_object>__Select<object>
                ();
      iVar1 = *(int *)(unaff_x21 + 0x1c);
      thunk_FUN_00ffe618();
      if (unaff_w27 <= iVar1) break;
      uVar3 = *(uint *)(unaff_x21 + 0x18);
      thunk_FUN_00ffe618();
      lVar6 = *(long *)(unaff_x21 + 0x10);
      thunk_FUN_00ffe618();
      if (lVar6 == 0) goto LAB_01db1ffc;
      uVar3 = uVar3 & unaff_w23;
      if (*(uint *)(lVar6 + 0x18) <= uVar3) goto LAB_01db2000;
      lVar6 = *(long *)(lVar6 + (long)(int)uVar3 * 8 + 0x20);
      thunk_FUN_00ffe618();
      *unaff_x19 = lVar6;
      thunk_FUN_0106e12c();
      if (*unaff_x19 != 0) {
        lVar6 = *(long *)(unaff_x21 + 0x10);
        thunk_FUN_00ffe618();
        if (lVar6 == 0) {
LAB_01db1ffc:
                    /* WARNING: Subroutine does not return */
          FUN_00fdc534();
        }
        if (*(uint *)(lVar6 + 0x18) <= uVar3) {
LAB_01db2000:
                    /* WARNING: Subroutine does not return */
          FUN_00fdc53c();
        }
        unaff_x19 = (long *)(lVar6 + (long)(int)uVar3 * 8 + 0x20);
        *unaff_x19 = 0;
LAB_01db1fc8:
        thunk_FUN_0106e12c(unaff_x19,0);
        unaff_w26 = iVar2 < unaff_w27;
        goto LAB_01db1fd8;
      }
    }
    in_stack_00000008._4_1_ = '\0';
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_01022c14();
    }
  } while( true );
}


