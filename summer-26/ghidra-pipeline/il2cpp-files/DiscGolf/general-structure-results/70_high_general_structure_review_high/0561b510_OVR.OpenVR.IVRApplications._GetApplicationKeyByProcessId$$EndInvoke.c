/*
FUNCTION_NAME: OVR.OpenVR.IVRApplications._GetApplicationKeyByProcessId$$EndInvoke
ENTRY_POINT: 0561b510
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVR_OpenVR_IVRApplications__GetApplicationKeyByProcessId__EndInvoke(void)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  undefined4 *puVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long unaff_x19;
  long *plVar12;
  undefined8 uVar13;
  undefined8 unaff_x22;
  undefined4 unaff_w23;
  long unaff_x24;
  undefined8 in_stack_00000008;
  undefined4 uStack0000000000000018;
  int iStack000000000000001c;
  
  lVar4 = thunk_FUN_02dd3144();
  FUN_0552aca4(lVar4,0);
  if (lVar4 != 0) {
    plVar12 = (long *)(lVar4 + 0x10);
    *plVar12 = unaff_x24;
    LeanTween__value(plVar12);
    *(undefined4 *)(lVar4 + 0x18) = unaff_w23;
    *(undefined8 *)(lVar4 + 0x20) = unaff_x22;
    LeanTween__value();
    *(long *)(lVar4 + 0x28) = unaff_x19;
    LeanTween__value();
    puVar3 = System_Func<KeyValuePair<string,_SessionProperty>,_string>_TypeInfo;
    if (*plVar12 != 0) {
      iStack000000000000001c = *(int *)(lVar4 + 0x18);
      if (*(int *)(*plVar12 + 0x50) == iStack000000000000001c) {
        return;
      }
      plVar5 = (long *)thunk_FUN_02dd2d7c(*(undefined8 *)
                                           System_Func<KeyValuePair<string,_SessionProperty>,_string>_TypeInfo
                                          ,(long)&stack0x00000018 + 4);
      if (*plVar12 != 0) {
        uStack0000000000000018 = *(undefined4 *)(*plVar12 + 0x18);
        plVar6 = (long *)thunk_FUN_02dd2d7c(*(undefined8 *)puVar3,&stack0x00000018);
        puVar2 = PTR_DAT_069fb9c0;
        if (plVar6 != (long *)0x0) {
          if (*(long *)(*plVar6 + 0x40) != *(long *)(*(long *)(PTR_DAT_069fb9c0 + 0x48) + 0x40)) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96be0();
          }
          puVar7 = (undefined4 *)thunk_FUN_02dd328c();
          if (plVar5 != (long *)0x0) {
            if (*(long *)(*plVar5 + 0x40) != *(long *)(*(long *)(puVar2 + 0x48) + 0x40)) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96be0(plVar5);
            }
            uVar1 = *puVar7;
            puVar7 = (undefined4 *)thunk_FUN_02dd328c(plVar5);
            uVar8 = FUN_056a0a1c(*puVar7,uVar1,0);
            if ((uVar8 & 1) == 0) {
              uVar13 = *(undefined8 *)(unaff_x19 + 0x30);
              if (*(int *)(*(long *)PTR_DAT_069fb990 + 0xe4) == 0) {
                thunk_FUN_02df485c();
              }
              uVar8 = FUN_06350670(uVar13,0,0);
              if ((uVar8 & 1) == 0) {
                in_stack_00000008._4_4_ = *(undefined4 *)(lVar4 + 0x18);
                uVar13 = thunk_FUN_02dd2d7c(*(undefined8 *)puVar3,(long)&stack0x00000008 + 4);
                if (*(long *)(lVar4 + 0x20) == 0) goto LAB_0561b74c;
                uVar10 = thunk_FUN_06354368(*(long *)(lVar4 + 0x20),0);
                uVar13 = FUN_0536e0dc(*(undefined8 *)System_Func<string[],_HttpResponse>_TypeInfo,
                                      uVar13,uVar10,0);
                FUN_05362cb4(uVar13,*(undefined8 *)System_Func<string[],_bool>_TypeInfo,0);
                puVar3 = PTR_DAT_069fc868;
                uVar13 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069fc868);
                FUN_054521e8(uVar13,lVar4,
                             *(undefined8 *)
                              System_Func<ValueTuple<NavigationMoveEvent_Direction,_NavigationDeviceType,_EventModifiers>,_EventBase>_TypeInfo
                             ,0);
                uVar13 = thunk_FUN_02dd3144(*(undefined8 *)puVar3);
                FUN_054521e8(uVar13,lVar4,*(undefined8 *)System_Func<object[],_object>_TypeInfo,0);
                FUN_0561b0e0();
              }
              return;
            }
            lVar11 = *plVar12;
            if (lVar11 != 0) {
              lVar9 = *(long *)(lVar4 + 0x20);
              *(undefined4 *)(lVar11 + 0x50) = *(undefined4 *)(lVar4 + 0x18);
              if (lVar9 != 0) {
                FUN_0560d028(lVar9,lVar11,0,0);
                return;
              }
            }
          }
        }
      }
    }
  }
LAB_0561b74c:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


