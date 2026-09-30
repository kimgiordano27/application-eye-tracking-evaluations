/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_session_archive_message_t_message_body_set
ENTRY_POINT: 08115790
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


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_session_archive_message_t_message_body_set
               (void)

{
  byte bVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long unaff_x19;
  undefined8 *unaff_x20;
  long lVar10;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x26;
  long unaff_x27;
  undefined8 *unaff_x28;
  
  FUN_03c8f898();
  FUN_03c8f898(PTR_DAT_08f023e8);
  FUN_03c8f898(PTR_DAT_08f023d8);
  FUN_03c8f898(PTR_DAT_08e9e3a8);
  FUN_03c8f898(PTR_DAT_08e9e3a0);
  FUN_03c8f898(PTR_DAT_08e68f00);
  FUN_03c8f898(PTR_DAT_08f023f0);
  FUN_03c8f898(PTR_DAT_08f023f8);
  *(undefined1 *)(unaff_x27 + 0xc59) = 1;
  thunk_FUN_03cf5234(*unaff_x28);
  FUN_04d4c080();
  FUN_08112280();
  thunk_FUN_03cf5234(*unaff_x26);
  FUN_04d4a8e4();
  FUN_081123e8();
  *(undefined8 *)(unaff_x19 + 0x48) = 0;
  thunk_FUN_03d233cc((undefined8 *)(unaff_x19 + 0x48),0);
  uVar6 = unaff_x20[1];
  uVar3 = *unaff_x20;
  lVar10 = unaff_x19 + 0x30;
  *(undefined8 *)(unaff_x19 + 0x40) = unaff_x20[2];
  *(undefined8 *)(unaff_x19 + 0x38) = uVar6;
  *(undefined8 *)(unaff_x19 + 0x30) = uVar3;
  thunk_FUN_03d233cc(unaff_x19 + 0x38,0);
  *(undefined8 *)(unaff_x19 + 0x20) = 0;
  thunk_FUN_03d233cc((undefined8 *)(unaff_x19 + 0x20),0);
  uVar3 = thunk_FUN_03cf5234(*unaff_x24);
  FUN_052124c0(uVar3,*unaff_x23);
  FUN_08115adc(lVar10,uVar3);
  plVar4 = (long *)FUN_048da418(uVar3,*unaff_x22);
  puVar2 = PTR_DAT_08e68f00;
  if (plVar4 != (long *)0x0) {
    lVar7 = *plVar4;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_08e82be8) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_08115910;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_03cf1348(plVar4,*(long *)PTR_DAT_08e82be8,0);
LAB_08115910:
    uVar3 = (*(code *)*puVar5)(plVar4,puVar5[1]);
    puVar5 = (undefined8 *)(unaff_x19 + 0x10);
    *puVar5 = uVar3;
    thunk_FUN_03d233cc(puVar5,uVar3);
    uVar3 = *puVar5;
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    uVar8 = FUN_085dfaac(uVar3,0,0);
    if ((uVar8 & 1) == 0) {
      bVar1 = *(byte *)(*(long *)PTR_DAT_08f02308 + 0x130);
      if ((bVar1 <= *(byte *)(*plVar4 + 0x130)) &&
         (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_08f02308))
      {
        uVar3 = FUN_0811134c(plVar4);
        *(undefined8 *)(unaff_x19 + 0x18) = uVar3;
        thunk_FUN_03d233cc();
      }
      if ((*(long *)(unaff_x19 + 0x18) != 0) &&
         (uVar8 = FUN_085d9f54(*(long *)(unaff_x19 + 0x18),0), (uVar8 & 1) == 0)) {
        lVar10 = *(long *)(unaff_x19 + 0x18);
        uVar3 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e80738);
        System_Array_InternalEnumerator<Dictionary_Entry<object,_OvrGpuMorphTargetsCombiner_BlockData>>___ctor
                  ();
        if (lVar10 != 0) {
          FUN_085da19c(lVar10,uVar3,0);
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      FUN_08115b90();
      return;
    }
  }
  plVar4 = (long *)Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_subscription_t_message_set
                             (lVar10);
  uVar3 = *(undefined8 *)PTR_DAT_08f023f8;
  if (plVar4 == (long *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar6 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
  }
  uVar3 = FUN_06f683f8(uVar3,uVar6,0);
  uVar6 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e695a0);
  FUN_071396dc(uVar6,uVar3,0);
  FUN_0479df5c(lVar10,0,0,uVar6,*(undefined8 *)PTR_DAT_08f023f0);
  return;
}


