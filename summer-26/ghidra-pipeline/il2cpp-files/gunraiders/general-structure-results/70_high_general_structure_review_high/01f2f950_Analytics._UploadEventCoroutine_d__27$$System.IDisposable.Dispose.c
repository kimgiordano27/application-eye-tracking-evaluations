/*
FUNCTION_NAME: Analytics.<UploadEventCoroutine>d__27$$System.IDisposable.Dispose
ENTRY_POINT: 01f2f950
PROGRAM: gunraiders-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_4
*/


void Analytics_<UploadEventCoroutine>d__27__System_IDisposable_Dispose(void)

{
  ulong uVar1;
  long lVar2;
  long unaff_x19;
  undefined8 uVar3;
  long *unaff_x21;
  
  uVar1 = FUN_03d4f3bc();
  if ((uVar1 & 1) != 0) {
    if ((*(long *)(unaff_x19 + 0x2b0) == 0) ||
       (lVar2 = *(long *)(*(long *)(unaff_x19 + 0x2b0) + 0x18), lVar2 == 0)) goto LAB_01f2f9f8;
    FUN_01e00e94(lVar2,0,0,0);
    *(undefined8 *)(unaff_x19 + 0x2b0) = 0;
  }
  if (*(char *)(unaff_x19 + 0x2c0) != '\0') {
    *(undefined1 *)(unaff_x19 + 0x2c0) = 0;
    if (*(long *)(unaff_x19 + 0x2a8) == 0) {
LAB_01f2f9f8:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    FUN_03da0d88(*(long *)(unaff_x19 + 0x2a8),0);
    if (*(long *)(unaff_x19 + 0x2b0) != 0) {
      uVar3 = *(undefined8 *)(*(long *)(unaff_x19 + 0x2b0) + 0x18);
      if (*(int *)(*unaff_x21 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uVar1 = FUN_03d4f3bc(uVar3,0,0);
      if ((uVar1 & 1) != 0) {
        if ((*(long *)(unaff_x19 + 0x2b0) == 0) ||
           (lVar2 = *(long *)(*(long *)(unaff_x19 + 0x2b0) + 0x18), lVar2 == 0)) goto LAB_01f2f9f8;
        FUN_01e00e94(lVar2,0,0,0);
        *(undefined8 *)(unaff_x19 + 0x2b0) = 0;
      }
    }
  }
  return;
}


