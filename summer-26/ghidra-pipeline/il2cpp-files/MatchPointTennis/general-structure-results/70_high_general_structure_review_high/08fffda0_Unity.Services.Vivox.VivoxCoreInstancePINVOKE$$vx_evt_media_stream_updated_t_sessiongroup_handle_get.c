/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_media_stream_updated_t_sessiongroup_handle_get
ENTRY_POINT: 08fffda0
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_11;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x090003f8) */

long Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_media_stream_updated_t_sessiongroup_handle_get
               (void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  undefined8 *unaff_x19;
  long unaff_x20;
  long *plVar13;
  long unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  undefined8 uVar14;
  undefined8 *unaff_x24;
  undefined1 auVar15 [16];
  
  FUN_04447ba8();
                    /* try { // try from 08fffda8 to 090ffdab has its CatchHandler @ 08ffff68 */
  FUN_04447ba8(PTR_DAT_09f20710);
                    /* try { // try from 08fffdb8 to 090ffdbb has its CatchHandler @ 08ffff54 */
  FUN_04447ba8(PTR_DAT_09fbe9b0);
                    /* try { // try from 08fffdbc to 090ffdbf has its CatchHandler @ 08ffff60 */
                    /* try { // try from 08fffdc0 to 090ffdc3 has its CatchHandler @ 08ffff5c */
  FUN_04447ba8(PTR_DAT_09fba378);
                    /* try { // try from 08fffdc8 to 090ffdcb has its CatchHandler @ 08ffff50 */
                    /* try { // try from 08fffdcc to 090ffdcf has its CatchHandler @ 08ffff58 */
                    /* try { // try from 08fffdd0 to 090ffdd3 has its CatchHandler @ 08ffff68 */
  FUN_04447ba8(PTR_DAT_09f1f008);
                    /* try { // try from 08fffdd4 to 090ffde3 has its CatchHandler @ 08fff83c */
  FUN_04447ba8(PTR_DAT_09f2bbb0);
                    /* try { // try from 08fffde4 to 090ffdf3 has its CatchHandler @ 08ffff70 */
  FUN_04447ba8(PTR_DAT_09f2bbb8);
  FUN_04447ba8(PTR_DAT_09f1f018);
                    /* try { // try from 08fffdfc to 090ffdff has its CatchHandler @ 08ffff4c */
  FUN_04447ba8(PTR_DAT_09f20dd0);
                    /* try { // try from 08fffe08 to 090ffe0b has its CatchHandler @ 08ffff48 */
  FUN_04447ba8(PTR_DAT_09f20dd8);
                    /* try { // try from 08fffe18 to 090ffe27 has its CatchHandler @ 08ffff40 */
  FUN_04447ba8(PTR_DAT_09f1e5f0);
  FUN_04447ba8(PTR_DAT_09f20c90);
                    /* try { // try from 08fffe28 to 090ffe6f has its CatchHandler @ 08ffff44 */
  FUN_04447ba8(PTR_DAT_09f22ad0);
  FUN_04447ba8(PTR_DAT_09fbadf0);
  FUN_04447ba8(PTR_DAT_09fb9e28);
  FUN_04447ba8(PTR_DAT_09fbadf8);
  FUN_04447ba8(PTR_DAT_09f20e08);
  FUN_04447ba8(PTR_DAT_09f20e28);
  FUN_04447ba8(PTR_DAT_09fbf2e8);
  FUN_04447ba8(PTR_DAT_09fbae00);
  FUN_04447ba8(PTR_DAT_09fbae08);
  FUN_04447ba8(PTR_DAT_09fbae10);
  FUN_04447ba8(PTR_DAT_09f22ec0);
  FUN_04447ba8(PTR_DAT_09f22d90);
  FUN_04447ba8(PTR_DAT_09fbf2f0);
  *(undefined1 *)(unaff_x23 + 0x53f) = 1;
  lVar6 = thunk_FUN_0448520c(*unaff_x24);
  FUN_07441bc0(lVar6,*unaff_x19);
  puVar1 = PTR_DAT_09fba378;
  if (unaff_x22 == (long *)0x0) {
LAB_090003ec:
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  lVar10 = *unaff_x22;
  uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_09fba378) {
        puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
        goto LAB_08ffff38;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  puVar7 = (undefined8 *)FUN_044822ac();
LAB_08ffff38:
  puVar2 = PTR_DAT_09f20720;
  uVar8 = (*(code *)*puVar7)();
  uVar11 = FUN_078b4450(uVar8,0);
  if ((uVar11 & 1) == 0) {
    lVar10 = *unaff_x22;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
          puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_08ffffa4;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar7 = (undefined8 *)FUN_044822ac();
LAB_08ffffa4:
    uVar8 = (*(code *)*puVar7)();
    uVar8 = FUN_078a7764(*(undefined8 *)PTR_DAT_09f22d90,uVar8,0);
    if (lVar6 == 0) goto LAB_090003ec;
    FUN_0744298c(lVar6,*(undefined8 *)PTR_DAT_09fbae10,uVar8,*(undefined8 *)puVar2);
  }
  if (*(int *)(*(long *)PTR_DAT_09f1e6b8 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  uVar8 = FUN_094bc3a0(0);
  puVar5 = PTR_DAT_09fbe9b0;
  puVar4 = PTR_DAT_09fbae08;
  puVar7 = (undefined8 *)PTR_DAT_09fbae00;
  puVar3 = PTR_DAT_09fbadf8;
  puVar1 = PTR_DAT_09f1e5f0;
  if (lVar6 == 0) goto LAB_090003ec;
  FUN_0744298c(lVar6,*(undefined8 *)PTR_DAT_09fbadf0,uVar8,*(undefined8 *)puVar2);
  if (**(char **)(*(long *)puVar5 + 0xb8) != '\0') {
    puVar7 = (undefined8 *)puVar3;
  }
  FUN_0744298c(lVar6,*(undefined8 *)puVar4,*puVar7,*(undefined8 *)puVar2);
  lVar10 = FUN_04447c90(*(undefined8 *)puVar1,1);
  puVar3 = PTR_DAT_09f20e28;
  if (lVar10 == 0) goto LAB_090003ec;
  if (*(int *)(lVar10 + 0x18) == 0) goto LAB_090003f0;
  *(undefined8 *)(lVar10 + 0x20) = *(undefined8 *)PTR_DAT_09f20e28;
  thunk_FUN_044bb4b4();
  lVar9 = FUN_04447c90(*(undefined8 *)puVar1,2);
  if (lVar9 == 0) goto LAB_090003ec;
  if (*(int *)(lVar9 + 0x18) == 0) {
LAB_090003f0:
                    /* WARNING: Subroutine does not return */
    FUN_04447e4c();
  }
  *(undefined8 *)(lVar9 + 0x20) = *(undefined8 *)puVar3;
  thunk_FUN_044bb4b4((undefined8 *)(lVar9 + 0x20));
  puVar1 = PTR_DAT_09f20c90;
  if (*(uint *)(lVar9 + 0x18) < 2) goto LAB_090003f0;
  *(undefined8 *)(lVar9 + 0x28) = *(undefined8 *)PTR_DAT_09fb9e28;
  uVar8 = thunk_FUN_044bb4b4();
  uVar8 = FUN_08fff520(uVar8,lVar9);
  uVar11 = FUN_078b4450(uVar8,0);
  if ((uVar11 & 1) == 0) {
    uVar11 = FUN_0744298c(lVar6,*(undefined8 *)PTR_DAT_09f22ad0,uVar8,*(undefined8 *)puVar2);
  }
  uVar14 = *(undefined8 *)puVar1;
  uVar8 = FUN_08fff5f8(uVar11,lVar10);
  uVar11 = FUN_078b4450(uVar8,0);
  if ((uVar11 & 1) != 0) {
    uVar11 = thunk_FUN_078b3114(uVar14,*(undefined8 *)puVar1,0);
    if (((uVar11 & 1) == 0) &&
       (uVar11 = thunk_FUN_078b3114(uVar14,*(undefined8 *)PTR_DAT_09f22ec0,0), (uVar11 & 1) == 0))
    goto LAB_090001ac;
    uVar8 = *(undefined8 *)puVar3;
  }
  FUN_0744298c(lVar6,*(undefined8 *)PTR_DAT_09f20e08,uVar8,*(undefined8 *)puVar2);
LAB_090001ac:
  uVar11 = FUN_078b4450(*(undefined8 *)(unaff_x21 + 0x38),0);
  if ((uVar11 & 1) == 0) {
    FUN_0744298c(lVar6,*(undefined8 *)PTR_DAT_09fbf2f0,*(undefined8 *)(unaff_x21 + 0x38),
                 *(undefined8 *)puVar2);
  }
  uVar11 = FUN_078b4450(*(undefined8 *)(unaff_x21 + 0x40),0);
  if ((uVar11 & 1) == 0) {
    FUN_0744298c(lVar6,*(undefined8 *)PTR_DAT_09fbf2e8,*(undefined8 *)(unaff_x21 + 0x40),
                 *(undefined8 *)puVar2);
  }
  if ((unaff_x20 == 0) || (plVar13 = *(long **)(unaff_x20 + 0x28), plVar13 == (long *)0x0)) {
    return lVar6;
  }
  lVar10 = *plVar13;
  uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_09f2bbb0) {
        puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
        goto LAB_09000264;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  puVar7 = (undefined8 *)FUN_044822ac(plVar13,*(long *)PTR_DAT_09f2bbb0,0);
LAB_09000264:
  plVar13 = (long *)(*(code *)*puVar7)(plVar13,puVar7[1]);
  puVar3 = PTR_DAT_09f2bbb8;
  puVar2 = PTR_DAT_09f20670;
  puVar1 = PTR_DAT_09f1f018;
  if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  do {
    lVar10 = *plVar13;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
          puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_090002dc;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar7 = (undefined8 *)FUN_044822ac(plVar13,*(long *)puVar1,0);
LAB_090002dc:
    uVar11 = (*(code *)*puVar7)(plVar13,puVar7[1]);
    if ((uVar11 & 1) == 0) break;
    lVar10 = *plVar13;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
          puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_09000338;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar7 = (undefined8 *)FUN_044822ac(plVar13,*(long *)puVar3,0);
LAB_09000338:
    auVar15 = (*(code *)*puVar7)(plVar13,puVar7[1]);
    FUN_07442978(lVar6,auVar15._0_8_,auVar15._8_8_,*(undefined8 *)puVar2);
  } while( true );
  if (plVar13 == (long *)0x0) {
    return lVar6;
  }
  lVar10 = *plVar13;
  uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_09f1f008) {
        puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
        goto LAB_090003c0;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  puVar7 = (undefined8 *)FUN_044822ac(plVar13,*(long *)PTR_DAT_09f1f008,0);
LAB_090003c0:
  (*(code *)*puVar7)(plVar13,puVar7[1]);
  return lVar6;
}


