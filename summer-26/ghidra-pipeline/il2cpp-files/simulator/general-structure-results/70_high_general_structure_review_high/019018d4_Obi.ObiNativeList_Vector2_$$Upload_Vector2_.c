/*
FUNCTION_NAME: Obi.ObiNativeList<Vector2>$$Upload<Vector2>
ENTRY_POINT: 019018d4
PROGRAM: simulator-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


long * Obi_ObiNativeList<Vector2>__Upload<Vector2>(void)

{
  int in_w8;
  long in_x9;
  undefined4 in_w10;
  undefined8 *in_x11;
  undefined4 in_w12;
  undefined8 *in_x13;
  long in_x14;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x22;
  long *unaff_x23;
  long unaff_x24;
  long unaff_x25;
  long *plVar1;
  long unaff_x27;
  long unaff_x28;
  long unaff_x29;
  long lStack0000000000000008;
  
  lStack0000000000000008 = in_x14;
  do {
    *(undefined4 *)(in_x11 + 0x3e) = in_w12;
    if (in_w8 != 0) {
      FUN_018f51f8();
      in_x13 = &DAT_036d2000;
      in_w12 = 1;
      in_x11 = &DAT_038e5000;
      in_w10 = 5;
    }
    plVar1 = (long *)((long)unaff_x23 + unaff_x22);
    do {
      unaff_x23 = plVar1;
      *unaff_x23 = unaff_x19;
      unaff_x23[1] = unaff_x28;
      unaff_x27 = unaff_x27 + -1;
      unaff_x19 = unaff_x19 + unaff_x29;
      if (unaff_x27 == 0) {
        if (unaff_x25 != 0) {
          plVar1 = unaff_x23;
          do {
            unaff_x23 = plVar1 + 2;
            if (unaff_x20 <= unaff_x23) {
              DAT_038e51c0 = 5;
              DAT_038e51f0 = 1;
              if (DAT_036d2678 != 0) {
                FUN_018f51f8("Mark stack overflow; current size = %lu entries\n",DAT_038e51a0);
              }
              unaff_x23 = plVar1 + -0x3fe;
            }
            *unaff_x23 = unaff_x19;
            unaff_x23[1] = lStack0000000000000008;
            unaff_x25 = unaff_x25 + -1;
            unaff_x19 = unaff_x19 + unaff_x24 * 8;
            plVar1 = unaff_x23;
          } while (unaff_x25 != 0);
        }
        return unaff_x23;
      }
      plVar1 = unaff_x23 + 2;
    } while (unaff_x23 + 2 < unaff_x20);
    in_w8 = *(int *)(in_x13 + 0xcf);
    *(undefined4 *)(in_x9 + 0x1c0) = in_w10;
  } while( true );
}


