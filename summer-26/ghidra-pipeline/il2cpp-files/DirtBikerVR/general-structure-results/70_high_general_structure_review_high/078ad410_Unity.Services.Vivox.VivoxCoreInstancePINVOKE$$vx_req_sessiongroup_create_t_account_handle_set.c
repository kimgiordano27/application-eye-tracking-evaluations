/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_sessiongroup_create_t_account_handle_set
ENTRY_POINT: 078ad410
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_2;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_6
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_sessiongroup_create_t_account_handle_set
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *plVar7;
  undefined8 *puVar8;
  long unaff_x29;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  
                    /* try { // try from 078ad420 to 079ad427 has its CatchHandler @ 078ad788 */
  if ((*(byte *)(unaff_x29 + 0x8f6) & 1) == 0) {
                    /* try { // try from 078ad444 to 079ad44f has its CatchHandler @ 078ad778 */
    FUN_03a8a718(PTR_DAT_0848aa88);
    FUN_03a8a718(System_Collections_Generic_List<Identity>_TypeInfo);
    FUN_03a8a718(System_Action<TimeSpan>_TypeInfo);
                    /* try { // try from 078ad468 to 079ad46f has its CatchHandler @ 078ad7cc */
    FUN_03a8a718(System_Collections_Generic_List<NativePassData>_TypeInfo);
    FUN_03a8a718(System_Collections_Generic_List<NetSyncSession>_TypeInfo);
    *(undefined1 *)(unaff_x29 + 0x8f6) = 1;
  }
  FUN_0679343c(param_1,0);
                    /* try { // try from 078ad490 to 079ad497 has its CatchHandler @ 078ad798 */
  *(undefined8 *)(param_1 + 0x40) = param_2;
  thunk_FUN_03afed3c((undefined8 *)(param_1 + 0x40),param_2);
  *(undefined8 *)(param_1 + 0x58) = param_3;
  thunk_FUN_03afed3c((undefined8 *)(param_1 + 0x58),param_3);
  *(undefined8 *)(param_1 + 0x70) = param_4;
  thunk_FUN_03afed3c((undefined8 *)(param_1 + 0x70),param_4);
  *(undefined8 *)(param_1 + 0x78) = param_5;
  thunk_FUN_03afed3c((undefined8 *)(param_1 + 0x78),param_5);
  *(undefined8 *)(param_1 + 0x80) = param_6;
  thunk_FUN_03afed3c((undefined8 *)(param_1 + 0x80),param_6);
  puVar8 = (undefined8 *)(param_1 + 0x88);
  *puVar8 = param_7;
  thunk_FUN_03afed3c(puVar8,param_7);
  *(undefined8 *)(param_1 + 0x90) = param_8;
  thunk_FUN_03afed3c((undefined8 *)(param_1 + 0x90),param_8);
  *(undefined8 *)(param_1 + 0x98) = in_stack_00000060;
  thunk_FUN_03afed3c((undefined8 *)(param_1 + 0x98),in_stack_00000060);
  *(undefined8 *)(param_1 + 0xa0) = in_stack_00000068;
  thunk_FUN_03afed3c((undefined8 *)(param_1 + 0xa0),in_stack_00000068);
  puVar1 = PTR_DAT_0848aa88;
  plVar7 = (long *)*puVar8;
  uVar3 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_0848aa88);
  FUN_05e38d24(uVar3,param_1,*(undefined8 *)System_Collections_Generic_List<NetSyncSession>_TypeInfo
               ,0);
  puVar2 = System_Collections_Generic_List<NativePassData>_TypeInfo;
  if (plVar7 != (long *)0x0) {
    lVar4 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)System_Action<TimeSpan>_TypeInfo) {
          puVar8 = (undefined8 *)(lVar4 + (long)(*piVar6 + 1) * 0x10 + 0x138);
          goto LAB_078ad5b4;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar8 = (undefined8 *)FUN_03ac43c4(plVar7,*(long *)System_Action<TimeSpan>_TypeInfo,1);
LAB_078ad5b4:
    (*(code *)*puVar8)(plVar7,uVar3,puVar8[1]);
    plVar7 = *(long **)(param_1 + 0x98);
    uVar3 = thunk_FUN_03ac74bc(*(undefined8 *)puVar1);
    FUN_05e38d24(uVar3,param_1,*(undefined8 *)puVar2,0);
    if (plVar7 != (long *)0x0) {
      lVar4 = *plVar7;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)System_Collections_Generic_List<Identity>_TypeInfo)
          {
            puVar8 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
            goto 
            Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_sessiongroup_create_t_loop_mode_duration_seconds_set
            ;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar8 = (undefined8 *)
               FUN_03ac43c4(plVar7,*(long *)System_Collections_Generic_List<Identity>_TypeInfo,0);

      Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_sessiongroup_create_t_loop_mode_duration_seconds_set
      :
      (*(code *)*puVar8)(plVar7,uVar3,puVar8[1]);
      FUN_078ad680(param_1,1);
      FUN_078ad708(param_1,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


