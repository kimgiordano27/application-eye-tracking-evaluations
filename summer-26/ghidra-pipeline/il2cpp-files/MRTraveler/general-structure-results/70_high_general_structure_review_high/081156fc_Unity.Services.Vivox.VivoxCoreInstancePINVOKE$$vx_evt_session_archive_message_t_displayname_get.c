/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_session_archive_message_t_displayname_get
ENTRY_POINT: 081156fc
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


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_session_archive_message_t_displayname_get
               (long param_1,undefined8 *param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long lVar11;
  long unaff_x21;
  undefined8 *puVar12;
  long unaff_x25;
  undefined8 *puVar13;
  long unaff_x26;
  undefined8 *puVar14;
  long unaff_x27;
  long unaff_x28;
  undefined8 *puVar15;
  
  puVar4 = PTR_DAT_08f023e0;
  puVar3 = PTR_DAT_08e9e3a8;
  puVar2 = PTR_DAT_08e9e3a0;
  puVar15 = *(undefined8 **)(unaff_x28 + 0x618);
  puVar12 = *(undefined8 **)(unaff_x21 + 0x3d0);
  puVar14 = *(undefined8 **)(unaff_x26 + 0x820);
  puVar13 = *(undefined8 **)(unaff_x25 + 0x3d8);
  if ((*(byte *)(unaff_x27 + 0xc59) & 1) == 0) {
    FUN_03c8f898(PTR_DAT_08e80738);
    FUN_03c8f898(PTR_DAT_08f02308);
    FUN_03c8f898(PTR_DAT_08e695a0);
    FUN_03c8f898(PTR_DAT_08e83618);
    FUN_03c8f898(PTR_DAT_08e69820);
    FUN_03c8f898(PTR_DAT_08e82be8);
    FUN_03c8f898(PTR_DAT_08f023e0);
    FUN_03c8f898(PTR_DAT_08f023d0);
    FUN_03c8f898(PTR_DAT_08f023e8);
    FUN_03c8f898(PTR_DAT_08f023d8);
    FUN_03c8f898(PTR_DAT_08e9e3a8);
    FUN_03c8f898(PTR_DAT_08e9e3a0);
    FUN_03c8f898(PTR_DAT_08e68f00);
    FUN_03c8f898(PTR_DAT_08f023f0);
    FUN_03c8f898(PTR_DAT_08f023f8);
    *(undefined1 *)(unaff_x27 + 0xc59) = 1;
  }
  uVar5 = thunk_FUN_03cf5234(*puVar15);
  FUN_04d4c080(uVar5,param_1,*puVar12,0);
  FUN_08112280(param_2,uVar5);
  uVar5 = thunk_FUN_03cf5234(*puVar14);
  FUN_04d4a8e4(uVar5,param_1,*puVar13,0);
  FUN_081123e8(param_2,uVar5);
  *(undefined8 *)(param_1 + 0x48) = 0;
  thunk_FUN_03d233cc((undefined8 *)(param_1 + 0x48),0);
  uVar7 = param_2[1];
  uVar5 = *param_2;
  lVar11 = param_1 + 0x30;
  *(undefined8 *)(param_1 + 0x40) = param_2[2];
  *(undefined8 *)(param_1 + 0x38) = uVar7;
  *(undefined8 *)(param_1 + 0x30) = uVar5;
  thunk_FUN_03d233cc(param_1 + 0x38,0);
  *(undefined8 *)(param_1 + 0x20) = 0;
  thunk_FUN_03d233cc((undefined8 *)(param_1 + 0x20),0);
  uVar5 = thunk_FUN_03cf5234(*(undefined8 *)puVar2);
  FUN_052124c0(uVar5,*(undefined8 *)puVar3);
  FUN_08115adc(lVar11,uVar5);
  plVar6 = (long *)FUN_048da418(uVar5,*(undefined8 *)puVar4);
  puVar2 = PTR_DAT_08e68f00;
  if (plVar6 != (long *)0x0) {
    lVar8 = *plVar6;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_08e82be8) {
          puVar12 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_08115910;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar12 = (undefined8 *)FUN_03cf1348(plVar6,*(long *)PTR_DAT_08e82be8,0);
LAB_08115910:
    uVar5 = (*(code *)*puVar12)(plVar6,puVar12[1]);
    puVar12 = (undefined8 *)(param_1 + 0x10);
    *puVar12 = uVar5;
    thunk_FUN_03d233cc(puVar12,uVar5);
    uVar5 = *puVar12;
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    uVar9 = FUN_085dfaac(uVar5,0,0);
    if ((uVar9 & 1) == 0) {
      bVar1 = *(byte *)(*(long *)PTR_DAT_08f02308 + 0x130);
      if ((bVar1 <= *(byte *)(*plVar6 + 0x130)) &&
         (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_08f02308))
      {
        uVar5 = FUN_0811134c(plVar6);
        *(undefined8 *)(param_1 + 0x18) = uVar5;
        thunk_FUN_03d233cc();
      }
      if ((*(long *)(param_1 + 0x18) != 0) &&
         (uVar9 = FUN_085d9f54(*(long *)(param_1 + 0x18),0), (uVar9 & 1) == 0)) {
        lVar11 = *(long *)(param_1 + 0x18);
        uVar5 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e80738);
        System_Array_InternalEnumerator<Dictionary_Entry<object,_OvrGpuMorphTargetsCombiner_BlockData>>___ctor
                  (uVar5,param_1,*(undefined8 *)PTR_DAT_08f023e8,0);
        if (lVar11 != 0) {
          FUN_085da19c(lVar11,uVar5,0);
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      FUN_08115b90(param_1);
      return;
    }
  }
  plVar6 = (long *)Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_subscription_t_message_set
                             (lVar11);
  uVar5 = *(undefined8 *)PTR_DAT_08f023f8;
  if (plVar6 == (long *)0x0) {
    uVar7 = 0;
  }
  else {
    uVar7 = (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
  }
  uVar5 = FUN_06f683f8(uVar5,uVar7,0);
  uVar7 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e695a0);
  FUN_071396dc(uVar7,uVar5,0);
  FUN_0479df5c(lVar11,0,0,uVar7,*(undefined8 *)PTR_DAT_08f023f0);
  return;
}


