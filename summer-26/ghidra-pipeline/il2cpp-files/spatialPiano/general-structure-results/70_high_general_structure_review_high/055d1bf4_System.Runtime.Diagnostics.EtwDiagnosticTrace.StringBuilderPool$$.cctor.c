/*
FUNCTION_NAME: System.Runtime.Diagnostics.EtwDiagnosticTrace.StringBuilderPool$$.cctor
ENTRY_POINT: 055d1bf4
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;ui_interaction;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_21;ray_or_cast_sink_hits_4;ui_or_gameplay_sink_hits_9;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x055d3818) */
/* WARNING: Removing unreachable block (ram,0x055d2f5c) */
/* WARNING: Removing unreachable block (ram,0x055d1d48) */
/* WARNING: Removing unreachable block (ram,0x055d1d4c) */
/* WARNING: Removing unreachable block (ram,0x055d1d54) */
/* WARNING: Removing unreachable block (ram,0x055d1d58) */
/* WARNING: Removing unreachable block (ram,0x055d1d64) */
/* WARNING: Removing unreachable block (ram,0x055d1d7c) */
/* WARNING: Removing unreachable block (ram,0x055d3a64) */
/* WARNING: Removing unreachable block (ram,0x055d3a78) */
/* WARNING: Removing unreachable block (ram,0x055d3f2c) */
/* WARNING: Removing unreachable block (ram,0x055d3f40) */
/* WARNING: Removing unreachable block (ram,0x055d1d44) */
/* WARNING: Removing unreachable block (ram,0x055d3e20) */
/* WARNING: Removing unreachable block (ram,0x055d3e34) */
/* WARNING: Removing unreachable block (ram,0x055d3f64) */
/* WARNING: Removing unreachable block (ram,0x055d3f78) */
/* WARNING: Removing unreachable block (ram,0x055d3e54) */
/* WARNING: Removing unreachable block (ram,0x055d3e68) */
/* WARNING: Removing unreachable block (ram,0x055d38dc) */
/* WARNING: Removing unreachable block (ram,0x055d3cb0) */
/* WARNING: Removing unreachable block (ram,0x055d3cb4) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void System_Runtime_Diagnostics_EtwDiagnosticTrace_StringBuilderPool___cctor(void)

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
  undefined8 *puVar13;
  long *plVar14;
  long *plVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long lVar18;
  undefined8 uVar19;
  long *plVar20;
  uint uVar21;
  long lVar22;
  long *plVar23;
  ulong uVar24;
  ulong uVar25;
  long lVar26;
  int *piVar27;
  uint uVar28;
  long *unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  long unaff_x24;
  long *plVar29;
  long lVar30;
  uint unaff_w27;
  long *plVar31;
  undefined8 uVar32;
  long *unaff_x29;
  long *in_stack_00000008;
  long in_stack_00000010;
  long in_stack_00000020;
  long *in_stack_00000028;
  long *plStack0000000000000088;
  undefined8 in_stack_00000090;
  long *in_stack_00000098;
  long *in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  long in_stack_000000c8;
  
  do {
    lVar22 = *unaff_x23;
    uVar25 = (ulong)*(ushort *)(lVar22 + 0x12e);
    if (uVar25 != 0) {
      piVar27 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
      do {
        if (*(long *)(piVar27 + -2) == *unaff_x22) {
          puVar13 = (undefined8 *)(lVar22 + (long)(*piVar27 + 1) * 0x10 + 0x138);
          goto LAB_055d1c44;
        }
        uVar25 = uVar25 - 1;
        piVar27 = piVar27 + 4;
      } while (uVar25 != 0);
    }
    puVar13 = (undefined8 *)FUN_02f421d0(unaff_x23,*unaff_x22,1);
LAB_055d1c44:
    plVar14 = (long *)(*(code *)*puVar13)(unaff_x23,puVar13[1]);
    if (plVar14 != (long *)0x0) {
      bVar7 = *(byte *)(*unaff_x19 + 0x130);
      if ((*(byte *)(*plVar14 + 0x130) < bVar7) ||
         (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar7 * 8 + -8) != *unaff_x19)) {
        if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000c8) {
                    /* WARNING: Subroutine does not return */
          FUN_02f08d48(plVar14);
        }
        goto LAB_055d4150;
      }
    }
    plVar15 = *(long **)(unaff_x21 + 0x38);
    if (plVar15 == (long *)0x0) {
      if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000c8) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      goto LAB_055d4150;
    }
    (**(code **)(*plVar15 + 0x308))(plVar15,plVar14,*(undefined8 *)(*plVar15 + 0x310));
    plVar14 = in_stack_000000a0;
    if (in_stack_000000a0 == (long *)0x0) {
      if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000c8) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      goto LAB_055d4150;
    }
    lVar22 = *in_stack_000000a0;
    uVar25 = (ulong)*(ushort *)(lVar22 + 0x12e);
    if (uVar25 != 0) {
      piVar27 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
      do {
        if (*(long *)(piVar27 + -2) == *unaff_x22) {
          puVar13 = (undefined8 *)(lVar22 + (long)*piVar27 * 0x10 + 0x138);
          goto LAB_055d1bdc;
        }
        uVar25 = uVar25 - 1;
        piVar27 = piVar27 + 4;
      } while (uVar25 != 0);
    }
    puVar13 = (undefined8 *)FUN_02f421d0(in_stack_000000a0,*unaff_x22,0);
LAB_055d1bdc:
    uVar25 = (*(code *)*puVar13)(plVar14,puVar13[1]);
    if ((uVar25 & 1) == 0) {
      plVar14 = (long *)thunk_FUN_02f45174(in_stack_000000a0,*(undefined8 *)PTR_DAT_067c91b0);
      in_stack_00000098 = plVar14;
      if (plVar14 == (long *)0x0) goto LAB_055d1d34;
      lVar22 = *plVar14;
      uVar25 = (ulong)*(ushort *)(lVar22 + 0x12e);
      if (uVar25 == 0) goto LAB_055d1d0c;
      piVar27 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
      goto LAB_055d1cf4;
    }
    unaff_x23 = in_stack_000000a0;
  } while (in_stack_000000a0 != (long *)0x0);
  if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000c8) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  goto LAB_055d4150;
  while( true ) {
    uVar25 = uVar25 - 1;
    piVar27 = piVar27 + 4;
    if (uVar25 == 0) break;
LAB_055d1cf4:
    if (*(long *)(piVar27 + -2) == *(long *)PTR_DAT_067c91b0) {
      puVar13 = (undefined8 *)(lVar22 + (long)*piVar27 * 0x10 + 0x138);
      goto LAB_055d1d28;
    }
  }
LAB_055d1d0c:
  puVar13 = (undefined8 *)FUN_02f421d0(plVar14,*(long *)PTR_DAT_067c91b0,0);
LAB_055d1d28:
  (*(code *)*puVar13)(plVar14,puVar13[1]);
LAB_055d1d34:
  puVar3 = System_Collections_Generic_IEnumerator<Substring>_TypeInfo;
  uVar16 = *unaff_x20;
  *(long **)(unaff_x21 + 0x48) = unaff_x29;
  uVar16 = thunk_FUN_02f45270(uVar16);
  FUN_0508402c(uVar16,0);
  uVar17 = *unaff_x20;
  *(undefined8 *)(unaff_x21 + 0x18) = uVar16;
  uVar16 = thunk_FUN_02f45270(uVar17);
  FUN_0508402c(uVar16,0);
  *(undefined8 *)(unaff_x21 + 0x28) = uVar16;
  plVar14 = (long *)(**(code **)(*unaff_x29 + 0x5f8))
                              (unaff_x29,
                               *(undefined8 *)
                                Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAffordanceStateReceiver<float2>_Awake__
                               ,*(undefined8 *)puVar3,*(undefined8 *)PTR_DAT_067cd6c0,
                               *(undefined8 *)(*unaff_x29 + 0x600));
  *(long **)(unaff_x21 + 0x50) = plVar14;
  if (*(long *)(unaff_x21 + 0x30) == 0) {
    if (*(int *)(*(long *)Oculus_Interaction_MAction<PokeInteractor>_TypeInfo + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar16 = *(undefined8 *)
              Method_Unity_AppUI_UI_AnchorPopup<MenuBuilder>_InvokeDismissedEventHandlers__;
  }
  else {
    uVar16 = *(undefined8 *)(*(long *)(unaff_x21 + 0x30) + 0x40);
    if (*(int *)(*(long *)Oculus_Interaction_MAction<PokeInteractor>_TypeInfo + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
  }
  uVar16 = FUN_05819fc8(uVar16,0);
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 0x518))
              (plVar14,*(undefined8 *)PTR_DAT_067cb550,uVar16,*(undefined8 *)(*plVar14 + 0x520));
    if (*(long *)(unaff_x21 + 0x30) == 0) {
      if (in_stack_00000020 == 0) goto LAB_055d2934;
      FUN_05546520(in_stack_00000020,0);
    }
    FUN_055cf8e4();
    if (*(int *)(unaff_x21 + 0x5c) == 2) {
      plVar15 = *(long **)(unaff_x21 + 0x18);
      if (*(long *)(unaff_x21 + 0x30) == 0) {
        if ((in_stack_00000020 != 0) &&
           (uVar16 = FUN_05546520(in_stack_00000020,0), plVar15 != (long *)0x0)) goto LAB_055d1eec;
      }
      else if (plVar15 != (long *)0x0) {
        uVar16 = *(undefined8 *)(*(long *)(unaff_x21 + 0x30) + 0x50);
LAB_055d1eec:
        (**(code **)(*plVar15 + 0x318))(plVar15,uVar16,plVar14,*(undefined8 *)(*plVar15 + 800));
        if (*(int *)(unaff_x21 + 0x5c) != 2) goto LAB_055d1f10;
        goto joined_r0x055d1ffc;
      }
    }
    else {
LAB_055d1f10:
      if (*(long *)(unaff_x21 + 0x30) == 0) goto joined_r0x055d1ffc;
      plVar15 = *(long **)(unaff_x21 + 0x18);
      if (plVar15 != (long *)0x0) {
        (**(code **)(*plVar15 + 0x318))
                  (plVar15,*(undefined8 *)(*(long *)(unaff_x21 + 0x30) + 0x50),plVar14,
                   *(undefined8 *)(*plVar15 + 800));
        if ((*(long *)(unaff_x21 + 0x30) != 0) &&
           (lVar22 = *(long *)(*(long *)(unaff_x21 + 0x30) + 0x50), lVar22 != 0)) {
          if (*(int *)(lVar22 + 0x10) == 0) {
            plVar15 = *(long **)(unaff_x21 + 0x28);
            if (plVar15 != (long *)0x0) {
              (**(code **)(*plVar15 + 0x318))(plVar15,lVar22,0,*(undefined8 *)(*plVar15 + 800));
              goto joined_r0x055d1ffc;
            }
          }
          else {
            (**(code **)(*plVar14 + 0x518))
                      (plVar14,*(undefined8 *)
                                Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<float>_BroadcastValue__
                       ,lVar22,*(undefined8 *)(*plVar14 + 0x520));
            if ((*(long *)(unaff_x21 + 0x30) != 0) &&
               (plVar15 = *(long **)(unaff_x21 + 0x28), plVar15 != (long *)0x0)) {
              (**(code **)(*plVar15 + 0x318))
                        (plVar15,*(undefined8 *)(*(long *)(unaff_x21 + 0x30) + 0x50),
                         *(undefined8 *)
                          Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<float3>_SubscribeAndUpdate__
                         ,*(undefined8 *)(*plVar15 + 800));
joined_r0x055d1ffc:
              if (unaff_x24 == 0) {
                FUN_055cf394();
                if (*(int *)(unaff_x21 + 0x5c) != 2) {
                  FUN_055d0848();
                }
                lVar22 = FUN_055d158c();
              }
              else {
                FUN_055cf48c();
                if (*(int *)(unaff_x21 + 0x5c) != 2) {
                  FUN_055cfbd0();
                }
                lVar22 = FUN_05572efc();
              }
              if (lVar22 != 0) {
                if ((*(long *)(lVar22 + 0x18) == 0) ||
                   ((*(uint *)(unaff_x21 + 0x5c) & 0xfffffffe) == 4)) {
                  FUN_055d4158();
                  (**(code **)(*plVar14 + 0x2d8))
                            (plVar14,*(undefined8 *)(unaff_x21 + 0x78),
                             *(undefined8 *)(*plVar14 + 0x2e0));
                  FUN_055cd6cc();
                  if (unaff_x24 != 0) {
                    FUN_055ccff4(*(undefined8 *)(unaff_x24 + 0x38),*(undefined8 *)(unaff_x21 + 0x78)
                                 ,0);
                    (**(code **)(*unaff_x29 + 0x2d8))
                              (unaff_x29,plVar14,*(undefined8 *)(*unaff_x29 + 0x2e0));
                    (**(code **)(*unaff_x29 + 0x638))
                              (unaff_x29,in_stack_00000008,*(undefined8 *)(*unaff_x29 + 0x640));
                    if (in_stack_00000008 != (long *)0x0) goto LAB_055d20d8;
                  }
                }
                else {
                  plVar15 = (long *)FUN_055d4158();
                  uVar16 = (**(code **)(*unaff_x29 + 0x5f8))
                                     (unaff_x29,
                                      *(undefined8 *)
                                       Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAffordanceStateReceiver<float2>_Awake__
                                      ,*(undefined8 *)
                                        Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<NearFarInteractor_Region>_BroadcastValue__
                                      ,*(undefined8 *)PTR_DAT_067cd6c0,
                                      *(undefined8 *)(*unaff_x29 + 0x600));
                  plVar23 = *(long **)(unaff_x21 + 0x78);
                  *(undefined8 *)(unaff_x21 + 0x80) = uVar16;
                  if (plVar23 != (long *)0x0) {
                    (**(code **)(*plVar23 + 0x2d8))
                              (plVar23,uVar16,*(undefined8 *)(*plVar23 + 0x2e0));
                    if (*(long *)(unaff_x21 + 0x30) != 0) {
                      FUN_055cd6cc();
                      if (*(long *)(unaff_x21 + 0x30) == 0) goto LAB_055d2934;
                      FUN_055ccff4(*(undefined8 *)(*(long *)(unaff_x21 + 0x30) + 0x38),
                                   *(undefined8 *)(unaff_x21 + 0x78),0);
                    }
                    puVar3 = PTR_DAT_067c9990;
                    if (0 < (int)*(ulong *)(lVar22 + 0x18)) {
                      uVar25 = 0;
                      uVar24 = *(ulong *)(lVar22 + 0x18) & 0xffffffff;
                      lVar30 = lVar22 + 0x20;
                      do {
                        if (uVar24 <= uVar25) goto LAB_055d3cb8;
                        plVar23 = (long *)FUN_055d524c();
                        if (*(long *)(unaff_x21 + 0x30) == 0) {
LAB_055d224c:
                          if (*(uint *)(lVar22 + 0x18) <= uVar25) goto LAB_055d3cb8;
                          lVar18 = *(long *)(lVar30 + uVar25 * 8);
                          if (lVar18 == 0) goto LAB_055d2934;
                          uVar16 = FUN_05546520(lVar18,0);
                          uVar24 = FUN_04f6ebb4(uVar16,0);
                          if (((uVar24 & 1) != 0) || (*(int *)(unaff_x21 + 0x5c) == 2))
                          goto LAB_055d2280;
                          if (*(uint *)(lVar22 + 0x18) <= uVar25) goto LAB_055d3cb8;
                          lVar18 = *(long *)(lVar30 + uVar25 * 8);
                          if (lVar18 == 0) goto LAB_055d2934;
                          FUN_05546520(lVar18,0);
                          FUN_055d4780();
                          plVar23 = (long *)(**(code **)(*unaff_x29 + 0x5f8))
                                                      (unaff_x29,
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAffordanceStateReceiver<float2>_Awake__
                                                  ,*(undefined8 *)PTR_DAT_067cb360,
                                                  *(undefined8 *)PTR_DAT_067cd6c0,
                                                  *(undefined8 *)(*unaff_x29 + 0x600));
                          if (*(uint *)(lVar22 + 0x18) <= uVar25) goto LAB_055d3cb8;
LAB_055d2700:
                          lVar18 = *(long *)(lVar30 + uVar25 * 8);
                          if (lVar18 == 0) goto LAB_055d2934;
                          plVar29 = *(long **)(unaff_x21 + 0x28);
                          uVar16 = FUN_05546520(lVar18,0);
                          if (plVar29 == (long *)0x0) goto LAB_055d2934;
                          plVar29 = (long *)(**(code **)(*plVar29 + 0x308))
                                                      (plVar29,uVar16,
                                                       *(undefined8 *)(*plVar29 + 0x310));
                          if (*(uint *)(lVar22 + 0x18) <= uVar25) goto LAB_055d3cb8;
                          lVar18 = *(long *)(lVar30 + uVar25 * 8);
                          if (lVar18 == 0) goto LAB_055d2934;
                          uVar16 = FUN_0554de78(lVar18,0);
                          if ((plVar29 != (long *)0x0) &&
                             (*plVar29 != *(long *)(PTR_DAT_067c9338 + 0x90))) {
                            if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000c8) {
                    /* WARNING: Subroutine does not return */
                              FUN_02f08d48(plVar29,*(long *)(PTR_DAT_067c9338 + 0x90),uVar16);
                            }
                            goto LAB_055d4150;
                          }
                          uVar16 = FUN_04f6f6b4(plVar29,*(undefined8 *)PTR_DAT_067ce970,uVar16,0);
                          if (plVar23 == (long *)0x0) goto LAB_055d2934;
                          (**(code **)(*plVar23 + 0x518))
                                    (plVar23,*(undefined8 *)PTR_DAT_067d7c28,uVar16,
                                     *(undefined8 *)(*plVar23 + 0x520));
                        }
                        else {
                          if (*(uint *)(lVar22 + 0x18) <= uVar25) goto LAB_055d3cb8;
                          lVar18 = *(long *)(lVar30 + uVar25 * 8);
                          if (lVar18 == 0) goto LAB_055d2934;
                          uVar17 = *(undefined8 *)(*(long *)(unaff_x21 + 0x30) + 0x50);
                          uVar16 = FUN_05546520(lVar18,0);
                          uVar24 = thunk_FUN_04f6d944(uVar17,uVar16,0);
                          if ((uVar24 & 1) == 0) goto LAB_055d224c;
LAB_055d2280:
                          uVar24 = (ulong)*(uint *)(lVar22 + 0x18);
                          if (uVar24 <= uVar25) goto LAB_055d3cb8;
                          lVar18 = *(long *)(lVar30 + uVar25 * 8);
                          if (lVar18 == 0) goto LAB_055d2934;
                          cVar1 = *(char *)(lVar18 + 0xb0);
                          bVar7 = cVar1 != '\0';
                          if (*(long *)(unaff_x21 + 0x30) != 0) {
                            lVar26 = *(long *)(*(long *)(unaff_x21 + 0x30) + 0x50);
                            if (lVar26 == 0) goto LAB_055d2934;
                            if (*(int *)(lVar26 + 0x10) != 0) {
                              uVar16 = FUN_05546520(lVar18,0);
                              bVar7 = FUN_04f6ebb4(uVar16,0);
                              uVar24 = (ulong)*(uint *)(lVar22 + 0x18);
                              bVar7 = cVar1 != '\0' | bVar7;
                            }
                          }
                          if (uVar24 <= uVar25) goto LAB_055d3cb8;
                          lVar18 = *(long *)(lVar30 + uVar25 * 8);
                          if (lVar18 == 0) goto LAB_055d2934;
                          bVar10 = FUN_0554bba0(lVar18,0);
                          if (*(uint *)(lVar22 + 0x18) <= uVar25) goto LAB_055d3cb8;
                          lVar18 = *(long *)(lVar30 + uVar25 * 8);
                          if (lVar18 == 0) goto LAB_055d2934;
                          iVar11 = FUN_0554d1c8(lVar18,0);
                          if ((iVar11 < 2 & (bVar10 ^ 1) & bVar7) == 1) {
                            if (*(uint *)(lVar22 + 0x18) <= uVar25) goto LAB_055d3cb8;
                            lVar18 = *(long *)(lVar30 + uVar25 * 8);
                            if (lVar18 == 0) goto LAB_055d2934;
                            lVar26 = *(long *)puVar3;
                            uVar16 = *(undefined8 *)(lVar18 + 0x108);
                            uVar17 = *(undefined8 *)(lVar18 + 0x110);
                            if (*(int *)(lVar26 + 0xe4) == 0) {
                              thunk_FUN_02f6670c();
                              lVar26 = *(long *)puVar3;
                            }
                            uVar24 = FUN_05132de0(uVar16,uVar17,
                                                  *(undefined8 *)(*(long *)(lVar26 + 0xb8) + 0x10),
                                                  *(undefined8 *)(*(long *)(lVar26 + 0xb8) + 0x18),0
                                                 );
                            if ((uVar24 & 1) != 0) {
                              if (*(uint *)(lVar22 + 0x18) <= uVar25) goto LAB_055d3cb8;
                              lVar18 = *(long *)(lVar30 + uVar25 * 8);
                              if (lVar18 == 0) goto LAB_055d2934;
                              in_stack_000000b8 = *(undefined8 *)(lVar18 + 0x110);
                              in_stack_000000b0 = *(undefined8 *)(lVar18 + 0x108);
                              if (*(int *)(*(long *)PTR_DAT_067c9fd8 + 0xe4) == 0) {
                                thunk_FUN_02f6670c();
                              }
                              uVar16 = FUN_050656a0(0);
                              if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                                thunk_FUN_02f6670c(*(long *)puVar3);
                              }
                              uVar16 = FUN_05130530(&stack0x000000b0,uVar16,0);
                              if (plVar23 == (long *)0x0) goto LAB_055d2934;
                              (**(code **)(*plVar23 + 0x518))
                                        (plVar23,*(undefined8 *)
                                                  Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAsyncAffordanceStateReceiver<float2>__ctor__
                                         ,uVar16,*(undefined8 *)(*plVar23 + 0x520));
                            }
                            if (*(uint *)(lVar22 + 0x18) <= uVar25) goto LAB_055d3cb8;
                            lVar18 = *(long *)(lVar30 + uVar25 * 8);
                            if (lVar18 == 0) goto LAB_055d2934;
                            lVar26 = *(long *)puVar3;
                            uVar16 = *(undefined8 *)(lVar18 + 0x118);
                            uVar17 = *(undefined8 *)(lVar18 + 0x120);
                            if (*(int *)(lVar26 + 0xe4) == 0) {
                              thunk_FUN_02f6670c();
                              lVar26 = *(long *)puVar3;
                            }
                            uVar24 = FUN_05132d50(uVar16,uVar17,
                                                  *(undefined8 *)(*(long *)(lVar26 + 0xb8) + 0x20),
                                                  *(undefined8 *)(*(long *)(lVar26 + 0xb8) + 0x28),0
                                                 );
                            if ((uVar24 & 1) == 0) {
                              if (uVar25 < *(uint *)(lVar22 + 0x18)) {
                                lVar18 = *(long *)(lVar30 + uVar25 * 8);
                                if (lVar18 == 0) goto LAB_055d2934;
                                lVar26 = *(long *)puVar3;
                                uVar16 = *(undefined8 *)(lVar18 + 0x118);
                                uVar17 = *(undefined8 *)(lVar18 + 0x120);
                                if (*(int *)(lVar26 + 0xe4) == 0) {
                                  thunk_FUN_02f6670c();
                                  lVar26 = *(long *)puVar3;
                                }
                                uVar24 = FUN_05132de0(uVar16,uVar17,
                                                      *(undefined8 *)
                                                       (*(long *)(lVar26 + 0xb8) + 0x10),
                                                      *(undefined8 *)
                                                       (*(long *)(lVar26 + 0xb8) + 0x18),0);
                                if ((uVar24 & 1) == 0) goto joined_r0x055d27b4;
                                if (uVar25 < *(uint *)(lVar22 + 0x18)) {
                                  lVar18 = *(long *)(lVar30 + uVar25 * 8);
                                  if (lVar18 != 0) {
                                    in_stack_000000b8 = *(undefined8 *)(lVar18 + 0x120);
                                    in_stack_000000b0 = *(undefined8 *)(lVar18 + 0x118);
                                    if (*(int *)(*(long *)PTR_DAT_067c9fd8 + 0xe4) == 0) {
                                      thunk_FUN_02f6670c();
                                    }
                                    uVar16 = FUN_050656a0(0);
                                    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                                      thunk_FUN_02f6670c(*(long *)puVar3);
                                    }
                                    uVar16 = FUN_05130530(&stack0x000000b0,uVar16,0);
                                    if (plVar23 != (long *)0x0) {
                                      lVar18 = *plVar23;
                                      puVar13 = (undefined8 *)
                                                Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAsyncAffordanceStateReceiver<float3>__ctor__
                                      ;
                                      goto LAB_055d2638;
                                    }
                                  }
                                  goto LAB_055d2934;
                                }
                              }
                              goto LAB_055d3cb8;
                            }
                            if (plVar23 == (long *)0x0) goto LAB_055d2934;
                            lVar18 = *plVar23;
                            uVar17 = *(undefined8 *)
                                      Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAsyncAffordanceStateReceiver<float3>__ctor__
                            ;
                            uVar16 = *(undefined8 *)
                                      Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<MetaSystemGestureDetector_SystemGestureState>_get_Value__
                            ;
                          }
                          else {
                            (**(code **)(*plVar14 + 0x2d8))
                                      (plVar14,plVar23,*(undefined8 *)(*plVar14 + 0x2e0));
                            plVar23 = (long *)(**(code **)(*in_stack_00000028 + 0x5f8))
                                                        (in_stack_00000028,
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAffordanceStateReceiver<float2>_Awake__
                                                  ,*(undefined8 *)PTR_DAT_067cb360,
                                                  *(undefined8 *)PTR_DAT_067cd6c0,
                                                  *(undefined8 *)(*in_stack_00000028 + 0x600));
                            if (*(long *)(unaff_x21 + 0x30) == 0) {
LAB_055d2508:
                              if (*(uint *)(lVar22 + 0x18) <= uVar25) goto LAB_055d3cb8;
                              lVar18 = *(long *)(lVar30 + uVar25 * 8);
                              if (lVar18 == 0) goto LAB_055d2934;
                              uVar16 = FUN_05546520(lVar18,0);
                              uVar24 = FUN_04f6ebb4(uVar16,0);
                              if (((uVar24 & 1) == 0) && (*(int *)(unaff_x21 + 0x5c) != 2)) {
                                if (uVar25 < *(uint *)(lVar22 + 0x18)) goto LAB_055d2700;
                                goto LAB_055d3cb8;
                              }
                            }
                            else {
                              if (*(uint *)(lVar22 + 0x18) <= uVar25) goto LAB_055d3cb8;
                              lVar18 = *(long *)(lVar30 + uVar25 * 8);
                              if (lVar18 == 0) goto LAB_055d2934;
                              uVar17 = *(undefined8 *)(*(long *)(unaff_x21 + 0x30) + 0x50);
                              uVar16 = FUN_05546520(lVar18,0);
                              uVar24 = thunk_FUN_04f6d944(uVar17,uVar16,0);
                              if ((uVar24 & 1) == 0) goto LAB_055d2508;
                            }
                            if (*(uint *)(lVar22 + 0x18) <= uVar25) goto LAB_055d3cb8;
                            lVar18 = *(long *)(lVar30 + uVar25 * 8);
                            if ((lVar18 == 0) ||
                               (uVar16 = FUN_0554de78(lVar18,0), plVar23 == (long *)0x0))
                            goto LAB_055d2934;
                            lVar18 = *plVar23;
                            puVar13 = (undefined8 *)PTR_DAT_067d7c28;
LAB_055d2638:
                            uVar17 = *puVar13;
                          }
                          (**(code **)(lVar18 + 0x518))
                                    (plVar23,uVar17,uVar16,*(undefined8 *)(lVar18 + 0x520));
                        }
joined_r0x055d27b4:
                        if (plVar15 == (long *)0x0) goto LAB_055d2934;
                        (**(code **)(*plVar15 + 0x2d8))
                                  (plVar15,plVar23,*(undefined8 *)(*plVar15 + 0x2e0));
                        uVar24 = (ulong)*(uint *)(lVar22 + 0x18);
                        uVar25 = uVar25 + 1;
                        unaff_x29 = in_stack_00000028;
                      } while ((long)uVar25 < (long)(int)*(uint *)(lVar22 + 0x18));
                    }
                    plVar15 = *(long **)(unaff_x21 + 0x78);
                    if ((plVar15 != (long *)0x0) &&
                       ((**(code **)(*plVar15 + 0x2b8))
                                  (plVar15,*(undefined8 *)(unaff_x21 + 0x80),
                                   *(undefined8 *)(*plVar15 + 0x2c0)),
                       puVar3 = 
                       System_Collections_Generic_List<BeforeRenderHelper_OrderBlock>_TypeInfo,
                       plVar14 != (long *)0x0)) {
                      (**(code **)(*plVar14 + 0x2d8))
                                (plVar14,*(undefined8 *)(unaff_x21 + 0x78),
                                 *(undefined8 *)(*plVar14 + 0x2e0));
                      lVar30 = *(long *)
                                UnityEngine_XR_Hands_Gestures_XRFingerShapeMath_DegreesBetween_0000018C_BurstDirectCall_TypeInfo
                      ;
                      lVar22 = *(long *)(lVar30 + 0x38);
                      if (lVar22 == 0) {
                        FUN_02f41ef8(lVar30);
                        lVar22 = *(long *)(lVar30 + 0x38);
                      }
                      lVar22 = *(long *)(lVar22 + 0x10);
                      if ((*(ushort *)(lVar22 + 0x135) & 1) == 0) {
                        lVar22 = FUN_02f41e9c();
                      }
                      if (*(int *)(lVar22 + 0xe4) == 0) {
                        thunk_FUN_02f6670c();
                      }
                      lVar22 = *(long *)(*(long *)(lVar30 + 0x38) + 0x10);
                      if ((*(ushort *)(lVar22 + 0x135) & 1) == 0) {
                        lVar22 = FUN_02f41e9c();
                      }
                      plVar15 = (long *)**(undefined8 **)(lVar22 + 0xb8);
                      if (unaff_x24 == 0) {
LAB_055d294c:
                        if ((unaff_w27 & 1) == 0) {
LAB_055d2a24:
                          puVar6 = 
                          Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<MetaSystemGestureDetector_SystemGestureState>_set_Value__
                          ;
                          puVar4 = 
                          System_Collections_Generic_List<NetSyncVoipAttenuationValue>_TypeInfo;
                          puVar3 = PTR_DAT_067cd6c0;
                          if (plVar15 != (long *)0x0) {
                            uVar21 = *(uint *)(plVar15 + 3);
                            if (0 < (int)uVar21) {
                              uVar28 = 0;
                              plVar29 = (long *)0x0;
                              plVar23 = (long *)0x0;
                              do {
                                if (uVar21 <= uVar28) goto LAB_055d3cb8;
                                plVar31 = (long *)plVar15[(long)(int)uVar28 + 4];
                                if (plVar31 == (long *)0x0) goto LAB_055d2934;
                                uVar25 = (**(code **)(*plVar31 + 0x1d8))
                                                   (plVar31,*(undefined8 *)(*plVar31 + 0x1e0));
                                if (((uVar25 & 1) == 0) &&
                                   (lVar22 = (**(code **)(*plVar31 + 0x208))
                                                       (plVar31,*(undefined8 *)(*plVar31 + 0x210)),
                                   puVar5 = 
                                   Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAffordanceStateReceiver<float2>_Awake__
                                   , lVar22 == 0)) {
                                  if (plVar23 == (long *)0x0) {
                                    plVar23 = (long *)(**(code **)(*unaff_x29 + 0x5f8))
                                                                (unaff_x29,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAffordanceStateReceiver<float2>_Awake__
                                                  ,*(undefined8 *)puVar4,*(undefined8 *)puVar3,
                                                  *(undefined8 *)(*unaff_x29 + 0x600));
                                    (**(code **)(*plVar14 + 0x2d8))
                                              (plVar14,plVar23,*(undefined8 *)(*plVar14 + 0x2e0));
                                    plVar29 = (long *)(**(code **)(*unaff_x29 + 0x5f8))
                                                                (unaff_x29,*(undefined8 *)puVar5,
                                                                 *(undefined8 *)puVar6,
                                                                 *(undefined8 *)puVar3,
                                                                 *(undefined8 *)(*unaff_x29 + 0x600)
                                                                );
                                    if (plVar23 == (long *)0x0) goto LAB_055d2934;
                                    (**(code **)(*plVar23 + 0x2d8))
                                              (plVar23,plVar29,*(undefined8 *)(*plVar23 + 0x2e0));
                                  }
                                  uVar16 = FUN_055d4838();
                                  if (plVar29 == (long *)0x0) goto LAB_055d2934;
                                  (**(code **)(*plVar29 + 0x2d8))
                                            (plVar29,uVar16,*(undefined8 *)(*plVar29 + 0x2e0));
                                }
                                uVar21 = *(uint *)(plVar15 + 3);
                                uVar28 = uVar28 + 1;
                              } while ((int)uVar28 < (int)uVar21);
                            }
                            plVar15 = *(long **)(unaff_x21 + 0x18);
                            if (plVar15 != (long *)0x0) {
                              iVar11 = (**(code **)(*plVar15 + 0x3c8))
                                                 (plVar15,*(undefined8 *)(*plVar15 + 0x3d0));
                              bVar2 = 1 < iVar11;
                              bVar8 = in_stack_000000a8._4_1_ == '\0';
                              if ((*(int *)(unaff_x21 + 0x5c) == 2) ||
                                 (*(int *)(unaff_x21 + 0x5c) == 4)) {
                                (**(code **)(*in_stack_00000028 + 0x2d8))
                                          (in_stack_00000028,plVar14,
                                           *(undefined8 *)(*in_stack_00000028 + 0x2e0));
                                (**(code **)(*in_stack_00000028 + 0x638))
                                          (in_stack_00000028,in_stack_00000008,
                                           *(undefined8 *)(*in_stack_00000028 + 0x640));
                                goto LAB_055d2bd0;
                              }
                              plVar15 = *(long **)(unaff_x21 + 0x18);
                              if ((plVar15 != (long *)0x0) &&
                                 (plVar15 = (long *)(**(code **)(*plVar15 + 0x388))
                                                              (plVar15,*(undefined8 *)
                                                                        (*plVar15 + 0x390)),
                                 puVar3 = PTR_DAT_067c91b0, plVar15 != (long *)0x0)) {
                                lVar22 = *plVar15;
                                uVar25 = (ulong)*(ushort *)(lVar22 + 0x12e);
                                if (uVar25 != 0) {
                                  piVar27 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
                                  do {
                                    if (*(long *)(piVar27 + -2) == *(long *)PTR_DAT_067cb558) {
                                      puVar13 = (undefined8 *)
                                                (lVar22 + (long)*piVar27 * 0x10 + 0x138);
                                      goto LAB_055d2c60;
                                    }
                                    uVar25 = uVar25 - 1;
                                    piVar27 = piVar27 + 4;
                                  } while (uVar25 != 0);
                                }
                                puVar13 = (undefined8 *)
                                          FUN_02f421d0(plVar15,*(long *)PTR_DAT_067cb558,0);
LAB_055d2c60:
                                in_stack_000000a0 = (long *)(*(code *)*puVar13)(plVar15,puVar13[1]);
                                puVar4 = PTR_DAT_067c9338;
                                while (plVar15 = in_stack_000000a0, in_stack_000000a0 != (long *)0x0
                                      ) {
                                  lVar22 = *in_stack_000000a0;
                                  uVar25 = (ulong)*(ushort *)(lVar22 + 0x12e);
                                  if (uVar25 != 0) {
                                    piVar27 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
                                    do {
                                      if (*(long *)(piVar27 + -2) == *unaff_x22) {
                                        puVar13 = (undefined8 *)
                                                  (lVar22 + (long)*piVar27 * 0x10 + 0x138);
                                        goto LAB_055d2cdc;
                                      }
                                      uVar25 = uVar25 - 1;
                                      piVar27 = piVar27 + 4;
                                    } while (uVar25 != 0);
                                  }
                                  puVar13 = (undefined8 *)
                                            FUN_02f421d0(in_stack_000000a0,*unaff_x22,0);
LAB_055d2cdc:
                                  uVar25 = (*(code *)*puVar13)(plVar15,puVar13[1]);
                                  plVar15 = in_stack_000000a0;
                                  if ((uVar25 & 1) == 0) {
                                    plVar15 = (long *)thunk_FUN_02f45174(in_stack_000000a0,
                                                                         *(undefined8 *)puVar3);
                                    in_stack_00000098 = plVar15;
                                    if (plVar15 == (long *)0x0) goto LAB_055d2f4c;
                                    lVar30 = *plVar15;
                                    lVar22 = *(long *)puVar3;
                                    uVar25 = (ulong)*(ushort *)(lVar30 + 0x12e);
                                    if (uVar25 == 0) goto LAB_055d2f24;
                                    piVar27 = (int *)(*(long *)(lVar30 + 0xb0) + 8);
                                    goto LAB_055d2f0c;
                                  }
                                  if (in_stack_000000a0 == (long *)0x0) {
                                    if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000c8) {
                    /* WARNING: Subroutine does not return */
                                      FUN_02f089c8();
                                    }
                                    goto LAB_055d4150;
                                  }
                                  lVar22 = *in_stack_000000a0;
                                  uVar25 = (ulong)*(ushort *)(lVar22 + 0x12e);
                                  if (uVar25 != 0) {
                                    piVar27 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
                                    do {
                                      if (*(long *)(piVar27 + -2) == *unaff_x22) {
                                        puVar13 = (undefined8 *)
                                                  (lVar22 + (long)(*piVar27 + 1) * 0x10 + 0x138);
                                        goto LAB_055d2d44;
                                      }
                                      uVar25 = uVar25 - 1;
                                      piVar27 = piVar27 + 4;
                                    } while (uVar25 != 0);
                                  }
                                  puVar13 = (undefined8 *)
                                            FUN_02f421d0(in_stack_000000a0,*unaff_x22,1);
LAB_055d2d44:
                                  plVar15 = (long *)(*(code *)*puVar13)(plVar15,puVar13[1]);
                                  if ((plVar15 != (long *)0x0) &&
                                     (*plVar15 != *(long *)(puVar4 + 0x90))) {
                                    if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000c8) {
                    /* WARNING: Subroutine does not return */
                                      FUN_02f08d48(plVar15);
                                    }
                                    goto LAB_055d4150;
                                  }
                                  if (*(long *)(unaff_x21 + 0x30) == 0) {
                                    if (in_stack_00000020 == 0) {
                                      if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000c8)
                                      {
                    /* WARNING: Subroutine does not return */
                                        FUN_02f089c8();
                                      }
                                      goto LAB_055d4150;
                                    }
                                    uVar16 = FUN_05546520(in_stack_00000020,0);
                                  }
                                  else {
                                    uVar16 = *(undefined8 *)(*(long *)(unaff_x21 + 0x30) + 0x50);
                                  }
                                  uVar25 = thunk_FUN_04f6d944(plVar15,uVar16,0);
                                  if (((uVar25 & 1) == 0) &&
                                     (uVar25 = FUN_04f6ebb4(plVar15,0), (uVar25 & 1) == 0)) {
                                    plVar23 = (long *)(**(code **)(*in_stack_00000028 + 0x5f8))
                                                                (in_stack_00000028,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAffordanceStateReceiver<float2>_Awake__
                                                  ,*(undefined8 *)
                                                                                                        
                                                  Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<NearFarInteractor_Region>_SetValueWithoutNotify__
                                                  ,*(undefined8 *)PTR_DAT_067cd6c0,
                                                  *(undefined8 *)(*in_stack_00000028 + 0x600));
                                    if (plVar23 == (long *)0x0) {
                                      if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000c8)
                                      {
                    /* WARNING: Subroutine does not return */
                                        FUN_02f089c8();
                                      }
                                      goto LAB_055d4150;
                                    }
                                    (**(code **)(*plVar23 + 0x518))
                                              (plVar23,*(undefined8 *)
                                                                                                                
                                                  Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<NearFarInteractor_Region>_set_Value__
                                               ,plVar15,*(undefined8 *)(*plVar23 + 0x520));
                                    if (*(int *)(unaff_x21 + 0x5c) != 3 && (!bVar2 || !bVar8)) {
                                      plVar29 = *(long **)(unaff_x21 + 0x28);
                                      if (plVar29 == (long *)0x0) {
                                        if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000c8
                                           ) {
                    /* WARNING: Subroutine does not return */
                                          FUN_02f089c8();
                                        }
                                        goto LAB_055d4150;
                                      }
                                      uVar17 = *(undefined8 *)(unaff_x21 + 0x68);
                                      plVar15 = (long *)(**(code **)(*plVar29 + 0x308))
                                                                  (plVar29,plVar15,
                                                                   *(undefined8 *)(*plVar29 + 0x310)
                                                                  );
                                      uVar32 = *(undefined8 *)PTR_DAT_067d0878;
                                      uVar16 = *(undefined8 *)
                                                Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<XRInputModalityManager_InputMode>_set_Value__
                                      ;
                                      if (plVar15 == (long *)0x0) {
                                        uVar19 = 0;
                                      }
                                      else {
                                        uVar19 = (**(code **)(*plVar15 + 0x168))
                                                           (plVar15,*(undefined8 *)
                                                                     (*plVar15 + 0x170));
                                      }
                                      uVar17 = FUN_04f6fc18(uVar17,uVar32,uVar19,
                                                            *(undefined8 *)
                                                                                                                          
                                                  Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<float3>_Subscribe__
                                                  ,0);
                                      (**(code **)(*plVar23 + 0x518))
                                                (plVar23,uVar16,uVar17,
                                                 *(undefined8 *)(*plVar23 + 0x520));
                                    }
                                    (**(code **)(*plVar14 + 0x2c8))
                                              (plVar14,plVar23,*(undefined8 *)(*plVar14 + 0x2d0));
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
                        }
                        else {
                          plVar23 = *(long **)(unaff_x21 + 0x38);
                          if (plVar23 != (long *)0x0) {
                            iVar11 = (**(code **)(*plVar23 + 0x298))
                                               (plVar23,*(undefined8 *)(*plVar23 + 0x2a0));
                            if (iVar11 < 1) goto LAB_055d2a24;
                            plVar15 = *(long **)(unaff_x21 + 0x38);
                            if (plVar15 != (long *)0x0) {
                              plVar15 = (long *)(**(code **)(*plVar15 + 0x2e8))
                                                          (plVar15,0,
                                                           *(undefined8 *)(*plVar15 + 0x2f0));
                              if (plVar15 != (long *)0x0) {
                                bVar7 = *(byte *)(*(long *)puVar3 + 0x130);
                                if ((*(byte *)(*plVar15 + 0x130) < bVar7) ||
                                   (*(long *)(*(long *)(*plVar15 + 200) + (ulong)bVar7 * 8 + -8) !=
                                    *(long *)puVar3)) {
                                  if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000c8) {
                    /* WARNING: Subroutine does not return */
                                    FUN_02f08d48(plVar15);
                                  }
                                  goto LAB_055d4150;
                                }
                              }
                              FUN_055d1264();
                              plVar15 = *(long **)(unaff_x21 + 0x40);
                              if (plVar15 != (long *)0x0) {
                                uVar12 = (**(code **)(*plVar15 + 0x298))
                                                   (plVar15,*(undefined8 *)(*plVar15 + 0x2a0));
                                plVar15 = (long *)FUN_02f0880c(*(undefined8 *)
                                                                                                                                
                                                  Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<float>_set_Value__
                                                  ,uVar12);
                                plVar23 = *(long **)(unaff_x21 + 0x40);
                                if (plVar23 != (long *)0x0) {
                                  (**(code **)(*plVar23 + 0x368))
                                            (plVar23,plVar15,0,*(undefined8 *)(*plVar23 + 0x370));
                                  goto LAB_055d2a24;
                                }
                              }
                            }
                          }
                        }
                      }
                      else {
                        plVar23 = *(long **)(unaff_x21 + 0x38);
                        if (plVar23 != (long *)0x0) {
                          iVar11 = (**(code **)(*plVar23 + 0x298))
                                             (plVar23,*(undefined8 *)(*plVar23 + 0x2a0));
                          if (iVar11 < 1) goto LAB_055d294c;
                          plVar15 = *(long **)(unaff_x24 + 0x30);
                          if (plVar15 != (long *)0x0) {
                            uVar12 = (**(code **)(*plVar15 + 0x1c8))
                                               (plVar15,*(undefined8 *)(*plVar15 + 0x1d0));
                            plVar15 = (long *)FUN_02f0880c(*(undefined8 *)
                                                                                                                        
                                                  Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<float>_set_Value__
                                                  ,uVar12);
                            plVar23 = *(long **)(unaff_x24 + 0x30);
                            if (plVar23 != (long *)0x0) {
                              uVar25 = 0;
                              do {
                                iVar11 = (**(code **)(*plVar23 + 0x1c8))
                                                   (plVar23,*(undefined8 *)(*plVar23 + 0x1d0));
                                if ((long)iVar11 <= (long)uVar25) goto LAB_055d2a24;
                                plVar23 = *(long **)(unaff_x24 + 0x30);
                                if ((plVar23 == (long *)0x0) ||
                                   (lVar22 = (**(code **)(*plVar23 + 0x208))
                                                       (plVar23,uVar25 & 0xffffffff,
                                                        *(undefined8 *)(*plVar23 + 0x210)),
                                   plVar15 == (long *)0x0)) break;
                                if ((lVar22 != 0) &&
                                   (lVar30 = thunk_FUN_02f45174(lVar22,*(undefined8 *)
                                                                        (*plVar15 + 0x40)),
                                   lVar30 == 0)) {
                                  uVar16 = thunk_FUN_02f52b60();
                                  if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000c8) {
                    /* WARNING: Subroutine does not return */
                                    FUN_02f0888c(uVar16,0);
                                  }
                                  goto LAB_055d4150;
                                }
                                if (*(uint *)(plVar15 + 3) <= uVar25) goto LAB_055d3cb8;
                                plVar15[uVar25 + 4] = lVar22;
                                plVar23 = *(long **)(unaff_x24 + 0x30);
                                uVar25 = uVar25 + 1;
                              } while (plVar23 != (long *)0x0);
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  goto LAB_055d2934;
  while( true ) {
    uVar25 = uVar25 - 1;
    piVar27 = piVar27 + 4;
    if (uVar25 == 0) break;
LAB_055d2f0c:
    if (*(long *)(piVar27 + -2) == lVar22) {
      puVar13 = (undefined8 *)(lVar30 + (long)*piVar27 * 0x10 + 0x138);
      goto LAB_055d2f40;
    }
  }
LAB_055d2f24:
  puVar13 = (undefined8 *)FUN_02f421d0(plVar15,lVar22,0);
LAB_055d2f40:
  (*(code *)*puVar13)(plVar15,puVar13[1]);
LAB_055d2f4c:
  puVar3 = PTR_DAT_067c91b0;
  if (*(int *)(unaff_x21 + 0x5c) != 3 && (bVar2 && bVar8)) {
    plVar15 = *(long **)(unaff_x21 + 0x18);
    if (plVar15 == (long *)0x0) goto LAB_055d2934;
    in_stack_00000090._4_4_ =
         (**(code **)(*plVar15 + 0x3c8))(plVar15,*(undefined8 *)(*plVar15 + 0x3d0));
    if (*(int *)(*(long *)PTR_DAT_067c9fd8 + 0xe4) == 0) {
      thunk_FUN_02f6670c(*(long *)PTR_DAT_067c9fd8);
    }
    uVar16 = FUN_050656a0(0);
    uVar16 = FUN_050d2d8c((long)&stack0x00000090 + 4,uVar16,0);
    (**(code **)(*plVar14 + 0x558))
              (plVar14,*(undefined8 *)Method_System_Xml_ArrayHelper<string,_Guid>__ctor__,
               *(undefined8 *)UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo
               ,uVar16,*(undefined8 *)(*plVar14 + 0x560));
  }
  (**(code **)(*in_stack_00000028 + 0x2d8))
            (in_stack_00000028,plVar14,*(undefined8 *)(*in_stack_00000028 + 0x2e0));
  bVar9 = (!bVar2 || !bVar8) || *(int *)(unaff_x21 + 0x5c) == 3;
  lVar22 = 0x400;
  if (bVar9) {
    lVar22 = 0x640;
  }
  lVar30 = 0x3f8;
  if (bVar9) {
    lVar30 = 0x638;
  }
  (**(code **)(*in_stack_00000028 + lVar30))
            (in_stack_00000028,in_stack_00000008,*(undefined8 *)(*in_stack_00000028 + lVar22));
  (**(code **)(*in_stack_00000028 + 0x2b8))
            (in_stack_00000028,plVar14,*(undefined8 *)(*in_stack_00000028 + 0x2c0));
  plVar14 = *(long **)(unaff_x21 + 0x18);
  if ((plVar14 != (long *)0x0) &&
     (plVar14 = (long *)(**(code **)(*plVar14 + 0x388))(plVar14,*(undefined8 *)(*plVar14 + 0x390)),
     plVar14 != (long *)0x0)) {
    lVar22 = *plVar14;
    uVar25 = (ulong)*(ushort *)(lVar22 + 0x12e);
    if (uVar25 != 0) {
      piVar27 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
      do {
        if (*(long *)(piVar27 + -2) == *(long *)PTR_DAT_067cb558) {
          puVar13 = (undefined8 *)(lVar22 + (long)*piVar27 * 0x10 + 0x138);
          goto LAB_055d30ec;
        }
        uVar25 = uVar25 - 1;
        piVar27 = piVar27 + 4;
      } while (uVar25 != 0);
    }
    puVar13 = (undefined8 *)FUN_02f421d0(plVar14,*(long *)PTR_DAT_067cb558,0);
LAB_055d30ec:
    in_stack_000000a0 = (long *)(*(code *)*puVar13)(plVar14,puVar13[1]);
    if (in_stack_000000a0 != (long *)0x0) {
LAB_055d3114:
      plVar14 = in_stack_000000a0;
      lVar22 = *in_stack_000000a0;
      uVar25 = (ulong)*(ushort *)(lVar22 + 0x12e);
      if (uVar25 != 0) {
        piVar27 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
        do {
          if (*(long *)(piVar27 + -2) == *unaff_x22) {
            puVar13 = (undefined8 *)(lVar22 + (long)*piVar27 * 0x10 + 0x138);
            goto LAB_055d3160;
          }
          uVar25 = uVar25 - 1;
          piVar27 = piVar27 + 4;
        } while (uVar25 != 0);
      }
      puVar13 = (undefined8 *)FUN_02f421d0(in_stack_000000a0,*unaff_x22,0);
LAB_055d3160:
      uVar25 = (*(code *)*puVar13)(plVar14,puVar13[1]);
      plVar14 = in_stack_000000a0;
      if ((uVar25 & 1) != 0) {
        if (in_stack_000000a0 == (long *)0x0) {
          if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000c8) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          goto LAB_055d4150;
        }
        lVar22 = *in_stack_000000a0;
        uVar25 = (ulong)*(ushort *)(lVar22 + 0x12e);
        if (uVar25 != 0) {
          piVar27 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
          do {
            if (*(long *)(piVar27 + -2) == *unaff_x22) {
              puVar13 = (undefined8 *)(lVar22 + (long)(*piVar27 + 1) * 0x10 + 0x138);
              goto LAB_055d31c8;
            }
            uVar25 = uVar25 - 1;
            piVar27 = piVar27 + 4;
          } while (uVar25 != 0);
        }
        puVar13 = (undefined8 *)FUN_02f421d0(in_stack_000000a0,*unaff_x22,1);
LAB_055d31c8:
        plVar14 = (long *)(*(code *)*puVar13)(plVar14,puVar13[1]);
        if ((plVar14 != (long *)0x0) && (*plVar14 != *(long *)(puVar4 + 0x90))) {
          if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000c8) {
                    /* WARNING: Subroutine does not return */
            FUN_02f08d48(plVar14);
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
          uVar16 = FUN_05546520(in_stack_00000020,0);
        }
        else {
          uVar16 = *(undefined8 *)(*(long *)(unaff_x21 + 0x30) + 0x50);
        }
        uVar25 = thunk_FUN_04f6d944(plVar14,uVar16,0);
        if (((uVar25 & 1) != 0) || (uVar25 = FUN_04f6ebb4(plVar14,0), (uVar25 & 1) != 0))
        goto LAB_055d38e0;
        if (in_stack_000000a8._4_1_ == '\0') {
          plStack0000000000000088 = in_stack_00000008;
          goto LAB_055d33b4;
        }
        lVar22 = FUN_02f0880c(*(undefined8 *)PTR_DAT_067c9070,5);
        if (lVar22 == 0) {
          if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000c8) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
        }
        else {
          uVar21 = *(uint *)(lVar22 + 0x18);
          if (uVar21 == 0) {
            if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000c8) {
                    /* WARNING: Subroutine does not return */
              FUN_02f089d0();
            }
          }
          else {
            *(undefined8 *)(lVar22 + 0x20) = *(undefined8 *)(unaff_x21 + 0x60);
            if (uVar21 == 1) {
              if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000c8) {
                    /* WARNING: Subroutine does not return */
                FUN_02f089d0();
              }
            }
            else {
              *(undefined8 *)(lVar22 + 0x28) = *(undefined8 *)(unaff_x21 + 0x68);
              if (uVar21 < 3) {
                if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000c8) {
                    /* WARNING: Subroutine does not return */
                  FUN_02f089d0();
                }
              }
              else {
                *(undefined8 *)(lVar22 + 0x30) = *(undefined8 *)PTR_DAT_067d0878;
                plVar15 = *(long **)(unaff_x21 + 0x28);
                if (plVar15 == (long *)0x0) {
                  if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000c8) {
                    /* WARNING: Subroutine does not return */
                    FUN_02f089c8();
                  }
                }
                else {
                  plVar15 = (long *)(**(code **)(*plVar15 + 0x308))
                                              (plVar15,plVar14,*(undefined8 *)(*plVar15 + 0x310));
                  uVar16 = 0;
                  if (plVar15 != (long *)0x0) {
                    uVar16 = (**(code **)(*plVar15 + 0x168))
                                       (plVar15,*(undefined8 *)(*plVar15 + 0x170));
                  }
                  if ((*(ulong *)(lVar22 + 0x18) & 0xfffffffc) == 0) {
                    if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000c8) {
                    /* WARNING: Subroutine does not return */
                      FUN_02f089d0();
                    }
                  }
                  else {
                    *(undefined8 *)(lVar22 + 0x38) = uVar16;
                    if ((uint)*(ulong *)(lVar22 + 0x18) < 5) {
                      if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000c8) {
                    /* WARNING: Subroutine does not return */
                        FUN_02f089d0();
                      }
                    }
                    else {
                      *(undefined8 *)(lVar22 + 0x40) =
                           *(undefined8 *)
                            Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<float3>_Subscribe__
                      ;
                      uVar16 = FUN_04f6fd20(lVar22,0);
                      plStack0000000000000088 =
                           (long *)thunk_FUN_02f45270(*(undefined8 *)
                                                                                                              
                                                  System_Console_WindowsConsole_WindowsCancelHandler_TypeInfo
                                                  );
                      FUN_057d753c(plStack0000000000000088,uVar16,0,0);
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
                                                    (plVar15,plVar14,
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
                        plVar23 = *(long **)(unaff_x21 + 0x48);
                        if (plVar23 == (long *)0x0) {
                          if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000c8) {
                    /* WARNING: Subroutine does not return */
                            FUN_02f089c8();
                          }
                        }
                        else {
                          (**(code **)(*plVar23 + 0x2d8))
                                    (plVar23,plVar15,*(undefined8 *)(*plVar23 + 0x2e0));
                          plVar23 = *(long **)(unaff_x21 + 0x18);
                          if (plVar23 == (long *)0x0) {
                            if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000c8) {
                    /* WARNING: Subroutine does not return */
                              FUN_02f089c8();
                            }
                          }
                          else {
                            plVar23 = (long *)(**(code **)(*plVar23 + 0x388))
                                                        (plVar23,*(undefined8 *)(*plVar23 + 0x390));
                            if (plVar23 == (long *)0x0) {
                              if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000c8) {
                    /* WARNING: Subroutine does not return */
                                FUN_02f089c8();
                              }
                            }
                            else {
                              lVar22 = *plVar23;
                              uVar25 = (ulong)*(ushort *)(lVar22 + 0x12e);
                              if (uVar25 != 0) {
                                piVar27 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
                                do {
                                  if (*(long *)(piVar27 + -2) == *(long *)PTR_DAT_067cb558) {
                                    puVar13 = (undefined8 *)(lVar22 + (long)*piVar27 * 0x10 + 0x138)
                                    ;
                                    goto LAB_055d349c;
                                  }
                                  uVar25 = uVar25 - 1;
                                  piVar27 = piVar27 + 4;
                                } while (uVar25 != 0);
                              }
                              puVar13 = (undefined8 *)
                                        FUN_02f421d0(plVar23,*(long *)PTR_DAT_067cb558,0);
LAB_055d349c:
                              plVar23 = (long *)(*(code *)*puVar13)(plVar23,puVar13[1]);
                              if (plVar23 != (long *)0x0) {
                                do {
                                  lVar22 = *plVar23;
                                  uVar25 = (ulong)*(ushort *)(lVar22 + 0x12e);
                                  if (uVar25 != 0) {
                                    piVar27 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
                                    do {
                                      if (*(long *)(piVar27 + -2) == *unaff_x22) {
                                        puVar13 = (undefined8 *)
                                                  (lVar22 + (long)*piVar27 * 0x10 + 0x138);
                                        goto LAB_055d3510;
                                      }
                                      uVar25 = uVar25 - 1;
                                      piVar27 = piVar27 + 4;
                                    } while (uVar25 != 0);
                                  }
                                  puVar13 = (undefined8 *)FUN_02f421d0(plVar23,*unaff_x22,0);
LAB_055d3510:
                                  uVar25 = (*(code *)*puVar13)(plVar23,puVar13[1]);
                                  if ((uVar25 & 1) == 0) goto LAB_055d378c;
                                  if (plVar23 == (long *)0x0) {
                                    if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000c8) {
                    /* WARNING: Subroutine does not return */
                                      FUN_02f089c8();
                                    }
                                    goto LAB_055d4150;
                                  }
                                  lVar22 = *plVar23;
                                  uVar25 = (ulong)*(ushort *)(lVar22 + 0x12e);
                                  if (uVar25 != 0) {
                                    piVar27 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
                                    do {
                                      if (*(long *)(piVar27 + -2) == *unaff_x22) {
                                        puVar13 = (undefined8 *)
                                                  (lVar22 + (long)(*piVar27 + 1) * 0x10 + 0x138);
                                        goto LAB_055d3578;
                                      }
                                      uVar25 = uVar25 - 1;
                                      piVar27 = piVar27 + 4;
                                    } while (uVar25 != 0);
                                  }
                                  puVar13 = (undefined8 *)FUN_02f421d0(plVar23,*unaff_x22,1);
LAB_055d3578:
                                  plVar29 = (long *)(*(code *)*puVar13)(plVar23,puVar13[1]);
                                  if ((plVar29 != (long *)0x0) &&
                                     (*plVar29 != *(long *)(puVar4 + 0x90))) {
                                    if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000c8) {
                    /* WARNING: Subroutine does not return */
                                      FUN_02f08d48(plVar29);
                                    }
                                    goto LAB_055d4150;
                                  }
                                  uVar25 = thunk_FUN_04f6d944(plVar14,plVar29,0);
                                  if ((uVar25 & 1) == 0) {
                                    plVar31 = *(long **)(unaff_x21 + 0x28);
                                    if (plVar31 == (long *)0x0) {
                                      if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000c8)
                                      {
                    /* WARNING: Subroutine does not return */
                                        FUN_02f089c8();
                                      }
                                      goto LAB_055d4150;
                                    }
                                    plVar31 = (long *)(**(code **)(*plVar31 + 0x308))
                                                                (plVar31,plVar29,
                                                                 *(undefined8 *)(*plVar31 + 0x310));
                                    if (plVar31 != (long *)0x0) {
                                      if (*plVar31 != *(long *)(puVar4 + 0x90)) {
                                        if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000c8
                                           ) {
                    /* WARNING: Subroutine does not return */
                                          FUN_02f08d48(plVar31);
                                        }
                                        goto LAB_055d4150;
                                      }
                                      uVar16 = FUN_04f65260(*(undefined8 *)
                                                                                                                          
                                                  System_Nullable<OpenXRAnalytics_InitializeEvent>_TypeInfo
                                                  ,plVar31,0);
                                      if (plVar15 == (long *)0x0) {
                                        if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000c8
                                           ) {
                    /* WARNING: Subroutine does not return */
                                          FUN_02f089c8(uVar16,uVar16);
                                        }
                                        goto LAB_055d4150;
                                      }
                                      (**(code **)(*plVar15 + 0x518))
                                                (plVar15,uVar16,plVar29,
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
                                                 ,plVar29,*(undefined8 *)(*plVar20 + 0x520));
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
                                          uVar16 = FUN_05546520(in_stack_00000020,0);
                                        }
                                        else {
                                          uVar16 = *(undefined8 *)
                                                    (*(long *)(unaff_x21 + 0x30) + 0x50);
                                        }
                                        uVar25 = thunk_FUN_04f6d944(plVar29,uVar16,0);
                                        if ((uVar25 & 1) == 0) {
                                          uVar16 = FUN_04f6fc18(*(undefined8 *)(unaff_x21 + 0x68),
                                                                *(undefined8 *)PTR_DAT_067d0878,
                                                                plVar31,*(undefined8 *)
                                                                                                                                                  
                                                  Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<float3>_Subscribe__
                                                  ,0);
                                          (**(code **)(*plVar20 + 0x518))
                                                    (plVar20,*(undefined8 *)
                                                                                                                            
                                                  Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<XRInputModalityManager_InputMode>_set_Value__
                                                  ,uVar16,*(undefined8 *)(*plVar20 + 0x520));
                                        }
                                        else {
                                          uVar16 = FUN_04f65260(*(undefined8 *)(unaff_x21 + 0x68),
                                                                *(undefined8 *)(unaff_x21 + 0x70),0)
                                          ;
                                          (**(code **)(*plVar20 + 0x518))
                                                    (plVar20,*(undefined8 *)
                                                                                                                            
                                                  Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<XRInputModalityManager_InputMode>_set_Value__
                                                  ,uVar16,*(undefined8 *)(*plVar20 + 0x520));
                                        }
                                      }
                                      (**(code **)(*plVar15 + 0x2c8))
                                                (plVar15,plVar20,*(undefined8 *)(*plVar15 + 0x2d0));
                                    }
                                  }
                                  if (plVar23 == (long *)0x0) break;
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
      plVar14 = (long *)thunk_FUN_02f45174(in_stack_000000a0,*(undefined8 *)puVar3);
      in_stack_00000098 = plVar14;
      if (plVar14 == (long *)0x0) goto LAB_055d2bd0;
      lVar22 = *plVar14;
      uVar25 = (ulong)*(ushort *)(lVar22 + 0x12e);
      if (uVar25 == 0) goto LAB_055d3c78;
      piVar27 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
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
  goto LAB_055d4150;
LAB_055d378c:
  plVar14 = (long *)thunk_FUN_02f45174(plVar23,*(undefined8 *)puVar3);
  in_stack_00000098 = plVar14;
  if (plVar14 != (long *)0x0) {
    lVar22 = *plVar14;
    uVar25 = (ulong)*(ushort *)(lVar22 + 0x12e);
    if (uVar25 != 0) {
      piVar27 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
      do {
        if (*(long *)(piVar27 + -2) == *(long *)puVar3) {
          puVar13 = (undefined8 *)(lVar22 + (long)*piVar27 * 0x10 + 0x138);
          goto FUN_055d3800;
        }
        uVar25 = uVar25 - 1;
        piVar27 = piVar27 + 4;
      } while (uVar25 != 0);
    }
    puVar13 = (undefined8 *)FUN_02f421d0(plVar14,*(long *)puVar3,0);
FUN_055d3800:
    (*(code *)*puVar13)(plVar14,puVar13[1]);
  }
  plVar14 = *(long **)(unaff_x21 + 0x48);
  if (*(int *)(unaff_x21 + 0x5c) == 3 || (!bVar2 || !bVar8)) {
    if (plVar14 == (long *)0x0) {
      if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000c8) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      goto LAB_055d4150;
    }
    (**(code **)(*plVar14 + 0x638))
              (plVar14,plStack0000000000000088,*(undefined8 *)(*plVar14 + 0x640));
  }
  else {
    if (plVar14 == (long *)0x0) {
      if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000c8) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      goto LAB_055d4150;
    }
    (**(code **)(*plVar14 + 0x3f8))
              (plVar14,plStack0000000000000088,*(undefined8 *)(*plVar14 + 0x400));
  }
  plVar14 = *(long **)(unaff_x21 + 0x48);
  if (plVar14 == (long *)0x0) {
    if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000c8) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    goto LAB_055d4150;
  }
  (**(code **)(*plVar14 + 0x2b8))(plVar14,plVar15,*(undefined8 *)(*plVar14 + 0x2c0));
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
LAB_055d3cb8:
  if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000c8) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089d0();
  }
  goto LAB_055d4150;
  while( true ) {
    uVar25 = uVar25 - 1;
    piVar27 = piVar27 + 4;
    if (uVar25 == 0) break;
LAB_055d3c60:
    if (*(long *)(piVar27 + -2) == *(long *)puVar3) {
      puVar13 = (undefined8 *)(lVar22 + (long)*piVar27 * 0x10 + 0x138);
      goto LAB_055d3c94;
    }
  }
LAB_055d3c78:
  puVar13 = (undefined8 *)FUN_02f421d0(plVar14,*(long *)puVar3,0);
LAB_055d3c94:
  (*(code *)*puVar13)(plVar14,puVar13[1]);
LAB_055d2bd0:
  if (in_stack_000000a8._4_1_ == '\0') {
    if (in_stack_00000008 == (long *)0x0) goto LAB_055d2934;
LAB_055d20d8:
    (**(code **)(*in_stack_00000008 + 0x308))
              (in_stack_00000008,*(undefined8 *)(*in_stack_00000008 + 0x310));
  }
  if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000c8) {
    return;
  }
LAB_055d4150:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


