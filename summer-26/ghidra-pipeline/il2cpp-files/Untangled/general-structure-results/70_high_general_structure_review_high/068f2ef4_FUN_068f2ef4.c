/*
FUNCTION_NAME: FUN_068f2ef4
ENTRY_POINT: 068f2ef4
PROGRAM: Untangled-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_3
*/


void FUN_068f2ef4(undefined1 param_1 [16],undefined1 param_2 [16],float param_3,float param_4,
                 long param_5,int param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  int extraout_var;
  int extraout_var_00;
  int extraout_var_01;
  float extraout_w1;
  float extraout_w1_00;
  float extraout_w1_01;
  float extraout_w1_02;
  float extraout_w1_03;
  float extraout_w1_04;
  float extraout_var_02;
  float extraout_var_03;
  float extraout_var_04;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  float fVar15;
  float fVar16;
  
  if ((DAT_071d73ae & 1) == 0) {
    FUN_02f07e70(
                Method_UnityEngine_XR_ARFoundation_ARTrackable<XRAnchor,_ARAnchor>_get_trackableId__
                );
    FUN_02f07e70(
                Method_UnityEngine_XR_ARFoundation_ARTrackable<XRAnchor,_ARAnchor>_get_sessionRelativeData__
                );
    FUN_02f07e70(Method_UnityEngine_XR_ARFoundation_ARTrackable<XRAnchor,_ARAnchor>__ctor__);
    FUN_02f07e70(Method_UnityEngine_XR_ARFoundation_ARTrackable<BoundedPlane,_ARPlane>__ctor__);
    DAT_071d73ae = 1;
  }
  lVar8 = FUN_068ec3f8(param_5);
  if (lVar8 != 0) {
    iVar3 = FUN_06789e70(lVar8,0);
    if (iVar3 < 1) {
      return;
    }
    lVar8 = FUN_068ec3f8(param_5);
    if (lVar8 != 0) {
      UnityEngine_UIElements_FocusController__AboutToGrabFocus(lVar8,0);
      iVar3 = *(int *)(param_5 + 0x128);
      fVar16 = param_3;
      lVar8 = FUN_068ec3f8(param_5);
      if (lVar8 != 0) {
        if (iVar3 - 1U < 2) {
          plVar9 = (long *)UnityEngine_UIElements_DynamicAtlasSettings__get_defaultFilters(lVar8,0);
          uVar10 = FUN_068ec3f8(param_5);
          iVar3 = FUN_068f2080(uVar10,param_6,uVar10);
          if (*(int *)(param_5 + 0x1e8) < param_6) {
            uVar10 = FUN_068ec3f8(param_5);
            puVar1 = Method_UnityEngine_XR_ARFoundation_ARTrackable<BoundedPlane,_ARPlane>__ctor__;
            if (*(int *)(*(long *)
                          Method_UnityEngine_XR_ARFoundation_ARTrackable<BoundedPlane,_ARPlane>__ctor__
                        + 0xe0) == 0) {
              thunk_FUN_02f12b58(*(long *)
                                  Method_UnityEngine_XR_ARFoundation_ARTrackable<BoundedPlane,_ARPlane>__ctor__
                                );
            }
            uVar4 = FUN_068f0af4(uVar10,iVar3);
            *(undefined4 *)(param_5 + 0x1e8) = uVar4;
            puVar2 = Method_UnityEngine_XR_ARFoundation_ARTrackable<XRAnchor,_ARAnchor>__ctor__;
            if (plVar9 != (long *)0x0) {
              lVar8 = *plVar9;
              uVar13 = (ulong)*(ushort *)(lVar8 + 0x12e);
              if (uVar13 != 0) {
                piVar14 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar14 + -2) ==
                      *(long *)
                       Method_UnityEngine_XR_ARFoundation_ARTrackable<XRAnchor,_ARAnchor>__ctor__) {
                    puVar11 = (undefined8 *)(lVar8 + (long)*piVar14 * 0x10 + 0x138);
                    goto LAB_068f3360;
                  }
                  uVar13 = uVar13 - 1;
                  piVar14 = piVar14 + 4;
                } while (uVar13 != 0);
              }
              puVar11 = (undefined8 *)
                        FUN_02eea86c(plVar9,*(long *)
                                             Method_UnityEngine_XR_ARFoundation_ARTrackable<XRAnchor,_ARAnchor>__ctor__
                                     ,0);
LAB_068f3360:
              (*(code *)*puVar11)(plVar9,iVar3,puVar11[1]);
              lVar8 = *plVar9;
              uVar13 = (ulong)*(ushort *)(lVar8 + 0x12e);
              if (uVar13 != 0) {
                piVar14 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar14 + -2) == *(long *)puVar2) {
                    puVar11 = (undefined8 *)(lVar8 + (long)*piVar14 * 0x10 + 0x138);
                    goto LAB_068f3428;
                  }
                  uVar13 = uVar13 - 1;
                  piVar14 = piVar14 + 4;
                } while (uVar13 != 0);
              }
              puVar11 = (undefined8 *)FUN_02eea86c(plVar9,*(long *)puVar2,0);
LAB_068f3428:
              (*(code *)*puVar11)(plVar9,iVar3,puVar11[1]);
              lVar8 = *plVar9;
              uVar13 = (ulong)*(ushort *)(lVar8 + 0x12e);
              if (uVar13 != 0) {
                piVar14 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar14 + -2) ==
                      *(long *)
                       Method_UnityEngine_XR_ARFoundation_ARTrackable<XRAnchor,_ARAnchor>_get_trackableId__
                     ) {
                    /* try { // try from 068f34f0 to 069f34f3 has its CatchHandler @ 068f3594 */
                    /* try { // try from 068f34f4 to 069f34fb has its CatchHandler @ 068f35a8 */
                    puVar11 = (undefined8 *)(lVar8 + (long)*piVar14 * 0x10 + 0x138);
                    goto LAB_068f34fc;
                  }
                  uVar13 = uVar13 - 1;
                  piVar14 = piVar14 + 4;
                } while (uVar13 != 0);
              }
              puVar11 = (undefined8 *)
                        FUN_02eea86c(plVar9,*(long *)
                                             Method_UnityEngine_XR_ARFoundation_ARTrackable<XRAnchor,_ARAnchor>_get_trackableId__
                                     ,0);
LAB_068f34fc:
                    /* try { // try from 068f3504 to 069f350f has its CatchHandler @ 068f35a0 */
              fVar16 = extraout_w1 - (float)extraout_var;
              iVar5 = (*(code *)*puVar11)(plVar9,puVar11[1]);
                    /* try { // try from 068f3510 to 069f3517 has its CatchHandler @ 068f35a4 */
              if (iVar3 == iVar5 + -1) {
                lVar8 = *plVar9;
                uVar13 = (ulong)*(ushort *)(lVar8 + 0x12e);
                    /* try { // try from 068f3524 to 069f3533 has its CatchHandler @ 068f359c */
                if (uVar13 != 0) {
                  piVar14 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                  do {
                    /* try { // try from 068f3534 to 069f358b has its CatchHandler @ 068f33d0 */
                    if (*(long *)(piVar14 + -2) == *(long *)puVar2) {
                      puVar11 = (undefined8 *)(lVar8 + (long)*piVar14 * 0x10 + 0x138);
                      goto LAB_068f363c;
                    }
                    uVar13 = uVar13 - 1;
                    piVar14 = piVar14 + 4;
                  } while (uVar13 != 0);
                }
                puVar11 = (undefined8 *)FUN_02eea86c(plVar9,*(long *)puVar2,0);
LAB_068f363c:
                (*(code *)*puVar11)(plVar9,iVar3,puVar11[1]);
                fVar16 = fVar16 + extraout_var_02;
              }
              do {
                iVar5 = iVar3;
                if (iVar5 < 1) break;
                lVar8 = *plVar9;
                uVar13 = (ulong)*(ushort *)(lVar8 + 0x12e);
                if (uVar13 != 0) {
                  piVar14 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar14 + -2) == *(long *)puVar2) {
                      puVar11 = (undefined8 *)(lVar8 + (long)*piVar14 * 0x10 + 0x138);
                      goto LAB_068f36b4;
                    }
                    uVar13 = uVar13 - 1;
                    piVar14 = piVar14 + 4;
                  } while (uVar13 != 0);
                }
                puVar11 = (undefined8 *)FUN_02eea86c(plVar9,*(long *)puVar2,0);
LAB_068f36b4:
                (*(code *)*puVar11)(plVar9,iVar5 + -1,puVar11[1]);
                iVar3 = iVar5 + -1;
              } while (extraout_w1_02 - fVar16 <= param_4);
              uVar10 = FUN_068ec3f8(param_5);
              lVar8 = *(long *)puVar1;
LAB_068f39ec:
              if (*(int *)(lVar8 + 0xe0) == 0) {
                thunk_FUN_02f12b58(lVar8);
              }
              uVar4 = FUN_068f3a9c(uVar10,iVar5);
              *(undefined4 *)(param_5 + 0x1e4) = uVar4;
              return;
            }
          }
          else {
            iVar5 = *(int *)(param_5 + 0x1e4);
            if (param_6 < iVar5) {
              uVar10 = FUN_068ec3f8(param_5);
              if (*(int *)(*(long *)
                            Method_UnityEngine_XR_ARFoundation_ARTrackable<BoundedPlane,_ARPlane>__ctor__
                          + 0xe0) == 0) {
                thunk_FUN_02f12b58(*(long *)
                                    Method_UnityEngine_XR_ARFoundation_ARTrackable<BoundedPlane,_ARPlane>__ctor__
                                  );
              }
              iVar5 = FUN_068f3a9c(uVar10,iVar3);
              *(int *)(param_5 + 0x1e4) = iVar5;
            }
            uVar10 = FUN_068ec3f8(param_5);
            iVar3 = FUN_068f2080(uVar10,iVar5,uVar10);
            puVar1 = Method_UnityEngine_XR_ARFoundation_ARTrackable<XRAnchor,_ARAnchor>__ctor__;
            if (plVar9 != (long *)0x0) {
              lVar8 = *plVar9;
              uVar13 = (ulong)*(ushort *)(lVar8 + 0x12e);
              if (uVar13 != 0) {
                piVar14 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar14 + -2) ==
                      *(long *)
                       Method_UnityEngine_XR_ARFoundation_ARTrackable<XRAnchor,_ARAnchor>__ctor__) {
                    puVar11 = (undefined8 *)(lVar8 + (long)*piVar14 * 0x10 + 0x138);
                    goto LAB_068f33c4;
                  }
                  uVar13 = uVar13 - 1;
                  piVar14 = piVar14 + 4;
                } while (uVar13 != 0);
              }
              puVar11 = (undefined8 *)
                        FUN_02eea86c(plVar9,*(long *)
                                             Method_UnityEngine_XR_ARFoundation_ARTrackable<XRAnchor,_ARAnchor>__ctor__
                                     ,0);
LAB_068f33c4:
                    /* try { // try from 068f33d0 to 069f34d3 has its CatchHandler @ 068f33d0
                       catch() { ... } // from try @ 068f33d0 with catch @ 068f33d0
                       catch() { ... } // from try @ 068f3534 with catch @ 068f33d0
                       catch() { ... } // from try @ 068f3590 with catch @ 068f33d0
                       catch() { ... } // from try @ 068f35c0 with catch @ 068f33d0
                       catch() { ... } // from try @ 068f35f4 with catch @ 068f33d0 */
              (*(code *)*puVar11)(plVar9,iVar3,puVar11[1]);
              lVar8 = *plVar9;
              uVar13 = (ulong)*(ushort *)(lVar8 + 0x12e);
              if (uVar13 != 0) {
                piVar14 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar14 + -2) == *(long *)puVar1) {
                    puVar11 = (undefined8 *)(lVar8 + (long)*piVar14 * 0x10 + 0x138);
                    goto LAB_068f3498;
                  }
                  uVar13 = uVar13 - 1;
                  piVar14 = piVar14 + 4;
                } while (uVar13 != 0);
              }
              puVar11 = (undefined8 *)FUN_02eea86c(plVar9,*(long *)puVar1,0);
LAB_068f3498:
              (*(code *)*puVar11)(plVar9,iVar3,puVar11[1]);
              lVar8 = *plVar9;
              uVar13 = (ulong)*(ushort *)(lVar8 + 0x12e);
              if (uVar13 != 0) {
                piVar14 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar14 + -2) == *(long *)puVar1) {
                    puVar11 = (undefined8 *)(lVar8 + (long)*piVar14 * 0x10 + 0x138);
                    goto LAB_068f3564;
                  }
                  uVar13 = uVar13 - 1;
                    /* try { // try from 068f34d4 to 069f34db has its CatchHandler @ 068f35ac */
                  piVar14 = piVar14 + 4;
                } while (uVar13 != 0);
              }
              puVar11 = (undefined8 *)FUN_02eea86c(plVar9,*(long *)puVar1,0);
LAB_068f3564:
              (*(code *)*puVar11)(plVar9,iVar3,puVar11[1]);
              puVar2 = 
              Method_UnityEngine_XR_ARFoundation_ARTrackable<XRAnchor,_ARAnchor>_get_trackableId__;
              lVar8 = *plVar9;
                    /* try { // try from 068f358c to 069f358f has its CatchHandler @ 068f3598 */
              uVar13 = (ulong)*(ushort *)(lVar8 + 0x12e);
                    /* try { // try from 068f3590 to 069f35bb has its CatchHandler @ 068f33d0 */
                    /* catch(type#1 @ 069384f8) { ... } // from try @ 068f34f0 with catch @ 068f3594
                        */
              if (uVar13 != 0) {
                    /* catch(type#1 @ 069384f8) { ... } // from try @ 068f358c with catch @ 068f3598
                        */
                    /* catch(type#1 @ 069384f8) { ... } // from try @ 068f3524 with catch @ 068f359c
                        */
                piVar14 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                do {
                    /* catch(type#1 @ 069384f8) { ... } // from try @ 068f3504 with catch @ 068f35a0
                        */
                    /* catch(type#1 @ 069384f8) { ... } // from try @ 068f3510 with catch @ 068f35a4
                        */
                    /* catch(type#1 @ 069384f8) { ... } // from try @ 068f34f4 with catch @ 068f35a8
                        */
                  if (*(long *)(piVar14 + -2) ==
                      *(long *)
                       Method_UnityEngine_XR_ARFoundation_ARTrackable<XRAnchor,_ARAnchor>_get_trackableId__
                     ) {
                    puVar11 = (undefined8 *)(lVar8 + (long)*piVar14 * 0x10 + 0x138);
                    goto LAB_068f35d4;
                  }
                    /* catch(type#1 @ 069384f8) { ... } // from try @ 068f34d4 with catch @ 068f35ac
                        */
                  uVar13 = uVar13 - 1;
                  piVar14 = piVar14 + 4;
                } while (uVar13 != 0);
              }
                    /* try { // try from 068f35bc to 069f35bf has its CatchHandler @ 068f35e4 */
                    /* try { // try from 068f35c0 to 069f35eb has its CatchHandler @ 068f33d0 */
              puVar11 = (undefined8 *)
                        FUN_02eea86c(plVar9,*(long *)
                                             Method_UnityEngine_XR_ARFoundation_ARTrackable<XRAnchor,_ARAnchor>_get_trackableId__
                                     ,0);
LAB_068f35d4:
              fVar16 = extraout_w1_01 - (float)extraout_var_00;
              iVar6 = (*(code *)*puVar11)(plVar9,puVar11[1]);
                    /* catch() { ... } // from try @ 068f35bc with catch @ 068f35e4 */
              iVar5 = iVar3;
                    /* try { // try from 068f35ec to 069f35f3 has its CatchHandler @ 068f3608 */
              if (iVar3 == iVar6 + -1) {
                lVar8 = *plVar9;
                    /* try { // try from 068f35f4 to 069f35ff has its CatchHandler @ 068f33d0 */
                uVar13 = (ulong)*(ushort *)(lVar8 + 0x12e);
                if (uVar13 != 0) {
                    /* try { // try from 068f3600 to 069f3607 has its CatchHandler @ 068f3608 */
                  piVar14 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                  do {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 068f35ec with catch @ 068f3608
                       catch(type#2 @ 00000000) { ... } // from try @ 068f3600 with catch @ 068f3608
                        */
                    /* try { // try from 068f360c to 069f370f has its CatchHandler @ 068f360c
                       catch() { ... } // from try @ 068f360c with catch @ 068f360c
                       catch() { ... } // from try @ 068f3770 with catch @ 068f360c
                       catch() { ... } // from try @ 068f37cc with catch @ 068f360c
                       catch() { ... } // from try @ 068f37fc with catch @ 068f360c
                       catch() { ... } // from try @ 068f3830 with catch @ 068f360c */
                    if (*(long *)(piVar14 + -2) == *(long *)puVar1) {
                      puVar11 = (undefined8 *)(lVar8 + (long)*piVar14 * 0x10 + 0x138);
                      goto LAB_068f36f0;
                    }
                    uVar13 = uVar13 - 1;
                    piVar14 = piVar14 + 4;
                  } while (uVar13 != 0);
                }
                puVar11 = (undefined8 *)FUN_02eea86c(plVar9,*(long *)puVar1,0);
LAB_068f36f0:
                (*(code *)*puVar11)(plVar9,iVar3,puVar11[1]);
                fVar16 = fVar16 + extraout_var_03;
              }
              do {
                iVar6 = iVar5;
                lVar12 = *plVar9;
                lVar8 = *(long *)puVar2;
                uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
                if (uVar13 != 0) {
                    /* try { // try from 068f372c to 069f372f has its CatchHandler @ 068f37d0 */
                  piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                  do {
                    /* try { // try from 068f3730 to 069f3737 has its CatchHandler @ 068f37e4 */
                    if (*(long *)(piVar14 + -2) == lVar8) {
                    /* try { // try from 068f3760 to 069f376f has its CatchHandler @ 068f37d8 */
                      puVar11 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
                      goto LAB_068f3764;
                    }
                    uVar13 = uVar13 - 1;
                    /* try { // try from 068f3740 to 069f374b has its CatchHandler @ 068f37dc */
                    piVar14 = piVar14 + 4;
                  } while (uVar13 != 0);
                }
                    /* try { // try from 068f374c to 069f3753 has its CatchHandler @ 068f37e0 */
                puVar11 = (undefined8 *)FUN_02eea86c(plVar9,lVar8,0);
LAB_068f3764:
                iVar5 = (*(code *)*puVar11)(plVar9,puVar11[1]);
                    /* try { // try from 068f3770 to 069f37c7 has its CatchHandler @ 068f360c */
                if (iVar5 + -1 <= iVar6) break;
                lVar8 = *plVar9;
                uVar13 = (ulong)*(ushort *)(lVar8 + 0x12e);
                if (uVar13 != 0) {
                  piVar14 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar14 + -2) == *(long *)puVar1) {
                      puVar11 = (undefined8 *)(lVar8 + (long)*piVar14 * 0x10 + 0x138);
                      goto LAB_068f37c8;
                    }
                    uVar13 = uVar13 - 1;
                    piVar14 = piVar14 + 4;
                  } while (uVar13 != 0);
                }
                puVar11 = (undefined8 *)FUN_02eea86c(plVar9,*(long *)puVar1,0);
LAB_068f37c8:
                    /* try { // try from 068f37c8 to 069f37cb has its CatchHandler @ 068f37d4 */
                    /* try { // try from 068f37cc to 069f37f7 has its CatchHandler @ 068f360c */
                iVar5 = iVar6 + 1;
                    /* catch(type#1 @ 069384f8) { ... } // from try @ 068f372c with catch @ 068f37d0
                        */
                    /* catch(type#1 @ 069384f8) { ... } // from try @ 068f37c8 with catch @ 068f37d4
                        */
                    /* catch(type#1 @ 069384f8) { ... } // from try @ 068f3760 with catch @ 068f37d8
                        */
                (*(code *)*puVar11)(plVar9,iVar5,puVar11[1]);
                    /* catch(type#1 @ 069384f8) { ... } // from try @ 068f3740 with catch @ 068f37dc
                        */
                lVar8 = *plVar9;
                    /* catch(type#1 @ 069384f8) { ... } // from try @ 068f374c with catch @ 068f37e0
                        */
                    /* catch(type#1 @ 069384f8) { ... } // from try @ 068f3730 with catch @ 068f37e4
                        */
                    /* catch(type#1 @ 069384f8) { ... } // from try @ 068f3710 with catch @ 068f37e8
                        */
                uVar13 = (ulong)*(ushort *)(lVar8 + 0x12e);
                if (uVar13 != 0) {
                  piVar14 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                  do {
                    /* try { // try from 068f37f8 to 069f37fb has its CatchHandler @ 068f3820 */
                    /* try { // try from 068f37fc to 069f3827 has its CatchHandler @ 068f360c */
                    if (*(long *)(piVar14 + -2) == *(long *)puVar1) {
                    /* try { // try from 068f3828 to 069f382f has its CatchHandler @ 068f3844 */
                      puVar11 = (undefined8 *)(lVar8 + (long)*piVar14 * 0x10 + 0x138);
                      goto LAB_068f3830;
                    }
                    uVar13 = uVar13 - 1;
                    piVar14 = piVar14 + 4;
                  } while (uVar13 != 0);
                }
                puVar11 = (undefined8 *)FUN_02eea86c(plVar9,*(long *)puVar1,0);
                    /* catch() { ... } // from try @ 068f37f8 with catch @ 068f3820 */
LAB_068f3830:
                    /* try { // try from 068f3830 to 069f383b has its CatchHandler @ 068f360c */
                    /* try { // try from 068f383c to 069f3843 has its CatchHandler @ 068f3844 */
                (*(code *)*puVar11)(plVar9,iVar5,puVar11[1]);
                lVar12 = *plVar9;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 068f3828 with catch @ 068f3844
                       catch(type#2 @ 00000000) { ... } // from try @ 068f383c with catch @ 068f3844
                        */
                lVar8 = *(long *)puVar2;
                uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
                if (uVar13 != 0) {
                  piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar14 + -2) == lVar8) {
                      puVar11 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
                      goto LAB_068f3890;
                    }
                    uVar13 = uVar13 - 1;
                    piVar14 = piVar14 + 4;
                  } while (uVar13 != 0);
                }
                puVar11 = (undefined8 *)FUN_02eea86c(plVar9,lVar8,0);
LAB_068f3890:
                fVar16 = extraout_w1_03 - (float)extraout_var_01;
                iVar7 = (*(code *)*puVar11)(plVar9,puVar11[1]);
                if (iVar5 == iVar7 + -1) {
                  lVar8 = *plVar9;
                  uVar13 = (ulong)*(ushort *)(lVar8 + 0x12e);
                  if (uVar13 != 0) {
                    piVar14 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar14 + -2) == *(long *)puVar1) {
                        puVar11 = (undefined8 *)(lVar8 + (long)*piVar14 * 0x10 + 0x138);
                        goto LAB_068f3904;
                      }
                      uVar13 = uVar13 - 1;
                      piVar14 = piVar14 + 4;
                    } while (uVar13 != 0);
                  }
                  puVar11 = (undefined8 *)FUN_02eea86c(plVar9,*(long *)puVar1,0);
LAB_068f3904:
                  (*(code *)*puVar11)(plVar9,iVar5,puVar11[1]);
                  fVar16 = fVar16 + extraout_var_04;
                }
              } while (extraout_w1_00 - fVar16 <= param_4);
              uVar10 = FUN_068ec3f8(param_5);
              puVar2 = Method_UnityEngine_XR_ARFoundation_ARTrackable<BoundedPlane,_ARPlane>__ctor__
              ;
              if (*(int *)(*(long *)
                            Method_UnityEngine_XR_ARFoundation_ARTrackable<BoundedPlane,_ARPlane>__ctor__
                          + 0xe0) == 0) {
                thunk_FUN_02f12b58(*(long *)
                                    Method_UnityEngine_XR_ARFoundation_ARTrackable<BoundedPlane,_ARPlane>__ctor__
                                  );
              }
              uVar4 = FUN_068f0af4(uVar10,iVar6);
              *(undefined4 *)(param_5 + 0x1e8) = uVar4;
              do {
                iVar5 = iVar3;
                if (iVar5 < 1) break;
                lVar8 = *plVar9;
                uVar13 = (ulong)*(ushort *)(lVar8 + 0x12e);
                if (uVar13 != 0) {
                  piVar14 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar14 + -2) == *(long *)puVar1) {
                      puVar11 = (undefined8 *)(lVar8 + (long)*piVar14 * 0x10 + 0x138);
                      goto LAB_068f39c0;
                    }
                    uVar13 = uVar13 - 1;
                    piVar14 = piVar14 + 4;
                  } while (uVar13 != 0);
                }
                puVar11 = (undefined8 *)FUN_02eea86c(plVar9,*(long *)puVar1,0);
LAB_068f39c0:
                (*(code *)*puVar11)(plVar9,iVar5 + -1,puVar11[1]);
                iVar3 = iVar5 + -1;
              } while (extraout_w1_04 - fVar16 <= param_4);
              uVar10 = FUN_068ec3f8(param_5);
              lVar8 = *(long *)puVar2;
              goto LAB_068f39ec;
            }
          }
        }
        else {
          plVar9 = (long *)FUN_06789d74(lVar8,0);
          iVar3 = *(int *)(param_5 + 0x1e8);
          lVar8 = FUN_068ec3f8(param_5);
          if (lVar8 != 0) {
            iVar5 = FUN_06789160(lVar8,0);
            if (iVar5 < iVar3) {
              lVar8 = FUN_068ec3f8(param_5);
              if (lVar8 == 0) goto LAB_068f3350;
                    /* try { // try from 068f30a0 to 069f31a3 has its CatchHandler @ 068f30a0
                       catch() { ... } // from try @ 068f30a0 with catch @ 068f30a0
                       catch() { ... } // from try @ 068f3204 with catch @ 068f30a0
                       catch() { ... } // from try @ 068f3260 with catch @ 068f30a0
                       catch() { ... } // from try @ 068f3290 with catch @ 068f30a0
                       catch() { ... } // from try @ 068f32c4 with catch @ 068f30a0 */
              iVar3 = FUN_06789160(lVar8,0);
              *(int *)(param_5 + 0x1e8) = iVar3;
            }
            else {
              iVar3 = *(int *)(param_5 + 0x1e8);
            }
            if ((iVar3 < param_6) ||
               ((iVar5 = *(int *)(param_5 + 0x1e4), iVar3 == param_6 && (0 < iVar5)))) {
              iVar3 = param_6 + -1;
              *(int *)(param_5 + 0x1e8) = param_6;
              *(int *)(param_5 + 0x1e4) = iVar3;
              puVar1 = 
              Method_UnityEngine_XR_ARFoundation_ARTrackable<XRAnchor,_ARAnchor>_get_sessionRelativeData__
              ;
              if (iVar3 < 0) {
                    /* catch(type#1 @ 069384f8) { ... } // from try @ 068f31c4 with catch @ 068f3278
                        */
                fVar15 = 0.0;
                iVar5 = param_6;
              }
              else {
                if (plVar9 == (long *)0x0) goto LAB_068f3350;
                fVar15 = 0.0;
                do {
                  lVar12 = *plVar9;
                  lVar8 = *(long *)puVar1;
                  uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
                  if (uVar13 != 0) {
                    /* try { // try from 068f31a4 to 069f31ab has its CatchHandler @ 068f327c */
                    piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar14 + -2) == lVar8) {
                    /* try { // try from 068f31d4 to 069f31df has its CatchHandler @ 068f3270 */
                        puVar11 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
                        goto LAB_068f31e0;
                      }
                      uVar13 = uVar13 - 1;
                      piVar14 = piVar14 + 4;
                    /* try { // try from 068f31c0 to 069f31c3 has its CatchHandler @ 068f3264 */
                    } while (uVar13 != 0);
                  }
                    /* try { // try from 068f31c4 to 069f31cb has its CatchHandler @ 068f3278 */
                  puVar11 = (undefined8 *)FUN_02eea86c(plVar9,lVar8,0);
LAB_068f31e0:
                    /* try { // try from 068f31e0 to 069f31e7 has its CatchHandler @ 068f3274 */
                  (*(code *)*puVar11)(plVar9,iVar3,puVar11[1]);
                  iVar3 = *(int *)(param_5 + 0x1e4);
                    /* try { // try from 068f31f4 to 069f3203 has its CatchHandler @ 068f326c */
                  if (param_3 < fVar15 + fVar16) break;
                  lVar12 = *plVar9;
                    /* try { // try from 068f3204 to 069f325b has its CatchHandler @ 068f30a0 */
                  lVar8 = *(long *)puVar1;
                  uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
                  if (uVar13 != 0) {
                    piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar14 + -2) == lVar8) {
                        puVar11 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
                        goto LAB_068f324c;
                      }
                      uVar13 = uVar13 - 1;
                      piVar14 = piVar14 + 4;
                    } while (uVar13 != 0);
                  }
                  puVar11 = (undefined8 *)FUN_02eea86c(plVar9,lVar8,0);
LAB_068f324c:
                  (*(code *)*puVar11)(plVar9,iVar3,puVar11[1]);
                    /* try { // try from 068f325c to 069f325f has its CatchHandler @ 068f3268 */
                    /* try { // try from 068f3260 to 069f328b has its CatchHandler @ 068f30a0 */
                  fVar15 = fVar15 + fVar16;
                    /* catch(type#1 @ 069384f8) { ... } // from try @ 068f31c0 with catch @ 068f3264
                        */
                  iVar3 = *(int *)(param_5 + 0x1e4) + -1;
                    /* catch(type#1 @ 069384f8) { ... } // from try @ 068f325c with catch @ 068f3268
                        */
                  *(int *)(param_5 + 0x1e4) = iVar3;
                    /* catch(type#1 @ 069384f8) { ... } // from try @ 068f31f4 with catch @ 068f326c
                        */
                } while (-1 < iVar3);
                    /* catch(type#1 @ 069384f8) { ... } // from try @ 068f31d4 with catch @ 068f3270
                        */
                iVar5 = *(int *)(param_5 + 0x1e8);
                    /* catch(type#1 @ 069384f8) { ... } // from try @ 068f31e0 with catch @ 068f3274
                        */
              }
                    /* catch(type#1 @ 069384f8) { ... } // from try @ 068f31a4 with catch @ 068f327c
                        */
              *(int *)(param_5 + 0x1e4) = iVar3 + 1;
            }
            else {
                    /* try { // try from 068f328c to 069f328f has its CatchHandler @ 068f32b4 */
              if (param_6 < iVar5) {
                    /* try { // try from 068f3290 to 069f32bb has its CatchHandler @ 068f30a0 */
                *(int *)(param_5 + 0x1e4) = param_6;
                iVar5 = param_6;
              }
              fVar15 = 0.0;
              *(int *)(param_5 + 0x1e8) = iVar5;
            }
            lVar8 = FUN_068ec3f8(param_5);
            puVar1 = 
            Method_UnityEngine_XR_ARFoundation_ARTrackable<XRAnchor,_ARAnchor>_get_sessionRelativeData__
            ;
            while (lVar8 != 0) {
                    /* try { // try from 068f32bc to 069f32c3 has its CatchHandler @ 068f32d8 */
              iVar3 = FUN_06789160(lVar8,0);
                    /* try { // try from 068f32c4 to 069f32cf has its CatchHandler @ 068f30a0 */
              if (iVar3 <= iVar5) {
                return;
              }
              if (plVar9 == (long *)0x0) break;
              lVar8 = *plVar9;
                    /* try { // try from 068f32d0 to 069f32d7 has its CatchHandler @ 068f32d8 */
              uVar4 = *(undefined4 *)(param_5 + 0x1e8);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 068f32bc with catch @ 068f32d8
                       catch(type#2 @ 00000000) { ... } // from try @ 068f32d0 with catch @ 068f32d8
                        */
              uVar13 = (ulong)*(ushort *)(lVar8 + 0x12e);
              if (uVar13 != 0) {
                piVar14 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar14 + -2) == *(long *)puVar1) {
                    puVar11 = (undefined8 *)(lVar8 + (long)*piVar14 * 0x10 + 0x138);
                    goto LAB_068f331c;
                  }
                  uVar13 = uVar13 - 1;
                  piVar14 = piVar14 + 4;
                } while (uVar13 != 0);
              }
              puVar11 = (undefined8 *)FUN_02eea86c(plVar9,*(long *)puVar1,0);
LAB_068f331c:
              (*(code *)*puVar11)(plVar9,uVar4,puVar11[1]);
              fVar15 = fVar15 + fVar16;
              if (param_3 < fVar15) {
                return;
              }
              iVar5 = *(int *)(param_5 + 0x1e8) + 1;
              *(int *)(param_5 + 0x1e8) = iVar5;
              lVar8 = FUN_068ec3f8(param_5);
            }
          }
        }
      }
    }
  }
LAB_068f3350:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


