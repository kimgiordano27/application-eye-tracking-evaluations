/*
FUNCTION_NAME: OVRPlugin.Qpl$$MarkerStartForJoin
ENTRY_POINT: 02c49548
PROGRAM: sharks-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Qpl__MarkerStartForJoin(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *unaff_x19;
  long unaff_x20;
  int unaff_w21;
  int unaff_w22;
  long *unaff_x24;
  bool bVar8;
  
  do {
    FUN_02c433dc(param_1);
    bVar8 = false;
LAB_02c49510:
    do {
      unaff_w22 = unaff_w22 + 1;
      if (unaff_w22 == unaff_w21) {
        return;
      }
      lVar5 = *unaff_x19;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *unaff_x24) {
            puVar1 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_02c494c8;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar1 = (undefined8 *)FUN_0185dba8();
LAB_02c494c8:
      param_1 = (*(code *)*puVar1)();
      if (param_1 == 0) {
        thunk_FUN_01851c08(PTR_DAT_037f87a8);
        uVar2 = thunk_FUN_01861bbc();
        uVar3 = thunk_FUN_01851c08(PTR_DAT_0380c838);
        uVar4 = thunk_FUN_01851c08(PTR_DAT_037fb630);
        FUN_02b3cc64(uVar2,uVar3,uVar4,0);
        uVar3 = thunk_FUN_01851c08(PTR_DAT_0380c868);
                    /* WARNING: Subroutine does not return */
        FUN_017fc474(uVar2,uVar3);
      }
      if (bVar8) {
LAB_02c4950c:
        bVar8 = true;
        goto LAB_02c49510;
      }
      if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_017fc5a8();
      }
      uVar6 = FUN_02c40bec();
      if ((uVar6 & 1) != 0) goto LAB_02c4950c;
      uVar6 = FUN_02c40bec(param_1);
      if ((uVar6 & 1) != 0) {
        FUN_02c4c75c();
        goto LAB_02c4950c;
      }
      FUN_02c47934(param_1);
      uVar6 = FUN_02c40bec();
      bVar8 = false;
    } while ((uVar6 & 1) == 0);
  } while( true );
}


