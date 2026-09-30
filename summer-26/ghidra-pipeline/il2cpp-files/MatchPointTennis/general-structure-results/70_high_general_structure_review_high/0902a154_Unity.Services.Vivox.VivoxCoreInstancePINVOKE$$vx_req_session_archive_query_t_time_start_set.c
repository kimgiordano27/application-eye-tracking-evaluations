/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_session_archive_query_t_time_start_set
ENTRY_POINT: 0902a154
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_session_archive_query_t_time_start_set
               (void)

{
  undefined *puVar1;
  undefined *puVar2;
  bool in_ZR;
  bool in_CY;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x19;
  undefined8 *puVar6;
  ushort unaff_w20;
  long unaff_x23;
  long *unaff_x25;
  
  puVar2 = PTR_DAT_09f1ee00;
  puVar1 = PTR_DAT_09f1ede0;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0902a0dc with catch @ 0902a154
                       catch(type#2 @ 00000000) { ... } // from try @ 0902a138 with catch @ 0902a154
                       catch(type#2 @ 00000000) { ... } // from try @ 0902a14c with catch @ 0902a154
                        */
  if (!in_CY || in_ZR) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e4c();
  }
  *(undefined8 *)(unaff_x23 + 0x40) = *(undefined8 *)PTR_DAT_09fc0578;
  thunk_FUN_044bb4b4();
  uVar3 = FUN_078b57fc();
  puVar6 = (undefined8 *)(unaff_x19 + 0x30);
  *puVar6 = uVar3;
  thunk_FUN_044bb4b4(puVar6,uVar3);
  lVar4 = thunk_FUN_0448520c(*(undefined8 *)puVar2);
  FUN_05bad610(lVar4,*(undefined8 *)puVar1);
  if ((0xff < unaff_w20) && ((unaff_w20 & 0xff) != 0)) {
    uVar5 = System_Collections_Generic_ObjectEqualityComparer<InternedString>__IndexOf
                      (&stack0x0000000c,*(undefined8 *)PTR_DAT_09fc0548);
    uVar3 = uVar5;
    if (*(int *)(*unaff_x25 + 0xe4) == 0) {
      uVar3 = thunk_FUN_044a54b4(*unaff_x25);
    }
    FUN_090265e4(uVar3,lVar4,*(undefined8 *)PTR_DAT_09fc0560,uVar5);
  }
  puVar1 = PTR_DAT_09f20d00;
  if (lVar4 != 0) {
    if (0 < *(int *)(lVar4 + 0x18)) {
      uVar5 = *puVar6;
      uVar3 = FUN_078b5fc0(*(undefined8 *)PTR_DAT_09f20d08,lVar4,0);
      uVar3 = FUN_078b4f58(uVar5,*(undefined8 *)puVar1,uVar3,0);
      *puVar6 = uVar3;
      thunk_FUN_044bb4b4(puVar6,uVar3);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


