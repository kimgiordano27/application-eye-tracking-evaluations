/*
FUNCTION_NAME: FUN_032407d8
ENTRY_POINT: 032407d8
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_8;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_2
*/


undefined4 FUN_032407d8(long param_1,uint param_2,ulong param_3,ulong param_4)

{
  undefined4 uVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined4 uVar10;
  long lVar11;
  undefined4 uVar12;
  long *plVar13;
  ulong uVar14;
  undefined8 local_68;
  
                    /* try { // try from 032407d8 to 033407e3 has its CatchHandler @ 032405c0 */
                    /* try { // try from 032407e4 to 033407eb has its CatchHandler @ 032407ec */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 032407d0 with catch @ 032407ec
                       catch(type#2 @ 00000000) { ... } // from try @ 032407e4 with catch @ 032407ec
                        */
  if ((DAT_03ff479f & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                      );
    thunk_FUN_01ad9084(StringLiteral_12396);
    thunk_FUN_01ad9084(StringLiteral_2912);
    thunk_FUN_01ad9084(PTR_DAT_03d84468);
    thunk_FUN_01ad9084(
                      Method_System_Net_Security_SslStream_<>c__DisplayClass21_0_<SetAndVerifySelectionCallback>b__0__
                      );
    thunk_FUN_01ad9084(Method_System_Collections_SortedList_SortedListEnumerator_get_Current__);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(StringLiteral_13551);
    thunk_FUN_01ad9084(PTR_DAT_03d84470);
    DAT_03ff479f = 1;
  }
  if (*(char *)(param_1 + 0xd3) == '\0') {
    if (0 < *(int *)(param_1 + 0x180)) {
      plVar6 = (long *)(param_1 + 0x128);
      if (*(long *)(param_1 + 0x128) == 0) {
        iVar3 = FUN_032401f0(param_1);
        uVar10 = 1;
        if (iVar3 == 0) {
          uVar10 = 2;
        }
        uVar5 = FUN_01b47fd0(*(undefined8 *)PTR_DAT_03d84468,uVar10);
        *(undefined8 *)(param_1 + 0x128) = uVar5;
        thunk_FUN_01b4f09c(plVar6,uVar5);
      }
      FUN_032401f0(param_1);
      puVar2 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
      uVar4 = 0;
      uVar12 = 0;
      uVar10 = 0x11;
      if ((param_4 & 1) == 0) {
        uVar10 = 4;
      }
      while (lVar7 = *plVar6, lVar7 != 0) {
        if (*(uint *)(lVar7 + 0x18) <= uVar4) goto LAB_03240d28;
        plVar13 = (long *)(lVar7 + uVar4 * 0x20 + 0x30);
        if (*plVar13 == 0) {
          lVar8 = FUN_01b47fd0(*(undefined8 *)StringLiteral_13551,*(undefined4 *)(param_1 + 0x180));
          if (*(uint *)(lVar7 + 0x18) <= uVar4) goto LAB_03240d28;
          *plVar13 = lVar8;
          thunk_FUN_01b4f09c(plVar13,lVar8);
          lVar7 = *plVar6;
          if (lVar7 == 0) break;
        }
        if (*(uint *)(lVar7 + 0x18) <= uVar4) goto LAB_03240d28;
        plVar13 = (long *)(lVar7 + uVar4 * 0x20 + 0x38);
        if (*plVar13 == 0) {
          lVar8 = FUN_01b47fd0(*(undefined8 *)StringLiteral_12396,*(undefined4 *)(param_1 + 0x180));
          if (*(uint *)(lVar7 + 0x18) <= uVar4) goto LAB_03240d28;
          *plVar13 = lVar8;
          thunk_FUN_01b4f09c(plVar13,lVar8);
        }
        if (0 < *(int *)(param_1 + 0x180)) {
          uVar14 = 0;
          lVar7 = 0x20;
          do {
            lVar8 = *plVar6;
            if (lVar8 == 0) goto LAB_03240d24;
            if (*(uint *)(lVar8 + 0x18) <= uVar4) goto LAB_03240d28;
            lVar11 = *(long *)(lVar8 + uVar4 * 0x20 + 0x30);
            if (lVar11 == 0) goto LAB_03240d24;
            if (*(uint *)(lVar11 + 0x18) <= uVar14) goto LAB_03240d28;
            lVar8 = *(long *)(lVar8 + uVar4 * 0x20 + 0x38);
            if (lVar8 == 0) goto LAB_03240d24;
            if (*(uint *)(lVar8 + 0x18) <= uVar14) goto LAB_03240d28;
            plVar13 = *(long **)(lVar11 + lVar7);
            uVar5 = *(undefined8 *)(lVar8 + lVar7);
            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            uVar9 = FUN_0391f968(plVar13,0,0);
            if (((uVar9 & 1) == 0) || (uVar9 = FUN_0308a038(uVar5,0,0), (uVar9 & 1) == 0)) {
LAB_03240b84:
              uVar9 = FUN_030821ec(uVar5,0,0);
              if ((uVar9 & 1) != 0) {
                uVar1 = *(undefined4 *)(param_1 + 0x124);
                if (*(int *)(*(long *)
                              Method_System_Net_Security_SslStream_<>c__DisplayClass21_0_<SetAndVerifySelectionCallback>b__0__
                            + 0xe0) == 0) {
                  thunk_FUN_01ac7298();
                }
                uVar5 = FUN_032507fc(uVar1,uVar14 & 0xffffffff,uVar4 & 0xffffffff,0);
              }
              uVar9 = FUN_030821ec(uVar5,0,0);
              if ((uVar9 & 1) == 0) {
                if ((*(int *)(param_1 + 0xec) == 2) || (*(int *)(param_1 + 0xec) == 4)) {
                  lVar8 = FUN_03908b84(param_3 & 0xffffffff,uVar10,param_2 & 1,uVar5,0);
                }
                else {
                  lVar8 = FUN_039078cc(param_3 & 0xffffffff,param_3 >> 0x20,uVar10,param_2 & 1,1,
                                       uVar5,0);
                }
                lVar11 = *plVar6;
                if (lVar11 == 0) goto LAB_03240d24;
                if (*(uint *)(lVar11 + 0x18) <= uVar4) goto LAB_03240d28;
                plVar13 = *(long **)(lVar11 + uVar4 * 0x20 + 0x30);
                if (plVar13 == (long *)0x0) goto LAB_03240d24;
                if ((lVar8 != 0) &&
                   (lVar11 = thunk_FUN_01afa9e0(lVar8,*(undefined8 *)(*plVar13 + 0x40)), lVar11 == 0
                   )) goto LAB_03240d2c;
                if (*(uint *)(plVar13 + 3) <= uVar14) goto LAB_03240d28;
                *(long *)((long)plVar13 + lVar7) = lVar8;
                thunk_FUN_01b4f09c((long *)((long)plVar13 + lVar7),lVar8);
                lVar8 = *plVar6;
                if (lVar8 == 0) goto LAB_03240d24;
                if (*(uint *)(lVar8 + 0x18) <= uVar4) goto LAB_03240d28;
                lVar8 = *(long *)(lVar8 + uVar4 * 0x20 + 0x38);
                if (lVar8 == 0) goto LAB_03240d24;
                if (*(uint *)(lVar8 + 0x18) <= uVar14) goto LAB_03240d28;
                uVar12 = 1;
                *(undefined8 *)(lVar8 + lVar7) = uVar5;
              }
            }
            else {
              if (plVar13 == (long *)0x0) goto LAB_03240d24;
              iVar3 = (**(code **)(*plVar13 + 0x178))(plVar13,*(undefined8 *)(*plVar13 + 0x180));
              if ((iVar3 != (int)param_3) ||
                 (iVar3 = (**(code **)(*plVar13 + 0x198))(plVar13,*(undefined8 *)(*plVar13 + 0x1a0))
                 , iVar3 != (int)(param_3 >> 0x20))) goto LAB_03240b84;
            }
            uVar14 = uVar14 + 1;
            lVar7 = lVar7 + 8;
          } while ((long)uVar14 < (long)*(int *)(param_1 + 0x180));
        }
        uVar4 = uVar4 + 1;
        iVar3 = FUN_032401f0(param_1);
        uVar14 = 1;
        if (iVar3 == 0) {
          uVar14 = 2;
        }
        if (uVar14 <= uVar4) {
          return uVar12;
        }
      }
LAB_03240d24:
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
  }
  else {
    uVar4 = FUN_030821ec(*(undefined8 *)(param_1 + 0x110),0,0);
    if ((uVar4 & 1) != 0) {
      uVar10 = *(undefined4 *)(param_1 + 0x124);
      if (*(int *)(*(long *)
                    Method_System_Net_Security_SslStream_<>c__DisplayClass21_0_<SetAndVerifySelectionCallback>b__0__
                  + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar5 = FUN_03250a00(uVar10,0);
      *(undefined8 *)(param_1 + 0x110) = uVar5;
      uVar4 = FUN_0308a038(uVar5,0,0);
      if ((uVar4 & 1) != 0) {
        plVar6 = (long *)FUN_01b47fd0(*(undefined8 *)
                                       Method_System_Collections_SortedList_SortedListEnumerator_get_Current__
                                      ,1);
        local_68 = *(undefined8 *)(param_1 + 0x110);
        lVar7 = thunk_FUN_01afa70c(*(undefined8 *)StringLiteral_2912,&local_68);
        if (plVar6 == (long *)0x0) goto LAB_03240d24;
        if ((lVar7 != 0) &&
           (lVar8 = thunk_FUN_01afa9e0(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0)) {
LAB_03240d2c:
          uVar5 = thunk_FUN_01b154cc();
                    /* WARNING: Subroutine does not return */
          FUN_01b48050(uVar5,0);
        }
        if ((int)plVar6[3] == 0) {
LAB_03240d28:
                    /* WARNING: Subroutine does not return */
          FUN_01b48180();
        }
        plVar6[4] = lVar7;
        thunk_FUN_01b4f09c(plVar6 + 4,lVar7);
        if (*(int *)(*(long *)
                      Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        FUN_038f2cec(*(undefined8 *)PTR_DAT_03d84470,plVar6,0);
        lVar7 = *(long *)(param_1 + 0x118);
        if (lVar7 != 0) {
          (**(code **)(lVar7 + 0x18))(*(undefined8 *)(lVar7 + 0x40),*(undefined8 *)(lVar7 + 0x28));
        }
      }
    }
  }
  return 0;
}


