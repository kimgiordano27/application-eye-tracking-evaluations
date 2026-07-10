/*
FUNCTION_NAME: System.Threading.SemaphoreSlim$$Wait
ENTRY_POINT: 030cc7f8
PROGRAM: FruitBladeVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_14;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_1;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x030ccbfc) */

uint System_Threading_SemaphoreSlim__Wait(long param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  undefined4 uVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  int iVar13;
  undefined8 uVar14;
  long local_a0;
  char *pcStack_98;
  long *local_90;
  long *local_88;
  undefined4 local_78;
  undefined8 local_70;
  undefined4 local_64;
  long local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  char local_44 [4];
  long local_40;
  undefined8 uStack_38;
  
  local_40 = param_1;
  uStack_38 = param_3;
  if ((DAT_03ef41c6 & 1) == 0) {
    FUN_01c5c92c(PTR_System_Threading_CancellationToken_TypeInfo_03cb7438);
    FUN_01c5c92c(PTR_System_Threading_SemaphoreSlim_TypeInfo_03cc01b8);
    FUN_01c5c92c(PTR_System_Threading_SpinWait_TypeInfo_03cb7ef8);
    FUN_01c5c92c(PTR_Method_System_Runtime_CompilerServices_TaskAwaiter<bool>_GetResult___03cc2cc0);
    FUN_01c5c92c(PTR_Method_System_Threading_Tasks_Task<bool>_GetAwaiter___03cc2cc8);
    DAT_03ef41c6 = 1;
  }
                    /* try { // try from 030cc868 to 031cc99b has its CatchHandler @ 030cc868
                       catch() { ... } // from try @ 030cc868 with catch @ 030cc868
                       catch() { ... } // from try @ 030ccab8 with catch @ 030cc868
                       catch() { ... } // from try @ 030ccb60 with catch @ 030cc868
                       catch() { ... } // from try @ 030ccbb0 with catch @ 030cc868 */
  local_44[0] = '\0';
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  local_64 = 0;
  local_70 = 0;
  local_78 = 0;
  System_Threading_SemaphoreSlim__CheckDispose(param_1);
  puVar2 = PTR_System_Threading_CancellationToken_TypeInfo_03cb7438;
  if (param_2 < -1) {
                    /* catch(type#1 @ 03a66278) { ... } // from try @ 030ccb58 with catch @ 030ccb68
                        */
                    /* catch(type#1 @ 03a66278) { ... } // from try @ 030ccb54 with catch @ 030ccb6c
                        */
                    /* catch(type#1 @ 03a66278) { ... } // from try @ 030cca00 with catch @ 030ccb70
                        */
                    /* catch(type#1 @ 03a66278) { ... } // from try @ 030cc99c with catch @ 030ccb74
                        */
    local_a0 = CONCAT44(local_a0._4_4_,param_2);
                    /* catch(type#1 @ 03a66278) { ... } // from try @ 030ccb48 with catch @ 030ccb78
                       catch(type#1 @ 03a66278) { ... } // from try @ 030ccb5c with catch @ 030ccb78
                        */
                    /* catch(type#1 @ 03a66278) { ... } // from try @ 030cca30 with catch @ 030ccb7c
                        */
    uVar14 = thunk_FUN_01c8f880(*(undefined8 *)(PTR_DAT_03cb5cf0 + 0x48),&local_a0);
    thunk_FUN_01cb9718(PTR_System_Threading_SemaphoreSlim_TypeInfo_03cc01b8);
    FUN_01985574();
                    /* try { // try from 030ccb98 to 031ccb9b has its CatchHandler @ 030ccba4 */
    thunk_FUN_01cb9718(PTR_StringLiteral_5577_03cc2cd0);
    uVar9 = System_Threading_SemaphoreSlim__GetResourceString();
                    /* catch() { ... } // from try @ 030ccb98 with catch @ 030ccba4 */
                    /* try { // try from 030ccba8 to 031ccbaf has its CatchHandler @ 030ccbb8 */
                    /* try { // try from 030ccbb0 to 031ccbbb has its CatchHandler @ 030cc868 */
    thunk_FUN_01cb9718(PTR_System_ArgumentOutOfRangeException_TypeInfo_03cb6330);
    uVar10 = thunk_FUN_01c8fc48();
                    /* catch(type#2 @ 00000000) { ... } // from try @ 030ccba8 with catch @ 030ccbb8
                        */
    uVar11 = thunk_FUN_01cb9718(PTR_StringLiteral_9930_03cc2cd8);
    System_ArgumentOutOfRangeException___ctor(uVar10,uVar11,uVar14,uVar9,0);
    uVar14 = thunk_FUN_01cb9718(PTR_Method_System_Threading_SemaphoreSlim_Wait___03cc2ce0);
                    /* WARNING: Subroutine does not return */
    FUN_01c5ca98(uVar10,uVar14);
  }
  if (*(int *)(*(long *)PTR_System_Threading_CancellationToken_TypeInfo_03cb7438 + 0xe4) == 0) {
    thunk_FUN_01cb0d4c();
  }
  System_Threading_CancellationToken__ThrowIfCancellationRequested(&uStack_38);
  if (param_2 == 0) {
    iVar13 = *(int *)(local_40 + 0x10);
    thunk_FUN_01c6a2b8();
    uVar5 = 0;
    if (iVar13 != 0) goto LAB_030cc8e8;
  }
  else {
    if (param_2 < 1) {
      uVar5 = 0;
    }
    else {
      uVar5 = System_Environment__get_TickCount(0);
    }
LAB_030cc8e8:
    puVar3 = PTR_System_Threading_SemaphoreSlim_TypeInfo_03cc01b8;
    local_44[0] = '\0';
    lVar7 = *(long *)PTR_System_Threading_SemaphoreSlim_TypeInfo_03cc01b8;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_01cb0d4c();
      lVar7 = *(long *)puVar3;
    }
    uVar14 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x10);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_01cb0d4c(*(long *)puVar2);
    }
    puVar2 = PTR_System_Threading_SpinWait_TypeInfo_03cb7ef8;
    System_Threading_CancellationToken__InternalRegisterWithoutEC
              (&local_a0,&uStack_38,uVar14,local_40);
    local_60 = local_a0;
    local_88 = &local_60;
    local_64 = 0;
    local_50 = local_90;
    local_a0 = 0;
    local_90 = &local_40;
    uStack_58 = pcStack_98;
    pcStack_98 = local_44;
    while (iVar13 = *(int *)(local_40 + 0x10), thunk_FUN_01c6a2b8(), iVar13 == 0) {
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_01cb0d4c();
      }
      uVar8 = System_Threading_SpinWait__get_NextSpinWillYield(&local_64);
      if ((uVar8 & 1) != 0) break;
                    /* try { // try from 030cc99c to 031cc9c3 has its CatchHandler @ 030ccb74 */
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_01cb0d4c();
      }
      System_Threading_SpinWait__SpinOnce(&local_64);
    }
    System_Threading_Monitor__Enter(*(undefined8 *)(local_40 + 0x20),local_44);
    if (local_44[0] != '\0') {
      iVar13 = *(int *)(local_40 + 0x18);
      thunk_FUN_01c6a2b8();
      thunk_FUN_01c6a2b8();
      *(int *)(local_40 + 0x18) = iVar13 + 1;
    }
    if (*(long *)(local_40 + 0x30) == 0) {
      iVar13 = *(int *)(local_40 + 0x10);
      thunk_FUN_01c6a2b8();
      if (iVar13 != 0) {
        uVar6 = 0;
LAB_030cca3c:
        iVar13 = *(int *)(local_40 + 0x10);
        thunk_FUN_01c6a2b8();
        if (0 < iVar13) {
          iVar13 = *(int *)(local_40 + 0x10);
          thunk_FUN_01c6a2b8();
          thunk_FUN_01c6a2b8();
          uVar6 = 1;
          *(int *)(local_40 + 0x10) = iVar13 + -1;
        }
        lVar12 = *(long *)(local_40 + 0x28);
        thunk_FUN_01c6a2b8();
        lVar7 = 0;
        if (lVar12 != 0) {
          iVar13 = *(int *)(local_40 + 0x10);
          thunk_FUN_01c6a2b8();
          if (iVar13 == 0) {
            lVar7 = *(long *)(local_40 + 0x28);
            thunk_FUN_01c6a2b8();
            if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01c5cbd4();
            }
            System_Threading_EventWaitHandle__Reset(lVar7);
          }
          lVar7 = 0;
        }
        goto LAB_030ccab4;
      }
      if (param_2 != 0) {
                    /* try { // try from 030cca30 to 031ccab7 has its CatchHandler @ 030ccb7c */
        uVar6 = System_Threading_SemaphoreSlim__WaitUntilCountOrTimeout
                          (local_40,param_2,uVar5,param_3);
        goto LAB_030cca3c;
      }
                    /* try { // try from 030ccb5c to 031ccb5f has its CatchHandler @ 030ccb78 */
      lVar7 = 0;
                    /* try { // try from 030ccb60 to 031ccb97 has its CatchHandler @ 030cc868 */
      iVar13 = 0xf;
      uVar6 = 0;
    }
    else {
      lVar7 = System_Threading_SemaphoreSlim__WaitAsync(local_40,param_2,param_3);
      uVar6 = 0;
                    /* try { // try from 030cca00 to 031cca27 has its CatchHandler @ 030ccb70 */
LAB_030ccab4:
      iVar13 = 0xc;
    }
                    /* try { // try from 030ccab8 to 031ccb47 has its CatchHandler @ 030cc868 */
    plVar4 = local_90;
    if (*pcStack_98 != '\0') {
      iVar1 = *(int *)(*local_90 + 0x18);
      thunk_FUN_01c6a2b8();
      thunk_FUN_01c6a2b8();
      lVar12 = *plVar4;
      *(int *)(lVar12 + 0x18) = iVar1 + -1;
      FUN_01c69dc0(*(undefined8 *)(lVar12 + 0x20));
    }
    System_Threading_CancellationTokenRegistration__Dispose(local_88);
    if (local_a0 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5cbcc();
    }
    if ((iVar13 == 0xc) || (iVar13 == 0)) {
      if (lVar7 != 0) {
        local_70 = System_Threading_Tasks_Task<bool>__GetAwaiter
                             (lVar7,*(undefined8 *)
                                     PTR_Method_System_Threading_Tasks_Task<bool>_GetAwaiter___03cc2cc8
                             );
        uVar6 = System_Runtime_CompilerServices_TaskAwaiter<bool>__GetResult
                          (&local_70,
                           *(undefined8 *)
                            PTR_Method_System_Runtime_CompilerServices_TaskAwaiter<bool>_GetResult___03cc2cc0
                          );
      }
      goto LAB_030ccb44;
    }
  }
  uVar6 = 0;
LAB_030ccb44:
                    /* try { // try from 030ccb48 to 031ccb53 has its CatchHandler @ 030ccb78 */
                    /* try { // try from 030ccb54 to 031ccb57 has its CatchHandler @ 030ccb6c */
                    /* try { // try from 030ccb58 to 031ccb5b has its CatchHandler @ 030ccb68 */
  return uVar6 & 1;
}


