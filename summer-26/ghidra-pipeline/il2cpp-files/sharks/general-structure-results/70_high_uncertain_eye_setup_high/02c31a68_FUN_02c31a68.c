/*
FUNCTION_NAME: FUN_02c31a68
ENTRY_POINT: 02c31a68
PROGRAM: sharks-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x02c31e44) */
/* WARNING: Removing unreachable block (ram,0x02c31df4) */

byte FUN_02c31a68(long param_1,int param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  byte bVar11;
  char local_8c [4];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  int local_70 [2];
  undefined8 local_68;
  
  puVar1 = PTR_DAT_037f9758;
                    /* try { // try from 02c31a98 to 02d31bdb has its CatchHandler @ 02c31a98
                       catch() { ... } // from try @ 02c31a98 with catch @ 02c31a98
                       catch() { ... } // from try @ 02c31c38 with catch @ 02c31a98
                       catch() { ... } // from try @ 02c31ce0 with catch @ 02c31a98
                       catch() { ... } // from try @ 02c31e20 with catch @ 02c31a98
                       catch() { ... } // from try @ 02c31e50 with catch @ 02c31a98 */
  local_68 = param_3;
  if ((DAT_03a25fc4 & 1) == 0) {
    FUN_017fc350(PTR_DAT_037f9758);
    FUN_017fc350(PTR_DAT_0380be80);
    FUN_017fc350(PTR_DAT_037f9e50);
    DAT_03a25fc4 = 1;
  }
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  local_8c[0] = '\0';
  FUN_02c31060(param_1);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
  }
  FUN_02c30da8(&local_68);
  if (param_2 < -1) {
    thunk_FUN_01851c08(PTR_DAT_037f86c0);
    uVar9 = thunk_FUN_01861bbc();
    uVar10 = thunk_FUN_01851c08(PTR_DAT_0380bec0);
    FUN_02b44e38(uVar9,uVar10,0);
    uVar10 = thunk_FUN_01851c08(PTR_DAT_0380bec8);
                    /* WARNING: Subroutine does not return */
    FUN_017fc474(uVar9,uVar10);
  }
  uVar7 = FUN_02c31238(param_1);
  if ((uVar7 & 1) == 0) {
    if (param_2 == 0) {
      return 0;
    }
    if (param_2 == -1) {
      iVar3 = 0;
    }
    else {
      iVar3 = thunk_FUN_018486b4(0);
    }
    iVar4 = FUN_02c31394(param_1);
    puVar2 = PTR_DAT_037f9e50;
    local_70[0] = 0;
    iVar5 = 0;
    while( true ) {
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01843fdc();
      }
      if (iVar4 <= iVar5) {
        FUN_02c31764(param_1);
        puVar2 = PTR_DAT_0380be80;
        lVar8 = *(long *)PTR_DAT_0380be80;
        if (*(int *)(lVar8 + 0xe0) == 0) {
          thunk_FUN_01843fdc();
          lVar8 = *(long *)puVar2;
        }
        uVar9 = **(undefined8 **)(lVar8 + 0xb8);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01843fdc(*(long *)puVar1);
        }
        FUN_02c30798(&local_88,&local_68,uVar9,param_1);
        uVar9 = *(undefined8 *)(param_1 + 0x10);
        thunk_FUN_0181f594();
        local_8c[0] = '\0';
        FUN_02c317e4(uVar9,local_8c);
        iVar5 = param_2;
        goto OVRPlugin__TryLocateSpace;
      }
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01843fdc();
      }
      FUN_02c31f70(local_70,0x28);
      uVar7 = FUN_02c31238(param_1);
      if ((uVar7 & 1) != 0) break;
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01843fdc();
      }
      iVar5 = local_70[0];
      if (99 < local_70[0]) {
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01843fdc();
        }
        if (((uint)(iVar5 * -0x33333333) >> 1 | iVar5 * -0x80000000) < 0x1999999a) {
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_01843fdc();
          }
          FUN_02c30da8(&local_68);
        }
      }
    }
  }
  return 1;
OVRPlugin__TryLocateSpace:
  uVar7 = FUN_02c31238(param_1);
  if ((uVar7 & 1) != 0) {
    bVar11 = 0;
    iVar4 = 5;
    goto LAB_02c31dac;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
  }
  FUN_02c30da8(&local_68);
  if (param_2 != -1) {
    iVar5 = thunk_FUN_018486b4(0);
    bVar11 = 0;
    iVar4 = 0xe;
    if ((iVar5 - iVar3 < 0) || (iVar5 = param_2 - (iVar5 - iVar3), iVar5 < 1)) goto LAB_02c31dac;
  }
  iVar4 = FUN_02c31430(param_1);
  FUN_02c3148c(param_1,iVar4 + 1);
  uVar7 = FUN_02c31238(param_1);
  if ((uVar7 & 1) != 0) {
    iVar3 = FUN_02c31430(param_1);
    FUN_02c3148c(param_1,iVar3 + -1);
    bVar11 = 1;
    iVar4 = 0xe;
    goto LAB_02c31dac;
  }
  uVar10 = *(undefined8 *)(param_1 + 0x10);
  thunk_FUN_0181f594();
  uVar7 = FUN_02c38c7c(uVar10,iVar5,0);
  iVar4 = 0xb;
  if ((uVar7 & 1) == 0) {
    iVar4 = 0xe;
  }
  iVar6 = FUN_02c31430(param_1);
  FUN_02c3148c(param_1,iVar6 + -1);
  if ((iVar4 != 0xb) && (iVar4 != 0)) {
    bVar11 = 0;
LAB_02c31dac:
    if (local_8c[0] != '\0') {
      FUN_0184c01c(uVar9);
    }
    FUN_02c328cc(&local_88);
    return iVar4 != 0xe | bVar11;
  }
  goto OVRPlugin__TryLocateSpace;
}


