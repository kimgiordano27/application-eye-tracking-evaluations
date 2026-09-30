/*
FUNCTION_NAME: OVRMeshJobs.NativeArrayHelper<OVRPlugin.Vector2f>$$.ctor
ENTRY_POINT: 017b196c
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


int OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector2f>___ctor(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  long unaff_x19;
  long unaff_x20;
  uint uVar5;
  ulong unaff_x21;
  uint unaff_w22;
  ulong uVar6;
  undefined8 uVar7;
  
  do {
    uVar4 = (ulong)*(uint *)(unaff_x19 + 0x18);
    unaff_w22 = unaff_w22 + 1;
    unaff_x21 = (ulong)((int)unaff_x21 + 1);
    do {
      if ((int)uVar4 <= (int)unaff_x21) {
        *(uint *)(unaff_x19 + 0x18) = unaff_w22;
        *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
        return (int)uVar4 - unaff_w22;
      }
      uVar6 = -(unaff_x21 >> 0x1f & 1) & 0xfffffff000000000 | (unaff_x21 & 0xffffffff) << 4;
      unaff_x21 = (ulong)(int)unaff_x21;
      do {
        lVar3 = *(long *)(unaff_x19 + 0x10);
        if (lVar3 == 0) goto LAB_017b19a0;
        if (*(uint *)(lVar3 + 0x18) <= (uint)unaff_x21) goto LAB_017b19a4;
        if (unaff_x20 == 0) goto LAB_017b19a0;
        uVar4 = (**(code **)(unaff_x20 + 0x18))
                          (*(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(lVar3 + uVar6 + 0x20),
                           *(undefined8 *)(lVar3 + uVar6 + 0x28),*(undefined8 *)(unaff_x20 + 0x28));
        if ((uVar4 & 1) == 0) {
          uVar4 = (ulong)*(uint *)(unaff_x19 + 0x18);
          break;
        }
        uVar4 = (ulong)*(int *)(unaff_x19 + 0x18);
        unaff_x21 = unaff_x21 + 1;
        uVar6 = uVar6 + 0x10;
      } while ((long)unaff_x21 < (long)uVar4);
      uVar5 = (uint)unaff_x21;
    } while ((int)uVar4 <= (int)uVar5);
    lVar3 = *(long *)(unaff_x19 + 0x10);
    if (lVar3 == 0) {
LAB_017b19a0:
                    /* WARNING: Subroutine does not return */
      FUN_00fdc534();
    }
    if ((*(uint *)(lVar3 + 0x18) <= uVar5) || (*(uint *)(lVar3 + 0x18) <= unaff_w22)) {
LAB_017b19a4:
                    /* WARNING: Subroutine does not return */
      FUN_00fdc53c();
    }
    puVar1 = (undefined8 *)(lVar3 + 0x20 + (long)(int)uVar5 * 0x10);
    uVar7 = *puVar1;
    puVar2 = (undefined8 *)(lVar3 + 0x20 + (long)(int)unaff_w22 * 0x10);
    puVar2[1] = puVar1[1];
    *puVar2 = uVar7;
  } while( true );
}


