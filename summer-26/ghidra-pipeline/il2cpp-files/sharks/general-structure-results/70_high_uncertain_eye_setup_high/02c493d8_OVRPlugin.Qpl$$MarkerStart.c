/*
FUNCTION_NAME: OVRPlugin.Qpl$$MarkerStart
ENTRY_POINT: 02c493d8
PROGRAM: sharks-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin_Qpl__MarkerStart(long param_1)

{
  bool bVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long *unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  int iVar12;
  
  FUN_017fc350(*(undefined8 *)(param_1 + 0x860));
  *(undefined1 *)(unaff_x20 + 0x100) = 1;
  lVar4 = thunk_FUN_01861bbc(*unaff_x21);
  FUN_02c4c63c();
  if (unaff_x19 == (long *)0x0) {
LAB_02c495c8:
                    /* WARNING: Subroutine does not return */
    FUN_017fc5a8();
  }
  lVar9 = *unaff_x19;
  uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_0380c858) {
        puVar5 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
        goto LAB_02c49454;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar5 = (undefined8 *)FUN_0185dba8();
LAB_02c49454:
  iVar3 = (*(code *)*puVar5)();
  puVar2 = PTR_DAT_0380c860;
  if (0 < iVar3) {
    bVar1 = false;
    iVar12 = 0;
    do {
      lVar9 = *unaff_x19;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
            puVar5 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_02c494c8;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar5 = (undefined8 *)FUN_0185dba8();
LAB_02c494c8:
      lVar9 = (*(code *)*puVar5)();
      if (lVar9 == 0) {
        thunk_FUN_01851c08(PTR_DAT_037f87a8);
        uVar6 = thunk_FUN_01861bbc();
        uVar7 = thunk_FUN_01851c08(PTR_DAT_0380c838);
        uVar8 = thunk_FUN_01851c08(PTR_DAT_037fb630);
        FUN_02b3cc64(uVar6,uVar7,uVar8,0);
        uVar7 = thunk_FUN_01851c08(PTR_DAT_0380c868);
                    /* WARNING: Subroutine does not return */
        FUN_017fc474(uVar6,uVar7);
      }
      if (bVar1) {
LAB_02c4950c:
        bVar1 = true;
      }
      else {
        if (lVar4 == 0) goto LAB_02c495c8;
        uVar10 = FUN_02c40bec(lVar4);
        if ((uVar10 & 1) != 0) goto LAB_02c4950c;
        uVar10 = FUN_02c40bec(lVar9);
        if ((uVar10 & 1) != 0) {
          FUN_02c4c75c(lVar4,lVar9);
          goto LAB_02c4950c;
        }
        FUN_02c47934(lVar9,lVar4,0);
        uVar10 = FUN_02c40bec(lVar4);
        bVar1 = false;
        if ((uVar10 & 1) != 0) {
          FUN_02c433dc(lVar9,lVar4);
          bVar1 = false;
        }
      }
      iVar12 = iVar12 + 1;
    } while (iVar12 != iVar3);
  }
  return lVar4;
}


