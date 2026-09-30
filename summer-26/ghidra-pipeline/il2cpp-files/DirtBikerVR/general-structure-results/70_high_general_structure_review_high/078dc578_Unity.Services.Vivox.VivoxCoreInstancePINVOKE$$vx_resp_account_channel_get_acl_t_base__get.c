/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_resp_account_channel_get_acl_t_base__get
ENTRY_POINT: 078dc578
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_7
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_resp_account_channel_get_acl_t_base__get
               (long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 unaff_x21;
  long unaff_x22;
  long *plVar4;
  long unaff_x23;
  
  plVar4 = *(long **)(unaff_x22 + 0xf70);
                    /* try { // try from 078dc584 to 079dc58f has its CatchHandler @ 078dc614 */
  if ((*(byte *)(unaff_x23 + 0xb34) & 1) == 0) {
                    /* try { // try from 078dc594 to 079dc59b has its CatchHandler @ 078dc608 */
    FUN_03a8a718(Oculus_Platform_Request<string>_TypeInfo);
                    /* try { // try from 078dc5a0 to 079dc5ab has its CatchHandler @ 078dc604 */
    FUN_03a8a718(PTR_DAT_084867c8);
    FUN_03a8a718(Oculus_Platform_Request<SystemVoipState>_TypeInfo);
    FUN_03a8a718(Oculus_Platform_Request<User>_TypeInfo);
                    /* try { // try from 078dc5c0 to 079dc5c7 has its CatchHandler @ 078dc5f8 */
    FUN_03a8a718(Oculus_Platform_Request<UserAccountAgeCategory>_TypeInfo);
    *(undefined1 *)(unaff_x23 + 0xb34) = 1;
  }
  puVar1 = PTR_DAT_084867c8;
                    /* try { // try from 078dc5d4 to 079dc5e3 has its CatchHandler @ 078dc5f4 */
  if (*(int *)(*plVar4 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
                    /* try { // try from 078dc5e8 to 079dc5eb has its CatchHandler @ 078dc61c */
                    /* try { // try from 078dc5ec to 079dc5ef has its CatchHandler @ 078dc618 */
                    /* try { // try from 078dc5f0 to 079dc5f3 has its CatchHandler @ 078dc614 */
  FUN_0679343c(param_1,0);
  *(undefined8 *)(param_1 + 0x10) = param_2;
  thunk_FUN_03afed3c((undefined8 *)(param_1 + 0x10),param_2);
  *(undefined8 *)(param_1 + 0x18) = unaff_x21;
  thunk_FUN_03afed3c();
  lVar2 = FUN_03a8a804(*(undefined8 *)puVar1,5);
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x18) != 0) {
      *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)Oculus_Platform_Request<User>_TypeInfo;
      thunk_FUN_03afed3c((undefined8 *)(lVar2 + 0x20));
      if ((*(uint *)(lVar2 + 0x18) & 0xfffffffe) != 0) {
        *(undefined8 *)(lVar2 + 0x28) = unaff_x21;
        thunk_FUN_03afed3c((undefined8 *)(lVar2 + 0x28));
        if (2 < *(uint *)(lVar2 + 0x18)) {
          *(undefined8 *)(lVar2 + 0x30) =
               *(undefined8 *)Oculus_Platform_Request<UserAccountAgeCategory>_TypeInfo;
          thunk_FUN_03afed3c((undefined8 *)(lVar2 + 0x30));
          if ((*(uint *)(lVar2 + 0x18) & 0xfffffffc) != 0) {
            *(undefined8 *)(lVar2 + 0x38) = param_2;
            thunk_FUN_03afed3c((undefined8 *)(lVar2 + 0x38),param_2);
            if (4 < *(uint *)(lVar2 + 0x18)) {
              *(undefined8 *)(lVar2 + 0x40) =
                   *(undefined8 *)Oculus_Platform_Request<SystemVoipState>_TypeInfo;
              thunk_FUN_03afed3c();
              uVar3 = FUN_065ce45c(lVar2,0);
              *(undefined8 *)(param_1 + 0x20) = uVar3;
              thunk_FUN_03afed3c((undefined8 *)(param_1 + 0x20),uVar3);
              return;
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


