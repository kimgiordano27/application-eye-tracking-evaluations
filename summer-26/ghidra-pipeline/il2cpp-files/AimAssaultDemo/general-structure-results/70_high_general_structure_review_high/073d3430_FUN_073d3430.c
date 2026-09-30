/*
FUNCTION_NAME: FUN_073d3430
ENTRY_POINT: 073d3430
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_6;telemetry_or_network_hits_5;frame_or_lifecycle_behavior
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_073d3430(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  
  puVar4 = PauseMenu_TypeInfo;
  puVar2 = SteamAudio_PathingVisualizationCallback_TypeInfo;
  puVar3 = System_IO_PathTooLongException_TypeInfo;
  if ((DAT_08269702 & 1) == 0) {
    FUN_0373b518(CustomWebSocketSharp_PayloadData_TypeInfo);
    FUN_0373b518(PauseMenu_TypeInfo);
    FUN_0373b518(SteamAudio_PathingVisualizationCallback_TypeInfo);
    FUN_0373b518(System_IO_PathTooLongException_TypeInfo);
    FUN_0373b518(StrikerLink_ThirdParty_WebSocketSharp_PayloadData_TypeInfo);
    DAT_08269702 = 1;
  }
  uVar1 = _DAT_01588440;
  puVar7 = *(undefined8 **)(*(long *)puVar3 + 0xb8);
  puVar7[1] = _UNK_01588448;
  *puVar7 = uVar1;
  uVar1 = _DAT_01587220;
  lVar8 = *(long *)puVar3;
  lVar9 = *(long *)(lVar8 + 0xb8);
  *(undefined8 *)(lVar9 + 0x18) = _UNK_01587228;
  *(undefined8 *)(lVar9 + 0x10) = uVar1;
  uVar1 = _DAT_015898c0;
  lVar8 = *(long *)(lVar8 + 0xb8);
  *(undefined8 *)(lVar8 + 0x28) = _UNK_015898c8;
  *(undefined8 *)(lVar8 + 0x20) = uVar1;
  lVar8 = thunk_FUN_037788cc(*(undefined8 *)puVar2);
  FUN_05c05788(lVar8,*(undefined8 *)puVar4);
  if (DAT_082528bc == '\0') {
    FUN_0373b518(PTR_DAT_07d863f0);
    DAT_082528bc = '\x01';
  }
  puVar2 = PTR_DAT_07d863f0;
  lVar9 = *(long *)(*(long *)PTR_DAT_07d863f0 + 0xb8);
  uVar10 = *(undefined4 *)(lVar9 + 0x18);
  uVar11 = *(undefined4 *)(lVar9 + 0x1c);
  uVar12 = *(undefined4 *)(lVar9 + 0x20);
                    /* try { // try from 073d3548 to 074d356b has its CatchHandler @ 073d3728 */
  if (DAT_082528be == '\0') {
    FUN_0373b518(PTR_DAT_07d863f0);
    DAT_082528be = '\x01';
    lVar9 = *(long *)(*(long *)puVar2 + 0xb8);
  }
  puVar4 = StrikerLink_ThirdParty_WebSocketSharp_PayloadData_TypeInfo;
                    /* try { // try from 073d356c to 074d3577 has its CatchHandler @ 073d3724 */
  uVar13 = *(undefined4 *)(lVar9 + 0x48);
  uVar14 = *(undefined4 *)(lVar9 + 0x4c);
  uVar15 = *(undefined4 *)(lVar9 + 0x50);
  if (DAT_082528bd == '\0') {
                    /* try { // try from 073d3580 to 074d35ab has its CatchHandler @ 073d372c */
    FUN_0373b518(puVar2);
    DAT_082528bd = '\x01';
    lVar9 = *(long *)(*(long *)puVar2 + 0xb8);
  }
                    /* try { // try from 073d35ac to 074d3743 has its CatchHandler @ 073d3268 */
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  System_Linq_Enumerable_WhereSelectEnumerableIterator<int,_Vector3>__Dispose
            (uVar13,uVar14,uVar15,*(undefined4 *)(lVar9 + 0x3c),*(undefined4 *)(lVar9 + 0x40),
             *(undefined4 *)(lVar9 + 0x44),&local_b8,*(undefined8 *)puVar4);
  puVar5 = CustomWebSocketSharp_PayloadData_TypeInfo;
  if (lVar8 != 0) {
    uStack_98 = uStack_b0;
    local_a0 = local_b8;
    local_90 = local_a8;
    FUN_05c06638(uVar10,uVar11,uVar12,lVar8,&local_a0,
                 *(undefined8 *)CustomWebSocketSharp_PayloadData_TypeInfo);
    if (DAT_082528be == '\0') {
      FUN_0373b518(PTR_DAT_07d863f0);
      DAT_082528be = '\x01';
    }
    lVar9 = *(long *)(*(long *)puVar2 + 0xb8);
    uVar10 = *(undefined4 *)(lVar9 + 0x48);
    uVar11 = *(undefined4 *)(lVar9 + 0x4c);
    uVar12 = *(undefined4 *)(lVar9 + 0x50);
    if (DAT_082528bd == '\0') {
      FUN_0373b518(puVar2);
      DAT_082528bd = '\x01';
      lVar9 = *(long *)(*(long *)puVar2 + 0xb8);
    }
    uVar13 = *(undefined4 *)(lVar9 + 0x3c);
    uVar14 = *(undefined4 *)(lVar9 + 0x40);
    uVar15 = *(undefined4 *)(lVar9 + 0x44);
    if (DAT_082528bc == '\0') {
      FUN_0373b518(puVar2);
      DAT_082528bc = '\x01';
      lVar9 = *(long *)(*(long *)puVar2 + 0xb8);
    }
    local_d0 = 0;
    uStack_c8 = 0;
    local_c0 = 0;
    System_Linq_Enumerable_WhereSelectEnumerableIterator<int,_Vector3>__Dispose
              (uVar13,uVar14,uVar15,*(undefined4 *)(lVar9 + 0x18),*(undefined4 *)(lVar9 + 0x1c),
               *(undefined4 *)(lVar9 + 0x20),&local_d0,*(undefined8 *)puVar4);
    uStack_98 = uStack_c8;
    local_a0 = local_d0;
    local_90 = local_c0;
    FUN_05c06638(uVar10,uVar11,uVar12,lVar8,&local_a0,*(undefined8 *)puVar5);
    if (DAT_082528bd == '\0') {
      FUN_0373b518(PTR_DAT_07d863f0);
      DAT_082528bd = '\x01';
    }
    lVar9 = *(long *)(*(long *)puVar2 + 0xb8);
    uVar10 = *(undefined4 *)(lVar9 + 0x3c);
    uVar11 = *(undefined4 *)(lVar9 + 0x40);
    uVar12 = *(undefined4 *)(lVar9 + 0x44);
    if (DAT_082528bc == '\0') {
      FUN_0373b518(puVar2);
      DAT_082528bc = '\x01';
      lVar9 = *(long *)(*(long *)puVar2 + 0xb8);
    }
    uVar13 = *(undefined4 *)(lVar9 + 0x18);
    uVar14 = *(undefined4 *)(lVar9 + 0x1c);
    uVar15 = *(undefined4 *)(lVar9 + 0x20);
    if (DAT_082528be == '\0') {
      FUN_0373b518(puVar2);
                    /* catch(type#1 @ 078dda18) { ... } // from try @ 073d356c with catch @ 073d3724
                        */
                    /* catch(type#1 @ 078dda18) { ... } // from try @ 073d3548 with catch @ 073d3728
                        */
                    /* catch(type#1 @ 078dda18) { ... } // from try @ 073d3580 with catch @ 073d372c
                        */
      DAT_082528be = '\x01';
      lVar9 = *(long *)(*(long *)puVar2 + 0xb8);
    }
                    /* try { // try from 073d3744 to 074d375b has its CatchHandler @ 073d3804 */
    local_e8 = 0;
    uStack_e0 = 0;
    local_d8 = 0;
    System_Linq_Enumerable_WhereSelectEnumerableIterator<int,_Vector3>__Dispose
              (uVar13,uVar14,uVar15,*(undefined4 *)(lVar9 + 0x48),*(undefined4 *)(lVar9 + 0x4c),
               *(undefined4 *)(lVar9 + 0x50),&local_e8,*(undefined8 *)puVar4);
                    /* try { // try from 073d375c to 074d37f3 has its CatchHandler @ 073d3268 */
    uStack_98 = uStack_e0;
    local_a0 = local_e8;
    local_90 = local_d8;
    FUN_05c06638(uVar10,uVar11,uVar12,lVar8,&local_a0,*(undefined8 *)puVar5);
    plVar6 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x30);
    *plVar6 = lVar8;
    thunk_FUN_037aeb94(plVar6,lVar8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


