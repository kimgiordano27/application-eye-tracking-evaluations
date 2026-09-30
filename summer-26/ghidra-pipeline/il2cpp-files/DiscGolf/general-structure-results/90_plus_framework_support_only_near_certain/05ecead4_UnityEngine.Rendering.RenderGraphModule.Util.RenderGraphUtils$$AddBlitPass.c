/*
FUNCTION_NAME: UnityEngine.Rendering.RenderGraphModule.Util.RenderGraphUtils$$AddBlitPass
ENTRY_POINT: 05ecead4
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 108
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_1;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void UnityEngine_Rendering_RenderGraphModule_Util_RenderGraphUtils__AddBlitPass(ulong param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  byte bVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long lVar13;
  int *piVar14;
  long unaff_x19;
  long unaff_x20;
  byte unaff_w21;
  ulong unaff_x22;
  long lVar15;
  long *unaff_x26;
  int unaff_w27;
  ulong uVar16;
  undefined4 uVar17;
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
  
  if ((unaff_w27 != 0) || ((param_1 & 1) != 0)) {
    lVar7 = FUN_035abb34();
    if (lVar7 == 0) goto LAB_05ecf67c;
    if (0 < (int)*(ulong *)(lVar7 + 0x18)) {
      uVar16 = 0;
      uVar12 = *(ulong *)(lVar7 + 0x18) & 0xffffffff;
      do {
        if (uVar12 <= uVar16) goto LAB_05ecf494;
        lVar15 = *(long *)(lVar7 + 0x20 + uVar16 * 8);
        if (*(int *)(*unaff_x26 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        uVar12 = FUN_06350670(lVar15);
        if ((uVar12 & 1) == 0) {
          if (lVar15 == 0) goto LAB_05ecf67c;
          in_stack_000000a8 = *(undefined8 *)(lVar15 + 0x100);
          in_stack_000000a0 = *(ulong *)(lVar15 + 0xf8);
          if (((in_stack_000000a0 & 0xff) == 0) ||
             (lVar8 = FUN_043382ac(&stack0x000000a0,
                                   *(undefined8 *)
                                    System_Runtime_CompilerServices_IStrongBox___TypeInfo),
             lVar8 == *(long *)(unaff_x19 + 0x80))) {
            if (unaff_w27 == 0) {
              bVar5 = 0;
            }
            else {
              bVar5 = FUN_05e6f878(lVar15,0);
              bVar5 = bVar5 ^ 1;
            }
            *(byte *)(lVar15 + 0x111) = bVar5 & 1;
            uVar12 = FUN_05e74488(lVar15,0);
            iVar6 = FUN_05e76758(0);
            if ((uVar12 & 1) == 0) {
              if (iVar6 < 2) {
                plVar9 = (long *)FUN_02d966a4(*(undefined8 *)PTR_DAT_069fc180,4);
                if (plVar9 == (long *)0x0) goto LAB_05ecf67c;
                if ((*(long *)Method_System_Collections_Generic_LowLevelList<object>_set_Item__ != 0
                    ) && (lVar8 = thunk_FUN_02dd3048(*(long *)
                                                  Method_System_Collections_Generic_LowLevelList<object>_set_Item__
                                                  ,*(undefined8 *)(*plVar9 + 0x40)), lVar8 == 0))
                goto LAB_05ecf4a8;
                if ((int)plVar9[3] == 0) goto LAB_05ecf494;
                plVar9[4] = *(long *)
                             Method_System_Collections_Generic_LowLevelList<object>_set_Item__;
                LeanTween__value();
                in_stack_00000010 = *(undefined8 *)(lVar15 + 0x80);
                lVar15 = thunk_FUN_02dd2d7c(*(undefined8 *)(PTR_DAT_069fb9c0 + 0x70),
                                            &stack0x00000010);
                if ((lVar15 != 0) &&
                   (lVar8 = thunk_FUN_02dd3048(lVar15,*(undefined8 *)(*plVar9 + 0x40)), lVar8 == 0))
                goto LAB_05ecf4a8;
                if ((*(uint *)(plVar9 + 3) & 0xfffffffe) == 0) goto LAB_05ecf494;
                plVar9[5] = lVar15;
                LeanTween__value(plVar9 + 5,lVar15);
                if ((*(long *)Method_System_Collections_Generic_LowLevelList<object>_set_Item__ != 0
                    ) && (lVar15 = thunk_FUN_02dd3048(*(long *)
                                                  Method_System_Collections_Generic_LowLevelList<object>_set_Item__
                                                  ,*(undefined8 *)(*plVar9 + 0x40)), lVar15 == 0))
                goto LAB_05ecf4a8;
                if (*(uint *)(plVar9 + 3) < 3) goto LAB_05ecf494;
                plVar9[6] = *(long *)
                             Method_System_Collections_Generic_LowLevelList<object>_set_Item__;
                LeanTween__value();
                in_stack_00000028 = *(undefined8 *)(unaff_x19 + 0x80);
                lVar15 = thunk_FUN_02dd2d7c(*(undefined8 *)(PTR_DAT_069fb9c0 + 0x70),
                                            &stack0x00000028);
                if ((lVar15 != 0) &&
                   (lVar8 = thunk_FUN_02dd3048(lVar15,*(undefined8 *)(*plVar9 + 0x40)), lVar8 == 0))
                goto LAB_05ecf4a8;
                if ((*(uint *)(plVar9 + 3) & 0xfffffffc) == 0) goto LAB_05ecf494;
                plVar9[7] = lVar15;
                LeanTween__value(plVar9 + 7,lVar15);
                uVar10 = FUN_0536e164(*(undefined8 *)
                                       Method_OVRNativeList<OVRPlugin_DynamicObjectClass>_Add__,
                                      plVar9,0);
                FUN_05e6f7ec(uVar10,0);
              }
            }
            else if (iVar6 < 1) {
              plVar9 = (long *)FUN_02d966a4(*(undefined8 *)PTR_DAT_069fc180,4);
              if (plVar9 == (long *)0x0) goto LAB_05ecf67c;
              if ((*(long *)Method_System_Collections_Generic_LowLevelList<object>_set_Item__ != 0)
                 && (lVar8 = thunk_FUN_02dd3048(*(long *)
                                                 Method_System_Collections_Generic_LowLevelList<object>_set_Item__
                                                ,*(undefined8 *)(*plVar9 + 0x40)), lVar8 == 0)) {
LAB_05ecf4a8:
                uVar10 = thunk_FUN_02de0bec();
                    /* WARNING: Subroutine does not return */
                FUN_02d96724(uVar10,0);
              }
              if ((int)plVar9[3] == 0) {
LAB_05ecf494:
                    /* WARNING: Subroutine does not return */
                FUN_02d96868();
              }
              plVar9[4] = *(long *)Method_System_Collections_Generic_LowLevelList<object>_set_Item__
              ;
              LeanTween__value();
              in_stack_00000010 = *(undefined8 *)(lVar15 + 0x80);
              lVar15 = thunk_FUN_02dd2d7c(*(undefined8 *)(PTR_DAT_069fb9c0 + 0x70),&stack0x00000010)
              ;
              if ((lVar15 != 0) &&
                 (lVar8 = thunk_FUN_02dd3048(lVar15,*(undefined8 *)(*plVar9 + 0x40)), lVar8 == 0))
              goto LAB_05ecf4a8;
              if ((*(uint *)(plVar9 + 3) & 0xfffffffe) == 0) goto LAB_05ecf494;
              plVar9[5] = lVar15;
              LeanTween__value(plVar9 + 5,lVar15);
              if ((*(long *)Method_System_Collections_Generic_LowLevelList<object>_set_Item__ != 0)
                 && (lVar15 = thunk_FUN_02dd3048(*(long *)
                                                  Method_System_Collections_Generic_LowLevelList<object>_set_Item__
                                                 ,*(undefined8 *)(*plVar9 + 0x40)), lVar15 == 0))
              goto LAB_05ecf4a8;
              if (*(uint *)(plVar9 + 3) < 3) goto LAB_05ecf494;
              plVar9[6] = *(long *)Method_System_Collections_Generic_LowLevelList<object>_set_Item__
              ;
              LeanTween__value();
              in_stack_00000028 = *(undefined8 *)(unaff_x19 + 0x80);
              lVar15 = thunk_FUN_02dd2d7c(*(undefined8 *)(PTR_DAT_069fb9c0 + 0x70),&stack0x00000028)
              ;
              if ((lVar15 != 0) &&
                 (lVar8 = thunk_FUN_02dd3048(lVar15,*(undefined8 *)(*plVar9 + 0x40)), lVar8 == 0))
              goto LAB_05ecf4a8;
              if ((*(uint *)(plVar9 + 3) & 0xfffffffc) == 0) goto LAB_05ecf494;
              plVar9[7] = lVar15;
              LeanTween__value(plVar9 + 7,lVar15);
              uVar10 = FUN_0536e164(*(undefined8 *)
                                     Method_OVRNativeList<OVRPlugin_DynamicObjectClass>_Dispose__,
                                    plVar9,0);
              FUN_05e70210(uVar10,0);
            }
          }
        }
        uVar12 = (ulong)*(uint *)(lVar7 + 0x18);
        uVar16 = uVar16 + 1;
      } while ((long)uVar16 < (long)(int)*(uint *)(lVar7 + 0x18));
    }
  }
  FUN_05e762bc();
  uVar10 = *(undefined8 *)(unaff_x20 + 0x50);
  if (*(int *)(*unaff_x26 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar16 = FUN_0634eb94(uVar10,0,0);
  if ((uVar16 & 1) != 0) {
    if (*(long *)(unaff_x20 + 0x50) == 0) goto LAB_05ecf67c;
    uVar16 = FUN_05e5e6d0(*(long *)(unaff_x20 + 0x50),0);
    if ((uVar16 & 1) == 0) {
      if (unaff_w27 == 0) goto LAB_05ecf568;
LAB_05ecefc0:
      if (*(long *)(unaff_x20 + 0x50) == 0) goto LAB_05ecf67c;
      lVar15 = *(long *)(unaff_x19 + 0x88);
      lVar7 = FUN_05e5e724(*(long *)(unaff_x20 + 0x50),0);
      if (lVar15 != lVar7) goto LAB_05ecf568;
    }
    else if ((unaff_w27 != 0) && ((unaff_x22 & 1) == 0)) goto LAB_05ecefc0;
    lVar7 = *(long *)(unaff_x20 + 0x50);
    if ((lVar7 == 0) || (*(long *)(lVar7 + 0x90) == 0)) goto LAB_05ecf67c;
    if (*(char *)(*(long *)(lVar7 + 0x90) + 0x53) != '\0') {
      if (*(long *)(lVar7 + 0x118) == 0) goto LAB_05ecf67c;
      lVar7 = *(long *)(unaff_x20 + 0x58);
      uVar10 = *(undefined8 *)(unaff_x19 + 0x80);
      uVar17 = FUN_0297bd6c(1,*(undefined8 *)PTR_DAT_06a12010);
      if (lVar7 == 0) goto LAB_05ecf67c;
      FUN_044e4fd0(lVar7,uVar10,uVar17,
                   *(undefined8 *)Method_OVRNativeList<OVRAnchor_FilterUnion>_get_Count__);
    }
    lVar7 = *(long *)(unaff_x20 + 0x68);
    if (lVar7 == 0) goto LAB_05ecf67c;
    *(undefined4 *)(lVar7 + 0x18) = 0;
    *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
    if (*(long *)(unaff_x20 + 0x50) == 0) goto LAB_05ecf67c;
    uVar16 = FUN_05e5e6d0(*(long *)(unaff_x20 + 0x50),0);
    if ((uVar16 & 1) != 0) {
      if ((*(long *)(unaff_x20 + 0x50) == 0) ||
         (lVar7 = FUN_05e6bcf4(*(long *)(unaff_x20 + 0x50),0), lVar7 == 0)) goto LAB_05ecf67c;
      iVar6 = FUN_0297bd6c(0,*(undefined8 *)
                              Method_Oculus_Platform_Message<AppDownloadResult>__ctor__,lVar7);
      if (0 < iVar6) {
        if (unaff_w27 == 0) {
LAB_05ecf138:
          if ((*(long *)(unaff_x20 + 0x50) != 0) &&
             (lVar7 = FUN_05e5e70c(*(long *)(unaff_x20 + 0x50),0), lVar7 != 0)) {
            plVar9 = (long *)FUN_0297bd6c(0,*(undefined8 *)PTR_DAT_06a002f0,lVar7);
            puVar4 = PTR_DAT_06a0e4b8;
            puVar3 = PTR_DAT_06a002f8;
            puVar2 = PTR_DAT_069fbff8;
            in_stack_00000018 = &stack0x00000098;
            in_stack_00000010 = 0;
joined_r0x05ecf170:
            do {
              do {
                do {
                  do {
                    in_stack_00000098 = plVar9;
                    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_02d96860();
                    }
                    lVar7 = *plVar9;
                    uVar16 = (ulong)*(ushort *)(lVar7 + 0x12e);
                    if (uVar16 != 0) {
                      piVar14 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar14 + -2) == *(long *)puVar2) {
                          puVar11 = (undefined8 *)(lVar7 + (long)*piVar14 * 0x10 + 0x138);
                          goto LAB_05ecf1e4;
                        }
                        uVar16 = uVar16 - 1;
                        piVar14 = piVar14 + 4;
                      } while (uVar16 != 0);
                    }
                    puVar11 = (undefined8 *)FUN_02dd004c(plVar9,*(long *)puVar2,0);
LAB_05ecf1e4:
                    uVar16 = (*(code *)*puVar11)(plVar9,puVar11[1]);
                    plVar9 = in_stack_00000098;
                    if ((uVar16 & 1) == 0) {
                      FUN_029794b4(&stack0x00000010);
                      goto LAB_05ecf328;
                    }
                    if (in_stack_00000098 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_02d96860();
                    }
                    lVar7 = *in_stack_00000098;
                    uVar16 = (ulong)*(ushort *)(lVar7 + 0x12e);
                    if (uVar16 != 0) {
                      piVar14 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
                          puVar11 = (undefined8 *)(lVar7 + (long)*piVar14 * 0x10 + 0x138);
                          goto LAB_05ecf248;
                        }
                        uVar16 = uVar16 - 1;
                        piVar14 = piVar14 + 4;
                      } while (uVar16 != 0);
                    }
                    puVar11 = (undefined8 *)FUN_02dd004c(in_stack_00000098,*(long *)puVar3,0);
LAB_05ecf248:
                    lVar7 = (*(code *)*puVar11)(plVar9,puVar11[1]);
                  } while ((unaff_w27 != 0) &&
                          (plVar9 = in_stack_00000098, lVar7 == *(long *)(unaff_x19 + 0x88)));
                  if (*(long *)(unaff_x20 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02d96860();
                  }
                  lVar15 = FUN_05e5e724(*(long *)(unaff_x20 + 0x50),0);
                  plVar9 = in_stack_00000098;
                } while (lVar7 == lVar15);
                if (DAT_06dc3b9b == '\0') {
                  FUN_02d965b8(puVar4);
                  DAT_06dc3b9b = '\x01';
                }
                plVar9 = in_stack_00000098;
              } while (*(char *)(unaff_x19 + 0x9b) == '\0');
              if (*(long *)(unaff_x19 + 0xd0) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              uVar16 = FUN_03c5ecb0(*(long *)(unaff_x19 + 0xd0),lVar7,*(undefined8 *)puVar4);
              plVar9 = in_stack_00000098;
            } while ((uVar16 & 1) == 0);
            lVar15 = *(long *)(unaff_x20 + 0x68);
            if (lVar15 != 0) {
              lVar8 = *(long *)(lVar15 + 0x10);
              lVar13 = *(long *)PTR_DAT_06a149c0;
              *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
              if (lVar8 != 0) {
                uVar1 = *(uint *)(lVar15 + 0x18);
                if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                  *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                  *(long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) = lVar7;
                }
                else {
                  FUN_0408dbe4(lVar15,lVar7,
                               *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
                  plVar9 = in_stack_00000098;
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
        uVar16 = FUN_05e62820(*(long *)(unaff_x20 + 0x50),0);
        if ((uVar16 & 1) != 0) {
          if (*(long *)(unaff_x20 + 0x50) == 0) goto LAB_05ecf67c;
          lVar15 = *(long *)(unaff_x19 + 0x88);
          lVar7 = FUN_05e5e724(*(long *)(unaff_x20 + 0x50),0);
          if ((lVar15 == lVar7) || ((unaff_x22 & 1) != 0)) goto LAB_05ecf138;
        }
      }
    }
    if (*(long *)(unaff_x20 + 0x50) == 0) goto LAB_05ecf67c;
    uVar16 = FUN_05e5e6d0(*(long *)(unaff_x20 + 0x50),0);
    if ((unaff_w27 != 0) && ((uVar16 & 1) == 0)) {
      if (*(long *)(unaff_x20 + 0x50) == 0) goto LAB_05ecf67c;
      lVar15 = *(long *)(unaff_x19 + 0x88);
      lVar7 = FUN_05e5e724(*(long *)(unaff_x20 + 0x50),0);
      if (lVar15 == lVar7) {
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
        in_stack_00000068 = CONCAT71(in_stack_00000068._1_7_,(char)unaff_w27);
        in_stack_00000078 = in_stack_00000058;
        in_stack_00000070 = in_stack_00000050;
        in_stack_00000088 = in_stack_00000068;
        in_stack_00000080 = in_stack_00000060;
        if (*(long *)(unaff_x20 + 0x68) == 0) goto LAB_05ecf67c;
        FUN_0408e660(&stack0x00000010,*(long *)(unaff_x20 + 0x68),
                     *(undefined8 *)
                      Method_System_Collections_Generic_List<TemplateAsset_UxmlSerializedDataOverride>_GetEnumerator__
                    );
        puVar4 = Method_System_Memory<byte>_get_Length__;
        puVar3 = 
        Method_System_Collections_Generic_List<TMP_MaterialManager_MaskingMaterial>_RemoveAt__;
        puVar2 = PTR_DAT_06a0e238;
        in_stack_00000038 = in_stack_00000018;
        in_stack_00000030 = in_stack_00000010;
        in_stack_00000018 = &stack0x00000030;
        in_stack_00000040 = in_stack_00000020;
        in_stack_00000010 = 0;
        while (uVar16 = FUN_051706f4(&stack0x00000030,*(undefined8 *)puVar3),
              uVar10 = in_stack_00000040, (uVar16 & 1) != 0) {
          if (*(long *)(unaff_x20 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          lVar7 = *(long *)(*(long *)(unaff_x20 + 0x50) + 0x128);
          if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          FUN_036f3340(lVar7,&stack0x00000070,3,in_stack_00000040,*(undefined8 *)puVar4);
          if (*(long *)(unaff_x20 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          plVar9 = (long *)FUN_05e63228(*(long *)(unaff_x20 + 0x50),0);
          if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          lVar7 = *plVar9;
          uVar16 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar16 != 0) {
            piVar14 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == *(long *)puVar2) {
                puVar11 = (undefined8 *)(lVar7 + (long)(*piVar14 + 0x11) * 0x10 + 0x138);
                goto LAB_05ecf478;
              }
              uVar16 = uVar16 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar16 != 0);
          }
          puVar11 = (undefined8 *)FUN_02dd004c(plVar9,*(long *)puVar2,0x11);
LAB_05ecf478:
          (*(code *)*puVar11)(plVar9,uVar10);
        }
        FUN_02d49b94(&stack0x00000010);
      }
    }
  }
LAB_05ecf568:
  FUN_05e73a90();
  if (*(long *)(unaff_x20 + 0x20) == 0) goto LAB_05ecf67c;
  uVar16 = FUN_04ff2f1c(*(long *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x19 + 0x80),
                        *(undefined8 *)
                         Method_System_Collections_Generic_List<ClassDataContract_ClassDataContractCriticalHelper_Member>_Add__
                       );
  if ((uVar16 & 1) != 0) {
    if (*(long *)(unaff_x20 + 0x28) == 0) goto LAB_05ecf67c;
    FUN_03c232ec();
  }
  if (*(char *)(unaff_x19 + 0x99) != '\0') {
    FUN_05ec8b98();
  }
  uVar10 = FUN_0634bbcc();
  if ((unaff_w21 & 1) != 0) {
    if (*(int *)(*unaff_x26 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    uVar16 = FUN_0634eb94(uVar10,0,0);
    if ((uVar16 & 1) != 0) {
      if ((*(long *)(unaff_x20 + 0x50) == 0) ||
         (lVar7 = FUN_05e634b8(*(long *)(unaff_x20 + 0x50),0), lVar7 == 0)) {
LAB_05ecf67c:
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      uVar16 = FUN_05ec7a30();
      if ((uVar16 & 1) == 0) {
        if (*(int *)(*unaff_x26 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        FUN_063550b4(uVar10,0);
      }
      else {
        if ((*(long *)(unaff_x20 + 0x50) == 0) ||
           (lVar7 = FUN_05e634b8(*(long *)(unaff_x20 + 0x50),0), lVar7 == 0)) goto LAB_05ecf67c;
        FUN_05ec7ce0();
      }
    }
  }
  return;
}


