/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_sessiongroup_added_t_sessiongroup_handle_get
ENTRY_POINT: 078987c8
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_5;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_sessiongroup_added_t_sessiongroup_handle_get
               (int *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 in_stack_00000018;
  
                    /* try { // try from 078987d8 to 079987db has its CatchHandler @ 07898924 */
  if ((DAT_08987823 & 1) == 0) {
    FUN_03a8a718(System_Collections_Generic_List<ERRoadType>_TypeInfo);
                    /* try { // try from 078987ec to 079987ef has its CatchHandler @ 078988f0 */
    FUN_03a8a718(System_Collections_Generic_List<ERBlendVecs>_TypeInfo);
                    /* try { // try from 07898800 to 07998803 has its CatchHandler @ 078988e8 */
    FUN_03a8a718(System_Collections_Generic_List<DecalCulledChunk>_TypeInfo);
    FUN_03a8a718(System_Collections_Generic_List<ERCell>_TypeInfo);
                    /* try { // try from 07898814 to 07998817 has its CatchHandler @ 07898920 */
    FUN_03a8a718(System_Collections_Generic_List<ERChildObject>_TypeInfo);
    FUN_03a8a718(System_Collections_Generic_List<ERConnectionVecs>_TypeInfo);
                    /* try { // try from 07898828 to 0799882b has its CatchHandler @ 0789891c */
    DAT_08987823 = 1;
  }
  puVar2 = System_Collections_Generic_List<DecalCulledChunk>_TypeInfo;
                    /* try { // try from 0789883c to 0799883f has its CatchHandler @ 078988dc */
  in_stack_00000018 = 0;
  if (*param_1 == 0) {
    in_stack_00000018 = *(undefined8 *)(param_1 + 0x16);
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    *param_1 = -1;
  }
  else {
    if (*(long *)(param_1 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
                    /* try { // try from 07898850 to 07998853 has its CatchHandler @ 078988d4 */
    lVar6 = *(long *)(param_1 + 8);
    uVar4 = System_Globalization_TaiwanCalendar__GetMonthsInYear(*(long *)(param_1 + 10),0);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0(uVar4,uVar4);
    }
    lVar6 = FUN_07896078(lVar6,uVar4,*(undefined8 *)(param_1 + 0xc),*(undefined8 *)(param_1 + 0xe),
                         *(undefined8 *)(param_1 + 0x10),param_1[0x12],
                         *(undefined8 *)(param_1 + 0x14));
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    in_stack_00000018 =
         FUN_058b71ec(lVar6,*(undefined8 *)
                             System_Collections_Generic_List<ERConnectionVecs>_TypeInfo);
    uVar5 = FUN_0587c6c4(&stack0x00000018,
                         *(undefined8 *)System_Collections_Generic_List<ERChildObject>_TypeInfo);
    if ((uVar5 & 1) == 0) {
      *param_1 = 0;
      *(undefined8 *)(param_1 + 0x16) = in_stack_00000018;
      thunk_FUN_03afed3c(param_1 + 0x16,0);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_03fe4178(param_1 + 2,&stack0x00000018,param_1,
                   *(undefined8 *)System_Collections_Generic_List<ERRoadType>_TypeInfo);
      return;
    }
  }
  uVar4 = FUN_0587c704(&stack0x00000018,
                       *(undefined8 *)System_Collections_Generic_List<ERCell>_TypeInfo);
  puVar3 = System_Collections_Generic_List<ERBlendVecs>_TypeInfo;
  iVar1 = *(int *)(*(long *)puVar2 + 0xe4);
  *param_1 = -2;
  if (iVar1 == 0) {
    thunk_FUN_03ae8be4();
  }
  FUN_05338ae8(param_1 + 2,uVar4,*(undefined8 *)puVar3);
  return;
}


