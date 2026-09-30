/*
FUNCTION_NAME: OVRMeshJobs.NativeArrayHelper<OVRPlugin.Vector2f>$$.ctor
ENTRY_POINT: 04721c10
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


int OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector2f>___ctor(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 *in_x9;
  long unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  int iVar6;
  uint uVar7;
  ulong unaff_x22;
  int unaff_w23;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  
  do {
    uVar9 = in_x9[1];
    uVar8 = *in_x9;
    param_1[2] = in_x9[2];
    param_1[1] = uVar9;
    *param_1 = uVar8;
    thunk_FUN_036b7ad0(param_1,param_2);
    iVar2 = *(int *)(unaff_x19 + 0x18);
    unaff_x22 = (ulong)((int)unaff_x22 + 1);
    do {
      iVar6 = (int)unaff_x22;
      if (iVar2 <= iVar6) {
        FUN_05e3b0f4(*(undefined8 *)(unaff_x19 + 0x10),unaff_w21,iVar2 - unaff_w21,0);
        iVar2 = *(int *)(unaff_x19 + 0x18);
        *(uint *)(unaff_x19 + 0x18) = unaff_w21;
        *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
        return iVar2 - unaff_w21;
      }
      unaff_x22 = (ulong)iVar6;
      lVar5 = (long)iVar6 * (long)unaff_w23 + 0x20;
      do {
        lVar4 = *(long *)(unaff_x19 + 0x10);
        if (lVar4 == 0) goto LAB_04721c70;
        if (*(uint *)(lVar4 + 0x18) <= (uint)unaff_x22) goto LAB_04721c74;
        if (unaff_x20 == 0) goto LAB_04721c70;
        puVar1 = (undefined8 *)(lVar4 + lVar5);
        in_stack_00000048 = puVar1[1];
        in_stack_00000040 = *puVar1;
        in_stack_00000050 = puVar1[2];
        uVar3 = (**(code **)(unaff_x20 + 0x18))
                          (*(undefined8 *)(unaff_x20 + 0x40),&stack0x00000040,
                           *(undefined8 *)(unaff_x20 + 0x28));
        iVar2 = *(int *)(unaff_x19 + 0x18);
        if ((uVar3 & 1) == 0) break;
        unaff_x22 = unaff_x22 + 1;
        lVar5 = lVar5 + 0x18;
      } while ((long)unaff_x22 < (long)iVar2);
      uVar7 = (uint)unaff_x22;
    } while (iVar2 <= (int)uVar7);
    lVar5 = *(long *)(unaff_x19 + 0x10);
    if (lVar5 == 0) {
LAB_04721c70:
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    if ((*(uint *)(lVar5 + 0x18) <= uVar7) || (*(uint *)(lVar5 + 0x18) <= unaff_w21)) {
LAB_04721c74:
                    /* WARNING: Subroutine does not return */
      FUN_03642c20();
    }
    in_x9 = (undefined8 *)(lVar5 + 0x20 + (long)(int)uVar7 * (long)unaff_w23);
    param_2 = 0;
    param_1 = (undefined8 *)(lVar5 + 0x20 + (long)(int)unaff_w21 * (long)unaff_w23);
    unaff_w21 = unaff_w21 + 1;
  } while( true );
}


