/*
FUNCTION_NAME: UnityEngine.UIElements.MinMaxSlider$$set_highLimit
ENTRY_POINT: 06af56c8
PROGRAM: waitwhat-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_14;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_1;source_validity_pose_sink_structure;negative_framework_namespace_without_eye_use_flow
*/


/* WARNING: Removing unreachable block (ram,0x06af5534) */
/* WARNING: Removing unreachable block (ram,0x06af5748) */
/* WARNING: Removing unreachable block (ram,0x06af565c) */
/* WARNING: Removing unreachable block (ram,0x06af5a90) */

void UnityEngine_UIElements_MinMaxSlider__set_highLimit(long param_1,undefined8 param_2)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  void *pvVar12;
  long lVar13;
  long lVar14;
  long unaff_x19;
  undefined8 unaff_x21;
  long unaff_x22;
  int unaff_w23;
  long *unaff_x28;
  undefined8 *unaff_x29;
  undefined1 auVar15 [16];
  long in_stack_00000008;
  undefined8 *in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  long in_stack_00000140;
  long *in_stack_00000148;
  long in_stack_00000150;
  undefined8 in_stack_00000158;
  long in_stack_00000160;
  undefined8 *in_stack_00000168;
  undefined8 in_stack_00000170;
  long in_stack_00000180;
  undefined8 *in_stack_00000188;
  undefined8 in_stack_00000190;
  undefined8 in_stack_00000198;
  long in_stack_000001a0;
  undefined8 in_stack_00000560;
  
  do {
    FUN_06adecf8(param_1,param_2);
LAB_06af56cc:
    do {
      do {
        unaff_w23 = unaff_w23 + 1;
        if (*(int *)(unaff_x22 + 0x18) <= unaff_w23) {
          do {
            uVar8 = FUN_054518b4(&stack0x00000550,*unaff_x29);
            if ((uVar8 & 1) == 0) {
              iVar7 = 0x23;
              goto LAB_06af5860;
            }
            lVar9 = FUN_06af4590();
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03188cd8();
            }
            unaff_x22 = FUN_06aedf38(lVar9,in_stack_00000560,0);
            if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03188cd8();
            }
          } while (*(int *)(unaff_x22 + 0x18) < 1);
          unaff_w23 = 0;
          unaff_x21 = in_stack_00000560;
        }
        lVar9 = FUN_042e47a4(unaff_x22,unaff_w23,
                             *(undefined8 *)
                              Method_System_Collections_Generic_Dictionary<JointVelocityActiveState_JointVelocityFeatureConfig,_JointVelocityActiveState_JointVelocityFeatureState>_Add__
                            );
        lVar10 = *unaff_x28;
        if (*(int *)(lVar10 + 0xe4) == 0) {
          thunk_FUN_031e5338();
          lVar10 = *unaff_x28;
        }
        lVar10 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x18);
        if (lVar10 != 0) {
          UnityEngine_TerrainData___cctor(lVar10,0);
        }
        in_stack_00000148 = (long *)&stack0x00000368;
        in_stack_00000140 = 0;
        lVar10 = FUN_06af4590();
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03188cd8();
        }
        FUN_06aed710(&stack0x00000008,lVar10,unaff_x21,lVar9,0);
        lVar10 = in_stack_00000008;
        memcpy(&stack0x000002d8,&stack0x00000010,0x90);
        memcpy(&stack0x000004b8,&stack0x000002d8,0x90);
        auVar15 = FUN_06af64a8();
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03188cd8();
        }
        if (*(long *)(lVar9 + 0xb8) == 0) {
LAB_06af553c:
          iVar7 = 7;
        }
        else {
          if (lVar10 != 0) {
            if (*(long *)(unaff_x19 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03188cd8();
            }
            uVar8 = FUN_03eb65b4(*(long *)(unaff_x19 + 0x58),lVar10,*(undefined8 *)PTR_DAT_070d0c40)
            ;
            if ((uVar8 & 1) != 0) {
              lVar11 = *(long *)(unaff_x19 + 0x50);
              if (lVar11 == 0) {
LAB_06af5718:
                    /* WARNING: Subroutine does not return */
                FUN_03188cd8();
              }
              lVar13 = *(long *)(lVar11 + 0x10);
              lVar14 = *(long *)
                        Method_Newtonsoft_Json_Utilities_DynamicProxyMetaObject<JToken>__ctor__;
              *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
              if (lVar13 == 0) goto LAB_06af5718;
              uVar6 = *(uint *)(lVar11 + 0x18);
              if (uVar6 < *(uint *)(lVar13 + 0x18)) {
                lVar13 = lVar13 + (long)(int)uVar6 * 0x10;
                *(uint *)(lVar11 + 0x18) = uVar6 + 1;
                *(long *)(lVar13 + 0x20) = lVar10;
                *(long *)(lVar13 + 0x28) = auVar15._8_8_;
              }
              else {
                FUN_044d4950(lVar11,lVar10,auVar15._8_8_,
                             *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
              }
            }
          }
          lVar11 = *(long *)(lVar9 + 0xb8);
          if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03188cd8();
          }
          if (*(char *)(lVar11 + 0x10) != '\0') {
            if (*(long *)(unaff_x19 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03188cd8();
            }
            FUN_03eb65b4(*(long *)(unaff_x19 + 0x70),lVar11,
                         *(undefined8 *)
                          Method_UnityEngine_Rendering_DynamicArray<RenderGraphObjectPool_SharedObjectPoolBase>_GetEnumerator__
                        );
            lVar11 = *(long *)(lVar9 + 0xb8);
          }
          if (*(long *)(unaff_x19 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03188cd8();
          }
          lVar13 = *(long *)(unaff_x19 + 0x28);
          uVar6 = FUN_03eb5b34(*(long *)(unaff_x19 + 0x70),lVar11,
                               *(undefined8 *)
                                Method_IngameDebugConsole_DynamicCircularBuffer<QueuedDebugLogEntry>_Add__
                              );
          if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03188cd8();
          }
          uVar8 = FUN_06adedc8(lVar13,lVar11,0,auVar15._0_4_ & 1,uVar6 & 1,0);
          if ((uVar8 & 1) == 0) goto LAB_06af553c;
          if ((lVar10 != 0) && ((auVar15._0_8_ & 1) != 0)) {
            if (*(long *)(unaff_x19 + 0x68) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03188cd8();
            }
            FUN_03eb65b4(*(long *)(unaff_x19 + 0x68),lVar10,*(undefined8 *)PTR_DAT_070d0c40);
          }
          if (*(long *)(lVar9 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03188cd8();
          }
          if ((*(int *)(*(long *)(lVar9 + 0xb8) + 0x14) == 1) &&
             (lVar11 = thunk_FUN_031c3cac(lVar10,*(undefined8 *)
                                                  Method_System_Collections_Generic_Dictionary<PhotonNetwork_RaiseEventBatch,_PhotonNetwork_SerializeViewBatch>_GetEnumerator__
                                         ), lVar11 != 0)) {
            if (*(long *)(lVar9 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03188cd8();
            }
            if (*(char *)(*(long *)(lVar9 + 0xb8) + 0x10) == '\0') {
              lVar11 = FUN_06af4590();
              if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03188cd8();
              }
              lVar11 = FUN_06aeddf0(lVar11,lVar10,0);
              if ((lVar11 != 0) && (*(int *)(lVar11 + 0x20) != 0)) {
                FUN_03ec014c(&stack0x00000008,lVar11,
                             *(undefined8 *)
                              Method_IngameDebugConsole_DynamicCircularBuffer<QueuedDebugLogEntry>_RemoveFirst__
                            );
                memcpy(&stack0x00000238,&stack0x00000008,0xa0);
                in_stack_00000010 = (undefined8 *)&stack0x00000238;
                in_stack_00000008 = 0;
                do {
                  uVar6 = FUN_05457708(&stack0x00000238,
                                       *(undefined8 *)
                                        Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledResourceInfo>_Resize__
                                      );
                  if ((uVar6 & 1) == 0) break;
                  pvVar12 = memcpy(&stack0x000001a8,&stack0x00000248,0x90);
                  uVar8 = FUN_06af668c(pvVar12,&stack0x000001a8,&stack0x000004b8);
                } while ((uVar8 & 1) == 0);
                FUN_05457704(&stack0x00000238,
                             *(undefined8 *)
                              Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_size__
                            );
                if (((uVar6 ^ 1) & 1) == 0) goto LAB_06af5470;
              }
              goto LAB_06af553c;
            }
          }
LAB_06af5470:
          iVar7 = 0x1a;
        }
        if (*in_stack_00000148 != 0) {
          FUN_069807c8(*in_stack_00000148,0);
        }
        if (in_stack_00000140 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03188cd0();
        }
        if (iVar7 != 0x1a) {
          if (iVar7 == 7) goto LAB_06af56cc;
          if (iVar7 != 0) {
LAB_06af5860:
            lVar9 = in_stack_00000150;
            FUN_054518b0(in_stack_00000158,
                         *(undefined8 *)
                          Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_capacity__
                        );
            if (lVar9 != 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03188cd0(lVar9);
            }
            if ((iVar7 != 0x23) && (iVar7 != 0)) {
              return;
            }
            if (*(long *)(unaff_x19 + 0x50) != 0) {
              FUN_044d5428(&stack0x00000008,*(long *)(unaff_x19 + 0x50),
                           *(undefined8 *)
                            Method_Newtonsoft_Json_Utilities_DynamicProxy<JToken>__ctor__);
              in_stack_00000188 = in_stack_00000010;
              in_stack_00000180 = in_stack_00000008;
              in_stack_00000198 = in_stack_00000020;
              in_stack_00000190 = in_stack_00000018;
              in_stack_00000010 = &stack0x00000180;
              in_stack_00000008 = 0;
              while (uVar8 = FUN_0549c140(&stack0x00000180,
                                          *(undefined8 *)
                                           Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledResourceInfo>_get_Item__
                                         ), uVar5 = in_stack_00000198, uVar4 = in_stack_00000190,
                    (uVar8 & 1) != 0) {
                lVar9 = FUN_06af4590();
                if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03188cd8();
                }
                FUN_06aed448(lVar9,uVar4,uVar5,0);
              }
              FUN_0549c13c(&stack0x00000180,
                           *(undefined8 *)
                            Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledResourceInfo>__ctor__
                          );
              FUN_06af6060();
              if (*(long *)(unaff_x19 + 0x68) != 0) {
                FUN_03eb5fa8(&stack0x00000008,*(long *)(unaff_x19 + 0x68),
                             *(undefined8 *)
                              Method_System_Collections_Generic_Dictionary<Regex_CachedCodeEntryKey,_Regex_CachedCodeEntry>_Remove__
                            );
                puVar3 = 
                Method_System_Collections_Generic_Dictionary<Regex_CachedCodeEntryKey,_Regex_CachedCodeEntry>_Add__
                ;
                puVar2 = 
                Method_System_Collections_Generic_Dictionary<OvrSkinningTypes_Handle,_LinkedListNode<OvrFreeListBufferTracker_TrackerNode>>__ctor__
                ;
                in_stack_00000170 = in_stack_00000018;
                in_stack_00000168 = in_stack_00000010;
                in_stack_00000160 = in_stack_00000008;
                in_stack_00000008 = 0;
                in_stack_00000010 = &stack0x00000160;
                while (uVar8 = FUN_0544fec4(&stack0x00000160,*(undefined8 *)puVar3),
                      uVar4 = in_stack_00000170, (uVar8 & 1) != 0) {
                  lVar9 = FUN_06af4590();
                  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03188cd8();
                  }
                  FUN_06aede88(lVar9,uVar4,0);
                }
                FUN_0544fec0(&stack0x00000160,
                             *(undefined8 *)
                              Method_System_Collections_Generic_Dictionary<Regex_CachedCodeEntryKey,_Regex_CachedCodeEntry>__ctor__
                            );
                lVar9 = *(long *)(unaff_x19 + 0x48);
                if (lVar9 != 0) {
                  iVar7 = *(int *)(lVar9 + 0x18);
                  *(undefined4 *)(lVar9 + 0x18) = 0;
                  *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                  puVar3 = 
                  Method_IngameDebugConsole_DynamicCircularBuffer<QueuedDebugLogEntry>__ctor__;
                  if (0 < iVar7) {
                    FUN_0595236c(*(undefined8 *)(lVar9 + 0x10),0,iVar7,0);
                  }
                  lVar9 = *(long *)(unaff_x19 + 0x50);
                  if (lVar9 != 0) {
                    iVar7 = *(int *)(lVar9 + 0x18);
                    *(undefined4 *)(lVar9 + 0x18) = 0;
                    *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                    if (0 < iVar7) {
                      FUN_0595236c(*(undefined8 *)(lVar9 + 0x10),0,iVar7,0);
                    }
                    if (*(long *)(unaff_x19 + 0x58) != 0) {
                      FUN_03eb5ad4(*(long *)(unaff_x19 + 0x58),*(undefined8 *)puVar2);
                      if (*(long *)(unaff_x19 + 0x60) != 0) {
                        FUN_03eb5ad4(*(long *)(unaff_x19 + 0x60),*(undefined8 *)puVar3);
                        if (*(long *)(unaff_x19 + 0x68) != 0) {
                          FUN_03eb5ad4(*(long *)(unaff_x19 + 0x68),*(undefined8 *)puVar2);
                          if (*(long *)(unaff_x19 + 0x70) != 0) {
                            FUN_03eb5ad4(*(long *)(unaff_x19 + 0x70),*(undefined8 *)puVar3);
                            lVar9 = FUN_06af4590();
                            if (lVar9 != 0) {
                              FUN_06af0c30(lVar9,0);
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
                    /* WARNING: Subroutine does not return */
            FUN_03188cd8();
          }
        }
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03188cd8();
        }
        lVar11 = *(long *)(lVar9 + 0xb8);
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03188cd8();
        }
        cVar1 = *(char *)(lVar11 + 0x10);
        FUN_06aded04(lVar11,0);
        memset(&stack0x00000008,0,0x138);
        FUN_06aded58(&stack0x00000008,unaff_x21,lVar9 + 0x20,&stack0x000004b8,lVar10,0);
        memcpy(&stack0x00000380,&stack0x00000008,0x138);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03188cd8();
        }
        lVar10 = *unaff_x28;
        lVar11 = *(long *)(lVar9 + 0x10);
        if (*(int *)(lVar10 + 0xe4) == 0) {
          thunk_FUN_031e5338();
          lVar10 = *unaff_x28;
        }
        lVar10 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x20);
        if (lVar10 != 0) {
          UnityEngine_TerrainData___cctor(lVar10,0);
        }
        in_stack_00000010 = &stack0x000001a0;
        in_stack_00000008 = 0;
        in_stack_000001a0 = lVar10;
        if (*(long *)(unaff_x19 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03188cd8();
        }
        iVar7 = FUN_06adf12c(*(long *)(unaff_x19 + 0x28),&stack0x00000380,
                             *(undefined8 *)(lVar9 + 0xb8),0);
        if (in_stack_000001a0 != 0) {
          FUN_069807c8(in_stack_000001a0,0);
        }
        FUN_06af4d08();
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03188cd8();
        }
      } while (*(long *)(lVar9 + 0x10) != lVar11);
      if (iVar7 != 2) {
        if (iVar7 == 0) {
          if (*(long *)(unaff_x19 + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03188cd8();
          }
          FUN_03eb65b4(*(long *)(unaff_x19 + 0x60),*(undefined8 *)(lVar9 + 0xb8),
                       *(undefined8 *)
                        Method_UnityEngine_Rendering_DynamicArray<RenderGraphObjectPool_SharedObjectPoolBase>_GetEnumerator__
                      );
        }
        goto LAB_06af56cc;
      }
    } while (cVar1 == '\0');
    param_1 = *(long *)(lVar9 + 0xb8);
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    param_2 = 0;
  } while( true );
}


