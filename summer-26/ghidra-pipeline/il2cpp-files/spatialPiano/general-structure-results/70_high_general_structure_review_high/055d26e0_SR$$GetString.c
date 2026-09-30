/*
FUNCTION_NAME: SR$$GetString
ENTRY_POINT: 055d26e0
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;ui_interaction;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_21;ray_or_cast_sink_hits_4;ui_or_gameplay_sink_hits_8;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x055d3818) */
/* WARNING: Removing unreachable block (ram,0x055d3a64) */
/* WARNING: Removing unreachable block (ram,0x055d3a78) */
/* WARNING: Removing unreachable block (ram,0x055d3f2c) */
/* WARNING: Removing unreachable block (ram,0x055d3f40) */
/* WARNING: Removing unreachable block (ram,0x055d3f64) */
/* WARNING: Removing unreachable block (ram,0x055d3f78) */
/* WARNING: Removing unreachable block (ram,0x055d38dc) */
/* WARNING: Removing unreachable block (ram,0x055d3e54) */
/* WARNING: Removing unreachable block (ram,0x055d3e68) */
/* WARNING: Removing unreachable block (ram,0x055d2f5c) */
/* WARNING: Removing unreachable block (ram,0x055d3cb0) */
/* WARNING: Removing unreachable block (ram,0x055d3cb4) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void SR__GetString(long *param_1)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  byte bVar7;
  bool bVar8;
  bool bVar9;
  byte bVar10;
  int iVar11;
  undefined4 uVar12;
  long lVar13;
  undefined8 uVar14;
  long *plVar15;
  ulong uVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  long *plVar19;
  long *plVar20;
  uint uVar21;
  int *piVar22;
  uint uVar23;
  long *plVar24;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  long unaff_x24;
  ulong unaff_x25;
  long *plVar25;
  long unaff_x26;
  long lVar26;
  undefined8 uVar27;
  long *unaff_x27;
  long *plVar28;
  undefined8 uVar29;
  long *in_stack_00000008;
  long in_stack_00000010;
  ulong in_stack_00000018;
  long in_stack_00000020;
  long *in_stack_00000028;
  long *in_stack_00000030;
  long *plStack0000000000000088;
  undefined8 in_stack_00000090;
  long *in_stack_00000098;
  long *in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  long in_stack_000000c8;
  
code_r0x055d26e0:
  if (unaff_x25 < *(uint *)(unaff_x26 + 0x18)) {
LAB_055d2700:
    lVar13 = *(long *)(unaff_x20 + unaff_x25 * 8);
    if (lVar13 != 0) {
      plVar24 = *(long **)(unaff_x21 + 0x28);
      uVar14 = FUN_05546520(lVar13,0);
      if (plVar24 == (long *)0x0) goto LAB_055d2934;
      plVar24 = (long *)(**(code **)(*plVar24 + 0x308))
                                  (plVar24,uVar14,*(undefined8 *)(*plVar24 + 0x310));
      if (*(uint *)(unaff_x26 + 0x18) <= unaff_x25) goto LAB_055d3cb8;
      lVar13 = *(long *)(unaff_x20 + unaff_x25 * 8);
      if (lVar13 == 0) goto LAB_055d2934;
      uVar14 = FUN_0554de78(lVar13,0);
      if ((plVar24 == (long *)0x0) || (*plVar24 == *(long *)(PTR_DAT_067c9338 + 0x90))) {
        uVar14 = FUN_04f6f6b4(plVar24,*(undefined8 *)PTR_DAT_067ce970,uVar14,0);
        if ((param_1 != (long *)0x0) &&
           ((**(code **)(*param_1 + 0x518))
                      (param_1,*(undefined8 *)PTR_DAT_067d7c28,uVar14,
                       *(undefined8 *)(*param_1 + 0x520)), unaff_x27 != (long *)0x0)) {
          do {
            (**(code **)(*unaff_x27 + 0x2d8))();
            unaff_x25 = unaff_x25 + 1;
            if ((long)(int)*(uint *)(unaff_x26 + 0x18) <= (long)unaff_x25) {
              plVar24 = *(long **)(unaff_x21 + 0x78);
              if ((plVar24 == (long *)0x0) ||
                 ((**(code **)(*plVar24 + 0x2b8))
                            (plVar24,*(undefined8 *)(unaff_x21 + 0x80),
                             *(undefined8 *)(*plVar24 + 0x2c0)),
                 puVar3 = System_Collections_Generic_List<BeforeRenderHelper_OrderBlock>_TypeInfo,
                 in_stack_00000030 == (long *)0x0)) break;
              (**(code **)(*in_stack_00000030 + 0x2d8))
                        (in_stack_00000030,*(undefined8 *)(unaff_x21 + 0x78),
                         *(undefined8 *)(*in_stack_00000030 + 0x2e0));
              lVar26 = *(long *)
                        UnityEngine_XR_Hands_Gestures_XRFingerShapeMath_DegreesBetween_0000018C_BurstDirectCall_TypeInfo
              ;
              lVar13 = *(long *)(lVar26 + 0x38);
              if (lVar13 == 0) {
                FUN_02f41ef8(lVar26);
                lVar13 = *(long *)(lVar26 + 0x38);
              }
              lVar13 = *(long *)(lVar13 + 0x10);
              if ((*(ushort *)(lVar13 + 0x135) & 1) == 0) {
                lVar13 = FUN_02f41e9c();
              }
              if (*(int *)(lVar13 + 0xe4) == 0) {
                thunk_FUN_02f6670c();
              }
              lVar13 = *(long *)(*(long *)(lVar26 + 0x38) + 0x10);
              if ((*(ushort *)(lVar13 + 0x135) & 1) == 0) {
                lVar13 = FUN_02f41e9c();
              }
              plVar24 = (long *)**(undefined8 **)(lVar13 + 0xb8);
              if (unaff_x24 != 0) {
                plVar15 = *(long **)(unaff_x21 + 0x38);
                if (plVar15 == (long *)0x0) break;
                iVar11 = (**(code **)(*plVar15 + 0x298))(plVar15,*(undefined8 *)(*plVar15 + 0x2a0));
                if (0 < iVar11) {
                  plVar24 = *(long **)(unaff_x24 + 0x30);
                  if (plVar24 == (long *)0x0) break;
                  uVar12 = (**(code **)(*plVar24 + 0x1c8))
                                     (plVar24,*(undefined8 *)(*plVar24 + 0x1d0));
                  plVar24 = (long *)FUN_02f0880c(*(undefined8 *)
                                                  Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<float>_set_Value__
                                                 ,uVar12);
                  plVar15 = *(long **)(unaff_x24 + 0x30);
                  if (plVar15 == (long *)0x0) break;
                  uVar16 = 0;
                  goto LAB_055d28c0;
                }
              }
              if ((in_stack_00000018 & 0x100000000) == 0) goto LAB_055d2a24;
              plVar15 = *(long **)(unaff_x21 + 0x38);
              if (plVar15 == (long *)0x0) break;
              iVar11 = (**(code **)(*plVar15 + 0x298))(plVar15,*(undefined8 *)(*plVar15 + 0x2a0));
              if (iVar11 < 1) goto LAB_055d2a24;
              plVar24 = *(long **)(unaff_x21 + 0x38);
              if (plVar24 == (long *)0x0) break;
              plVar24 = (long *)(**(code **)(*plVar24 + 0x2e8))
                                          (plVar24,0,*(undefined8 *)(*plVar24 + 0x2f0));
              if (plVar24 != (long *)0x0) {
                bVar7 = *(byte *)(*(long *)puVar3 + 0x130);
                if ((*(byte *)(*plVar24 + 0x130) < bVar7) ||
                   (*(long *)(*(long *)(*plVar24 + 200) + (ulong)bVar7 * 8 + -8) != *(long *)puVar3)
                   ) {
                  if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000c8) {
                    /* WARNING: Subroutine does not return */
                    FUN_02f08d48(plVar24);
                  }
                  goto LAB_055d4150;
                }
              }
              FUN_055d1264();
              plVar24 = *(long **)(unaff_x21 + 0x40);
              if (plVar24 == (long *)0x0) break;
              uVar12 = (**(code **)(*plVar24 + 0x298))(plVar24,*(undefined8 *)(*plVar24 + 0x2a0));
              plVar24 = (long *)FUN_02f0880c(*(undefined8 *)
                                              Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<float>_set_Value__
                                             ,uVar12);
              plVar15 = *(long **)(unaff_x21 + 0x40);
              if (plVar15 == (long *)0x0) break;
              (**(code **)(*plVar15 + 0x368))(plVar15,plVar24,0,*(undefined8 *)(*plVar15 + 0x370));
              goto LAB_055d2a24;
            }
            if (*(uint *)(unaff_x26 + 0x18) <= unaff_x25) goto LAB_055d3cb8;
            param_1 = (long *)FUN_055d524c();
            if (*(long *)(unaff_x21 + 0x30) == 0) {
LAB_055d224c:
              if (*(uint *)(unaff_x26 + 0x18) <= unaff_x25) goto LAB_055d3cb8;
              lVar13 = *(long *)(unaff_x20 + unaff_x25 * 8);
              if (lVar13 == 0) break;
              uVar14 = FUN_05546520(lVar13,0);
              uVar16 = FUN_04f6ebb4(uVar14,0);
              if (((uVar16 & 1) == 0) && (*(int *)(unaff_x21 + 0x5c) != 2)) {
                if (*(uint *)(unaff_x26 + 0x18) <= unaff_x25) goto LAB_055d3cb8;
                lVar13 = *(long *)(unaff_x20 + unaff_x25 * 8);
                if (lVar13 == 0) break;
                FUN_05546520(lVar13,0);
                FUN_055d4780();
                param_1 = (long *)(**(code **)(*in_stack_00000028 + 0x5f8))
                                            (in_stack_00000028,
                                             *(undefined8 *)
                                              Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAffordanceStateReceiver<float2>_Awake__
                                             ,*(undefined8 *)PTR_DAT_067cb360,
                                             *(undefined8 *)PTR_DAT_067cd6c0,
                                             *(undefined8 *)(*in_stack_00000028 + 0x600));
                goto code_r0x055d26e0;
              }
            }
            else {
              if (*(uint *)(unaff_x26 + 0x18) <= unaff_x25) goto LAB_055d3cb8;
              lVar13 = *(long *)(unaff_x20 + unaff_x25 * 8);
              if (lVar13 == 0) break;
              uVar27 = *(undefined8 *)(*(long *)(unaff_x21 + 0x30) + 0x50);
              uVar14 = FUN_05546520(lVar13,0);
              uVar16 = thunk_FUN_04f6d944(uVar27,uVar14,0);
              if ((uVar16 & 1) == 0) goto LAB_055d224c;
            }
            uVar16 = (ulong)*(uint *)(unaff_x26 + 0x18);
            if (uVar16 <= unaff_x25) goto LAB_055d3cb8;
            lVar13 = *(long *)(unaff_x20 + unaff_x25 * 8);
            if (lVar13 == 0) break;
            cVar1 = *(char *)(lVar13 + 0xb0);
            bVar7 = cVar1 != '\0';
            if (*(long *)(unaff_x21 + 0x30) != 0) {
              lVar26 = *(long *)(*(long *)(unaff_x21 + 0x30) + 0x50);
              if (lVar26 == 0) break;
              if (*(int *)(lVar26 + 0x10) != 0) {
                uVar14 = FUN_05546520(lVar13,0);
                bVar7 = FUN_04f6ebb4(uVar14,0);
                uVar16 = (ulong)*(uint *)(unaff_x26 + 0x18);
                bVar7 = cVar1 != '\0' | bVar7;
              }
            }
            if (uVar16 <= unaff_x25) goto LAB_055d3cb8;
            lVar13 = *(long *)(unaff_x20 + unaff_x25 * 8);
            if (lVar13 == 0) break;
            bVar10 = FUN_0554bba0(lVar13,0);
            if (*(uint *)(unaff_x26 + 0x18) <= unaff_x25) goto LAB_055d3cb8;
            lVar13 = *(long *)(unaff_x20 + unaff_x25 * 8);
            if (lVar13 == 0) break;
            iVar11 = FUN_0554d1c8(lVar13,0);
            if ((iVar11 < 2 & (bVar10 ^ 1) & bVar7) == 1) {
              if (*(uint *)(unaff_x26 + 0x18) <= unaff_x25) goto LAB_055d3cb8;
              lVar13 = *(long *)(unaff_x20 + unaff_x25 * 8);
              if (lVar13 == 0) break;
              lVar26 = *unaff_x23;
              uVar14 = *(undefined8 *)(lVar13 + 0x108);
              uVar27 = *(undefined8 *)(lVar13 + 0x110);
              if (*(int *)(lVar26 + 0xe4) == 0) {
                thunk_FUN_02f6670c();
                lVar26 = *unaff_x23;
              }
              uVar16 = FUN_05132de0(uVar14,uVar27,*(undefined8 *)(*(long *)(lVar26 + 0xb8) + 0x10),
                                    *(undefined8 *)(*(long *)(lVar26 + 0xb8) + 0x18),0);
              if ((uVar16 & 1) != 0) {
                if (*(uint *)(unaff_x26 + 0x18) <= unaff_x25) goto LAB_055d3cb8;
                lVar13 = *(long *)(unaff_x20 + unaff_x25 * 8);
                if (lVar13 == 0) break;
                in_stack_000000b8 = *(undefined8 *)(lVar13 + 0x110);
                in_stack_000000b0 = *(undefined8 *)(lVar13 + 0x108);
                if (*(int *)(*(long *)PTR_DAT_067c9fd8 + 0xe4) == 0) {
                  thunk_FUN_02f6670c();
                }
                uVar14 = FUN_050656a0(0);
                if (*(int *)(*unaff_x23 + 0xe4) == 0) {
                  thunk_FUN_02f6670c(*unaff_x23);
                }
                uVar14 = FUN_05130530(&stack0x000000b0,uVar14,0);
                if (param_1 == (long *)0x0) break;
                (**(code **)(*param_1 + 0x518))
                          (param_1,*(undefined8 *)
                                    Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAsyncAffordanceStateReceiver<float2>__ctor__
                           ,uVar14,*(undefined8 *)(*param_1 + 0x520));
              }
              if (*(uint *)(unaff_x26 + 0x18) <= unaff_x25) goto LAB_055d3cb8;
              lVar13 = *(long *)(unaff_x20 + unaff_x25 * 8);
              if (lVar13 == 0) break;
              lVar26 = *unaff_x23;
              uVar14 = *(undefined8 *)(lVar13 + 0x118);
              uVar27 = *(undefined8 *)(lVar13 + 0x120);
              if (*(int *)(lVar26 + 0xe4) == 0) {
                thunk_FUN_02f6670c();
                lVar26 = *unaff_x23;
              }
              uVar16 = FUN_05132d50(uVar14,uVar27,*(undefined8 *)(*(long *)(lVar26 + 0xb8) + 0x20),
                                    *(undefined8 *)(*(long *)(lVar26 + 0xb8) + 0x28),0);
              if ((uVar16 & 1) != 0) {
                if (param_1 != (long *)0x0) {
                  lVar13 = *param_1;
                  uVar27 = *(undefined8 *)
                            Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAsyncAffordanceStateReceiver<float3>__ctor__
                  ;
                  uVar14 = *(undefined8 *)
                            Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<MetaSystemGestureDetector_SystemGestureState>_get_Value__
                  ;
                  goto System_Runtime_Diagnostics_EventLogger__SafeSetLogSourceName;
                }
                break;
              }
              if (*(uint *)(unaff_x26 + 0x18) <= unaff_x25) goto LAB_055d3cb8;
              lVar13 = *(long *)(unaff_x20 + unaff_x25 * 8);
              if (lVar13 == 0) break;
              lVar26 = *unaff_x23;
              uVar14 = *(undefined8 *)(lVar13 + 0x118);
              uVar27 = *(undefined8 *)(lVar13 + 0x120);
              if (*(int *)(lVar26 + 0xe4) == 0) {
                thunk_FUN_02f6670c();
                lVar26 = *unaff_x23;
              }
              uVar16 = FUN_05132de0(uVar14,uVar27,*(undefined8 *)(*(long *)(lVar26 + 0xb8) + 0x10),
                                    *(undefined8 *)(*(long *)(lVar26 + 0xb8) + 0x18),0);
              if ((uVar16 & 1) != 0) {
                if (unaff_x25 < *(uint *)(unaff_x26 + 0x18)) {
                  lVar13 = *(long *)(unaff_x20 + unaff_x25 * 8);
                  if (lVar13 != 0) {
                    in_stack_000000b8 = *(undefined8 *)(lVar13 + 0x120);
                    in_stack_000000b0 = *(undefined8 *)(lVar13 + 0x118);
                    if (*(int *)(*(long *)PTR_DAT_067c9fd8 + 0xe4) == 0) {
                      thunk_FUN_02f6670c();
                    }
                    uVar14 = FUN_050656a0(0);
                    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
                      thunk_FUN_02f6670c(*unaff_x23);
                    }
                    uVar14 = FUN_05130530(&stack0x000000b0,uVar14,0);
                    if (param_1 != (long *)0x0) {
                      lVar13 = *param_1;
                      puVar17 = (undefined8 *)
                                Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAsyncAffordanceStateReceiver<float3>__ctor__
                      ;
                      goto LAB_055d2638;
                    }
                  }
                  break;
                }
                goto LAB_055d3cb8;
              }
            }
            else {
              (**(code **)(*in_stack_00000030 + 0x2d8))
                        (in_stack_00000030,param_1,*(undefined8 *)(*in_stack_00000030 + 0x2e0));
              param_1 = (long *)(**(code **)(*in_stack_00000028 + 0x5f8))
                                          (in_stack_00000028,
                                           *(undefined8 *)
                                            Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAffordanceStateReceiver<float2>_Awake__
                                           ,*(undefined8 *)PTR_DAT_067cb360,
                                           *(undefined8 *)PTR_DAT_067cd6c0,
                                           *(undefined8 *)(*in_stack_00000028 + 0x600));
              if (*(long *)(unaff_x21 + 0x30) == 0) {
LAB_055d2508:
                if (*(uint *)(unaff_x26 + 0x18) <= unaff_x25) goto LAB_055d3cb8;
                lVar13 = *(long *)(unaff_x20 + unaff_x25 * 8);
                if (lVar13 == 0) break;
                uVar14 = FUN_05546520(lVar13,0);
                uVar16 = FUN_04f6ebb4(uVar14,0);
                if (((uVar16 & 1) == 0) && (*(int *)(unaff_x21 + 0x5c) != 2)) goto LAB_055d26f4;
              }
              else {
                if (*(uint *)(unaff_x26 + 0x18) <= unaff_x25) goto LAB_055d3cb8;
                lVar13 = *(long *)(unaff_x20 + unaff_x25 * 8);
                if (lVar13 == 0) break;
                uVar27 = *(undefined8 *)(*(long *)(unaff_x21 + 0x30) + 0x50);
                uVar14 = FUN_05546520(lVar13,0);
                uVar16 = thunk_FUN_04f6d944(uVar27,uVar14,0);
                if ((uVar16 & 1) == 0) goto LAB_055d2508;
              }
              if (*(uint *)(unaff_x26 + 0x18) <= unaff_x25) goto LAB_055d3cb8;
              lVar13 = *(long *)(unaff_x20 + unaff_x25 * 8);
              if ((lVar13 == 0) || (uVar14 = FUN_0554de78(lVar13,0), param_1 == (long *)0x0)) break;
              lVar13 = *param_1;
              puVar17 = (undefined8 *)PTR_DAT_067d7c28;
LAB_055d2638:
              uVar27 = *puVar17;
System_Runtime_Diagnostics_EventLogger__SafeSetLogSourceName:
              (**(code **)(lVar13 + 0x518))(param_1,uVar27,uVar14,*(undefined8 *)(lVar13 + 0x520));
            }
            if (unaff_x27 == (long *)0x0) break;
          } while( true );
        }
        goto LAB_055d2934;
      }
      if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000c8) {
                    /* WARNING: Subroutine does not return */
        FUN_02f08d48(plVar24,*(long *)(PTR_DAT_067c9338 + 0x90),uVar14);
      }
      goto LAB_055d4150;
    }
    goto LAB_055d2934;
  }
LAB_055d3cb8:
  if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000c8) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089d0();
  }
  goto LAB_055d4150;
  while( true ) {
    if ((lVar13 != 0) &&
       (lVar26 = thunk_FUN_02f45174(lVar13,*(undefined8 *)(*plVar24 + 0x40)), lVar26 == 0)) {
      uVar14 = thunk_FUN_02f52b60();
      if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000c8) {
                    /* WARNING: Subroutine does not return */
        FUN_02f0888c(uVar14,0);
      }
      goto LAB_055d4150;
    }
    if (*(uint *)(plVar24 + 3) <= uVar16) goto LAB_055d3cb8;
    plVar24[uVar16 + 4] = lVar13;
    plVar15 = *(long **)(unaff_x24 + 0x30);
    uVar16 = uVar16 + 1;
    if (plVar15 == (long *)0x0) break;
LAB_055d28c0:
    iVar11 = (**(code **)(*plVar15 + 0x1c8))(plVar15,*(undefined8 *)(*plVar15 + 0x1d0));
    if ((long)iVar11 <= (long)uVar16) goto LAB_055d2a24;
    plVar15 = *(long **)(unaff_x24 + 0x30);
    if ((plVar15 == (long *)0x0) ||
       (lVar13 = (**(code **)(*plVar15 + 0x208))
                           (plVar15,uVar16 & 0xffffffff,*(undefined8 *)(*plVar15 + 0x210)),
       plVar24 == (long *)0x0)) break;
  }
  goto LAB_055d2934;
LAB_055d2a24:
  puVar6 = 
  Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<MetaSystemGestureDetector_SystemGestureState>_set_Value__
  ;
  puVar4 = System_Collections_Generic_List<NetSyncVoipAttenuationValue>_TypeInfo;
  puVar3 = PTR_DAT_067cd6c0;
  if (plVar24 != (long *)0x0) {
    uVar21 = *(uint *)(plVar24 + 3);
    if (0 < (int)uVar21) {
      uVar23 = 0;
      plVar25 = (long *)0x0;
      plVar15 = (long *)0x0;
      do {
        if (uVar21 <= uVar23) goto LAB_055d3cb8;
        plVar28 = (long *)plVar24[(long)(int)uVar23 + 4];
        if (plVar28 == (long *)0x0) goto LAB_055d2934;
        uVar16 = (**(code **)(*plVar28 + 0x1d8))(plVar28,*(undefined8 *)(*plVar28 + 0x1e0));
        if (((uVar16 & 1) == 0) &&
           (lVar13 = (**(code **)(*plVar28 + 0x208))(plVar28,*(undefined8 *)(*plVar28 + 0x210)),
           puVar5 = 
           Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAffordanceStateReceiver<float2>_Awake__
           , lVar13 == 0)) {
          if (plVar15 == (long *)0x0) {
            plVar15 = (long *)(**(code **)(*in_stack_00000028 + 0x5f8))
                                        (in_stack_00000028,
                                         *(undefined8 *)
                                          Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAffordanceStateReceiver<float2>_Awake__
                                         ,*(undefined8 *)puVar4,*(undefined8 *)puVar3,
                                         *(undefined8 *)(*in_stack_00000028 + 0x600));
            (**(code **)(*in_stack_00000030 + 0x2d8))
                      (in_stack_00000030,plVar15,*(undefined8 *)(*in_stack_00000030 + 0x2e0));
            plVar25 = (long *)(**(code **)(*in_stack_00000028 + 0x5f8))
                                        (in_stack_00000028,*(undefined8 *)puVar5,
                                         *(undefined8 *)puVar6,*(undefined8 *)puVar3,
                                         *(undefined8 *)(*in_stack_00000028 + 0x600));
            if (plVar15 == (long *)0x0) goto LAB_055d2934;
            (**(code **)(*plVar15 + 0x2d8))(plVar15,plVar25,*(undefined8 *)(*plVar15 + 0x2e0));
          }
          uVar14 = FUN_055d4838();
          if (plVar25 == (long *)0x0) goto LAB_055d2934;
          (**(code **)(*plVar25 + 0x2d8))(plVar25,uVar14,*(undefined8 *)(*plVar25 + 0x2e0));
        }
        uVar21 = *(uint *)(plVar24 + 3);
        uVar23 = uVar23 + 1;
      } while ((int)uVar23 < (int)uVar21);
    }
    plVar24 = *(long **)(unaff_x21 + 0x18);
    if (plVar24 != (long *)0x0) {
      iVar11 = (**(code **)(*plVar24 + 0x3c8))(plVar24,*(undefined8 *)(*plVar24 + 0x3d0));
      bVar2 = 1 < iVar11;
      bVar8 = in_stack_000000a8._4_1_ == '\0';
      if ((*(int *)(unaff_x21 + 0x5c) == 2) || (*(int *)(unaff_x21 + 0x5c) == 4)) {
        (**(code **)(*in_stack_00000028 + 0x2d8))
                  (in_stack_00000028,in_stack_00000030,*(undefined8 *)(*in_stack_00000028 + 0x2e0));
        (**(code **)(*in_stack_00000028 + 0x638))
                  (in_stack_00000028,in_stack_00000008,*(undefined8 *)(*in_stack_00000028 + 0x640));
        goto LAB_055d2bd0;
      }
      plVar24 = *(long **)(unaff_x21 + 0x18);
      if ((plVar24 != (long *)0x0) &&
         (plVar24 = (long *)(**(code **)(*plVar24 + 0x388))
                                      (plVar24,*(undefined8 *)(*plVar24 + 0x390)),
         puVar3 = PTR_DAT_067c91b0, plVar24 != (long *)0x0)) {
        lVar13 = *plVar24;
        uVar16 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar16 != 0) {
          piVar22 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar22 + -2) == *(long *)PTR_DAT_067cb558) {
              puVar17 = (undefined8 *)(lVar13 + (long)*piVar22 * 0x10 + 0x138);
              goto LAB_055d2c60;
            }
            uVar16 = uVar16 - 1;
            piVar22 = piVar22 + 4;
          } while (uVar16 != 0);
        }
        puVar17 = (undefined8 *)FUN_02f421d0(plVar24,*(long *)PTR_DAT_067cb558,0);
LAB_055d2c60:
        in_stack_000000a0 = (long *)(*(code *)*puVar17)(plVar24,puVar17[1]);
        puVar4 = PTR_DAT_067c9338;
        while (plVar24 = in_stack_000000a0, in_stack_000000a0 != (long *)0x0) {
          lVar13 = *in_stack_000000a0;
          uVar16 = (ulong)*(ushort *)(lVar13 + 0x12e);
          if (uVar16 != 0) {
            piVar22 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar22 + -2) == *unaff_x22) {
                puVar17 = (undefined8 *)(lVar13 + (long)*piVar22 * 0x10 + 0x138);
                goto LAB_055d2cdc;
              }
              uVar16 = uVar16 - 1;
              piVar22 = piVar22 + 4;
            } while (uVar16 != 0);
          }
          puVar17 = (undefined8 *)FUN_02f421d0(in_stack_000000a0,*unaff_x22,0);
LAB_055d2cdc:
          uVar16 = (*(code *)*puVar17)(plVar24,puVar17[1]);
          plVar24 = in_stack_000000a0;
          if ((uVar16 & 1) == 0) {
            plVar24 = (long *)thunk_FUN_02f45174(in_stack_000000a0,*(undefined8 *)puVar3);
            in_stack_00000098 = plVar24;
            if (plVar24 == (long *)0x0) goto LAB_055d2f4c;
            lVar26 = *plVar24;
            lVar13 = *(long *)puVar3;
            uVar16 = (ulong)*(ushort *)(lVar26 + 0x12e);
            if (uVar16 == 0) goto LAB_055d2f24;
            piVar22 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
            goto LAB_055d2f0c;
          }
          if (in_stack_000000a0 == (long *)0x0) {
            if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000c8) {
                    /* WARNING: Subroutine does not return */
              FUN_02f089c8();
            }
            goto LAB_055d4150;
          }
          lVar13 = *in_stack_000000a0;
          uVar16 = (ulong)*(ushort *)(lVar13 + 0x12e);
          if (uVar16 != 0) {
            piVar22 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar22 + -2) == *unaff_x22) {
                puVar17 = (undefined8 *)(lVar13 + (long)(*piVar22 + 1) * 0x10 + 0x138);
                goto LAB_055d2d44;
              }
              uVar16 = uVar16 - 1;
              piVar22 = piVar22 + 4;
            } while (uVar16 != 0);
          }
          puVar17 = (undefined8 *)FUN_02f421d0(in_stack_000000a0,*unaff_x22,1);
LAB_055d2d44:
          plVar24 = (long *)(*(code *)*puVar17)(plVar24,puVar17[1]);
          if ((plVar24 != (long *)0x0) && (*plVar24 != *(long *)(puVar4 + 0x90))) {
            if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000c8) {
                    /* WARNING: Subroutine does not return */
              FUN_02f08d48(plVar24);
            }
            goto LAB_055d4150;
          }
          if (*(long *)(unaff_x21 + 0x30) == 0) {
            if (in_stack_00000020 == 0) {
              if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000c8) {
                    /* WARNING: Subroutine does not return */
                FUN_02f089c8();
              }
              goto LAB_055d4150;
            }
            uVar14 = FUN_05546520(in_stack_00000020,0);
          }
          else {
            uVar14 = *(undefined8 *)(*(long *)(unaff_x21 + 0x30) + 0x50);
          }
          uVar16 = thunk_FUN_04f6d944(plVar24,uVar14,0);
          if (((uVar16 & 1) == 0) && (uVar16 = FUN_04f6ebb4(plVar24,0), (uVar16 & 1) == 0)) {
            plVar15 = (long *)(**(code **)(*in_stack_00000028 + 0x5f8))
                                        (in_stack_00000028,
                                         *(undefined8 *)
                                          Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAffordanceStateReceiver<float2>_Awake__
                                         ,*(undefined8 *)
                                           Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<NearFarInteractor_Region>_SetValueWithoutNotify__
                                         ,*(undefined8 *)PTR_DAT_067cd6c0,
                                         *(undefined8 *)(*in_stack_00000028 + 0x600));
            if (plVar15 == (long *)0x0) {
              if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000c8) {
                    /* WARNING: Subroutine does not return */
                FUN_02f089c8();
              }
              goto LAB_055d4150;
            }
            (**(code **)(*plVar15 + 0x518))
                      (plVar15,*(undefined8 *)
                                Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<NearFarInteractor_Region>_set_Value__
                       ,plVar24,*(undefined8 *)(*plVar15 + 0x520));
            if (*(int *)(unaff_x21 + 0x5c) != 3 && (!bVar2 || !bVar8)) {
              plVar25 = *(long **)(unaff_x21 + 0x28);
              if (plVar25 == (long *)0x0) {
                if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000c8) {
                    /* WARNING: Subroutine does not return */
                  FUN_02f089c8();
                }
                goto LAB_055d4150;
              }
              uVar27 = *(undefined8 *)(unaff_x21 + 0x68);
              plVar24 = (long *)(**(code **)(*plVar25 + 0x308))
                                          (plVar25,plVar24,*(undefined8 *)(*plVar25 + 0x310));
              uVar29 = *(undefined8 *)PTR_DAT_067d0878;
              uVar14 = *(undefined8 *)
                        Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<XRInputModalityManager_InputMode>_set_Value__
              ;
              if (plVar24 == (long *)0x0) {
                uVar18 = 0;
              }
              else {
                uVar18 = (**(code **)(*plVar24 + 0x168))(plVar24,*(undefined8 *)(*plVar24 + 0x170));
              }
              uVar27 = FUN_04f6fc18(uVar27,uVar29,uVar18,
                                    *(undefined8 *)
                                     Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<float3>_Subscribe__
                                    ,0);
              (**(code **)(*plVar15 + 0x518))
                        (plVar15,uVar14,uVar27,*(undefined8 *)(*plVar15 + 0x520));
            }
            (**(code **)(*in_stack_00000030 + 0x2c8))
                      (in_stack_00000030,plVar15,*(undefined8 *)(*in_stack_00000030 + 0x2d0));
          }
        }
        if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000c8) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        goto LAB_055d4150;
      }
    }
  }
  goto LAB_055d2934;
LAB_055d378c:
  plVar24 = (long *)thunk_FUN_02f45174(plVar25,*(undefined8 *)puVar3);
  in_stack_00000098 = plVar24;
  if (plVar24 != (long *)0x0) {
    lVar13 = *plVar24;
    uVar16 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar16 != 0) {
      piVar22 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar22 + -2) == *(long *)puVar3) {
          puVar17 = (undefined8 *)(lVar13 + (long)*piVar22 * 0x10 + 0x138);
          goto FUN_055d3800;
        }
        uVar16 = uVar16 - 1;
        piVar22 = piVar22 + 4;
      } while (uVar16 != 0);
    }
    puVar17 = (undefined8 *)FUN_02f421d0(plVar24,*(long *)puVar3,0);
FUN_055d3800:
    (*(code *)*puVar17)(plVar24,puVar17[1]);
  }
  plVar24 = *(long **)(unaff_x21 + 0x48);
  if (*(int *)(unaff_x21 + 0x5c) == 3 || (!bVar2 || !bVar8)) {
    if (plVar24 == (long *)0x0) {
      if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000c8) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      goto LAB_055d4150;
    }
    (**(code **)(*plVar24 + 0x638))
              (plVar24,plStack0000000000000088,*(undefined8 *)(*plVar24 + 0x640));
  }
  else {
    if (plVar24 == (long *)0x0) {
      if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000c8) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      goto LAB_055d4150;
    }
    (**(code **)(*plVar24 + 0x3f8))
              (plVar24,plStack0000000000000088,*(undefined8 *)(*plVar24 + 0x400));
  }
  plVar24 = *(long **)(unaff_x21 + 0x48);
  if (plVar24 == (long *)0x0) {
    if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000c8) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    goto LAB_055d4150;
  }
  (**(code **)(*plVar24 + 0x2b8))(plVar24,plVar15,*(undefined8 *)(*plVar24 + 0x2c0));
  if (in_stack_000000a8._4_1_ != '\0') {
    if (plStack0000000000000088 == (long *)0x0) {
      if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000c8) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      goto LAB_055d4150;
    }
    (**(code **)(*plStack0000000000000088 + 0x1a8))
              (plStack0000000000000088,*(undefined8 *)(*plStack0000000000000088 + 0x1b0));
  }
  if (in_stack_000000a8._4_1_ != '\0') {
    if (plStack0000000000000088 == (long *)0x0) {
      if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000c8) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      goto LAB_055d4150;
    }
    (**(code **)(*plStack0000000000000088 + 0x2f8))
              (plStack0000000000000088,*(undefined8 *)(*plStack0000000000000088 + 0x300));
  }
LAB_055d38e0:
  if (in_stack_000000a0 == (long *)0x0) goto LAB_055d3da0;
  goto LAB_055d3114;
  while( true ) {
    uVar16 = uVar16 - 1;
    piVar22 = piVar22 + 4;
    if (uVar16 == 0) break;
LAB_055d3c60:
    if (*(long *)(piVar22 + -2) == *(long *)puVar3) {
      puVar17 = (undefined8 *)(lVar13 + (long)*piVar22 * 0x10 + 0x138);
      goto LAB_055d3c94;
    }
  }
LAB_055d3c78:
  puVar17 = (undefined8 *)FUN_02f421d0(plVar24,*(long *)puVar3,0);
LAB_055d3c94:
  (*(code *)*puVar17)(plVar24,puVar17[1]);
LAB_055d2bd0:
  if (in_stack_000000a8._4_1_ == '\0') {
    if (in_stack_00000008 == (long *)0x0) goto LAB_055d2934;
    (**(code **)(*in_stack_00000008 + 0x308))
              (in_stack_00000008,*(undefined8 *)(*in_stack_00000008 + 0x310));
  }
  if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000c8) {
    return;
  }
  goto LAB_055d4150;
LAB_055d26f4:
  if (*(uint *)(unaff_x26 + 0x18) <= unaff_x25) goto LAB_055d3cb8;
  goto LAB_055d2700;
  while( true ) {
    uVar16 = uVar16 - 1;
    piVar22 = piVar22 + 4;
    if (uVar16 == 0) break;
LAB_055d2f0c:
    if (*(long *)(piVar22 + -2) == lVar13) {
      puVar17 = (undefined8 *)(lVar26 + (long)*piVar22 * 0x10 + 0x138);
      goto LAB_055d2f40;
    }
  }
LAB_055d2f24:
  puVar17 = (undefined8 *)FUN_02f421d0(plVar24,lVar13,0);
LAB_055d2f40:
  (*(code *)*puVar17)(plVar24,puVar17[1]);
LAB_055d2f4c:
  puVar3 = PTR_DAT_067c91b0;
  if (*(int *)(unaff_x21 + 0x5c) != 3 && (bVar2 && bVar8)) {
    plVar24 = *(long **)(unaff_x21 + 0x18);
    if (plVar24 == (long *)0x0) goto LAB_055d2934;
    in_stack_00000090._4_4_ =
         (**(code **)(*plVar24 + 0x3c8))(plVar24,*(undefined8 *)(*plVar24 + 0x3d0));
    if (*(int *)(*(long *)PTR_DAT_067c9fd8 + 0xe4) == 0) {
      thunk_FUN_02f6670c(*(long *)PTR_DAT_067c9fd8);
    }
    uVar14 = FUN_050656a0(0);
    uVar14 = FUN_050d2d8c((long)&stack0x00000090 + 4,uVar14,0);
    (**(code **)(*in_stack_00000030 + 0x558))
              (in_stack_00000030,*(undefined8 *)Method_System_Xml_ArrayHelper<string,_Guid>__ctor__,
               *(undefined8 *)UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo
               ,uVar14,*(undefined8 *)(*in_stack_00000030 + 0x560));
  }
  (**(code **)(*in_stack_00000028 + 0x2d8))
            (in_stack_00000028,in_stack_00000030,*(undefined8 *)(*in_stack_00000028 + 0x2e0));
  bVar9 = (!bVar2 || !bVar8) || *(int *)(unaff_x21 + 0x5c) == 3;
  lVar13 = 0x400;
  if (bVar9) {
    lVar13 = 0x640;
  }
  lVar26 = 0x3f8;
  if (bVar9) {
    lVar26 = 0x638;
  }
  (**(code **)(*in_stack_00000028 + lVar26))
            (in_stack_00000028,in_stack_00000008,*(undefined8 *)(*in_stack_00000028 + lVar13));
  (**(code **)(*in_stack_00000028 + 0x2b8))
            (in_stack_00000028,in_stack_00000030,*(undefined8 *)(*in_stack_00000028 + 0x2c0));
  plVar24 = *(long **)(unaff_x21 + 0x18);
  if ((plVar24 != (long *)0x0) &&
     (plVar24 = (long *)(**(code **)(*plVar24 + 0x388))(plVar24,*(undefined8 *)(*plVar24 + 0x390)),
     plVar24 != (long *)0x0)) {
    lVar13 = *plVar24;
    uVar16 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar16 != 0) {
      piVar22 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar22 + -2) == *(long *)PTR_DAT_067cb558) {
          puVar17 = (undefined8 *)(lVar13 + (long)*piVar22 * 0x10 + 0x138);
          goto LAB_055d30ec;
        }
        uVar16 = uVar16 - 1;
        piVar22 = piVar22 + 4;
      } while (uVar16 != 0);
    }
    puVar17 = (undefined8 *)FUN_02f421d0(plVar24,*(long *)PTR_DAT_067cb558,0);
LAB_055d30ec:
    in_stack_000000a0 = (long *)(*(code *)*puVar17)(plVar24,puVar17[1]);
    if (in_stack_000000a0 != (long *)0x0) {
LAB_055d3114:
      plVar24 = in_stack_000000a0;
      lVar13 = *in_stack_000000a0;
      uVar16 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar16 != 0) {
        piVar22 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar22 + -2) == *unaff_x22) {
            puVar17 = (undefined8 *)(lVar13 + (long)*piVar22 * 0x10 + 0x138);
            goto LAB_055d3160;
          }
          uVar16 = uVar16 - 1;
          piVar22 = piVar22 + 4;
        } while (uVar16 != 0);
      }
      puVar17 = (undefined8 *)FUN_02f421d0(in_stack_000000a0,*unaff_x22,0);
LAB_055d3160:
      uVar16 = (*(code *)*puVar17)(plVar24,puVar17[1]);
      plVar24 = in_stack_000000a0;
      if ((uVar16 & 1) != 0) {
        if (in_stack_000000a0 == (long *)0x0) {
          if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000c8) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          goto LAB_055d4150;
        }
        lVar13 = *in_stack_000000a0;
        uVar16 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar16 != 0) {
          piVar22 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar22 + -2) == *unaff_x22) {
              puVar17 = (undefined8 *)(lVar13 + (long)(*piVar22 + 1) * 0x10 + 0x138);
              goto LAB_055d31c8;
            }
            uVar16 = uVar16 - 1;
            piVar22 = piVar22 + 4;
          } while (uVar16 != 0);
        }
        puVar17 = (undefined8 *)FUN_02f421d0(in_stack_000000a0,*unaff_x22,1);
LAB_055d31c8:
        plVar24 = (long *)(*(code *)*puVar17)(plVar24,puVar17[1]);
        if ((plVar24 != (long *)0x0) && (*plVar24 != *(long *)(puVar4 + 0x90))) {
          if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000c8) {
                    /* WARNING: Subroutine does not return */
            FUN_02f08d48(plVar24);
          }
          goto LAB_055d4150;
        }
        if (*(long *)(unaff_x21 + 0x30) == 0) {
          if (in_stack_00000020 == 0) {
            if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000c8) {
                    /* WARNING: Subroutine does not return */
              FUN_02f089c8();
            }
            goto LAB_055d4150;
          }
          uVar14 = FUN_05546520(in_stack_00000020,0);
        }
        else {
          uVar14 = *(undefined8 *)(*(long *)(unaff_x21 + 0x30) + 0x50);
        }
        uVar16 = thunk_FUN_04f6d944(plVar24,uVar14,0);
        if (((uVar16 & 1) != 0) || (uVar16 = FUN_04f6ebb4(plVar24,0), (uVar16 & 1) != 0))
        goto LAB_055d38e0;
        if (in_stack_000000a8._4_1_ == '\0') {
          plStack0000000000000088 = in_stack_00000008;
          goto LAB_055d33b4;
        }
        lVar13 = FUN_02f0880c(*(undefined8 *)PTR_DAT_067c9070,5);
        if (lVar13 == 0) {
          if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000c8) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
        }
        else {
          uVar21 = *(uint *)(lVar13 + 0x18);
          if (uVar21 == 0) {
            if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000c8) {
                    /* WARNING: Subroutine does not return */
              FUN_02f089d0();
            }
          }
          else {
            *(undefined8 *)(lVar13 + 0x20) = *(undefined8 *)(unaff_x21 + 0x60);
            if (uVar21 == 1) {
              if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000c8) {
                    /* WARNING: Subroutine does not return */
                FUN_02f089d0();
              }
            }
            else {
              *(undefined8 *)(lVar13 + 0x28) = *(undefined8 *)(unaff_x21 + 0x68);
              if (uVar21 < 3) {
                if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000c8) {
                    /* WARNING: Subroutine does not return */
                  FUN_02f089d0();
                }
              }
              else {
                *(undefined8 *)(lVar13 + 0x30) = *(undefined8 *)PTR_DAT_067d0878;
                plVar15 = *(long **)(unaff_x21 + 0x28);
                if (plVar15 == (long *)0x0) {
                  if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000c8) {
                    /* WARNING: Subroutine does not return */
                    FUN_02f089c8();
                  }
                }
                else {
                  plVar15 = (long *)(**(code **)(*plVar15 + 0x308))
                                              (plVar15,plVar24,*(undefined8 *)(*plVar15 + 0x310));
                  uVar14 = 0;
                  if (plVar15 != (long *)0x0) {
                    uVar14 = (**(code **)(*plVar15 + 0x168))
                                       (plVar15,*(undefined8 *)(*plVar15 + 0x170));
                  }
                  if ((*(ulong *)(lVar13 + 0x18) & 0xfffffffc) == 0) {
                    if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000c8) {
                    /* WARNING: Subroutine does not return */
                      FUN_02f089d0();
                    }
                  }
                  else {
                    *(undefined8 *)(lVar13 + 0x38) = uVar14;
                    if ((uint)*(ulong *)(lVar13 + 0x18) < 5) {
                      if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000c8) {
                    /* WARNING: Subroutine does not return */
                        FUN_02f089d0();
                      }
                    }
                    else {
                      *(undefined8 *)(lVar13 + 0x40) =
                           *(undefined8 *)
                            Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<float3>_Subscribe__
                      ;
                      uVar14 = FUN_04f6fd20(lVar13,0);
                      plStack0000000000000088 =
                           (long *)thunk_FUN_02f45270(*(undefined8 *)
                                                                                                              
                                                  System_Console_WindowsConsole_WindowsCancelHandler_TypeInfo
                                                  );
                      FUN_057d753c(plStack0000000000000088,uVar14,0,0);
                      if (in_stack_000000a8._4_1_ == '\0') {
LAB_055d33b4:
                        plVar15 = *(long **)(unaff_x21 + 0x18);
                        if (plVar15 == (long *)0x0) {
                          if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000c8) {
                    /* WARNING: Subroutine does not return */
                            FUN_02f089c8();
                          }
                          goto LAB_055d4150;
                        }
                        plVar15 = (long *)(**(code **)(*plVar15 + 0x308))
                                                    (plVar15,plVar24,
                                                     *(undefined8 *)(*plVar15 + 0x310));
                        if (plVar15 != (long *)0x0) {
                          bVar7 = *(byte *)(*(long *)
                                             System_Collections_Generic_List<TrackedDeviceGraphicRaycaster_RaycastHitData>_TypeInfo
                                           + 0x130);
                          if ((*(byte *)(*plVar15 + 0x130) < bVar7) ||
                             (*(long *)(*(long *)(*plVar15 + 200) + (ulong)bVar7 * 8 + -8) !=
                              *(long *)
                               System_Collections_Generic_List<TrackedDeviceGraphicRaycaster_RaycastHitData>_TypeInfo
                             )) {
                            if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000c8) {
                    /* WARNING: Subroutine does not return */
                              FUN_02f08d48(plVar15);
                            }
                            goto LAB_055d4150;
                          }
                        }
                        plVar25 = *(long **)(unaff_x21 + 0x48);
                        if (plVar25 == (long *)0x0) {
                          if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000c8) {
                    /* WARNING: Subroutine does not return */
                            FUN_02f089c8();
                          }
                        }
                        else {
                          (**(code **)(*plVar25 + 0x2d8))
                                    (plVar25,plVar15,*(undefined8 *)(*plVar25 + 0x2e0));
                          plVar25 = *(long **)(unaff_x21 + 0x18);
                          if (plVar25 == (long *)0x0) {
                            if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000c8) {
                    /* WARNING: Subroutine does not return */
                              FUN_02f089c8();
                            }
                          }
                          else {
                            plVar25 = (long *)(**(code **)(*plVar25 + 0x388))
                                                        (plVar25,*(undefined8 *)(*plVar25 + 0x390));
                            if (plVar25 == (long *)0x0) {
                              if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000c8) {
                    /* WARNING: Subroutine does not return */
                                FUN_02f089c8();
                              }
                            }
                            else {
                              lVar13 = *plVar25;
                              uVar16 = (ulong)*(ushort *)(lVar13 + 0x12e);
                              if (uVar16 != 0) {
                                piVar22 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                                do {
                                  if (*(long *)(piVar22 + -2) == *(long *)PTR_DAT_067cb558) {
                                    puVar17 = (undefined8 *)(lVar13 + (long)*piVar22 * 0x10 + 0x138)
                                    ;
                                    goto LAB_055d349c;
                                  }
                                  uVar16 = uVar16 - 1;
                                  piVar22 = piVar22 + 4;
                                } while (uVar16 != 0);
                              }
                              puVar17 = (undefined8 *)
                                        FUN_02f421d0(plVar25,*(long *)PTR_DAT_067cb558,0);
LAB_055d349c:
                              plVar25 = (long *)(*(code *)*puVar17)(plVar25,puVar17[1]);
                              if (plVar25 != (long *)0x0) {
                                do {
                                  lVar13 = *plVar25;
                                  uVar16 = (ulong)*(ushort *)(lVar13 + 0x12e);
                                  if (uVar16 != 0) {
                                    piVar22 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                                    do {
                                      if (*(long *)(piVar22 + -2) == *unaff_x22) {
                                        puVar17 = (undefined8 *)
                                                  (lVar13 + (long)*piVar22 * 0x10 + 0x138);
                                        goto LAB_055d3510;
                                      }
                                      uVar16 = uVar16 - 1;
                                      piVar22 = piVar22 + 4;
                                    } while (uVar16 != 0);
                                  }
                                  puVar17 = (undefined8 *)FUN_02f421d0(plVar25,*unaff_x22,0);
LAB_055d3510:
                                  uVar16 = (*(code *)*puVar17)(plVar25,puVar17[1]);
                                  if ((uVar16 & 1) == 0) goto LAB_055d378c;
                                  if (plVar25 == (long *)0x0) {
                                    if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000c8) {
                    /* WARNING: Subroutine does not return */
                                      FUN_02f089c8();
                                    }
                                    goto LAB_055d4150;
                                  }
                                  lVar13 = *plVar25;
                                  uVar16 = (ulong)*(ushort *)(lVar13 + 0x12e);
                                  if (uVar16 != 0) {
                                    piVar22 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                                    do {
                                      if (*(long *)(piVar22 + -2) == *unaff_x22) {
                                        puVar17 = (undefined8 *)
                                                  (lVar13 + (long)(*piVar22 + 1) * 0x10 + 0x138);
                                        goto LAB_055d3578;
                                      }
                                      uVar16 = uVar16 - 1;
                                      piVar22 = piVar22 + 4;
                                    } while (uVar16 != 0);
                                  }
                                  puVar17 = (undefined8 *)FUN_02f421d0(plVar25,*unaff_x22,1);
LAB_055d3578:
                                  plVar28 = (long *)(*(code *)*puVar17)(plVar25,puVar17[1]);
                                  if ((plVar28 != (long *)0x0) &&
                                     (*plVar28 != *(long *)(puVar4 + 0x90))) {
                                    if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000c8) {
                    /* WARNING: Subroutine does not return */
                                      FUN_02f08d48(plVar28);
                                    }
                                    goto LAB_055d4150;
                                  }
                                  uVar16 = thunk_FUN_04f6d944(plVar24,plVar28,0);
                                  if ((uVar16 & 1) == 0) {
                                    plVar19 = *(long **)(unaff_x21 + 0x28);
                                    if (plVar19 == (long *)0x0) {
                                      if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000c8)
                                      {
                    /* WARNING: Subroutine does not return */
                                        FUN_02f089c8();
                                      }
                                      goto LAB_055d4150;
                                    }
                                    plVar19 = (long *)(**(code **)(*plVar19 + 0x308))
                                                                (plVar19,plVar28,
                                                                 *(undefined8 *)(*plVar19 + 0x310));
                                    if (plVar19 != (long *)0x0) {
                                      if (*plVar19 != *(long *)(puVar4 + 0x90)) {
                                        if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000c8
                                           ) {
                    /* WARNING: Subroutine does not return */
                                          FUN_02f08d48(plVar19);
                                        }
                                        goto LAB_055d4150;
                                      }
                                      uVar14 = FUN_04f65260(*(undefined8 *)
                                                                                                                          
                                                  System_Nullable<OpenXRAnalytics_InitializeEvent>_TypeInfo
                                                  ,plVar19,0);
                                      if (plVar15 == (long *)0x0) {
                                        if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000c8
                                           ) {
                    /* WARNING: Subroutine does not return */
                                          FUN_02f089c8(uVar14,uVar14);
                                        }
                                        goto LAB_055d4150;
                                      }
                                      (**(code **)(*plVar15 + 0x518))
                                                (plVar15,uVar14,plVar28,
                                                 *(undefined8 *)(*plVar15 + 0x520));
                                      plVar20 = *(long **)(unaff_x21 + 0x48);
                                      if (plVar20 == (long *)0x0) {
                                        if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000c8
                                           ) {
                    /* WARNING: Subroutine does not return */
                                          FUN_02f089c8();
                                        }
                                        goto LAB_055d4150;
                                      }
                                      plVar20 = (long *)(**(code **)(*plVar20 + 0x5f8))
                                                                  (plVar20,*(undefined8 *)
                                                                                                                                                        
                                                  Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAffordanceStateReceiver<float2>_Awake__
                                                  ,*(undefined8 *)
                                                                                                        
                                                  Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<NearFarInteractor_Region>_SetValueWithoutNotify__
                                                  ,*(undefined8 *)PTR_DAT_067cd6c0,
                                                  *(undefined8 *)(*plVar20 + 0x600));
                                      if (plVar20 == (long *)0x0) {
                                        if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000c8
                                           ) {
                    /* WARNING: Subroutine does not return */
                                          FUN_02f089c8();
                                        }
                                        goto LAB_055d4150;
                                      }
                                      (**(code **)(*plVar20 + 0x518))
                                                (plVar20,*(undefined8 *)
                                                                                                                    
                                                  Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<NearFarInteractor_Region>_set_Value__
                                                 ,plVar28,*(undefined8 *)(*plVar20 + 0x520));
                                      if (*(int *)(unaff_x21 + 0x5c) != 3 && (!bVar2 || !bVar8)) {
                                        if (*(long *)(unaff_x21 + 0x30) == 0) {
                                          if (in_stack_00000020 == 0) {
                                            if (*(long *)(in_stack_00000010 + 0x28) ==
                                                in_stack_000000c8) {
                    /* WARNING: Subroutine does not return */
                                              FUN_02f089c8();
                                            }
                                            goto LAB_055d4150;
                                          }
                                          uVar14 = FUN_05546520(in_stack_00000020,0);
                                        }
                                        else {
                                          uVar14 = *(undefined8 *)
                                                    (*(long *)(unaff_x21 + 0x30) + 0x50);
                                        }
                                        uVar16 = thunk_FUN_04f6d944(plVar28,uVar14,0);
                                        if ((uVar16 & 1) == 0) {
                                          uVar14 = FUN_04f6fc18(*(undefined8 *)(unaff_x21 + 0x68),
                                                                *(undefined8 *)PTR_DAT_067d0878,
                                                                plVar19,*(undefined8 *)
                                                                                                                                                  
                                                  Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<float3>_Subscribe__
                                                  ,0);
                                          (**(code **)(*plVar20 + 0x518))
                                                    (plVar20,*(undefined8 *)
                                                                                                                            
                                                  Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<XRInputModalityManager_InputMode>_set_Value__
                                                  ,uVar14,*(undefined8 *)(*plVar20 + 0x520));
                                        }
                                        else {
                                          uVar14 = FUN_04f65260(*(undefined8 *)(unaff_x21 + 0x68),
                                                                *(undefined8 *)(unaff_x21 + 0x70),0)
                                          ;
                                          (**(code **)(*plVar20 + 0x518))
                                                    (plVar20,*(undefined8 *)
                                                                                                                            
                                                  Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<XRInputModalityManager_InputMode>_set_Value__
                                                  ,uVar14,*(undefined8 *)(*plVar20 + 0x520));
                                        }
                                      }
                                      (**(code **)(*plVar15 + 0x2c8))
                                                (plVar15,plVar20,*(undefined8 *)(*plVar15 + 0x2d0));
                                    }
                                  }
                                  if (plVar25 == (long *)0x0) break;
                                } while( true );
                              }
                              if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000c8) {
                    /* WARNING: Subroutine does not return */
                                FUN_02f089c8();
                              }
                            }
                          }
                        }
                        goto LAB_055d4150;
                      }
                      if (plStack0000000000000088 != (long *)0x0) {
                        bVar7 = *(byte *)(*(long *)
                                           System_Console_WindowsConsole_WindowsCancelHandler_TypeInfo
                                         + 0x130);
                        if (((*(byte *)(*plStack0000000000000088 + 0x130) < bVar7) ||
                            (*(long *)(*(long *)(*plStack0000000000000088 + 200) + (ulong)bVar7 * 8
                                      + -8) !=
                             *(long *)System_Console_WindowsConsole_WindowsCancelHandler_TypeInfo))
                           || (FUN_057d7648(plStack0000000000000088,1,0),
                              plStack0000000000000088 != (long *)0x0)) {
                          (**(code **)(*plStack0000000000000088 + 0x198))
                                    (plStack0000000000000088,1,
                                     *(undefined8 *)(*plStack0000000000000088 + 0x1a0));
                          goto LAB_055d33b4;
                        }
                      }
                      if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000c8) {
                    /* WARNING: Subroutine does not return */
                        FUN_02f089c8();
                      }
                    }
                  }
                }
              }
            }
          }
        }
        goto LAB_055d4150;
      }
      plVar24 = (long *)thunk_FUN_02f45174(in_stack_000000a0,*(undefined8 *)puVar3);
      in_stack_00000098 = plVar24;
      if (plVar24 == (long *)0x0) goto LAB_055d2bd0;
      lVar13 = *plVar24;
      uVar16 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar16 == 0) goto LAB_055d3c78;
      piVar22 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      goto LAB_055d3c60;
    }
LAB_055d3da0:
    if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000c8) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    goto LAB_055d4150;
  }
LAB_055d2934:
  if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000c8) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
LAB_055d4150:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


