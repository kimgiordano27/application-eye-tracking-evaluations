/*
FUNCTION_NAME: OVRPlugin.OVRP_1_29_0$$ovrp_GetNodePoseStateRaw
ENTRY_POINT: 029080e8
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


int OVRPlugin_OVRP_1_29_0__ovrp_GetNodePoseStateRaw(long param_1,int param_2)

{
  int iVar1;
  int iVar2;
  char in_NG;
  char in_OV;
  int iVar3;
  undefined2 uVar4;
  int in_w9;
  int in_w10;
  int in_w11;
  undefined2 in_w12;
  undefined2 in_w13;
  int in_w14;
  uint in_w15;
  int in_w16;
  long unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  int unaff_w22;
  
  while( true ) {
                    /* try { // try from 029080e8 to 02a080f7 has its CatchHandler @ 029080f8 */
    iVar3 = param_2 + 4;
                    /* catch() { ... } // from try @ 02908074 with catch @ 029080f8
                       catch() { ... } // from try @ 029080e8 with catch @ 029080f8 */
    *(undefined2 *)(unaff_x19 + (long)in_w16 * 2) =
         *(undefined2 *)(((ulong)(in_w15 << 1) & 0x7e) + param_1);
                    /* try { // try from 029080fc to 02a080ff has its CatchHandler @ 02908108 */
    if (in_NG == in_OV) break;
    if ((unaff_x21 & 1) != 0) {
      if (in_w11 == 0x4c) {
        in_w11 = 0;
        *(undefined2 *)(unaff_x19 + (long)iVar3 * 2) = in_w12;
        iVar3 = param_2 + 6;
        *(undefined2 *)(unaff_x19 + (long)(param_2 + 5) * 2) = in_w13;
      }
      in_w11 = in_w11 + 4;
    }
    iVar1 = unaff_w22 + 1;
    *(undefined2 *)(unaff_x19 + (long)iVar3 * 2) =
         *(undefined2 *)(((ulong)(*(byte *)(unaff_x20 + unaff_w22) >> 1) & 0x7e) + param_1);
    *(undefined2 *)(unaff_x19 + (long)(iVar3 + 1) * 2) =
         *(undefined2 *)
          (param_1 +
          (ulong)((uint)(*(byte *)(unaff_x20 + iVar1) >> 4) |
                 (*(byte *)(unaff_x20 + unaff_w22) & 3) << 4) * 2);
    iVar2 = unaff_w22 + 2;
    unaff_w22 = unaff_w22 + 3;
    in_OV = SBORROW4(unaff_w22,in_w9);
    in_NG = unaff_w22 - in_w9 < 0;
    *(undefined2 *)(unaff_x19 + (long)(iVar3 + 2) * 2) =
         *(undefined2 *)
          (param_1 +
          (ulong)((uint)(*(byte *)(unaff_x20 + iVar2) >> 6) |
                 (*(byte *)(unaff_x20 + iVar1) & 0xf) << 2) * 2);
    in_w15 = (uint)*(byte *)(unaff_x20 + iVar2);
    in_w16 = iVar3 + 3;
    param_2 = iVar3;
    in_w14 = iVar3;
  }
                    /* try { // try from 02908100 to 02a0810b has its CatchHandler @ 02907f70 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 029080fc with catch @ 02908108
                        */
  if (((in_w10 != 0) && ((unaff_x21 & 1) != 0)) && (in_w11 == 0x4c)) {
    *(undefined2 *)(unaff_x19 + (long)iVar3 * 2) = 0xd;
    iVar3 = in_w14 + 6;
    *(undefined2 *)(unaff_x19 + (long)(in_w14 + 5) * 2) = 10;
  }
  if (in_w10 == 1) {
    *(undefined2 *)(unaff_x19 + (long)iVar3 * 2) =
         *(undefined2 *)(((ulong)(*(byte *)(unaff_x20 + in_w9) >> 1) & 0x7e) + param_1);
    *(undefined2 *)(unaff_x19 + (long)(iVar3 + 1) * 2) =
         *(undefined2 *)(((ulong)*(byte *)(unaff_x20 + in_w9) & 3) * 0x20 + param_1);
    uVar4 = *(undefined2 *)(param_1 + 0x80);
  }
  else {
    if (in_w10 != 2) {
      return iVar3;
    }
    *(undefined2 *)(unaff_x19 + (long)iVar3 * 2) =
         *(undefined2 *)(((ulong)(*(byte *)(unaff_x20 + in_w9) >> 1) & 0x7e) + param_1);
    *(undefined2 *)(unaff_x19 + (long)(iVar3 + 1) * 2) =
         *(undefined2 *)
          (param_1 +
          (ulong)((uint)(*(byte *)(unaff_x20 + (in_w9 + 1)) >> 4) |
                 (*(byte *)(unaff_x20 + in_w9) & 3) << 4) * 2);
    uVar4 = *(undefined2 *)(((ulong)*(byte *)(unaff_x20 + (in_w9 + 1)) & 0xf) * 8 + param_1);
  }
  *(undefined2 *)(unaff_x19 + (long)(iVar3 + 2) * 2) = uVar4;
  *(undefined2 *)(unaff_x19 + (long)(iVar3 + 3) * 2) = *(undefined2 *)(param_1 + 0x80);
  return iVar3 + 4;
}


