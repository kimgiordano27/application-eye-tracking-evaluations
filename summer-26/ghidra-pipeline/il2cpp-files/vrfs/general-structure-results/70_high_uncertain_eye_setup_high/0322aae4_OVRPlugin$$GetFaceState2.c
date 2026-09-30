/*
FUNCTION_NAME: OVRPlugin$$GetFaceState2
ENTRY_POINT: 0322aae4
PROGRAM: vrfs-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetFaceState2(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long *plVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  long lVar15;
  long unaff_x19;
  undefined8 *unaff_x20;
  
  thunk_FUN_0159f088(PTR_DAT_06dc18c8);
  thunk_FUN_0159f088(PTR_DAT_06e5c1a8);
  thunk_FUN_0159f088(PTR_DAT_06e68a20);
  thunk_FUN_0159f088(PTR_DAT_06df64e0);
  thunk_FUN_0159f088(PTR_DAT_06deb9f0);
  thunk_FUN_0159f088(PTR_DAT_06dc49d0);
  thunk_FUN_0159f088(PTR_DAT_06e31cb8);
  thunk_FUN_0159f088(PTR_DAT_06e4b930);
  thunk_FUN_0159f088(PTR_DAT_06e36b88);
  thunk_FUN_0159f088(PTR_DAT_06dac920);
  thunk_FUN_0159f088(PTR_DAT_06e014e8);
  thunk_FUN_0159f088(PTR_DAT_06dbbc00);
  thunk_FUN_0159f088(PTR_DAT_06def158);
  thunk_FUN_0159f088(PTR_DAT_06db5ca0);
  thunk_FUN_0159f088(PTR_DAT_06e22540);
  thunk_FUN_0159f088(PTR_DAT_06e68880);
  thunk_FUN_0159f088(PTR_DAT_06dd2b20);
  thunk_FUN_0159f088(PTR_DAT_06db57d8);
  thunk_FUN_0159f088(PTR_DAT_06e684e0);
  thunk_FUN_0159f088(PTR_DAT_06e667b0);
  thunk_FUN_0159f088(PTR_DAT_06d92ce0);
  thunk_FUN_0159f088(PTR_DAT_06e19960);
  thunk_FUN_0159f088(PTR_DAT_06d98478);
  thunk_FUN_0159f088(PTR_DAT_06dfffc0);
  thunk_FUN_0159f088(PTR_DAT_06d8c4c0);
  thunk_FUN_0159f088(PTR_DAT_06dc1b50);
  thunk_FUN_0159f088(PTR_DAT_06d9bb58);
  thunk_FUN_0159f088(PTR_DAT_06da9398);
  thunk_FUN_0159f088(PTR_DAT_06de89c0);
  thunk_FUN_0159f088(PTR_DAT_06db68c8);
  thunk_FUN_0159f088(PTR_DAT_06da20d0);
  thunk_FUN_0159f088(PTR_DAT_06de85f0);
  *(undefined1 *)(unaff_x19 + 0xeae) = 1;
  plVar11 = (long *)FUN_0160edfc(*unaff_x20,4);
  puVar2 = PTR_DAT_06da20d0;
  if (plVar11 == (long *)0x0) {
LAB_0322bb60:
                    /* WARNING: Subroutine does not return */
    FUN_0160eeb4();
  }
  if (*(long *)PTR_DAT_06da20d0 == 0) {
    lVar15 = 0;
    plVar12 = plVar11;
  }
  else {
    plVar12 = (long *)thunk_FUN_015d0480(*(long *)PTR_DAT_06da20d0,*(undefined8 *)(*plVar11 + 0x40))
    ;
    if (plVar12 == (long *)0x0) goto LAB_0322bb54;
    lVar15 = *(long *)puVar2;
  }
  puVar2 = PTR_DAT_06e014e8;
  if ((int)plVar11[3] != 0) {
    plVar11[4] = lVar15;
    plVar12 = (long *)thunk_FUN_01656ef8(plVar11 + 4,lVar15);
    lVar15 = *(long *)puVar2;
    if (lVar15 == 0) {
      lVar15 = 0;
    }
    else {
      plVar12 = (long *)thunk_FUN_015d0480(lVar15,*(undefined8 *)(*plVar11 + 0x40));
      if (plVar12 == (long *)0x0) goto LAB_0322bb54;
      lVar15 = *(long *)puVar2;
    }
    puVar2 = PTR_DAT_06dd3df8;
    if (*(uint *)(plVar11 + 3) < 2) goto LAB_0322bb50;
    plVar11[5] = lVar15;
    plVar12 = (long *)thunk_FUN_01656ef8(plVar11 + 5,lVar15);
    lVar15 = *(long *)puVar2;
    if (lVar15 == 0) {
      lVar15 = 0;
    }
    else {
      plVar12 = (long *)thunk_FUN_015d0480(lVar15,*(undefined8 *)(*plVar11 + 0x40));
      if (plVar12 == (long *)0x0) goto LAB_0322bb54;
      lVar15 = *(long *)puVar2;
    }
    puVar2 = PTR_DAT_06d9bb58;
    if (*(uint *)(plVar11 + 3) < 3) goto LAB_0322bb50;
    plVar11[6] = lVar15;
    plVar12 = (long *)thunk_FUN_01656ef8(plVar11 + 6,lVar15);
    lVar15 = *(long *)puVar2;
    if (lVar15 == 0) {
      lVar15 = 0;
    }
    else {
      plVar12 = (long *)thunk_FUN_015d0480(lVar15,*(undefined8 *)(*plVar11 + 0x40));
      if (plVar12 == (long *)0x0) goto LAB_0322bb54;
      lVar15 = *(long *)puVar2;
    }
    puVar2 = PTR_DAT_06e3f9a0;
    if (*(uint *)(plVar11 + 3) < 4) goto LAB_0322bb50;
    plVar11[7] = lVar15;
    thunk_FUN_01656ef8(plVar11 + 7,lVar15);
    **(long **)(*(long *)puVar2 + 0xb8) = (long)plVar11;
    thunk_FUN_01656ef8(*(undefined8 *)(*(long *)puVar2 + 0xb8),plVar11);
    plVar11 = (long *)FUN_0160edfc(*unaff_x20,0x10);
    puVar1 = PTR_DAT_06dfffc0;
    if (plVar11 == (long *)0x0) goto LAB_0322bb60;
    if (*(long *)PTR_DAT_06dfffc0 == 0) {
      lVar15 = 0;
      plVar12 = plVar11;
    }
    else {
      plVar12 = (long *)thunk_FUN_015d0480(*(long *)PTR_DAT_06dfffc0,
                                           *(undefined8 *)(*plVar11 + 0x40));
      if (plVar12 == (long *)0x0) goto LAB_0322bb54;
      lVar15 = *(long *)puVar1;
    }
    puVar1 = PTR_DAT_06e610a0;
    if ((int)plVar11[3] == 0) goto LAB_0322bb50;
    plVar11[4] = lVar15;
    plVar12 = (long *)thunk_FUN_01656ef8(plVar11 + 4,lVar15);
    lVar15 = *(long *)puVar1;
    if (lVar15 == 0) {
      lVar15 = 0;
    }
    else {
      plVar12 = (long *)thunk_FUN_015d0480(lVar15,*(undefined8 *)(*plVar11 + 0x40));
      if (plVar12 == (long *)0x0) goto LAB_0322bb54;
      lVar15 = *(long *)puVar1;
    }
    puVar1 = PTR_DAT_06da9398;
    if (*(uint *)(plVar11 + 3) < 2) goto LAB_0322bb50;
    plVar11[5] = lVar15;
    plVar12 = (long *)thunk_FUN_01656ef8(plVar11 + 5,lVar15);
    lVar15 = *(long *)puVar1;
    if (lVar15 == 0) {
      lVar15 = 0;
    }
    else {
      plVar12 = (long *)thunk_FUN_015d0480(lVar15,*(undefined8 *)(*plVar11 + 0x40));
      if (plVar12 == (long *)0x0) goto LAB_0322bb54;
      lVar15 = *(long *)puVar1;
    }
    puVar1 = PTR_DAT_06dac920;
    if (*(uint *)(plVar11 + 3) < 3) goto LAB_0322bb50;
    plVar11[6] = lVar15;
                    /* try { // try from 0322aee4 to 0332b017 has its CatchHandler @ 0322aee4
                       catch() { ... } // from try @ 0322aee4 with catch @ 0322aee4
                       catch() { ... } // from try @ 0322b0bc with catch @ 0322aee4
                       catch() { ... } // from try @ 0322b100 with catch @ 0322aee4
                       catch() { ... } // from try @ 0322b168 with catch @ 0322aee4
                       catch() { ... } // from try @ 0322b1f8 with catch @ 0322aee4
                       catch() { ... } // from try @ 0322b200 with catch @ 0322aee4
                       catch() { ... } // from try @ 0322b2a4 with catch @ 0322aee4 */
    plVar12 = (long *)thunk_FUN_01656ef8(plVar11 + 6,lVar15);
    lVar15 = *(long *)puVar1;
    if (lVar15 == 0) {
      lVar15 = 0;
    }
    else {
      plVar12 = (long *)thunk_FUN_015d0480(lVar15,*(undefined8 *)(*plVar11 + 0x40));
      if (plVar12 == (long *)0x0) goto LAB_0322bb54;
      lVar15 = *(long *)puVar1;
    }
    puVar1 = PTR_DAT_06dc0560;
    if (*(uint *)(plVar11 + 3) < 4) goto LAB_0322bb50;
    plVar11[7] = lVar15;
    plVar12 = (long *)thunk_FUN_01656ef8(plVar11 + 7,lVar15);
    lVar15 = *(long *)puVar1;
    if (lVar15 == 0) {
      lVar15 = 0;
    }
    else {
      plVar12 = (long *)thunk_FUN_015d0480(lVar15,*(undefined8 *)(*plVar11 + 0x40));
      if (plVar12 == (long *)0x0) goto LAB_0322bb54;
      lVar15 = *(long *)puVar1;
    }
    puVar1 = PTR_DAT_06e684e0;
    if (*(uint *)(plVar11 + 3) < 5) goto LAB_0322bb50;
    plVar11[8] = lVar15;
    plVar12 = (long *)thunk_FUN_01656ef8(plVar11 + 8,lVar15);
    lVar15 = *(long *)puVar1;
    if (lVar15 == 0) {
      lVar15 = 0;
    }
    else {
      plVar12 = (long *)thunk_FUN_015d0480(lVar15,*(undefined8 *)(*plVar11 + 0x40));
      if (plVar12 == (long *)0x0) goto LAB_0322bb54;
      lVar15 = *(long *)puVar1;
    }
    puVar1 = PTR_DAT_06deb9f0;
    if (*(uint *)(plVar11 + 3) < 6) goto LAB_0322bb50;
    plVar11[9] = lVar15;
    plVar12 = (long *)thunk_FUN_01656ef8(plVar11 + 9,lVar15);
    lVar15 = *(long *)puVar1;
    if (lVar15 == 0) {
      lVar15 = 0;
    }
    else {
      plVar12 = (long *)thunk_FUN_015d0480(lVar15,*(undefined8 *)(*plVar11 + 0x40));
      if (plVar12 == (long *)0x0) goto LAB_0322bb54;
      lVar15 = *(long *)puVar1;
    }
    puVar1 = PTR_DAT_06e4b930;
    if (*(uint *)(plVar11 + 3) < 7) goto LAB_0322bb50;
                    /* try { // try from 0322b018 to 0332b03f has its CatchHandler @ 0322b21c */
    plVar11[10] = lVar15;
    plVar12 = (long *)thunk_FUN_01656ef8(plVar11 + 10,lVar15);
    lVar15 = *(long *)puVar1;
    if (lVar15 == 0) {
      lVar15 = 0;
    }
    else {
      plVar12 = (long *)thunk_FUN_015d0480(lVar15,*(undefined8 *)(*plVar11 + 0x40));
      if (plVar12 == (long *)0x0) goto LAB_0322bb54;
      lVar15 = *(long *)puVar1;
    }
    puVar1 = PTR_DAT_06d98478;
                    /* try { // try from 0322b058 to 0332b0bb has its CatchHandler @ 0322b220 */
    if (*(uint *)(plVar11 + 3) < 8) goto LAB_0322bb50;
    plVar11[0xb] = lVar15;
    plVar12 = (long *)thunk_FUN_01656ef8(plVar11 + 0xb,lVar15);
    lVar15 = *(long *)puVar1;
    if (lVar15 == 0) {
      lVar15 = 0;
    }
    else {
      plVar12 = (long *)thunk_FUN_015d0480(lVar15,*(undefined8 *)(*plVar11 + 0x40));
      if (plVar12 == (long *)0x0) goto LAB_0322bb54;
      lVar15 = *(long *)puVar1;
    }
    puVar1 = PTR_DAT_06d8c4c0;
    if (*(uint *)(plVar11 + 3) < 9) goto LAB_0322bb50;
                    /* try { // try from 0322b0bc to 0332b0f7 has its CatchHandler @ 0322aee4 */
    plVar11[0xc] = lVar15;
    plVar12 = (long *)thunk_FUN_01656ef8(plVar11 + 0xc,lVar15);
    lVar15 = *(long *)puVar1;
    if (lVar15 == 0) {
      lVar15 = 0;
    }
    else {
      plVar12 = (long *)thunk_FUN_015d0480(lVar15,*(undefined8 *)(*plVar11 + 0x40));
      if (plVar12 == (long *)0x0) goto LAB_0322bb54;
      lVar15 = *(long *)puVar1;
    }
    puVar1 = PTR_DAT_06de89c0;
                    /* try { // try from 0322b0f8 to 0332b0ff has its CatchHandler @ 0322b214 */
                    /* try { // try from 0322b100 to 0332b15b has its CatchHandler @ 0322aee4 */
    if (*(uint *)(plVar11 + 3) < 10) goto LAB_0322bb50;
    plVar11[0xd] = lVar15;
    plVar12 = (long *)thunk_FUN_01656ef8(plVar11 + 0xd,lVar15);
    lVar15 = *(long *)puVar1;
    if (lVar15 == 0) {
      lVar15 = 0;
    }
    else {
      plVar12 = (long *)thunk_FUN_015d0480(lVar15,*(undefined8 *)(*plVar11 + 0x40));
      if (plVar12 == (long *)0x0) goto LAB_0322bb54;
      lVar15 = *(long *)puVar1;
    }
    puVar1 = PTR_DAT_06e68a20;
    if (*(uint *)(plVar11 + 3) < 0xb) goto LAB_0322bb50;
    plVar11[0xe] = lVar15;
    plVar12 = (long *)thunk_FUN_01656ef8(plVar11 + 0xe,lVar15);
    lVar15 = *(long *)puVar1;
    if (lVar15 == 0) {
      lVar15 = 0;
    }
    else {
      plVar12 = (long *)thunk_FUN_015d0480(lVar15,*(undefined8 *)(*plVar11 + 0x40));
      if (plVar12 == (long *)0x0) goto LAB_0322bb54;
      lVar15 = *(long *)puVar1;
    }
    puVar1 = PTR_DAT_06dbbc00;
    if (*(uint *)(plVar11 + 3) < 0xc) goto LAB_0322bb50;
    plVar11[0xf] = lVar15;
    plVar12 = (long *)thunk_FUN_01656ef8(plVar11 + 0xf,lVar15);
    lVar15 = *(long *)puVar1;
    if (lVar15 == 0) {
      lVar15 = 0;
    }
    else {
      plVar12 = (long *)thunk_FUN_015d0480(lVar15,*(undefined8 *)(*plVar11 + 0x40));
      if (plVar12 == (long *)0x0) goto LAB_0322bb54;
      lVar15 = *(long *)puVar1;
    }
    puVar1 = PTR_DAT_06e3d6e0;
    if (*(uint *)(plVar11 + 3) < 0xd) goto LAB_0322bb50;
    plVar11[0x10] = lVar15;
    plVar12 = (long *)thunk_FUN_01656ef8(plVar11 + 0x10,lVar15);
    lVar15 = *(long *)puVar1;
    if (lVar15 == 0) {
      lVar15 = 0;
    }
    else {
      plVar12 = (long *)thunk_FUN_015d0480(lVar15,*(undefined8 *)(*plVar11 + 0x40));
      if (plVar12 == (long *)0x0) goto LAB_0322bb54;
      lVar15 = *(long *)puVar1;
    }
    puVar1 = PTR_DAT_06e36b88;
    if (*(uint *)(plVar11 + 3) < 0xe) goto LAB_0322bb50;
    plVar11[0x11] = lVar15;
    plVar12 = (long *)thunk_FUN_01656ef8(plVar11 + 0x11,lVar15);
    lVar15 = *(long *)puVar1;
    if (lVar15 == 0) {
      lVar15 = 0;
    }
    else {
      plVar12 = (long *)thunk_FUN_015d0480(lVar15,*(undefined8 *)(*plVar11 + 0x40));
      if (plVar12 == (long *)0x0) goto LAB_0322bb54;
      lVar15 = *(long *)puVar1;
    }
    puVar1 = PTR_DAT_06dc1b50;
    if (*(uint *)(plVar11 + 3) < 0xf) goto LAB_0322bb50;
    plVar11[0x12] = lVar15;
    plVar12 = (long *)thunk_FUN_01656ef8(plVar11 + 0x12,lVar15);
    lVar15 = *(long *)puVar1;
    if (lVar15 == 0) {
      lVar15 = 0;
    }
    else {
      plVar12 = (long *)thunk_FUN_015d0480(lVar15,*(undefined8 *)(*plVar11 + 0x40));
      if (plVar12 == (long *)0x0) goto LAB_0322bb54;
      lVar15 = *(long *)puVar1;
    }
    if (*(uint *)(plVar11 + 3) < 0x10) goto LAB_0322bb50;
    plVar11[0x13] = lVar15;
    thunk_FUN_01656ef8(plVar11 + 0x13,lVar15);
    plVar12 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
    *plVar12 = (long)plVar11;
    thunk_FUN_01656ef8(plVar12,plVar11);
    plVar11 = (long *)FUN_0160edfc(*unaff_x20,4);
    puVar1 = PTR_DAT_06e19960;
    if (plVar11 == (long *)0x0) goto LAB_0322bb60;
    if (*(long *)PTR_DAT_06e19960 == 0) {
      lVar15 = 0;
      plVar12 = plVar11;
    }
    else {
      plVar12 = (long *)thunk_FUN_015d0480(*(long *)PTR_DAT_06e19960,
                                           *(undefined8 *)(*plVar11 + 0x40));
      if (plVar12 == (long *)0x0) goto LAB_0322bb54;
      lVar15 = *(long *)puVar1;
    }
    puVar1 = PTR_DAT_06dc18c8;
    if ((int)plVar11[3] == 0) goto LAB_0322bb50;
    plVar11[4] = lVar15;
    plVar12 = (long *)thunk_FUN_01656ef8(plVar11 + 4,lVar15);
    lVar15 = *(long *)puVar1;
    if (lVar15 == 0) {
      lVar15 = 0;
    }
    else {
      plVar12 = (long *)thunk_FUN_015d0480(lVar15,*(undefined8 *)(*plVar11 + 0x40));
      if (plVar12 == (long *)0x0) goto LAB_0322bb54;
      lVar15 = *(long *)puVar1;
    }
    puVar1 = PTR_DAT_06e38698;
    if (*(uint *)(plVar11 + 3) < 2) goto LAB_0322bb50;
    plVar11[5] = lVar15;
    plVar12 = (long *)thunk_FUN_01656ef8(plVar11 + 5,lVar15);
    lVar15 = *(long *)puVar1;
    if (lVar15 == 0) {
      lVar15 = 0;
    }
    else {
      plVar12 = (long *)thunk_FUN_015d0480(lVar15,*(undefined8 *)(*plVar11 + 0x40));
      if (plVar12 == (long *)0x0) goto LAB_0322bb54;
      lVar15 = *(long *)puVar1;
    }
    puVar1 = PTR_DAT_06def158;
    if (*(uint *)(plVar11 + 3) < 3) goto LAB_0322bb50;
    plVar11[6] = lVar15;
    plVar12 = (long *)thunk_FUN_01656ef8(plVar11 + 6,lVar15);
    lVar15 = *(long *)puVar1;
    if (lVar15 == 0) {
      lVar15 = 0;
    }
    else {
      plVar12 = (long *)thunk_FUN_015d0480(lVar15,*(undefined8 *)(*plVar11 + 0x40));
      if (plVar12 == (long *)0x0) goto LAB_0322bb54;
      lVar15 = *(long *)puVar1;
    }
    if (*(uint *)(plVar11 + 3) < 4) goto LAB_0322bb50;
    plVar11[7] = lVar15;
    thunk_FUN_01656ef8(plVar11 + 7,lVar15);
    plVar12 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
    *plVar12 = (long)plVar11;
    thunk_FUN_01656ef8(plVar12,plVar11);
    plVar11 = (long *)FUN_0160edfc(*unaff_x20,0xc);
    puVar1 = PTR_DAT_06d92ce0;
    if (plVar11 == (long *)0x0) goto LAB_0322bb60;
    if (*(long *)PTR_DAT_06d92ce0 == 0) {
      lVar15 = 0;
      plVar12 = plVar11;
    }
    else {
      plVar12 = (long *)thunk_FUN_015d0480(*(long *)PTR_DAT_06d92ce0,
                                           *(undefined8 *)(*plVar11 + 0x40));
      if (plVar12 == (long *)0x0) goto LAB_0322bb54;
      lVar15 = *(long *)puVar1;
    }
    puVar1 = PTR_DAT_06db68c8;
    if ((int)plVar11[3] == 0) goto LAB_0322bb50;
    plVar11[4] = lVar15;
    plVar12 = (long *)thunk_FUN_01656ef8(plVar11 + 4,lVar15);
    lVar15 = *(long *)puVar1;
    if (lVar15 == 0) {
      lVar15 = 0;
    }
    else {
      plVar12 = (long *)thunk_FUN_015d0480(lVar15,*(undefined8 *)(*plVar11 + 0x40));
      if (plVar12 == (long *)0x0) goto LAB_0322bb54;
      lVar15 = *(long *)puVar1;
    }
    puVar1 = PTR_DAT_06e5c1a8;
    if (*(uint *)(plVar11 + 3) < 2) goto LAB_0322bb50;
    plVar11[5] = lVar15;
    plVar12 = (long *)thunk_FUN_01656ef8(plVar11 + 5,lVar15);
    lVar15 = *(long *)puVar1;
    if (lVar15 == 0) {
      lVar15 = 0;
    }
    else {
      plVar12 = (long *)thunk_FUN_015d0480(lVar15,*(undefined8 *)(*plVar11 + 0x40));
      if (plVar12 == (long *)0x0) goto LAB_0322bb54;
      lVar15 = *(long *)puVar1;
    }
    puVar1 = PTR_DAT_06dc51e8;
    if (*(uint *)(plVar11 + 3) < 3) goto LAB_0322bb50;
    plVar11[6] = lVar15;
    plVar12 = (long *)thunk_FUN_01656ef8(plVar11 + 6,lVar15);
    lVar15 = *(long *)puVar1;
    if (lVar15 == 0) {
      lVar15 = 0;
    }
    else {
      plVar12 = (long *)thunk_FUN_015d0480(lVar15,*(undefined8 *)(*plVar11 + 0x40));
      if (plVar12 == (long *)0x0) goto LAB_0322bb54;
      lVar15 = *(long *)puVar1;
    }
    puVar1 = PTR_DAT_06e2fed0;
    if (*(uint *)(plVar11 + 3) < 4) goto LAB_0322bb50;
    plVar11[7] = lVar15;
    plVar12 = (long *)thunk_FUN_01656ef8(plVar11 + 7,lVar15);
    lVar15 = *(long *)puVar1;
    if (lVar15 == 0) {
      lVar15 = 0;
    }
    else {
      plVar12 = (long *)thunk_FUN_015d0480(lVar15,*(undefined8 *)(*plVar11 + 0x40));
      if (plVar12 == (long *)0x0) goto LAB_0322bb54;
      lVar15 = *(long *)puVar1;
    }
    puVar1 = PTR_DAT_06e667b0;
    if (*(uint *)(plVar11 + 3) < 5) goto LAB_0322bb50;
    plVar11[8] = lVar15;
    plVar12 = (long *)thunk_FUN_01656ef8(plVar11 + 8,lVar15);
    lVar15 = *(long *)puVar1;
    if (lVar15 == 0) {
      lVar15 = 0;
    }
    else {
      plVar12 = (long *)thunk_FUN_015d0480(lVar15,*(undefined8 *)(*plVar11 + 0x40));
      if (plVar12 == (long *)0x0) goto LAB_0322bb54;
      lVar15 = *(long *)puVar1;
    }
    puVar1 = PTR_DAT_06db5ca0;
    if (*(uint *)(plVar11 + 3) < 6) goto LAB_0322bb50;
    plVar11[9] = lVar15;
    plVar12 = (long *)thunk_FUN_01656ef8(plVar11 + 9,lVar15);
    lVar15 = *(long *)puVar1;
    if (lVar15 == 0) {
      lVar15 = 0;
    }
    else {
      plVar12 = (long *)thunk_FUN_015d0480(lVar15,*(undefined8 *)(*plVar11 + 0x40));
      if (plVar12 == (long *)0x0) goto LAB_0322bb54;
      lVar15 = *(long *)puVar1;
    }
    puVar1 = PTR_DAT_06db57d8;
    if (*(uint *)(plVar11 + 3) < 7) goto LAB_0322bb50;
    plVar11[10] = lVar15;
    plVar12 = (long *)thunk_FUN_01656ef8(plVar11 + 10,lVar15);
    lVar15 = *(long *)puVar1;
    if (lVar15 == 0) {
      lVar15 = 0;
    }
    else {
      plVar12 = (long *)thunk_FUN_015d0480(lVar15,*(undefined8 *)(*plVar11 + 0x40));
      if (plVar12 == (long *)0x0) goto LAB_0322bb54;
      lVar15 = *(long *)puVar1;
    }
    puVar1 = PTR_DAT_06e68880;
    if (*(uint *)(plVar11 + 3) < 8) goto LAB_0322bb50;
    plVar11[0xb] = lVar15;
    plVar12 = (long *)thunk_FUN_01656ef8(plVar11 + 0xb,lVar15);
    lVar15 = *(long *)puVar1;
    if (lVar15 == 0) {
      lVar15 = 0;
    }
    else {
      plVar12 = (long *)thunk_FUN_015d0480(lVar15,*(undefined8 *)(*plVar11 + 0x40));
      if (plVar12 == (long *)0x0) goto LAB_0322bb54;
      lVar15 = *(long *)puVar1;
    }
    puVar1 = PTR_DAT_06daaeb8;
    if (*(uint *)(plVar11 + 3) < 9) goto LAB_0322bb50;
    plVar11[0xc] = lVar15;
    plVar12 = (long *)thunk_FUN_01656ef8(plVar11 + 0xc,lVar15);
    lVar15 = *(long *)puVar1;
    if (lVar15 == 0) {
      lVar15 = 0;
    }
    else {
      plVar12 = (long *)thunk_FUN_015d0480(lVar15,*(undefined8 *)(*plVar11 + 0x40));
      if (plVar12 == (long *)0x0) goto LAB_0322bb54;
      lVar15 = *(long *)puVar1;
    }
    puVar1 = PTR_DAT_06e31cb8;
    if (*(uint *)(plVar11 + 3) < 10) goto LAB_0322bb50;
    plVar11[0xd] = lVar15;
    plVar12 = (long *)thunk_FUN_01656ef8(plVar11 + 0xd,lVar15);
    lVar15 = *(long *)puVar1;
    if (lVar15 == 0) {
      lVar15 = 0;
    }
    else {
      plVar12 = (long *)thunk_FUN_015d0480(lVar15,*(undefined8 *)(*plVar11 + 0x40));
      if (plVar12 == (long *)0x0) goto LAB_0322bb54;
      lVar15 = *(long *)puVar1;
    }
    puVar1 = PTR_DAT_06df64e0;
    if (*(uint *)(plVar11 + 3) < 0xb) goto LAB_0322bb50;
    plVar11[0xe] = lVar15;
    plVar12 = (long *)thunk_FUN_01656ef8(plVar11 + 0xe,lVar15);
    lVar15 = *(long *)puVar1;
    if (lVar15 == 0) {
      lVar15 = 0;
    }
    else {
      plVar12 = (long *)thunk_FUN_015d0480(lVar15,*(undefined8 *)(*plVar11 + 0x40));
      if (plVar12 == (long *)0x0) goto LAB_0322bb54;
      lVar15 = *(long *)puVar1;
    }
    if (*(uint *)(plVar11 + 3) < 0xc) goto LAB_0322bb50;
    plVar11[0xf] = lVar15;
    thunk_FUN_01656ef8(plVar11 + 0xf,lVar15);
    plVar12 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18);
    *plVar12 = (long)plVar11;
    thunk_FUN_01656ef8(plVar12,plVar11);
    plVar11 = (long *)FUN_0160edfc(*unaff_x20,5);
    puVar1 = PTR_DAT_06de85f0;
    if (plVar11 == (long *)0x0) goto LAB_0322bb60;
    if (*(long *)PTR_DAT_06de85f0 == 0) {
      lVar15 = 0;
      plVar12 = plVar11;
    }
    else {
      plVar12 = (long *)thunk_FUN_015d0480(*(long *)PTR_DAT_06de85f0,
                                           *(undefined8 *)(*plVar11 + 0x40));
      if (plVar12 == (long *)0x0) goto LAB_0322bb54;
      lVar15 = *(long *)puVar1;
    }
    puVar1 = PTR_DAT_06dab100;
    if ((int)plVar11[3] == 0) goto LAB_0322bb50;
    plVar11[4] = lVar15;
    plVar12 = (long *)thunk_FUN_01656ef8(plVar11 + 4,lVar15);
    lVar15 = *(long *)puVar1;
    if (lVar15 == 0) {
      lVar15 = 0;
    }
    else {
      plVar12 = (long *)thunk_FUN_015d0480(lVar15,*(undefined8 *)(*plVar11 + 0x40));
      if (plVar12 == (long *)0x0) goto LAB_0322bb54;
      lVar15 = *(long *)puVar1;
    }
    puVar1 = PTR_DAT_06e22540;
    if (*(uint *)(plVar11 + 3) < 2) goto LAB_0322bb50;
    plVar11[5] = lVar15;
    plVar12 = (long *)thunk_FUN_01656ef8(plVar11 + 5,lVar15);
    lVar15 = *(long *)puVar1;
    if (lVar15 == 0) {
      lVar15 = 0;
    }
    else {
      plVar12 = (long *)thunk_FUN_015d0480(lVar15,*(undefined8 *)(*plVar11 + 0x40));
      if (plVar12 == (long *)0x0) goto LAB_0322bb54;
      lVar15 = *(long *)puVar1;
    }
    puVar1 = PTR_DAT_06dc49d0;
    if (*(uint *)(plVar11 + 3) < 3) goto LAB_0322bb50;
    plVar11[6] = lVar15;
    plVar12 = (long *)thunk_FUN_01656ef8(plVar11 + 6,lVar15);
    lVar15 = *(long *)puVar1;
    if (lVar15 == 0) {
      lVar15 = 0;
    }
    else {
      plVar12 = (long *)thunk_FUN_015d0480(lVar15,*(undefined8 *)(*plVar11 + 0x40));
      if (plVar12 == (long *)0x0) goto LAB_0322bb54;
      lVar15 = *(long *)puVar1;
    }
    puVar1 = PTR_DAT_06dd2b20;
    if (3 < *(uint *)(plVar11 + 3)) {
      plVar11[7] = lVar15;
      plVar12 = (long *)thunk_FUN_01656ef8(plVar11 + 7,lVar15);
      lVar15 = *(long *)puVar1;
      if (lVar15 == 0) {
        lVar15 = 0;
      }
      else {
        plVar12 = (long *)thunk_FUN_015d0480(lVar15,*(undefined8 *)(*plVar11 + 0x40));
        if (plVar12 == (long *)0x0) {
LAB_0322bb54:
          uVar13 = thunk_FUN_015f0d94();
                    /* WARNING: Subroutine does not return */
          FUN_0160ee7c(uVar13,0);
        }
        lVar15 = *(long *)puVar1;
      }
      puVar10 = PTR_DAT_06e5fef8;
      puVar9 = PTR_DAT_06e4c488;
      puVar8 = PTR_DAT_06e458d0;
      puVar7 = PTR_DAT_06e378f8;
      puVar6 = PTR_DAT_06e0ddc8;
      puVar5 = PTR_DAT_06df8e58;
      puVar4 = PTR_DAT_06dd9ff0;
      puVar3 = PTR_DAT_06dd6a90;
      puVar1 = PTR_DAT_06da8dc0;
      if (4 < *(uint *)(plVar11 + 3)) {
        plVar11[8] = lVar15;
        thunk_FUN_01656ef8();
        plVar12 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x20);
        *plVar12 = (long)plVar11;
        thunk_FUN_01656ef8(plVar12,plVar11);
        uVar13 = FUN_0160edfc(*(undefined8 *)puVar4,0x100);
        FUN_02df8d44(uVar13,*(undefined8 *)puVar5,0);
        puVar14 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x28);
        *puVar14 = uVar13;
        thunk_FUN_01656ef8(puVar14,uVar13);
        uVar13 = FUN_0160edfc(*(undefined8 *)puVar6,0x1e);
        FUN_02df8d44(uVar13,*(undefined8 *)puVar8,0);
        puVar14 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x30);
        *puVar14 = uVar13;
        thunk_FUN_01656ef8(puVar14,uVar13);
        uVar13 = FUN_0160edfc(*(undefined8 *)puVar10,0xf);
        FUN_02df8d44(uVar13,*(undefined8 *)puVar3,0);
        puVar14 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x38);
        *puVar14 = uVar13;
        thunk_FUN_01656ef8(puVar14,uVar13);
        uVar13 = FUN_0160edfc(*(undefined8 *)puVar6,0x2a);
        FUN_02df8d44(uVar13,*(undefined8 *)puVar7,0);
        puVar14 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x40);
        *puVar14 = uVar13;
        thunk_FUN_01656ef8(puVar14,uVar13);
        uVar13 = FUN_0160edfc(*(undefined8 *)puVar1,0x15);
        FUN_02df8d44(uVar13,*(undefined8 *)puVar9,0);
        puVar14 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x48);
        *puVar14 = uVar13;
        thunk_FUN_01656ef8(puVar14,uVar13);
        return;
      }
    }
  }
LAB_0322bb50:
                    /* WARNING: Subroutine does not return */
  FUN_0160eebc(plVar12,lVar15);
}


