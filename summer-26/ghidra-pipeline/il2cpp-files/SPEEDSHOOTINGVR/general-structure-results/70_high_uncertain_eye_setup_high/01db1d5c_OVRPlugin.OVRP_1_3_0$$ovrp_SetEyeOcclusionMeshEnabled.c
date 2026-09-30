/*
FUNCTION_NAME: OVRPlugin.OVRP_1_3_0$$ovrp_SetEyeOcclusionMeshEnabled
ENTRY_POINT: 01db1d5c
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01db2004) */

bool OVRPlugin_OVRP_1_3_0__ovrp_SetEyeOcclusionMeshEnabled(ulong param_1,long param_2,long *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  long unaff_x20;
  bool bVar9;
  long lVar10;
  char cStack000000000000000c;
  
  if ((param_1 & 1) == 0) {
    FUN_00fdc2e4(PTR_DAT_0235a210);
    *(undefined1 *)(unaff_x20 + 0x9e7) = 1;
  }
  puVar7 = PTR_DAT_0235a210;
  bVar9 = false;
  cStack000000000000000c = '\0';
  do {
    while( true ) {
      iVar1 = *(int *)(param_2 + 0x20);
      thunk_FUN_00ffe618();
      iVar2 = *(int *)(param_2 + 0x1c);
      thunk_FUN_00ffe618();
      if (iVar1 <= iVar2) {
        *param_3 = 0;
        goto LAB_01db1fc8;
      }
      uVar5 = iVar1 - 1;
      thunk_FUN_00ffe618();
      System_Linq_Enumerable_WhereSelectEnumerableIterator<StyleSelectorPart,_object>__Select<object>
                ((int *)(param_2 + 0x20),uVar5);
      iVar3 = *(int *)(param_2 + 0x1c);
      thunk_FUN_00ffe618();
      if (iVar3 < iVar1) break;
      cStack000000000000000c = '\0';
      if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
        thunk_FUN_01022c14();
      }
      FUN_01dac6f8(param_2 + 0x24,&stack0x0000000c);
      iVar2 = *(int *)(param_2 + 0x1c);
      thunk_FUN_00ffe618();
      if (iVar2 < iVar1) {
        uVar4 = *(uint *)(param_2 + 0x18);
        thunk_FUN_00ffe618();
        lVar10 = *(long *)(param_2 + 0x10);
        thunk_FUN_00ffe618();
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00fdc534();
        }
        uVar4 = uVar4 & uVar5;
        if (*(uint *)(lVar10 + 0x18) <= uVar4) {
                    /* WARNING: Subroutine does not return */
          FUN_00fdc53c();
        }
        lVar10 = *(long *)(lVar10 + (long)(int)uVar4 * 8 + 0x20);
        thunk_FUN_00ffe618();
        *param_3 = lVar10;
        thunk_FUN_0106e12c(param_3,lVar10);
        if (*param_3 == 0) {
          bVar6 = true;
        }
        else {
          lVar10 = *(long *)(param_2 + 0x10);
          thunk_FUN_00ffe618();
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00fdc534();
          }
          if (*(uint *)(lVar10 + 0x18) <= uVar4) {
                    /* WARNING: Subroutine does not return */
            FUN_00fdc53c();
          }
          puVar8 = (undefined8 *)(lVar10 + (long)(int)uVar4 * 8 + 0x20);
          *puVar8 = 0;
          thunk_FUN_0106e12c(puVar8,0);
          bVar6 = false;
          bVar9 = true;
        }
      }
      else {
        thunk_FUN_00ffe618();
        *(int *)(param_2 + 0x20) = iVar1;
        *param_3 = 0;
        thunk_FUN_0106e12c(param_3,0);
        bVar6 = false;
        bVar9 = false;
      }
      if (cStack000000000000000c != '\0') {
        if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
          thunk_FUN_01022c14();
        }
        FUN_01dad12c(param_2 + 0x24,0);
      }
      if (!bVar6) {
        return bVar9;
      }
    }
    uVar4 = *(uint *)(param_2 + 0x18);
    thunk_FUN_00ffe618();
    lVar10 = *(long *)(param_2 + 0x10);
    thunk_FUN_00ffe618();
    if (lVar10 == 0) goto LAB_01db1ffc;
    uVar4 = uVar4 & uVar5;
    if (*(uint *)(lVar10 + 0x18) <= uVar4) goto LAB_01db2000;
    lVar10 = *(long *)(lVar10 + (long)(int)uVar4 * 8 + 0x20);
    thunk_FUN_00ffe618();
    *param_3 = lVar10;
    thunk_FUN_0106e12c(param_3,lVar10);
  } while (*param_3 == 0);
  lVar10 = *(long *)(param_2 + 0x10);
  thunk_FUN_00ffe618();
  if (lVar10 == 0) {
LAB_01db1ffc:
                    /* WARNING: Subroutine does not return */
    FUN_00fdc534();
  }
  if (*(uint *)(lVar10 + 0x18) <= uVar4) {
LAB_01db2000:
                    /* WARNING: Subroutine does not return */
    FUN_00fdc53c();
  }
  param_3 = (long *)(lVar10 + (long)(int)uVar4 * 8 + 0x20);
  *param_3 = 0;
LAB_01db1fc8:
  thunk_FUN_0106e12c(param_3,0);
  return iVar2 < iVar1;
}


