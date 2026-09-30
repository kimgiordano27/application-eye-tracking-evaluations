/*
FUNCTION_NAME: FUN_06071380
ENTRY_POINT: 06071380
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_10;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_5
*/


void FUN_06071380(int *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 extraout_x1;
  int iVar8;
  int *piVar9;
  long *plVar10;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  long local_90;
  int *piStack_88;
  int **local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined4 local_58;
  undefined8 local_50;
  int local_44;
  int *local_38;
  
                    /* try { // try from 060713a0 to 061713af has its CatchHandler @ 060715cc */
  local_38 = param_1;
  if ((DAT_06dc4d9a & 1) == 0) {
    FUN_02d965b8(Method_System_Data_DataExpression_Invoke__);
    FUN_02d965b8(PTR_DAT_069fe788);
                    /* try { // try from 060713c0 to 061713cf has its CatchHandler @ 060715b8 */
    FUN_02d965b8(Method_System_Runtime_Serialization_DataContract_WriteXmlValue__);
    FUN_02d965b8(Method_System_Runtime_Serialization_DataContractSerializer_Initialize__);
    FUN_02d965b8(Method_System_Runtime_Serialization_DataContractSerializer_InternalReadObject__);
                    /* try { // try from 060713e0 to 061713ef has its CatchHandler @ 060715c0 */
    FUN_02d965b8(
                Method_System_Runtime_Serialization_DataContractSerializer_InternalWriteObjectContent__
                );
    FUN_02d965b8(Method_System_Data_DataExpression__ctor__);
                    /* try { // try from 06071400 to 06171407 has its CatchHandler @ 06071594 */
    FUN_02d965b8(Method_System_Data_DataExpression_Evaluate__);
    DAT_06dc4d9a = 1;
  }
  local_44 = *param_1;
  local_50 = 0;
  local_58 = 0;
  if (local_44 != 0) {
    if (*(long *)(param_1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
                    /* try { // try from 0607142c to 0617142f has its CatchHandler @ 060715b0 */
    lVar5 = *(long *)(*(long *)(param_1 + 8) + 0xd0);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
                    /* try { // try from 06071444 to 0617144b has its CatchHandler @ 060715a4 */
    FUN_04e93a24(&local_b8,lVar5,
                 *(undefined8 *)Method_System_Runtime_Serialization_DataContract_WriteXmlValue__);
    piStack_88 = (int *)uStack_b0;
    local_90 = local_b8;
    uStack_78 = uStack_a0;
    local_80 = (int **)local_a8;
    local_70 = local_98;
    *(undefined8 *)(local_38 + 0xc) = uStack_b0;
    *(undefined8 *)(local_38 + 10) = local_b8;
    *(undefined8 *)(local_38 + 0x10) = uStack_a0;
    *(undefined8 *)(local_38 + 0xe) = local_a8;
    *(undefined8 *)(local_38 + 0x12) = local_98;
                    /* try { // try from 0607146c to 0617146f has its CatchHandler @ 060715a0 */
    LeanTween__value(local_38 + 10,0);
  }
  puVar4 = Method_System_Data_DataExpression_Invoke__;
  puVar3 = Method_System_Data_DataExpression__ctor__;
  puVar2 = Method_System_Runtime_Serialization_DataContractSerializer_InternalReadObject__;
  puVar1 = PTR_DAT_069fe788;
                    /* try { // try from 06071488 to 0617148b has its CatchHandler @ 0607159c */
  piStack_88 = &local_44;
  local_90 = 0;
  local_80 = &local_38;
                    /* try { // try from 060714ac to 061714af has its CatchHandler @ 06071598 */
  if (local_44 == 0) {
    iVar8 = 0;
    goto LAB_06071500;
  }
  do {
    uVar6 = FUN_05232904(local_38 + 10,*(undefined8 *)puVar2);
    if ((uVar6 & 1) == 0) {
      iVar8 = 0xb;
LAB_0607160c:
      if (*piStack_88 < 0) {
        FUN_05232a24(*local_80 + 10,
                     *(undefined8 *)
                      Method_System_Runtime_Serialization_DataContractSerializer_Initialize__);
      }
      piVar9 = local_38;
      if (local_90 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96858();
      }
      if ((iVar8 == 0xb) || (iVar8 == 0)) {
        *local_38 = -2;
        lVar5 = *(long *)puVar1;
        local_38[0x12] = 0;
        local_38[0x13] = 0;
        local_38[0xc] = 0;
        local_38[0xd] = 0;
        local_38[10] = 0;
        local_38[0xb] = 0;
        local_38[0x10] = 0;
        local_38[0x11] = 0;
        local_38[0xe] = 0;
        local_38[0xf] = 0;
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        FUN_05410914(piVar9 + 2,0);
      }
      return;
    }
    *(undefined8 *)(local_38 + 0x16) = *(undefined8 *)(local_38 + 0x10);
    *(undefined8 *)(local_38 + 0x14) = *(undefined8 *)(local_38 + 0xe);
    LeanTween__value(local_38 + 0x14,0);
    iVar8 = local_44;
LAB_06071500:
                    /* try { // try from 06071500 to 06171533 has its CatchHandler @ 060715a8 */
    if (iVar8 == 0) {
      local_50 = *(undefined8 *)(local_38 + 0x18);
      local_38[0x18] = 0;
      local_38[0x19] = 0;
      local_44 = -1;
      *local_38 = -1;
    }
    else {
      plVar10 = *(long **)(local_38 + 0x16);
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar5 = *plVar10;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)puVar3) {
                    /* try { // try from 06071570 to 06171573 has its CatchHandler @ 060715e0 */
                    /* try { // try from 06071574 to 06171577 has its CatchHandler @ 060715dc */
                    /* try { // try from 06071578 to 0617157b has its CatchHandler @ 060710ac */
            puVar7 = (undefined8 *)(lVar5 + (long)(*piVar9 + 1) * 0x10 + 0x138);
            goto LAB_0607157c;
          }
                    /* try { // try from 06071534 to 0617156f has its CatchHandler @ 060710ac */
          uVar6 = uVar6 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar6 != 0);
      }
      puVar7 = (undefined8 *)FUN_02dd004c(plVar10,*(long *)puVar3,1);
LAB_0607157c:
                    /* try { // try from 0607157c to 06171583 has its CatchHandler @ 060715b0 */
                    /* try { // try from 06071584 to 06171587 has its CatchHandler @ 060715a4 */
      lVar5 = (*(code *)*puVar7)(plVar10,puVar7[1]);
                    /* try { // try from 06071588 to 0617158b has its CatchHandler @ 060715a0 */
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
                    /* try { // try from 0607158c to 0617158f has its CatchHandler @ 0607159c */
                    /* try { // try from 06071590 to 06171593 has its CatchHandler @ 06071598 */
      local_50 = FUN_0555c32c(lVar5,0);
                    /* catch() { ... } // from try @ 06071400 with catch @ 06071594
                       try { // try from 06071594 to 061715ff has its CatchHandler @ 060710ac */
                    /* catch() { ... } // from try @ 060714ac with catch @ 06071598
                       catch() { ... } // from try @ 06071590 with catch @ 06071598 */
                    /* catch() { ... } // from try @ 06071488 with catch @ 0607159c
                       catch() { ... } // from try @ 0607158c with catch @ 0607159c */
                    /* catch() { ... } // from try @ 0607146c with catch @ 060715a0
                       catch() { ... } // from try @ 06071588 with catch @ 060715a0 */
      uVar6 = FUN_0540fae0(&local_50,0);
                    /* catch() { ... } // from try @ 06071444 with catch @ 060715a4
                       catch() { ... } // from try @ 06071584 with catch @ 060715a4 */
      if ((uVar6 & 1) == 0) {
                    /* catch() { ... } // from try @ 060713e0 with catch @ 060715c0 */
                    /* catch() { ... } // from try @ 06071350 with catch @ 060715c4 */
        local_44 = 0;
                    /* catch() { ... } // from try @ 060712a8 with catch @ 060715c8 */
        *local_38 = 0;
                    /* catch() { ... } // from try @ 060713a0 with catch @ 060715cc */
                    /* catch() { ... } // from try @ 060712f4 with catch @ 060715d0 */
        *(undefined8 *)(local_38 + 0x18) = local_50;
                    /* catch() { ... } // from try @ 06071370 with catch @ 060715d4 */
                    /* catch() { ... } // from try @ 06071278 with catch @ 060715d8 */
        LeanTween__value(local_38 + 0x18,0);
        piVar9 = local_38;
                    /* catch() { ... } // from try @ 06071574 with catch @ 060715dc */
        lVar5 = *(long *)puVar1;
                    /* catch() { ... } // from try @ 06071570 with catch @ 060715e0 */
                    /* catch() { ... } // from try @ 06071260 with catch @ 060715e4 */
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_02df485c(lVar5,extraout_x1,local_38);
        }
                    /* try { // try from 06071600 to 06171603 has its CatchHandler @ 0607162c */
                    /* try { // try from 06071604 to 0617162f has its CatchHandler @ 060710ac */
        Unity_Netcode_FastBufferReader__ReadUnmanaged<Ray2D>
                  (piVar9 + 2,&local_50,local_38,*(undefined8 *)puVar4);
        iVar8 = 8;
        goto LAB_0607160c;
      }
    }
                    /* catch() { ... } // from try @ 06071500 with catch @ 060715a8 */
                    /* catch() { ... } // from try @ 060714b0 with catch @ 060715ac */
                    /* catch() { ... } // from try @ 0607142c with catch @ 060715b0
                       catch() { ... } // from try @ 0607157c with catch @ 060715b0 */
    FUN_0540fba8(&local_50,0);
                    /* catch() { ... } // from try @ 06071298 with catch @ 060715b4 */
                    /* catch() { ... } // from try @ 060713c0 with catch @ 060715b8 */
    local_38[0x14] = 0;
    local_38[0x15] = 0;
    local_38[0x16] = 0;
    local_38[0x17] = 0;
                    /* catch() { ... } // from try @ 06071320 with catch @ 060715bc */
  } while( true );
}


