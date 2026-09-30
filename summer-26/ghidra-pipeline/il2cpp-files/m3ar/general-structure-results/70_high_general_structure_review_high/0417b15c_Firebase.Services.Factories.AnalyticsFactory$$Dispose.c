/*
FUNCTION_NAME: Firebase.Services.Factories.AnalyticsFactory$$Dispose
ENTRY_POINT: 0417b15c
PROGRAM: m3ar-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void Firebase_Services_Factories_AnalyticsFactory__Dispose(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  FUN_0403162c(*(undefined8 *)(param_1 + 0x510));
  FUN_0403162c(PTR_DAT_08f684f8);
                    /* try { // try from 0417b178 to 0427b187 has its CatchHandler @ 0417b3e0 */
  FUN_0403162c(PTR_DAT_08f68500);
  *(undefined1 *)(unaff_x20 + 0xe4a) = 1;
  lVar1 = FUN_0417aacc();
  if (lVar1 != 0) {
    FUN_08584234(lVar1,1,0);
    if ((*(long *)(unaff_x19 + 0x20) != 0) &&
       (lVar1 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0x30), lVar1 != 0)) {
      *(undefined1 *)(lVar1 + 0x23) = 0;
      lVar1 = FUN_0417aacc();
      if (lVar1 != 0) {
        FUN_0416b6d8(lVar1,0,0,0,0,0);
        lVar1 = FUN_0417aacc();
        if (lVar1 != 0) {
          FUN_0416b6ec(lVar1,0,0,0,0,0);
          lVar1 = FUN_0417aacc();
          if ((lVar1 != 0) &&
             (lVar1 = FUN_04a721c4(lVar1,*(undefined8 *)PTR_DAT_08f684f8), lVar1 != 0)) {
            *(undefined4 *)(lVar1 + 0x68) = 0;
            *(undefined4 *)(lVar1 + 0x88) = 0;
            *(undefined1 *)(lVar1 + 0x50) = 0;
            *(undefined8 *)(lVar1 + 0x48) = 0x100000001;
            lVar1 = FUN_0417aacc();
            if ((lVar1 != 0) &&
               (lVar1 = FUN_04a721c4(lVar1,*(undefined8 *)PTR_DAT_08f68510), lVar1 != 0)) {
              *(undefined8 *)(lVar1 + 0x48) = 0x100000001;
              lVar1 = FUN_0417aacc();
              if ((lVar1 != 0) &&
                 (lVar1 = FUN_04a721c4(lVar1,*(undefined8 *)PTR_DAT_08f68500), lVar1 != 0)) {
                *(undefined4 *)(lVar1 + 0x4c) = 1;
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


