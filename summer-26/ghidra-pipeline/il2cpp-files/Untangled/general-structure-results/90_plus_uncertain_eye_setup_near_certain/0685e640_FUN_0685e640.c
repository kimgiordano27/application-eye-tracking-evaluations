/*
FUNCTION_NAME: FUN_0685e640
ENTRY_POINT: 0685e640
PROGRAM: Untangled-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_9;weak_xr_or_state_hits_9;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_9
*/


void FUN_0685e640(long param_1)

{
  undefined4 uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  undefined8 uVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 *puVar11;
  long *plVar12;
  undefined8 uVar13;
  int *piVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auVar23 [16];
  
  if ((DAT_071d6b7c & 1) == 0) {
    FUN_02f07e70(PTR_DAT_06d39e48);
    FUN_02f07e70(PTR_DAT_06d3a2c8);
    FUN_02f07e70(PTR_DAT_06d02708);
    FUN_02f07e70(PTR_DAT_06d39e50);
    FUN_02f07e70(PTR_DAT_06d382e0);
    FUN_02f07e70(PTR_DAT_06d0fd68);
    FUN_02f07e70(OVRPlugin_OVRP_1_93_0_TypeInfo);
    FUN_02f07e70(OVRPlugin_OVRP_1_91_0_TypeInfo);
    FUN_02f07e70(OVRPlugin_OVRP_1_94_0_TypeInfo);
    FUN_02f07e70(OVRPlugin_OVRP_1_95_0_TypeInfo);
    DAT_071d6b7c = 1;
  }
  if (*(long *)(param_1 + 0x408) == 0) goto LAB_0685f9f0;
  iVar7 = FUN_068d0c94(*(long *)(param_1 + 0x408),0);
  puVar5 = PTR_DAT_06d39e50;
  if (iVar7 != 2) {
    if (*(int *)(*(long *)PTR_DAT_06d02708 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    FUN_06693dbc(*(undefined8 *)OVRPlugin_OVRP_1_95_0_TypeInfo,0);
    return;
  }
  lVar16 = *(long *)(param_1 + 0x3f8);
  uVar8 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d39e50);
  puVar6 = OVRPlugin_OVRP_1_91_0_TypeInfo;
  FUN_05025f00(uVar8,param_1,*(undefined8 *)OVRPlugin_OVRP_1_91_0_TypeInfo,0);
  if (lVar16 == 0) goto LAB_0685f9f0;
  FUN_037e9794(lVar16,uVar8,0,*(undefined8 *)PTR_DAT_06d3a2c8);
  uVar9 = FUN_05465718(*(undefined8 *)(param_1 + 0x58),0);
  lVar16 = 0x418;
  if ((uVar9 & 1) == 0) {
    lVar16 = 1000;
  }
  if ((*(float *)(param_1 + lVar16) < 0.0) &&
     (*(float *)(param_1 + 1000) != *(float *)(param_1 + 0x418))) {
    *(float *)(param_1 + 1000) = *(float *)(param_1 + 0x418);
    FUN_068cc894(param_1,0);
  }
  uVar9 = FUN_05465718(*(undefined8 *)(param_1 + 0x58),0);
  lVar16 = 0x418;
  if ((uVar9 & 1) == 0) {
    lVar16 = 1000;
  }
  fVar22 = *(float *)(param_1 + lVar16);
  FUN_0685fd54(param_1);
  if (*(long *)(param_1 + 0x3d8) == 0) goto LAB_0685f9f0;
  plVar10 = (long *)FUN_068c633c(*(long *)(param_1 + 0x3d8),0);
  auVar23 = FUN_068d727c(1,0);
  puVar3 = PTR_DAT_06d0fd68;
  if (plVar10 == (long *)0x0) goto LAB_0685f9f0;
  lVar16 = *plVar10;
  uVar9 = (ulong)*(ushort *)(lVar16 + 0x12e);
  if (uVar9 != 0) {
    piVar14 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
    do {
      if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_06d0fd68) {
        puVar11 = (undefined8 *)(lVar16 + (long)(*piVar14 + 0x14) * 0x10 + 0x138);
        goto LAB_0685e88c;
      }
      uVar9 = uVar9 - 1;
      piVar14 = piVar14 + 4;
    } while (uVar9 != 0);
  }
  puVar11 = (undefined8 *)FUN_02eea86c(plVar10,*(long *)PTR_DAT_06d0fd68,0x14);
LAB_0685e88c:
  (*(code *)*puVar11)(plVar10,auVar23._0_8_,auVar23._8_8_ & 0xffffffff,puVar11[1]);
  if (*(long *)(param_1 + 0x3d8) == 0) goto LAB_0685f9f0;
  plVar10 = (long *)FUN_068c633c(*(long *)(param_1 + 0x3d8),0);
  uVar8 = FUN_068d72ec(1,0);
  if (plVar10 == (long *)0x0) goto LAB_0685f9f0;
  lVar16 = *plVar10;
  uVar9 = (ulong)*(ushort *)(lVar16 + 0x12e);
  if (uVar9 != 0) {
    piVar14 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
    do {
      if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
        puVar11 = (undefined8 *)(lVar16 + (long)(*piVar14 + 0x17) * 0x10 + 0x138);
        goto LAB_0685e918;
      }
      uVar9 = uVar9 - 1;
      piVar14 = piVar14 + 4;
    } while (uVar9 != 0);
  }
  puVar11 = (undefined8 *)FUN_02eea86c(plVar10,*(long *)puVar3,0x17);
LAB_0685e918:
  (*(code *)*puVar11)(plVar10,uVar8,puVar11[1]);
  if (*(long *)(param_1 + 0x3d8) == 0) goto LAB_0685f9f0;
  plVar10 = (long *)FUN_068c633c(*(long *)(param_1 + 0x3d8),0);
  uVar8 = FUN_068d72ec(1,0);
  if (plVar10 == (long *)0x0) goto LAB_0685f9f0;
  lVar16 = *plVar10;
  uVar9 = (ulong)*(ushort *)(lVar16 + 0x12e);
  if (uVar9 != 0) {
    piVar14 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
    do {
      if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
        puVar11 = (undefined8 *)(lVar16 + (long)(*piVar14 + 0x16) * 0x10 + 0x138);
        goto LAB_0685e9a0;
      }
      uVar9 = uVar9 - 1;
      piVar14 = piVar14 + 4;
    } while (uVar9 != 0);
  }
  puVar11 = (undefined8 *)FUN_02eea86c(plVar10,*(long *)puVar3,0x16);
LAB_0685e9a0:
  (*(code *)*puVar11)(plVar10,uVar8,puVar11[1]);
  if (*(long *)(param_1 + 0x3e0) == 0) goto LAB_0685f9f0;
  plVar10 = (long *)FUN_068c633c(*(long *)(param_1 + 0x3e0),0);
  uVar8 = FUN_068d72ec(1,0);
  if (plVar10 == (long *)0x0) goto LAB_0685f9f0;
  lVar16 = *plVar10;
  uVar9 = (ulong)*(ushort *)(lVar16 + 0x12e);
  if (uVar9 != 0) {
    piVar14 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
    do {
      if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
        puVar11 = (undefined8 *)(lVar16 + (long)(*piVar14 + 0x16) * 0x10 + 0x138);
        goto LAB_0685ea28;
      }
      uVar9 = uVar9 - 1;
      piVar14 = piVar14 + 4;
    } while (uVar9 != 0);
  }
  puVar11 = (undefined8 *)FUN_02eea86c(plVar10,*(long *)puVar3,0x16);
LAB_0685ea28:
  (*(code *)*puVar11)(plVar10,uVar8,puVar11[1]);
  if (*(long *)(param_1 + 0x3e0) == 0) goto LAB_0685f9f0;
  plVar10 = (long *)FUN_068c633c(*(long *)(param_1 + 0x3e0),0);
  uVar8 = FUN_068d72ec(1,0);
  if (plVar10 == (long *)0x0) goto LAB_0685f9f0;
  lVar16 = *plVar10;
  uVar9 = (ulong)*(ushort *)(lVar16 + 0x12e);
  if (uVar9 != 0) {
    piVar14 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
    do {
      if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
        puVar11 = (undefined8 *)(lVar16 + (long)(*piVar14 + 0x17) * 0x10 + 0x138);
        goto LAB_0685eab0;
      }
      uVar9 = uVar9 - 1;
      piVar14 = piVar14 + 4;
    } while (uVar9 != 0);
  }
  puVar11 = (undefined8 *)FUN_02eea86c(plVar10,*(long *)puVar3,0x17);
LAB_0685eab0:
  (*(code *)*puVar11)(plVar10,uVar8,puVar11[1]);
  if (*(long *)(param_1 + 0x3e0) == 0) goto LAB_0685f9f0;
  plVar10 = (long *)FUN_068c633c(*(long *)(param_1 + 0x3e0),0);
  auVar23 = FUN_068d727c(1,0);
  if (plVar10 == (long *)0x0) goto LAB_0685f9f0;
  lVar16 = *plVar10;
  uVar9 = (ulong)*(ushort *)(lVar16 + 0x12e);
  if (uVar9 != 0) {
    piVar14 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
    do {
      if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
        puVar11 = (undefined8 *)(lVar16 + (long)(*piVar14 + 0x14) * 0x10 + 0x138);
        goto LAB_0685eb40;
      }
      uVar9 = uVar9 - 1;
      piVar14 = piVar14 + 4;
    } while (uVar9 != 0);
  }
  puVar11 = (undefined8 *)FUN_02eea86c(plVar10,*(long *)puVar3,0x14);
LAB_0685eb40:
  (*(code *)*puVar11)(plVar10,auVar23._0_8_,auVar23._8_8_ & 0xffffffff,puVar11[1]);
  if (*(long *)(param_1 + 0x3d8) == 0) goto LAB_0685f9f0;
  plVar10 = (long *)FUN_068c633c(*(long *)(param_1 + 0x3d8),0);
  auVar23 = FUN_068d727c(1,0);
  if (plVar10 == (long *)0x0) goto LAB_0685f9f0;
  lVar16 = *plVar10;
  uVar9 = (ulong)*(ushort *)(lVar16 + 0x12e);
  if (uVar9 != 0) {
    piVar14 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
    do {
      if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
        puVar11 = (undefined8 *)(lVar16 + (long)(*piVar14 + 0x37) * 0x10 + 0x138);
        goto LAB_0685ebd4;
      }
      uVar9 = uVar9 - 1;
      piVar14 = piVar14 + 4;
    } while (uVar9 != 0);
  }
  puVar11 = (undefined8 *)FUN_02eea86c(plVar10,*(long *)puVar3,0x37);
LAB_0685ebd4:
  (*(code *)*puVar11)(plVar10,auVar23._0_8_,auVar23._8_8_ & 0xffffffff,puVar11[1]);
  if (*(long *)(param_1 + 0x3d8) == 0) goto LAB_0685f9f0;
  plVar10 = (long *)FUN_068c633c(*(long *)(param_1 + 0x3d8),0);
  auVar23 = FUN_068d727c(1,0);
  if (plVar10 == (long *)0x0) goto LAB_0685f9f0;
  lVar16 = *plVar10;
  uVar9 = (ulong)*(ushort *)(lVar16 + 0x12e);
  if (uVar9 != 0) {
    piVar14 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
    do {
      if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
        puVar11 = (undefined8 *)(lVar16 + (long)(*piVar14 + 0x19) * 0x10 + 0x138);
        goto LAB_0685ec68;
      }
      uVar9 = uVar9 - 1;
      piVar14 = piVar14 + 4;
    } while (uVar9 != 0);
  }
  puVar11 = (undefined8 *)FUN_02eea86c(plVar10,*(long *)puVar3,0x19);
LAB_0685ec68:
  (*(code *)*puVar11)(plVar10,auVar23._0_8_,auVar23._8_8_ & 0xffffffff,puVar11[1]);
  if (*(long *)(param_1 + 0x3e0) == 0) goto LAB_0685f9f0;
  plVar10 = (long *)FUN_068c633c(*(long *)(param_1 + 0x3e0),0);
  auVar23 = FUN_068d727c(1,0);
  if (plVar10 == (long *)0x0) goto LAB_0685f9f0;
  lVar16 = *plVar10;
  uVar9 = (ulong)*(ushort *)(lVar16 + 0x12e);
  if (uVar9 != 0) {
    piVar14 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
    do {
      if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
        puVar11 = (undefined8 *)(lVar16 + (long)(*piVar14 + 0x37) * 0x10 + 0x138);
        goto LAB_0685ecfc;
      }
      uVar9 = uVar9 - 1;
      piVar14 = piVar14 + 4;
    } while (uVar9 != 0);
  }
  puVar11 = (undefined8 *)FUN_02eea86c(plVar10,*(long *)puVar3,0x37);
LAB_0685ecfc:
  (*(code *)*puVar11)(plVar10,auVar23._0_8_,auVar23._8_8_ & 0xffffffff,puVar11[1]);
  if (*(long *)(param_1 + 0x3e0) == 0) goto LAB_0685f9f0;
  plVar10 = (long *)FUN_068c633c(*(long *)(param_1 + 0x3e0),0);
  auVar23 = FUN_068d727c(1,0);
  if (plVar10 == (long *)0x0) goto LAB_0685f9f0;
  lVar16 = *plVar10;
  uVar9 = (ulong)*(ushort *)(lVar16 + 0x12e);
  if (uVar9 != 0) {
    piVar14 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
    do {
      if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
        puVar11 = (undefined8 *)(lVar16 + (long)(*piVar14 + 0x19) * 0x10 + 0x138);
        goto LAB_0685ed90;
      }
      uVar9 = uVar9 - 1;
      piVar14 = piVar14 + 4;
    } while (uVar9 != 0);
  }
  puVar11 = (undefined8 *)FUN_02eea86c(plVar10,*(long *)puVar3,0x19);
LAB_0685ed90:
  (*(code *)*puVar11)(plVar10,auVar23._0_8_,auVar23._8_8_ & 0xffffffff,puVar11[1]);
                    /* try { // try from 0685eda4 to 0695ee9f has its CatchHandler @ 0685eda4
                       catch() { ... } // from try @ 0685eda4 with catch @ 0685eda4
                       catch() { ... } // from try @ 0685f110 with catch @ 0685eda4
                       catch() { ... } // from try @ 0685f198 with catch @ 0685eda4
                       catch() { ... } // from try @ 0685f1a4 with catch @ 0685eda4
                       catch() { ... } // from try @ 0685f248 with catch @ 0685eda4 */
  if (*(long *)(param_1 + 0x3d8) == 0) goto LAB_0685f9f0;
  iVar7 = *(int *)(param_1 + 0x410);
  plVar10 = (long *)FUN_068c633c(*(long *)(param_1 + 0x3d8),0);
  if (iVar7 == 0) {
    auVar23 = FUN_068d9300(fVar22,0);
    if (plVar10 == (long *)0x0) goto LAB_0685f9f0;
    lVar16 = *plVar10;
    uVar9 = (ulong)*(ushort *)(lVar16 + 0x12e);
    if (uVar9 != 0) {
      piVar14 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
          puVar11 = (undefined8 *)(lVar16 + (long)(*piVar14 + 0x37) * 0x10 + 0x138);
          goto LAB_0685ef10;
        }
        uVar9 = uVar9 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar9 != 0);
    }
    puVar11 = (undefined8 *)FUN_02eea86c(plVar10,*(long *)puVar3,0x37);
LAB_0685ef10:
    (*(code *)*puVar11)(plVar10,auVar23._0_8_,auVar23._8_8_ & 0xffffffff,puVar11[1]);
    if (*(long *)(param_1 + 0x3d8) == 0) goto LAB_0685f9f0;
    plVar10 = (long *)FUN_068c633c(*(long *)(param_1 + 0x3d8),0);
    auVar23 = FUN_068d727c(1,0);
    uVar8 = auVar23._0_8_;
    if (plVar10 == (long *)0x0) goto LAB_0685f9f0;
                    /* try { // try from 0685ef48 to 0695ef57 has its CatchHandler @ 0685f1f4 */
    lVar15 = *plVar10;
    lVar16 = *(long *)puVar3;
    uVar9 = (ulong)*(ushort *)(lVar15 + 0x12e);
    uVar17 = auVar23._8_8_ & 0xffffffff;
    if (uVar9 != 0) {
                    /* try { // try from 0685ef68 to 0695ef73 has its CatchHandler @ 0685f1f8 */
      piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == lVar16) goto LAB_0685ef94;
        uVar9 = uVar9 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar9 != 0);
    }
  }
  else {
    auVar23 = FUN_068d727c(1,0);
    if (plVar10 == (long *)0x0) goto LAB_0685f9f0;
    lVar16 = *plVar10;
    uVar9 = (ulong)*(ushort *)(lVar16 + 0x12e);
    if (uVar9 != 0) {
      piVar14 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
          puVar11 = (undefined8 *)(lVar16 + (long)(*piVar14 + 0x37) * 0x10 + 0x138);
          goto LAB_0685ee88;
        }
        uVar9 = uVar9 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar9 != 0);
    }
    puVar11 = (undefined8 *)FUN_02eea86c(plVar10,*(long *)puVar3,0x37);
LAB_0685ee88:
    (*(code *)*puVar11)(plVar10,auVar23._0_8_,auVar23._8_8_ & 0xffffffff,puVar11[1]);
                    /* try { // try from 0685eea0 to 0695eea3 has its CatchHandler @ 0685f1a4 */
    if (*(long *)(param_1 + 0x3d8) == 0) goto LAB_0685f9f0;
                    /* try { // try from 0685eea4 to 0695eeb3 has its CatchHandler @ 0685f1b4 */
    plVar10 = (long *)FUN_068c633c(*(long *)(param_1 + 0x3d8),0);
    auVar23 = FUN_068d9300(fVar22,0);
    uVar8 = auVar23._0_8_;
    if (plVar10 == (long *)0x0) goto LAB_0685f9f0;
    lVar15 = *plVar10;
    lVar16 = *(long *)puVar3;
    uVar9 = (ulong)*(ushort *)(lVar15 + 0x12e);
    uVar17 = auVar23._8_8_ & 0xffffffff;
    if (uVar9 != 0) {
      piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == lVar16) goto LAB_0685ef94;
                    /* try { // try from 0685eef0 to 0695ef0b has its CatchHandler @ 0685f1a8 */
        uVar9 = uVar9 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar9 != 0);
    }
  }
                    /* try { // try from 0685ef84 to 0695ef93 has its CatchHandler @ 0685f1d0 */
  puVar11 = (undefined8 *)FUN_02eea86c(plVar10,lVar16,0x19);
LAB_0685efa4:
                    /* try { // try from 0685efa4 to 0695efaf has its CatchHandler @ 0685f1e4 */
  (*(code *)*puVar11)(plVar10,uVar8,uVar17,puVar11[1]);
  if (*(long *)(param_1 + 0x3d8) == 0) goto LAB_0685f9f0;
                    /* try { // try from 0685efc0 to 0695efcf has its CatchHandler @ 0685f1e8 */
  plVar10 = (long *)FUN_068c633c(*(long *)(param_1 + 0x3d8),0);
  uVar8 = FUN_068d8b44(0,0);
  if (plVar10 == (long *)0x0) goto LAB_0685f9f0;
  lVar16 = *plVar10;
                    /* try { // try from 0685efe0 to 0695efeb has its CatchHandler @ 0685f1d8 */
  uVar9 = (ulong)*(ushort *)(lVar16 + 0x12e);
  if (uVar9 != 0) {
    piVar14 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
    do {
      if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
        puVar11 = (undefined8 *)(lVar16 + (long)(*piVar14 + 0x17) * 0x10 + 0x138);
        goto LAB_0685f030;
      }
                    /* try { // try from 0685f004 to 0695f00f has its CatchHandler @ 0685f1ec */
      uVar9 = uVar9 - 1;
      piVar14 = piVar14 + 4;
    } while (uVar9 != 0);
  }
  puVar11 = (undefined8 *)FUN_02eea86c(plVar10,*(long *)puVar3,0x17);
LAB_0685f030:
  (*(code *)*puVar11)(plVar10,uVar8,puVar11[1]);
  if (*(long *)(param_1 + 0x3d8) == 0) goto LAB_0685f9f0;
  plVar10 = (long *)FUN_068c633c(*(long *)(param_1 + 0x3d8),0);
  uVar8 = FUN_068d8b44(0,0);
  if (plVar10 == (long *)0x0) goto LAB_0685f9f0;
  lVar16 = *plVar10;
  uVar9 = (ulong)*(ushort *)(lVar16 + 0x12e);
  if (uVar9 != 0) {
    piVar14 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
    do {
      if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
        puVar11 = (undefined8 *)(lVar16 + (long)(*piVar14 + 0x16) * 0x10 + 0x138);
        goto LAB_0685f0b8;
      }
      uVar9 = uVar9 - 1;
      piVar14 = piVar14 + 4;
    } while (uVar9 != 0);
  }
  puVar11 = (undefined8 *)FUN_02eea86c(plVar10,*(long *)puVar3,0x16);
LAB_0685f0b8:
  (*(code *)*puVar11)(plVar10,uVar8,puVar11[1]);
                    /* try { // try from 0685f0c8 to 0695f0cf has its CatchHandler @ 0685f1ac */
  if (*(long *)(param_1 + 0x3e0) == 0) goto LAB_0685f9f0;
  plVar10 = (long *)FUN_068c633c(*(long *)(param_1 + 0x3e0),0);
  uVar8 = FUN_068d8b44(0x3f800000,0);
  if (plVar10 == (long *)0x0) goto LAB_0685f9f0;
  lVar16 = *plVar10;
  uVar9 = (ulong)*(ushort *)(lVar16 + 0x12e);
  if (uVar9 != 0) {
                    /* try { // try from 0685f104 to 0695f10f has its CatchHandler @ 0685f1c4 */
    piVar14 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
    do {
                    /* try { // try from 0685f110 to 0695f16b has its CatchHandler @ 0685eda4 */
      if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
        puVar11 = (undefined8 *)(lVar16 + (long)(*piVar14 + 0x16) * 0x10 + 0x138);
        goto LAB_0685f140;
      }
      uVar9 = uVar9 - 1;
      piVar14 = piVar14 + 4;
    } while (uVar9 != 0);
  }
  puVar11 = (undefined8 *)FUN_02eea86c(plVar10,*(long *)puVar3,0x16);
LAB_0685f140:
  (*(code *)*puVar11)(plVar10,uVar8,puVar11[1]);
  if (*(long *)(param_1 + 0x3e0) == 0) goto LAB_0685f9f0;
  plVar10 = (long *)FUN_068c633c(*(long *)(param_1 + 0x3e0),0);
                    /* try { // try from 0685f16c to 0695f16f has its CatchHandler @ 0685f1fc */
  uVar8 = FUN_068d8b44(0,0);
                    /* try { // try from 0685f170 to 0695f173 has its CatchHandler @ 0685f1f0 */
  if (plVar10 == (long *)0x0) goto LAB_0685f9f0;
                    /* try { // try from 0685f174 to 0695f177 has its CatchHandler @ 0685f1e0 */
  lVar16 = *plVar10;
                    /* try { // try from 0685f178 to 0695f17b has its CatchHandler @ 0685f1dc */
                    /* try { // try from 0685f17c to 0695f17f has its CatchHandler @ 0685f1d4 */
                    /* try { // try from 0685f180 to 0695f183 has its CatchHandler @ 0685f1c8 */
  uVar9 = (ulong)*(ushort *)(lVar16 + 0x12e);
                    /* try { // try from 0685f184 to 0695f187 has its CatchHandler @ 0685f1c0 */
  if (uVar9 != 0) {
                    /* try { // try from 0685f188 to 0695f18b has its CatchHandler @ 0685f1bc */
                    /* try { // try from 0685f18c to 0695f193 has its CatchHandler @ 0685f1cc */
    piVar14 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
    do {
                    /* try { // try from 0685f194 to 0695f197 has its CatchHandler @ 0685f1b8 */
                    /* try { // try from 0685f198 to 0695f19f has its CatchHandler @ 0685eda4 */
      if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
                    /* catch() { ... } // from try @ 0685f194 with catch @ 0685f1b8 */
                    /* catch() { ... } // from try @ 0685f188 with catch @ 0685f1bc */
                    /* catch() { ... } // from try @ 0685f184 with catch @ 0685f1c0 */
                    /* catch() { ... } // from try @ 0685f104 with catch @ 0685f1c4 */
        puVar11 = (undefined8 *)(lVar16 + (long)(*piVar14 + 0x17) * 0x10 + 0x138);
        goto LAB_0685f1c8;
      }
      uVar9 = uVar9 - 1;
                    /* try { // try from 0685f1a0 to 0695f1a3 has its CatchHandler @ 0685f1b0 */
      piVar14 = piVar14 + 4;
                    /* catch() { ... } // from try @ 0685eea0 with catch @ 0685f1a4
                       try { // try from 0685f1a4 to 0695f213 has its CatchHandler @ 0685eda4 */
    } while (uVar9 != 0);
  }
                    /* catch() { ... } // from try @ 0685eef0 with catch @ 0685f1a8 */
                    /* catch() { ... } // from try @ 0685f0c8 with catch @ 0685f1ac */
                    /* catch() { ... } // from try @ 0685f1a0 with catch @ 0685f1b0 */
  puVar11 = (undefined8 *)FUN_02eea86c(plVar10,*(long *)puVar3,0x17);
                    /* catch() { ... } // from try @ 0685eea4 with catch @ 0685f1b4 */
LAB_0685f1c8:
                    /* catch() { ... } // from try @ 0685f180 with catch @ 0685f1c8 */
                    /* catch() { ... } // from try @ 0685f18c with catch @ 0685f1cc */
                    /* catch() { ... } // from try @ 0685ef84 with catch @ 0685f1d0 */
                    /* catch() { ... } // from try @ 0685f17c with catch @ 0685f1d4 */
  (*(code *)*puVar11)(plVar10,uVar8,puVar11[1]);
                    /* catch() { ... } // from try @ 0685efe0 with catch @ 0685f1d8 */
                    /* catch() { ... } // from try @ 0685f178 with catch @ 0685f1dc */
  if (*(long *)(param_1 + 0x3e0) == 0) goto LAB_0685f9f0;
                    /* catch() { ... } // from try @ 0685f174 with catch @ 0685f1e0 */
                    /* catch() { ... } // from try @ 0685efa4 with catch @ 0685f1e4 */
  plVar10 = (long *)FUN_068c633c(*(long *)(param_1 + 0x3e0),0);
                    /* catch() { ... } // from try @ 0685efc0 with catch @ 0685f1e8 */
                    /* catch() { ... } // from try @ 0685f004 with catch @ 0685f1ec */
                    /* catch() { ... } // from try @ 0685f170 with catch @ 0685f1f0 */
                    /* catch() { ... } // from try @ 0685ef48 with catch @ 0685f1f4 */
  auVar23 = FUN_068d9300(0,0);
                    /* catch() { ... } // from try @ 0685ef68 with catch @ 0685f1f8 */
  if (plVar10 == (long *)0x0) goto LAB_0685f9f0;
                    /* catch() { ... } // from try @ 0685f16c with catch @ 0685f1fc */
  lVar16 = *plVar10;
  uVar9 = (ulong)*(ushort *)(lVar16 + 0x12e);
                    /* try { // try from 0685f214 to 0695f217 has its CatchHandler @ 0685f224 */
  if (uVar9 != 0) {
    piVar14 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
    do {
                    /* catch() { ... } // from try @ 0685f214 with catch @ 0685f224 */
                    /* try { // try from 0685f228 to 0695f247 has its CatchHandler @ 0685f25c */
      if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
                    /* try { // try from 0685f248 to 0695f253 has its CatchHandler @ 0685eda4 */
                    /* try { // try from 0685f254 to 0695f25b has its CatchHandler @ 0685f25c */
        puVar11 = (undefined8 *)(lVar16 + (long)(*piVar14 + 0x14) * 0x10 + 0x138);
        goto LAB_0685f258;
      }
      uVar9 = uVar9 - 1;
      piVar14 = piVar14 + 4;
    } while (uVar9 != 0);
  }
  puVar11 = (undefined8 *)FUN_02eea86c(plVar10,*(long *)puVar3,0x14);
LAB_0685f258:
                    /* catch() { ... } // from try @ 0685f228 with catch @ 0685f25c
                       catch() { ... } // from try @ 0685f254 with catch @ 0685f25c */
  (*(code *)*puVar11)(plVar10,auVar23._0_8_,auVar23._8_8_ & 0xffffffff,puVar11[1]);
  if (*(long *)(param_1 + 0x3f8) == 0) goto LAB_0685f9f0;
  plVar10 = (long *)FUN_068c633c(*(long *)(param_1 + 0x3f8),0);
  auVar23 = FUN_068d9300(0,0);
  if (plVar10 == (long *)0x0) goto LAB_0685f9f0;
  lVar16 = *plVar10;
  uVar9 = (ulong)*(ushort *)(lVar16 + 0x12e);
  if (uVar9 != 0) {
    piVar14 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
    do {
      if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
        puVar11 = (undefined8 *)(lVar16 + (long)(*piVar14 + 0x1a) * 0x10 + 0x138);
        goto LAB_0685f2ec;
      }
      uVar9 = uVar9 - 1;
      piVar14 = piVar14 + 4;
    } while (uVar9 != 0);
  }
  puVar11 = (undefined8 *)FUN_02eea86c(plVar10,*(long *)puVar3,0x1a);
LAB_0685f2ec:
  (*(code *)*puVar11)(plVar10,auVar23._0_8_,auVar23._8_8_ & 0xffffffff,puVar11[1]);
  if (*(long *)(param_1 + 0x3f8) == 0) goto LAB_0685f9f0;
  plVar10 = (long *)FUN_068c633c(*(long *)(param_1 + 0x3f8),0);
  auVar23 = FUN_068d9300(0,0);
  if (plVar10 == (long *)0x0) goto LAB_0685f9f0;
  lVar16 = *plVar10;
  uVar9 = (ulong)*(ushort *)(lVar16 + 0x12e);
  if (uVar9 != 0) {
    piVar14 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
    do {
      if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
        puVar11 = (undefined8 *)(lVar16 + (long)(*piVar14 + 0x2e) * 0x10 + 0x138);
        goto LAB_0685f380;
      }
      uVar9 = uVar9 - 1;
      piVar14 = piVar14 + 4;
    } while (uVar9 != 0);
  }
  puVar11 = (undefined8 *)FUN_02eea86c(plVar10,*(long *)puVar3,0x2e);
LAB_0685f380:
  (*(code *)*puVar11)(plVar10,auVar23._0_8_,auVar23._8_8_ & 0xffffffff,puVar11[1]);
  if (*(long *)(param_1 + 0x3d8) == 0) goto LAB_0685f9f0;
  iVar7 = *(int *)(param_1 + 0x410);
  plVar10 = (long *)FUN_068c2b14(*(long *)(param_1 + 0x3d8),0);
  puVar4 = PTR_DAT_06d382e0;
  if (plVar10 == (long *)0x0) goto LAB_0685f9f0;
  lVar15 = *plVar10;
  uVar2 = *(ushort *)(lVar15 + 0x12e);
  uVar9 = (ulong)uVar2;
  lVar16 = *(long *)PTR_DAT_06d382e0;
  if (iVar7 == 0) {
    if (uVar2 != 0) {
      piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == lVar16) {
                    /* try { // try from 0685f690 to 0695f69f has its CatchHandler @ 0685f934 */
          puVar11 = (undefined8 *)(lVar15 + (long)(*piVar14 + 0x16) * 0x10 + 0x138);
          goto LAB_0685f694;
        }
        uVar9 = uVar9 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar9 != 0);
    }
    puVar11 = (undefined8 *)FUN_02eea86c(plVar10,lVar16,0x16);
LAB_0685f694:
    fVar18 = (float)(*(code *)*puVar11)(plVar10,puVar11[1]);
                    /* try { // try from 0685f6b0 to 0695f6bb has its CatchHandler @ 0685f938 */
    if ((*(long *)(param_1 + 0x3d8) == 0) ||
       (plVar10 = (long *)FUN_068c2b14(*(long *)(param_1 + 0x3d8),0), plVar10 == (long *)0x0))
    goto LAB_0685f9f0;
    lVar16 = *plVar10;
    uVar9 = (ulong)*(ushort *)(lVar16 + 0x12e);
    if (uVar9 != 0) {
                    /* try { // try from 0685f6cc to 0695f6db has its CatchHandler @ 0685f910 */
      piVar14 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)puVar4) {
                    /* try { // try from 0685f708 to 0695f717 has its CatchHandler @ 0685f928 */
          puVar11 = (undefined8 *)(lVar16 + (long)(*piVar14 + 0x17) * 0x10 + 0x138);
          goto LAB_0685f70c;
        }
        uVar9 = uVar9 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar9 != 0);
    }
                    /* try { // try from 0685f6ec to 0695f6f7 has its CatchHandler @ 0685f924 */
    puVar11 = (undefined8 *)FUN_02eea86c(plVar10,*(long *)puVar4,0x17);
LAB_0685f70c:
    fVar19 = (float)(*(code *)*puVar11)(plVar10,puVar11[1]);
    if (*(long *)(param_1 + 0x3f8) == 0) goto LAB_0685f9f0;
    iVar7 = *(int *)(param_1 + 0x414);
                    /* try { // try from 0685f728 to 0695f733 has its CatchHandler @ 0685f918 */
    plVar10 = (long *)FUN_068c633c(*(long *)(param_1 + 0x3f8),0);
    if (iVar7 == 0) {
      auVar23 = FUN_068d9300(fVar22 + fVar18 + fVar19,0);
      uVar8 = auVar23._0_8_;
      if (plVar10 == (long *)0x0) goto LAB_0685f9f0;
      lVar15 = *plVar10;
      lVar16 = *(long *)puVar3;
      uVar9 = (ulong)*(ushort *)(lVar15 + 0x12e);
      uVar17 = auVar23._8_8_ & 0xffffffff;
      if (uVar9 != 0) {
        piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == lVar16) goto LAB_0685f8d4;
          uVar9 = uVar9 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar9 != 0);
      }
    }
    else {
      plVar12 = (long *)FUN_068c2b14(param_1,0);
      if (plVar12 == (long *)0x0) goto LAB_0685f9f0;
      lVar16 = *plVar12;
                    /* try { // try from 0685f74c to 0695f757 has its CatchHandler @ 0685f92c */
      uVar9 = (ulong)*(ushort *)(lVar16 + 0x12e);
      if (uVar9 != 0) {
        piVar14 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)puVar4) {
            puVar11 = (undefined8 *)(lVar16 + (long)(*piVar14 + 0x2c) * 0x10 + 0x138);
            goto LAB_0685f7ec;
          }
          uVar9 = uVar9 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar9 != 0);
      }
      puVar11 = (undefined8 *)FUN_02eea86c(plVar12,*(long *)puVar4,0x2c);
LAB_0685f7ec:
      fVar20 = (float)(*(code *)*puVar11)(plVar12,puVar11[1]);
      if ((*(long *)(param_1 + 0x3f8) == 0) ||
         (plVar12 = (long *)FUN_068c2b14(*(long *)(param_1 + 0x3f8),0), plVar12 == (long *)0x0))
      goto LAB_0685f9f0;
                    /* try { // try from 0685f810 to 0695f817 has its CatchHandler @ 0685f8f0 */
      lVar16 = *plVar12;
      uVar9 = (ulong)*(ushort *)(lVar16 + 0x12e);
      if (uVar9 != 0) {
        piVar14 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)puVar4) {
                    /* try { // try from 0685f858 to 0695f8b3 has its CatchHandler @ 0685f514 */
            puVar11 = (undefined8 *)(lVar16 + (long)(*piVar14 + 0x2c) * 0x10 + 0x138);
            goto LAB_0685f864;
          }
          uVar9 = uVar9 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar9 != 0);
      }
                    /* try { // try from 0685f84c to 0695f857 has its CatchHandler @ 0685f904 */
      puVar11 = (undefined8 *)FUN_02eea86c(plVar12,*(long *)puVar4,0x2c);
LAB_0685f864:
      fVar21 = (float)(*(code *)*puVar11)(plVar12,puVar11[1]);
      auVar23 = FUN_068d9300(((fVar20 - (fVar18 + fVar19)) - fVar22) - fVar21,0);
      uVar8 = auVar23._0_8_;
      if (plVar10 == (long *)0x0) goto LAB_0685f9f0;
      lVar15 = *plVar10;
      lVar16 = *(long *)puVar3;
      uVar9 = (ulong)*(ushort *)(lVar15 + 0x12e);
      uVar17 = auVar23._8_8_ & 0xffffffff;
      if (uVar9 != 0) {
        piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
                    /* try { // try from 0685f8b4 to 0695f8b7 has its CatchHandler @ 0685f93c */
          if (*(long *)(piVar14 + -2) == lVar16) goto LAB_0685f8d4;
                    /* try { // try from 0685f8b8 to 0695f8bb has its CatchHandler @ 0685f930 */
          uVar9 = uVar9 - 1;
                    /* try { // try from 0685f8bc to 0695f8bf has its CatchHandler @ 0685f920 */
          piVar14 = piVar14 + 4;
                    /* try { // try from 0685f8c0 to 0695f8c3 has its CatchHandler @ 0685f91c */
        } while (uVar9 != 0);
      }
    }
                    /* try { // try from 0685f8c4 to 0695f8c7 has its CatchHandler @ 0685f914 */
    uVar13 = 0x1a;
  }
  else {
    if (uVar2 != 0) {
      piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == lVar16) {
          puVar11 = (undefined8 *)(lVar15 + (long)(*piVar14 + 0x18) * 0x10 + 0x138);
          goto LAB_0685f440;
        }
        uVar9 = uVar9 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar9 != 0);
    }
    puVar11 = (undefined8 *)FUN_02eea86c(plVar10,lVar16,0x18);
LAB_0685f440:
    fVar18 = (float)(*(code *)*puVar11)(plVar10,puVar11[1]);
    if ((*(long *)(param_1 + 0x3d8) == 0) ||
       (plVar10 = (long *)FUN_068c2b14(*(long *)(param_1 + 0x3d8),0), plVar10 == (long *)0x0))
    goto LAB_0685f9f0;
    lVar16 = *plVar10;
    uVar9 = (ulong)*(ushort *)(lVar16 + 0x12e);
    if (uVar9 != 0) {
      piVar14 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)puVar4) {
          puVar11 = (undefined8 *)(lVar16 + (long)(*piVar14 + 0x15) * 0x10 + 0x138);
          goto LAB_0685f4b8;
        }
        uVar9 = uVar9 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar9 != 0);
    }
    puVar11 = (undefined8 *)FUN_02eea86c(plVar10,*(long *)puVar4,0x15);
LAB_0685f4b8:
    fVar19 = (float)(*(code *)*puVar11)(plVar10,puVar11[1]);
    if (*(long *)(param_1 + 0x3f8) == 0) goto LAB_0685f9f0;
    iVar7 = *(int *)(param_1 + 0x414);
    plVar10 = (long *)FUN_068c633c(*(long *)(param_1 + 0x3f8),0);
    if (iVar7 == 0) {
      auVar23 = FUN_068d9300(fVar22 + fVar18 + fVar19,0);
      uVar8 = auVar23._0_8_;
      if (plVar10 == (long *)0x0) goto LAB_0685f9f0;
      lVar15 = *plVar10;
      lVar16 = *(long *)puVar3;
      uVar9 = (ulong)*(ushort *)(lVar15 + 0x12e);
      uVar17 = auVar23._8_8_ & 0xffffffff;
      if (uVar9 != 0) {
        piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == lVar16) goto LAB_0685f678;
          uVar9 = uVar9 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar9 != 0);
      }
    }
    else {
      plVar12 = (long *)FUN_068c2b14(param_1,0);
      if (plVar12 == (long *)0x0) goto LAB_0685f9f0;
      lVar16 = *plVar12;
      uVar9 = (ulong)*(ushort *)(lVar16 + 0x12e);
      if (uVar9 != 0) {
        piVar14 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
                    /* try { // try from 0685f514 to 0695f5ff has its CatchHandler @ 0685f514
                       catch() { ... } // from try @ 0685f514 with catch @ 0685f514
                       catch() { ... } // from try @ 0685f858 with catch @ 0685f514
                       catch() { ... } // from try @ 0685f8e0 with catch @ 0685f514
                       catch() { ... } // from try @ 0685f988 with catch @ 0685f514 */
          if (*(long *)(piVar14 + -2) == *(long *)puVar4) {
            puVar11 = (undefined8 *)(lVar16 + (long)(*piVar14 + 0x13) * 0x10 + 0x138);
            goto LAB_0685f598;
          }
          uVar9 = uVar9 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar9 != 0);
      }
      puVar11 = (undefined8 *)FUN_02eea86c(plVar12,*(long *)puVar4,0x13);
LAB_0685f598:
      fVar20 = (float)(*(code *)*puVar11)(plVar12,puVar11[1]);
      if ((*(long *)(param_1 + 0x3f8) == 0) ||
         (plVar12 = (long *)FUN_068c2b14(*(long *)(param_1 + 0x3f8),0), plVar12 == (long *)0x0))
      goto LAB_0685f9f0;
      lVar16 = *plVar12;
      uVar9 = (ulong)*(ushort *)(lVar16 + 0x12e);
      if (uVar9 != 0) {
        piVar14 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)puVar4) {
                    /* try { // try from 0685f600 to 0695f603 has its CatchHandler @ 0685f8e8 */
                    /* try { // try from 0685f604 to 0695f60f has its CatchHandler @ 0685f8f4 */
            puVar11 = (undefined8 *)(lVar16 + (long)(*piVar14 + 0x13) * 0x10 + 0x138);
            goto LAB_0685f610;
          }
          uVar9 = uVar9 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar9 != 0);
      }
      puVar11 = (undefined8 *)FUN_02eea86c(plVar12,*(long *)puVar4,0x13);
LAB_0685f610:
      fVar21 = (float)(*(code *)*puVar11)(plVar12,puVar11[1]);
      auVar23 = FUN_068d9300(((fVar20 - (fVar18 + fVar19)) - fVar22) - fVar21,0);
      uVar8 = auVar23._0_8_;
      if (plVar10 == (long *)0x0) goto LAB_0685f9f0;
      lVar15 = *plVar10;
                    /* try { // try from 0685f638 to 0695f653 has its CatchHandler @ 0685f8ec */
      lVar16 = *(long *)puVar3;
      uVar9 = (ulong)*(ushort *)(lVar15 + 0x12e);
      uVar17 = auVar23._8_8_ & 0xffffffff;
      if (uVar9 != 0) {
        piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == lVar16) goto LAB_0685f678;
          uVar9 = uVar9 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar9 != 0);
      }
    }
    uVar13 = 0x2e;
  }
                    /* try { // try from 0685f8c8 to 0695f8cb has its CatchHandler @ 0685f908 */
                    /* try { // try from 0685f8cc to 0695f8cf has its CatchHandler @ 0685f900 */
  puVar11 = (undefined8 *)FUN_02eea86c(plVar10,lVar16,uVar13);
                    /* try { // try from 0685f8d0 to 0695f8d3 has its CatchHandler @ 0685f8fc */
  goto LAB_0685f8e4;
LAB_0685ef94:
  puVar11 = (undefined8 *)(lVar15 + (long)(*piVar14 + 0x19) * 0x10 + 0x138);
  goto LAB_0685efa4;
LAB_0685f8d4:
                    /* try { // try from 0685f8d4 to 0695f8db has its CatchHandler @ 0685f90c */
  iVar7 = *piVar14 + 0x1a;
  goto LAB_0685f8dc;
LAB_0685f678:
  iVar7 = *piVar14 + 0x2e;
LAB_0685f8dc:
                    /* try { // try from 0685f8dc to 0695f8df has its CatchHandler @ 0685f8f8 */
                    /* try { // try from 0685f8e0 to 0695f953 has its CatchHandler @ 0685f514 */
  puVar11 = (undefined8 *)(lVar15 + (long)iVar7 * 0x10 + 0x138);
LAB_0685f8e4:
                    /* catch() { ... } // from try @ 0685f600 with catch @ 0685f8e8 */
                    /* catch() { ... } // from try @ 0685f638 with catch @ 0685f8ec */
                    /* catch() { ... } // from try @ 0685f810 with catch @ 0685f8f0 */
                    /* catch() { ... } // from try @ 0685f604 with catch @ 0685f8f4 */
  (*(code *)*puVar11)(plVar10,uVar8,uVar17,puVar11[1]);
                    /* catch() { ... } // from try @ 0685f8dc with catch @ 0685f8f8 */
                    /* catch() { ... } // from try @ 0685f8d0 with catch @ 0685f8fc */
                    /* catch() { ... } // from try @ 0685f8cc with catch @ 0685f900 */
                    /* catch() { ... } // from try @ 0685f84c with catch @ 0685f904 */
                    /* catch() { ... } // from try @ 0685f8c8 with catch @ 0685f908 */
                    /* catch() { ... } // from try @ 0685f8d4 with catch @ 0685f90c */
  uVar1 = 0xffffffff;
  if (*(int *)(param_1 + 0x414) == 0) {
    uVar1 = 1;
  }
                    /* catch() { ... } // from try @ 0685f6cc with catch @ 0685f910 */
  if (*(long *)(param_1 + 0x420) != 0) {
                    /* catch() { ... } // from try @ 0685f8c4 with catch @ 0685f914 */
                    /* catch() { ... } // from try @ 0685f728 with catch @ 0685f918 */
                    /* catch() { ... } // from try @ 0685f8c0 with catch @ 0685f91c */
    FUN_067e7a14(*(undefined8 *)(param_1 + 0x3f8),*(long *)(param_1 + 0x420),0);
  }
                    /* catch() { ... } // from try @ 0685f8bc with catch @ 0685f920 */
                    /* catch() { ... } // from try @ 0685f6ec with catch @ 0685f924 */
                    /* catch() { ... } // from try @ 0685f708 with catch @ 0685f928 */
                    /* catch() { ... } // from try @ 0685f74c with catch @ 0685f92c */
  uVar8 = thunk_FUN_02ef1808(*(undefined8 *)OVRPlugin_OVRP_1_93_0_TypeInfo);
                    /* catch() { ... } // from try @ 0685f8b8 with catch @ 0685f930 */
                    /* catch() { ... } // from try @ 0685f690 with catch @ 0685f934 */
                    /* catch() { ... } // from try @ 0685f6b0 with catch @ 0685f938 */
                    /* catch() { ... } // from try @ 0685f8b4 with catch @ 0685f93c */
  FUN_0685fe04(uVar8,param_1,uVar1);
  *(undefined8 *)(param_1 + 0x420) = uVar8;
  thunk_FUN_02f411dc(param_1 + 0x420,uVar8);
                    /* try { // try from 0685f954 to 0695f957 has its CatchHandler @ 0685f964 */
  FUN_067e7968(*(undefined8 *)(param_1 + 0x3f8),*(undefined8 *)(param_1 + 0x420),0);
                    /* catch() { ... } // from try @ 0685f954 with catch @ 0685f964 */
  uVar8 = thunk_FUN_02ef1808(*(undefined8 *)puVar5);
                    /* try { // try from 0685f968 to 0695f987 has its CatchHandler @ 0685f99c */
  FUN_05025f00(uVar8,param_1,*(undefined8 *)OVRPlugin_OVRP_1_94_0_TypeInfo,0);
  puVar3 = PTR_DAT_06d39e48;
                    /* try { // try from 0685f988 to 0695f993 has its CatchHandler @ 0685f514 */
                    /* try { // try from 0685f994 to 0695f99b has its CatchHandler @ 0685f99c */
                    /* catch() { ... } // from try @ 0685f968 with catch @ 0685f99c
                       catch() { ... } // from try @ 0685f994 with catch @ 0685f99c */
  FUN_037e93c4(param_1,uVar8,0,*(undefined8 *)PTR_DAT_06d39e48);
  lVar16 = *(long *)(param_1 + 0x3f8);
                    /* try { // try from 0685f9a8 to 0695fa1f has its CatchHandler @ 0685f9a8
                       catch() { ... } // from try @ 0685f9a8 with catch @ 0685f9a8
                       catch() { ... } // from try @ 0685fa40 with catch @ 0685f9a8
                       catch() { ... } // from try @ 0685fad0 with catch @ 0685f9a8 */
  uVar8 = thunk_FUN_02ef1808(*(undefined8 *)puVar5);
  FUN_05025f00(uVar8,param_1,*(undefined8 *)puVar6,0);
  if (lVar16 != 0) {
    FUN_037e93c4(lVar16,uVar8,0,*(undefined8 *)puVar3);
    return;
  }
LAB_0685f9f0:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


