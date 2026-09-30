/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Tweak<__Il2CppFullySharedGenericType>$$get_Tween
ENTRY_POINT: 04b86f14
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_10;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8
Meta_XR_ImmersiveDebugger_Manager_Tweak<__Il2CppFullySharedGenericType>__get_Tween(code *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  int *piVar8;
  long unaff_x19;
  int unaff_w20;
  undefined8 unaff_x21;
  long unaff_x22;
  uint uVar9;
  ulong unaff_x23;
  long *unaff_x24;
  undefined8 unaff_x25;
  ulong unaff_x26;
  long unaff_x27;
  ulong unaff_x28;
  
code_r0x04b86f14:
  uVar5 = (*param_1)(unaff_x24,unaff_x25);
  if ((uVar5 & 1) != 0) {
    return 1;
  }
  lVar6 = *(long *)(unaff_x19 + 0x18);
  if (lVar6 != 0) {
LAB_04b86f30:
    if ((uint)unaff_x26 < *(uint *)(lVar6 + 0x18)) {
      uVar9 = *(uint *)(lVar6 + unaff_x28 * unaff_x27 + 0x30);
      unaff_x26 = (ulong)uVar9;
      if (-1 < (int)uVar9) {
        if (lVar6 == 0) goto LAB_04b87070;
        if (*(uint *)(lVar6 + 0x18) <= uVar9) goto LAB_04b87074;
        unaff_x28 = unaff_x26;
        if (*(int *)(lVar6 + unaff_x26 * unaff_x27 + 0x20) == unaff_w20) goto code_r0x04b86e94;
        goto LAB_04b86f30;
      }
      if ((unaff_x23 & 1) == 0) {
        return 0;
      }
      uVar9 = *(uint *)(unaff_x19 + 0x24);
      if ((int)uVar9 < 0) {
        if (*(long *)(unaff_x19 + 0x18) == 0) goto LAB_04b87070;
        uVar9 = *(uint *)(unaff_x19 + 0x20);
        if (uVar9 == *(uint *)(*(long *)(unaff_x19 + 0x18) + 0x18)) {
                    /* try { // try from 04b86fb4 to 04c87017 has its CatchHandler @ 04b870c0 */
          FUN_04b87078();
          uVar9 = *(uint *)(unaff_x19 + 0x20);
        }
        *(uint *)(unaff_x19 + 0x20) = uVar9 + 1;
      }
      else {
        lVar6 = *(long *)(unaff_x19 + 0x18);
        if (lVar6 == 0) goto LAB_04b87070;
        if (*(uint *)(lVar6 + 0x18) <= uVar9) goto LAB_04b87074;
        *(undefined4 *)(unaff_x19 + 0x24) = *(undefined4 *)(lVar6 + (ulong)uVar9 * 0x18 + 0x30);
      }
      if ((*(long *)(unaff_x19 + 0x10) == 0) || (lVar6 = *(long *)(unaff_x19 + 0x18), lVar6 == 0))
      goto LAB_04b87070;
      if (*(uint *)(lVar6 + 0x18) <= uVar9) goto LAB_04b87074;
      iVar1 = *(int *)(*(long *)(unaff_x19 + 0x10) + 0x18);
      lVar6 = lVar6 + (long)(int)uVar9 * 0x18;
      *(undefined8 *)(lVar6 + 0x28) = unaff_x21;
      *(int *)(lVar6 + 0x20) = unaff_w20;
      thunk_FUN_03048534();
      lVar6 = *(long *)(unaff_x19 + 0x18);
      if ((lVar6 == 0) || (lVar7 = *(long *)(unaff_x19 + 0x10), lVar7 == 0)) goto LAB_04b87070;
      iVar3 = 0;
      if (iVar1 != 0) {
        iVar3 = unaff_w20 / iVar1;
      }
      uVar2 = unaff_w20 - iVar3 * iVar1;
                    /* try { // try from 04b87028 to 04c8706b has its CatchHandler @ 04b870c4 */
      if ((uVar2 < *(uint *)(lVar7 + 0x18)) && (uVar9 < *(uint *)(lVar6 + 0x18))) {
        piVar8 = (int *)(lVar7 + (long)(int)uVar2 * 4 + 0x20);
        *(int *)(lVar6 + (long)(int)uVar9 * 0x18 + 0x30) = *piVar8 + -1;
        *piVar8 = uVar9 + 1;
        return 0;
      }
    }
LAB_04b87074:
                    /* WARNING: Subroutine does not return */
    FUN_02fe94f0();
  }
  goto LAB_04b87070;
code_r0x04b86e94:
  unaff_x24 = *(long **)(unaff_x19 + 0x28);
  if (unaff_x24 == (long *)0x0) {
LAB_04b87070:
                    /* WARNING: Subroutine does not return */
    FUN_02fe94e8();
  }
  unaff_x25 = *(undefined8 *)(lVar6 + unaff_x26 * unaff_x27 + 0x28);
  lVar6 = **(long **)(*(long *)(unaff_x22 + 0x20) + 0xc0);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_02feb2c4(lVar6);
  }
  lVar7 = *unaff_x24;
  uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar5 != 0) {
    piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == lVar6) {
        puVar4 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_04b86f10;
      }
      uVar5 = uVar5 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar5 != 0);
  }
  puVar4 = (undefined8 *)FUN_02feb5b8(unaff_x24,lVar6,0);
LAB_04b86f10:
  param_1 = (code *)*puVar4;
  goto code_r0x04b86f14;
}


