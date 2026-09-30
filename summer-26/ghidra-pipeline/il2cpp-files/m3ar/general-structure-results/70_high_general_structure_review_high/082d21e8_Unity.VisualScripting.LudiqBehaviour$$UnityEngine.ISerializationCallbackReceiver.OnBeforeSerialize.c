/*
FUNCTION_NAME: Unity.VisualScripting.LudiqBehaviour$$UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize
ENTRY_POINT: 082d21e8
PROGRAM: m3ar-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


undefined4
Unity_VisualScripting_LudiqBehaviour__UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize
          (void)

{
  uint uVar1;
  byte bVar2;
  float fVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined4 uVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  undefined8 uVar20;
  long lVar21;
  long lVar22;
  undefined8 *puVar23;
  long lVar24;
  long lVar25;
  undefined4 *puVar26;
  long *unaff_x19;
  undefined4 uVar27;
  long unaff_x21;
  long *plVar28;
  long *plVar29;
  long *plVar30;
  uint *puVar31;
  uint uVar32;
  ulong uVar33;
  long unaff_x26;
  uint uVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  undefined1 auVar39 [16];
  uint uStack0000000000000024;
  int iStack0000000000000038;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  ulong in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  ulong in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  uint uStack0000000000000124;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  long in_stack_00000138;
  uint in_stack_00000148;
  undefined1 uStack000000000000014c;
  
  FUN_0403162c();
  FUN_0403162c(PTR_DAT_08ff6628);
                    /* try { // try from 082d2200 to 083d2203 has its CatchHandler @ 082d2aa0 */
  FUN_0403162c(PTR_DAT_08ff6640);
  FUN_0403162c(PTR_DAT_08fc16b0);
                    /* try { // try from 082d2214 to 083d221f has its CatchHandler @ 082d2a90 */
  FUN_0403162c(PTR_DAT_08ff6890);
  FUN_0403162c(PTR_DAT_08ff6898);
  FUN_0403162c(PTR_DAT_08ff68a0);
  FUN_0403162c(PTR_DAT_08ff68a8);
                    /* try { // try from 082d2240 to 083d224b has its CatchHandler @ 082d2a4c */
  *(undefined1 *)(unaff_x21 + 0xa31) = 1;
  puVar6 = PTR_DAT_08ff6640;
  uStack000000000000014c = 0;
                    /* try { // try from 082d2254 to 083d225f has its CatchHandler @ 082d2ab8 */
  in_stack_00000148 = 0;
  in_stack_00000130 = 0;
  in_stack_00000138 = 0;
  in_stack_00000128 = 0;
  uStack0000000000000124 = 0;
  *(undefined4 *)(unaff_x19 + 0x94) = 0;
  *(undefined1 *)((long)unaff_x19 + 0x292) = 0;
  puVar4 = PTR_DAT_08fc16b0;
  *(undefined2 *)(unaff_x19 + 0x8d) = 0;
                    /* try { // try from 082d2284 to 083d2287 has its CatchHandler @ 082d2aa0 */
  *(int *)((long)unaff_x19 + 0x284) = (int)unaff_x19[0x50];
  FUN_0832c8e0(unaff_x19 + 0x51,0);
  puVar5 = PTR_DAT_08ff6628;
  if ((*(byte *)((long)unaff_x19 + 0x284) & 1) == 0) {
                    /* try { // try from 082d2294 to 083d229f has its CatchHandler @ 082d29f8 */
    uVar27 = (undefined4)unaff_x19[0x47];
  }
  else {
    uVar27 = 700;
  }
  uVar20 = *(undefined8 *)puVar6;
  *(undefined4 *)((long)unaff_x19 + 0x23c) = uVar27;
  FUN_0608b970(unaff_x19 + 0x48,uVar27,uVar20);
  lVar21 = unaff_x19[0x1f];
                    /* try { // try from 082d22bc to 083d22bf has its CatchHandler @ 082d2aa0 */
  lVar22 = unaff_x19[0x22];
  lVar14 = *(long *)puVar4;
  *(undefined4 *)(unaff_x19 + 0x24) = 0;
  unaff_x19[0x20] = lVar21;
                    /* try { // try from 082d22cc to 083d22db has its CatchHandler @ 082d29dc */
  unaff_x19[0x23] = lVar22;
  if (*(int *)(lVar14 + 0xe4) == 0) {
    thunk_FUN_0408f364();
    uVar27 = (undefined4)unaff_x19[0x24];
    lVar21 = unaff_x19[0x20];
                    /* try { // try from 082d22ec to 083d22ef has its CatchHandler @ 082d28d4 */
    lVar22 = unaff_x19[0x23];
  }
  else {
    uVar27 = 0;
  }
                    /* try { // try from 082d2300 to 083d2313 has its CatchHandler @ 082d2998 */
  in_stack_00000110 = 0;
  in_stack_000000f8 = 0;
  in_stack_000000f0 = 0;
  in_stack_00000108 = 0;
  in_stack_00000100 = 0;
  in_stack_000000e8 = 0;
  in_stack_000000e0 = 0;
  Unity_VisualScripting_TypeFilter__ToString
            ((int)unaff_x19[0xc6],&stack0x000000e0,uVar27,lVar21,0,lVar22);
                    /* try { // try from 082d2320 to 083d2327 has its CatchHandler @ 082d2a00 */
  in_stack_00000058 = in_stack_000000e8;
  in_stack_00000050 = in_stack_000000e0;
  in_stack_00000068 = in_stack_000000f8;
  in_stack_00000060 = in_stack_000000f0;
  in_stack_00000078 = in_stack_00000108;
  in_stack_00000070 = in_stack_00000100;
  in_stack_00000080 = in_stack_00000110;
  uVar17 = in_stack_000000f0;
  FUN_0608bf60(*(long *)(*(long *)puVar4 + 0xb8) + 0x10,&stack0x00000050,*(undefined8 *)puVar5);
  puVar5 = PTR_DAT_08ff65d8;
                    /* try { // try from 082d2344 to 083d2347 has its CatchHandler @ 082d2aa0 */
  lVar14 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 8);
  if (lVar14 == 0) goto LAB_082d43c0;
                    /* try { // try from 082d2358 to 083d2363 has its CatchHandler @ 082d29f0 */
  System_Collections_Generic_Dictionary<object,_long>__Initialize
            (lVar14,*(undefined8 *)PTR_DAT_08feafb0);
                    /* try { // try from 082d2378 to 083d238b has its CatchHandler @ 082d29ec */
  FUN_082c61e4(unaff_x19[0x23],unaff_x19[0x20],*(long *)(*(long *)puVar4 + 0xb8),
               *(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 8));
  if (unaff_x19[0x74] == 0) {
    lVar14 = unaff_x19[0x92];
    lVar21 = thunk_FUN_0406deb8(*(undefined8 *)puVar5);
    FUN_0832b05c(lVar21,(int)lVar14,0);
    unaff_x19[0x74] = lVar21;
  }
  else {
    plVar28 = (long *)(unaff_x19[0x74] + 0x38);
    lVar14 = *plVar28;
    if (lVar14 == 0) goto LAB_082d43c0;
    lVar21 = unaff_x19[0x92];
                    /* try { // try from 082d2398 to 083d239b has its CatchHandler @ 082d2920 */
    if (*(int *)(lVar14 + 0x18) < (int)lVar21) {
                    /* try { // try from 082d23a4 to 083d23c7 has its CatchHandler @ 082d2a08 */
      if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      FUN_04d0f664(plVar28,(int)lVar21,0,*(undefined8 *)PTR_DAT_08ff6878);
    }
  }
  *(undefined4 *)((long)unaff_x19 + 0x65c) = 0;
  if ((int)unaff_x19[0x62] == 1) {
    FUN_0830cda8();
    puVar5 = PTR_DAT_08ff65b8;
    if (unaff_x19[0xcd] == 0) {
      *(undefined4 *)(unaff_x19 + 0x62) = 3;
      if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      uVar15 = FUN_0832212c(0);
      if ((uVar15 & 1) == 0) {
        if (unaff_x19[0x20] == 0) goto LAB_082d43c0;
        uVar20 = thunk_FUN_0858dfc0(unaff_x19[0x20],0);
        uVar20 = FUN_0736972c(*(undefined8 *)PTR_DAT_08ff68a0,uVar20,*(undefined8 *)PTR_DAT_08ff68a8
                              ,0);
        if (*(int *)(*(long *)PTR_DAT_08f655a0 + 0xe4) == 0) {
          thunk_FUN_0408f364(*(long *)PTR_DAT_08f655a0);
        }
        FUN_085392e4(uVar20);
      }
    }
    else {
      if (unaff_x19[0xce] == 0) goto LAB_082d43c0;
      iVar8 = FUN_0858dd10(unaff_x19[0xce],0);
      if (unaff_x19[0x20] == 0) goto LAB_082d43c0;
      iVar9 = FUN_0858dd10(unaff_x19[0x20],0);
      if (iVar8 != iVar9) {
        if (*(int *)(*(long *)PTR_DAT_08ff65b8 + 0xe4) == 0) {
          thunk_FUN_0408f364();
        }
        uVar15 = FUN_08322644(0);
        if ((uVar15 & 1) == 0) {
LAB_082d24a0:
          lVar14 = unaff_x19[0xce];
          if (lVar14 == 0) goto LAB_082d43c0;
          lVar21 = *(long *)(lVar14 + 0x88);
          unaff_x19[0xcf] = lVar21;
        }
        else {
          if (unaff_x19[0x23] == 0) goto LAB_082d43c0;
          iVar8 = FUN_0858dd10(unaff_x19[0x23],0);
          if ((unaff_x19[0xce] == 0) || (lVar14 = *(long *)(unaff_x19[0xce] + 0x88), lVar14 == 0))
          goto LAB_082d43c0;
          iVar9 = FUN_0858dd10(lVar14,0);
          if (iVar8 == iVar9) goto LAB_082d24a0;
          if (unaff_x19[0xce] == 0) goto LAB_082d43c0;
          lVar14 = unaff_x19[0x23];
          uVar20 = *(undefined8 *)(unaff_x19[0xce] + 0x88);
          if (*(int *)(*(long *)PTR_DAT_08ff6870 + 0xe4) == 0) {
            thunk_FUN_0408f364();
          }
          lVar21 = UnityEngine_XR_Interaction_Toolkit_XRInteractionManager__ClearInteractorHover
                             (lVar14,uVar20,0);
          lVar14 = unaff_x19[0xce];
          unaff_x19[0xcf] = lVar21;
        }
        lVar22 = *(long *)puVar4;
        if (*(int *)(lVar22 + 0xe4) == 0) {
          thunk_FUN_0408f364();
          lVar22 = *(long *)puVar4;
        }
        uVar10 = FUN_082c61e4(lVar21,lVar14,*(long *)(lVar22 + 0xb8),
                              *(undefined8 *)(*(long *)(lVar22 + 0xb8) + 8));
        lVar14 = *(long *)puVar4;
        *(uint *)(unaff_x19 + 0xd0) = uVar10;
        lVar14 = **(long **)(lVar14 + 0xb8);
        if (lVar14 == 0) goto LAB_082d43c0;
        if (*(uint *)(lVar14 + 0x18) <= uVar10) {
LAB_082d4458:
                    /* WARNING: Subroutine does not return */
          FUN_04031894();
        }
        *(undefined4 *)(lVar14 + (long)(int)uVar10 * 0x38 + 0x54) = 0;
      }
    }
  }
  if (unaff_x19[0x66] == 0) {
LAB_082d43c0:
                    /* WARNING: Subroutine does not return */
    FUN_0403188c();
  }
  uVar10 = FUN_05861a34(unaff_x19[0x66],0x6c696761,*(undefined8 *)PTR_DAT_08ff6590);
  if ((int)unaff_x19[0x62] == 6) {
    lVar14 = unaff_x19[99];
    if (*(int *)(*(long *)PTR_DAT_08f65598 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    uVar15 = FUN_0858816c(lVar14,0,0);
    puVar4 = PTR_DAT_08f65618;
    if (((uVar15 & 1) != 0) && (plVar28 = unaff_x19, *(char *)((long)unaff_x19 + 0x42d) == '\0')) {
      while( true ) {
        plVar28 = (long *)plVar28[99];
        if (*(int *)(*(long *)PTR_DAT_08f65598 + 0xe4) == 0) {
          thunk_FUN_0408f364();
        }
        uVar15 = FUN_0858816c(plVar28,0,0);
        if ((uVar15 & 1) == 0) goto LAB_082d264c;
        if (plVar28 == (long *)0x0) break;
        (**(code **)(*plVar28 + 0x558))
                  (plVar28,**(undefined8 **)(*(long *)(puVar4 + 0x90) + 0xb8),
                   *(undefined8 *)(*plVar28 + 0x560));
        (**(code **)(*plVar28 + 0x948))(plVar28,*(undefined8 *)(*plVar28 + 0x950));
        lVar14 = FUN_082fb63c(plVar28,0);
        if (lVar14 == 0) break;
        FUN_0832b31c(lVar14,0);
      }
      goto LAB_082d43c0;
    }
  }
LAB_082d264c:
  if (unaff_x26 == 0) goto LAB_082d43c0;
  uVar11 = *(uint *)(unaff_x26 + 0x18);
  if ((int)uVar11 < 1) {
    iStack0000000000000038 = 0;
LAB_082d3af0:
    plVar28 = (long *)PTR_DAT_08fc16b0;
    if (*(char *)((long)unaff_x19 + 0x42d) != '\0') {
      *(undefined1 *)((long)unaff_x19 + 0x42d) = 0;
LAB_082d3afc:
      return (int)unaff_x19[0x94];
    }
    lVar14 = unaff_x19[0x74];
    if (lVar14 != 0) {
      lVar21 = *(long *)PTR_DAT_08fc16b0;
      *(int *)(lVar14 + 0x1c) = iStack0000000000000038;
      if (*(int *)(lVar21 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        lVar21 = *plVar28;
      }
      lVar21 = *(long *)(*(long *)(lVar21 + 0xb8) + 8);
      if (lVar21 != 0) {
        uVar10 = FUN_06ee1f14(lVar21,*(undefined8 *)PTR_DAT_08f76d38);
        *(uint *)(lVar14 + 0x34) = uVar10;
        if (unaff_x19[0x74] != 0) {
          plVar29 = (long *)(unaff_x19[0x74] + 0x60);
          lVar14 = *plVar29;
          if (lVar14 != 0) {
            uVar15 = (ulong)uVar10;
            if (*(int *)(lVar14 + 0x18) < (int)uVar10) {
              if (*(int *)(*(long *)PTR_DAT_08ff65d8 + 0xe4) == 0) {
                thunk_FUN_0408f364();
              }
              Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<quaternion>
                        (plVar29,uVar15,0,*(undefined8 *)PTR_DAT_08ff6880);
            }
            if (unaff_x19[0xe4] != 0) {
              plVar29 = unaff_x19 + 0xe4;
              if (*(int *)(unaff_x19[0xe4] + 0x18) < (int)uVar10) {
                uVar11 = uVar10 | (int)uVar10 >> 0x10;
                uVar11 = uVar11 | (int)uVar11 >> 8;
                uVar11 = uVar11 | (int)uVar11 >> 4;
                uVar11 = uVar11 | (int)uVar11 >> 2;
                if (*(int *)(*(long *)PTR_DAT_08ff65d8 + 0xe4) == 0) {
                  thunk_FUN_0408f364();
                }
                FUN_04d0f434(plVar29,(uVar11 | (int)uVar11 >> 1) + 1,*(undefined8 *)PTR_DAT_08ff69b8
                            );
              }
              if (*(char *)((long)unaff_x19 + 0x359) != '\0') {
                if (unaff_x19[0x74] == 0) goto LAB_082d43c0;
                plVar30 = (long *)(unaff_x19[0x74] + 0x38);
                lVar14 = *plVar30;
                if (lVar14 == 0) goto LAB_082d43c0;
                iVar8 = (int)unaff_x19[0x94];
                if (0x100 < *(int *)(lVar14 + 0x18) - iVar8) {
                  iVar9 = 0x100;
                  if (0x100 < iVar8 + 1) {
                    iVar9 = iVar8 + 1;
                  }
                  if (*(int *)(*(long *)PTR_DAT_08ff65d8 + 0xe4) == 0) {
                    thunk_FUN_0408f364();
                  }
                  FUN_04d0f664(plVar30,iVar9,1,*(undefined8 *)PTR_DAT_08ff6878);
                }
              }
              puVar4 = PTR_DAT_08ff65a8;
              fVar3 = DAT_01a2e7f0;
              if (0 < (int)uVar10) {
                lVar14 = 0;
                uVar33 = 0;
                lVar21 = 0x54;
                do {
                  fVar38 = (float)uVar17;
                  if (uVar33 == 0) {
                    lVar22 = *plVar28;
                  }
                  else {
                    lVar22 = *plVar29;
                    if (lVar22 == 0) goto LAB_082d43c0;
                    if (*(uint *)(lVar22 + 0x18) <= uVar33) goto LAB_082d4458;
                    uVar20 = *(undefined8 *)(lVar22 + uVar33 * 8 + 0x20);
                    if (*(int *)(*(long *)PTR_DAT_08f65598 + 0xe4) == 0) {
                      thunk_FUN_0408f364();
                    }
                    uVar17 = FUN_08589e5c(uVar20,0,0);
                    if ((uVar17 & 1) != 0) {
                      lVar22 = *plVar28;
                      plVar30 = (long *)*plVar29;
                      if (*(int *)(lVar22 + 0xe4) == 0) {
                        thunk_FUN_0408f364();
                        lVar22 = *plVar28;
                      }
                      lVar22 = **(long **)(lVar22 + 0xb8);
                      if (lVar22 == 0) goto LAB_082d43c0;
                      if (*(uint *)(lVar22 + 0x18) <= uVar33) goto LAB_082d4458;
                      lVar22 = lVar22 + lVar21;
                      in_stack_000000d0 = *(undefined8 *)(lVar22 + -4);
                      in_stack_000000c8 = *(undefined8 *)(lVar22 + -0xc);
                      in_stack_000000c0 = *(undefined8 *)(lVar22 + -0x14);
                      in_stack_000000a8 = *(undefined8 *)(lVar22 + -0x2c);
                      uVar20 = *(undefined8 *)(lVar22 + -0x34);
                      in_stack_000000b8 = *(undefined8 *)(lVar22 + -0x1c);
                      in_stack_000000b0 = *(undefined8 *)(lVar22 + -0x24);
                      in_stack_000000a0 = uVar20;
                      lVar22 = FUN_08329e2c();
                      fVar38 = (float)uVar20;
                      if (plVar30 == (long *)0x0) goto LAB_082d43c0;
                      if ((lVar22 != 0) &&
                         (lVar18 = thunk_FUN_0406ddbc(lVar22,*(undefined8 *)(*plVar30 + 0x40)),
                         lVar18 == 0)) {
LAB_082d445c:
                        uVar20 = thunk_FUN_0407b7a8();
                    /* WARNING: Subroutine does not return */
                        FUN_04031750(uVar20,0);
                      }
                      if (*(uint *)(plVar30 + 3) <= uVar33) goto LAB_082d4458;
                      plVar30[uVar33 + 4] = lVar22;
                      if ((unaff_x19[0x74] == 0) ||
                         (lVar22 = *(long *)(unaff_x19[0x74] + 0x60), lVar22 == 0))
                      goto LAB_082d43c0;
                      if (*(uint *)(lVar22 + 0x18) <= uVar33) goto LAB_082d4458;
                      *(undefined8 *)(lVar22 + lVar14 + 0x30) = 0;
                    }
                    if (unaff_x19[0x77] == 0) goto LAB_082d43c0;
                    fVar35 = (float)FUN_08597b2c(unaff_x19[0x77],0);
                    lVar22 = *plVar29;
                    if (lVar22 == 0) goto LAB_082d43c0;
                    if (*(uint *)(lVar22 + 0x18) <= uVar33) goto LAB_082d4458;
                    lVar22 = *(long *)(lVar22 + uVar33 * 8 + 0x20);
                    if ((lVar22 == 0) ||
                       (fVar37 = fVar38,
                       lVar22 = UnityEngine_UIElements_StyleSheets_StylePropertyReader__ReadFloat
                                          (lVar22,0), lVar22 == 0)) goto LAB_082d43c0;
                    fVar36 = (float)FUN_08597b2c(lVar22,0);
                    fVar38 = (fVar38 - fVar37) * (fVar38 - fVar37);
                    uVar17 = (ulong)(uint)fVar38;
                    if (fVar3 <= (fVar35 - fVar36) * (fVar35 - fVar36) + fVar38) {
                      lVar22 = *plVar29;
                      if (lVar22 == 0) goto LAB_082d43c0;
                      if (*(uint *)(lVar22 + 0x18) <= uVar33) goto LAB_082d4458;
                      lVar22 = *(long *)(lVar22 + uVar33 * 8 + 0x20);
                      if (lVar22 == 0) goto LAB_082d43c0;
                      lVar22 = UnityEngine_UIElements_StyleSheets_StylePropertyReader__ReadFloat
                                         (lVar22,0);
                      if ((unaff_x19[0x77] == 0) || (FUN_08597b2c(unaff_x19[0x77],0), lVar22 == 0))
                      goto LAB_082d43c0;
                      FUN_08597bf4(lVar22,0);
                    }
                    lVar22 = *plVar29;
                    if (lVar22 == 0) goto LAB_082d43c0;
                    if (*(uint *)(lVar22 + 0x18) <= uVar33) goto LAB_082d4458;
                    lVar22 = *(long *)(lVar22 + uVar33 * 8 + 0x20);
                    if (lVar22 == 0) goto LAB_082d43c0;
                    uVar20 = *(undefined8 *)(lVar22 + 0xf0);
                    if (*(int *)(*(long *)PTR_DAT_08f65598 + 0xe4) == 0) {
                      thunk_FUN_0408f364();
                    }
                    uVar19 = FUN_08589e5c(uVar20,0,0);
                    if ((uVar19 & 1) == 0) {
                      lVar22 = *plVar29;
                      if (lVar22 == 0) goto LAB_082d43c0;
                      if (*(uint *)(lVar22 + 0x18) <= uVar33) goto LAB_082d4458;
                      lVar22 = *(long *)(lVar22 + uVar33 * 8 + 0x20);
                      if ((lVar22 == 0) || (lVar22 = *(long *)(lVar22 + 0xf0), lVar22 == 0))
                      goto LAB_082d43c0;
                      iVar8 = FUN_0858dd10(lVar22,0);
                      lVar22 = *plVar28;
                      if (*(int *)(lVar22 + 0xe4) == 0) {
                        thunk_FUN_0408f364(lVar22);
                        lVar22 = *plVar28;
                      }
                      lVar22 = **(long **)(lVar22 + 0xb8);
                      if (lVar22 == 0) goto LAB_082d43c0;
                      if (*(uint *)(lVar22 + 0x18) <= uVar33) goto LAB_082d4458;
                      lVar22 = *(long *)(lVar22 + lVar21 + -0x1c);
                      if (lVar22 == 0) goto LAB_082d43c0;
                      iVar9 = FUN_0858dd10(lVar22,0);
                      if (iVar8 != iVar9) goto LAB_082d3f50;
                      lVar22 = *plVar28;
                    }
                    else {
LAB_082d3f50:
                      lVar22 = *plVar29;
                      if (lVar22 == 0) goto LAB_082d43c0;
                      if (*(uint *)(lVar22 + 0x18) <= uVar33) goto LAB_082d4458;
                      lVar18 = *plVar28;
                      lVar22 = *(long *)(lVar22 + uVar33 * 8 + 0x20);
                      if (*(int *)(lVar18 + 0xe4) == 0) {
                        thunk_FUN_0408f364();
                        lVar18 = *plVar28;
                      }
                      lVar18 = **(long **)(lVar18 + 0xb8);
                      if (lVar18 == 0) goto LAB_082d43c0;
                      if (*(uint *)(lVar18 + 0x18) <= uVar33) goto LAB_082d4458;
                      if (lVar22 == 0) goto LAB_082d43c0;
                      FUN_08329aa4(lVar22,*(undefined8 *)(lVar18 + lVar21 + -0x1c),0);
                      lVar18 = *plVar29;
                      if (lVar18 == 0) goto LAB_082d43c0;
                      if (*(uint *)(lVar18 + 0x18) <= uVar33) goto LAB_082d4458;
                      lVar22 = *plVar28;
                      lVar24 = **(long **)(lVar22 + 0xb8);
                      if (lVar24 == 0) goto LAB_082d43c0;
                      if (*(uint *)(lVar24 + 0x18) <= uVar33) goto LAB_082d4458;
                      lVar18 = lVar18 + uVar33 * 8;
                      lVar25 = *(long *)(lVar18 + 0x20);
                      if (lVar25 == 0) goto LAB_082d43c0;
                      *(undefined8 *)(lVar25 + 0xd8) = *(undefined8 *)(lVar24 + lVar21 + -0x2c);
                      lVar18 = *(long *)(lVar18 + 0x20);
                      if (lVar18 == 0) goto LAB_082d43c0;
                      *(undefined8 *)(lVar18 + 0xe0) = *(undefined8 *)(lVar24 + lVar21 + -0x24);
                    }
                    if (*(int *)(lVar22 + 0xe4) == 0) {
                      thunk_FUN_0408f364();
                      lVar22 = *plVar28;
                    }
                    lVar18 = **(long **)(lVar22 + 0xb8);
                    if (lVar18 == 0) goto LAB_082d43c0;
                    if (*(uint *)(lVar18 + 0x18) <= uVar33) goto LAB_082d4458;
                    if (*(char *)(lVar18 + lVar21 + -0x13) != '\0') {
                      lVar24 = *plVar29;
                      if (lVar24 == 0) goto LAB_082d43c0;
                      if (*(uint *)(lVar24 + 0x18) <= uVar33) goto LAB_082d4458;
                      lVar24 = *(long *)(lVar24 + uVar33 * 8 + 0x20);
                      if (*(int *)(lVar22 + 0xe4) == 0) {
                        thunk_FUN_0408f364();
                        lVar18 = **(long **)(*plVar28 + 0xb8);
                        if (lVar18 == 0) goto LAB_082d43c0;
                      }
                      if (*(uint *)(lVar18 + 0x18) <= uVar33) goto LAB_082d4458;
                      if (lVar24 == 0) goto LAB_082d43c0;
                      FUN_08329b0c(lVar24,*(undefined8 *)(lVar18 + lVar21 + -0x1c),0);
                      lVar18 = *plVar29;
                      if (lVar18 == 0) goto LAB_082d43c0;
                      if (*(uint *)(lVar18 + 0x18) <= uVar33) goto LAB_082d4458;
                      lVar22 = *plVar28;
                      lVar24 = **(long **)(lVar22 + 0xb8);
                      if (lVar24 == 0) goto LAB_082d43c0;
                      if (*(uint *)(lVar24 + 0x18) <= uVar33) goto LAB_082d4458;
                      lVar18 = *(long *)(lVar18 + uVar33 * 8 + 0x20);
                      if (lVar18 == 0) goto LAB_082d43c0;
                      *(undefined8 *)(lVar18 + 0x100) = *(undefined8 *)(lVar24 + lVar21 + -0xc);
                    }
                  }
                  if (*(int *)(lVar22 + 0xe4) == 0) {
                    thunk_FUN_0408f364();
                    lVar22 = *plVar28;
                  }
                  plVar28 = (long *)PTR_DAT_08fc16b0;
                  lVar22 = **(long **)(lVar22 + 0xb8);
                  if (lVar22 == 0) goto LAB_082d43c0;
                  if (*(uint *)(lVar22 + 0x18) <= uVar33) goto LAB_082d4458;
                  if ((unaff_x19[0x74] == 0) ||
                     (lVar18 = *(long *)(unaff_x19[0x74] + 0x60), lVar18 == 0)) goto LAB_082d43c0;
                  if (*(uint *)(lVar18 + 0x18) <= uVar33) goto LAB_082d4458;
                  uVar11 = *(uint *)(lVar22 + lVar21);
                  lVar22 = *(long *)(lVar18 + lVar14 + 0x30);
                  if (lVar22 == 0) {
                    if (uVar33 == 0) {
                      in_stack_00000068 = 0;
                      in_stack_00000060 = 0;
                      in_stack_00000078 = 0;
                      in_stack_00000070 = 0;
                      in_stack_00000088 = 0;
                      in_stack_00000080 = 0;
                      in_stack_00000098 = 0;
                      in_stack_00000090 = 0;
                      in_stack_00000058 = 0;
                      in_stack_00000050 = 0;
                      FUN_0831e2c8(&stack0x00000050,unaff_x19[0x7b],uVar11 + 1,0);
                      if (*(int *)(lVar18 + 0x18) == 0) goto LAB_082d4458;
                    }
                    else {
                      lVar22 = *plVar29;
                      if (lVar22 == 0) goto LAB_082d43c0;
                      if (*(uint *)(lVar22 + 0x18) <= uVar33) goto LAB_082d4458;
                      lVar22 = *(long *)(lVar22 + uVar33 * 8 + 0x20);
                      if (lVar22 == 0) goto LAB_082d43c0;
                      uVar20 = FUN_08329ce0(lVar22,0);
                      in_stack_00000068 = 0;
                      in_stack_00000060 = 0;
                      in_stack_00000078 = 0;
                      in_stack_00000070 = 0;
                      in_stack_00000088 = 0;
                      in_stack_00000080 = 0;
                      in_stack_00000098 = 0;
                      in_stack_00000090 = 0;
                      in_stack_00000058 = 0;
                      in_stack_00000050 = 0;
                      FUN_0831e2c8(&stack0x00000050,uVar20,uVar11 + 1,0);
                      if (*(uint *)(lVar18 + 0x18) <= uVar33) goto LAB_082d4458;
                      lVar18 = lVar18 + lVar14;
                    }
                    memmove((void *)(lVar18 + 0x20),&stack0x00000050,0x50);
                    plVar28 = (long *)PTR_DAT_08fc16b0;
                  }
                  else {
                    iVar8 = *(int *)(lVar22 + 0x18);
                    if (iVar8 < (int)(uVar11 * 4)) {
                      if ((int)uVar11 < 0x401) {
                        uVar11 = uVar11 | (int)uVar11 >> 0x10;
                        uVar11 = uVar11 | (int)uVar11 >> 8;
                        uVar11 = uVar11 | (int)uVar11 >> 4;
                        uVar11 = uVar11 | (int)uVar11 >> 2;
                        uVar11 = uVar11 | (int)uVar11 >> 1;
LAB_082d4230:
                        iVar8 = uVar11 + 1;
                      }
                      else {
LAB_082d4158:
                        iVar8 = uVar11 + 0x100;
                      }
                      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                        thunk_FUN_0408f364();
                      }
                      FUN_0831ef9c(lVar18 + lVar14 + 0x20,iVar8,0);
                    }
                    else if ((*(char *)((long)unaff_x19 + 0x359) != '\0') && (0 < (int)uVar11)) {
                      iVar9 = iVar8 + 3;
                      if (-1 < iVar8) {
                        iVar9 = iVar8;
                      }
                      if (0x100 < (int)((iVar9 >> 2) - uVar11)) {
                        if (uVar11 < 0x401) {
                          uVar11 = uVar11 >> 4 | uVar11 >> 8 | uVar11;
                          uVar11 = uVar11 | uVar11 >> 2;
                          uVar11 = uVar11 | uVar11 >> 1;
                          goto LAB_082d4230;
                        }
                        goto LAB_082d4158;
                      }
                    }
                  }
                  if ((unaff_x19[0x74] == 0) ||
                     (lVar22 = *(long *)(unaff_x19[0x74] + 0x60), lVar22 == 0)) goto LAB_082d43c0;
                  lVar18 = *plVar28;
                  if (*(int *)(lVar18 + 0xe4) == 0) {
                    thunk_FUN_0408f364();
                    lVar18 = *plVar28;
                  }
                  lVar18 = **(long **)(lVar18 + 0xb8);
                  if (lVar18 == 0) goto LAB_082d43c0;
                  if ((*(uint *)(lVar18 + 0x18) <= uVar33) || (*(uint *)(lVar22 + 0x18) <= uVar33))
                  goto LAB_082d4458;
                  lVar18 = lVar18 + lVar21;
                  uVar33 = uVar33 + 1;
                  lVar22 = lVar22 + lVar14;
                  lVar14 = lVar14 + 0x50;
                  lVar21 = lVar21 + 0x38;
                  *(undefined8 *)(lVar22 + 0x68) = *(undefined8 *)(lVar18 + -0x1c);
                } while (uVar15 != uVar33);
              }
              lVar14 = *plVar29;
              if (lVar14 != 0) {
                lVar21 = (long)(int)uVar10 + 4;
                do {
                  uVar10 = (uint)*(undefined8 *)(lVar14 + 0x18);
                  if ((long)(int)uVar10 <= lVar21 + -4) goto LAB_082d3afc;
                  uVar11 = (uint)uVar15;
                  if (uVar10 <= uVar11) goto LAB_082d4458;
                  uVar20 = *(undefined8 *)(lVar14 + lVar21 * 8);
                  if (*(int *)(*(long *)PTR_DAT_08f65598 + 0xe4) == 0) {
                    thunk_FUN_0408f364();
                  }
                  uVar17 = FUN_0858816c(uVar20,0,0);
                  if ((uVar17 & 1) == 0) goto LAB_082d3afc;
                  if ((unaff_x19[0x74] == 0) ||
                     (lVar14 = *(long *)(unaff_x19[0x74] + 0x60), lVar14 == 0)) break;
                  if (lVar21 + -4 < (long)*(int *)(lVar14 + 0x18)) {
                    lVar14 = *plVar29;
                    if (lVar14 == 0) break;
                    if (*(uint *)(lVar14 + 0x18) <= uVar11) goto LAB_082d4458;
                    lVar14 = *(long *)(lVar14 + lVar21 * 8);
                    if ((lVar14 == 0) || (lVar14 = FUN_0869bc74(lVar14,0), lVar14 == 0)) break;
                    FUN_08868968(lVar14,0,0);
                  }
                  lVar14 = *plVar29;
                  lVar21 = lVar21 + 1;
                  uVar15 = (ulong)(uVar11 + 1);
                } while (lVar14 != 0);
              }
            }
          }
        }
      }
    }
    goto LAB_082d43c0;
  }
  uVar34 = 0;
  lVar14 = unaff_x26 + 0x20;
  iStack0000000000000038 = 0;
LAB_082d266c:
  if (uVar11 <= uVar34) goto LAB_082d4458;
  puVar31 = (uint *)(lVar14 + (long)(int)uVar34 * 0x10 + 4);
  if (*puVar31 == 0) goto LAB_082d3af0;
  if (unaff_x19[0x74] == 0) goto LAB_082d43c0;
  plVar28 = (long *)(unaff_x19[0x74] + 0x38);
  lVar22 = *plVar28;
  lVar21 = unaff_x19[0x94];
  if ((lVar22 == 0) || (*(int *)(lVar22 + 0x18) <= (int)lVar21)) {
    if (*(int *)(*(long *)PTR_DAT_08ff65d8 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    FUN_04d0f664(plVar28,(int)lVar21 + 1,1,*(undefined8 *)PTR_DAT_08ff6878);
    uVar11 = *(uint *)(unaff_x26 + 0x18);
  }
  if (uVar11 <= uVar34) goto LAB_082d4458;
  uVar11 = *puVar31;
  uVar27 = (undefined4)unaff_x19[0x24];
  if ((*(char *)((long)unaff_x19 + 0x33a) != '\0') && (uVar11 == 0x3c)) {
    uVar15 = FUN_083025c8();
    uVar1 = in_stack_00000148;
    if ((uVar15 & 1) == 0) {
      uVar27 = (undefined4)unaff_x19[0x24];
      goto LAB_082d28b0;
    }
    if (*(uint *)(unaff_x26 + 0x18) <= uVar34) goto LAB_082d4458;
    iVar8 = *(int *)(lVar14 + (long)(int)uVar34 * 0x10 + 8);
    if ((*(byte *)((long)unaff_x19 + 0x284) & 1) != 0) {
      *(undefined1 *)((long)unaff_x19 + 0x292) = 1;
    }
    puVar4 = PTR_DAT_08fc16b0;
    uVar34 = in_stack_00000148;
    if (*(int *)((long)unaff_x19 + 0x65c) != 1) goto LAB_082d3ad8;
    lVar21 = *(long *)PTR_DAT_08fc16b0;
    if (*(int *)(lVar21 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      lVar21 = *(long *)puVar4;
    }
    lVar21 = **(long **)(lVar21 + 0xb8);
    if (lVar21 != 0) {
      if (*(uint *)(unaff_x19 + 0x24) < *(uint *)(lVar21 + 0x18)) {
        lVar21 = lVar21 + (long)(int)*(uint *)(unaff_x19 + 0x24) * 0x38;
        *(int *)(lVar21 + 0x54) = *(int *)(lVar21 + 0x54) + 1;
        if ((unaff_x19[0x74] != 0) && (lVar21 = *(long *)(unaff_x19[0x74] + 0x38), lVar21 != 0)) {
          uVar11 = *(uint *)(unaff_x19 + 0x94);
          if (uVar11 < *(uint *)(lVar21 + 0x18)) {
            lVar22 = lVar21 + 0x20 + (long)(int)uVar11 * 0x178;
            *(short *)(lVar22 + 4) = *(short *)((long)unaff_x19 + 0x6bc) + -0x2000;
            *(long *)(lVar22 + 0x20) = unaff_x19[0x20];
            *(int *)(lVar22 + 0x30) = (int)unaff_x19[0x24];
            if ((unaff_x19[0xd6] != 0) && (lVar22 = FUN_08325f94(unaff_x19[0xd6],0), lVar22 != 0)) {
              uVar20 = FUN_057d50ec(lVar22,*(undefined4 *)((long)unaff_x19 + 0x6bc),
                                    *(undefined8 *)PTR_DAT_08ff6858);
              if (uVar11 < *(uint *)(lVar21 + 0x18)) {
                *(undefined8 *)(lVar21 + 0x20 + (long)(int)uVar11 * 0x178 + 0x10) = uVar20;
                if ((unaff_x19[0x74] != 0) &&
                   (lVar21 = *(long *)(unaff_x19[0x74] + 0x38), lVar21 != 0)) {
                  uVar11 = *(uint *)(unaff_x19 + 0x94);
                  if (uVar11 < *(uint *)(lVar21 + 0x18)) {
                    puVar26 = (undefined4 *)(lVar21 + 0x20 + (long)(int)uVar11 * 0x178);
                    *puVar26 = *(undefined4 *)((long)unaff_x19 + 0x65c);
                    puVar26[2] = iVar8;
                    if (uVar1 < *(uint *)(unaff_x26 + 0x18)) {
                      *(int *)(lVar21 + 0x20 + (long)(int)uVar11 * 0x178 + 0xc) =
                           (*(int *)(lVar14 + (long)(int)uVar1 * 0x10 + 8) - iVar8) + 1;
                      *(undefined4 *)((long)unaff_x19 + 0x65c) = 0;
                      *(undefined4 *)(unaff_x19 + 0x24) = uVar27;
                      uVar34 = uVar1;
                      goto LAB_082d35bc;
                    }
                  }
                  goto LAB_082d4458;
                }
                goto LAB_082d43c0;
              }
              goto LAB_082d4458;
            }
            goto LAB_082d43c0;
          }
          goto LAB_082d4458;
        }
        goto LAB_082d43c0;
      }
      goto LAB_082d4458;
    }
    goto LAB_082d43c0;
  }
LAB_082d28b0:
  lVar22 = unaff_x19[0x20];
  lVar21 = unaff_x19[0x23];
  uStack000000000000014c = 0;
  if (*(int *)((long)unaff_x19 + 0x65c) != 0) goto LAB_082d2978;
  uVar1 = *(uint *)((long)unaff_x19 + 0x284);
  if ((uVar1 >> 4 & 1) == 0) {
    if ((uVar1 >> 3 & 1) == 0) {
      if ((uVar1 >> 5 & 1) != 0) goto LAB_082d28d8;
    }
    else {
      if (*(int *)(*(long *)(PTR_DAT_08f65618 + 0x88) + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      uVar15 = FUN_0745015c(uVar11,0);
      if ((uVar15 & 1) != 0) {
        if (*(int *)(*(long *)(PTR_DAT_08f65618 + 0x88) + 0xe4) == 0) {
          thunk_FUN_0408f364();
        }
        uVar11 = FUN_074505fc(uVar11,0);
        goto LAB_082d2974;
      }
    }
  }
  else {
LAB_082d28d8:
    if (*(int *)(*(long *)(PTR_DAT_08f65618 + 0x88) + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    uVar15 = System_Threading_Monitor__TryEnter(uVar11,0);
    if ((uVar15 & 1) != 0) {
      if (*(int *)(*(long *)(PTR_DAT_08f65618 + 0x88) + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      uVar11 = FUN_07450484(uVar11,0);
LAB_082d2974:
      uVar11 = uVar11 & 0xffff;
    }
  }
LAB_082d2978:
  uVar1 = uVar34 + 1;
  if ((int)uVar1 < (int)*(uint *)(unaff_x26 + 0x18)) {
    if (*(uint *)(unaff_x26 + 0x18) <= uVar1) goto LAB_082d4458;
    uVar32 = *(uint *)(lVar14 + (long)(int)uVar1 * 0x10 + 4);
  }
  else {
    uVar32 = 0;
  }
  uStack0000000000000024 = uVar11;
  if (*(char *)((long)unaff_x19 + 0x33b) == '\0') {
LAB_082d2afc:
    lVar18 = FUN_0830d168();
    if (lVar18 == 0) {
      if (*(uint *)(unaff_x26 + 0x18) <= uVar34) goto LAB_082d4458;
      FUN_0830d810();
      if (*(int *)(*(long *)PTR_DAT_08ff65b8 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      iVar8 = FUN_08322014(0);
      bVar7 = *(uint *)(unaff_x26 + 0x18) <= uVar34;
      if (iVar8 == 0) {
        if (bVar7) goto LAB_082d4458;
        uStack0000000000000024 = 0x25a1;
      }
      else {
        if (bVar7) goto LAB_082d4458;
        if (*(int *)(*(long *)PTR_DAT_08ff65b8 + 0xe4) == 0) {
          thunk_FUN_0408f364();
        }
        uStack0000000000000024 = FUN_08322014(0);
      }
      *puVar31 = uStack0000000000000024;
      lVar18 = unaff_x19[0x20];
      if (*(int *)(*(long *)PTR_DAT_08ff6868 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      lVar18 = FUN_082eacf4(uStack0000000000000024,lVar18,1,0,400,&stack0x0000014c,0);
      if (lVar18 == 0) {
        if (*(int *)(*(long *)PTR_DAT_08ff65b8 + 0xe4) == 0) {
          thunk_FUN_0408f364();
        }
        lVar18 = FUN_08322588(0);
        if (lVar18 != 0) {
          if (*(int *)(*(long *)PTR_DAT_08ff65b8 + 0xe4) == 0) {
            thunk_FUN_0408f364();
          }
          lVar18 = FUN_08322588(0);
          if (lVar18 == 0) goto LAB_082d43c0;
          if (0 < *(int *)(lVar18 + 0x18)) {
            lVar18 = unaff_x19[0x20];
            if (*(int *)(*(long *)PTR_DAT_08ff65b8 + 0xe4) == 0) {
              thunk_FUN_0408f364();
            }
            uVar20 = FUN_08322588(0);
            if (*(int *)(*(long *)PTR_DAT_08ff6868 + 0xe4) == 0) {
              thunk_FUN_0408f364(*(long *)PTR_DAT_08ff6868);
            }
            lVar18 = FUN_082eb454(uStack0000000000000024,lVar18,uVar20,1,0,400,&stack0x0000014c,0);
            if (lVar18 != 0) goto LAB_082d2f0c;
          }
        }
        if (*(int *)(*(long *)PTR_DAT_08ff65b8 + 0xe4) == 0) {
          thunk_FUN_0408f364();
        }
        uVar20 = FUN_08322188(0);
        if (*(int *)(*(long *)PTR_DAT_08f65598 + 0xe4) == 0) {
          thunk_FUN_0408f364(*(long *)PTR_DAT_08f65598);
        }
        uVar15 = FUN_0858816c(uVar20,0,0);
        if ((uVar15 & 1) != 0) {
          if (*(int *)(*(long *)PTR_DAT_08ff65b8 + 0xe4) == 0) {
            thunk_FUN_0408f364();
          }
          uVar20 = FUN_08322188(0);
          if (*(int *)(*(long *)PTR_DAT_08ff6868 + 0xe4) == 0) {
            thunk_FUN_0408f364(*(long *)PTR_DAT_08ff6868);
          }
          lVar18 = FUN_082eacf4(uStack0000000000000024,uVar20,1,0,400,&stack0x0000014c,0);
          if (lVar18 != 0) goto LAB_082d2f0c;
        }
        if (*(uint *)(unaff_x26 + 0x18) <= uVar34) goto LAB_082d4458;
        *puVar31 = 0x20;
        lVar18 = unaff_x19[0x20];
        if (*(int *)(*(long *)PTR_DAT_08ff6868 + 0xe4) == 0) {
          thunk_FUN_0408f364();
        }
        uStack0000000000000024 = 0x20;
        lVar18 = FUN_082eacf4(0x20,lVar18,1,0,400,&stack0x0000014c,0);
        if (lVar18 == 0) {
          if (*(uint *)(unaff_x26 + 0x18) <= uVar34) goto LAB_082d4458;
          *puVar31 = 3;
          lVar18 = unaff_x19[0x20];
          if (*(int *)(*(long *)PTR_DAT_08ff6868 + 0xe4) == 0) {
            thunk_FUN_0408f364();
          }
          uStack0000000000000024 = 3;
          lVar18 = FUN_082eacf4(3,lVar18,1,0,400,&stack0x0000014c,0);
        }
      }
LAB_082d2f0c:
      if (*(int *)(*(long *)PTR_DAT_08ff65b8 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      uVar15 = FUN_0832212c(0);
      if ((uVar15 & 1) == 0) {
        plVar28 = (long *)FUN_040316d0(*(undefined8 *)PTR_DAT_08f65d88,4);
        if (uVar11 >> 0x10 == 0) {
          in_stack_00000050 = CONCAT44(in_stack_00000050._4_4_,uVar11);
          lVar24 = thunk_FUN_0406db0c(*(undefined8 *)(PTR_DAT_08f65618 + 0x50),&stack0x00000050);
          if (plVar28 == (long *)0x0) goto LAB_082d43c0;
          if ((lVar24 != 0) &&
             (lVar25 = thunk_FUN_0406ddbc(lVar24,*(undefined8 *)(*plVar28 + 0x40)), lVar25 == 0))
          goto LAB_082d445c;
          if ((int)plVar28[3] == 0) goto LAB_082d4458;
          plVar28[4] = lVar24;
          if (unaff_x19[0x1f] == 0) goto LAB_082d43c0;
          lVar24 = thunk_FUN_0858dfc0(unaff_x19[0x1f],0);
          if ((lVar24 != 0) &&
             (lVar25 = thunk_FUN_0406ddbc(lVar24,*(undefined8 *)(*plVar28 + 0x40)), lVar25 == 0))
          goto LAB_082d445c;
          if ((*(uint *)(plVar28 + 3) & 0xfffffffe) == 0) goto LAB_082d4458;
          plVar28[5] = lVar24;
          if (lVar18 == 0) goto LAB_082d43c0;
          in_stack_000000e0 = CONCAT44(in_stack_000000e0._4_4_,*(undefined4 *)(lVar18 + 0x14));
          lVar24 = thunk_FUN_0406db0c(*(undefined8 *)(PTR_DAT_08f65618 + 0x50),&stack0x000000e0);
          if ((lVar24 != 0) &&
             (lVar25 = thunk_FUN_0406ddbc(lVar24,*(undefined8 *)(*plVar28 + 0x40)), lVar25 == 0))
          goto LAB_082d445c;
          if (*(uint *)(plVar28 + 3) < 3) goto LAB_082d4458;
          plVar28[6] = lVar24;
          lVar24 = thunk_FUN_0858dfc0();
          if ((lVar24 != 0) &&
             (lVar25 = thunk_FUN_0406ddbc(lVar24,*(undefined8 *)(*plVar28 + 0x40)), lVar25 == 0))
          goto LAB_082d445c;
          if ((*(uint *)(plVar28 + 3) & 0xfffffffc) == 0) goto LAB_082d4458;
          plVar28[7] = lVar24;
          puVar23 = (undefined8 *)PTR_DAT_08ff6898;
        }
        else {
          in_stack_00000050 = CONCAT44(in_stack_00000050._4_4_,uVar11);
          lVar24 = thunk_FUN_0406db0c(*(undefined8 *)(PTR_DAT_08f65618 + 0x50),&stack0x00000050);
          if (plVar28 == (long *)0x0) goto LAB_082d43c0;
          if ((lVar24 != 0) &&
             (lVar25 = thunk_FUN_0406ddbc(lVar24,*(undefined8 *)(*plVar28 + 0x40)), lVar25 == 0))
          goto LAB_082d445c;
          if ((int)plVar28[3] == 0) goto LAB_082d4458;
          plVar28[4] = lVar24;
          if (unaff_x19[0x1f] == 0) goto LAB_082d43c0;
          lVar24 = thunk_FUN_0858dfc0(unaff_x19[0x1f],0);
          if ((lVar24 != 0) &&
             (lVar25 = thunk_FUN_0406ddbc(lVar24,*(undefined8 *)(*plVar28 + 0x40)), lVar25 == 0))
          goto LAB_082d445c;
          if ((*(uint *)(plVar28 + 3) & 0xfffffffe) == 0) goto LAB_082d4458;
          plVar28[5] = lVar24;
          if (lVar18 == 0) goto LAB_082d43c0;
          in_stack_000000e0 = CONCAT44(in_stack_000000e0._4_4_,*(undefined4 *)(lVar18 + 0x14));
          lVar24 = thunk_FUN_0406db0c(*(undefined8 *)(PTR_DAT_08f65618 + 0x50),&stack0x000000e0);
          if ((lVar24 != 0) &&
             (lVar25 = thunk_FUN_0406ddbc(lVar24,*(undefined8 *)(*plVar28 + 0x40)), lVar25 == 0))
          goto LAB_082d445c;
          if (*(uint *)(plVar28 + 3) < 3) goto LAB_082d4458;
          plVar28[6] = lVar24;
          lVar24 = thunk_FUN_0858dfc0();
          if ((lVar24 != 0) &&
             (lVar25 = thunk_FUN_0406ddbc(lVar24,*(undefined8 *)(*plVar28 + 0x40)), lVar25 == 0))
          goto LAB_082d445c;
          if ((*(uint *)(plVar28 + 3) & 0xfffffffc) == 0) goto LAB_082d4458;
          plVar28[7] = lVar24;
          puVar23 = (undefined8 *)PTR_DAT_08ff6890;
        }
        uVar20 = FUN_0736a31c(*puVar23,plVar28,0);
        if (*(int *)(*(long *)PTR_DAT_08f655a0 + 0xe4) == 0) {
          thunk_FUN_0408f364();
        }
        FUN_085392e4(uVar20);
      }
    }
  }
  else {
    if (*(int *)(*(long *)PTR_DAT_08ff65e0 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    uVar15 = FUN_0832c2a4(uVar11,0);
    if (((uVar15 & 1) == 0) || (uVar32 == 0xfe0e)) {
      if (*(int *)(*(long *)PTR_DAT_08ff65e0 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      uVar15 = FUN_0832c224(uVar11,0);
      if (((uVar15 & 1) == 0) || (uVar32 != 0xfe0f)) goto LAB_082d2afc;
    }
    if (*(int *)(*(long *)PTR_DAT_08ff65b8 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    lVar18 = FUN_08322990(0);
    if (lVar18 == 0) goto LAB_082d2afc;
    if (*(int *)(*(long *)PTR_DAT_08ff65b8 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    lVar18 = FUN_08322990(0);
    if (lVar18 == 0) goto LAB_082d43c0;
    if (*(int *)(lVar18 + 0x18) < 1) goto LAB_082d2afc;
    lVar18 = unaff_x19[0x20];
    if (*(int *)(*(long *)PTR_DAT_08ff65b8 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    uVar20 = FUN_08322990(0);
    lVar24 = unaff_x19[0x50];
    lVar25 = unaff_x19[0x47];
    if (*(int *)(*(long *)PTR_DAT_08ff6868 + 0xe4) == 0) {
      thunk_FUN_0408f364(*(long *)PTR_DAT_08ff6868);
    }
    lVar18 = FUN_082eb668(uVar11,lVar18,uVar20,1,(int)lVar24,(int)lVar25,&stack0x0000014c,0);
    if (lVar18 == 0) goto LAB_082d2afc;
  }
  if ((unaff_x19[0x74] == 0) || (lVar24 = *(long *)(unaff_x19[0x74] + 0x38), lVar24 == 0))
  goto LAB_082d43c0;
  if (*(uint *)(lVar24 + 0x18) <= *(uint *)(unaff_x19 + 0x94)) goto LAB_082d4458;
  *(undefined8 *)(lVar24 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x178 + 0x38) = 0;
  if (lVar18 == 0) goto LAB_082d43c0;
  if (*(char *)(lVar18 + 0x10) == '\x01') {
    if (*(long *)(lVar18 + 0x18) == 0) goto LAB_082d43c0;
    iVar8 = FUN_082d75b4(*(long *)(lVar18 + 0x18),0);
    if (unaff_x19[0x20] == 0) goto LAB_082d43c0;
    iVar9 = FUN_082d75b4(unaff_x19[0x20],0);
    bVar7 = iVar8 != iVar9;
    if (bVar7) {
      plVar28 = *(long **)(lVar18 + 0x18);
      if (plVar28 != (long *)0x0) {
        bVar2 = *(byte *)(*(long *)PTR_DAT_08fc1610 + 0x130);
        if (*(byte *)(*plVar28 + 0x130) < bVar2) {
          plVar28 = (long *)0x0;
        }
        else if (*(long *)(*(long *)(*plVar28 + 200) + (ulong)bVar2 * 8 + -8) !=
                 *(long *)PTR_DAT_08fc1610) {
          plVar28 = (long *)0x0;
        }
      }
      unaff_x19[0x20] = (long)plVar28;
    }
    if ((uVar32 >> 4 == 0xfe0) || (uVar32 - 0xe0100 < 0xf0)) {
      if (unaff_x19[0x20] == 0) goto LAB_082d43c0;
      iVar8 = FUN_082e450c(unaff_x19[0x20],uStack0000000000000024,uVar32,0);
      if (iVar8 != 0) {
        if (unaff_x19[0x20] == 0) goto LAB_082d43c0;
        uVar15 = FUN_082e6834(unaff_x19[0x20],iVar8,&stack0x00000130,0);
        if ((uVar15 & 1) != 0) {
          if ((unaff_x19[0x74] == 0) || (lVar24 = *(long *)(unaff_x19[0x74] + 0x38), lVar24 == 0))
          goto LAB_082d43c0;
          if (*(uint *)(lVar24 + 0x18) <= *(uint *)(unaff_x19 + 0x94)) goto LAB_082d4458;
          *(undefined8 *)(lVar24 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x178 + 0x38) =
               in_stack_00000130;
        }
      }
      if (*(uint *)(unaff_x26 + 0x18) <= uVar1) goto LAB_082d4458;
      *(undefined4 *)(lVar14 + (long)(int)uVar1 * 0x10 + 4) = 0x1a;
      uVar34 = uVar1;
    }
    if ((uVar10 & 1) != 0) {
      if (((unaff_x19[0x20] == 0) || (lVar24 = *(long *)(unaff_x19[0x20] + 0x178), lVar24 == 0)) ||
         (lVar24 = *(long *)(lVar24 + 0x38), lVar24 == 0)) goto LAB_082d43c0;
      uVar15 = FUN_070b305c(lVar24,*(undefined4 *)(lVar18 + 0x28),&stack0x00000138,
                            *(undefined8 *)PTR_DAT_08ff6838);
      if ((uVar15 & 1) == 0) goto LAB_082d345c;
      if (in_stack_00000138 == 0) goto LAB_082d3af0;
      iVar8 = 0;
      while (iVar8 < *(int *)(in_stack_00000138 + 0x18)) {
        auVar39 = FUN_057805a8(in_stack_00000138,iVar8,*(undefined8 *)PTR_DAT_08ff6860);
        lVar24 = auVar39._0_8_;
        if (lVar24 == 0) goto LAB_082d43c0;
        uVar15 = *(ulong *)(lVar24 + 0x18);
        iVar9 = (int)uVar15;
        if (1 < iVar9) {
          lVar25 = 0;
          do {
            uVar11 = uVar34 + 1 + (int)lVar25;
            if (*(uint *)(unaff_x26 + 0x18) <= uVar11) goto LAB_082d4458;
            if (unaff_x19[0x20] == 0) goto LAB_082d43c0;
            iVar12 = FUN_082e4430(unaff_x19[0x20],
                                  *(undefined4 *)(lVar14 + (long)(int)uVar11 * 0x10 + 4),0);
            if (*(uint *)(lVar24 + 0x18) <= (int)lVar25 + 1U) goto LAB_082d4458;
            if (iVar12 != *(int *)(lVar24 + 0x24 + lVar25 * 4)) goto LAB_082d338c;
            lVar25 = lVar25 + 1;
          } while (iVar9 + -1 != (int)lVar25);
        }
        if (auVar39._8_4_ != 0) {
          if (unaff_x19[0x20] == 0) goto LAB_082d43c0;
          uVar33 = FUN_082e6834(unaff_x19[0x20],auVar39._8_8_ & 0xffffffff,&stack0x00000128,0);
          if ((uVar33 & 1) != 0) {
            if ((unaff_x19[0x74] == 0) || (lVar24 = *(long *)(unaff_x19[0x74] + 0x38), lVar24 == 0))
            goto LAB_082d43c0;
            if (*(uint *)(lVar24 + 0x18) <= *(uint *)(unaff_x19 + 0x94)) goto LAB_082d4458;
            *(undefined8 *)(lVar24 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x178 + 0x38) =
                 in_stack_00000128;
            if (iVar9 < 1) goto LAB_082d3454;
            uVar33 = 0;
            goto LAB_082d3410;
          }
        }
LAB_082d338c:
        iVar8 = iVar8 + 1;
        if (in_stack_00000138 == 0) goto LAB_082d43c0;
      }
    }
  }
  else {
    bVar7 = false;
  }
  goto LAB_082d345c;
LAB_082d3410:
  do {
    if (uVar33 == 0) {
      if (*(uint *)(unaff_x26 + 0x18) <= uVar34) goto LAB_082d4458;
      *(int *)(lVar14 + (long)(int)uVar34 * 0x10 + 0xc) = iVar9;
    }
    else {
      uVar11 = uVar34 + (int)uVar33;
      if (*(uint *)(unaff_x26 + 0x18) <= uVar11) goto LAB_082d4458;
      *(undefined4 *)(lVar14 + (long)(int)uVar11 * 0x10 + 4) = 0x1a;
    }
    uVar33 = uVar33 + 1;
  } while ((uVar15 & 0xffffffff) != uVar33);
LAB_082d3454:
  uVar34 = (uVar34 + iVar9) - 1;
LAB_082d345c:
  if ((unaff_x19[0x74] == 0) || (lVar24 = *(long *)(unaff_x19[0x74] + 0x38), lVar24 == 0))
  goto LAB_082d43c0;
  uVar11 = *(uint *)(unaff_x19 + 0x94);
  if (*(uint *)(lVar24 + 0x18) <= uVar11) goto LAB_082d4458;
  puVar26 = (undefined4 *)(lVar24 + 0x20 + (long)(int)uVar11 * 0x178);
  *puVar26 = 0;
  *(long *)(puVar26 + 4) = lVar18;
  *(short *)(puVar26 + 1) = (short)uStack0000000000000024;
  *(undefined1 *)(puVar26 + 0xd) = uStack000000000000014c;
  if (*(uint *)(unaff_x26 + 0x18) <= uVar34) goto LAB_082d4458;
  lVar25 = lVar24 + 0x20 + (long)(int)uVar11 * 0x178;
  *(undefined8 *)(lVar25 + 8) = *(undefined8 *)(lVar14 + (long)(int)uVar34 * 0x10 + 8);
  lVar24 = unaff_x19[0x20];
  *(long *)(lVar25 + 0x20) = lVar24;
  puVar4 = PTR_DAT_08fc16b0;
  if (*(char *)(lVar18 + 0x10) == '\x02') {
    plVar28 = *(long **)(lVar18 + 0x18);
    if (plVar28 == (long *)0x0) goto LAB_082d43c0;
    bVar2 = *(byte *)(*(long *)PTR_DAT_08fc1658 + 0x130);
    if ((*(byte *)(*plVar28 + 0x130) < bVar2) ||
       (*(long *)(*(long *)(*plVar28 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)PTR_DAT_08fc1658))
    goto LAB_082d43c0;
    lVar22 = plVar28[0x11];
    lVar21 = *(long *)PTR_DAT_08fc16b0;
    if (*(int *)(lVar21 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      lVar21 = *(long *)puVar4;
    }
    uVar11 = FUN_082c63fc(lVar22,plVar28,*(long *)(lVar21 + 0xb8),
                          *(undefined8 *)(*(long *)(lVar21 + 0xb8) + 8));
    lVar21 = *(long *)puVar4;
    *(uint *)(unaff_x19 + 0x24) = uVar11;
    lVar21 = **(long **)(lVar21 + 0xb8);
    if (lVar21 == 0) goto LAB_082d43c0;
    if (*(uint *)(lVar21 + 0x18) <= uVar11) goto LAB_082d4458;
    lVar21 = lVar21 + (long)(int)uVar11 * 0x38;
    *(int *)(lVar21 + 0x54) = *(int *)(lVar21 + 0x54) + 1;
    if ((unaff_x19[0x74] == 0) || (lVar21 = *(long *)(unaff_x19[0x74] + 0x38), lVar21 == 0))
    goto LAB_082d43c0;
    uVar11 = *(uint *)(unaff_x19 + 0x94);
    if (*(uint *)(lVar21 + 0x18) <= uVar11) goto LAB_082d4458;
    lVar21 = lVar21 + (long)(int)uVar11 * 0x178;
    *(undefined4 *)(lVar21 + 0x20) = 1;
    *(int *)(lVar21 + 0x50) = (int)unaff_x19[0x24];
    *(undefined4 *)((long)unaff_x19 + 0x65c) = 0;
    *(undefined4 *)(unaff_x19 + 0x24) = uVar27;
LAB_082d35bc:
    iStack0000000000000038 = iStack0000000000000038 + 1;
    goto LAB_082d3ad0;
  }
  if (bVar7) {
    if (lVar24 == 0) goto LAB_082d43c0;
    iVar8 = FUN_082d75b4(lVar24,0);
    if (unaff_x19[0x1f] == 0) goto LAB_082d43c0;
    iVar9 = FUN_082d75b4(unaff_x19[0x1f],0);
    if (iVar8 != iVar9) {
      if (*(int *)(*(long *)PTR_DAT_08ff65b8 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      uVar15 = FUN_08322644(0);
      if ((uVar15 & 1) == 0) {
        lVar24 = unaff_x19[0x20];
        if (lVar24 == 0) goto LAB_082d43c0;
        lVar25 = *(long *)(lVar24 + 0x88);
      }
      else {
        if (unaff_x19[0x20] == 0) goto LAB_082d43c0;
        lVar24 = unaff_x19[0x23];
        uVar20 = *(undefined8 *)(unaff_x19[0x20] + 0x88);
        if (*(int *)(*(long *)PTR_DAT_08ff6870 + 0xe4) == 0) {
          thunk_FUN_0408f364();
        }
        lVar25 = UnityEngine_XR_Interaction_Toolkit_XRInteractionManager__ClearInteractorHover
                           (lVar24,uVar20,0);
        lVar24 = unaff_x19[0x20];
      }
      puVar4 = PTR_DAT_08fc16b0;
      unaff_x19[0x23] = lVar25;
      lVar16 = *(long *)puVar4;
      if (*(int *)(lVar16 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        lVar16 = *(long *)puVar4;
      }
      uVar13 = FUN_082c61e4(lVar25,lVar24,*(long *)(lVar16 + 0xb8),
                            *(undefined8 *)(*(long *)(lVar16 + 0xb8) + 8));
      *(undefined4 *)(unaff_x19 + 0x24) = uVar13;
    }
  }
  if ((unaff_x19[0x74] == 0) || (lVar24 = *(long *)(unaff_x19[0x74] + 0x38), lVar24 == 0))
  goto LAB_082d43c0;
  if (*(uint *)(lVar24 + 0x18) <= *(uint *)(unaff_x19 + 0x94)) goto LAB_082d4458;
  lVar24 = *(long *)(lVar24 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x178 + 0x38);
  if ((lVar24 == 0) && (lVar24 = *(long *)(lVar18 + 0x20), lVar24 == 0)) goto LAB_082d43c0;
  iVar8 = FUN_086475ac(lVar24,0);
  if (0 < iVar8) {
    lVar18 = unaff_x19[0x20];
    lVar24 = unaff_x19[0x23];
    if (*(int *)(*(long *)PTR_DAT_08ff6870 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    lVar18 = FUN_0831d274(lVar18,lVar24,iVar8,0);
    puVar4 = PTR_DAT_08fc16b0;
    unaff_x19[0x23] = lVar18;
    lVar25 = unaff_x19[0x20];
    lVar24 = *(long *)puVar4;
    if (*(int *)(lVar24 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      lVar24 = *(long *)puVar4;
    }
    uVar13 = FUN_082c61e4(lVar18,lVar25,*(long *)(lVar24 + 0xb8),
                          *(undefined8 *)(*(long *)(lVar24 + 0xb8) + 8));
    bVar7 = true;
    *(undefined4 *)(unaff_x19 + 0x24) = uVar13;
  }
  if (*(int *)(*(long *)(PTR_DAT_08f65618 + 0x88) + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  uVar15 = FUN_0744db94(uStack0000000000000024,0);
  puVar4 = PTR_DAT_08fc16b0;
  if (((uVar15 & 1) == 0) && (uStack0000000000000024 != 0x200b)) {
    lVar18 = *(long *)PTR_DAT_08fc16b0;
    if (*(int *)(lVar18 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      lVar18 = *(long *)puVar4;
    }
    lVar24 = **(long **)(lVar18 + 0xb8);
    if (lVar24 == 0) goto LAB_082d43c0;
    uVar11 = *(uint *)(unaff_x19 + 0x24);
    if (*(uint *)(lVar24 + 0x18) <= uVar11) goto LAB_082d4458;
    if (*(int *)(lVar24 + (long)(int)uVar11 * 0x38 + 0x54) < 0x3fff) {
      if (*(int *)(lVar18 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        plVar28 = *(long **)(*(long *)PTR_DAT_08fc16b0 + 0xb8);
        goto Unity_VisualScripting_CoroutineRunner__Awake;
      }
LAB_082d3964:
      uVar11 = *(uint *)(unaff_x19 + 0x24);
    }
    else {
      if (bVar7) {
        if (unaff_x19[0xf7] == 0) goto LAB_082d43c0;
        uVar15 = FUN_06ee3b1c(unaff_x19[0xf7],(long)(int)uVar11,&stack0x00000124,
                              *(undefined8 *)PTR_DAT_08fc5190);
        puVar4 = PTR_DAT_08fc16b0;
        if ((uVar15 & 1) == 0) {
LAB_082d3890:
          lVar18 = unaff_x19[0x23];
          uVar20 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08f68540);
          FUN_0854ff98(uVar20,lVar18,0);
          puVar4 = PTR_DAT_08fc16b0;
          lVar24 = unaff_x19[0x20];
          lVar18 = *(long *)PTR_DAT_08fc16b0;
          if (*(int *)(lVar18 + 0xe4) == 0) {
            thunk_FUN_0408f364();
            lVar18 = *(long *)puVar4;
          }
          uVar11 = FUN_082c61e4(uVar20,lVar24,*(long *)(lVar18 + 0xb8),
                                *(undefined8 *)(*(long *)(lVar18 + 0xb8) + 8));
          if (unaff_x19[0xf7] == 0) goto LAB_082d43c0;
          FUN_06ee2204(unaff_x19[0xf7],(int)unaff_x19[0x24],uVar11,*(undefined8 *)PTR_DAT_08f7cfc8);
          lVar18 = *(long *)PTR_DAT_08fc16b0;
        }
        else {
          lVar18 = *(long *)PTR_DAT_08fc16b0;
          if (*(int *)(lVar18 + 0xe4) == 0) {
            thunk_FUN_0408f364();
            lVar18 = *(long *)puVar4;
          }
          lVar24 = **(long **)(lVar18 + 0xb8);
          if (lVar24 == 0) goto LAB_082d43c0;
          if (*(uint *)(lVar24 + 0x18) <= uStack0000000000000124) goto LAB_082d4458;
          uVar11 = uStack0000000000000124;
          if (0x3ffe < *(int *)(lVar24 + (long)(int)uStack0000000000000124 * 0x38 + 0x54))
          goto LAB_082d3890;
        }
        *(uint *)(unaff_x19 + 0x24) = uVar11;
        if (*(int *)(lVar18 + 0xe4) == 0) {
          thunk_FUN_0408f364();
          lVar18 = *(long *)PTR_DAT_08fc16b0;
        }
        plVar28 = *(long **)(lVar18 + 0xb8);
Unity_VisualScripting_CoroutineRunner__Awake:
        lVar24 = *plVar28;
        if (lVar24 == 0) goto LAB_082d43c0;
        goto LAB_082d3964;
      }
      lVar18 = unaff_x19[0x23];
      uVar20 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08f68540);
      FUN_0854ff98(uVar20,lVar18,0);
      puVar4 = PTR_DAT_08fc16b0;
      lVar24 = unaff_x19[0x20];
      lVar18 = *(long *)PTR_DAT_08fc16b0;
      if (*(int *)(lVar18 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        lVar18 = *(long *)puVar4;
      }
      uVar11 = FUN_082c61e4(uVar20,lVar24,*(long *)(lVar18 + 0xb8),
                            *(undefined8 *)(*(long *)(lVar18 + 0xb8) + 8));
      lVar18 = *(long *)puVar4;
      *(uint *)(unaff_x19 + 0x24) = uVar11;
      lVar24 = **(long **)(lVar18 + 0xb8);
      if (lVar24 == 0) goto LAB_082d43c0;
    }
    if (*(uint *)(lVar24 + 0x18) <= uVar11) goto LAB_082d4458;
    lVar24 = lVar24 + (long)(int)uVar11 * 0x38;
    *(int *)(lVar24 + 0x54) = *(int *)(lVar24 + 0x54) + 1;
  }
  if ((unaff_x19[0x74] == 0) || (lVar18 = *(long *)(unaff_x19[0x74] + 0x38), lVar18 == 0))
  goto LAB_082d43c0;
  if (*(uint *)(lVar18 + 0x18) <= *(uint *)(unaff_x19 + 0x94)) goto LAB_082d4458;
  lVar18 = lVar18 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x178;
  *(long *)(lVar18 + 0x48) = unaff_x19[0x23];
  *(int *)(lVar18 + 0x50) = (int)unaff_x19[0x24];
  puVar4 = PTR_DAT_08fc16b0;
  lVar18 = *(long *)PTR_DAT_08fc16b0;
  if (*(int *)(lVar18 + 0xe4) == 0) {
    thunk_FUN_0408f364();
    lVar18 = *(long *)puVar4;
  }
  lVar24 = **(long **)(lVar18 + 0xb8);
  if (lVar24 == 0) goto LAB_082d43c0;
  if (*(uint *)(lVar24 + 0x18) <= *(uint *)(unaff_x19 + 0x24)) goto LAB_082d4458;
  *(bool *)(lVar24 + (long)(int)*(uint *)(unaff_x19 + 0x24) * 0x38 + 0x41) = bVar7;
  if (bVar7) {
    if (*(int *)(lVar18 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      lVar24 = **(long **)(*(long *)PTR_DAT_08fc16b0 + 0xb8);
      if (lVar24 == 0) goto LAB_082d43c0;
    }
    if (*(uint *)(lVar24 + 0x18) <= *(uint *)(unaff_x19 + 0x24)) goto LAB_082d4458;
    *(long *)(lVar24 + (long)(int)*(uint *)(unaff_x19 + 0x24) * 0x38 + 0x48) = lVar21;
    unaff_x19[0x23] = lVar21;
    unaff_x19[0x20] = lVar22;
    *(undefined4 *)(unaff_x19 + 0x24) = uVar27;
  }
  uVar11 = *(uint *)(unaff_x19 + 0x94);
LAB_082d3ad0:
  *(uint *)(unaff_x19 + 0x94) = uVar11 + 1;
LAB_082d3ad8:
  uVar11 = *(uint *)(unaff_x26 + 0x18);
  uVar34 = uVar34 + 1;
  if ((int)uVar11 <= (int)uVar34) goto LAB_082d3af0;
  goto LAB_082d266c;
}


