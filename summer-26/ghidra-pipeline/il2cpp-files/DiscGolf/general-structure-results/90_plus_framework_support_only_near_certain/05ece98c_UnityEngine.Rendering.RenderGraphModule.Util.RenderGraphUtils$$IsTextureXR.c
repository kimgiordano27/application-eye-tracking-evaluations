/*
FUNCTION_NAME: UnityEngine.Rendering.RenderGraphModule.Util.RenderGraphUtils$$IsTextureXR
ENTRY_POINT: 05ece98c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 133
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_8;weak_xr_or_state_hits_8;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_8
*/


void UnityEngine_Rendering_RenderGraphModule_Util_RenderGraphUtils__IsTextureXR(void)

{
  char cVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  byte bVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  undefined8 *puVar12;
  ulong uVar13;
  long lVar14;
  int *piVar15;
  long unaff_x19;
  long unaff_x20;
  byte unaff_w21;
  ulong unaff_x22;
  long unaff_x23;
  undefined8 uVar16;
  long lVar17;
  long *unaff_x26;
  undefined4 uVar18;
  undefined8 in_stack_00000010;
  undefined8 *in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 *in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000050;
  ulong in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  ulong in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  long *in_stack_00000098;
  ulong in_stack_000000a0;
  undefined8 in_stack_000000a8;
  
  FUN_02d965b8(
              Method_System_Collections_Generic_List<TemplateAsset_UxmlSerializedDataOverride>_GetEnumerator__
              );
  FUN_02d965b8(Method_System_Collections_Generic_List<TextSettings_FontReferenceMap>_Add__);
  FUN_02d965b8(Method_System_Memory<byte>_get_Length__);
  FUN_02d965b8(UnityEngine_PlayerLoop_Update_var);
  FUN_02d965b8(System_Runtime_CompilerServices_IStrongBox___TypeInfo);
  FUN_02d965b8(PTR_DAT_069fc180);
  FUN_02d965b8(PTR_DAT_069fb990);
  FUN_02d965b8(Method_OVRNativeList<OVRAnchor_FilterUnion>_get_Count__);
  FUN_02d965b8(Method_OVRNativeList<OVRPlugin_DynamicObjectClass>__ctor__);
  FUN_02d965b8(Method_OVRNativeList<OVRPlugin_DynamicObjectClass>_Add__);
  FUN_02d965b8(Method_OVRNativeList<OVRPlugin_DynamicObjectClass>_Dispose__);
  FUN_02d965b8(Method_System_Collections_Generic_LowLevelList<object>_set_Item__);
  FUN_02d965b8(Method_OVRNativeList<OVRPlugin_DynamicObjectClass>_op_Implicit__);
  *(undefined1 *)(unaff_x23 + 0xeaf) = 1;
  uVar16 = *(undefined8 *)(unaff_x20 + 0x50);
  in_stack_000000a0 = 0;
  in_stack_000000a8 = 0;
  in_stack_00000098 = (long *)0x0;
  in_stack_00000030 = 0;
  in_stack_00000038 = (undefined8 *)0x0;
  in_stack_00000058 = 0;
  in_stack_00000050 = 0;
  in_stack_00000068 = 0;
  in_stack_00000060 = 0;
  in_stack_00000078 = 0;
  in_stack_00000070 = 0;
  in_stack_00000088 = 0;
  in_stack_00000080 = 0;
  in_stack_00000040 = 0;
  if (*(int *)(*unaff_x26 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar8 = FUN_063542dc(uVar16,0);
  if ((uVar8 & 1) == 0) {
    return;
  }
  if (*(int *)(*unaff_x26 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar8 = FUN_063542dc();
  if ((uVar8 & 1) == 0) {
    if (*(int *)(*(long *)PTR_DAT_069fb930 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    FUN_06309d28(*(undefined8 *)Method_OVRNativeList<OVRPlugin_DynamicObjectClass>__ctor__,0);
    return;
  }
  if ((unaff_x19 == 0) || (*(long *)(unaff_x20 + 0x20) == 0)) goto LAB_05ecf67c;
  uVar8 = FUN_04ff1c80(*(long *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x19 + 0x80),
                       *(undefined8 *)
                        Method_System_Collections_Generic_List<ClassDataContract_ClassDataContractCriticalHelper_Member>__ctor__
                      );
  lVar9 = *(long *)(unaff_x20 + 0x50);
  if ((uVar8 & 1) == 0) {
    if (lVar9 != 0) {
      if (*(char *)(lVar9 + 0x88) != '\0') {
        return;
      }
      in_stack_00000010 = *(undefined8 *)(unaff_x19 + 0x80);
      uVar16 = thunk_FUN_02dd2d7c(*(undefined8 *)(PTR_DAT_069fb9c0 + 0x70),&stack0x00000010);
      uVar16 = FUN_0536388c(*(undefined8 *)
                             Method_OVRNativeList<OVRPlugin_DynamicObjectClass>_op_Implicit__,uVar16
                            ,0);
      if (*(int *)(*(long *)PTR_DAT_069fb930 + 0xe4) == 0) {
        thunk_FUN_02df485c(*(long *)PTR_DAT_069fb930);
      }
      FUN_06309d28(uVar16,0);
      return;
    }
    goto LAB_05ecf67c;
  }
  if (lVar9 == 0) goto LAB_05ecf67c;
  cVar1 = *(char *)(lVar9 + 0x30);
  if ((*(char *)(lVar9 + 0x88) == '\0') &&
     ((uVar8 = FUN_05e5e6d0(lVar9,0), cVar1 != '\0' || ((uVar8 & 1) != 0)))) {
    lVar9 = FUN_035abb34();
    if (lVar9 == 0) goto LAB_05ecf67c;
    if (0 < (int)*(ulong *)(lVar9 + 0x18)) {
      uVar8 = 0;
      uVar13 = *(ulong *)(lVar9 + 0x18) & 0xffffffff;
      do {
        if (uVar13 <= uVar8) goto LAB_05ecf494;
        lVar17 = *(long *)(lVar9 + 0x20 + uVar8 * 8);
        if (*(int *)(*unaff_x26 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        uVar13 = FUN_06350670(lVar17);
        if ((uVar13 & 1) == 0) {
          if (lVar17 == 0) goto LAB_05ecf67c;
          in_stack_000000a8 = *(undefined8 *)(lVar17 + 0x100);
          in_stack_000000a0 = *(ulong *)(lVar17 + 0xf8);
          if (((in_stack_000000a0 & 0xff) == 0) ||
             (lVar10 = FUN_043382ac(&stack0x000000a0,
                                    *(undefined8 *)
                                     System_Runtime_CompilerServices_IStrongBox___TypeInfo),
             lVar10 == *(long *)(unaff_x19 + 0x80))) {
            if (cVar1 == '\0') {
              bVar6 = 0;
            }
            else {
              bVar6 = FUN_05e6f878(lVar17,0);
              bVar6 = bVar6 ^ 1;
            }
            *(byte *)(lVar17 + 0x111) = bVar6 & 1;
            uVar13 = FUN_05e74488(lVar17,0);
            iVar7 = FUN_05e76758(0);
            if ((uVar13 & 1) == 0) {
              if (iVar7 < 2) {
                plVar11 = (long *)FUN_02d966a4(*(undefined8 *)PTR_DAT_069fc180,4);
                if (plVar11 == (long *)0x0) goto LAB_05ecf67c;
                if ((*(long *)Method_System_Collections_Generic_LowLevelList<object>_set_Item__ != 0
                    ) && (lVar10 = thunk_FUN_02dd3048(*(long *)
                                                  Method_System_Collections_Generic_LowLevelList<object>_set_Item__
                                                  ,*(undefined8 *)(*plVar11 + 0x40)), lVar10 == 0))
                goto LAB_05ecf4a8;
                if ((int)plVar11[3] == 0) goto LAB_05ecf494;
                plVar11[4] = *(long *)
                              Method_System_Collections_Generic_LowLevelList<object>_set_Item__;
                LeanTween__value();
                in_stack_00000010 = *(undefined8 *)(lVar17 + 0x80);
                lVar17 = thunk_FUN_02dd2d7c(*(undefined8 *)(PTR_DAT_069fb9c0 + 0x70),
                                            &stack0x00000010);
                if ((lVar17 != 0) &&
                   (lVar10 = thunk_FUN_02dd3048(lVar17,*(undefined8 *)(*plVar11 + 0x40)),
                   lVar10 == 0)) goto LAB_05ecf4a8;
                if ((*(uint *)(plVar11 + 3) & 0xfffffffe) == 0) goto LAB_05ecf494;
                plVar11[5] = lVar17;
                LeanTween__value(plVar11 + 5,lVar17);
                if ((*(long *)Method_System_Collections_Generic_LowLevelList<object>_set_Item__ != 0
                    ) && (lVar17 = thunk_FUN_02dd3048(*(long *)
                                                  Method_System_Collections_Generic_LowLevelList<object>_set_Item__
                                                  ,*(undefined8 *)(*plVar11 + 0x40)), lVar17 == 0))
                goto LAB_05ecf4a8;
                if (*(uint *)(plVar11 + 3) < 3) goto LAB_05ecf494;
                plVar11[6] = *(long *)
                              Method_System_Collections_Generic_LowLevelList<object>_set_Item__;
                LeanTween__value();
                in_stack_00000028 = *(undefined8 *)(unaff_x19 + 0x80);
                lVar17 = thunk_FUN_02dd2d7c(*(undefined8 *)(PTR_DAT_069fb9c0 + 0x70),
                                            &stack0x00000028);
                if ((lVar17 != 0) &&
                   (lVar10 = thunk_FUN_02dd3048(lVar17,*(undefined8 *)(*plVar11 + 0x40)),
                   lVar10 == 0)) goto LAB_05ecf4a8;
                if ((*(uint *)(plVar11 + 3) & 0xfffffffc) == 0) goto LAB_05ecf494;
                plVar11[7] = lVar17;
                LeanTween__value(plVar11 + 7,lVar17);
                uVar16 = FUN_0536e164(*(undefined8 *)
                                       Method_OVRNativeList<OVRPlugin_DynamicObjectClass>_Add__,
                                      plVar11,0);
                FUN_05e6f7ec(uVar16,0);
              }
            }
            else if (iVar7 < 1) {
              plVar11 = (long *)FUN_02d966a4(*(undefined8 *)PTR_DAT_069fc180,4);
              if (plVar11 == (long *)0x0) goto LAB_05ecf67c;
              if ((*(long *)Method_System_Collections_Generic_LowLevelList<object>_set_Item__ != 0)
                 && (lVar10 = thunk_FUN_02dd3048(*(long *)
                                                  Method_System_Collections_Generic_LowLevelList<object>_set_Item__
                                                 ,*(undefined8 *)(*plVar11 + 0x40)), lVar10 == 0)) {
LAB_05ecf4a8:
                uVar16 = thunk_FUN_02de0bec();
                    /* WARNING: Subroutine does not return */
                FUN_02d96724(uVar16,0);
              }
              if ((int)plVar11[3] == 0) {
LAB_05ecf494:
                    /* WARNING: Subroutine does not return */
                FUN_02d96868();
              }
              plVar11[4] = *(long *)
                            Method_System_Collections_Generic_LowLevelList<object>_set_Item__;
              LeanTween__value();
              in_stack_00000010 = *(undefined8 *)(lVar17 + 0x80);
              lVar17 = thunk_FUN_02dd2d7c(*(undefined8 *)(PTR_DAT_069fb9c0 + 0x70),&stack0x00000010)
              ;
              if ((lVar17 != 0) &&
                 (lVar10 = thunk_FUN_02dd3048(lVar17,*(undefined8 *)(*plVar11 + 0x40)), lVar10 == 0)
                 ) goto LAB_05ecf4a8;
              if ((*(uint *)(plVar11 + 3) & 0xfffffffe) == 0) goto LAB_05ecf494;
              plVar11[5] = lVar17;
              LeanTween__value(plVar11 + 5,lVar17);
              if ((*(long *)Method_System_Collections_Generic_LowLevelList<object>_set_Item__ != 0)
                 && (lVar17 = thunk_FUN_02dd3048(*(long *)
                                                  Method_System_Collections_Generic_LowLevelList<object>_set_Item__
                                                 ,*(undefined8 *)(*plVar11 + 0x40)), lVar17 == 0))
              goto LAB_05ecf4a8;
              if (*(uint *)(plVar11 + 3) < 3) goto LAB_05ecf494;
              plVar11[6] = *(long *)
                            Method_System_Collections_Generic_LowLevelList<object>_set_Item__;
              LeanTween__value();
              in_stack_00000028 = *(undefined8 *)(unaff_x19 + 0x80);
              lVar17 = thunk_FUN_02dd2d7c(*(undefined8 *)(PTR_DAT_069fb9c0 + 0x70),&stack0x00000028)
              ;
              if ((lVar17 != 0) &&
                 (lVar10 = thunk_FUN_02dd3048(lVar17,*(undefined8 *)(*plVar11 + 0x40)), lVar10 == 0)
                 ) goto LAB_05ecf4a8;
              if ((*(uint *)(plVar11 + 3) & 0xfffffffc) == 0) goto LAB_05ecf494;
              plVar11[7] = lVar17;
              LeanTween__value(plVar11 + 7,lVar17);
              uVar16 = FUN_0536e164(*(undefined8 *)
                                     Method_OVRNativeList<OVRPlugin_DynamicObjectClass>_Dispose__,
                                    plVar11,0);
              FUN_05e70210(uVar16,0);
            }
          }
        }
        uVar13 = (ulong)*(uint *)(lVar9 + 0x18);
        uVar8 = uVar8 + 1;
      } while ((long)uVar8 < (long)(int)*(uint *)(lVar9 + 0x18));
    }
  }
  FUN_05e762bc();
  uVar16 = *(undefined8 *)(unaff_x20 + 0x50);
  if (*(int *)(*unaff_x26 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar8 = FUN_0634eb94(uVar16,0,0);
  if ((uVar8 & 1) != 0) {
    if (*(long *)(unaff_x20 + 0x50) == 0) goto LAB_05ecf67c;
    uVar8 = FUN_05e5e6d0(*(long *)(unaff_x20 + 0x50),0);
    if ((uVar8 & 1) == 0) {
      if (cVar1 == '\0') goto LAB_05ecf568;
LAB_05ecefc0:
      if (*(long *)(unaff_x20 + 0x50) == 0) goto LAB_05ecf67c;
      lVar17 = *(long *)(unaff_x19 + 0x88);
      lVar9 = FUN_05e5e724(*(long *)(unaff_x20 + 0x50),0);
      if (lVar17 != lVar9) goto LAB_05ecf568;
    }
    else if ((cVar1 != '\0') && ((unaff_x22 & 1) == 0)) goto LAB_05ecefc0;
    lVar9 = *(long *)(unaff_x20 + 0x50);
    if ((lVar9 == 0) || (*(long *)(lVar9 + 0x90) == 0)) goto LAB_05ecf67c;
    if (*(char *)(*(long *)(lVar9 + 0x90) + 0x53) != '\0') {
      if (*(long *)(lVar9 + 0x118) == 0) goto LAB_05ecf67c;
      lVar9 = *(long *)(unaff_x20 + 0x58);
      uVar16 = *(undefined8 *)(unaff_x19 + 0x80);
      uVar18 = FUN_0297bd6c(1,*(undefined8 *)PTR_DAT_06a12010);
      if (lVar9 == 0) goto LAB_05ecf67c;
      FUN_044e4fd0(lVar9,uVar16,uVar18,
                   *(undefined8 *)Method_OVRNativeList<OVRAnchor_FilterUnion>_get_Count__);
    }
    lVar9 = *(long *)(unaff_x20 + 0x68);
    if (lVar9 == 0) goto LAB_05ecf67c;
    *(undefined4 *)(lVar9 + 0x18) = 0;
    *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
    if (*(long *)(unaff_x20 + 0x50) == 0) goto LAB_05ecf67c;
    uVar8 = FUN_05e5e6d0(*(long *)(unaff_x20 + 0x50),0);
    if ((uVar8 & 1) != 0) {
      if ((*(long *)(unaff_x20 + 0x50) == 0) ||
         (lVar9 = FUN_05e6bcf4(*(long *)(unaff_x20 + 0x50),0), lVar9 == 0)) goto LAB_05ecf67c;
      iVar7 = FUN_0297bd6c(0,*(undefined8 *)
                              Method_Oculus_Platform_Message<AppDownloadResult>__ctor__,lVar9);
      if (0 < iVar7) {
        if (cVar1 == '\0') {
LAB_05ecf138:
          if ((*(long *)(unaff_x20 + 0x50) != 0) &&
             (lVar9 = FUN_05e5e70c(*(long *)(unaff_x20 + 0x50),0), lVar9 != 0)) {
            plVar11 = (long *)FUN_0297bd6c(0,*(undefined8 *)PTR_DAT_06a002f0,lVar9);
            puVar5 = PTR_DAT_06a0e4b8;
            puVar4 = PTR_DAT_06a002f8;
            puVar3 = PTR_DAT_069fbff8;
            in_stack_00000018 = &stack0x00000098;
            in_stack_00000010 = 0;
joined_r0x05ecf170:
            do {
              do {
                do {
                  do {
                    in_stack_00000098 = plVar11;
                    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_02d96860();
                    }
                    lVar9 = *plVar11;
                    uVar8 = (ulong)*(ushort *)(lVar9 + 0x12e);
                    if (uVar8 != 0) {
                      piVar15 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar15 + -2) == *(long *)puVar3) {
                          puVar12 = (undefined8 *)(lVar9 + (long)*piVar15 * 0x10 + 0x138);
                          goto LAB_05ecf1e4;
                        }
                        uVar8 = uVar8 - 1;
                        piVar15 = piVar15 + 4;
                      } while (uVar8 != 0);
                    }
                    puVar12 = (undefined8 *)FUN_02dd004c(plVar11,*(long *)puVar3,0);
LAB_05ecf1e4:
                    uVar8 = (*(code *)*puVar12)(plVar11,puVar12[1]);
                    plVar11 = in_stack_00000098;
                    if ((uVar8 & 1) == 0) {
                      FUN_029794b4(&stack0x00000010);
                      goto LAB_05ecf328;
                    }
                    if (in_stack_00000098 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_02d96860();
                    }
                    lVar9 = *in_stack_00000098;
                    uVar8 = (ulong)*(ushort *)(lVar9 + 0x12e);
                    if (uVar8 != 0) {
                      piVar15 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar15 + -2) == *(long *)puVar4) {
                          puVar12 = (undefined8 *)(lVar9 + (long)*piVar15 * 0x10 + 0x138);
                          goto LAB_05ecf248;
                        }
                        uVar8 = uVar8 - 1;
                        piVar15 = piVar15 + 4;
                      } while (uVar8 != 0);
                    }
                    puVar12 = (undefined8 *)FUN_02dd004c(in_stack_00000098,*(long *)puVar4,0);
LAB_05ecf248:
                    lVar9 = (*(code *)*puVar12)(plVar11,puVar12[1]);
                  } while ((cVar1 != '\0') &&
                          (plVar11 = in_stack_00000098, lVar9 == *(long *)(unaff_x19 + 0x88)));
                  if (*(long *)(unaff_x20 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02d96860();
                  }
                  lVar17 = FUN_05e5e724(*(long *)(unaff_x20 + 0x50),0);
                  plVar11 = in_stack_00000098;
                } while (lVar9 == lVar17);
                if (DAT_06dc3b9b == '\0') {
                  FUN_02d965b8(puVar5);
                  DAT_06dc3b9b = '\x01';
                }
                plVar11 = in_stack_00000098;
              } while (*(char *)(unaff_x19 + 0x9b) == '\0');
              if (*(long *)(unaff_x19 + 0xd0) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              uVar8 = FUN_03c5ecb0(*(long *)(unaff_x19 + 0xd0),lVar9,*(undefined8 *)puVar5);
              plVar11 = in_stack_00000098;
            } while ((uVar8 & 1) == 0);
            lVar17 = *(long *)(unaff_x20 + 0x68);
            if (lVar17 != 0) {
              lVar10 = *(long *)(lVar17 + 0x10);
              lVar14 = *(long *)PTR_DAT_06a149c0;
              *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 1;
              if (lVar10 != 0) {
                uVar2 = *(uint *)(lVar17 + 0x18);
                if (uVar2 < *(uint *)(lVar10 + 0x18)) {
                  *(uint *)(lVar17 + 0x18) = uVar2 + 1;
                  *(long *)(lVar10 + (long)(int)uVar2 * 8 + 0x20) = lVar9;
                }
                else {
                  FUN_0408dbe4(lVar17,lVar9,
                               *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
                  plVar11 = in_stack_00000098;
                }
                goto joined_r0x05ecf170;
              }
            }
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          goto LAB_05ecf67c;
        }
        if (*(long *)(unaff_x20 + 0x50) == 0) goto LAB_05ecf67c;
        uVar8 = FUN_05e62820(*(long *)(unaff_x20 + 0x50),0);
        if ((uVar8 & 1) != 0) {
          if (*(long *)(unaff_x20 + 0x50) == 0) goto LAB_05ecf67c;
          lVar17 = *(long *)(unaff_x19 + 0x88);
          lVar9 = FUN_05e5e724(*(long *)(unaff_x20 + 0x50),0);
          if ((lVar17 == lVar9) || ((unaff_x22 & 1) != 0)) goto LAB_05ecf138;
        }
      }
    }
    if (*(long *)(unaff_x20 + 0x50) == 0) goto LAB_05ecf67c;
    uVar8 = FUN_05e5e6d0(*(long *)(unaff_x20 + 0x50),0);
    if ((cVar1 != '\0') && ((uVar8 & 1) == 0)) {
      if (*(long *)(unaff_x20 + 0x50) == 0) goto LAB_05ecf67c;
      lVar17 = *(long *)(unaff_x19 + 0x88);
      lVar9 = FUN_05e5e724(*(long *)(unaff_x20 + 0x50),0);
      if (lVar17 == lVar9) {
        if (*(long *)(unaff_x20 + 0x50) == 0) goto LAB_05ecf67c;
        if ((*(char *)(*(long *)(unaff_x20 + 0x50) + 0x88) == '\0') ||
           (*(char *)(unaff_x19 + 200) == '\0')) {
          if (*(long *)(unaff_x20 + 0x68) == 0) goto LAB_05ecf67c;
          FUN_02d4b438(*(long *)(unaff_x20 + 0x68),0,*(undefined8 *)PTR_DAT_06a149c0);
        }
      }
    }
LAB_05ecf328:
    if (*(long *)(unaff_x20 + 0x68) == 0) goto LAB_05ecf67c;
    if (0 < *(int *)(*(long *)(unaff_x20 + 0x68) + 0x18)) {
      if (*(long *)(unaff_x20 + 0x50) == 0) goto LAB_05ecf67c;
      if (*(char *)(*(long *)(unaff_x20 + 0x50) + 0x88) == '\0') {
        in_stack_00000050 = *(undefined8 *)(unaff_x19 + 0x80);
        in_stack_00000068 = 0;
        in_stack_00000060 = 0;
        in_stack_00000058 = (ulong)*(uint *)(unaff_x19 + 0x48) << 0x20;
        in_stack_00000058 = CONCAT71(in_stack_00000058._1_7_,unaff_w21) & 0xffffffffffffff01;
        FUN_05e885a0(&stack0x00000050,0,0);
        in_stack_00000068 = CONCAT71(in_stack_00000068._1_7_,cVar1);
        in_stack_00000078 = in_stack_00000058;
        in_stack_00000070 = in_stack_00000050;
        in_stack_00000088 = in_stack_00000068;
        in_stack_00000080 = in_stack_00000060;
        if (*(long *)(unaff_x20 + 0x68) == 0) goto LAB_05ecf67c;
        FUN_0408e660(&stack0x00000010,*(long *)(unaff_x20 + 0x68),
                     *(undefined8 *)
                      Method_System_Collections_Generic_List<TemplateAsset_UxmlSerializedDataOverride>_GetEnumerator__
                    );
        puVar5 = Method_System_Memory<byte>_get_Length__;
        puVar4 = 
        Method_System_Collections_Generic_List<TMP_MaterialManager_MaskingMaterial>_RemoveAt__;
        puVar3 = PTR_DAT_06a0e238;
        in_stack_00000038 = in_stack_00000018;
        in_stack_00000030 = in_stack_00000010;
        in_stack_00000018 = &stack0x00000030;
        in_stack_00000040 = in_stack_00000020;
        in_stack_00000010 = 0;
        while (uVar8 = FUN_051706f4(&stack0x00000030,*(undefined8 *)puVar4),
              uVar16 = in_stack_00000040, (uVar8 & 1) != 0) {
          if (*(long *)(unaff_x20 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          lVar9 = *(long *)(*(long *)(unaff_x20 + 0x50) + 0x128);
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          FUN_036f3340(lVar9,&stack0x00000070,3,in_stack_00000040,*(undefined8 *)puVar5);
          if (*(long *)(unaff_x20 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          plVar11 = (long *)FUN_05e63228(*(long *)(unaff_x20 + 0x50),0);
          if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          lVar9 = *plVar11;
          uVar8 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar8 != 0) {
            piVar15 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == *(long *)puVar3) {
                puVar12 = (undefined8 *)(lVar9 + (long)(*piVar15 + 0x11) * 0x10 + 0x138);
                goto LAB_05ecf478;
              }
              uVar8 = uVar8 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar8 != 0);
          }
          puVar12 = (undefined8 *)FUN_02dd004c(plVar11,*(long *)puVar3,0x11);
LAB_05ecf478:
          (*(code *)*puVar12)(plVar11,uVar16);
        }
        FUN_02d49b94(&stack0x00000010);
      }
    }
  }
LAB_05ecf568:
  FUN_05e73a90();
  if (*(long *)(unaff_x20 + 0x20) == 0) goto LAB_05ecf67c;
  uVar8 = FUN_04ff2f1c(*(long *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x19 + 0x80),
                       *(undefined8 *)
                        Method_System_Collections_Generic_List<ClassDataContract_ClassDataContractCriticalHelper_Member>_Add__
                      );
  if ((uVar8 & 1) != 0) {
    if (*(long *)(unaff_x20 + 0x28) == 0) goto LAB_05ecf67c;
    FUN_03c232ec();
  }
  if (*(char *)(unaff_x19 + 0x99) != '\0') {
    FUN_05ec8b98();
  }
  uVar16 = FUN_0634bbcc();
  if ((unaff_w21 & 1) != 0) {
    if (*(int *)(*unaff_x26 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    uVar8 = FUN_0634eb94(uVar16,0,0);
    if ((uVar8 & 1) != 0) {
      if ((*(long *)(unaff_x20 + 0x50) == 0) ||
         (lVar9 = FUN_05e634b8(*(long *)(unaff_x20 + 0x50),0), lVar9 == 0)) {
LAB_05ecf67c:
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      uVar8 = FUN_05ec7a30();
      if ((uVar8 & 1) == 0) {
        if (*(int *)(*unaff_x26 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        FUN_063550b4(uVar16,0);
      }
      else {
        if ((*(long *)(unaff_x20 + 0x50) == 0) ||
           (lVar9 = FUN_05e634b8(*(long *)(unaff_x20 + 0x50),0), lVar9 == 0)) goto LAB_05ecf67c;
        FUN_05ec7ce0();
      }
    }
  }
  return;
}


