/*
FUNCTION_NAME: FUN_0615a098
ENTRY_POINT: 0615a098
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


uint FUN_0615a098(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 local_d8;
  undefined8 *puStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 0615a048 with catch @ 0615a098
                        */
                    /* try { // try from 0615a0b0 to 0625a0c7 has its CatchHandler @ 0615a128 */
  if ((DAT_06dc6811 & 1) == 0) {
                    /* try { // try from 0615a0c8 to 0625a117 has its CatchHandler @ 06159f84 */
    FUN_02d965b8(Method_Unity_Jobs_IJobExtensions_Schedule<RoomMeshAnchor_BakeMeshJob>__);
    FUN_02d965b8(Method_Unity_Jobs_IJobExtensions_Schedule<TopLayer_CompleteReceiveJob>__);
    FUN_02d965b8(Method_Unity_Jobs_IJobExtensions_Schedule<UDPNetworkInterface_FlushSendJob>__);
    FUN_02d965b8(Method_Unity_Jobs_IJobExtensions_Schedule<UDPNetworkInterface_ReceiveJob>__);
    FUN_02d965b8(Method_Unity_Jobs_IJobExtensions_Schedule<WebSocketLayer_ReceiveJob>__);
    FUN_02d965b8(Method_Unity_Jobs_IJobExtensions_Schedule<WebSocketLayer_SendJob>__);
                    /* try { // try from 0615a118 to 0625a127 has its CatchHandler @ 0615a128 */
    FUN_02d965b8(
                Method_Unity_Jobs_IJobExtensions_Schedule<ARCorePlaneSubsystem_ARCoreProvider_FlipBoundaryWindingJob>__
                );
    FUN_02d965b8(Method_System_Net_HttpWebRequest_set_Method__);
                    /* catch() { ... } // from try @ 0615a0b0 with catch @ 0615a128
                       catch() { ... } // from try @ 0615a118 with catch @ 0615a128 */
                    /* try { // try from 0615a12c to 0625a12f has its CatchHandler @ 0615a138 */
    DAT_06dc6811 = 1;
  }
                    /* try { // try from 0615a130 to 0625a13b has its CatchHandler @ 06159f84 */
  puVar1 = Method_System_Net_HttpWebRequest_set_Method__;
  local_50 = 0;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0615a12c with catch @ 0615a138
                        */
  uStack_88 = 0;
  local_90 = 0;
  local_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
                    /* try { // try from 0615a148 to 0625a18f has its CatchHandler @ 0615a148
                       catch() { ... } // from try @ 0615a148 with catch @ 0615a148
                       catch() { ... } // from try @ 0615a210 with catch @ 0615a148
                       catch() { ... } // from try @ 0615a23c with catch @ 0615a148
                       catch() { ... } // from try @ 0615a284 with catch @ 0615a148
                       catch() { ... } // from try @ 0615a2ec with catch @ 0615a148 */
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  if (*(long *)(param_1 + 0x10) == 0) {
    FUN_061596f0(param_1);
  }
  param_4[4] = 0;
  param_4[1] = 0;
  *param_4 = 0;
  param_4[3] = 0;
  param_4[2] = 0;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar4 = FUN_061ad004(param_2,0);
                    /* try { // try from 0615a190 to 0625a197 has its CatchHandler @ 0615a254 */
  uVar5 = FUN_0536c9cc(param_3,0);
  if ((uVar5 & 1) == 0) {
                    /* try { // try from 0615a1a8 to 0625a1b3 has its CatchHandler @ 0615a244 */
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    uVar3 = FUN_061ad004(param_3,0);
  }
  else {
    uVar3 = *(uint *)(param_1 + 0x20);
                    /* try { // try from 0615a19c to 0625a1a3 has its CatchHandler @ 0615a248 */
  }
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* try { // try from 0615a1c8 to 0625a1cf has its CatchHandler @ 0615a240 */
    uVar5 = uVar4 & 0xffffffff | (ulong)uVar3 << 0x20;
                    /* try { // try from 0615a1dc to 0625a1eb has its CatchHandler @ 0615a23c */
    uVar4 = FUN_0500dc50(*(long *)(param_1 + 0x10),uVar5,
                         *(undefined8 *)
                          Method_Unity_Jobs_IJobExtensions_Schedule<RoomMeshAnchor_BakeMeshJob>__);
    if ((uVar4 & 1) == 0) {
                    /* try { // try from 0615a234 to 0625a237 has its CatchHandler @ 0615a24c */
                    /* try { // try from 0615a238 to 0625a23b has its CatchHandler @ 0615a254 */
      if (uVar3 == *(uint *)(param_1 + 0x20)) {
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 0615a1dc with catch @ 0615a23c
                       try { // try from 0615a23c to 0625a26b has its CatchHandler @ 0615a148 */
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 0615a1c8 with catch @ 0615a240
                        */
        if (*(long *)(param_1 + 0x10) == 0) goto LAB_0615a2d0;
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 0615a1a8 with catch @ 0615a244
                        */
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 0615a19c with catch @ 0615a248
                        */
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 0615a234 with catch @ 0615a24c
                        */
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 0615a204 with catch @ 0615a250
                        */
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 0615a190 with catch @ 0615a254
                       catch(type#1 @ 066567d8) { ... } // from try @ 0615a238 with catch @ 0615a254
                        */
        FUN_0500dec0(&local_90,*(long *)(param_1 + 0x10),
                     *(undefined8 *)
                      Method_Unity_Jobs_IJobExtensions_Schedule<TopLayer_CompleteReceiveJob>__);
        puVar1 = Method_Unity_Jobs_IJobExtensions_Schedule<WebSocketLayer_ReceiveJob>__;
        local_d8 = 0;
        puStack_d0 = &local_90;
        do {
                    /* try { // try from 0615a26c to 0625a283 has its CatchHandler @ 0615a2e4 */
          uVar3 = FUN_05260c20(&local_90,*(undefined8 *)puVar1);
          uVar2 = local_78;
          if ((uVar3 & 1) == 0) goto LAB_0615a2b8;
                    /* try { // try from 0615a284 to 0625a2d3 has its CatchHandler @ 0615a148 */
          uStack_a8 = uStack_68;
          local_b0 = local_70;
          uStack_98 = uStack_58;
          uStack_a0 = uStack_60;
          uVar4 = thunk_FUN_0536b75c(local_78,param_2,0);
        } while ((uVar4 & 1) == 0);
        *param_4 = uVar2;
        param_4[2] = uStack_a8;
        param_4[1] = local_b0;
        param_4[4] = uStack_98;
        param_4[3] = uStack_a0;
        LeanTween__value(param_4,0);
LAB_0615a2b8:
        FUN_05260d80(&local_90,
                     *(undefined8 *)
                      Method_Unity_Jobs_IJobExtensions_Schedule<UDPNetworkInterface_ReceiveJob>__);
      }
      else {
        uVar3 = 0;
      }
    }
    else {
      if (*(long *)(param_1 + 0x10) == 0) goto LAB_0615a2d0;
                    /* try { // try from 0615a204 to 0625a20f has its CatchHandler @ 0615a250 */
      FUN_0500d8a8(&local_d8,*(long *)(param_1 + 0x10),uVar5,
                   *(undefined8 *)
                    Method_Unity_Jobs_IJobExtensions_Schedule<UDPNetworkInterface_FlushSendJob>__);
                    /* try { // try from 0615a210 to 0625a233 has its CatchHandler @ 0615a148 */
      param_4[1] = puStack_d0;
      *param_4 = local_d8;
      param_4[3] = uStack_c0;
      param_4[2] = local_c8;
      param_4[4] = local_b8;
      LeanTween__value(param_4,0);
      uVar3 = 1;
    }
    return uVar3 & 1;
  }
LAB_0615a2d0:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


