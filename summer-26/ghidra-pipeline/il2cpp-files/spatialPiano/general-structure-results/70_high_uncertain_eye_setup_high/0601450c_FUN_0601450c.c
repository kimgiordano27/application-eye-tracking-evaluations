/*
FUNCTION_NAME: FUN_0601450c
ENTRY_POINT: 0601450c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_9;weak_xr_or_state_hits_9;validity_or_gating_hits_11;functionality_eye_api_context_without_clear_sink_hits_9
*/


void FUN_0601450c(long param_1)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  int iVar16;
  undefined1 local_64 [4];
  
  if ((DAT_06bc5328 & 1) == 0) {
    FUN_02f08768(PTR_DAT_067cc1f0);
    FUN_02f08768(Method_OVRPlugin_<>c_<_cctor>b__837_128__);
    FUN_02f08768(PTR_DAT_067c8f48);
    FUN_02f08768(Method_OVRPlugin_<>c_<_cctor>b__837_129__);
    FUN_02f08768(Method_OVRPlugin_<>c_<_cctor>b__837_13__);
    FUN_02f08768(Method_OVRPlugin_<>c_<_cctor>b__837_130__);
    FUN_02f08768(PTR_DAT_067cc250);
    FUN_02f08768(PTR_DAT_067cc288);
    DAT_06bc5328 = 1;
  }
  puVar5 = PTR_DAT_067cc1f0;
  if (*(long *)(param_1 + 0x10) != 0) {
    iVar1 = *(int *)(*(long *)(param_1 + 0x10) + 0x18);
    if (*(int *)(*(long *)PTR_DAT_067cc1f0 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    if (DAT_06bb5229 == '\0') {
      FUN_02f08768(PTR_DAT_067cc1f0);
      DAT_06bb5229 = '\x01';
    }
    lVar9 = *(long *)puVar5;
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
      lVar9 = *(long *)puVar5;
    }
    iVar16 = (uint)*(byte *)(*(long *)(lVar9 + 0xb8) + 0x18) - iVar1;
    if (0 < iVar16) {
      if (iVar1 < 2) {
        lVar9 = thunk_FUN_02f45270(*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__837_128__);
        FUN_05116b38(lVar9,0);
        if (lVar9 == 0) goto LAB_060147ec;
        *(undefined8 *)(lVar9 + 0x10) = *(undefined8 *)PTR_DAT_067cc250;
      }
      else {
        if (*(long *)(param_1 + 0x10) == 0) {
LAB_060147ec:
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        lVar9 = FUN_03abf644(*(long *)(param_1 + 0x10),1,
                             *(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__837_130__);
      }
      puVar8 = Method_OVRPlugin_<>c_<_cctor>b__837_130__;
      puVar7 = Method_OVRPlugin_<>c_<_cctor>b__837_129__;
      puVar6 = PTR_DAT_067cc288;
      puVar4 = PTR_DAT_067c9338;
      puVar3 = PTR_DAT_067c8f48;
      iVar16 = iVar16 + 1;
      do {
        lVar10 = thunk_FUN_02f45270(*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__837_128__);
        FUN_05116b38(lVar10,0);
        if ((lVar9 == 0) || (lVar10 == 0)) goto LAB_060147ec;
        uVar12 = *(undefined8 *)(lVar9 + 0x10);
        *(undefined8 *)(lVar10 + 0x18) = *(undefined8 *)(lVar9 + 0x18);
        *(undefined8 *)(lVar10 + 0x10) = uVar12;
        lVar11 = *(long *)(param_1 + 0x10);
        *(undefined8 *)(lVar10 + 0x20) = *(undefined8 *)(lVar9 + 0x20);
        if (lVar11 == 0) goto LAB_060147ec;
        lVar14 = *(long *)(lVar11 + 0x10);
        lVar15 = *(long *)puVar7;
        *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
        if (lVar14 == 0) goto LAB_060147ec;
        uVar2 = *(uint *)(lVar11 + 0x18);
        if (uVar2 < *(uint *)(lVar14 + 0x18)) {
          *(uint *)(lVar11 + 0x18) = uVar2 + 1;
          *(long *)(lVar14 + (long)(int)uVar2 * 8 + 0x20) = lVar10;
        }
        else {
          FUN_03abf904(lVar11,lVar10,
                       *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
        }
        if (*(long *)(param_1 + 0x10) == 0) goto LAB_060147ec;
        iVar1 = *(int *)(*(long *)(param_1 + 0x10) + 0x18);
        if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        uVar2 = iVar1 - 1;
        uVar12 = FUN_060147f0(uVar2);
        if ((*(long *)(param_1 + 0x10) == 0) ||
           (lVar10 = FUN_03abf644(*(long *)(param_1 + 0x10),uVar2 & 0xff,*(undefined8 *)puVar8),
           lVar10 == 0)) goto LAB_060147ec;
        *(undefined8 *)(lVar10 + 0x10) = uVar12;
        local_64[0] = (undefined1)uVar2;
        uVar13 = thunk_FUN_02f44ec4(*(undefined8 *)(puVar4 + 0x18),local_64);
        uVar12 = FUN_04f70018(*(undefined8 *)puVar6,uVar13,uVar12,0);
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_02f6670c(*(long *)puVar3);
        }
        FUN_060a6338(uVar12,0);
        iVar16 = iVar16 + -1;
      } while (1 < iVar16);
    }
  }
  return;
}


