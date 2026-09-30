/*
FUNCTION_NAME: Unity.Services.Vivox.vx_evt_participant_updated_t$$set_is_text_muted_for_me
ENTRY_POINT: 0791f318
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_7;ray_or_cast_sink_hits_1;telemetry_or_network_hits_1;frame_or_lifecycle_behavior
*/


void Unity_Services_Vivox_vx_evt_participant_updated_t__set_is_text_muted_for_me
               (undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined4 uVar8;
  ulong uVar9;
  int *piVar10;
  undefined4 *unaff_x19;
  long unaff_x20;
  long *plVar11;
  undefined8 uVar12;
  long *unaff_x26;
  undefined8 in_stack_00000018;
  
  lVar2 = FUN_078f5604(param_1,param_2,0);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  if (*(long *)(unaff_x19 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  plVar11 = *(long **)(unaff_x20 + 0x10);
  uVar3 = FUN_065c0764(*(undefined8 *)(lVar2 + 0x10),
                       *(undefined8 *)(*(long *)(unaff_x19 + 0xc) + 0x28),0);
  lVar4 = *(long *)(unaff_x19 + 0xc);
                    /* try { // try from 0791f34c to 07a1f353 has its CatchHandler @ 0791f400 */
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  if (*(long *)(lVar4 + 0x20) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_07910fa0();
                    /* try { // try from 0791f35c to 07a1f363 has its CatchHandler @ 0791f3f8 */
    lVar4 = *(long *)(unaff_x19 + 0xc);
                    /* try { // try from 0791f364 to 07a1f373 has its CatchHandler @ 0791f3fc */
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
  }
  uVar6 = FUN_079157f4(lVar4,*(undefined8 *)(unaff_x20 + 0x18),lVar2);
  uVar8 = 10;
  if ((*(ulong *)(lVar2 + 0x18) & 0xff) != 0) {
    uVar8 = (undefined4)(*(ulong *)(lVar2 + 0x18) >> 0x20);
  }
  if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0(10);
  }
  lVar2 = *plVar11;
  uVar9 = (ulong)*(ushort *)(lVar2 + 0x12e);
  uVar12 = *(undefined8 *)PTR_DAT_084c82e0;
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *(long *)Cinemachine_CinemachineOrbitalTransposer___TypeInfo) {
        puVar7 = (undefined8 *)(lVar2 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_0791f410;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar7 = (undefined8 *)
           FUN_03ac43c4(plVar11,*(long *)Cinemachine_CinemachineOrbitalTransposer___TypeInfo,0);
LAB_0791f410:
  lVar2 = (*(code *)*puVar7)(plVar11,uVar12,uVar3,uVar5,uVar6,uVar8,puVar7[1]);
  if (lVar2 != 0) {
    in_stack_00000018 =
         FUN_058b71ec(lVar2,*(undefined8 *)
                             Unity_Multiplayer_Tools_NetStats_EventMetric<ServerLogEvent>___TypeInfo
                     );
    uVar9 = FUN_0587c6c4(&stack0x00000018,
                         *(undefined8 *)
                          System_Collections_Generic_Dictionary<string,_StyleComplexSelector>___TypeInfo
                        );
    if ((uVar9 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined8 *)(unaff_x19 + 0x10) = in_stack_00000018;
      thunk_FUN_03afed3c(unaff_x19 + 0x10,0);
      if (*(int *)(*unaff_x26 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_03fe5ce0(unaff_x19 + 2,&stack0x00000018);
    }
    else {
      uVar3 = FUN_0587c704(&stack0x00000018,
                           *(undefined8 *)System_Xml_Linq_XHashtable<XName>_TypeInfo);
      uVar5 = FUN_0471a034(uVar3,*(undefined8 *)(unaff_x19 + 0xe),
                           *(undefined8 *)Cinemachine_CinemachineVirtualCameraBase___TypeInfo);
      uVar6 = thunk_FUN_03ac74bc(*(undefined8 *)UnityEngine_Color___TypeInfo);
      FUN_05750b0c(uVar6,uVar3,uVar5,*(undefined8 *)UnityEngine_Collider___TypeInfo);
      puVar1 = Gley_UrbanSystem_Internal_CellData___TypeInfo;
      *unaff_x19 = 0xfffffffe;
      *(undefined8 *)(unaff_x19 + 0xe) = 0;
      thunk_FUN_03afed3c(unaff_x19 + 0xe,0);
      if (*(int *)(*unaff_x26 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_05338ae8(unaff_x19 + 2,uVar6,*(undefined8 *)puVar1);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


