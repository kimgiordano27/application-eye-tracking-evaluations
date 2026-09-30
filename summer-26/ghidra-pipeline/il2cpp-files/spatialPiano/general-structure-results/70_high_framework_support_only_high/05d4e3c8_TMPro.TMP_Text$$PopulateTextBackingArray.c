/*
FUNCTION_NAME: TMPro.TMP_Text$$PopulateTextBackingArray
ENTRY_POINT: 05d4e3c8
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x05d4e900) */
/* WARNING: Removing unreachable block (ram,0x05d4e910) */

void TMPro_TMP_Text__PopulateTextBackingArray(long param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x23;
  undefined8 uVar12;
  long unaff_x28;
  undefined1 auVar13 [16];
  undefined1 auVar14 [12];
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000038;
  undefined8 *in_stack_00000040;
  long in_stack_00000048;
  long *in_stack_00000050;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  long in_stack_000003e8;
  
  FUN_02f08768(*(undefined8 *)(param_1 + 0x830));
  FUN_02f08768(Method_OVRAnchor_FetchAnchorsAsync__);
  FUN_02f08768(Method_System_Data_NewDiffgramGen_GenerateColumn__);
  FUN_02f08768(Method_OVRAnchor_FetchAnchorsAsync__);
  FUN_02f08768(Method_OVRAnchor_GetSupportedComponents__);
  *(undefined1 *)(unaff_x21 + 0x8c0) = 1;
  in_stack_00000048 = 0;
  in_stack_00000050 = (long *)0x0;
  memset(&stack0x00000320,0,200);
  memset(&stack0x000001f0,0,0x130);
  if (unaff_x19 == 0) {
    if (*(long *)(unaff_x28 + 0x28) == in_stack_000003e8) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
  }
  else {
    in_stack_00000050 = (long *)FUN_03523990();
    in_stack_00000040 = &stack0x00000050;
    in_stack_00000038 = 0;
    if (unaff_x23 == 0) {
      if (*(long *)(unaff_x28 + 0x28) == in_stack_000003e8) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
    }
    else {
      lVar4 = FUN_05d4c208();
      lVar5 = FUN_05d4c208();
      lVar6 = FUN_05d4c208();
      uVar7 = FUN_05d4c208();
      plVar3 = in_stack_00000050;
      if (lVar6 == 0) {
        if (*(long *)(unaff_x28 + 0x28) == in_stack_000003e8) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
      }
      else if (lVar4 == 0) {
        if (*(long *)(unaff_x28 + 0x28) == in_stack_000003e8) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
      }
      else {
        auVar13 = FUN_05d6dd30(lVar4,0);
        puVar2 = Method_UnityEngine_GraphicsBuffer_LockBufferForWrite<byte>__;
        if (plVar3 == (long *)0x0) {
          if (*(long *)(unaff_x28 + 0x28) == in_stack_000003e8) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
        }
        else {
          lVar9 = *plVar3;
          uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar10 != 0) {
            piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) ==
                  *(long *)Method_UnityEngine_GraphicsBuffer_LockBufferForWrite<byte>__) {
                puVar8 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
                goto LAB_05d4e550;
              }
              uVar10 = uVar10 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar10 != 0);
          }
          puVar8 = (undefined8 *)
                   FUN_02f421d0(plVar3,*(long *)
                                        Method_UnityEngine_GraphicsBuffer_LockBufferForWrite<byte>__
                                ,0);
LAB_05d4e550:
          (*(code *)*puVar8)(plVar3,auVar13._0_8_,auVar13._8_8_,0,2,puVar8[1]);
          plVar3 = in_stack_00000050;
          auVar13 = FUN_05d6de44(lVar4,0);
          if (plVar3 == (long *)0x0) {
            if (*(long *)(unaff_x28 + 0x28) == in_stack_000003e8) {
                    /* WARNING: Subroutine does not return */
              FUN_02f089c8();
            }
          }
          else {
            lVar4 = *plVar3;
            uVar10 = (ulong)*(ushort *)(lVar4 + 0x12e);
            if (uVar10 != 0) {
              piVar11 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
                  puVar8 = (undefined8 *)(lVar4 + (long)(*piVar11 + 4) * 0x10 + 0x138);
                  goto LAB_05d4e5d8;
                }
                uVar10 = uVar10 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar10 != 0);
            }
            puVar8 = (undefined8 *)FUN_02f421d0(plVar3,*(long *)puVar2,4);
LAB_05d4e5d8:
            (*(code *)*puVar8)(plVar3,auVar13._0_8_,auVar13._8_8_,1,puVar8[1]);
            uVar1 = *(undefined4 *)(lVar6 + 0x198);
            uVar12 = *(undefined8 *)(unaff_x20 + 0xd8);
            if (*(int *)(*(long *)
                          Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                        + 0xe4) == 0) {
              thunk_FUN_02f6670c();
            }
            FUN_05db0678(&stack0x00000120,uVar12,lVar5,lVar6,uVar7,uVar1,0);
            memcpy(&stack0x00000320,&stack0x00000120,200);
            if (lVar5 == 0) {
              if (*(long *)(unaff_x28 + 0x28) == in_stack_000003e8) {
                    /* WARNING: Subroutine does not return */
                FUN_02f089c8();
              }
            }
            else {
              in_stack_00000128 = *(undefined8 *)(unaff_x20 + 0xc0);
              in_stack_00000120 = *(undefined8 *)(unaff_x20 + 0xb8);
              in_stack_00000138 = *(undefined8 *)(unaff_x20 + 0xd0);
              in_stack_00000130 = *(undefined8 *)(unaff_x20 + 200);
              uVar7 = *(undefined8 *)(lVar5 + 0x18);
              uVar12 = *(undefined8 *)(lVar5 + 0x20);
              if (*(int *)(*(long *)Method_OVRAnchor_TryGetComponent<OVRStorable>__ + 0xe4) == 0) {
                thunk_FUN_02f6670c();
              }
              memcpy(&stack0x00000058,&stack0x00000320,200);
              in_stack_00000018 = in_stack_00000128;
              in_stack_00000010 = in_stack_00000120;
              in_stack_00000028 = in_stack_00000138;
              in_stack_00000020 = in_stack_00000130;
              FUN_061276f4(&stack0x000001f0,uVar7,uVar12,&stack0x00000058,&stack0x00000010,0);
              lVar4 = in_stack_00000048;
              auVar14 = FUN_05cc687c();
              plVar3 = in_stack_00000050;
              lVar5 = in_stack_00000048;
              if (lVar4 == 0) {
                if (*(long *)(unaff_x28 + 0x28) == in_stack_000003e8) {
                    /* WARNING: Subroutine does not return */
                  FUN_02f089c8();
                }
              }
              else {
                *(undefined1 (*) [12])(lVar4 + 0x10) = auVar14;
                if (in_stack_00000048 == 0) {
                  if (*(long *)(unaff_x28 + 0x28) == in_stack_000003e8) {
                    /* WARNING: Subroutine does not return */
                    FUN_02f089c8();
                  }
                }
                else if (in_stack_00000050 == (long *)0x0) {
                  if (*(long *)(unaff_x28 + 0x28) == in_stack_000003e8) {
                    /* WARNING: Subroutine does not return */
                    FUN_02f089c8();
                  }
                }
                else {
                  lVar4 = *in_stack_00000050;
                  uVar10 = (ulong)*(ushort *)(lVar4 + 0x12e);
                  if (uVar10 != 0) {
                    piVar11 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar11 + -2) ==
                          *(long *)
                           Method_UnityEngine_TextCore_Text_FontAsset_InitializeLookup<MarkToBaseAdjustmentRecord>__
                         ) {
                        puVar8 = (undefined8 *)(lVar4 + (long)(*piVar11 + 9) * 0x10 + 0x138);
                        goto LAB_05d4e728;
                      }
                      uVar10 = uVar10 - 1;
                      piVar11 = piVar11 + 4;
                    } while (uVar10 != 0);
                  }
                  puVar8 = (undefined8 *)
                           FUN_02f421d0(in_stack_00000050,
                                        *(long *)
                                         Method_UnityEngine_TextCore_Text_FontAsset_InitializeLookup<MarkToBaseAdjustmentRecord>__
                                        ,9);
LAB_05d4e728:
                  (*(code *)*puVar8)(plVar3,lVar5 + 0x10,puVar8[1]);
                  plVar3 = in_stack_00000050;
                  puVar2 = Method_OVRAnchor_FetchAnchorsAsync__;
                  lVar4 = *(long *)Method_OVRAnchor_FetchAnchorsAsync__;
                  if (*(int *)(lVar4 + 0xe4) == 0) {
                    thunk_FUN_02f6670c();
                    lVar4 = *(long *)puVar2;
                  }
                  puVar8 = *(undefined8 **)(lVar4 + 0xb8);
                  lVar5 = puVar8[1];
                  if (lVar5 == 0) {
                    if (*(int *)(lVar4 + 0xe4) == 0) {
                      thunk_FUN_02f6670c();
                      puVar8 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
                    }
                    uVar7 = *puVar8;
                    lVar5 = thunk_FUN_02f45270(*(undefined8 *)
                                                Method_OVRAnchor_TryGetComponent<OVRTriangleMesh>__)
                    ;
                    FUN_04237db8(lVar5,uVar7,*(undefined8 *)Method_OVRAnchor_FetchAnchors__,0);
                    *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8) = lVar5;
                  }
                  if (plVar3 == (long *)0x0) {
                    if (*(long *)(unaff_x28 + 0x28) == in_stack_000003e8) {
                    /* WARNING: Subroutine does not return */
                      FUN_02f089c8();
                    }
                  }
                  else {
                    lVar4 = *plVar3;
                    lVar6 = *(long *)Method_OVRAnchor_CreateSpatialAnchorAsync__;
                    uVar10 = (ulong)*(ushort *)(lVar4 + 0x12e);
                    if (uVar10 != 0) {
                      piVar11 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar11 + -2) == *(long *)(lVar6 + 0x20)) {
                          lVar4 = lVar4 + (long)(int)(*piVar11 + (uint)*(ushort *)(lVar6 + 0x50)) *
                                          0x10 + 0x138;
                          goto LAB_05d4e814;
                        }
                        uVar10 = uVar10 - 1;
                        piVar11 = piVar11 + 4;
                      } while (uVar10 != 0);
                    }
                    lVar4 = FUN_02f421d0(plVar3);
LAB_05d4e814:
                    lVar4 = thunk_FUN_02f2742c(*(undefined8 *)(lVar4 + 8),lVar6);
                    (**(code **)(lVar4 + 8))(plVar3,lVar5,lVar4);
                    plVar3 = in_stack_00000050;
                    if (in_stack_00000050 != (long *)0x0) {
                      lVar4 = *in_stack_00000050;
                      uVar10 = (ulong)*(ushort *)(lVar4 + 0x12e);
                      if (uVar10 != 0) {
                        piVar11 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_067c91b0) {
                            puVar8 = (undefined8 *)(lVar4 + (long)*piVar11 * 0x10 + 0x138);
                            goto LAB_05d4e898;
                          }
                          uVar10 = uVar10 - 1;
                          piVar11 = piVar11 + 4;
                        } while (uVar10 != 0);
                      }
                      puVar8 = (undefined8 *)
                               FUN_02f421d0(in_stack_00000050,*(long *)PTR_DAT_067c91b0,0);
LAB_05d4e898:
                      (*(code *)*puVar8)(plVar3,puVar8[1]);
                    }
                    if (*(long *)(unaff_x28 + 0x28) == in_stack_000003e8) {
                      return;
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
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


