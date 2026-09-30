/*
FUNCTION_NAME: FUN_032ae730
ENTRY_POINT: 032ae730
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_9;telemetry_or_network_hits_6;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x032aeb8c) */
/* WARNING: Removing unreachable block (ram,0x032aeb98) */

void FUN_032ae730(long param_1,undefined4 param_2,long param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  long local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  long local_80;
  char local_74 [4];
  undefined4 local_70;
  undefined4 uStack_6c;
  int local_68;
  
  if ((DAT_03ff5860 & 1) == 0) {
    thunk_FUN_01ad9084(StringLiteral_2221);
    thunk_FUN_01ad9084(
                      Method_Meta_WitAi_Requests_WitTTSVRequest_<>c__DisplayClass14_0_<RequestStream>b__0__
                      );
    thunk_FUN_01ad9084(
                      Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                      );
    thunk_FUN_01ad9084(PTR_DAT_03d86aa8);
    thunk_FUN_01ad9084(PTR_DAT_03d86ab0);
    thunk_FUN_01ad9084(PTR_DAT_03d86ab8);
    thunk_FUN_01ad9084(
                      Method_OVRTrackedKeyboard_<UpdateTrackingStateCoroutine>d__95_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(PTR_DAT_03d86ac0);
    thunk_FUN_01ad9084(PTR_DAT_03d86ac8);
    thunk_FUN_01ad9084(Method_System_Collections_SortedList_SortedListEnumerator_get_Current__);
    thunk_FUN_01ad9084(PTR_DAT_03d86ad0);
    DAT_03ff5860 = 1;
  }
  local_74[0] = '\0';
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  if (param_3 != 0) {
    iVar1 = *(int *)(param_3 + 0x18);
    if (0xfff4 < iVar1) {
      plVar6 = (long *)FUN_01b47fd0(*(undefined8 *)
                                     Method_System_Collections_SortedList_SortedListEnumerator_get_Current__
                                    ,1);
      local_a8 = (undefined4)*(undefined8 *)(param_3 + 0x18);
      lVar7 = thunk_FUN_01afa70c(*(undefined8 *)
                                  Method_OVRTrackedKeyboard_<UpdateTrackingStateCoroutine>d__95_System_Collections_IEnumerator_Reset__
                                 ,&local_a8);
      if (plVar6 == (long *)0x0) goto LAB_032aeb88;
      if ((lVar7 != 0) &&
         (lVar8 = thunk_FUN_01afa9e0(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0)) {
        uVar12 = thunk_FUN_01b154cc();
                    /* WARNING: Subroutine does not return */
        FUN_01b48050(uVar12,0);
      }
      if ((int)plVar6[3] == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 032aeba0 to 033aebe3 has its CatchHandler @ 032aeba0
                       catch() { ... } // from try @ 032aeba0 with catch @ 032aeba0
                       catch() { ... } // from try @ 032aebf0 with catch @ 032aeba0
                       catch() { ... } // from try @ 032aec20 with catch @ 032aeba0
                       catch() { ... } // from try @ 032aec5c with catch @ 032aeba0 */
        FUN_01b48180();
      }
      plVar6[4] = lVar7;
      thunk_FUN_01b4f09c(plVar6 + 4,lVar7);
      if (*(int *)(*(long *)
                    Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                  + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      FUN_038f358c(*(undefined8 *)PTR_DAT_03d86ad0,plVar6,0);
      iVar1 = *(int *)(param_3 + 0x18);
    }
    local_70 = 0x5283a76b;
    uStack_6c = param_2;
    local_68 = iVar1;
    lVar7 = FUN_032ad5e0(&local_70);
    if (lVar7 != 0) {
      lVar8 = FUN_01b47fd0(*(undefined8 *)
                            Method_Meta_WitAi_Requests_WitTTSVRequest_<>c__DisplayClass14_0_<RequestStream>b__0__
                           ,*(int *)(param_3 + 0x18) + *(int *)(lVar7 + 0x18));
      FUN_03062688(lVar7,lVar8,0,0);
      FUN_03062688(param_3,lVar8,*(undefined4 *)(lVar7 + 0x18),0);
      uVar12 = *(undefined8 *)(param_1 + 0x18);
      local_74[0] = '\0';
      FUN_030a2d7c(uVar12,local_74,0);
      if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      FUN_02b5a400(&local_a8,*(long *)(param_1 + 0x20),*(undefined8 *)PTR_DAT_03d86ac0);
      puVar5 = PTR_DAT_03d86ac8;
      puVar4 = PTR_DAT_03d86ab0;
      puVar3 = PTR_DAT_03d86aa8;
      puVar2 = StringLiteral_2221;
      local_90 = CONCAT44(uStack_a4,local_a8);
      uStack_88 = uStack_a0;
      local_80 = local_98;
      while( true ) {
        do {
          uVar9 = FUN_02739b98(&local_90,*(undefined8 *)puVar4);
          lVar7 = local_80;
          if ((uVar9 & 1) == 0) {
            FUN_02739b94(&local_90,*(undefined8 *)puVar3);
            if (local_74[0] != '\0') {
              thunk_FUN_01b18c7c(uVar12,0);
            }
            return;
          }
          if (local_80 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01b48178();
          }
          uVar9 = FUN_0342e44c(local_80,0);
        } while ((uVar9 & 1) == 0);
        plVar6 = (long *)FUN_0342ee0c(lVar7,0);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        uVar10 = thunk_FUN_01afaadc(*(undefined8 *)puVar2);
        FUN_02fd9780(uVar10,param_1,*(undefined8 *)puVar5,0);
        uVar11 = FUN_0342ee0c(lVar7,0);
        if (plVar6 == (long *)0x0) break;
        (**(code **)(*plVar6 + 0x2c8))
                  (plVar6,lVar8,0,*(undefined4 *)(lVar8 + 0x18),uVar10,uVar11,
                   *(undefined8 *)(*plVar6 + 0x2d0));
      }
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
  }
LAB_032aeb88:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


