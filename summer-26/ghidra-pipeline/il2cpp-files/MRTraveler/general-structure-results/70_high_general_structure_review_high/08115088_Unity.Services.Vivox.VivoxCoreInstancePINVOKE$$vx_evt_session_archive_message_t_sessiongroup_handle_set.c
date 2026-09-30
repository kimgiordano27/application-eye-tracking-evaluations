/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_session_archive_message_t_sessiongroup_handle_set
ENTRY_POINT: 08115088
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_3;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_4
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_session_archive_message_t_sessiongroup_handle_set
               (long param_1,long *param_2)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 in_stack_00000008;
  
  if ((DAT_09428c54 & 1) == 0) {
    FUN_03c8f898(PTR_DAT_08f02260);
    FUN_03c8f898(PTR_DAT_08eec308);
    FUN_03c8f898(PTR_DAT_08f023a8);
    FUN_03c8f898(PTR_DAT_08f023b0);
    DAT_09428c54 = 1;
  }
  in_stack_00000008 = 0;
  if (*(char *)(param_1 + 0x41) != '\0') {
    return;
  }
  if (param_2 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_08eec308 + 0x130);
    if ((bVar1 <= *(byte *)(*param_2 + 0x130)) &&
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_08eec308))
    {
      lVar8 = param_2[4];
      uVar4 = FUN_08110464(lVar8,&stack0x00000008);
      if (lVar8 == 0) {
LAB_08115240:
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      if ((uVar4 & 1) == 0) {
        lVar7 = FUN_08824940(lVar8,0);
        if (lVar7 == 0) goto LAB_08115240;
        uVar2 = FUN_08823050(lVar7,0);
        uVar3 = 0;
      }
      else {
        uVar2 = FUN_0882508c(lVar8,0);
        uVar5 = FUN_06f683f8(*(undefined8 *)PTR_DAT_08f023b0,uVar2,0);
        uVar6 = Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_subscription_t_message_set
                          (param_1 + 0x28);
        uVar2 = in_stack_00000008;
        uVar3 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08f02260);
        FUN_08109c28(uVar3,uVar5,uVar6,uVar2,0);
        uVar2 = 0;
      }
      FUN_088248d8(lVar8,0);
      goto LAB_08115164;
    }
  }
  uVar2 = Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_subscription_t_message_set
                    (param_1 + 0x28);
  uVar3 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08f02260);
  FUN_08109c28(uVar3,*(undefined8 *)PTR_DAT_08f023a8,uVar2,0,0);
  uVar2 = 0;
LAB_08115164:
  FUN_08115244(param_1,uVar2,uVar3);
  return;
}


