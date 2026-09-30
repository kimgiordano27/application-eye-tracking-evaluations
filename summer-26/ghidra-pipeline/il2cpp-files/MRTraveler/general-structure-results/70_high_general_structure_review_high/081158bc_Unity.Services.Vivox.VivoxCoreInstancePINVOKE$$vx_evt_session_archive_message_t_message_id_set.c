/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_session_archive_message_t_message_id_set
ENTRY_POINT: 081158bc
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_2
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_session_archive_message_t_message_id_set
               (long param_1,long *param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *in_x10;
  int *piVar8;
  long unaff_x19;
  long lVar9;
  
  puVar2 = PTR_DAT_08e68f00;
  uVar7 = (ulong)*(ushort *)(param_1 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *in_x10) {
        puVar3 = (undefined8 *)(param_1 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_08115910;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar3 = (undefined8 *)FUN_03cf1348(param_2,*in_x10,0);
LAB_08115910:
  uVar4 = (*(code *)*puVar3)(param_2,puVar3[1]);
  puVar3 = (undefined8 *)(unaff_x19 + 0x10);
  *puVar3 = uVar4;
  thunk_FUN_03d233cc(puVar3,uVar4);
  uVar4 = *puVar3;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  uVar7 = FUN_085dfaac(uVar4,0,0);
  if ((uVar7 & 1) != 0) {
    plVar5 = (long *)Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_subscription_t_message_set
                               ();
    uVar4 = *(undefined8 *)PTR_DAT_08f023f8;
    if (plVar5 == (long *)0x0) {
      uVar6 = 0;
    }
    else {
      uVar6 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
    }
    uVar4 = FUN_06f683f8(uVar4,uVar6,0);
    uVar6 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e695a0);
    FUN_071396dc(uVar6,uVar4,0);
    FUN_0479df5c();
    return;
  }
  bVar1 = *(byte *)(*(long *)PTR_DAT_08f02308 + 0x130);
  if ((bVar1 <= *(byte *)(*param_2 + 0x130)) &&
     (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_08f02308)) {
    uVar4 = FUN_0811134c(param_2);
    *(undefined8 *)(unaff_x19 + 0x18) = uVar4;
    thunk_FUN_03d233cc();
  }
  if ((*(long *)(unaff_x19 + 0x18) != 0) &&
     (uVar7 = FUN_085d9f54(*(long *)(unaff_x19 + 0x18),0), (uVar7 & 1) == 0)) {
    lVar9 = *(long *)(unaff_x19 + 0x18);
    uVar4 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e80738);
    System_Array_InternalEnumerator<Dictionary_Entry<object,_OvrGpuMorphTargetsCombiner_BlockData>>___ctor
              ();
    if (lVar9 != 0) {
      FUN_085da19c(lVar9,uVar4,0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  FUN_08115b90();
  return;
}


