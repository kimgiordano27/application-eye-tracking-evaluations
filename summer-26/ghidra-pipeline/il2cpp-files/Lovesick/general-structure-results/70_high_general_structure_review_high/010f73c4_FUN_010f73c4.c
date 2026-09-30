/*
FUNCTION_NAME: FUN_010f73c4
ENTRY_POINT: 010f73c4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;data_collection
EVIDENCE: validity_or_gating_hits_8;ui_or_gameplay_sink_hits_6;strong_file_logging_hits_3
*/


void FUN_010f73c4(long param_1,undefined8 param_2,int param_3,undefined8 param_4,long param_5)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  int *piVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  undefined8 local_60;
  undefined8 local_58;
  int local_48;
  undefined4 uStack_44;
  
                    /* try { // try from 010f73c4 to 011f74c3 has its CatchHandler @ 010f73c4
                       catch() { ... } // from try @ 010f73c4 with catch @ 010f73c4
                       catch() { ... } // from try @ 010f7530 with catch @ 010f73c4
                       catch() { ... } // from try @ 010f7558 with catch @ 010f73c4
                       catch() { ... } // from try @ 010f7584 with catch @ 010f73c4
                       catch() { ... } // from try @ 010f75b8 with catch @ 010f73c4 */
  local_60 = param_4;
  if (*(long *)(param_5 + 0x38) == 0) {
    thunk_FUN_00d48444(StringLiteral_4367);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List_Enumerator<BarCustomer>_Dispose__);
    thunk_FUN_00d48444(Method_UnityEngine_UIElements_MouseEventBase<MouseEnterWindowEvent>_Init__);
    thunk_FUN_00d48444(
                      Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BaseRegistrationList<IXRInteractor>_get_flushedCount__
                      );
    thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
    if (*(long *)(param_5 + 0x38) == 0) {
      FUN_00d59478(param_5);
    }
  }
  puVar3 = Method_UnityEngine_UIElements_MouseEventBase<MouseEnterWindowEvent>_Init__;
  if (param_1 == 0) {
    thunk_FUN_00d48444(PTR_DAT_033f37c8);
    uVar10 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    uVar5 = thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vqabss_s32__);
    FUN_016ec5b8(uVar10,uVar5,0);
    uVar5 = thunk_FUN_00d48444(PTR_DAT_033ec790);
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar10,uVar5);
  }
  uVar10 = *(undefined8 *)(param_1 + 0x18);
  if (*(int *)(*(long *)Method_UnityEngine_UIElements_MouseEventBase<MouseEnterWindowEvent>_Init__ +
              0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  if ((int)uVar10 == 0) {
    uVar11 = *(ulong *)(param_1 + 0x18);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    if ((uVar11 & 0x700000000) == 0) {
      lVar12 = *(long *)(param_1 + 0x78);
      puVar7 = (undefined8 *)**(undefined8 **)(param_5 + 0x38);
      (*(code *)puVar7[2])(*puVar7,puVar7,0,0,&local_48);
      lVar14 = (long)local_48;
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
                    /* try { // try from 010f74c4 to 011f74cb has its CatchHandler @ 010f756c */
      uVar4 = FUN_021d5828(param_1 + 0x10,0);
                    /* try { // try from 010f74d4 to 011f74db has its CatchHandler @ 010f7564 */
      if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)System_Threading_Timer_TimerComparer_TypeInfo);
      }
                    /* try { // try from 010f74ec to 011f74ef has its CatchHandler @ 010f7560 */
                    /* try { // try from 010f74f0 to 011f74fb has its CatchHandler @ 010f7568 */
      uVar4 = FUN_017726ac(lVar14,uVar4,0);
                    /* try { // try from 010f7504 to 011f752f has its CatchHandler @ 010f7570 */
      puVar7 = *(undefined8 **)(*(long *)(param_5 + 0x38) + 0x10);
      local_58 = param_2;
      (*(code *)puVar7[2])(*puVar7,puVar7,0,&local_58,&local_48);
      puVar3 = 
      Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BaseRegistrationList<IXRInteractor>_get_flushedCount__
      ;
      if (lVar12 != 0) {
                    /* try { // try from 010f7530 to 011f7553 has its CatchHandler @ 010f73c4 */
        iVar1 = *(int *)(param_1 + 0x14);
        iVar2 = *(int *)(lVar12 + 0x14);
        lVar14 = *(long *)
                  Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BaseRegistrationList<IXRInteractor>_get_flushedCount__
        ;
        if (*(int *)(lVar14 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar14 = *(long *)puVar3;
        }
                    /* try { // try from 010f7554 to 011f7557 has its CatchHandler @ 010f755c */
                    /* try { // try from 010f7558 to 011f757f has its CatchHandler @ 010f73c4 */
        lVar13 = **(long **)(lVar14 + 0xb8);
                    /* catch(type#1 @ 03274860) { ... } // from try @ 010f7554 with catch @ 010f755c
                        */
        if (param_3 == 0) {
                    /* catch(type#1 @ 03274860) { ... } // from try @ 010f74ec with catch @ 010f7560
                        */
                    /* catch(type#1 @ 03274860) { ... } // from try @ 010f74d4 with catch @ 010f7564
                        */
                    /* catch(type#1 @ 03274860) { ... } // from try @ 010f74f0 with catch @ 010f7568
                        */
          lVar8 = lVar13;
          if (*(int *)(lVar14 + 0xe0) == 0) {
                    /* catch(type#1 @ 03274860) { ... } // from try @ 010f74c4 with catch @ 010f756c
                        */
            thunk_FUN_00d32864();
                    /* catch(type#1 @ 03274860) { ... } // from try @ 010f7504 with catch @ 010f7570
                        */
            lVar8 = **(long **)(*(long *)puVar3 + 0xb8);
          }
          if (lVar8 == 0) goto LAB_010f7674;
                    /* try { // try from 010f7580 to 011f7583 has its CatchHandler @ 010f75a8 */
                    /* try { // try from 010f7584 to 011f75af has its CatchHandler @ 010f73c4 */
          param_3 = FUN_02193e60(lVar8,0);
        }
        uVar11 = FUN_021cc9c4(&local_60,0);
        if ((uVar11 & 1) == 0) {
                    /* try { // try from 010f75b8 to 011f75c3 has its CatchHandler @ 010f73c4 */
                    /* try { // try from 010f75c4 to 011f75cb has its CatchHandler @ 010f75cc */
          plVar15 = (long *)**(undefined8 **)
                              (*(long *)
                                Method_System_Collections_Generic_List_Enumerator<BarCustomer>_Dispose__
                              + 0xb8);
          if (plVar15 == (long *)0x0) goto LAB_010f7674;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 010f75b0 with catch @ 010f75cc
                       catch(type#2 @ 00000000) { ... } // from try @ 010f75c4 with catch @ 010f75cc
                        */
          lVar14 = *plVar15;
          uVar11 = (ulong)*(ushort *)(lVar14 + 0x12a);
          if (uVar11 != 0) {
            piVar9 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == *(long *)StringLiteral_4367) {
                puVar7 = (undefined8 *)(lVar14 + (long)(*piVar9 + 0x13) * 0x10 + 0x138);
                goto LAB_010f7624;
              }
              uVar11 = uVar11 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar11 != 0);
          }
          puVar7 = (undefined8 *)FUN_00d59724(plVar15,*(long *)StringLiteral_4367,0x13);
LAB_010f7624:
          (*(code *)*puVar7)(plVar15,puVar7[1]);
        }
        else {
                    /* catch() { ... } // from try @ 010f7580 with catch @ 010f75a8 */
          FUN_021d75d4(&local_60,0);
        }
        if (lVar13 != 0) {
          FUN_02198cec(lVar13,lVar12,param_3,CONCAT44(uStack_44,local_48),iVar1 - iVar2,uVar4,
                       local_60,0);
          return;
        }
      }
LAB_010f7674:
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
  }
  uVar10 = thunk_FUN_00d48444(StringLiteral_4406);
  uVar10 = FUN_015f6780(uVar10,param_1,0);
  thunk_FUN_00d48444(Method_OVRLocatable_TrackingSpacePose_ComputeWorldRotation__);
  uVar5 = thunk_FUN_00d62348();
  FUN_00ac2be8();
  uVar6 = thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vqabss_s32__);
  FUN_016ec624(uVar5,uVar10,uVar6,0);
  uVar10 = thunk_FUN_00d48444(PTR_DAT_033ec790);
                    /* WARNING: Subroutine does not return */
  FUN_00da5038(uVar5,uVar10);
}


