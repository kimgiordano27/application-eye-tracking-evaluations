/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_sessiongroup_get_stats_t_base__set
ENTRY_POINT: 08157ddc
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_sessiongroup_get_stats_t_base__set(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 *puVar11;
  undefined8 unaff_x21;
  long *plVar12;
  long unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *puVar13;
  undefined8 *unaff_x26;
  
  FUN_03c8f898(PTR_DAT_08f04628);
  FUN_03c8f898(PTR_DAT_08f04630);
  FUN_03c8f898(PTR_DAT_08f04638);
                    /* try { // try from 08157e04 to 08257e3b has its CatchHandler @ 08157d14 */
  FUN_03c8f898(PTR_DAT_08f04600);
  *(undefined1 *)(unaff_x19 + 0xf60) = 1;
  uVar5 = thunk_FUN_03cf5234(*unaff_x26);
                    /* catch(type#1 @ 088de0a8) { ... } // from try @ 08157d8c with catch @ 08157e20
                        */
                    /* catch(type#1 @ 088de0a8) { ... } // from try @ 08157dc4 with catch @ 08157e24
                        */
  FUN_07145224(uVar5,0);
  *(undefined8 *)(unaff_x22 + 0x38) = uVar5;
  thunk_FUN_03d233cc((undefined8 *)(unaff_x22 + 0x38),uVar5);
                    /* try { // try from 08157e3c to 08257e3f has its CatchHandler @ 08157e60 */
  uVar5 = thunk_FUN_03cf5234(*unaff_x26);
                    /* try { // try from 08157e40 to 08257e63 has its CatchHandler @ 08157d14 */
  FUN_07145224(uVar5,0);
  *(undefined8 *)(unaff_x22 + 0x40) = uVar5;
  thunk_FUN_03d233cc((undefined8 *)(unaff_x22 + 0x40),uVar5);
  lVar6 = thunk_FUN_03cf5234(*unaff_x25);
  FUN_07145224(lVar6,0);
  puVar4 = PTR_DAT_08f04628;
  puVar3 = PTR_DAT_08f04620;
  puVar2 = PTR_DAT_08f04618;
  puVar1 = PTR_DAT_08e6eab8;
  if (lVar6 != 0) {
    puVar13 = (undefined8 *)(lVar6 + 0x18);
    *puVar13 = unaff_x20;
    thunk_FUN_03d233cc(puVar13);
    FUN_07145224();
    *(long *)(lVar6 + 0x10) = unaff_x22;
    thunk_FUN_03d233cc();
    puVar11 = (undefined8 *)(unaff_x22 + 0x10);
    *puVar11 = unaff_x24;
    thunk_FUN_03d233cc(puVar11);
    *(undefined8 *)(unaff_x22 + 0x48) = *puVar13;
    thunk_FUN_03d233cc();
    uVar5 = thunk_FUN_03cf5234(*(undefined8 *)puVar3);
    FUN_05a7116c(uVar5,*(undefined8 *)puVar2);
    *(undefined8 *)(unaff_x22 + 0x30) = uVar5;
    thunk_FUN_03d233cc((undefined8 *)(unaff_x22 + 0x30),uVar5);
    *(undefined8 *)(unaff_x22 + 0x20) = unaff_x23;
    thunk_FUN_03d233cc();
    *(undefined8 *)(unaff_x22 + 0x28) = unaff_x21;
    thunk_FUN_03d233cc((undefined8 *)(unaff_x22 + 0x28));
    plVar12 = (long *)*puVar11;
    uVar5 = thunk_FUN_03cf5234(*(undefined8 *)puVar1);
    System_Array_InternalEnumerator<Dictionary_Entry<object,_OvrGpuMorphTargetsCombiner_BlockData>>___ctor
              (uVar5,lVar6,*(undefined8 *)puVar4,0);
    puVar3 = PTR_DAT_08f04630;
    puVar2 = PTR_DAT_08f04610;
    puVar1 = PTR_DAT_08e69e98;
    if (plVar12 != (long *)0x0) {
      lVar7 = *plVar12;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_08f04610) {
            puVar13 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_08157fb4;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar13 = (undefined8 *)FUN_03cf1348(plVar12,*(long *)PTR_DAT_08f04610,0);
LAB_08157fb4:
      (*(code *)*puVar13)(plVar12,uVar5,puVar13[1]);
      plVar12 = (long *)*puVar11;
      uVar5 = thunk_FUN_03cf5234(*(undefined8 *)puVar1);
      FUN_07064478(uVar5,lVar6,*(undefined8 *)puVar3,0);
      puVar3 = PTR_DAT_08f04638;
      puVar1 = PTR_DAT_08f04608;
      if (plVar12 != (long *)0x0) {
        lVar8 = *plVar12;
        lVar7 = *(long *)puVar2;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == lVar7) {
              puVar13 = (undefined8 *)(lVar8 + (long)(*piVar10 + 4) * 0x10 + 0x138);
              goto LAB_08158048;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar13 = (undefined8 *)FUN_03cf1348(plVar12,lVar7,4);
LAB_08158048:
        (*(code *)*puVar13)(plVar12,uVar5,puVar13[1]);
        plVar12 = (long *)*puVar11;
        uVar5 = thunk_FUN_03cf5234(*(undefined8 *)puVar1);
        FUN_04cee708(uVar5,lVar6,*(undefined8 *)puVar3,0);
        if (plVar12 != (long *)0x0) {
          lVar7 = *plVar12;
          lVar6 = *(long *)puVar2;
          uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == lVar6) {
                puVar11 = (undefined8 *)(lVar7 + (long)(*piVar10 + 6) * 0x10 + 0x138);
                goto LAB_081580cc;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar11 = (undefined8 *)FUN_03cf1348(plVar12,lVar6,6);
LAB_081580cc:
                    /* WARNING: Could not recover jumptable at 0x081580f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)*puVar11)(plVar12,uVar5,puVar11[1]);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


