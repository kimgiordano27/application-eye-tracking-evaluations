/*
FUNCTION_NAME: OVRPlugin.OVRP_1_3_0$$ovrp_GetSystemHeadphonesPresent
ENTRY_POINT: 01db1dd8
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01db2004) */
/* WARNING: Removing unreachable block (ram,0x01db1f10) */
/* WARNING: Removing unreachable block (ram,0x01db1f1c) */
/* WARNING: Removing unreachable block (ram,0x01db1f20) */

byte OVRPlugin_OVRP_1_3_0__ovrp_GetSystemHeadphonesPresent(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  undefined8 *puVar5;
  long *unaff_x19;
  long unaff_x21;
  int *unaff_x22;
  uint unaff_w23;
  byte unaff_w24;
  long *unaff_x25;
  byte unaff_w26;
  uint unaff_w27;
  long lVar6;
  
  do {
    thunk_FUN_00ffe618();
    lVar6 = *(long *)(unaff_x21 + 0x10);
    thunk_FUN_00ffe618();
    if (lVar6 == 0) {
LAB_01db1ffc:
                    /* WARNING: Subroutine does not return */
      FUN_00fdc534();
    }
    uVar1 = unaff_w27 & unaff_w23;
    if (*(uint *)(lVar6 + 0x18) <= uVar1) {
LAB_01db2000:
                    /* WARNING: Subroutine does not return */
      FUN_00fdc53c();
    }
    lVar6 = *(long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20);
    thunk_FUN_00ffe618();
    *unaff_x19 = lVar6;
    thunk_FUN_0106e12c();
    if (*unaff_x19 != 0) {
      lVar6 = *(long *)(unaff_x21 + 0x10);
      thunk_FUN_00ffe618();
      if (lVar6 != 0) {
        if (uVar1 < *(uint *)(lVar6 + 0x18)) {
          unaff_x19 = (long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20);
          *unaff_x19 = 0;
LAB_01db1fc8:
          thunk_FUN_0106e12c(unaff_x19,0);
LAB_01db1fd8:
          return unaff_w24 & 1;
        }
        goto LAB_01db2000;
      }
      goto LAB_01db1ffc;
    }
    while( true ) {
      iVar2 = *(int *)(unaff_x21 + 0x20);
      thunk_FUN_00ffe618();
      iVar3 = *(int *)(unaff_x21 + 0x1c);
      thunk_FUN_00ffe618();
      unaff_w24 = iVar3 < iVar2;
      if (iVar2 <= iVar3) {
        *unaff_x19 = 0;
        goto LAB_01db1fc8;
      }
      unaff_w23 = iVar2 - 1;
      thunk_FUN_00ffe618();
      System_Linq_Enumerable_WhereSelectEnumerableIterator<StyleSelectorPart,_object>__Select<object>
                ();
      iVar3 = *(int *)(unaff_x21 + 0x1c);
      thunk_FUN_00ffe618();
      if (iVar3 < iVar2) break;
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_01022c14();
      }
      FUN_01dac6f8();
      iVar3 = *(int *)(unaff_x21 + 0x1c);
      thunk_FUN_00ffe618();
      if (iVar3 < iVar2) {
        uVar1 = *(uint *)(unaff_x21 + 0x18);
        thunk_FUN_00ffe618();
        lVar6 = *(long *)(unaff_x21 + 0x10);
        thunk_FUN_00ffe618();
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00fdc534();
        }
        uVar1 = uVar1 & unaff_w23;
        if (*(uint *)(lVar6 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
          FUN_00fdc53c();
        }
        lVar6 = *(long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20);
        thunk_FUN_00ffe618();
        *unaff_x19 = lVar6;
        thunk_FUN_0106e12c();
        if (*unaff_x19 == 0) {
          bVar4 = true;
          unaff_w24 = unaff_w26;
        }
        else {
          lVar6 = *(long *)(unaff_x21 + 0x10);
          thunk_FUN_00ffe618();
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00fdc534();
          }
          if (*(uint *)(lVar6 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
            FUN_00fdc53c();
          }
          puVar5 = (undefined8 *)(lVar6 + (long)(int)uVar1 * 8 + 0x20);
          *puVar5 = 0;
          thunk_FUN_0106e12c(puVar5,0);
          bVar4 = false;
          unaff_w24 = 1;
        }
      }
      else {
        thunk_FUN_00ffe618();
        *unaff_x22 = iVar2;
        *unaff_x19 = 0;
        thunk_FUN_0106e12c();
        bVar4 = false;
        unaff_w24 = 0;
      }
      unaff_w26 = unaff_w24;
      if (!bVar4) goto LAB_01db1fd8;
    }
    unaff_w27 = *(uint *)(unaff_x21 + 0x18);
  } while( true );
}


