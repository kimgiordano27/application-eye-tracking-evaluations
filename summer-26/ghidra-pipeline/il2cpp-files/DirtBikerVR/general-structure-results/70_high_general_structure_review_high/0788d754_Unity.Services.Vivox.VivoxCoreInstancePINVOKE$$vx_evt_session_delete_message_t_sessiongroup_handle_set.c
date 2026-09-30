/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_session_delete_message_t_sessiongroup_handle_set
ENTRY_POINT: 0788d754
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_5;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


undefined8
Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_session_delete_message_t_sessiongroup_handle_set
          (long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long in_x9;
  ulong uVar4;
  int *piVar5;
  long *unaff_x20;
  long *unaff_x21;
  long *unaff_x25;
  
  if (in_x9 != 0) {
    piVar5 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == param_3) {
        puVar1 = (undefined8 *)(param_1 + (long)(*piVar5 + 9) * 0x10 + 0x138);
        goto LAB_0788d798;
      }
      in_x9 = in_x9 + -1;
      piVar5 = piVar5 + 4;
    } while (in_x9 != 0);
  }
  puVar1 = (undefined8 *)FUN_03ac43c4();
LAB_0788d798:
  lVar2 = (*(code *)*puVar1)();
  if (lVar2 != 0) {
    lVar2 = *unaff_x20;
    uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x25) {
          puVar1 = (undefined8 *)(lVar2 + (long)(*piVar5 + 9) * 0x10 + 0x138);
          goto LAB_0788d7f8;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_03ac43c4();
LAB_0788d7f8:
    lVar2 = (*(code *)*puVar1)();
    uVar3 = thunk_FUN_03ac74bc(*(undefined8 *)
                                System_Collections_Generic_List<IProperty<ResolvedStyleAccess>>_TypeInfo
                              );
    FUN_053f01d4();
    if (lVar2 == 0) goto LAB_0788d88c;
    uVar4 = FUN_04dabcd0(lVar2,uVar3,
                         *(undefined8 *)
                          System_Collections_Generic_List<IProperty<InlineStyleAccess>>_TypeInfo);
    if ((uVar4 & 1) != 0) {
      return 0;
    }
  }
  if (*unaff_x21 != 0) {
    FUN_0788d1e4();
    return 1;
  }
LAB_0788d88c:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


