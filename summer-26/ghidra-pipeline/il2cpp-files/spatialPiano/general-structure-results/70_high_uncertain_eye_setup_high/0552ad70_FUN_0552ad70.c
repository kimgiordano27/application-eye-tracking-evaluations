/*
FUNCTION_NAME: FUN_0552ad70
ENTRY_POINT: 0552ad70
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_4
*/


long * FUN_0552ad70(long *param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  int *piVar12;
  long *plVar13;
  
  if ((DAT_06bbf6b4 & 1) == 0) {
    FUN_02f08768(PTR_DAT_067ccea0);
    FUN_02f08768(OVRPlugin_OVRP_1_2_0_TypeInfo);
    DAT_06bbf6b4 = 1;
  }
  puVar2 = OVRPlugin_OVRP_1_2_0_TypeInfo;
  if (param_2 == (long *)0x0) {
LAB_0552afcc:
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  lVar6 = *param_2;
  uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar9 != 0) {
    piVar12 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == *(long *)OVRPlugin_OVRP_1_2_0_TypeInfo) {
        puVar4 = (undefined8 *)(lVar6 + (long)(*piVar12 + 1) * 0x10 + 0x138);
        goto LAB_0552ae18;
      }
      uVar9 = uVar9 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar9 != 0);
  }
  puVar4 = (undefined8 *)FUN_02f421d0(param_2,*(long *)OVRPlugin_OVRP_1_2_0_TypeInfo,1);
LAB_0552ae18:
  uVar3 = (*(code *)*puVar4)(param_2,puVar4[1]);
  puVar1 = PTR_DAT_067ccea0;
  if ((int)uVar3 < 1) {
    return (long *)0x0;
  }
  uVar9 = 0;
  plVar13 = (long *)0x0;
LAB_0552ae44:
  lVar7 = *param_2;
  lVar6 = *(long *)puVar2;
  uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar10 != 0) {
    piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == lVar6) {
        puVar4 = (undefined8 *)(lVar7 + (long)*piVar12 * 0x10 + 0x138);
        goto LAB_0552ae90;
      }
      uVar10 = uVar10 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar10 != 0);
  }
  puVar4 = (undefined8 *)FUN_02f421d0(param_2,lVar6,0);
LAB_0552ae90:
  lVar6 = (*(code *)*puVar4)(param_2,uVar9 & 0xffffffff,puVar4[1]);
  if (param_1 == (long *)0x0) goto LAB_0552afcc;
  lVar7 = (**(code **)(*param_1 + 0x178))(param_1,lVar6,*(undefined8 *)(*param_1 + 0x180));
  if (plVar13 == (long *)0x0) {
    if (lVar7 == lVar6) {
      plVar13 = (long *)0x0;
      goto LAB_0552aef0;
    }
    plVar13 = (long *)FUN_02f0880c(*(undefined8 *)puVar1,uVar3);
    if (uVar9 != 0) {
      uVar10 = 0;
      do {
        lVar8 = *param_2;
        lVar6 = *(long *)puVar2;
        uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == lVar6) {
              puVar4 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_0552af6c;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar4 = (undefined8 *)FUN_02f421d0(param_2,lVar6,0);
LAB_0552af6c:
        lVar6 = (*(code *)*puVar4)(param_2,uVar10 & 0xffffffff,puVar4[1]);
        if (plVar13 == (long *)0x0) goto LAB_0552afcc;
        if ((lVar6 != 0) &&
           (lVar8 = thunk_FUN_02f45174(lVar6,*(undefined8 *)(*plVar13 + 0x40)), lVar8 == 0))
        goto LAB_0552aff8;
        if (*(uint *)(plVar13 + 3) <= uVar10) goto LAB_0552aff4;
        uVar11 = uVar10 + 1;
        plVar13[uVar10 + 4] = lVar6;
        uVar10 = uVar11;
      } while (uVar11 != uVar9);
      goto LAB_0552aec4;
    }
    if (plVar13 == (long *)0x0) goto LAB_0552afcc;
  }
LAB_0552aec4:
  if ((lVar7 != 0) &&
     (lVar6 = thunk_FUN_02f45174(lVar7,*(undefined8 *)(*plVar13 + 0x40)), lVar6 == 0)) {
LAB_0552aff8:
    uVar5 = thunk_FUN_02f52b60();
                    /* WARNING: Subroutine does not return */
    FUN_02f0888c(uVar5,0);
  }
  if (*(uint *)(plVar13 + 3) <= uVar9) {
LAB_0552aff4:
                    /* WARNING: Subroutine does not return */
    FUN_02f089d0();
  }
  plVar13[uVar9 + 4] = lVar7;
LAB_0552aef0:
  uVar9 = uVar9 + 1;
  if (uVar9 == uVar3) {
    return plVar13;
  }
  goto LAB_0552ae44;
}


