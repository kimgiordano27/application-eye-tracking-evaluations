/*
FUNCTION_NAME: Unity.Services.Vivox.vx_evt_participant_updated_t$$set_has_unavailable_render_device
ENTRY_POINT: 0791fac8
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_2;ray_or_cast_sink_hits_1;telemetry_or_network_hits_1;frame_or_lifecycle_behavior
*/


void Unity_Services_Vivox_vx_evt_participant_updated_t__set_has_unavailable_render_device(void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  undefined4 *unaff_x19;
  long *unaff_x21;
  long *unaff_x26;
  undefined8 in_stack_00000018;
  
  FUN_07916084();
  if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0(10);
  }
                    /* try { // try from 0791fae8 to 07a1faeb has its CatchHandler @ 0791faf0 */
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 0791fa48 with catch @ 0791faec
                       try { // try from 0791faec to 07a1fb0f has its CatchHandler @ 0791f9b8 */
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 0791fae8 with catch @ 0791faf0
                        */
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 0791fa24 with catch @ 0791faf4
                        */
  lVar6 = *unaff_x21;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
                    /* try { // try from 0791fb10 to 07a1fb13 has its CatchHandler @ 0791fb20 */
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
                    /* catch() { ... } // from try @ 0791fb10 with catch @ 0791fb20 */
      if (*(long *)(piVar8 + -2) == *(long *)Cinemachine_CinemachineOrbitalTransposer___TypeInfo) {
        puVar2 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_0791fb4c;
      }
                    /* try { // try from 0791fb24 to 07a1fb2b has its CatchHandler @ 0791fb34 */
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
                    /* try { // try from 0791fb2c to 07a1fb37 has its CatchHandler @ 0791f9b8 */
    } while (uVar7 != 0);
  }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0791fb24 with catch @ 0791fb34
                        */
  puVar2 = (undefined8 *)FUN_03ac43c4();
LAB_0791fb4c:
  lVar6 = (*(code *)*puVar2)();
  if (lVar6 != 0) {
    in_stack_00000018 =
         FUN_058b71ec(lVar6,*(undefined8 *)
                             Unity_Multiplayer_Tools_NetStats_EventMetric<ServerLogEvent>___TypeInfo
                     );
    uVar7 = FUN_0587c6c4(&stack0x00000018,
                         *(undefined8 *)
                          System_Collections_Generic_Dictionary<string,_StyleComplexSelector>___TypeInfo
                        );
    if ((uVar7 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined8 *)(unaff_x19 + 0x10) = in_stack_00000018;
      thunk_FUN_03afed3c(unaff_x19 + 0x10,0);
      if (*(int *)(*unaff_x26 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_03fe5f28(unaff_x19 + 2,&stack0x00000018);
    }
    else {
      uVar3 = FUN_0587c704(&stack0x00000018,
                           *(undefined8 *)System_Xml_Linq_XHashtable<XName>_TypeInfo);
      uVar4 = FUN_0471a034(uVar3,*(undefined8 *)(unaff_x19 + 0xe),
                           *(undefined8 *)Cinemachine_CinemachineVirtualCameraBase___TypeInfo);
      uVar5 = thunk_FUN_03ac74bc(*(undefined8 *)UnityEngine_Color___TypeInfo);
      FUN_05750b0c(uVar5,uVar3,uVar4,*(undefined8 *)UnityEngine_Collider___TypeInfo);
      puVar1 = Gley_UrbanSystem_Internal_CellData___TypeInfo;
      *unaff_x19 = 0xfffffffe;
      *(undefined8 *)(unaff_x19 + 0xe) = 0;
      thunk_FUN_03afed3c(unaff_x19 + 0xe,0);
      if (*(int *)(*unaff_x26 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_05338ae8(unaff_x19 + 2,uVar5,*(undefined8 *)puVar1);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


