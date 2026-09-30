/*
FUNCTION_NAME: System.Net.IPAddressParser$$AppendHex
ENTRY_POINT: 03948c34
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 79
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;data_collection;structure_combo
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_6;ui_or_gameplay_sink_hits_4;strong_file_logging_hits_2;source_validity_pose_sink_structure;negative_framework_namespace_without_eye_use_flow
*/


/* WARNING: Removing unreachable block (ram,0x039494c8) */
/* WARNING: Removing unreachable block (ram,0x03949550) */
/* WARNING: Removing unreachable block (ram,0x039498a4) */
/* WARNING: Removing unreachable block (ram,0x0394989c) */
/* WARNING: Removing unreachable block (ram,0x039499ac) */

undefined4 System_Net_IPAddressParser__AppendHex(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined4 uVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  long *plVar17;
  undefined *puVar18;
  ulong uVar19;
  long lVar20;
  uint uVar21;
  uint uVar22;
  long lVar23;
  long unaff_x19;
  undefined8 uVar24;
  long *unaff_x20;
  long *unaff_x21;
  long *plVar25;
  long lVar26;
  uint uVar27;
  long lVar28;
  long unaff_x26;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  long *in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  long *in_stack_00000070;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  long *in_stack_00000090;
  char cStack000000000000009c;
  
  thunk_FUN_01efb3a4(StringLiteral_3734);
  thunk_FUN_01efb3a4(
                    Method_System_Reflection_Emit_GenericTypeParameterBuilder_get_AssemblyQualifiedName__
                    );
  thunk_FUN_01efb3a4(StringLiteral_3736);
  thunk_FUN_01efb3a4(Method_UnityEngine_GameObject_GetComponent<Selectable>__);
  thunk_FUN_01efb3a4(StringLiteral_4023);
  thunk_FUN_01efb3a4(StringLiteral_3737);
  thunk_FUN_01efb3a4(Method_UnityEngine_Component_TryGetComponent<OVRScenePlane>__);
  thunk_FUN_01efb3a4(StringLiteral_3432);
  thunk_FUN_01efb3a4(Method_System_Reflection_Emit_GenericTypeParameterBuilder_get_Module__);
  thunk_FUN_01efb3a4(Method_UnityEngine_Rendering_Universal_ClipperBase_AddPath__);
  thunk_FUN_01efb3a4(Method_Unity_VisualScripting_ComponentHolderProtocol_GetComponentsInChildren__)
  ;
  thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
  *(undefined1 *)(unaff_x19 + 0x389) = 1;
  in_stack_00000080 = 0;
  in_stack_00000088 = 0;
  in_stack_00000090 = (long *)0x0;
  in_stack_00000060 = 0;
  in_stack_00000068 = 0;
  in_stack_00000070 = (long *)0x0;
  if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar7 = FUN_03582560();
  if ((uVar7 & 1) == 0) {
    if (unaff_x26 != 0) {
      if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar7 = (**(code **)(*unaff_x21 + 0x3c8))();
      plVar11 = (long *)Method_UnityEngine_Rendering_Universal_ClipperBase_AddPath__;
      if ((uVar7 & 1) == 0) {
        thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
        uVar24 = thunk_FUN_01f117cc();
        uVar15 = thunk_FUN_01efb3a4(StringLiteral_4025);
        FUN_034f6754(uVar24,uVar15,0);
        goto LAB_03949994;
      }
      lVar8 = *(long *)Method_UnityEngine_Rendering_Universal_ClipperBase_AddPath__;
      if (*(int *)(lVar8 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        lVar8 = *plVar11;
      }
      uVar24 = *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x18);
      cStack000000000000009c = '\0';
      FUN_035ce230(uVar24,&stack0x0000009c,0);
      lVar8 = *plVar11;
      if (*(int *)(lVar8 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        lVar8 = *plVar11;
      }
      lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x20);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      FUN_02b6b46c(lVar8,*(undefined8 *)StringLiteral_4020);
      lVar26 = *(long *)(*(long *)(*plVar11 + 0xb8) + 0x38);
      if (lVar26 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      FUN_02ee82a4(lVar26,*(undefined8 *)StringLiteral_4023);
      lVar28 = *(long *)(*(long *)(*plVar11 + 0xb8) + 0x40);
      if (lVar28 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      iVar5 = *(int *)(lVar28 + 0x18);
      *(undefined4 *)(lVar28 + 0x18) = 0;
      *(int *)(lVar28 + 0x1c) = *(int *)(lVar28 + 0x1c) + 1;
      if (0 < iVar5) {
        FUN_0358d1e4(*(undefined8 *)(lVar28 + 0x10),0,iVar5,0);
      }
      if (0 < (int)*(ulong *)(unaff_x26 + 0x18)) {
        uVar7 = 0;
        uVar19 = *(ulong *)(unaff_x26 + 0x18) & 0xffffffff;
        do {
          if (uVar19 <= uVar7) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a44();
          }
          FUN_02ee8df4(lVar26,*(undefined8 *)(unaff_x26 + 0x20 + uVar7 * 8),
                       *(undefined8 *)Method_UnityEngine_GameObject_GetComponent<Selectable>__);
          uVar19 = (ulong)*(uint *)(unaff_x26 + 0x18);
          uVar7 = uVar7 + 1;
        } while ((long)uVar7 < (long)(int)*(uint *)(unaff_x26 + 0x18));
      }
      plVar9 = (long *)(**(code **)(*unaff_x21 + 0x478))();
      uVar7 = (**(code **)(*unaff_x21 + 0x3d8))();
      plVar10 = plVar9;
      if ((uVar7 & 1) == 0) {
        unaff_x21 = (long *)(**(code **)(*unaff_x21 + 0x458))();
        if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        plVar10 = (long *)(**(code **)(*unaff_x21 + 0x478))
                                    (unaff_x21,*(undefined8 *)(*unaff_x21 + 0x480));
        puVar18 = StringLiteral_4022;
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar7 = plVar9[3];
        if ((int)uVar7 < 1) {
          iVar5 = 0;
        }
        else {
          uVar21 = 0;
          iVar5 = 0;
          do {
            if ((uint)uVar7 <= uVar21) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a44();
            }
            plVar17 = plVar9 + (long)(int)uVar21 + 4;
            plVar11 = (long *)*plVar17;
            if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            uVar7 = (**(code **)(*plVar11 + 0x3a8))(plVar11,*(undefined8 *)(*plVar11 + 0x3b0));
            if ((uVar7 & 1) == 0) {
              if (*(uint *)(plVar9 + 3) <= uVar21) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a44();
              }
              plVar11 = (long *)*plVar17;
              if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              uVar7 = (**(code **)(*plVar11 + 0x3c8))(plVar11,*(undefined8 *)(*plVar11 + 0x3d0));
              if ((uVar7 & 1) != 0) {
                if (*(uint *)(plVar9 + 3) <= uVar21) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a44();
                }
                lVar12 = *plVar17;
                if (*(int *)(*(long *)Method_UnityEngine_Rendering_Universal_ClipperBase_AddPath__ +
                            0xe0) == 0) {
                  thunk_FUN_01ee6d7c();
                }
                uVar7 = FUN_03949b18(lVar12);
                if ((uVar7 & 1) == 0) goto LAB_03948ef8;
              }
              if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              if (*(uint *)(plVar10 + 3) <= uVar21) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a44();
              }
              if (*(uint *)(plVar9 + 3) <= uVar21) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a44();
              }
              FUN_02b6b2d0(lVar8,plVar10[(long)(int)uVar21 + 4],*plVar17,*(undefined8 *)puVar18);
            }
            else {
LAB_03948ef8:
              iVar5 = iVar5 + 1;
            }
            uVar7 = plVar9[3];
            uVar21 = uVar21 + 1;
          } while ((int)uVar21 < (int)uVar7);
        }
        plVar11 = (long *)Method_UnityEngine_Rendering_Universal_ClipperBase_AddPath__;
        if (iVar5 != *(int *)(unaff_x26 + 0x18)) goto LAB_039490a8;
        if (0 < (int)uVar7) {
          uVar21 = 0;
          uVar27 = 0;
          plVar11 = plVar9 + 4;
          do {
            if ((uint)uVar7 <= uVar27) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a44();
            }
            plVar17 = (long *)*plVar11;
            if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            uVar7 = (**(code **)(*plVar17 + 0x3a8))(plVar17,*(undefined8 *)(*plVar17 + 0x3b0));
            if ((uVar7 & 1) != 0) {
              if (*(uint *)(unaff_x26 + 0x18) <= uVar21) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a44();
              }
              lVar12 = *(long *)(unaff_x26 + (long)(int)uVar21 * 8 + 0x20);
              if ((lVar12 != 0) &&
                 (lVar13 = thunk_FUN_01f116d0(lVar12,*(undefined8 *)(*plVar9 + 0x40)), lVar13 == 0))
              {
                uVar24 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
                FUN_01f08910(uVar24,0);
              }
              if (*(uint *)(plVar9 + 3) <= uVar27) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a44();
              }
              *plVar11 = lVar12;
              thunk_FUN_01f51358(plVar11,lVar12);
              uVar21 = uVar21 + 1;
            }
            uVar7 = (ulong)*(uint *)(plVar9 + 3);
            uVar27 = uVar27 + 1;
            plVar11 = plVar11 + 1;
          } while ((int)uVar27 < (int)*(uint *)(plVar9 + 3));
        }
        plVar11 = (long *)Method_UnityEngine_Rendering_Universal_ClipperBase_AddPath__;
        if (*(int *)(*(long *)Method_UnityEngine_Rendering_Universal_ClipperBase_AddPath__ + 0xe0)
            == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar7 = FUN_03949d10(unaff_x21,plVar9);
        if ((uVar7 & 1) == 0) goto LAB_039490a8;
        *unaff_x20 = (long)plVar9;
        thunk_FUN_01f51358(unaff_x20,plVar9);
LAB_039497ec:
        uVar6 = 1;
      }
      else {
LAB_039490a8:
        if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar21 = *(uint *)(plVar10 + 3);
        if (uVar21 == *(uint *)(unaff_x26 + 0x18)) {
          if (*(int *)(*plVar11 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          uVar7 = FUN_03949d10(unaff_x21);
          if ((uVar7 & 1) != 0) {
            *unaff_x20 = unaff_x26;
            thunk_FUN_01f51358();
            goto LAB_039497ec;
          }
          uVar21 = *(uint *)(plVar10 + 3);
        }
        puVar4 = StringLiteral_4022;
        puVar3 = StringLiteral_3734;
        puVar18 = Method_UnityEngine_Component_TryGetComponent<OVRScenePlane>__;
        if (0 < (int)uVar21) {
          uVar27 = 0;
          do {
            if (uVar21 <= uVar27) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a44();
            }
            plVar11 = (long *)plVar10[(long)(int)uVar27 + 4];
            if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            lVar12 = (**(code **)(*plVar11 + 0x4a8))(plVar11,*(undefined8 *)(*plVar11 + 0x4b0));
            if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            if (0 < (int)*(ulong *)(lVar12 + 0x18)) {
              uVar7 = 0;
              uVar19 = *(ulong *)(lVar12 + 0x18) & 0xffffffff;
LAB_0394916c:
              if (uVar19 <= uVar7) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a44();
              }
              plVar9 = *(long **)(lVar12 + uVar7 * 8 + 0x20);
              FUN_02ee8778(&stack0x00000048,lVar26,*(undefined8 *)StringLiteral_3737);
              in_stack_00000088 = in_stack_00000050;
              in_stack_00000080 = in_stack_00000048;
              in_stack_00000090 = in_stack_00000058;
LAB_039491a8:
              do {
                uVar19 = FUN_02c7a3f0(&stack0x00000080,*(undefined8 *)puVar3);
                plVar17 = in_stack_00000090;
                if ((uVar19 & 1) == 0) goto LAB_039494a0;
                if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a3c();
                }
                uVar19 = (**(code **)(*plVar9 + 0x3c8))(plVar9,*(undefined8 *)(*plVar9 + 0x3d0));
                if ((uVar19 & 1) != 0) {
                  lVar13 = (**(code **)(*plVar9 + 0x458))(plVar9,*(undefined8 *)(*plVar9 + 0x460));
                  lVar14 = (**(code **)(*plVar9 + 0x478))(plVar9,*(undefined8 *)(*plVar9 + 0x480));
                  if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01f08a3c();
                  }
                  uVar19 = (**(code **)(*plVar17 + 0x3c8))
                                     (plVar17,*(undefined8 *)(*plVar17 + 0x3d0));
                  if ((uVar19 & 1) == 0) {
LAB_03949280:
                    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01f08a3c();
                    }
                    uVar19 = FUN_03583944(lVar13,0);
                    if ((uVar19 & 1) != 0) {
                      if (*(int *)(*(long *)
                                    Method_UnityEngine_Rendering_Universal_ClipperBase_AddPath__ +
                                  0xe0) == 0) {
                        thunk_FUN_01ee6d7c();
                      }
                      uVar19 = FUN_0392f2ac(plVar17,lVar13);
                      if ((uVar19 & 1) != 0) {
                        if (*(int *)(*(long *)
                                      Method_UnityEngine_Rendering_Universal_ClipperBase_AddPath__ +
                                    0xe0) == 0) {
                          thunk_FUN_01ee6d7c();
                        }
                        lVar13 = FUN_0392f510(plVar17,lVar13);
                        goto LAB_03949340;
                      }
                    }
                    uVar19 = FUN_035846d4(lVar13,0);
                    if ((uVar19 & 1) == 0) goto LAB_039491a8;
                    if (*(int *)(*(long *)
                                  Method_UnityEngine_Rendering_Universal_ClipperBase_AddPath__ +
                                0xe0) == 0) {
                      thunk_FUN_01ee6d7c();
                    }
                    uVar19 = FUN_0393bfe4(plVar17,lVar13);
                    if ((uVar19 & 1) == 0) goto LAB_039491a8;
                    if (*(int *)(*(long *)
                                  Method_UnityEngine_Rendering_Universal_ClipperBase_AddPath__ +
                                0xe0) == 0) {
                      thunk_FUN_01ee6d7c();
                    }
                    lVar13 = FUN_0393c110(plVar17,lVar13);
                  }
                  else {
                    uVar15 = (**(code **)(*plVar17 + 0x458))
                                       (plVar17,*(undefined8 *)(*plVar17 + 0x460));
                    if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__
                                + 0xe0) == 0) {
                      thunk_FUN_01ee6d7c();
                    }
                    uVar19 = FUN_03582560(lVar13,uVar15,0);
                    if ((uVar19 & 1) == 0) goto LAB_03949280;
                    lVar13 = (**(code **)(*plVar17 + 0x478))
                                       (plVar17,*(undefined8 *)(*plVar17 + 0x480));
                  }
LAB_03949340:
                  FUN_02b6b2d0(lVar8,plVar11,plVar17,*(undefined8 *)puVar4);
                  lVar20 = *(long *)(lVar28 + 0x10);
                  lVar23 = *(long *)puVar18;
                  *(int *)(lVar28 + 0x1c) = *(int *)(lVar28 + 0x1c) + 1;
                  if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01f08a3c();
                  }
                  uVar21 = *(uint *)(lVar28 + 0x18);
                  if (uVar21 < *(uint *)(lVar20 + 0x18)) {
                    *(uint *)(lVar28 + 0x18) = uVar21 + 1;
                    puVar16 = (undefined8 *)(lVar20 + (long)(int)uVar21 * 8 + 0x20);
                    *puVar16 = plVar17;
                    thunk_FUN_01f51358(puVar16,plVar17);
                  }
                  else {
                    FUN_030f2bb4(lVar28,plVar17,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar23 + 0x20) + 0xc0) + 0x70))
                    ;
                  }
                  if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01f08a3c();
                  }
                  uVar21 = *(uint *)(lVar14 + 0x18);
                  if (0 < (int)uVar21) {
                    uVar22 = 0;
                    do {
                      if (uVar21 <= uVar22) {
                    /* WARNING: Subroutine does not return */
                        FUN_01f08a44();
                      }
                      plVar25 = (long *)(lVar14 + (long)(int)uVar22 * 8 + 0x20);
                      plVar17 = (long *)*plVar25;
                      if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01f08a3c();
                      }
                      uVar19 = (**(code **)(*plVar17 + 0x3a8))
                                         (plVar17,*(undefined8 *)(*plVar17 + 0x3b0));
                      if ((uVar19 & 1) != 0) {
                        if (*(uint *)(lVar14 + 0x18) <= uVar22) {
                    /* WARNING: Subroutine does not return */
                          FUN_01f08a44();
                        }
                        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_01f08a3c();
                        }
                        if (*(uint *)(lVar13 + 0x18) <= uVar22) {
                    /* WARNING: Subroutine does not return */
                          FUN_01f08a44();
                        }
                        puVar16 = (undefined8 *)(lVar13 + (long)(int)uVar22 * 8 + 0x20);
                        FUN_02b6b2d0(lVar8,*plVar25,*puVar16,*(undefined8 *)puVar4);
                        if (*(uint *)(lVar13 + 0x18) <= uVar22) {
                    /* WARNING: Subroutine does not return */
                          FUN_01f08a44();
                        }
                        uVar15 = *puVar16;
                        lVar20 = *(long *)(lVar28 + 0x10);
                        lVar23 = *(long *)puVar18;
                        *(int *)(lVar28 + 0x1c) = *(int *)(lVar28 + 0x1c) + 1;
                        if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_01f08a3c();
                        }
                        uVar21 = *(uint *)(lVar28 + 0x18);
                        if (uVar21 < *(uint *)(lVar20 + 0x18)) {
                          *(uint *)(lVar28 + 0x18) = uVar21 + 1;
                          *(undefined8 *)(lVar20 + (long)(int)uVar21 * 8 + 0x20) = uVar15;
                          thunk_FUN_01f51358();
                        }
                        else {
                          FUN_030f2bb4(lVar28,uVar15,
                                       *(undefined8 *)
                                        (*(long *)(*(long *)(lVar23 + 0x20) + 0xc0) + 0x70));
                        }
                      }
                      uVar21 = *(uint *)(lVar14 + 0x18);
                      uVar22 = uVar22 + 1;
                    } while ((int)uVar22 < (int)uVar21);
                  }
                }
              } while( true );
            }
System_Net_NetworkStreamWrapper__Close:
            uVar21 = *(uint *)(plVar10 + 3);
            uVar27 = uVar27 + 1;
          } while ((int)uVar27 < (int)uVar21);
        }
        puVar18 = StringLiteral_4021;
        iVar5 = FUN_02b6b104(lVar8,*(undefined8 *)StringLiteral_4021);
        if (iVar5 == (int)plVar10[3]) {
          uVar6 = FUN_02b6b104(lVar8,*(undefined8 *)puVar18);
          lVar26 = FUN_01f08890(*(undefined8 *)
                                 Method_Unity_VisualScripting_ComponentHolderProtocol_GetComponentsInChildren__
                                ,uVar6);
          *unaff_x20 = lVar26;
          thunk_FUN_01f51358(unaff_x20);
          puVar18 = StringLiteral_3592;
          plVar11 = (long *)*unaff_x20;
          if (0 < (int)plVar10[3]) {
            uVar7 = 0;
            uVar19 = plVar10[3] & 0xffffffff;
            lVar26 = 0x20;
            do {
              if (uVar19 <= uVar7) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a44();
              }
              lVar28 = FUN_02b6b264(lVar8,*(undefined8 *)((long)plVar10 + lVar26),
                                    *(undefined8 *)puVar18);
              if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              if ((lVar28 != 0) &&
                 (lVar12 = thunk_FUN_01f116d0(lVar28,*(undefined8 *)(*plVar11 + 0x40)), lVar12 == 0)
                 ) {
                uVar24 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
                FUN_01f08910(uVar24,0);
              }
              if (*(uint *)(plVar11 + 3) <= uVar7) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a44();
              }
              *(long *)((long)plVar11 + lVar26) = lVar28;
              thunk_FUN_01f51358((long *)((long)plVar11 + lVar26),lVar28);
              uVar19 = (ulong)*(uint *)(plVar10 + 3);
              plVar11 = (long *)*unaff_x20;
              uVar7 = uVar7 + 1;
              lVar26 = lVar26 + 8;
            } while ((long)uVar7 < (long)(int)*(uint *)(plVar10 + 3));
          }
          if (*(int *)(*(long *)Method_UnityEngine_Rendering_Universal_ClipperBase_AddPath__ + 0xe0)
              == 0) {
            thunk_FUN_01ee6d7c();
          }
          uVar7 = FUN_03949d10(unaff_x21,plVar11);
          if ((uVar7 & 1) != 0) goto LAB_039497ec;
        }
        *unaff_x20 = 0;
        thunk_FUN_01f51358(unaff_x20,0);
        uVar6 = 0;
      }
      if (cStack000000000000009c != '\0') {
        Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_HingeJoint_op_Implicit(uVar24,0);
      }
      return uVar6;
    }
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar24 = thunk_FUN_01f117cc();
    puVar18 = StringLiteral_4024;
  }
  else {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar24 = thunk_FUN_01f117cc();
    puVar18 = Method_OVRTouchSample_TouchController_OnInputFocusAcquired__;
  }
  uVar15 = thunk_FUN_01efb3a4(puVar18);
  FUN_034efd20(uVar24,uVar15,0);
LAB_03949994:
  uVar15 = thunk_FUN_01efb3a4(StringLiteral_4026);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar24,uVar15);
LAB_039494a0:
  FUN_02c7a3ec(&stack0x00000080,*(undefined8 *)StringLiteral_3739);
  FUN_030f35d0(&stack0x00000048,lVar28,
               *(undefined8 *)Method_System_Reflection_Emit_GenericTypeParameterBuilder_get_Module__
              );
  puVar2 = Method_System_Reflection_Emit_GenericTypeParameterBuilder_get_Assembly__;
  puVar1 = Method_UnityEngine_GameObject_GetComponent<Selectable>__;
  in_stack_00000068 = in_stack_00000050;
  in_stack_00000060 = in_stack_00000048;
  in_stack_00000070 = in_stack_00000058;
  while (uVar19 = FUN_02c7ab6c(&stack0x00000060,*(undefined8 *)puVar2), (uVar19 & 1) != 0) {
    FUN_02ee8df4(lVar26,in_stack_00000070,*(undefined8 *)puVar1);
  }
  FUN_02c7ab68(&stack0x00000060,
               *(undefined8 *)
                Method_System_Reflection_Emit_GenericTypeParameterBuilder_IsPrimitiveImpl__);
  iVar5 = *(int *)(lVar28 + 0x18);
  *(undefined4 *)(lVar28 + 0x18) = 0;
  *(int *)(lVar28 + 0x1c) = *(int *)(lVar28 + 0x1c) + 1;
  if (0 < iVar5) {
    FUN_0358d1e4(*(undefined8 *)(lVar28 + 0x10),0,iVar5,0);
  }
  uVar19 = (ulong)*(uint *)(lVar12 + 0x18);
  uVar7 = uVar7 + 1;
  if ((long)(int)*(uint *)(lVar12 + 0x18) <= (long)uVar7)
  goto System_Net_NetworkStreamWrapper__Close;
  goto LAB_0394916c;
}


