/*
FUNCTION_NAME: FUN_061972c0
ENTRY_POINT: 061972c0
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_8;validity_or_gating_hits_8;telemetry_or_network_hits_3
*/


void FUN_061972c0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  
  puVar2 = Method_System_Globalization_HijriCalendar_CheckEraRange__;
                    /* try { // try from 061972e0 to 062972e3 has its CatchHandler @ 06197308 */
                    /* try { // try from 061972e4 to 062972e7 has its CatchHandler @ 06197304 */
  if ((DAT_06dc6936 & 1) == 0) {
                    /* try { // try from 061972e8 to 062972eb has its CatchHandler @ 06197338 */
                    /* try { // try from 061972ec to 062972ef has its CatchHandler @ 06197328 */
                    /* try { // try from 061972f0 to 062972f3 has its CatchHandler @ 06197318 */
    FUN_02d965b8(
                Method_UnityEngine_InputSystem_InputDevice_ExecuteCommand<QuerySamplingFrequencyCommand>__
                );
                    /* catch() { ... } // from try @ 06197244 with catch @ 061972f4
                       try { // try from 061972f4 to 06297353 has its CatchHandler @ 06196ea4 */
                    /* catch() { ... } // from try @ 06197258 with catch @ 061972f8 */
                    /* catch() { ... } // from try @ 061971f4 with catch @ 061972fc */
    FUN_02d965b8(Method_UnityEngine_InputSystem_InputDevice_ExecuteCommand<RequestResetCommand>__);
                    /* catch() { ... } // from try @ 061971e0 with catch @ 06197300 */
                    /* catch() { ... } // from try @ 061972e4 with catch @ 06197304 */
                    /* catch() { ... } // from try @ 061972e0 with catch @ 06197308 */
    FUN_02d965b8(Method_UnityEngine_InputSystem_InputDevice_ExecuteCommand<RequestSyncCommand>__);
                    /* catch() { ... } // from try @ 06197284 with catch @ 0619730c */
                    /* catch() { ... } // from try @ 06197044 with catch @ 06197310 */
                    /* catch() { ... } // from try @ 06197004 with catch @ 06197314 */
    FUN_02d965b8(
                Method_UnityEngine_InputSystem_InputDevice_ExecuteCommand<SendBufferedHapticCommand>__
                );
                    /* catch() { ... } // from try @ 06197018 with catch @ 06197318
                       catch() { ... } // from try @ 061972f0 with catch @ 06197318 */
                    /* catch() { ... } // from try @ 0619727c with catch @ 0619731c */
                    /* catch() { ... } // from try @ 0619720c with catch @ 06197320 */
    FUN_02d965b8(
                Method_UnityEngine_InputSystem_InputDevice_ExecuteCommand<SendHapticImpulseCommand>__
                );
                    /* catch() { ... } // from try @ 061970f8 with catch @ 06197324 */
                    /* catch() { ... } // from try @ 061971c0 with catch @ 06197328
                       catch() { ... } // from try @ 061972ec with catch @ 06197328 */
                    /* catch() { ... } // from try @ 0619709c with catch @ 0619732c */
    FUN_02d965b8(PTR_DAT_069fb990);
                    /* catch() { ... } // from try @ 06197078 with catch @ 06197330 */
                    /* catch() { ... } // from try @ 06197224 with catch @ 06197334
                       catch() { ... } // from try @ 06197280 with catch @ 06197334 */
                    /* catch() { ... } // from try @ 06197130 with catch @ 06197338
                       catch() { ... } // from try @ 061972e8 with catch @ 06197338 */
    FUN_02d965b8(Method_System_Globalization_HijriCalendar_CheckEraRange__);
    DAT_06dc6936 = 1;
  }
  lVar7 = *(long *)puVar2;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_02df485c();
                    /* try { // try from 06197354 to 0629736f has its CatchHandler @ 06197594 */
    lVar7 = *(long *)puVar2;
  }
  puVar5 = Method_UnityEngine_InputSystem_InputDevice_ExecuteCommand<SendHapticImpulseCommand>__;
  puVar4 = Method_UnityEngine_InputSystem_InputDevice_ExecuteCommand<RequestResetCommand>__;
  puVar3 = 
  Method_UnityEngine_InputSystem_InputDevice_ExecuteCommand<QuerySamplingFrequencyCommand>__;
  puVar1 = PTR_DAT_069fb990;
  lVar8 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x18);
  if (lVar8 == 0) {
LAB_061974e8:
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  if (*(int *)(lVar8 + 0x18) == 0) {
    return;
  }
  iVar9 = 0;
  while( true ) {
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      lVar7 = *(long *)puVar2;
    }
    lVar8 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x18);
    if (lVar8 == 0) goto LAB_061974e8;
    if (*(int *)(lVar8 + 0x18) <= iVar9) break;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      lVar8 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18);
      if (lVar8 == 0) goto LAB_061974e8;
    }
    lVar7 = FUN_0400ff1c(lVar8,iVar9,*(undefined8 *)puVar5);
    if (lVar7 == 0) goto LAB_061974e8;
    if (*(int *)(lVar7 + 0x30) < 1) {
      lVar8 = *(long *)puVar2;
      lVar10 = *(long *)(lVar7 + 0x28);
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        lVar8 = *(long *)puVar2;
      }
      lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 8);
      if ((lVar8 == 0) ||
         (FUN_04e23684(lVar8,*(undefined8 *)(lVar7 + 0x10),*(undefined8 *)puVar3), lVar10 == 0))
      goto LAB_061974e8;
      lVar7 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
      uVar6 = FUN_063540b8(lVar10,0);
      if (lVar7 == 0) goto LAB_061974e8;
      FUN_04d9440c(lVar7,uVar6,*(undefined8 *)puVar4);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      FUN_06355200(lVar10,0);
    }
    lVar7 = *(long *)puVar2;
    iVar9 = iVar9 + 1;
  }
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_02df485c();
    lVar8 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18);
    if (lVar8 == 0) goto LAB_061974e8;
  }
  iVar9 = *(int *)(lVar8 + 0x18);
  *(undefined4 *)(lVar8 + 0x18) = 0;
  *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
  if (iVar9 < 1) {
    return;
  }
  FUN_0550afb4(*(undefined8 *)(lVar8 + 0x10),0,iVar9,0);
  return;
}


