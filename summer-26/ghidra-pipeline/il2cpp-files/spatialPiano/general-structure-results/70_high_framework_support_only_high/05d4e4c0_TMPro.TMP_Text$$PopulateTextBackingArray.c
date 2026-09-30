/*
FUNCTION_NAME: TMPro.TMP_Text$$PopulateTextBackingArray
ENTRY_POINT: 05d4e4c0
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x05d4e900) */
/* WARNING: Removing unreachable block (ram,0x05d4e910) */

void TMPro_TMP_Text__PopulateTextBackingArray(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x20;
  long lVar8;
  long unaff_x21;
  long lVar9;
  long unaff_x24;
  undefined8 uVar10;
  long unaff_x28;
  undefined1 auVar11 [16];
  undefined1 auVar12 [12];
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long in_stack_00000048;
  long *in_stack_00000050;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  long in_stack_000003e8;
  
  FUN_05d4c208();
  plVar3 = in_stack_00000050;
  if (param_1 == 0) {
    if (*(long *)(unaff_x28 + 0x28) == in_stack_000003e8) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
  }
  else if (unaff_x24 == 0) {
    if (*(long *)(unaff_x28 + 0x28) == in_stack_000003e8) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
  }
  else {
    auVar11 = FUN_05d6dd30();
    puVar2 = Method_UnityEngine_GraphicsBuffer_LockBufferForWrite<byte>__;
    if (plVar3 == (long *)0x0) {
      if (*(long *)(unaff_x28 + 0x28) == in_stack_000003e8) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
    }
    else {
      lVar5 = *plVar3;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) ==
              *(long *)Method_UnityEngine_GraphicsBuffer_LockBufferForWrite<byte>__) {
            puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_05d4e550;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)
               FUN_02f421d0(plVar3,*(long *)
                                    Method_UnityEngine_GraphicsBuffer_LockBufferForWrite<byte>__,0);
LAB_05d4e550:
      (*(code *)*puVar4)(plVar3,auVar11._0_8_,auVar11._8_8_,0,2,puVar4[1]);
      plVar3 = in_stack_00000050;
      auVar11 = FUN_05d6de44();
      if (plVar3 == (long *)0x0) {
        if (*(long *)(unaff_x28 + 0x28) == in_stack_000003e8) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
      }
      else {
        lVar5 = *plVar3;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
              puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 4) * 0x10 + 0x138);
              goto LAB_05d4e5d8;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar4 = (undefined8 *)FUN_02f421d0(plVar3,*(long *)puVar2,4);
LAB_05d4e5d8:
        (*(code *)*puVar4)(plVar3,auVar11._0_8_,auVar11._8_8_,1,puVar4[1]);
        uVar10 = *(undefined8 *)(unaff_x20 + 0xd8);
        if (*(int *)(*(long *)
                      Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                    + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        FUN_05db0678(&stack0x00000120,uVar10);
        memcpy(&stack0x00000320,&stack0x00000120,200);
        if (unaff_x21 == 0) {
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
          uVar10 = *(undefined8 *)(unaff_x21 + 0x18);
          uVar1 = *(undefined8 *)(unaff_x21 + 0x20);
          if (*(int *)(*(long *)Method_OVRAnchor_TryGetComponent<OVRStorable>__ + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          memcpy(&stack0x00000058,&stack0x00000320,200);
          in_stack_00000018 = in_stack_00000128;
          in_stack_00000010 = in_stack_00000120;
          in_stack_00000028 = in_stack_00000138;
          in_stack_00000020 = in_stack_00000130;
          FUN_061276f4(&stack0x000001f0,uVar10,uVar1,&stack0x00000058,&stack0x00000010,0);
          lVar5 = in_stack_00000048;
          auVar12 = FUN_05cc687c();
          plVar3 = in_stack_00000050;
          lVar8 = in_stack_00000048;
          if (lVar5 == 0) {
            if (*(long *)(unaff_x28 + 0x28) == in_stack_000003e8) {
                    /* WARNING: Subroutine does not return */
              FUN_02f089c8();
            }
          }
          else {
            *(undefined1 (*) [12])(lVar5 + 0x10) = auVar12;
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
              lVar5 = *in_stack_00000050;
              uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
              if (uVar6 != 0) {
                piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar7 + -2) ==
                      *(long *)
                       Method_UnityEngine_TextCore_Text_FontAsset_InitializeLookup<MarkToBaseAdjustmentRecord>__
                     ) {
                    puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 9) * 0x10 + 0x138);
                    goto LAB_05d4e728;
                  }
                  uVar6 = uVar6 - 1;
                  piVar7 = piVar7 + 4;
                } while (uVar6 != 0);
              }
              puVar4 = (undefined8 *)
                       FUN_02f421d0(in_stack_00000050,
                                    *(long *)
                                     Method_UnityEngine_TextCore_Text_FontAsset_InitializeLookup<MarkToBaseAdjustmentRecord>__
                                    ,9);
LAB_05d4e728:
              (*(code *)*puVar4)(plVar3,lVar8 + 0x10,puVar4[1]);
              plVar3 = in_stack_00000050;
              puVar2 = Method_OVRAnchor_FetchAnchorsAsync__;
              lVar5 = *(long *)Method_OVRAnchor_FetchAnchorsAsync__;
              if (*(int *)(lVar5 + 0xe4) == 0) {
                thunk_FUN_02f6670c();
                lVar5 = *(long *)puVar2;
              }
              puVar4 = *(undefined8 **)(lVar5 + 0xb8);
              lVar8 = puVar4[1];
              if (lVar8 == 0) {
                if (*(int *)(lVar5 + 0xe4) == 0) {
                  thunk_FUN_02f6670c();
                  puVar4 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
                }
                uVar10 = *puVar4;
                lVar8 = thunk_FUN_02f45270(*(undefined8 *)
                                            Method_OVRAnchor_TryGetComponent<OVRTriangleMesh>__);
                FUN_04237db8(lVar8,uVar10,*(undefined8 *)Method_OVRAnchor_FetchAnchors__,0);
                *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8) = lVar8;
              }
              if (plVar3 == (long *)0x0) {
                if (*(long *)(unaff_x28 + 0x28) == in_stack_000003e8) {
                    /* WARNING: Subroutine does not return */
                  FUN_02f089c8();
                }
              }
              else {
                lVar5 = *plVar3;
                lVar9 = *(long *)Method_OVRAnchor_CreateSpatialAnchorAsync__;
                uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
                if (uVar6 != 0) {
                  piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar7 + -2) == *(long *)(lVar9 + 0x20)) {
                      lVar5 = lVar5 + (long)(int)(*piVar7 + (uint)*(ushort *)(lVar9 + 0x50)) * 0x10
                              + 0x138;
                      goto LAB_05d4e814;
                    }
                    uVar6 = uVar6 - 1;
                    piVar7 = piVar7 + 4;
                  } while (uVar6 != 0);
                }
                lVar5 = FUN_02f421d0(plVar3);
LAB_05d4e814:
                lVar5 = thunk_FUN_02f2742c(*(undefined8 *)(lVar5 + 8),lVar9);
                (**(code **)(lVar5 + 8))(plVar3,lVar8,lVar5);
                plVar3 = in_stack_00000050;
                if (in_stack_00000050 != (long *)0x0) {
                  lVar5 = *in_stack_00000050;
                  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
                  if (uVar6 != 0) {
                    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_067c91b0) {
                        puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
                        goto LAB_05d4e898;
                      }
                      uVar6 = uVar6 - 1;
                      piVar7 = piVar7 + 4;
                    } while (uVar6 != 0);
                  }
                  puVar4 = (undefined8 *)FUN_02f421d0(in_stack_00000050,*(long *)PTR_DAT_067c91b0,0)
                  ;
LAB_05d4e898:
                  (*(code *)*puVar4)(plVar3,puVar4[1]);
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
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


