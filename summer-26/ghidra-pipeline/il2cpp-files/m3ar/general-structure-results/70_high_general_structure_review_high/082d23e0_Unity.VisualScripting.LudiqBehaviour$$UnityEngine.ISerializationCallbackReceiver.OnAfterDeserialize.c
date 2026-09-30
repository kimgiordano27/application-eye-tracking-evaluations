/*
FUNCTION_NAME: Unity.VisualScripting.LudiqBehaviour$$UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize
ENTRY_POINT: 082d23e0
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
Unity_VisualScripting_LudiqBehaviour__UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize
          (undefined1 param_1 [16],ulong param_2,long param_3,undefined8 param_4)

{
  uint uVar1;
  byte bVar2;
  float fVar3;
  undefined *puVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  undefined4 uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  undefined8 *puVar19;
  long lVar20;
  long lVar21;
  undefined4 *puVar22;
  long *unaff_x19;
  undefined4 uVar23;
  long *plVar24;
  long lVar25;
  long *plVar26;
  long *plVar27;
  long *unaff_x23;
  uint *puVar28;
  uint uVar29;
  ulong uVar30;
  long unaff_x26;
  uint uVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined1 auVar36 [16];
  uint uStack0000000000000024;
  int iStack0000000000000038;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
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
  undefined4 in_stack_000000e0;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  long in_stack_00000138;
  uint uStack0000000000000148;
  undefined1 uStack000000000000014c;
  
  FUN_0832b05c(param_3,param_4,0);
  unaff_x19[0x74] = param_3;
                    /* try { // try from 082d23f0 to 083d2407 has its CatchHandler @ 082d29fc */
  *(undefined4 *)((long)unaff_x19 + 0x65c) = 0;
  if ((int)unaff_x19[0x62] == 1) {
    FUN_0830cda8();
    puVar4 = PTR_DAT_08ff65b8;
                    /* try { // try from 082d2414 to 083d241b has its CatchHandler @ 082d2a9c */
    if (unaff_x19[0xcd] == 0) {
                    /* try { // try from 082d24b4 to 083d24b7 has its CatchHandler @ 082d2aa0 */
      *(undefined4 *)(unaff_x19 + 0x62) = 3;
                    /* try { // try from 082d24c4 to 083d24d3 has its CatchHandler @ 082d2968 */
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      uVar12 = FUN_0832212c(0);
      if ((uVar12 & 1) == 0) {
                    /* try { // try from 082d24e4 to 083d24e7 has its CatchHandler @ 082d2888 */
        if (unaff_x19[0x20] == 0) goto LAB_082d43c0;
        uVar15 = thunk_FUN_0858dfc0(unaff_x19[0x20],0);
                    /* try { // try from 082d24f8 to 083d250b has its CatchHandler @ 082d2924 */
        uVar15 = FUN_0736972c(*(undefined8 *)PTR_DAT_08ff68a0,uVar15,*(undefined8 *)PTR_DAT_08ff68a8
                              ,0);
                    /* try { // try from 082d2518 to 083d251f has its CatchHandler @ 082d29e0 */
        if (*(int *)(*(long *)PTR_DAT_08f655a0 + 0xe4) == 0) {
          thunk_FUN_0408f364(*(long *)PTR_DAT_08f655a0);
        }
                    /* try { // try from 082d253c to 083d253f has its CatchHandler @ 082d2aa0 */
        FUN_085392e4(uVar15);
      }
    }
    else {
      if (unaff_x19[0xce] == 0) goto LAB_082d43c0;
      iVar6 = FUN_0858dd10(unaff_x19[0xce],0);
      if (unaff_x19[0x20] == 0) goto LAB_082d43c0;
      iVar7 = FUN_0858dd10(unaff_x19[0x20],0);
                    /* try { // try from 082d2440 to 083d2453 has its CatchHandler @ 082d29e8 */
      if (iVar6 != iVar7) {
                    /* try { // try from 082d2454 to 083d245f has its CatchHandler @ 082d2994 */
        if (*(int *)(*(long *)PTR_DAT_08ff65b8 + 0xe4) == 0) {
          thunk_FUN_0408f364();
        }
                    /* try { // try from 082d2464 to 083d247f has its CatchHandler @ 082d29e4 */
        uVar12 = FUN_08322644(0);
        if ((uVar12 & 1) == 0) {
LAB_082d24a0:
          lVar13 = unaff_x19[0xce];
          if (lVar13 == 0) goto LAB_082d43c0;
          lVar25 = *(long *)(lVar13 + 0x88);
          unaff_x19[0xcf] = lVar25;
        }
        else {
          if (unaff_x19[0x23] == 0) goto LAB_082d43c0;
          iVar6 = FUN_0858dd10(unaff_x19[0x23],0);
                    /* try { // try from 082d248c to 083d2497 has its CatchHandler @ 082d2990 */
          if ((unaff_x19[0xce] == 0) || (lVar13 = *(long *)(unaff_x19[0xce] + 0x88), lVar13 == 0))
          goto LAB_082d43c0;
          iVar7 = FUN_0858dd10(lVar13,0);
          if (iVar6 == iVar7) goto LAB_082d24a0;
                    /* try { // try from 082d254c to 083d2557 has its CatchHandler @ 082d2988 */
          if (unaff_x19[0xce] == 0) goto LAB_082d43c0;
          lVar13 = unaff_x19[0x23];
          uVar15 = *(undefined8 *)(unaff_x19[0xce] + 0x88);
          if (*(int *)(*(long *)PTR_DAT_08ff6870 + 0xe4) == 0) {
            thunk_FUN_0408f364();
          }
                    /* try { // try from 082d2574 to 083d2577 has its CatchHandler @ 082d2aa0 */
          lVar25 = UnityEngine_XR_Interaction_Toolkit_XRInteractionManager__ClearInteractorHover
                             (lVar13,uVar15,0);
                    /* try { // try from 082d2584 to 083d2593 has its CatchHandler @ 082d291c */
          lVar13 = unaff_x19[0xce];
          unaff_x19[0xcf] = lVar25;
        }
        lVar14 = *unaff_x23;
        if (*(int *)(lVar14 + 0xe4) == 0) {
          thunk_FUN_0408f364();
          lVar14 = *unaff_x23;
        }
                    /* try { // try from 082d25a4 to 083d25a7 has its CatchHandler @ 082d2884 */
        uVar8 = FUN_082c61e4(lVar25,lVar13,*(long *)(lVar14 + 0xb8),
                             *(undefined8 *)(*(long *)(lVar14 + 0xb8) + 8));
                    /* try { // try from 082d25b8 to 083d25cb has its CatchHandler @ 082d28d8 */
        lVar13 = *unaff_x23;
        *(uint *)(unaff_x19 + 0xd0) = uVar8;
        lVar13 = **(long **)(lVar13 + 0xb8);
        if (lVar13 == 0) goto LAB_082d43c0;
        if (*(uint *)(lVar13 + 0x18) <= uVar8) {
LAB_082d4458:
                    /* WARNING: Subroutine does not return */
          FUN_04031894();
        }
                    /* try { // try from 082d25d8 to 083d25df has its CatchHandler @ 082d298c */
        *(undefined4 *)(lVar13 + (long)(int)uVar8 * 0x38 + 0x54) = 0;
      }
    }
  }
  if (unaff_x19[0x66] == 0) {
LAB_082d43c0:
                    /* WARNING: Subroutine does not return */
    FUN_0403188c();
  }
                    /* try { // try from 082d25f8 to 083d25ff has its CatchHandler @ 082d297c */
  uVar8 = FUN_05861a34(unaff_x19[0x66],0x6c696761,*(undefined8 *)PTR_DAT_08ff6590);
                    /* try { // try from 082d2604 to 083d260f has its CatchHandler @ 082d2978 */
  if ((int)unaff_x19[0x62] == 6) {
    lVar13 = unaff_x19[99];
    if (*(int *)(*(long *)PTR_DAT_08f65598 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    uVar12 = FUN_0858816c(lVar13,0,0);
    puVar4 = PTR_DAT_08f65618;
    if (((uVar12 & 1) != 0) && (plVar26 = unaff_x19, *(char *)((long)unaff_x19 + 0x42d) == '\0')) {
      while( true ) {
        plVar26 = (long *)plVar26[99];
        if (*(int *)(*(long *)PTR_DAT_08f65598 + 0xe4) == 0) {
          thunk_FUN_0408f364();
        }
        uVar12 = FUN_0858816c(plVar26,0,0);
        if ((uVar12 & 1) == 0) goto LAB_082d264c;
        if (plVar26 == (long *)0x0) break;
        (**(code **)(*plVar26 + 0x558))
                  (plVar26,**(undefined8 **)(*(long *)(puVar4 + 0x90) + 0xb8),
                   *(undefined8 *)(*plVar26 + 0x560));
        (**(code **)(*plVar26 + 0x948))(plVar26,*(undefined8 *)(*plVar26 + 0x950));
        lVar13 = FUN_082fb63c(plVar26,0);
        if (lVar13 == 0) break;
        FUN_0832b31c(lVar13,0);
      }
      goto LAB_082d43c0;
    }
  }
LAB_082d264c:
  if (unaff_x26 == 0) goto LAB_082d43c0;
  uVar9 = *(uint *)(unaff_x26 + 0x18);
  if ((int)uVar9 < 1) {
    iStack0000000000000038 = 0;
LAB_082d3af0:
    plVar26 = (long *)PTR_DAT_08fc16b0;
    if (*(char *)((long)unaff_x19 + 0x42d) != '\0') {
      *(undefined1 *)((long)unaff_x19 + 0x42d) = 0;
LAB_082d3afc:
      return (int)unaff_x19[0x94];
    }
    lVar13 = unaff_x19[0x74];
    if (lVar13 != 0) {
      lVar25 = *(long *)PTR_DAT_08fc16b0;
      *(int *)(lVar13 + 0x1c) = iStack0000000000000038;
      if (*(int *)(lVar25 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        lVar25 = *plVar26;
      }
      lVar25 = *(long *)(*(long *)(lVar25 + 0xb8) + 8);
      if (lVar25 != 0) {
        uVar8 = FUN_06ee1f14(lVar25,*(undefined8 *)PTR_DAT_08f76d38);
        *(uint *)(lVar13 + 0x34) = uVar8;
        if (unaff_x19[0x74] != 0) {
          plVar24 = (long *)(unaff_x19[0x74] + 0x60);
          lVar13 = *plVar24;
          if (lVar13 != 0) {
            uVar12 = (ulong)uVar8;
            if (*(int *)(lVar13 + 0x18) < (int)uVar8) {
              if (*(int *)(*(long *)PTR_DAT_08ff65d8 + 0xe4) == 0) {
                thunk_FUN_0408f364();
              }
              Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<quaternion>
                        (plVar24,uVar12,0,*(undefined8 *)PTR_DAT_08ff6880);
            }
            if (unaff_x19[0xe4] != 0) {
              plVar24 = unaff_x19 + 0xe4;
              if (*(int *)(unaff_x19[0xe4] + 0x18) < (int)uVar8) {
                uVar9 = uVar8 | (int)uVar8 >> 0x10;
                uVar9 = uVar9 | (int)uVar9 >> 8;
                uVar9 = uVar9 | (int)uVar9 >> 4;
                uVar9 = uVar9 | (int)uVar9 >> 2;
                if (*(int *)(*(long *)PTR_DAT_08ff65d8 + 0xe4) == 0) {
                  thunk_FUN_0408f364();
                }
                FUN_04d0f434(plVar24,(uVar9 | (int)uVar9 >> 1) + 1,*(undefined8 *)PTR_DAT_08ff69b8);
              }
              if (*(char *)((long)unaff_x19 + 0x359) != '\0') {
                if (unaff_x19[0x74] == 0) goto LAB_082d43c0;
                plVar27 = (long *)(unaff_x19[0x74] + 0x38);
                lVar13 = *plVar27;
                if (lVar13 == 0) goto LAB_082d43c0;
                iVar6 = (int)unaff_x19[0x94];
                if (0x100 < *(int *)(lVar13 + 0x18) - iVar6) {
                  iVar7 = 0x100;
                  if (0x100 < iVar6 + 1) {
                    iVar7 = iVar6 + 1;
                  }
                  if (*(int *)(*(long *)PTR_DAT_08ff65d8 + 0xe4) == 0) {
                    thunk_FUN_0408f364();
                  }
                  FUN_04d0f664(plVar27,iVar7,1,*(undefined8 *)PTR_DAT_08ff6878);
                }
              }
              puVar4 = PTR_DAT_08ff65a8;
              fVar3 = DAT_01a2e7f0;
              if (0 < (int)uVar8) {
                lVar13 = 0;
                uVar30 = 0;
                lVar25 = 0x54;
                do {
                  fVar35 = (float)param_2;
                  if (uVar30 == 0) {
                    lVar14 = *plVar26;
                  }
                  else {
                    lVar14 = *plVar24;
                    if (lVar14 == 0) goto LAB_082d43c0;
                    if (*(uint *)(lVar14 + 0x18) <= uVar30) goto LAB_082d4458;
                    uVar15 = *(undefined8 *)(lVar14 + uVar30 * 8 + 0x20);
                    if (*(int *)(*(long *)PTR_DAT_08f65598 + 0xe4) == 0) {
                      thunk_FUN_0408f364();
                    }
                    uVar17 = FUN_08589e5c(uVar15,0,0);
                    if ((uVar17 & 1) != 0) {
                      lVar14 = *plVar26;
                      plVar27 = (long *)*plVar24;
                      if (*(int *)(lVar14 + 0xe4) == 0) {
                        thunk_FUN_0408f364();
                        lVar14 = *plVar26;
                      }
                      lVar14 = **(long **)(lVar14 + 0xb8);
                      if (lVar14 == 0) goto LAB_082d43c0;
                      if (*(uint *)(lVar14 + 0x18) <= uVar30) goto LAB_082d4458;
                      lVar14 = lVar14 + lVar25;
                      in_stack_000000d0 = *(undefined8 *)(lVar14 + -4);
                      in_stack_000000c8 = *(undefined8 *)(lVar14 + -0xc);
                      in_stack_000000c0 = *(undefined8 *)(lVar14 + -0x14);
                      in_stack_000000a8 = *(undefined8 *)(lVar14 + -0x2c);
                      uVar15 = *(undefined8 *)(lVar14 + -0x34);
                      in_stack_000000b8 = *(undefined8 *)(lVar14 + -0x1c);
                      in_stack_000000b0 = *(undefined8 *)(lVar14 + -0x24);
                      in_stack_000000a0 = uVar15;
                      lVar14 = FUN_08329e2c();
                      fVar35 = (float)uVar15;
                      if (plVar27 == (long *)0x0) goto LAB_082d43c0;
                      if ((lVar14 != 0) &&
                         (lVar18 = thunk_FUN_0406ddbc(lVar14,*(undefined8 *)(*plVar27 + 0x40)),
                         lVar18 == 0)) {
LAB_082d445c:
                        uVar15 = thunk_FUN_0407b7a8();
                    /* WARNING: Subroutine does not return */
                        FUN_04031750(uVar15,0);
                      }
                      if (*(uint *)(plVar27 + 3) <= uVar30) goto LAB_082d4458;
                      plVar27[uVar30 + 4] = lVar14;
                      if ((unaff_x19[0x74] == 0) ||
                         (lVar14 = *(long *)(unaff_x19[0x74] + 0x60), lVar14 == 0))
                      goto LAB_082d43c0;
                      if (*(uint *)(lVar14 + 0x18) <= uVar30) goto LAB_082d4458;
                      *(undefined8 *)(lVar14 + lVar13 + 0x30) = 0;
                    }
                    if (unaff_x19[0x77] == 0) goto LAB_082d43c0;
                    fVar32 = (float)FUN_08597b2c(unaff_x19[0x77],0);
                    lVar14 = *plVar24;
                    if (lVar14 == 0) goto LAB_082d43c0;
                    if (*(uint *)(lVar14 + 0x18) <= uVar30) goto LAB_082d4458;
                    lVar14 = *(long *)(lVar14 + uVar30 * 8 + 0x20);
                    if ((lVar14 == 0) ||
                       (fVar34 = fVar35,
                       lVar14 = UnityEngine_UIElements_StyleSheets_StylePropertyReader__ReadFloat
                                          (lVar14,0), lVar14 == 0)) goto LAB_082d43c0;
                    fVar33 = (float)FUN_08597b2c(lVar14,0);
                    fVar35 = (fVar35 - fVar34) * (fVar35 - fVar34);
                    param_2 = (ulong)(uint)fVar35;
                    if (fVar3 <= (fVar32 - fVar33) * (fVar32 - fVar33) + fVar35) {
                      lVar14 = *plVar24;
                      if (lVar14 == 0) goto LAB_082d43c0;
                      if (*(uint *)(lVar14 + 0x18) <= uVar30) goto LAB_082d4458;
                      lVar14 = *(long *)(lVar14 + uVar30 * 8 + 0x20);
                      if (lVar14 == 0) goto LAB_082d43c0;
                      lVar14 = UnityEngine_UIElements_StyleSheets_StylePropertyReader__ReadFloat
                                         (lVar14,0);
                      if ((unaff_x19[0x77] == 0) || (FUN_08597b2c(unaff_x19[0x77],0), lVar14 == 0))
                      goto LAB_082d43c0;
                      FUN_08597bf4(lVar14,0);
                    }
                    lVar14 = *plVar24;
                    if (lVar14 == 0) goto LAB_082d43c0;
                    if (*(uint *)(lVar14 + 0x18) <= uVar30) goto LAB_082d4458;
                    lVar14 = *(long *)(lVar14 + uVar30 * 8 + 0x20);
                    if (lVar14 == 0) goto LAB_082d43c0;
                    uVar15 = *(undefined8 *)(lVar14 + 0xf0);
                    if (*(int *)(*(long *)PTR_DAT_08f65598 + 0xe4) == 0) {
                      thunk_FUN_0408f364();
                    }
                    uVar17 = FUN_08589e5c(uVar15,0,0);
                    if ((uVar17 & 1) == 0) {
                      lVar14 = *plVar24;
                      if (lVar14 == 0) goto LAB_082d43c0;
                      if (*(uint *)(lVar14 + 0x18) <= uVar30) goto LAB_082d4458;
                      lVar14 = *(long *)(lVar14 + uVar30 * 8 + 0x20);
                      if ((lVar14 == 0) || (lVar14 = *(long *)(lVar14 + 0xf0), lVar14 == 0))
                      goto LAB_082d43c0;
                      iVar6 = FUN_0858dd10(lVar14,0);
                      lVar14 = *plVar26;
                      if (*(int *)(lVar14 + 0xe4) == 0) {
                        thunk_FUN_0408f364(lVar14);
                        lVar14 = *plVar26;
                      }
                      lVar14 = **(long **)(lVar14 + 0xb8);
                      if (lVar14 == 0) goto LAB_082d43c0;
                      if (*(uint *)(lVar14 + 0x18) <= uVar30) goto LAB_082d4458;
                      lVar14 = *(long *)(lVar14 + lVar25 + -0x1c);
                      if (lVar14 == 0) goto LAB_082d43c0;
                      iVar7 = FUN_0858dd10(lVar14,0);
                      if (iVar6 != iVar7) goto LAB_082d3f50;
                      lVar14 = *plVar26;
                    }
                    else {
LAB_082d3f50:
                      lVar14 = *plVar24;
                      if (lVar14 == 0) goto LAB_082d43c0;
                      if (*(uint *)(lVar14 + 0x18) <= uVar30) goto LAB_082d4458;
                      lVar18 = *plVar26;
                      lVar14 = *(long *)(lVar14 + uVar30 * 8 + 0x20);
                      if (*(int *)(lVar18 + 0xe4) == 0) {
                        thunk_FUN_0408f364();
                        lVar18 = *plVar26;
                      }
                      lVar18 = **(long **)(lVar18 + 0xb8);
                      if (lVar18 == 0) goto LAB_082d43c0;
                      if (*(uint *)(lVar18 + 0x18) <= uVar30) goto LAB_082d4458;
                      if (lVar14 == 0) goto LAB_082d43c0;
                      FUN_08329aa4(lVar14,*(undefined8 *)(lVar18 + lVar25 + -0x1c),0);
                      lVar18 = *plVar24;
                      if (lVar18 == 0) goto LAB_082d43c0;
                      if (*(uint *)(lVar18 + 0x18) <= uVar30) goto LAB_082d4458;
                      lVar14 = *plVar26;
                      lVar20 = **(long **)(lVar14 + 0xb8);
                      if (lVar20 == 0) goto LAB_082d43c0;
                      if (*(uint *)(lVar20 + 0x18) <= uVar30) goto LAB_082d4458;
                      lVar18 = lVar18 + uVar30 * 8;
                      lVar21 = *(long *)(lVar18 + 0x20);
                      if (lVar21 == 0) goto LAB_082d43c0;
                      *(undefined8 *)(lVar21 + 0xd8) = *(undefined8 *)(lVar20 + lVar25 + -0x2c);
                      lVar18 = *(long *)(lVar18 + 0x20);
                      if (lVar18 == 0) goto LAB_082d43c0;
                      *(undefined8 *)(lVar18 + 0xe0) = *(undefined8 *)(lVar20 + lVar25 + -0x24);
                    }
                    if (*(int *)(lVar14 + 0xe4) == 0) {
                      thunk_FUN_0408f364();
                      lVar14 = *plVar26;
                    }
                    lVar18 = **(long **)(lVar14 + 0xb8);
                    if (lVar18 == 0) goto LAB_082d43c0;
                    if (*(uint *)(lVar18 + 0x18) <= uVar30) goto LAB_082d4458;
                    if (*(char *)(lVar18 + lVar25 + -0x13) != '\0') {
                      lVar20 = *plVar24;
                      if (lVar20 == 0) goto LAB_082d43c0;
                      if (*(uint *)(lVar20 + 0x18) <= uVar30) goto LAB_082d4458;
                      lVar20 = *(long *)(lVar20 + uVar30 * 8 + 0x20);
                      if (*(int *)(lVar14 + 0xe4) == 0) {
                        thunk_FUN_0408f364();
                        lVar18 = **(long **)(*plVar26 + 0xb8);
                        if (lVar18 == 0) goto LAB_082d43c0;
                      }
                      if (*(uint *)(lVar18 + 0x18) <= uVar30) goto LAB_082d4458;
                      if (lVar20 == 0) goto LAB_082d43c0;
                      FUN_08329b0c(lVar20,*(undefined8 *)(lVar18 + lVar25 + -0x1c),0);
                      lVar18 = *plVar24;
                      if (lVar18 == 0) goto LAB_082d43c0;
                      if (*(uint *)(lVar18 + 0x18) <= uVar30) goto LAB_082d4458;
                      lVar14 = *plVar26;
                      lVar20 = **(long **)(lVar14 + 0xb8);
                      if (lVar20 == 0) goto LAB_082d43c0;
                      if (*(uint *)(lVar20 + 0x18) <= uVar30) goto LAB_082d4458;
                      lVar18 = *(long *)(lVar18 + uVar30 * 8 + 0x20);
                      if (lVar18 == 0) goto LAB_082d43c0;
                      *(undefined8 *)(lVar18 + 0x100) = *(undefined8 *)(lVar20 + lVar25 + -0xc);
                    }
                  }
                  if (*(int *)(lVar14 + 0xe4) == 0) {
                    thunk_FUN_0408f364();
                    lVar14 = *plVar26;
                  }
                  plVar26 = (long *)PTR_DAT_08fc16b0;
                  lVar14 = **(long **)(lVar14 + 0xb8);
                  if (lVar14 == 0) goto LAB_082d43c0;
                  if (*(uint *)(lVar14 + 0x18) <= uVar30) goto LAB_082d4458;
                  if ((unaff_x19[0x74] == 0) ||
                     (lVar18 = *(long *)(unaff_x19[0x74] + 0x60), lVar18 == 0)) goto LAB_082d43c0;
                  if (*(uint *)(lVar18 + 0x18) <= uVar30) goto LAB_082d4458;
                  uVar9 = *(uint *)(lVar14 + lVar25);
                  lVar14 = *(long *)(lVar18 + lVar13 + 0x30);
                  if (lVar14 == 0) {
                    if (uVar30 == 0) {
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
                      FUN_0831e2c8(&stack0x00000050,unaff_x19[0x7b],uVar9 + 1,0);
                      if (*(int *)(lVar18 + 0x18) == 0) goto LAB_082d4458;
                    }
                    else {
                      lVar14 = *plVar24;
                      if (lVar14 == 0) goto LAB_082d43c0;
                      if (*(uint *)(lVar14 + 0x18) <= uVar30) goto LAB_082d4458;
                      lVar14 = *(long *)(lVar14 + uVar30 * 8 + 0x20);
                      if (lVar14 == 0) goto LAB_082d43c0;
                      uVar15 = FUN_08329ce0(lVar14,0);
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
                      FUN_0831e2c8(&stack0x00000050,uVar15,uVar9 + 1,0);
                      if (*(uint *)(lVar18 + 0x18) <= uVar30) goto LAB_082d4458;
                      lVar18 = lVar18 + lVar13;
                    }
                    memmove((void *)(lVar18 + 0x20),&stack0x00000050,0x50);
                    plVar26 = (long *)PTR_DAT_08fc16b0;
                  }
                  else {
                    iVar6 = *(int *)(lVar14 + 0x18);
                    if (iVar6 < (int)(uVar9 * 4)) {
                      if ((int)uVar9 < 0x401) {
                        uVar9 = uVar9 | (int)uVar9 >> 0x10;
                        uVar9 = uVar9 | (int)uVar9 >> 8;
                        uVar9 = uVar9 | (int)uVar9 >> 4;
                        uVar9 = uVar9 | (int)uVar9 >> 2;
                        uVar9 = uVar9 | (int)uVar9 >> 1;
LAB_082d4230:
                        iVar6 = uVar9 + 1;
                      }
                      else {
LAB_082d4158:
                        iVar6 = uVar9 + 0x100;
                      }
                      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                        thunk_FUN_0408f364();
                      }
                      FUN_0831ef9c(lVar18 + lVar13 + 0x20,iVar6,0);
                    }
                    else if ((*(char *)((long)unaff_x19 + 0x359) != '\0') && (0 < (int)uVar9)) {
                      iVar7 = iVar6 + 3;
                      if (-1 < iVar6) {
                        iVar7 = iVar6;
                      }
                      if (0x100 < (int)((iVar7 >> 2) - uVar9)) {
                        if (uVar9 < 0x401) {
                          uVar9 = uVar9 >> 4 | uVar9 >> 8 | uVar9;
                          uVar9 = uVar9 | uVar9 >> 2;
                          uVar9 = uVar9 | uVar9 >> 1;
                          goto LAB_082d4230;
                        }
                        goto LAB_082d4158;
                      }
                    }
                  }
                  if ((unaff_x19[0x74] == 0) ||
                     (lVar14 = *(long *)(unaff_x19[0x74] + 0x60), lVar14 == 0)) goto LAB_082d43c0;
                  lVar18 = *plVar26;
                  if (*(int *)(lVar18 + 0xe4) == 0) {
                    thunk_FUN_0408f364();
                    lVar18 = *plVar26;
                  }
                  lVar18 = **(long **)(lVar18 + 0xb8);
                  if (lVar18 == 0) goto LAB_082d43c0;
                  if ((*(uint *)(lVar18 + 0x18) <= uVar30) || (*(uint *)(lVar14 + 0x18) <= uVar30))
                  goto LAB_082d4458;
                  lVar18 = lVar18 + lVar25;
                  uVar30 = uVar30 + 1;
                  lVar14 = lVar14 + lVar13;
                  lVar13 = lVar13 + 0x50;
                  lVar25 = lVar25 + 0x38;
                  *(undefined8 *)(lVar14 + 0x68) = *(undefined8 *)(lVar18 + -0x1c);
                } while (uVar12 != uVar30);
              }
              lVar13 = *plVar24;
              if (lVar13 != 0) {
                lVar25 = (long)(int)uVar8 + 4;
                do {
                  uVar8 = (uint)*(undefined8 *)(lVar13 + 0x18);
                  if ((long)(int)uVar8 <= lVar25 + -4) goto LAB_082d3afc;
                  uVar9 = (uint)uVar12;
                  if (uVar8 <= uVar9) goto LAB_082d4458;
                  uVar15 = *(undefined8 *)(lVar13 + lVar25 * 8);
                  if (*(int *)(*(long *)PTR_DAT_08f65598 + 0xe4) == 0) {
                    thunk_FUN_0408f364();
                  }
                  uVar12 = FUN_0858816c(uVar15,0,0);
                  if ((uVar12 & 1) == 0) goto LAB_082d3afc;
                  if ((unaff_x19[0x74] == 0) ||
                     (lVar13 = *(long *)(unaff_x19[0x74] + 0x60), lVar13 == 0)) break;
                  if (lVar25 + -4 < (long)*(int *)(lVar13 + 0x18)) {
                    lVar13 = *plVar24;
                    if (lVar13 == 0) break;
                    if (*(uint *)(lVar13 + 0x18) <= uVar9) goto LAB_082d4458;
                    lVar13 = *(long *)(lVar13 + lVar25 * 8);
                    if ((lVar13 == 0) || (lVar13 = FUN_0869bc74(lVar13,0), lVar13 == 0)) break;
                    FUN_08868968(lVar13,0,0);
                  }
                  lVar13 = *plVar24;
                  lVar25 = lVar25 + 1;
                  uVar12 = (ulong)(uVar9 + 1);
                } while (lVar13 != 0);
              }
            }
          }
        }
      }
    }
    goto LAB_082d43c0;
  }
  uVar31 = 0;
  lVar13 = unaff_x26 + 0x20;
  iStack0000000000000038 = 0;
LAB_082d266c:
  if (uVar9 <= uVar31) goto LAB_082d4458;
  puVar28 = (uint *)(lVar13 + (long)(int)uVar31 * 0x10 + 4);
  if (*puVar28 == 0) goto LAB_082d3af0;
  if (unaff_x19[0x74] == 0) goto LAB_082d43c0;
  plVar26 = (long *)(unaff_x19[0x74] + 0x38);
  lVar14 = *plVar26;
  lVar25 = unaff_x19[0x94];
  if ((lVar14 == 0) || (*(int *)(lVar14 + 0x18) <= (int)lVar25)) {
    if (*(int *)(*(long *)PTR_DAT_08ff65d8 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    FUN_04d0f664(plVar26,(int)lVar25 + 1,1,*(undefined8 *)PTR_DAT_08ff6878);
    uVar9 = *(uint *)(unaff_x26 + 0x18);
  }
  if (uVar9 <= uVar31) goto LAB_082d4458;
  uVar9 = *puVar28;
  uVar23 = (undefined4)unaff_x19[0x24];
  if ((*(char *)((long)unaff_x19 + 0x33a) != '\0') && (uVar9 == 0x3c)) {
    uVar12 = FUN_083025c8();
    uVar1 = uStack0000000000000148;
    if ((uVar12 & 1) == 0) {
      uVar23 = (undefined4)unaff_x19[0x24];
      goto LAB_082d28b0;
    }
    if (*(uint *)(unaff_x26 + 0x18) <= uVar31) goto LAB_082d4458;
    iVar6 = *(int *)(lVar13 + (long)(int)uVar31 * 0x10 + 8);
    if ((*(byte *)((long)unaff_x19 + 0x284) & 1) != 0) {
      *(undefined1 *)((long)unaff_x19 + 0x292) = 1;
    }
    puVar4 = PTR_DAT_08fc16b0;
    uVar31 = uStack0000000000000148;
    if (*(int *)((long)unaff_x19 + 0x65c) != 1) goto LAB_082d3ad8;
    lVar25 = *(long *)PTR_DAT_08fc16b0;
    if (*(int *)(lVar25 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      lVar25 = *(long *)puVar4;
    }
    lVar25 = **(long **)(lVar25 + 0xb8);
    if (lVar25 != 0) {
      if (*(uint *)(unaff_x19 + 0x24) < *(uint *)(lVar25 + 0x18)) {
        lVar25 = lVar25 + (long)(int)*(uint *)(unaff_x19 + 0x24) * 0x38;
        *(int *)(lVar25 + 0x54) = *(int *)(lVar25 + 0x54) + 1;
        if ((unaff_x19[0x74] != 0) && (lVar25 = *(long *)(unaff_x19[0x74] + 0x38), lVar25 != 0)) {
          uVar9 = *(uint *)(unaff_x19 + 0x94);
          if (uVar9 < *(uint *)(lVar25 + 0x18)) {
            lVar14 = lVar25 + 0x20 + (long)(int)uVar9 * 0x178;
            *(short *)(lVar14 + 4) = *(short *)((long)unaff_x19 + 0x6bc) + -0x2000;
            *(long *)(lVar14 + 0x20) = unaff_x19[0x20];
            *(int *)(lVar14 + 0x30) = (int)unaff_x19[0x24];
            if ((unaff_x19[0xd6] != 0) && (lVar14 = FUN_08325f94(unaff_x19[0xd6],0), lVar14 != 0)) {
              uVar15 = FUN_057d50ec(lVar14,*(undefined4 *)((long)unaff_x19 + 0x6bc),
                                    *(undefined8 *)PTR_DAT_08ff6858);
              if (uVar9 < *(uint *)(lVar25 + 0x18)) {
                *(undefined8 *)(lVar25 + 0x20 + (long)(int)uVar9 * 0x178 + 0x10) = uVar15;
                if ((unaff_x19[0x74] != 0) &&
                   (lVar25 = *(long *)(unaff_x19[0x74] + 0x38), lVar25 != 0)) {
                  uVar9 = *(uint *)(unaff_x19 + 0x94);
                  if (uVar9 < *(uint *)(lVar25 + 0x18)) {
                    puVar22 = (undefined4 *)(lVar25 + 0x20 + (long)(int)uVar9 * 0x178);
                    *puVar22 = *(undefined4 *)((long)unaff_x19 + 0x65c);
                    puVar22[2] = iVar6;
                    if (uVar1 < *(uint *)(unaff_x26 + 0x18)) {
                      *(int *)(lVar25 + 0x20 + (long)(int)uVar9 * 0x178 + 0xc) =
                           (*(int *)(lVar13 + (long)(int)uVar1 * 0x10 + 8) - iVar6) + 1;
                      *(undefined4 *)((long)unaff_x19 + 0x65c) = 0;
                      *(undefined4 *)(unaff_x19 + 0x24) = uVar23;
                      uVar31 = uVar1;
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
  lVar14 = unaff_x19[0x20];
  lVar25 = unaff_x19[0x23];
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
      uVar12 = FUN_0745015c(uVar9,0);
      if ((uVar12 & 1) != 0) {
        if (*(int *)(*(long *)(PTR_DAT_08f65618 + 0x88) + 0xe4) == 0) {
          thunk_FUN_0408f364();
        }
        uVar9 = FUN_074505fc(uVar9,0);
        goto LAB_082d2974;
      }
    }
  }
  else {
LAB_082d28d8:
    if (*(int *)(*(long *)(PTR_DAT_08f65618 + 0x88) + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    uVar12 = System_Threading_Monitor__TryEnter(uVar9,0);
    if ((uVar12 & 1) != 0) {
      if (*(int *)(*(long *)(PTR_DAT_08f65618 + 0x88) + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      uVar9 = FUN_07450484(uVar9,0);
LAB_082d2974:
      uVar9 = uVar9 & 0xffff;
    }
  }
LAB_082d2978:
  uVar1 = uVar31 + 1;
  if ((int)uVar1 < (int)*(uint *)(unaff_x26 + 0x18)) {
    if (*(uint *)(unaff_x26 + 0x18) <= uVar1) goto LAB_082d4458;
    uVar29 = *(uint *)(lVar13 + (long)(int)uVar1 * 0x10 + 4);
  }
  else {
    uVar29 = 0;
  }
  uStack0000000000000024 = uVar9;
  if (*(char *)((long)unaff_x19 + 0x33b) == '\0') {
LAB_082d2afc:
    lVar18 = FUN_0830d168();
    if (lVar18 == 0) {
      if (*(uint *)(unaff_x26 + 0x18) <= uVar31) goto LAB_082d4458;
      FUN_0830d810();
      if (*(int *)(*(long *)PTR_DAT_08ff65b8 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      iVar6 = FUN_08322014(0);
      bVar5 = *(uint *)(unaff_x26 + 0x18) <= uVar31;
      if (iVar6 == 0) {
        if (bVar5) goto LAB_082d4458;
        uStack0000000000000024 = 0x25a1;
      }
      else {
        if (bVar5) goto LAB_082d4458;
        if (*(int *)(*(long *)PTR_DAT_08ff65b8 + 0xe4) == 0) {
          thunk_FUN_0408f364();
        }
        uStack0000000000000024 = FUN_08322014(0);
      }
      *puVar28 = uStack0000000000000024;
      lVar18 = unaff_x19[0x20];
      if (*(int *)(*(long *)PTR_DAT_08ff6868 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      lVar18 = FUN_082eacf4(uStack0000000000000024,lVar18,1,0,400,(long)&stack0x00000148 + 4,0);
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
            uVar15 = FUN_08322588(0);
            if (*(int *)(*(long *)PTR_DAT_08ff6868 + 0xe4) == 0) {
              thunk_FUN_0408f364(*(long *)PTR_DAT_08ff6868);
            }
            lVar18 = FUN_082eb454(uStack0000000000000024,lVar18,uVar15,1,0,400,
                                  (long)&stack0x00000148 + 4,0);
            if (lVar18 != 0) goto LAB_082d2f0c;
          }
        }
        if (*(int *)(*(long *)PTR_DAT_08ff65b8 + 0xe4) == 0) {
          thunk_FUN_0408f364();
        }
        uVar15 = FUN_08322188(0);
        if (*(int *)(*(long *)PTR_DAT_08f65598 + 0xe4) == 0) {
          thunk_FUN_0408f364(*(long *)PTR_DAT_08f65598);
        }
        uVar12 = FUN_0858816c(uVar15,0,0);
        if ((uVar12 & 1) != 0) {
          if (*(int *)(*(long *)PTR_DAT_08ff65b8 + 0xe4) == 0) {
            thunk_FUN_0408f364();
          }
          uVar15 = FUN_08322188(0);
          if (*(int *)(*(long *)PTR_DAT_08ff6868 + 0xe4) == 0) {
            thunk_FUN_0408f364(*(long *)PTR_DAT_08ff6868);
          }
          lVar18 = FUN_082eacf4(uStack0000000000000024,uVar15,1,0,400,(long)&stack0x00000148 + 4,0);
          if (lVar18 != 0) goto LAB_082d2f0c;
        }
        if (*(uint *)(unaff_x26 + 0x18) <= uVar31) goto LAB_082d4458;
        *puVar28 = 0x20;
        lVar18 = unaff_x19[0x20];
        if (*(int *)(*(long *)PTR_DAT_08ff6868 + 0xe4) == 0) {
          thunk_FUN_0408f364();
        }
        uStack0000000000000024 = 0x20;
        lVar18 = FUN_082eacf4(0x20,lVar18,1,0,400,(long)&stack0x00000148 + 4,0);
        if (lVar18 == 0) {
          if (*(uint *)(unaff_x26 + 0x18) <= uVar31) goto LAB_082d4458;
          *puVar28 = 3;
          lVar18 = unaff_x19[0x20];
          if (*(int *)(*(long *)PTR_DAT_08ff6868 + 0xe4) == 0) {
            thunk_FUN_0408f364();
          }
          uStack0000000000000024 = 3;
          lVar18 = FUN_082eacf4(3,lVar18,1,0,400,(long)&stack0x00000148 + 4,0);
        }
      }
LAB_082d2f0c:
      if (*(int *)(*(long *)PTR_DAT_08ff65b8 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      uVar12 = FUN_0832212c(0);
      if ((uVar12 & 1) == 0) {
        plVar26 = (long *)FUN_040316d0(*(undefined8 *)PTR_DAT_08f65d88,4);
        if (uVar9 >> 0x10 == 0) {
          in_stack_00000050 = CONCAT44(in_stack_00000050._4_4_,uVar9);
          lVar20 = thunk_FUN_0406db0c(*(undefined8 *)(PTR_DAT_08f65618 + 0x50),&stack0x00000050);
          if (plVar26 == (long *)0x0) goto LAB_082d43c0;
          if ((lVar20 != 0) &&
             (lVar21 = thunk_FUN_0406ddbc(lVar20,*(undefined8 *)(*plVar26 + 0x40)), lVar21 == 0))
          goto LAB_082d445c;
          if ((int)plVar26[3] == 0) goto LAB_082d4458;
          plVar26[4] = lVar20;
          if (unaff_x19[0x1f] == 0) goto LAB_082d43c0;
          lVar20 = thunk_FUN_0858dfc0(unaff_x19[0x1f],0);
          if ((lVar20 != 0) &&
             (lVar21 = thunk_FUN_0406ddbc(lVar20,*(undefined8 *)(*plVar26 + 0x40)), lVar21 == 0))
          goto LAB_082d445c;
          if ((*(uint *)(plVar26 + 3) & 0xfffffffe) == 0) goto LAB_082d4458;
          plVar26[5] = lVar20;
          if (lVar18 == 0) goto LAB_082d43c0;
          in_stack_000000e0 = *(undefined4 *)(lVar18 + 0x14);
          lVar20 = thunk_FUN_0406db0c(*(undefined8 *)(PTR_DAT_08f65618 + 0x50),&stack0x000000e0);
          if ((lVar20 != 0) &&
             (lVar21 = thunk_FUN_0406ddbc(lVar20,*(undefined8 *)(*plVar26 + 0x40)), lVar21 == 0))
          goto LAB_082d445c;
          if (*(uint *)(plVar26 + 3) < 3) goto LAB_082d4458;
          plVar26[6] = lVar20;
          lVar20 = thunk_FUN_0858dfc0();
          if ((lVar20 != 0) &&
             (lVar21 = thunk_FUN_0406ddbc(lVar20,*(undefined8 *)(*plVar26 + 0x40)), lVar21 == 0))
          goto LAB_082d445c;
          if ((*(uint *)(plVar26 + 3) & 0xfffffffc) == 0) goto LAB_082d4458;
          plVar26[7] = lVar20;
          puVar19 = (undefined8 *)PTR_DAT_08ff6898;
        }
        else {
          in_stack_00000050 = CONCAT44(in_stack_00000050._4_4_,uVar9);
          lVar20 = thunk_FUN_0406db0c(*(undefined8 *)(PTR_DAT_08f65618 + 0x50),&stack0x00000050);
          if (plVar26 == (long *)0x0) goto LAB_082d43c0;
          if ((lVar20 != 0) &&
             (lVar21 = thunk_FUN_0406ddbc(lVar20,*(undefined8 *)(*plVar26 + 0x40)), lVar21 == 0))
          goto LAB_082d445c;
          if ((int)plVar26[3] == 0) goto LAB_082d4458;
          plVar26[4] = lVar20;
          if (unaff_x19[0x1f] == 0) goto LAB_082d43c0;
          lVar20 = thunk_FUN_0858dfc0(unaff_x19[0x1f],0);
          if ((lVar20 != 0) &&
             (lVar21 = thunk_FUN_0406ddbc(lVar20,*(undefined8 *)(*plVar26 + 0x40)), lVar21 == 0))
          goto LAB_082d445c;
          if ((*(uint *)(plVar26 + 3) & 0xfffffffe) == 0) goto LAB_082d4458;
          plVar26[5] = lVar20;
          if (lVar18 == 0) goto LAB_082d43c0;
          in_stack_000000e0 = *(undefined4 *)(lVar18 + 0x14);
          lVar20 = thunk_FUN_0406db0c(*(undefined8 *)(PTR_DAT_08f65618 + 0x50),&stack0x000000e0);
          if ((lVar20 != 0) &&
             (lVar21 = thunk_FUN_0406ddbc(lVar20,*(undefined8 *)(*plVar26 + 0x40)), lVar21 == 0))
          goto LAB_082d445c;
          if (*(uint *)(plVar26 + 3) < 3) goto LAB_082d4458;
          plVar26[6] = lVar20;
          lVar20 = thunk_FUN_0858dfc0();
          if ((lVar20 != 0) &&
             (lVar21 = thunk_FUN_0406ddbc(lVar20,*(undefined8 *)(*plVar26 + 0x40)), lVar21 == 0))
          goto LAB_082d445c;
          if ((*(uint *)(plVar26 + 3) & 0xfffffffc) == 0) goto LAB_082d4458;
          plVar26[7] = lVar20;
          puVar19 = (undefined8 *)PTR_DAT_08ff6890;
        }
        uVar15 = FUN_0736a31c(*puVar19,plVar26,0);
        if (*(int *)(*(long *)PTR_DAT_08f655a0 + 0xe4) == 0) {
          thunk_FUN_0408f364();
        }
        FUN_085392e4(uVar15);
      }
    }
  }
  else {
    if (*(int *)(*(long *)PTR_DAT_08ff65e0 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    uVar12 = FUN_0832c2a4(uVar9,0);
    if (((uVar12 & 1) == 0) || (uVar29 == 0xfe0e)) {
      if (*(int *)(*(long *)PTR_DAT_08ff65e0 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      uVar12 = FUN_0832c224(uVar9,0);
      if (((uVar12 & 1) == 0) || (uVar29 != 0xfe0f)) goto LAB_082d2afc;
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
    uVar15 = FUN_08322990(0);
    lVar20 = unaff_x19[0x50];
    lVar21 = unaff_x19[0x47];
    if (*(int *)(*(long *)PTR_DAT_08ff6868 + 0xe4) == 0) {
      thunk_FUN_0408f364(*(long *)PTR_DAT_08ff6868);
    }
    lVar18 = FUN_082eb668(uVar9,lVar18,uVar15,1,(int)lVar20,(int)lVar21,(long)&stack0x00000148 + 4,0
                         );
    if (lVar18 == 0) goto LAB_082d2afc;
  }
  if ((unaff_x19[0x74] == 0) || (lVar20 = *(long *)(unaff_x19[0x74] + 0x38), lVar20 == 0))
  goto LAB_082d43c0;
  if (*(uint *)(lVar20 + 0x18) <= *(uint *)(unaff_x19 + 0x94)) goto LAB_082d4458;
  *(undefined8 *)(lVar20 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x178 + 0x38) = 0;
  if (lVar18 == 0) goto LAB_082d43c0;
  if (*(char *)(lVar18 + 0x10) == '\x01') {
    if (*(long *)(lVar18 + 0x18) == 0) goto LAB_082d43c0;
    iVar6 = FUN_082d75b4(*(long *)(lVar18 + 0x18),0);
    if (unaff_x19[0x20] == 0) goto LAB_082d43c0;
    iVar7 = FUN_082d75b4(unaff_x19[0x20],0);
    bVar5 = iVar6 != iVar7;
    if (bVar5) {
      plVar26 = *(long **)(lVar18 + 0x18);
      if (plVar26 != (long *)0x0) {
        bVar2 = *(byte *)(*(long *)PTR_DAT_08fc1610 + 0x130);
        if (*(byte *)(*plVar26 + 0x130) < bVar2) {
          plVar26 = (long *)0x0;
        }
        else if (*(long *)(*(long *)(*plVar26 + 200) + (ulong)bVar2 * 8 + -8) !=
                 *(long *)PTR_DAT_08fc1610) {
          plVar26 = (long *)0x0;
        }
      }
      unaff_x19[0x20] = (long)plVar26;
    }
    if ((uVar29 >> 4 == 0xfe0) || (uVar29 - 0xe0100 < 0xf0)) {
      if (unaff_x19[0x20] == 0) goto LAB_082d43c0;
      iVar6 = FUN_082e450c(unaff_x19[0x20],uStack0000000000000024,uVar29,0);
      if (iVar6 != 0) {
        if (unaff_x19[0x20] == 0) goto LAB_082d43c0;
        uVar12 = FUN_082e6834(unaff_x19[0x20],iVar6,&stack0x00000130,0);
        if ((uVar12 & 1) != 0) {
          if ((unaff_x19[0x74] == 0) || (lVar20 = *(long *)(unaff_x19[0x74] + 0x38), lVar20 == 0))
          goto LAB_082d43c0;
          if (*(uint *)(lVar20 + 0x18) <= *(uint *)(unaff_x19 + 0x94)) goto LAB_082d4458;
          *(undefined8 *)(lVar20 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x178 + 0x38) =
               in_stack_00000130;
        }
      }
      if (*(uint *)(unaff_x26 + 0x18) <= uVar1) goto LAB_082d4458;
      *(undefined4 *)(lVar13 + (long)(int)uVar1 * 0x10 + 4) = 0x1a;
      uVar31 = uVar1;
    }
    if ((uVar8 & 1) != 0) {
      if (((unaff_x19[0x20] == 0) || (lVar20 = *(long *)(unaff_x19[0x20] + 0x178), lVar20 == 0)) ||
         (lVar20 = *(long *)(lVar20 + 0x38), lVar20 == 0)) goto LAB_082d43c0;
      uVar12 = FUN_070b305c(lVar20,*(undefined4 *)(lVar18 + 0x28),&stack0x00000138,
                            *(undefined8 *)PTR_DAT_08ff6838);
      if ((uVar12 & 1) == 0) goto LAB_082d345c;
      if (in_stack_00000138 == 0) goto LAB_082d3af0;
      iVar6 = 0;
      while (iVar6 < *(int *)(in_stack_00000138 + 0x18)) {
        auVar36 = FUN_057805a8(in_stack_00000138,iVar6,*(undefined8 *)PTR_DAT_08ff6860);
        lVar20 = auVar36._0_8_;
        if (lVar20 == 0) goto LAB_082d43c0;
        uVar12 = *(ulong *)(lVar20 + 0x18);
        iVar7 = (int)uVar12;
        if (1 < iVar7) {
          lVar21 = 0;
          do {
            uVar9 = uVar31 + 1 + (int)lVar21;
            if (*(uint *)(unaff_x26 + 0x18) <= uVar9) goto LAB_082d4458;
            if (unaff_x19[0x20] == 0) goto LAB_082d43c0;
            iVar10 = FUN_082e4430(unaff_x19[0x20],
                                  *(undefined4 *)(lVar13 + (long)(int)uVar9 * 0x10 + 4),0);
            if (*(uint *)(lVar20 + 0x18) <= (int)lVar21 + 1U) goto LAB_082d4458;
            if (iVar10 != *(int *)(lVar20 + 0x24 + lVar21 * 4)) goto LAB_082d338c;
            lVar21 = lVar21 + 1;
          } while (iVar7 + -1 != (int)lVar21);
        }
        if (auVar36._8_4_ != 0) {
          if (unaff_x19[0x20] == 0) goto LAB_082d43c0;
          uVar30 = FUN_082e6834(unaff_x19[0x20],auVar36._8_8_ & 0xffffffff,&stack0x00000128,0);
          if ((uVar30 & 1) != 0) {
            if ((unaff_x19[0x74] == 0) || (lVar20 = *(long *)(unaff_x19[0x74] + 0x38), lVar20 == 0))
            goto LAB_082d43c0;
            if (*(uint *)(lVar20 + 0x18) <= *(uint *)(unaff_x19 + 0x94)) goto LAB_082d4458;
            *(undefined8 *)(lVar20 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x178 + 0x38) =
                 in_stack_00000128;
            if (iVar7 < 1) goto LAB_082d3454;
            uVar30 = 0;
            goto LAB_082d3410;
          }
        }
LAB_082d338c:
        iVar6 = iVar6 + 1;
        if (in_stack_00000138 == 0) goto LAB_082d43c0;
      }
    }
  }
  else {
    bVar5 = false;
  }
  goto LAB_082d345c;
LAB_082d3410:
  do {
    if (uVar30 == 0) {
      if (*(uint *)(unaff_x26 + 0x18) <= uVar31) goto LAB_082d4458;
      *(int *)(lVar13 + (long)(int)uVar31 * 0x10 + 0xc) = iVar7;
    }
    else {
      uVar9 = uVar31 + (int)uVar30;
      if (*(uint *)(unaff_x26 + 0x18) <= uVar9) goto LAB_082d4458;
      *(undefined4 *)(lVar13 + (long)(int)uVar9 * 0x10 + 4) = 0x1a;
    }
    uVar30 = uVar30 + 1;
  } while ((uVar12 & 0xffffffff) != uVar30);
LAB_082d3454:
  uVar31 = (uVar31 + iVar7) - 1;
LAB_082d345c:
  if ((unaff_x19[0x74] == 0) || (lVar20 = *(long *)(unaff_x19[0x74] + 0x38), lVar20 == 0))
  goto LAB_082d43c0;
  uVar9 = *(uint *)(unaff_x19 + 0x94);
  if (*(uint *)(lVar20 + 0x18) <= uVar9) goto LAB_082d4458;
  puVar22 = (undefined4 *)(lVar20 + 0x20 + (long)(int)uVar9 * 0x178);
  *puVar22 = 0;
  *(long *)(puVar22 + 4) = lVar18;
  *(short *)(puVar22 + 1) = (short)uStack0000000000000024;
  *(undefined1 *)(puVar22 + 0xd) = uStack000000000000014c;
  if (*(uint *)(unaff_x26 + 0x18) <= uVar31) goto LAB_082d4458;
  lVar21 = lVar20 + 0x20 + (long)(int)uVar9 * 0x178;
  *(undefined8 *)(lVar21 + 8) = *(undefined8 *)(lVar13 + (long)(int)uVar31 * 0x10 + 8);
  lVar20 = unaff_x19[0x20];
  *(long *)(lVar21 + 0x20) = lVar20;
  puVar4 = PTR_DAT_08fc16b0;
  if (*(char *)(lVar18 + 0x10) == '\x02') {
    plVar26 = *(long **)(lVar18 + 0x18);
    if (plVar26 == (long *)0x0) goto LAB_082d43c0;
    bVar2 = *(byte *)(*(long *)PTR_DAT_08fc1658 + 0x130);
    if ((*(byte *)(*plVar26 + 0x130) < bVar2) ||
       (*(long *)(*(long *)(*plVar26 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)PTR_DAT_08fc1658))
    goto LAB_082d43c0;
    lVar14 = plVar26[0x11];
    lVar25 = *(long *)PTR_DAT_08fc16b0;
    if (*(int *)(lVar25 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      lVar25 = *(long *)puVar4;
    }
    uVar9 = FUN_082c63fc(lVar14,plVar26,*(long *)(lVar25 + 0xb8),
                         *(undefined8 *)(*(long *)(lVar25 + 0xb8) + 8));
    lVar25 = *(long *)puVar4;
    *(uint *)(unaff_x19 + 0x24) = uVar9;
    lVar25 = **(long **)(lVar25 + 0xb8);
    if (lVar25 == 0) goto LAB_082d43c0;
    if (*(uint *)(lVar25 + 0x18) <= uVar9) goto LAB_082d4458;
    lVar25 = lVar25 + (long)(int)uVar9 * 0x38;
    *(int *)(lVar25 + 0x54) = *(int *)(lVar25 + 0x54) + 1;
    if ((unaff_x19[0x74] == 0) || (lVar25 = *(long *)(unaff_x19[0x74] + 0x38), lVar25 == 0))
    goto LAB_082d43c0;
    uVar9 = *(uint *)(unaff_x19 + 0x94);
    if (*(uint *)(lVar25 + 0x18) <= uVar9) goto LAB_082d4458;
    lVar25 = lVar25 + (long)(int)uVar9 * 0x178;
    *(undefined4 *)(lVar25 + 0x20) = 1;
    *(int *)(lVar25 + 0x50) = (int)unaff_x19[0x24];
    *(undefined4 *)((long)unaff_x19 + 0x65c) = 0;
    *(undefined4 *)(unaff_x19 + 0x24) = uVar23;
LAB_082d35bc:
    iStack0000000000000038 = iStack0000000000000038 + 1;
    goto LAB_082d3ad0;
  }
  if (bVar5) {
    if (lVar20 == 0) goto LAB_082d43c0;
    iVar6 = FUN_082d75b4(lVar20,0);
    if (unaff_x19[0x1f] == 0) goto LAB_082d43c0;
    iVar7 = FUN_082d75b4(unaff_x19[0x1f],0);
    if (iVar6 != iVar7) {
      if (*(int *)(*(long *)PTR_DAT_08ff65b8 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      uVar12 = FUN_08322644(0);
      if ((uVar12 & 1) == 0) {
        lVar20 = unaff_x19[0x20];
        if (lVar20 == 0) goto LAB_082d43c0;
        lVar21 = *(long *)(lVar20 + 0x88);
      }
      else {
        if (unaff_x19[0x20] == 0) goto LAB_082d43c0;
        lVar20 = unaff_x19[0x23];
        uVar15 = *(undefined8 *)(unaff_x19[0x20] + 0x88);
        if (*(int *)(*(long *)PTR_DAT_08ff6870 + 0xe4) == 0) {
          thunk_FUN_0408f364();
        }
        lVar21 = UnityEngine_XR_Interaction_Toolkit_XRInteractionManager__ClearInteractorHover
                           (lVar20,uVar15,0);
        lVar20 = unaff_x19[0x20];
      }
      puVar4 = PTR_DAT_08fc16b0;
      unaff_x19[0x23] = lVar21;
      lVar16 = *(long *)puVar4;
      if (*(int *)(lVar16 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        lVar16 = *(long *)puVar4;
      }
      uVar11 = FUN_082c61e4(lVar21,lVar20,*(long *)(lVar16 + 0xb8),
                            *(undefined8 *)(*(long *)(lVar16 + 0xb8) + 8));
      *(undefined4 *)(unaff_x19 + 0x24) = uVar11;
    }
  }
  if ((unaff_x19[0x74] == 0) || (lVar20 = *(long *)(unaff_x19[0x74] + 0x38), lVar20 == 0))
  goto LAB_082d43c0;
  if (*(uint *)(lVar20 + 0x18) <= *(uint *)(unaff_x19 + 0x94)) goto LAB_082d4458;
  lVar20 = *(long *)(lVar20 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x178 + 0x38);
  if ((lVar20 == 0) && (lVar20 = *(long *)(lVar18 + 0x20), lVar20 == 0)) goto LAB_082d43c0;
  iVar6 = FUN_086475ac(lVar20,0);
  if (0 < iVar6) {
    lVar18 = unaff_x19[0x20];
    lVar20 = unaff_x19[0x23];
    if (*(int *)(*(long *)PTR_DAT_08ff6870 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    lVar18 = FUN_0831d274(lVar18,lVar20,iVar6,0);
    puVar4 = PTR_DAT_08fc16b0;
    unaff_x19[0x23] = lVar18;
    lVar21 = unaff_x19[0x20];
    lVar20 = *(long *)puVar4;
    if (*(int *)(lVar20 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      lVar20 = *(long *)puVar4;
    }
    uVar11 = FUN_082c61e4(lVar18,lVar21,*(long *)(lVar20 + 0xb8),
                          *(undefined8 *)(*(long *)(lVar20 + 0xb8) + 8));
    bVar5 = true;
    *(undefined4 *)(unaff_x19 + 0x24) = uVar11;
  }
  if (*(int *)(*(long *)(PTR_DAT_08f65618 + 0x88) + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  uVar12 = FUN_0744db94(uStack0000000000000024,0);
  puVar4 = PTR_DAT_08fc16b0;
  if (((uVar12 & 1) == 0) && (uStack0000000000000024 != 0x200b)) {
    lVar18 = *(long *)PTR_DAT_08fc16b0;
    if (*(int *)(lVar18 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      lVar18 = *(long *)puVar4;
    }
    lVar20 = **(long **)(lVar18 + 0xb8);
    if (lVar20 == 0) goto LAB_082d43c0;
    uVar9 = *(uint *)(unaff_x19 + 0x24);
    if (*(uint *)(lVar20 + 0x18) <= uVar9) goto LAB_082d4458;
    if (*(int *)(lVar20 + (long)(int)uVar9 * 0x38 + 0x54) < 0x3fff) {
      if (*(int *)(lVar18 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        plVar26 = *(long **)(*(long *)PTR_DAT_08fc16b0 + 0xb8);
        goto Unity_VisualScripting_CoroutineRunner__Awake;
      }
LAB_082d3964:
      uVar9 = *(uint *)(unaff_x19 + 0x24);
    }
    else {
      if (bVar5) {
        if (unaff_x19[0xf7] == 0) goto LAB_082d43c0;
        uVar12 = FUN_06ee3b1c(unaff_x19[0xf7],(long)(int)uVar9,(long)&stack0x00000120 + 4,
                              *(undefined8 *)PTR_DAT_08fc5190);
        puVar4 = PTR_DAT_08fc16b0;
        if ((uVar12 & 1) == 0) {
LAB_082d3890:
          lVar18 = unaff_x19[0x23];
          uVar15 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08f68540);
          FUN_0854ff98(uVar15,lVar18,0);
          puVar4 = PTR_DAT_08fc16b0;
          lVar20 = unaff_x19[0x20];
          lVar18 = *(long *)PTR_DAT_08fc16b0;
          if (*(int *)(lVar18 + 0xe4) == 0) {
            thunk_FUN_0408f364();
            lVar18 = *(long *)puVar4;
          }
          uVar9 = FUN_082c61e4(uVar15,lVar20,*(long *)(lVar18 + 0xb8),
                               *(undefined8 *)(*(long *)(lVar18 + 0xb8) + 8));
          if (unaff_x19[0xf7] == 0) goto LAB_082d43c0;
          FUN_06ee2204(unaff_x19[0xf7],(int)unaff_x19[0x24],uVar9,*(undefined8 *)PTR_DAT_08f7cfc8);
          lVar18 = *(long *)PTR_DAT_08fc16b0;
        }
        else {
          lVar18 = *(long *)PTR_DAT_08fc16b0;
          if (*(int *)(lVar18 + 0xe4) == 0) {
            thunk_FUN_0408f364();
            lVar18 = *(long *)puVar4;
          }
          lVar20 = **(long **)(lVar18 + 0xb8);
          if (lVar20 == 0) goto LAB_082d43c0;
          if (*(uint *)(lVar20 + 0x18) <= in_stack_00000120._4_4_) goto LAB_082d4458;
          uVar9 = in_stack_00000120._4_4_;
          if (0x3ffe < *(int *)(lVar20 + (long)(int)in_stack_00000120._4_4_ * 0x38 + 0x54))
          goto LAB_082d3890;
        }
        *(uint *)(unaff_x19 + 0x24) = uVar9;
        if (*(int *)(lVar18 + 0xe4) == 0) {
          thunk_FUN_0408f364();
          lVar18 = *(long *)PTR_DAT_08fc16b0;
        }
        plVar26 = *(long **)(lVar18 + 0xb8);
Unity_VisualScripting_CoroutineRunner__Awake:
        lVar20 = *plVar26;
        if (lVar20 == 0) goto LAB_082d43c0;
        goto LAB_082d3964;
      }
      lVar18 = unaff_x19[0x23];
      uVar15 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08f68540);
      FUN_0854ff98(uVar15,lVar18,0);
      puVar4 = PTR_DAT_08fc16b0;
      lVar20 = unaff_x19[0x20];
      lVar18 = *(long *)PTR_DAT_08fc16b0;
      if (*(int *)(lVar18 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        lVar18 = *(long *)puVar4;
      }
      uVar9 = FUN_082c61e4(uVar15,lVar20,*(long *)(lVar18 + 0xb8),
                           *(undefined8 *)(*(long *)(lVar18 + 0xb8) + 8));
      lVar18 = *(long *)puVar4;
      *(uint *)(unaff_x19 + 0x24) = uVar9;
      lVar20 = **(long **)(lVar18 + 0xb8);
      if (lVar20 == 0) goto LAB_082d43c0;
    }
    if (*(uint *)(lVar20 + 0x18) <= uVar9) goto LAB_082d4458;
    lVar20 = lVar20 + (long)(int)uVar9 * 0x38;
    *(int *)(lVar20 + 0x54) = *(int *)(lVar20 + 0x54) + 1;
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
  lVar20 = **(long **)(lVar18 + 0xb8);
  if (lVar20 == 0) goto LAB_082d43c0;
  if (*(uint *)(lVar20 + 0x18) <= *(uint *)(unaff_x19 + 0x24)) goto LAB_082d4458;
  *(bool *)(lVar20 + (long)(int)*(uint *)(unaff_x19 + 0x24) * 0x38 + 0x41) = bVar5;
  if (bVar5) {
    if (*(int *)(lVar18 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      lVar20 = **(long **)(*(long *)PTR_DAT_08fc16b0 + 0xb8);
      if (lVar20 == 0) goto LAB_082d43c0;
    }
    if (*(uint *)(lVar20 + 0x18) <= *(uint *)(unaff_x19 + 0x24)) goto LAB_082d4458;
    *(long *)(lVar20 + (long)(int)*(uint *)(unaff_x19 + 0x24) * 0x38 + 0x48) = lVar25;
    unaff_x19[0x23] = lVar25;
    unaff_x19[0x20] = lVar14;
    *(undefined4 *)(unaff_x19 + 0x24) = uVar23;
  }
  uVar9 = *(uint *)(unaff_x19 + 0x94);
LAB_082d3ad0:
  *(uint *)(unaff_x19 + 0x94) = uVar9 + 1;
LAB_082d3ad8:
  uVar9 = *(uint *)(unaff_x26 + 0x18);
  uVar31 = uVar31 + 1;
  if ((int)uVar9 <= (int)uVar31) goto LAB_082d3af0;
  goto LAB_082d266c;
}


