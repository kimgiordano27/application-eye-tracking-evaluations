/*
FUNCTION_NAME: PlayFab.Events.PlayFabEvents$$remove_OnGroupsDeleteRoleRequestEvent
ENTRY_POINT: 0525d7d8
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2
*/


void PlayFab_Events_PlayFabEvents__remove_OnGroupsDeleteRoleRequestEvent(void)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  int *piVar6;
  long unaff_x19;
  undefined4 unaff_w20;
  long lVar7;
  undefined8 uVar8;
  undefined4 unaff_w21;
  undefined8 *unaff_x22;
  long *plVar9;
  long unaff_x23;
  undefined8 uVar10;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined4 uStack00000000000000cc;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  long in_stack_00000120;
  undefined4 uStack0000000000000128;
  undefined1 uStack000000000000012c;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  
  FUN_02d4dc40();
  FUN_02d4dc40(Unity_XR_CoreUtils_Collections_HashSetList<XRGrabInteractable>_TypeInfo);
  FUN_02d4dc40(
              System_Collections_Generic_HashSet<Action<RenderTargetIdentifier,_CommandBuffer>>_TypeInfo
              );
  FUN_02d4dc40(System_Collections_Generic_HashSet<BaseRuntimePanel>_TypeInfo);
  FUN_02d4dc40(System_Collections_Generic_HashSet<Binding>_TypeInfo);
  FUN_02d4dc40(System_Collections_Generic_HashSet<BindingRestrictions>_TypeInfo);
  FUN_02d4dc40(PTR_DAT_0664b728);
  FUN_02d4dc40(System_Func<SpriteCharacter,_uint>_TypeInfo);
  FUN_02d4dc40(PTR_DAT_06646310);
  FUN_02d4dc40(System_Collections_Generic_HashSet<byte>_TypeInfo);
  FUN_02d4dc40(System_Func<GUIContent,_string>_TypeInfo);
  FUN_02d4dc40(System_Func<HierarchyNode,_HierarchyNode>_TypeInfo);
  FUN_02d4dc40(System_Collections_Generic_HashSet<Collider>_TypeInfo);
  FUN_02d4dc40(System_Collections_Generic_HashSet<FontAsset>_TypeInfo);
  FUN_02d4dc40(System_Collections_Generic_HashSet<GameObject>_TypeInfo);
  FUN_02d4dc40(System_Collections_Generic_HashSet<IClippable>_TypeInfo);
  FUN_02d4dc40(System_Func<IAsyncResult,_IPAddress[]>_TypeInfo);
  FUN_02d4dc40(System_Collections_Generic_HashSet<IDebugDisplaySettingsData>_TypeInfo);
  FUN_02d4dc40(System_Collections_Generic_HashSet<IUIInteractor>_TypeInfo);
  *(undefined1 *)(unaff_x23 + 0x3be) = 1;
  in_stack_00000120 = 0;
  uStack00000000000000cc = 0;
  in_stack_000000e8 = 0;
  in_stack_000000e0 = 0;
  in_stack_000000f8 = 0;
  in_stack_000000f0 = 0;
  in_stack_00000108 = 0;
  in_stack_00000100 = 0;
  in_stack_00000118 = 0;
  in_stack_00000110 = 0;
  in_stack_000000d8 = 0;
  in_stack_000000d0 = 0;
  if (*(long *)(unaff_x19 + 0x88) != 0) {
    uVar2 = FUN_047d0100(*(long *)(unaff_x19 + 0x88),unaff_w21,&stack0x00000120,
                         *(undefined8 *)
                          Unity_XR_CoreUtils_Collections_HashSetList<IXRInteractionGroup>_TypeInfo);
    if ((uVar2 & 1) == 0) {
      lVar3 = thunk_FUN_02d8a638(*(undefined8 *)
                                  System_Collections_Generic_HashSet<BindingRestrictions>_TypeInfo);
      FUN_04799694(lVar3,*(undefined8 *)
                          System_Collections_Generic_HashSet<Action<RenderTargetIdentifier,_CommandBuffer>>_TypeInfo
                  );
      in_stack_00000120 = lVar3;
      if (*(long *)(unaff_x19 + 0x88) == 0) goto LAB_0525dfdc;
      FUN_047ce610(*(long *)(unaff_x19 + 0x88),unaff_w21,lVar3,
                   *(undefined8 *)System_Collections_Generic_HashSet<BaseRuntimePanel>_TypeInfo);
    }
    if (in_stack_00000120 != 0) {
      uVar2 = FUN_0479a628(in_stack_00000120,uStack000000000000012c,
                           *(undefined8 *)
                            Unity_XR_CoreUtils_Collections_HashSetList<XRBaseInputInteractor>_TypeInfo
                          );
      puVar1 = PTR_DAT_06646310;
      if ((uVar2 & 1) == 0) {
        lVar3 = FUN_02d4dd2c(*(undefined8 *)PTR_DAT_06646310,6);
        if (lVar3 != 0) {
          if (*(int *)(lVar3 + 0x18) != 0) {
            *(undefined8 *)(lVar3 + 0x20) =
                 *(undefined8 *)System_Collections_Generic_HashSet<FontAsset>_TypeInfo;
            thunk_FUN_02dc1ef0((undefined8 *)(lVar3 + 0x20));
            uVar4 = FUN_0525dfe0();
            if ((*(uint *)(lVar3 + 0x18) & 0xfffffffe) != 0) {
              *(undefined8 *)(lVar3 + 0x28) = uVar4;
              thunk_FUN_02dc1ef0((undefined8 *)(lVar3 + 0x28),uVar4);
              if (2 < *(uint *)(lVar3 + 0x18)) {
                *(undefined8 *)(lVar3 + 0x30) =
                     *(undefined8 *)System_Func<HierarchyNode,_HierarchyNode>_TypeInfo;
                thunk_FUN_02dc1ef0((undefined8 *)(lVar3 + 0x30));
                uVar4 = FUN_04f73bf4((long)&stack0x00000128 + 4,0);
                if ((*(uint *)(lVar3 + 0x18) & 0xfffffffc) != 0) {
                  *(undefined8 *)(lVar3 + 0x38) = uVar4;
                  thunk_FUN_02dc1ef0((undefined8 *)(lVar3 + 0x38),uVar4);
                  if (4 < *(uint *)(lVar3 + 0x18)) {
                    *(undefined8 *)(lVar3 + 0x40) =
                         *(undefined8 *)System_Func<IAsyncResult,_IPAddress[]>_TypeInfo;
                    thunk_FUN_02dc1ef0((undefined8 *)(lVar3 + 0x40));
                    uVar4 = FUN_0524ff40();
                    if (5 < *(uint *)(lVar3 + 0x18)) {
                      *(undefined8 *)(lVar3 + 0x48) = uVar4;
                      thunk_FUN_02dc1ef0();
                      uVar4 = FUN_04e80ce4(lVar3,0);
                      plVar9 = *(long **)(unaff_x19 + 0x18);
                      lVar3 = FUN_02d4dd2c(*(undefined8 *)puVar1,6);
                      if (lVar3 == 0) goto LAB_0525dfdc;
                      if (*(int *)(lVar3 + 0x18) != 0) {
                        *(undefined8 *)(lVar3 + 0x20) =
                             *(undefined8 *)System_Func<GUIContent,_string>_TypeInfo;
                        thunk_FUN_02dc1ef0((undefined8 *)(lVar3 + 0x20));
                        if ((*(uint *)(lVar3 + 0x18) & 0xfffffffe) != 0) {
                          *(undefined8 *)(lVar3 + 0x28) = uVar4;
                          thunk_FUN_02dc1ef0((undefined8 *)(lVar3 + 0x28),uVar4);
                          if (2 < *(uint *)(lVar3 + 0x18)) {
                            *(undefined8 *)(lVar3 + 0x30) =
                                 *(undefined8 *)
                                  System_Collections_Generic_HashSet<Collider>_TypeInfo;
                            thunk_FUN_02dc1ef0((undefined8 *)(lVar3 + 0x30));
                            uVar8 = FUN_05250cb0();
                            if ((*(uint *)(lVar3 + 0x18) & 0xfffffffc) != 0) {
                              *(undefined8 *)(lVar3 + 0x38) = uVar8;
                              thunk_FUN_02dc1ef0((undefined8 *)(lVar3 + 0x38),uVar8);
                              if (4 < *(uint *)(lVar3 + 0x18)) {
                                *(undefined8 *)(lVar3 + 0x40) =
                                     *(undefined8 *)
                                      System_Collections_Generic_HashSet<byte>_TypeInfo;
                                thunk_FUN_02dc1ef0((undefined8 *)(lVar3 + 0x40));
                                uVar8 = FUN_05000654(&stack0x00000128,0);
                                if (5 < *(uint *)(lVar3 + 0x18)) {
                                  *(undefined8 *)(lVar3 + 0x48) = uVar8;
                                  thunk_FUN_02dc1ef0();
                                  uVar8 = FUN_04e80ce4(lVar3,0);
                                  lVar7 = *(long *)PTR_DAT_06648110;
                                  lVar3 = *(long *)(lVar7 + 0x38);
                                  if (lVar3 == 0) {
                                    FUN_02d87268(lVar7);
                                    lVar3 = *(long *)(lVar7 + 0x38);
                                  }
                                  lVar3 = *(long *)(lVar3 + 0x10);
                                  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
                                    lVar3 = FUN_02d8720c();
                                  }
                                  if (*(int *)(lVar3 + 0xe4) == 0) {
                                    thunk_FUN_02dabd98();
                                  }
                                  lVar3 = *(long *)(*(long *)(lVar7 + 0x38) + 0x10);
                                  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
                                    lVar3 = FUN_02d8720c();
                                  }
                                  if (plVar9 != (long *)0x0) {
                                    lVar7 = *plVar9;
                                    uVar2 = (ulong)*(ushort *)(lVar7 + 0x12e);
                                    uVar10 = **(undefined8 **)(lVar3 + 0xb8);
                                    if (uVar2 != 0) {
                                      piVar6 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                                      do {
                                        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_0664b728) {
                                          puVar5 = (undefined8 *)
                                                   (lVar7 + (long)(*piVar6 + 1) * 0x10 + 0x138);
                                          goto LAB_0525de24;
                                        }
                                        uVar2 = uVar2 - 1;
                                        piVar6 = piVar6 + 4;
                                      } while (uVar2 != 0);
                                    }
                                    puVar5 = (undefined8 *)
                                             FUN_02d87540(plVar9,*(long *)PTR_DAT_0664b728,1);
LAB_0525de24:
                                    (*(code *)*puVar5)(plVar9,3,uVar8,uVar10,puVar5[1]);
                                    in_stack_00000130 = *(undefined8 *)PTR_DAT_0664b720;
                                    in_stack_00000140 =
                                         CONCAT44(in_stack_00000140._4_4_,*(undefined4 *)unaff_x22);
                                    in_stack_00000138 = 0xffffffffffffffff;
                                    uVar8 = FUN_05038b8c(&stack0x00000130,0);
                                    uVar4 = FUN_04e80678(*(undefined8 *)
                                                                                                                    
                                                  System_Collections_Generic_HashSet<IClippable>_TypeInfo
                                                  ,uVar8,uVar4,0);
                                    in_stack_00000098 = unaff_x22[1];
                                    in_stack_00000090 = *unaff_x22;
                                    in_stack_000000a8 = unaff_x22[3];
                                    in_stack_000000a0 = unaff_x22[2];
                                    in_stack_000000b8 = unaff_x22[5];
                                    in_stack_000000b0 = unaff_x22[4];
                                    FUN_05252680(&stack0x000000d0,*(undefined8 *)(unaff_x19 + 0x18),
                                                 uVar4,&stack0x00000090);
                                    lVar3 = *(long *)(unaff_x19 + 0x58);
                                    if (lVar3 != 0) {
                                      in_stack_00000148 = unaff_x22[3];
                                      in_stack_00000140 = unaff_x22[2];
                                      in_stack_00000158 = unaff_x22[5];
                                      in_stack_00000150 = unaff_x22[4];
                                      in_stack_00000138 = unaff_x22[1];
                                      in_stack_00000130 = *unaff_x22;
                                      (**(code **)(lVar3 + 0x18))
                                                (*(undefined8 *)(lVar3 + 0x40),unaff_w20,unaff_w21,
                                                 uStack000000000000012c,&stack0x00000130,
                                                 &stack0x000000d0,*(undefined8 *)(lVar3 + 0x28));
                                    }
                                    memcpy(&stack0x00000040,&stack0x000000d0,0x50);
                                    lVar3 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                                                                
                                                  System_Func<SpriteCharacter,_uint>_TypeInfo);
                                    FUN_05252958();
                                    if (in_stack_00000120 != 0) {
                                      FUN_0479a420(in_stack_00000120,uStack000000000000012c,lVar3,
                                                   *(undefined8 *)
                                                                                                        
                                                  System_Collections_Generic_HashSet<Binding>_TypeInfo
                                                  );
                                      if (*(long *)(unaff_x19 + 0x68) != 0) {
                                        uVar2 = FUN_047fe5d8(*(long *)(unaff_x19 + 0x68),
                                                             *(undefined4 *)unaff_x22,
                                                             &stack0x000000cc,
                                                             *(undefined8 *)
                                                                                                                            
                                                  Unity_XR_CoreUtils_Collections_HashSetList<XRGrabInteractable>_TypeInfo
                                                  );
                                        if ((uVar2 & 1) != 0) {
                                          if (lVar3 == 0) goto LAB_0525dfdc;
                                          *(undefined4 *)(lVar3 + 0x9c) = uStack00000000000000cc;
                                        }
                                        return;
                                      }
                                    }
                                  }
                                  goto LAB_0525dfdc;
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
LAB_0525dfd8:
                    /* WARNING: Subroutine does not return */
          FUN_02d4def0();
        }
      }
      else {
        if (*(char *)(unaff_x19 + 0x54) != '\0') {
          return;
        }
        plVar9 = *(long **)(unaff_x19 + 0x18);
        lVar3 = FUN_02d4dd2c(*(undefined8 *)PTR_DAT_06646310,6);
        if (lVar3 != 0) {
          if (*(int *)(lVar3 + 0x18) != 0) {
            *(undefined8 *)(lVar3 + 0x20) =
                 *(undefined8 *)
                  System_Collections_Generic_HashSet<IDebugDisplaySettingsData>_TypeInfo;
            thunk_FUN_02dc1ef0((undefined8 *)(lVar3 + 0x20));
            uVar4 = FUN_04f73bf4((long)&stack0x00000128 + 4,0);
            if ((*(uint *)(lVar3 + 0x18) & 0xfffffffe) != 0) {
              *(undefined8 *)(lVar3 + 0x28) = uVar4;
              thunk_FUN_02dc1ef0((undefined8 *)(lVar3 + 0x28),uVar4);
              if (2 < *(uint *)(lVar3 + 0x18)) {
                *(undefined8 *)(lVar3 + 0x30) =
                     *(undefined8 *)System_Collections_Generic_HashSet<GameObject>_TypeInfo;
                thunk_FUN_02dc1ef0((undefined8 *)(lVar3 + 0x30));
                uVar4 = FUN_0525dfe0();
                if ((*(uint *)(lVar3 + 0x18) & 0xfffffffc) != 0) {
                  *(undefined8 *)(lVar3 + 0x38) = uVar4;
                  thunk_FUN_02dc1ef0((undefined8 *)(lVar3 + 0x38),uVar4);
                  if (4 < *(uint *)(lVar3 + 0x18)) {
                    *(undefined8 *)(lVar3 + 0x40) =
                         *(undefined8 *)System_Collections_Generic_HashSet<IUIInteractor>_TypeInfo;
                    thunk_FUN_02dc1ef0((undefined8 *)(lVar3 + 0x40));
                    uVar4 = FUN_0524ff40();
                    if (5 < *(uint *)(lVar3 + 0x18)) {
                      *(undefined8 *)(lVar3 + 0x48) = uVar4;
                      thunk_FUN_02dc1ef0();
                      uVar4 = FUN_04e80ce4(lVar3,0);
                      lVar7 = *(long *)PTR_DAT_06648110;
                      lVar3 = *(long *)(lVar7 + 0x38);
                      if (lVar3 == 0) {
                        FUN_02d87268(lVar7);
                        lVar3 = *(long *)(lVar7 + 0x38);
                      }
                      lVar3 = *(long *)(lVar3 + 0x10);
                      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
                        lVar3 = FUN_02d8720c();
                      }
                      if (*(int *)(lVar3 + 0xe4) == 0) {
                        thunk_FUN_02dabd98();
                      }
                      lVar3 = *(long *)(*(long *)(lVar7 + 0x38) + 0x10);
                      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
                        lVar3 = FUN_02d8720c();
                      }
                      if (plVar9 != (long *)0x0) {
                        lVar7 = *plVar9;
                        uVar2 = (ulong)*(ushort *)(lVar7 + 0x12e);
                        uVar8 = **(undefined8 **)(lVar3 + 0xb8);
                        if (uVar2 != 0) {
                          piVar6 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_0664b728) {
                              puVar5 = (undefined8 *)(lVar7 + (long)(*piVar6 + 1) * 0x10 + 0x138);
                              goto LAB_0525dfa4;
                            }
                            uVar2 = uVar2 - 1;
                            piVar6 = piVar6 + 4;
                          } while (uVar2 != 0);
                        }
                        puVar5 = (undefined8 *)FUN_02d87540(plVar9,*(long *)PTR_DAT_0664b728,1);
LAB_0525dfa4:
                        (*(code *)*puVar5)(plVar9,2,uVar4,uVar8,puVar5[1]);
                        return;
                      }
                      goto LAB_0525dfdc;
                    }
                  }
                }
              }
            }
          }
          goto LAB_0525dfd8;
        }
      }
    }
  }
LAB_0525dfdc:
                    /* WARNING: Subroutine does not return */
  FUN_02d4dee8();
}


