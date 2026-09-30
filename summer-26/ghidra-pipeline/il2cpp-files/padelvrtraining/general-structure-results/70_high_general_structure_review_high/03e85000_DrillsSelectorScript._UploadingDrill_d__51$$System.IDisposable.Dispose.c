/*
FUNCTION_NAME: DrillsSelectorScript.<UploadingDrill>d__51$$System.IDisposable.Dispose
ENTRY_POINT: 03e85000
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void DrillsSelectorScript_<UploadingDrill>d__51__System_IDisposable_Dispose(void)

{
  long *unaff_x19;
  void *unaff_x20;
  long *unaff_x21;
  long lVar1;
  
  FUN_03e85130();
  *(undefined4 *)(unaff_x19 + 0x3e) = 0;
  FUN_04092cf4(*(undefined4 *)((long)unaff_x19 + 0x23c));
  lVar1 = unaff_x19[0x34];
  memcpy(&stack0x00000068,unaff_x20,0x68);
  if (lVar1 != 0) {
    memcpy((void *)(lVar1 + 0xc0),&stack0x00000068,0x68);
    thunk_FUN_03d1023c(lVar1 + 0xe8,0);
    lVar1 = unaff_x19[0x35];
    memcpy(&stack0x00000000,unaff_x20,0x68);
    if (lVar1 != 0) {
      memcpy((void *)(lVar1 + 0xc0),&stack0x00000000,0x68);
      thunk_FUN_03d1023c(lVar1 + 0xe8,0);
      lVar1 = unaff_x19[0x34];
      if (lVar1 != 0) {
        *(byte *)(lVar1 + 0x84) = *(byte *)(lVar1 + 0x84) ^ 1;
        lVar1 = unaff_x19[0x35];
        if (lVar1 != 0) {
          *(byte *)(lVar1 + 0x84) = *(byte *)(lVar1 + 0x84) ^ 1;
          FUN_03e85310();
          FUN_08a52818();
          *(undefined4 *)(unaff_x19 + 0x3d) = 0;
          lVar1 = *unaff_x21;
          if (*(int *)(lVar1 + 0xe0) == 0) {
            thunk_FUN_03db619c();
            lVar1 = *unaff_x21;
          }
          lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 0x58);
          if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x03e85128. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*unaff_x19 + 0x198))
                      (*(undefined4 *)(lVar1 + 0x54),*(undefined4 *)(lVar1 + 0x58),
                       *(undefined4 *)(lVar1 + 0x5c));
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


