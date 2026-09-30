/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsJsonParser$$TryParseArray
ENTRY_POINT: 082eda48
PROGRAM: m3ar-libil2cpp.so
SCORE: 88
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_14;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


void Unity_VisualScripting_FullSerializer_fsJsonParser__TryParseArray(void)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 in_w8;
  long lVar8;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  long *unaff_x23;
  
                    /* try { // try from 082eda48 to 083eda4b has its CatchHandler @ 082edbc8 */
  *(undefined1 *)(unaff_x20 + 0xb53) = in_w8;
  uVar9 = *(undefined8 *)(unaff_x19 + 0x128);
  if (*(int *)(*unaff_x23 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
                    /* try { // try from 082eda64 to 083eda83 has its CatchHandler @ 082edbb8 */
  uVar4 = FUN_0858816c(uVar9,0,0);
  if ((uVar4 & 1) == 0) {
    return;
  }
  if (*(long *)(unaff_x19 + 0x128) == 0) goto LAB_082ede70;
  uVar9 = *(undefined8 *)(*(long *)(unaff_x19 + 0x128) + 0xf8);
  if (*(int *)(*unaff_x23 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  uVar4 = FUN_0858816c(uVar9,0,0);
  if ((uVar4 & 1) == 0) {
    return;
  }
  if (*(char *)(unaff_x19 + 0x298) != '\0') {
    return;
  }
  *(undefined1 *)(unaff_x19 + 0x298) = 1;
  iVar2 = FUN_082ece68();
  if ((iVar2 < 1) || (*(char *)(unaff_x19 + 0x220) != '\0')) {
    lVar10 = *(long *)(unaff_x19 + 0x210);
                    /* try { // try from 082edad4 to 083edb0f has its CatchHandler @ 082edbc8 */
    *(undefined2 *)(unaff_x19 + 0x2a9) = 0x100;
  }
  else {
    FUN_082f4950();
    if (*(char *)(unaff_x19 + 0x221) == '\0') {
                    /* try { // try from 082edbac to 083edbaf has its CatchHandler @ 082edbc4 */
                    /* try { // try from 082edbb0 to 083edbb3 has its CatchHandler @ 082edbc8 */
      if (*(long *)(unaff_x19 + 0x210) == 0) goto LAB_082ede70;
                    /* catch(type#1 @ 08931438) { ... } // from try @ 082eda2c with catch @ 082edbb4
                       try { // try from 082edbb4 to 083edbe3 has its CatchHandler @ 082ed854 */
                    /* catch(type#1 @ 08931438) { ... } // from try @ 082eda64 with catch @ 082edbb8
                        */
                    /* catch(type#1 @ 08931438) { ... } // from try @ 082edba8 with catch @ 082edbbc
                        */
                    /* catch(type#1 @ 08931438) { ... } // from try @ 082edb9c with catch @ 082edbc0
                        */
      uVar9 = FUN_0736b7b4(*(long *)(unaff_x19 + 0x210),0,*(undefined4 *)(unaff_x19 + 0x224),0);
                    /* catch(type#1 @ 08931438) { ... } // from try @ 082ed9e4 with catch @ 082edbc4
                       catch(type#1 @ 08931438) { ... } // from try @ 082edbac with catch @ 082edbc4
                        */
                    /* catch(type#1 @ 08931438) { ... } // from try @ 082eda48 with catch @ 082edbc8
                       catch(type#1 @ 08931438) { ... } // from try @ 082edad4 with catch @ 082edbc8
                       catch(type#1 @ 08931438) { ... } // from try @ 082edbb0 with catch @ 082edbc8
                        */
      uVar5 = FUN_082ecdd4();
      if (*(long *)(unaff_x19 + 0x210) == 0) goto LAB_082ede70;
                    /* try { // try from 082edbe4 to 083edbe7 has its CatchHandler @ 082edbf0 */
      uVar6 = FUN_0736da40(*(long *)(unaff_x19 + 0x210),*(undefined4 *)(unaff_x19 + 0x224),0);
                    /* catch() { ... } // from try @ 082edbe4 with catch @ 082edbf0 */
                    /* try { // try from 082edbf4 to 083edbfb has its CatchHandler @ 082edc04 */
      lVar10 = FUN_0736972c(uVar9,uVar5,uVar6,0);
    }
    else {
      lVar10 = FUN_040316d0(*(undefined8 *)PTR_DAT_08f65db8,5);
                    /* try { // try from 082edb10 to 083edb9b has its CatchHandler @ 082ed854 */
      if ((*(long *)(unaff_x19 + 0x210) == 0) ||
         (uVar9 = FUN_0736b7b4(*(long *)(unaff_x19 + 0x210),0,*(undefined4 *)(unaff_x19 + 0x224),0),
         lVar10 == 0)) goto LAB_082ede70;
      if ((*(int *)(lVar10 + 0x18) == 0) ||
         (*(undefined8 *)(lVar10 + 0x20) = uVar9, *(int *)(lVar10 + 0x18) == 1)) goto LAB_082ede74;
      *(undefined8 *)(lVar10 + 0x28) = *(undefined8 *)PTR_DAT_08ff7558;
      uVar9 = FUN_082ecdd4();
      if ((*(uint *)(lVar10 + 0x18) < 3) ||
         (*(undefined8 *)(lVar10 + 0x30) = uVar9, *(uint *)(lVar10 + 0x18) == 3)) goto LAB_082ede74;
      *(undefined8 *)(lVar10 + 0x38) = *(undefined8 *)PTR_DAT_08ff7560;
      if (*(long *)(unaff_x19 + 0x210) == 0) goto LAB_082ede70;
      uVar9 = FUN_0736da40(*(long *)(unaff_x19 + 0x210),*(undefined4 *)(unaff_x19 + 0x224),0);
      if (*(uint *)(lVar10 + 0x18) < 5) goto LAB_082ede74;
      *(undefined8 *)(lVar10 + 0x40) = uVar9;
                    /* try { // try from 082edb9c to 083edb9f has its CatchHandler @ 082edbc0 */
                    /* try { // try from 082edba0 to 083edba7 has its CatchHandler @ 082ed854 */
      lVar10 = FUN_07369f9c(lVar10,0);
                    /* try { // try from 082edba8 to 083edbab has its CatchHandler @ 082edbbc */
    }
                    /* try { // try from 082edbfc to 083edc07 has its CatchHandler @ 082ed854 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 082edbf4 with catch @ 082edc04
                        */
    *(undefined1 *)(unaff_x19 + 0x2a9) = 1;
  }
  lVar7 = lVar10;
  if (*(int *)(unaff_x19 + 0x174) == 2) {
    if (lVar10 == 0) goto LAB_082ede70;
    lVar7 = FUN_0736fc4c(0,*(undefined2 *)(unaff_x19 + 0x178),*(undefined4 *)(lVar10 + 0x10),0);
  }
  uVar3 = FUN_07368ba4(lVar10,0);
  uVar9 = *(undefined8 *)(unaff_x19 + 0x138);
  if (*(int *)(*unaff_x23 + 0xe4) == 0) {
    thunk_FUN_0408f364(*unaff_x23);
  }
  uVar4 = FUN_0858816c(uVar9,0,0);
  if ((uVar4 & 1) != 0) {
    if (*(long *)(unaff_x19 + 0x138) == 0) goto LAB_082ede70;
    FUN_08584234(*(long *)(unaff_x19 + 0x138),uVar3 & 1,0);
  }
  if (((uVar3 & 1) == 0) && (*(char *)(unaff_x19 + 0x220) == '\0')) {
    FUN_082f0cac();
  }
  puVar1 = PTR_DAT_08ff7550;
  plVar11 = *(long **)(unaff_x19 + 0x128);
  uVar9 = FUN_0735c7b4(lVar7,*(undefined8 *)PTR_DAT_08ff7550,0);
  if (plVar11 == (long *)0x0) goto LAB_082ede70;
  (**(code **)(*plVar11 + 0x558))(plVar11,uVar9,*(undefined8 *)(*plVar11 + 0x560));
  if (*(char *)(unaff_x19 + 0x150) != '\0') {
    uVar9 = *(undefined8 *)(unaff_x19 + 0x108);
    if (*(int *)(*(long *)PTR_DAT_08f6c2e0 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    FUN_088768a4(uVar9,0);
  }
  if (0 < *(int *)(unaff_x19 + 0x2d4)) {
    plVar11 = *(long **)(unaff_x19 + 0x128);
    if (plVar11 == (long *)0x0) goto LAB_082ede70;
    (**(code **)(*plVar11 + 0x7d8))(plVar11,0,0,*(undefined8 *)(*plVar11 + 0x7e0));
    if (*(long *)(unaff_x19 + 0x128) == 0) goto LAB_082ede70;
    lVar10 = FUN_082fb63c(*(long *)(unaff_x19 + 0x128),0);
    if ((lVar10 != 0) && (*(int *)(unaff_x19 + 0x2d4) < *(int *)(lVar10 + 0x2c))) {
      lVar8 = *(long *)(lVar10 + 0x50);
      if (lVar8 == 0) goto LAB_082ede70;
      uVar3 = *(int *)(unaff_x19 + 0x2d4) - 1;
      if (*(uint *)(lVar8 + 0x18) <= uVar3) {
LAB_082ede74:
                    /* WARNING: Subroutine does not return */
        FUN_04031894();
      }
      lVar10 = *(long *)(lVar10 + 0x38);
      if (lVar10 == 0) goto LAB_082ede70;
      uVar3 = *(uint *)(lVar8 + (long)(int)uVar3 * 0x60 + 0x40);
      if (*(uint *)(lVar10 + 0x18) <= uVar3) goto LAB_082ede74;
      if (lVar7 == 0) goto LAB_082ede70;
      lVar10 = lVar10 + (long)(int)uVar3 * 0x178;
      iVar2 = *(int *)(lVar10 + 0x28) + *(int *)(lVar10 + 0x2c);
      FUN_0736b578(lVar7,iVar2,*(int *)(lVar7 + 0x10) - iVar2,0);
      FUN_082ed8a8();
      plVar11 = *(long **)(unaff_x19 + 0x128);
      uVar9 = FUN_0735c7b4(*(undefined8 *)(unaff_x19 + 0x210),*(undefined8 *)puVar1,0);
      if (plVar11 == (long *)0x0) goto LAB_082ede70;
      (**(code **)(*plVar11 + 0x558))(plVar11,uVar9,*(undefined8 *)(*plVar11 + 0x560));
    }
  }
  if (*(char *)(unaff_x19 + 0x29a) == '\0') {
    uVar9 = *(undefined8 *)(unaff_x19 + 0x140);
    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    uVar4 = FUN_0858df34(uVar9,0);
    if (((uVar4 & 1) == 0) ||
       ((*(char *)(unaff_x19 + 0x2eb) != '\0' && (*(char *)(unaff_x19 + 0x2ea) != '\0'))))
    goto LAB_082ede54;
  }
  plVar11 = *(long **)(unaff_x19 + 0x128);
  *(undefined1 *)(unaff_x19 + 0x29a) = 0;
  if (plVar11 == (long *)0x0) {
LAB_082ede70:
                    /* WARNING: Subroutine does not return */
    FUN_0403188c();
  }
  (**(code **)(*plVar11 + 0x7d8))(plVar11,0,0,*(undefined8 *)(*plVar11 + 0x7e0));
LAB_082ede54:
  FUN_082ee030();
  *(undefined1 *)(unaff_x19 + 0x298) = 0;
  return;
}


