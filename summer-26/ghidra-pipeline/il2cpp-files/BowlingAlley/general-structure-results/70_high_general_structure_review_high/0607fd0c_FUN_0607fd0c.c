/*
FUNCTION_NAME: FUN_0607fd0c
ENTRY_POINT: 0607fd0c
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_6
*/


/* WARNING: Removing unreachable block (ram,0x0608030c) */
/* WARNING: Removing unreachable block (ram,0x0608036c) */

long FUN_0607fd0c(long param_1,long param_2)

{
  byte bVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined8 *puVar14;
  long *plVar15;
  long lVar16;
  int *piVar17;
  undefined8 uVar18;
  int local_44;
  
  puVar4 = PTR_DAT_072a1998;
  lVar8 = param_1;
  if ((DAT_076dd3fe & 1) == 0) {
    thunk_FUN_032e1da0(PTR_DAT_072a14a8);
    thunk_FUN_032e1da0(System_Func<byte,_object>_TypeInfo);
    thunk_FUN_032e1da0(PTR_DAT_07279f60);
    thunk_FUN_032e1da0(System_Collections_Generic_Dictionary<GameObject,_Coroutine>_TypeInfo);
    thunk_FUN_032e1da0(System_Collections_Generic_Dictionary<Graphic,_int>_TypeInfo);
                    /* try { // try from 0607fd80 to 0617ff4f has its CatchHandler @ 0607fd80
                       catch() { ... } // from try @ 0607fd80 with catch @ 0607fd80
                       catch() { ... } // from try @ 06080060 with catch @ 0607fd80
                       catch() { ... } // from try @ 06080120 with catch @ 0607fd80
                       catch() { ... } // from try @ 06080164 with catch @ 0607fd80
                       catch() { ... } // from try @ 0608021c with catch @ 0607fd80 */
    thunk_FUN_032e1da0(System_Collections_Generic_Dictionary<Pose,_string>_TypeInfo);
    thunk_FUN_032e1da0(PTR_DAT_072a1998);
    thunk_FUN_032e1da0(System_Collections_Generic_Dictionary<PrimitiveType,_Mesh>_TypeInfo);
    thunk_FUN_032e1da0(System_Func<KeyValuePair<Type,_PostProcessBundle>,_bool>_TypeInfo);
    thunk_FUN_032e1da0(
                      System_Func<KeyValuePair<Type,_PostProcessBundle>,_PostProcessBundle>_TypeInfo
                      );
    thunk_FUN_032e1da0(System_Func<KeyValuePair<string,_bool>,_bool>_TypeInfo);
    thunk_FUN_032e1da0(System_Func<GeometryChangedEvent>_TypeInfo);
    thunk_FUN_032e1da0(System_Func<MouseCaptureOutEvent>_TypeInfo);
    lVar8 = thunk_FUN_032e1da0(
                              System_Func<ValueTuple<HandFinger,_IReadOnlyList<ShapeRecognizer_FingerFeatureConfig>>,_IEnumerable<ShapeRecognizer_FingerFeatureConfig>>_TypeInfo
                              );
    DAT_076dd3fe = 1;
  }
  local_44 = 0;
  uVar9 = FUN_06074f14(lVar8,param_2);
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_032cd7c0(*(long *)puVar4);
  }
  uVar9 = FUN_06240390(uVar9,0);
  if ((((param_2 == 0) || (*(long *)(param_2 + 0xc0) == 0)) || (*(long *)(param_1 + 0x20) == 0)) ||
     (lVar8 = *(long *)(*(long *)(param_1 + 0x20) + 0x28), lVar8 == 0)) goto LAB_06080098;
  uVar18 = *(undefined8 *)(*(long *)(param_2 + 0xc0) + 0x18);
  lVar8 = FUN_060445c4(lVar8,uVar9,uVar18,0);
  if ((lVar8 != 0) && (*(char *)(param_1 + 0xa0) == '\0')) {
    uVar9 = FUN_06012ed8(uVar9,0);
    uVar18 = thunk_FUN_032e1da0(System_Func<CancellationToken,_Task<HttpWebResponse>>_TypeInfo);
                    /* WARNING: Subroutine does not return */
    FUN_032d5dbc(uVar9,uVar18);
  }
  if (lVar8 == 0) {
    lVar8 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072a14a8);
    FUN_060177a4(lVar8,uVar9,0);
    if (lVar8 == 0) goto LAB_06080098;
    uVar10 = FUN_0601b9b0(lVar8,uVar18,0);
    uVar10 = FUN_060790fc(uVar10,param_2,*(undefined8 *)System_Func<GeometryChangedEvent>_TypeInfo,
                          uVar18);
    FUN_0601b9b0(lVar8,uVar10,0);
    if (*(char *)(param_1 + 0xa0) == '\0') {
      uVar10 = *(undefined8 *)(param_2 + 0x50);
      *(undefined8 *)(lVar8 + 0x110) = *(undefined8 *)(param_2 + 0x58);
      *(undefined8 *)(lVar8 + 0x108) = uVar10;
      uVar10 = *(undefined8 *)(param_2 + 0x60);
      *(undefined8 *)(lVar8 + 0x120) = *(undefined8 *)(param_2 + 0x68);
      *(undefined8 *)(lVar8 + 0x118) = uVar10;
    }
    else {
      lVar11 = FUN_0608044c(param_1,uVar18);
      if (lVar11 != 0) {
        FUN_06022918(lVar8,lVar11,0);
      }
    }
    uVar10 = *(undefined8 *)(param_2 + 0x48);
    if (*(int *)(*(long *)System_Collections_Generic_Dictionary<Pose,_string>_TypeInfo + 0xe0) == 0)
    {
      thunk_FUN_032cd7c0();
    }
    FUN_060740f4(lVar8,uVar10);
    FUN_0607465c(lVar8,*(undefined8 *)(param_2 + 0x48));
  }
  plVar15 = *(long **)(param_2 + 0xb8);
  if (plVar15 != (long *)0x0) {
                    /* try { // try from 0607ff50 to 0617ff77 has its CatchHandler @ 06080190 */
    bVar1 = *(byte *)(*(long *)System_Collections_Generic_Dictionary<PrimitiveType,_Mesh>_TypeInfo +
                     0x130);
    if (*(byte *)(*plVar15 + 0x130) < bVar1) {
      plVar15 = (long *)0x0;
    }
    else if (*(long *)(*(long *)(*plVar15 + 200) + (ulong)bVar1 * 8 + -8) !=
             *(long *)System_Collections_Generic_Dictionary<PrimitiveType,_Mesh>_TypeInfo) {
      plVar15 = (long *)0x0;
    }
  }
  if (*(long *)(param_2 + 200) == 0) goto LAB_06080098;
  if (*(long *)(*(long *)(param_2 + 200) + 0x60) == 0) {
    bVar6 = false;
    if (plVar15 != (long *)0x0) {
      plVar15 = (long *)plVar15[0x13];
      if (plVar15 != (long *)0x0) {
                    /* try { // try from 0607ffac to 0617ffd3 has its CatchHandler @ 0608018c */
        bVar1 = *(byte *)(*(long *)System_Func<KeyValuePair<string,_bool>,_bool>_TypeInfo + 0x130);
        if (*(byte *)(*plVar15 + 0x130) < bVar1) {
          plVar15 = (long *)0x0;
        }
        else if (*(long *)(*(long *)(*plVar15 + 200) + (ulong)bVar1 * 8 + -8) !=
                 *(long *)System_Func<KeyValuePair<string,_bool>,_bool>_TypeInfo) {
          plVar15 = (long *)0x0;
        }
      }
                    /* try { // try from 0607ffdc to 0617ffe3 has its CatchHandler @ 0608017c */
      bVar6 = plVar15 != (long *)0x0;
    }
    if (*(char *)(param_1 + 0xa0) == '\0') goto LAB_0608000c;
    if (bVar6) goto LAB_0607fff0;
LAB_06080110:
                    /* try { // try from 0608011c to 0618011f has its CatchHandler @ 06080178 */
    if ((*(long *)(param_1 + 0x20) == 0) ||
       (lVar11 = *(long *)(*(long *)(param_1 + 0x20) + 0x28), lVar11 == 0)) goto LAB_06080098;
                    /* try { // try from 06080120 to 0618015f has its CatchHandler @ 0607fd80 */
    lVar11 = FUN_060445c4(lVar11,uVar9,uVar18,0);
    if (lVar11 == 0) goto LAB_06080134;
  }
  else {
    if (*(char *)(param_1 + 0xa0) == '\0') {
LAB_0608000c:
                    /* try { // try from 0608000c to 0618000f has its CatchHandler @ 06080170 */
                    /* try { // try from 06080010 to 0618001f has its CatchHandler @ 06080184 */
      FUN_0607b580(param_1,param_2,lVar8,0);
                    /* try { // try from 06080020 to 0618002b has its CatchHandler @ 06080188 */
      if (*(char *)(param_1 + 0xa0) != '\0') {
                    /* try { // try from 06080030 to 0618005f has its CatchHandler @ 06080180 */
        uVar10 = FUN_057a19ac(uVar9,*(undefined8 *)
                                     System_Func<ValueTuple<HandFinger,_IReadOnlyList<ShapeRecognizer_FingerFeatureConfig>>,_IEnumerable<ShapeRecognizer_FingerFeatureConfig>>_TypeInfo
                              ,0);
        if ((lVar8 != 0) && (lVar11 = *(long *)(lVar8 + 0x40), lVar11 != 0)) {
          iVar7 = 0;
          do {
            lVar11 = FUN_0600bcf4(lVar11,uVar10,0);
                    /* try { // try from 06080060 to 0618011b has its CatchHandler @ 0607fd80 */
            if (lVar11 == 0) goto LAB_060800bc;
            local_44 = iVar7;
            uVar12 = FUN_05920f80(&local_44,0);
            uVar10 = FUN_057a19ac(uVar10,uVar12,0);
            lVar11 = *(long *)(lVar8 + 0x40);
            iVar7 = iVar7 + 1;
          } while (lVar11 != 0);
        }
        goto LAB_06080098;
      }
      uVar10 = FUN_057a19ac(uVar9,*(undefined8 *)System_Func<MouseCaptureOutEvent>_TypeInfo,0);
      if (lVar8 == 0) goto LAB_06080098;
LAB_060800bc:
      if ((*(long *)(lVar8 + 0x40) == 0) ||
         (lVar11 = FUN_0600bb38(*(long *)(lVar8 + 0x40),0,0), lVar11 == 0)) goto LAB_06080098;
      FUN_06005b7c(lVar11,uVar10,0);
      if ((*(long *)(lVar8 + 0x40) == 0) ||
         (plVar15 = (long *)FUN_0600bb38(*(long *)(lVar8 + 0x40),0,0), plVar15 == (long *)0x0))
      goto LAB_06080098;
      (**(code **)(*plVar15 + 0x1e8))(plVar15,3,*(undefined8 *)(*plVar15 + 0x1f0));
    }
    else {
LAB_0607fff0:
                    /* try { // try from 0607fff0 to 0617fff7 has its CatchHandler @ 06080174 */
      if ((lVar8 == 0) || (plVar15 = *(long **)(lVar8 + 0x40), plVar15 == (long *)0x0))
      goto LAB_06080098;
      iVar7 = (**(code **)(*plVar15 + 0x1c8))(plVar15,*(undefined8 *)(*plVar15 + 0x1d0));
      if (iVar7 == 0) goto LAB_0608000c;
    }
    if (*(char *)(param_1 + 0xa0) != '\0') goto LAB_06080110;
LAB_06080134:
    if ((*(long *)(param_1 + 0x20) == 0) ||
       (lVar11 = *(long *)(*(long *)(param_1 + 0x20) + 0x28), lVar11 == 0)) goto LAB_06080098;
    FUN_060393f8(lVar11,lVar8,0);
    if (*(char *)(param_1 + 0xa0) != '\0') {
      lVar11 = *(long *)(param_1 + 0x88);
                    /* try { // try from 06080160 to 06180163 has its CatchHandler @ 0608016c */
                    /* try { // try from 06080164 to 0618019f has its CatchHandler @ 0607fd80 */
      uVar9 = thunk_FUN_032a56a0(*(undefined8 *)
                                  System_Collections_Generic_Dictionary<Graphic,_int>_TypeInfo);
                    /* catch() { ... } // from try @ 06080160 with catch @ 0608016c */
                    /* catch() { ... } // from try @ 0608000c with catch @ 06080170 */
                    /* catch() { ... } // from try @ 0607fff0 with catch @ 06080174 */
                    /* catch() { ... } // from try @ 0608011c with catch @ 06080178 */
                    /* catch() { ... } // from try @ 0607ffdc with catch @ 0608017c */
      System_Collections_Generic_List<HIDParser_HIDReportData>__Clear
                (uVar9,*(undefined8 *)
                        System_Collections_Generic_Dictionary<GameObject,_Coroutine>_TypeInfo);
                    /* catch() { ... } // from try @ 06080030 with catch @ 06080180 */
      if (lVar11 == 0) goto LAB_06080098;
                    /* catch() { ... } // from try @ 06080010 with catch @ 06080184 */
                    /* catch() { ... } // from try @ 06080020 with catch @ 06080188 */
                    /* catch() { ... } // from try @ 0607ffac with catch @ 0608018c */
                    /* catch() { ... } // from try @ 0607ff50 with catch @ 06080190 */
      FUN_050f8b10(lVar11,lVar8,uVar9,*(undefined8 *)System_Func<byte,_object>_TypeInfo);
    }
  }
                    /* try { // try from 060801a0 to 061801a3 has its CatchHandler @ 060801bc */
  if ((*(long *)(param_1 + 0x18) != 0) &&
     (lVar11 = FUN_061a0d30(*(long *)(param_1 + 0x18),0), lVar11 != 0)) {
                    /* catch() { ... } // from try @ 060801a0 with catch @ 060801bc */
    if ((*(long *)(param_1 + 0x18) == 0) ||
       (lVar11 = FUN_061a0d30(*(long *)(param_1 + 0x18),0), lVar11 == 0)) goto LAB_06080098;
    lVar11 = FUN_061a2630(lVar11,0);
    puVar5 = System_Func<KeyValuePair<Type,_PostProcessBundle>,_PostProcessBundle>_TypeInfo;
    puVar4 = System_Func<KeyValuePair<Type,_PostProcessBundle>,_bool>_TypeInfo;
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
LAB_060801e8:
    uVar13 = FUN_061a293c(lVar11,0);
    puVar3 = PTR_DAT_07279f60;
                    /* try { // try from 060801f4 to 0618021b has its CatchHandler @ 06080230 */
    if ((uVar13 & 1) != 0) {
      plVar15 = (long *)FUN_061a29dc(lVar11,0);
      if (plVar15 != (long *)0x0) goto code_r0x0608020c;
      goto LAB_06080258;
    }
    plVar15 = (long *)thunk_FUN_032a55a4(lVar11,*(undefined8 *)PTR_DAT_07279f60);
    if (plVar15 != (long *)0x0) {
      lVar11 = *plVar15;
      uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar13 != 0) {
        piVar17 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == *(long *)puVar3) {
            puVar14 = (undefined8 *)(lVar11 + (long)*piVar17 * 0x10 + 0x138);
            goto LAB_060802f4;
          }
          uVar13 = uVar13 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar13 != 0);
      }
      puVar14 = (undefined8 *)FUN_032937ac(plVar15,*(long *)puVar3,0);
LAB_060802f4:
      (*(code *)*puVar14)(plVar15,puVar14[1]);
    }
  }
  if (lVar8 != 0) {
    *(undefined1 *)(lVar8 + 0xb0) = 0;
    return lVar8;
  }
LAB_06080098:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
code_r0x0608020c:
  bVar1 = *(byte *)(*plVar15 + 0x130);
  bVar2 = *(byte *)(*(long *)puVar4 + 0x130);
                    /* try { // try from 0608021c to 06180227 has its CatchHandler @ 0607fd80 */
                    /* try { // try from 06080228 to 0618022f has its CatchHandler @ 06080230 */
                    /* catch() { ... } // from try @ 060801f4 with catch @ 06080230
                       catch() { ... } // from try @ 06080228 with catch @ 06080230 */
  if ((bVar1 < bVar2) ||
     (lVar16 = *(long *)(*plVar15 + 200),
     *(long *)(lVar16 + (ulong)bVar2 * 8 + -8) != *(long *)puVar4)) {
                    /* WARNING: Subroutine does not return */
    FUN_032d618c(plVar15);
  }
  bVar2 = *(byte *)(*(long *)puVar5 + 0x130);
  if ((bVar1 < bVar2) || (*(long *)(lVar16 + (ulong)bVar2 * 8 + -8) != *(long *)puVar5)) {
LAB_06080258:
    uVar9 = FUN_0607f7bc(plVar15,plVar15);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    uVar13 = thunk_FUN_057aa644(uVar9,*(undefined8 *)(lVar8 + 0x90),0);
    if ((uVar13 & 1) != 0) {
      FUN_0607f8d4(param_1,plVar15);
    }
  }
  goto LAB_060801e8;
}


