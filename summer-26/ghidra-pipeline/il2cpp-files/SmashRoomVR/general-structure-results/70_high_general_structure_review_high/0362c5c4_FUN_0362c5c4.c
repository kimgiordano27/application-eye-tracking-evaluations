/*
FUNCTION_NAME: FUN_0362c5c4
ENTRY_POINT: 0362c5c4
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void FUN_0362c5c4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  long *plVar22;
  ulong uVar23;
  uint uVar24;
  uint uVar25;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  int local_64;
  
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if ((DAT_03ff7247 & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_OVRTrackedKeyboard_<UpdateTrackingStateCoroutine>d__95_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(PTR_DAT_03d7f500);
    thunk_FUN_01ad9084(PTR_DAT_03d7f4d0);
    thunk_FUN_01ad9084(PTR_DAT_03d7f4f8);
    thunk_FUN_01ad9084(PTR_DAT_03d9a508);
    thunk_FUN_01ad9084(PTR_DAT_03d9a510);
    thunk_FUN_01ad9084(PTR_DAT_03d9a518);
    thunk_FUN_01ad9084(PTR_DAT_03d9a520);
    thunk_FUN_01ad9084(PTR_DAT_03d9a528);
    thunk_FUN_01ad9084(Method_System_Collections_SortedList_SortedListEnumerator_get_Current__);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(
                      Method_System_Threading_Tasks_TaskToApm_<>c__DisplayClass3_0_<InvokeCallbackWhenTaskCompletes>b__0__
                      );
    thunk_FUN_01ad9084(PTR_DAT_03d9a530);
    thunk_FUN_01ad9084(PTR_DAT_03d9a538);
    thunk_FUN_01ad9084(PTR_DAT_03d9a540);
    thunk_FUN_01ad9084(PTR_DAT_03d9a548);
    thunk_FUN_01ad9084(PTR_DAT_03d9a550);
    thunk_FUN_01ad9084(PTR_DAT_03d9a558);
    thunk_FUN_01ad9084(PTR_DAT_03d9a560);
    thunk_FUN_01ad9084(PTR_DAT_03d9a568);
    thunk_FUN_01ad9084(PTR_DAT_03d9a570);
    thunk_FUN_01ad9084(PTR_DAT_03d9a578);
    thunk_FUN_01ad9084(PTR_DAT_03d9a580);
    thunk_FUN_01ad9084(PTR_DAT_03d9a588);
    thunk_FUN_01ad9084(PTR_DAT_03d9a590);
    thunk_FUN_01ad9084(PTR_DAT_03d9a598);
    thunk_FUN_01ad9084(PTR_DAT_03d9a5a0);
    thunk_FUN_01ad9084(PTR_DAT_03d9a5a8);
    thunk_FUN_01ad9084(PTR_DAT_03d9a5b0);
    thunk_FUN_01ad9084(PTR_DAT_03d9a5b8);
    thunk_FUN_01ad9084(PTR_DAT_03d9a5c0);
    thunk_FUN_01ad9084(PTR_DAT_03d9a5c8);
    thunk_FUN_01ad9084(PTR_DAT_03d9a5d0);
    thunk_FUN_01ad9084(PTR_DAT_03d9a5d8);
    thunk_FUN_01ad9084(PTR_DAT_03d9a5e0);
    thunk_FUN_01ad9084(PTR_DAT_03d9a5e8);
    DAT_03ff7247 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar9 = FUN_03922f24(param_1,0,0);
  if ((uVar9 & 1) != 0) {
    thunk_FUN_01ad9084(StringLiteral_2191);
    uVar19 = thunk_FUN_01afaadc();
    uVar20 = thunk_FUN_01ad9084(PTR_DAT_03d83a18);
    FUN_02fd1220(uVar19,uVar20,0);
    uVar20 = thunk_FUN_01ad9084(PTR_DAT_03d9a5f0);
                    /* WARNING: Subroutine does not return */
    FUN_01b48050(uVar19,uVar20);
  }
  plVar10 = (long *)thunk_FUN_01afaadc(*(undefined8 *)
                                        Method_System_Threading_Tasks_TaskToApm_<>c__DisplayClass3_0_<InvokeCallbackWhenTaskCompletes>b__0__
                                      );
  FUN_02eeeb74(plVar10,0);
  puVar2 = PTR_DAT_03d7f500;
  puVar1 = PTR_DAT_03d7f4f8;
  if (param_1 != 0) {
    lVar11 = FUN_039025e0(param_1,0);
    lVar12 = FUN_0390268c(param_1,0);
    lVar13 = FUN_0390293c(param_1,0);
    lVar14 = UnityEngine_UIElements_UIR_UIRenderDevice___cctor(param_1,0);
    lVar15 = thunk_FUN_01afaadc(*(undefined8 *)puVar1);
    FUN_02bd8f38(lVar15,*(undefined8 *)puVar2);
    lVar16 = FUN_03902890(param_1,0);
    lVar17 = thunk_FUN_01afaadc(*(undefined8 *)puVar1);
    FUN_02bd8f38(lVar17,*(undefined8 *)puVar2);
    lVar18 = thunk_FUN_01afaadc(*(undefined8 *)puVar1);
    FUN_02bd8f38(lVar18,*(undefined8 *)puVar2);
    FUN_039038ac(param_1,0,lVar15,0);
    FUN_039038ac(param_1,2,lVar17,0);
    FUN_039038ac(param_1,3,lVar18,0);
    puVar2 = PTR_DAT_03d9a580;
    puVar1 = 
    Method_OVRTrackedKeyboard_<UpdateTrackingStateCoroutine>d__95_System_Collections_IEnumerator_Reset__
    ;
    if (plVar10 != (long *)0x0) {
      System_Globalization_Calendar__IsValidMonth(plVar10,*(undefined8 *)PTR_DAT_03d9a5c8,0);
      FUN_0362b620(param_1);
      uVar19 = FUN_0362eb58();
      System_Globalization_Calendar__IsValidMonth(plVar10,uVar19,0);
      local_64 = FUN_03901b0c(param_1,0);
      uVar19 = thunk_FUN_01afa70c(*(undefined8 *)puVar1,&local_64);
      uVar19 = FUN_02ede300(*(undefined8 *)puVar2,uVar19,0);
      System_Globalization_Calendar__IsValidMonth(plVar10,uVar19,0);
      puVar4 = PTR_DAT_03d9a5a0;
      puVar3 = PTR_DAT_03d9a538;
      puVar2 = PTR_DAT_03d9a520;
      if (lVar11 != 0) {
        local_68 = (undefined4)*(undefined8 *)(lVar11 + 0x18);
        uVar19 = thunk_FUN_01afa70c(*(undefined8 *)puVar1,&local_68);
        uVar19 = FUN_02ede300(*(undefined8 *)puVar3,uVar19,0);
        FUN_01f19720(plVar10,uVar19,lVar11,*(undefined8 *)puVar4,*(undefined8 *)puVar2);
        puVar4 = PTR_DAT_03d9a588;
        puVar3 = PTR_DAT_03d9a568;
        if (lVar12 != 0) {
          local_6c = (undefined4)*(undefined8 *)(lVar12 + 0x18);
          uVar19 = thunk_FUN_01afa70c(*(undefined8 *)puVar1,&local_6c);
          uVar19 = FUN_02ede300(*(undefined8 *)puVar3,uVar19,0);
          FUN_01f19720(plVar10,uVar19,lVar12,*(undefined8 *)puVar4,*(undefined8 *)puVar2);
          puVar4 = PTR_DAT_03d9a5d0;
          puVar3 = PTR_DAT_03d9a540;
          puVar2 = PTR_DAT_03d9a510;
          if (lVar13 != 0) {
            local_70 = (undefined4)*(undefined8 *)(lVar13 + 0x18);
            uVar19 = thunk_FUN_01afa70c(*(undefined8 *)puVar1,&local_70);
            uVar19 = FUN_02ede300(*(undefined8 *)puVar3,uVar19,0);
            FUN_01f18f34(plVar10,uVar19,lVar13,*(undefined8 *)puVar4,*(undefined8 *)puVar2);
            puVar4 = PTR_DAT_03d9a558;
            puVar3 = PTR_DAT_03d9a548;
            puVar2 = PTR_DAT_03d9a528;
            if (lVar14 != 0) {
              local_74 = (undefined4)*(undefined8 *)(lVar14 + 0x18);
              uVar19 = thunk_FUN_01afa70c(*(undefined8 *)puVar1,&local_74);
              uVar19 = FUN_02ede300(*(undefined8 *)puVar3,uVar19,0);
              FUN_01f19b1c(plVar10,uVar19,lVar14,*(undefined8 *)puVar4,*(undefined8 *)puVar2);
              puVar4 = PTR_DAT_03d9a578;
              puVar3 = PTR_DAT_03d9a530;
              if (lVar15 != 0) {
                local_78 = *(undefined4 *)(lVar15 + 0x18);
                uVar19 = thunk_FUN_01afa70c(*(undefined8 *)puVar1,&local_78);
                uVar19 = FUN_02ede300(*(undefined8 *)puVar4,uVar19,0);
                FUN_01f19b1c(plVar10,uVar19,lVar15,*(undefined8 *)puVar3,*(undefined8 *)puVar2);
                puVar5 = PTR_DAT_03d9a5c0;
                puVar4 = PTR_DAT_03d9a5a8;
                puVar3 = PTR_DAT_03d9a518;
                if (lVar16 != 0) {
                  local_7c = (undefined4)*(undefined8 *)(lVar16 + 0x18);
                  uVar19 = thunk_FUN_01afa70c(*(undefined8 *)puVar1,&local_7c);
                  uVar19 = FUN_02ede300(*(undefined8 *)puVar5,uVar19,0);
                  FUN_01f19334(plVar10,uVar19,lVar16,*(undefined8 *)puVar4,*(undefined8 *)puVar3);
                  puVar4 = PTR_DAT_03d9a5d8;
                  puVar3 = PTR_DAT_03d9a598;
                  if (lVar17 != 0) {
                    local_80 = *(undefined4 *)(lVar17 + 0x18);
                    uVar19 = thunk_FUN_01afa70c(*(undefined8 *)puVar1,&local_80);
                    uVar19 = FUN_02ede300(*(undefined8 *)puVar4,uVar19,0);
                    FUN_01f19b1c(plVar10,uVar19,lVar17,*(undefined8 *)puVar3,*(undefined8 *)puVar2);
                    puVar5 = PTR_DAT_03d9a5e0;
                    puVar4 = PTR_DAT_03d9a5b0;
                    puVar3 = PTR_DAT_03d9a560;
                    if (lVar18 != 0) {
                      local_84 = *(undefined4 *)(lVar18 + 0x18);
                      uVar19 = thunk_FUN_01afa70c(*(undefined8 *)puVar1,&local_84);
                      uVar19 = FUN_02ede300(*(undefined8 *)puVar5,uVar19,0);
                      FUN_01f19b1c(plVar10,uVar19,lVar18,*(undefined8 *)puVar3,*(undefined8 *)puVar2
                                  );
                      System_Globalization_Calendar__IsValidMonth(plVar10,*(undefined8 *)puVar4,0);
                      iVar6 = FUN_038fb9d8(param_1,0);
                      puVar4 = PTR_DAT_03d9a5b8;
                      puVar3 = PTR_DAT_03d9a590;
                      puVar2 = PTR_DAT_03d9a550;
                      if (0 < iVar6) {
                        iVar6 = 0;
                        do {
                          uVar7 = FUN_039050c4(param_1,iVar6,0);
                          lVar11 = FUN_03904204(param_1,iVar6,0);
                          local_64 = iVar6;
                          uVar19 = thunk_FUN_01afa70c(*(undefined8 *)puVar1,&local_64);
                          local_68 = uVar7;
                          uVar20 = thunk_FUN_01afa70c(*(undefined8 *)PTR_DAT_03d9a508,&local_68);
                          uVar19 = FUN_02ee7120(*(undefined8 *)PTR_DAT_03d9a570,uVar19,uVar20,0);
                          System_Globalization_Calendar__IsValidMonth(plVar10,uVar19,0);
                          switch(uVar7) {
                          case 0:
                            if (lVar11 == 0) goto LAB_0362d158;
                            uVar25 = *(uint *)(lVar11 + 0x18);
                            if (0 < (int)uVar25) {
                              uVar24 = 2;
                              do {
                                if (uVar25 <= uVar24 - 2) {
LAB_0362d148:
                    /* WARNING: Subroutine does not return */
                                  FUN_01b48180();
                                }
                                local_64 = *(int *)(lVar11 + (long)(int)(uVar24 - 2) * 4 + 0x20);
                                uVar19 = thunk_FUN_01afa70c(*(undefined8 *)puVar1,&local_64);
                                if (*(uint *)(lVar11 + 0x18) <= uVar24 - 1) goto LAB_0362d148;
                                local_68 = *(undefined4 *)
                                            (lVar11 + (long)(int)(uVar24 - 1) * 4 + 0x20);
                                uVar20 = thunk_FUN_01afa70c(*(undefined8 *)puVar1,&local_68);
                                if (*(uint *)(lVar11 + 0x18) <= uVar24) goto LAB_0362d148;
                                local_6c = *(undefined4 *)(lVar11 + (long)(int)uVar24 * 4 + 0x20);
                                uVar21 = thunk_FUN_01afa70c(*(undefined8 *)puVar1,&local_6c);
                                uVar19 = FUN_02ee7164(*(undefined8 *)PTR_DAT_03d9a5e8,uVar19,uVar20,
                                                      uVar21,0);
                                System_Globalization_Calendar__IsValidMonth(plVar10,uVar19,0);
                                uVar25 = *(uint *)(lVar11 + 0x18);
                                iVar8 = uVar24 + 1;
                                uVar24 = uVar24 + 3;
                              } while (iVar8 < (int)uVar25);
                            }
                            break;
                          case 2:
                            if (lVar11 == 0) goto LAB_0362d158;
                            if (0 < *(int *)(lVar11 + 0x18)) {
                              uVar25 = 3;
                              do {
                                plVar22 = (long *)FUN_01b47fd0(*(undefined8 *)
                                                                                                                                
                                                  Method_System_Collections_SortedList_SortedListEnumerator_get_Current__
                                                  ,4);
                                if (*(uint *)(lVar11 + 0x18) <= uVar25 - 3) goto LAB_0362d148;
                                local_64 = *(int *)(lVar11 + (long)(int)(uVar25 - 3) * 4 + 0x20);
                                lVar12 = thunk_FUN_01afa70c(*(undefined8 *)puVar1,&local_64);
                                if (plVar22 == (long *)0x0) goto LAB_0362d158;
                                if ((lVar12 != 0) &&
                                   (lVar13 = thunk_FUN_01afa9e0(lVar12,*(undefined8 *)
                                                                        (*plVar22 + 0x40)),
                                   lVar13 == 0)) {
LAB_0362d14c:
                                  uVar19 = thunk_FUN_01b154cc();
                    /* WARNING: Subroutine does not return */
                                  FUN_01b48050(uVar19,0);
                                }
                                if ((int)plVar22[3] == 0) goto LAB_0362d148;
                                plVar22[4] = lVar12;
                                thunk_FUN_01b4f09c(plVar22 + 4,lVar12);
                                if (*(uint *)(lVar11 + 0x18) <= uVar25 - 2) goto LAB_0362d148;
                                local_68 = *(undefined4 *)
                                            (lVar11 + (long)(int)(uVar25 - 2) * 4 + 0x20);
                                lVar12 = thunk_FUN_01afa70c(*(undefined8 *)puVar1,&local_68);
                                if ((lVar12 != 0) &&
                                   (lVar13 = thunk_FUN_01afa9e0(lVar12,*(undefined8 *)
                                                                        (*plVar22 + 0x40)),
                                   lVar13 == 0)) goto LAB_0362d14c;
                                if (*(uint *)(plVar22 + 3) < 2) goto LAB_0362d148;
                                plVar22[5] = lVar12;
                                thunk_FUN_01b4f09c(plVar22 + 5,lVar12);
                                if (*(uint *)(lVar11 + 0x18) <= uVar25 - 1) goto LAB_0362d148;
                                local_6c = *(undefined4 *)
                                            (lVar11 + (long)(int)(uVar25 - 1) * 4 + 0x20);
                                lVar12 = thunk_FUN_01afa70c(*(undefined8 *)puVar1,&local_6c);
                                if ((lVar12 != 0) &&
                                   (lVar13 = thunk_FUN_01afa9e0(lVar12,*(undefined8 *)
                                                                        (*plVar22 + 0x40)),
                                   lVar13 == 0)) goto LAB_0362d14c;
                                if (*(uint *)(plVar22 + 3) < 3) goto LAB_0362d148;
                                plVar22[6] = lVar12;
                                thunk_FUN_01b4f09c(plVar22 + 6,lVar12);
                                if (*(uint *)(lVar11 + 0x18) <= uVar25) goto LAB_0362d148;
                                local_70 = *(undefined4 *)(lVar11 + (long)(int)uVar25 * 4 + 0x20);
                                lVar12 = thunk_FUN_01afa70c(*(undefined8 *)puVar1,&local_70);
                                if ((lVar12 != 0) &&
                                   (lVar13 = thunk_FUN_01afa9e0(lVar12,*(undefined8 *)
                                                                        (*plVar22 + 0x40)),
                                   lVar13 == 0)) goto LAB_0362d14c;
                                if (*(uint *)(plVar22 + 3) < 4) goto LAB_0362d148;
                                plVar22[7] = lVar12;
                                thunk_FUN_01b4f09c(plVar22 + 7,lVar12);
                                uVar19 = FUN_02ee71a8(*(undefined8 *)puVar3,plVar22,0);
                                System_Globalization_Calendar__IsValidMonth(plVar10,uVar19,0);
                                iVar8 = uVar25 + 1;
                                uVar25 = uVar25 + 4;
                              } while (iVar8 < *(int *)(lVar11 + 0x18));
                            }
                            break;
                          case 3:
                            if (lVar11 == 0) goto LAB_0362d158;
                            uVar25 = *(uint *)(lVar11 + 0x18);
                            if (0 < (int)uVar25) {
                              uVar24 = 1;
                              do {
                                if (uVar25 <= uVar24 - 1) goto LAB_0362d148;
                                local_64 = *(int *)(lVar11 + (long)(int)(uVar24 - 1) * 4 + 0x20);
                                uVar19 = thunk_FUN_01afa70c(*(undefined8 *)puVar1,&local_64);
                                if (*(uint *)(lVar11 + 0x18) <= uVar24) goto LAB_0362d148;
                                local_68 = *(undefined4 *)(lVar11 + (long)(int)uVar24 * 4 + 0x20);
                                uVar20 = thunk_FUN_01afa70c(*(undefined8 *)puVar1,&local_68);
                                uVar19 = FUN_02ee7120(*(undefined8 *)puVar2,uVar19,uVar20,0);
                                System_Globalization_Calendar__IsValidMonth(plVar10,uVar19,0);
                                uVar25 = *(uint *)(lVar11 + 0x18);
                                iVar8 = uVar24 + 1;
                                uVar24 = uVar24 + 2;
                              } while (iVar8 < (int)uVar25);
                            }
                            break;
                          case 5:
                            if (lVar11 == 0) goto LAB_0362d158;
                            if (0 < (int)*(ulong *)(lVar11 + 0x18)) {
                              uVar9 = 0;
                              uVar23 = *(ulong *)(lVar11 + 0x18) & 0xffffffff;
                              do {
                                if (uVar23 <= uVar9) goto LAB_0362d148;
                                local_64 = *(int *)(lVar11 + 0x20 + uVar9 * 4);
                                uVar19 = thunk_FUN_01afa70c(*(undefined8 *)puVar1,&local_64);
                                uVar19 = FUN_02ede300(*(undefined8 *)puVar4,uVar19,0);
                                System_Globalization_Calendar__IsValidMonth(plVar10,uVar19,0);
                                uVar23 = (ulong)*(uint *)(lVar11 + 0x18);
                                uVar9 = uVar9 + 1;
                              } while ((long)uVar9 < (long)(int)*(uint *)(lVar11 + 0x18));
                            }
                          }
                          iVar6 = iVar6 + 1;
                          iVar8 = FUN_038fb9d8(param_1,0);
                        } while (iVar6 < iVar8);
                      }
                      (**(code **)(*plVar10 + 0x168))(plVar10,*(undefined8 *)(*plVar10 + 0x170));
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_0362d158:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


