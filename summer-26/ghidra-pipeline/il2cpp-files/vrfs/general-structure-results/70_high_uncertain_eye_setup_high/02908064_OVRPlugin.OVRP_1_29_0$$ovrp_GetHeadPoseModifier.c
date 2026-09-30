/*
FUNCTION_NAME: OVRPlugin.OVRP_1_29_0$$ovrp_GetHeadPoseModifier
ENTRY_POINT: 02908064
PROGRAM: vrfs-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


int OVRPlugin_OVRP_1_29_0__ovrp_GetHeadPoseModifier(long param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined1 in_ZR;
  int iVar3;
  undefined2 uVar4;
  int in_w9;
  int in_w10;
  int in_w11;
  undefined2 in_w12;
  undefined2 in_w13;
  long unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  int unaff_w22;
  
  do {
    if ((bool)in_ZR) {
      in_w11 = 0;
      iVar3 = param_2 + 1;
      *(undefined2 *)(unaff_x19 + (long)param_2 * 2) = in_w12;
                    /* try { // try from 02908074 to 02a0808b has its CatchHandler @ 029080f8 */
      param_2 = param_2 + 2;
      *(undefined2 *)(unaff_x19 + (long)iVar3 * 2) = in_w13;
    }
    in_w11 = in_w11 + 4;
    iVar3 = param_2;
    do {
      iVar1 = unaff_w22 + 1;
                    /* try { // try from 0290808c to 02a080e7 has its CatchHandler @ 02907f70 */
      *(undefined2 *)(unaff_x19 + (long)iVar3 * 2) =
           *(undefined2 *)(((ulong)(*(byte *)(unaff_x20 + unaff_w22) >> 1) & 0x7e) + param_1);
      *(undefined2 *)(unaff_x19 + (long)(iVar3 + 1) * 2) =
           *(undefined2 *)
            (param_1 +
            (ulong)((uint)(*(byte *)(unaff_x20 + iVar1) >> 4) |
                   (*(byte *)(unaff_x20 + unaff_w22) & 3) << 4) * 2);
      iVar2 = unaff_w22 + 2;
      unaff_w22 = unaff_w22 + 3;
      *(undefined2 *)(unaff_x19 + (long)(iVar3 + 2) * 2) =
           *(undefined2 *)
            (param_1 +
            (ulong)((uint)(*(byte *)(unaff_x20 + iVar2) >> 6) |
                   (*(byte *)(unaff_x20 + iVar1) & 0xf) << 2) * 2);
      param_2 = iVar3 + 4;
      *(undefined2 *)(unaff_x19 + (long)(iVar3 + 3) * 2) =
           *(undefined2 *)(((ulong)*(byte *)(unaff_x20 + iVar2) & 0x3f) * 2 + param_1);
      if (in_w9 <= unaff_w22) {
        if (((in_w10 != 0) && ((unaff_x21 & 1) != 0)) && (in_w11 == 0x4c)) {
          *(undefined2 *)(unaff_x19 + (long)param_2 * 2) = 0xd;
          param_2 = iVar3 + 6;
          *(undefined2 *)(unaff_x19 + (long)(iVar3 + 5) * 2) = 10;
        }
        if (in_w10 == 1) {
          *(undefined2 *)(unaff_x19 + (long)param_2 * 2) =
               *(undefined2 *)(((ulong)(*(byte *)(unaff_x20 + in_w9) >> 1) & 0x7e) + param_1);
          *(undefined2 *)(unaff_x19 + (long)(param_2 + 1) * 2) =
               *(undefined2 *)(((ulong)*(byte *)(unaff_x20 + in_w9) & 3) * 0x20 + param_1);
          uVar4 = *(undefined2 *)(param_1 + 0x80);
        }
        else {
          if (in_w10 != 2) {
            return param_2;
          }
          *(undefined2 *)(unaff_x19 + (long)param_2 * 2) =
               *(undefined2 *)(((ulong)(*(byte *)(unaff_x20 + in_w9) >> 1) & 0x7e) + param_1);
          *(undefined2 *)(unaff_x19 + (long)(param_2 + 1) * 2) =
               *(undefined2 *)
                (param_1 +
                (ulong)((uint)(*(byte *)(unaff_x20 + (in_w9 + 1)) >> 4) |
                       (*(byte *)(unaff_x20 + in_w9) & 3) << 4) * 2);
          uVar4 = *(undefined2 *)(((ulong)*(byte *)(unaff_x20 + (in_w9 + 1)) & 0xf) * 8 + param_1);
        }
        *(undefined2 *)(unaff_x19 + (long)(param_2 + 2) * 2) = uVar4;
        *(undefined2 *)(unaff_x19 + (long)(param_2 + 3) * 2) = *(undefined2 *)(param_1 + 0x80);
        return param_2 + 4;
      }
      iVar3 = param_2;
    } while ((unaff_x21 & 1) == 0);
    in_ZR = in_w11 == 0x4c;
  } while( true );
}


