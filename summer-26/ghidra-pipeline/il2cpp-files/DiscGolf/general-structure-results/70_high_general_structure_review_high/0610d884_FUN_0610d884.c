/*
FUNCTION_NAME: FUN_0610d884
ENTRY_POINT: 0610d884
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_4;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_7
*/


void FUN_0610d884(long param_1,undefined8 param_2)

{
  byte bVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  
  if ((DAT_06dc65ce & 1) == 0) {
    FUN_02d965b8(Method_Unity_Netcode_FastBufferReader_ReadLengthSafe__);
    FUN_02d965b8(Method_System_Net_FtpWebRequest_TimerCallback__);
    FUN_02d965b8(Method_System_Net_FtpWebRequest_get_UseDefaultCredentials__);
    FUN_02d965b8(Method_System_Net_FtpWebRequest_set_CachePolicy__);
    DAT_06dc65ce = 1;
  }
  lVar3 = FUN_060e5c1c(param_2,0);
  if (lVar3 != 0) {
    uVar4 = FUN_060e781c(lVar3,0);
    uVar5 = FUN_0536ba54(uVar4,*(undefined8 *)(param_1 + 0x10),0);
    if ((uVar5 & 1) != 0) {
      return;
    }
    uVar4 = FUN_060e7878(lVar3,0);
    uVar6 = FUN_060e798c(lVar3,0);
    uVar7 = thunk_FUN_02dd3144(*(undefined8 *)Method_Unity_Netcode_FastBufferReader_ReadLengthSafe__
                              );
    FUN_060fe578(uVar7,uVar4,uVar6);
    if (*(long *)(param_1 + 0x60) != 0) {
      uVar5 = FUN_046cea94(*(long *)(param_1 + 0x60),uVar7,
                           *(undefined8 *)
                            Method_System_Net_FtpWebRequest_get_UseDefaultCredentials__);
      if ((uVar5 & 1) == 0) {
        return;
      }
      if (*(long *)(param_1 + 0x60) != 0) {
        plVar8 = (long *)FUN_046ce570(*(long *)(param_1 + 0x60),uVar7,
                                      *(undefined8 *)
                                       Method_System_Net_FtpWebRequest_set_CachePolicy__);
        uVar4 = FUN_060e7878(lVar3,0);
        uVar2 = FUN_060e78d4(lVar3,0);
        uVar6 = FUN_060e7930(lVar3,0);
        if (plVar8 != (long *)0x0) {
                    /* try { // try from 0610d9d0 to 0620da07 has its CatchHandler @ 0610da24 */
          bVar1 = *(byte *)(*(long *)Method_System_Net_FtpWebRequest_TimerCallback__ + 0x130);
          if ((bVar1 <= *(byte *)(*plVar8 + 0x130)) &&
             (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) ==
              *(long *)Method_System_Net_FtpWebRequest_TimerCallback__)) {
            FUN_0611671c(plVar8,uVar4,uVar2,uVar6,0);
            return;
          }
                    /* WARNING: Subroutine does not return */
          FUN_02d96be0(plVar8);
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 0610d9d0 with catch @ 0610da24 */
  FUN_02d96860();
}


