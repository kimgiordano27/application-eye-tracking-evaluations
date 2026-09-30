/*
FUNCTION_NAME: OVR.OpenVR.IVRApplications._GetApplicationKeyByProcessId$$Invoke
ENTRY_POINT: 0561b478
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_3;cap_below_near_certain_without_eye_anchor_or_ordered_structure;functionality_data_collection_or_telemetry_hits_3
*/


void OVR_OpenVR_IVRApplications__GetApplicationKeyByProcessId__Invoke
               (long param_1,undefined8 param_2,undefined4 param_3,long param_4)

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
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  undefined8 uVar14;
  undefined8 in_stack_00000008;
  undefined4 uStack0000000000000018;
  int iStack000000000000001c;
  
  puVar3 = 
  System_Func<ValueTuple<NavigationMoveEvent_Direction,_EventModifiers,_DefaultEventSystem_LegacyInputProcessor_IInput>,_EventBase>_TypeInfo
  ;
  if ((DAT_06dbba1d & 1) == 0) {
    FUN_02d965b8(PTR_DAT_069fc868);
    FUN_02d965b8(PTR_DAT_069fb990);
    FUN_02d965b8(
                System_Func<ValueTuple<NavigationMoveEvent_Direction,_NavigationDeviceType,_EventModifiers>,_EventBase>_TypeInfo
                );
    FUN_02d965b8(System_Func<object[],_object>_TypeInfo);
    FUN_02d965b8(
                System_Func<ValueTuple<NavigationMoveEvent_Direction,_EventModifiers,_DefaultEventSystem_LegacyInputProcessor_IInput>,_EventBase>_TypeInfo
                );
    FUN_02d965b8(System_Func<string[],_bool>_TypeInfo);
    FUN_02d965b8(System_Func<string[],_HttpResponse>_TypeInfo);
    FUN_02d965b8(System_Func<KeyValuePair<string,_SessionProperty>,_string>_TypeInfo);
    DAT_06dbba1d = 1;
  }
  lVar4 = thunk_FUN_02dd3144(*(undefined8 *)puVar3);
  FUN_0552aca4(lVar4,0);
  if (lVar4 != 0) {
    plVar13 = (long *)(lVar4 + 0x10);
    *plVar13 = param_4;
    LeanTween__value(plVar13,param_4);
    *(undefined4 *)(lVar4 + 0x18) = param_3;
    *(undefined8 *)(lVar4 + 0x20) = param_2;
    LeanTween__value((undefined8 *)(lVar4 + 0x20),param_2);
    *(long *)(lVar4 + 0x28) = param_1;
    LeanTween__value((long *)(lVar4 + 0x28),param_1);
    puVar3 = System_Func<KeyValuePair<string,_SessionProperty>,_string>_TypeInfo;
    if (*plVar13 != 0) {
      iStack000000000000001c = *(int *)(lVar4 + 0x18);
      if (*(int *)(*plVar13 + 0x50) == iStack000000000000001c) {
        return;
      }
      plVar5 = (long *)thunk_FUN_02dd2d7c(*(undefined8 *)
                                           System_Func<KeyValuePair<string,_SessionProperty>,_string>_TypeInfo
                                          ,(long)&stack0x00000018 + 4);
      if (*plVar13 != 0) {
        uStack0000000000000018 = *(undefined4 *)(*plVar13 + 0x18);
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
              uVar14 = *(undefined8 *)(param_1 + 0x30);
              if (*(int *)(*(long *)PTR_DAT_069fb990 + 0xe4) == 0) {
                thunk_FUN_02df485c();
              }
              uVar8 = FUN_06350670(uVar14,0,0);
              if ((uVar8 & 1) == 0) {
                in_stack_00000008._4_4_ = *(undefined4 *)(lVar4 + 0x18);
                uVar14 = thunk_FUN_02dd2d7c(*(undefined8 *)puVar3,(long)&stack0x00000008 + 4);
                if (*(long *)(lVar4 + 0x20) == 0) goto LAB_0561b74c;
                uVar10 = thunk_FUN_06354368(*(long *)(lVar4 + 0x20),0);
                uVar14 = FUN_0536e0dc(*(undefined8 *)System_Func<string[],_HttpResponse>_TypeInfo,
                                      uVar14,uVar10,0);
                uVar14 = FUN_05362cb4(uVar14,*(undefined8 *)System_Func<string[],_bool>_TypeInfo,0);
                puVar3 = PTR_DAT_069fc868;
                uVar10 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069fc868);
                FUN_054521e8(uVar10,lVar4,
                             *(undefined8 *)
                              System_Func<ValueTuple<NavigationMoveEvent_Direction,_NavigationDeviceType,_EventModifiers>,_EventBase>_TypeInfo
                             ,0);
                uVar11 = thunk_FUN_02dd3144(*(undefined8 *)puVar3);
                FUN_054521e8(uVar11,lVar4,*(undefined8 *)System_Func<object[],_object>_TypeInfo,0);
                FUN_0561b0e0(param_1,uVar14,uVar10,uVar11);
              }
              return;
            }
            lVar12 = *plVar13;
            if (lVar12 != 0) {
              lVar9 = *(long *)(lVar4 + 0x20);
              *(undefined4 *)(lVar12 + 0x50) = *(undefined4 *)(lVar4 + 0x18);
              if (lVar9 != 0) {
                FUN_0560d028(lVar9,lVar12,0,0);
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


