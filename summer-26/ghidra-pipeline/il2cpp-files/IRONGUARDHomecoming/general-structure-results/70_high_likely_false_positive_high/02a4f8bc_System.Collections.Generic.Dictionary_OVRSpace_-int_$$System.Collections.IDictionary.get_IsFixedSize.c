/*
FUNCTION_NAME: System.Collections.Generic.Dictionary<OVRSpace,-int>$$System.Collections.IDictionary.get_IsFixedSize
ENTRY_POINT: 02a4f8bc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 70
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_1;source_validity_pose_sink_structure;negative_generic_rendering_without_foveation_or_eye_source
*/


/* WARNING: Removing unreachable block (ram,0x02a511cc) */
/* WARNING: Removing unreachable block (ram,0x02a51fdc) */

void System_Collections_Generic_Dictionary<OVRSpace,_int>__System_Collections_IDictionary_get_IsFixedSize
               (void)

{
  undefined *puVar1;
  byte bVar2;
  undefined4 uVar3;
  uint uVar4;
  void *pvVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined1 in_w8;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  undefined4 in_w12;
  undefined8 uVar13;
  size_t unaff_x20;
  void *unaff_x21;
  void *unaff_x22;
  void *unaff_x23;
  long *unaff_x24;
  long *unaff_x27;
  void *unaff_x28;
  long unaff_x29;
  
  switch(in_w8) {
  case 1:
    lVar7 = *(long *)(*(long *)(*unaff_x27 + 0xc0) + 8);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_01ecaf44();
    }
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    lVar7 = *(long *)(*(long *)(*unaff_x27 + 0xc0) + 8);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_01ecaf44();
    }
    if (**(char **)(lVar7 + 0xb8) != '\0') {
      lVar7 = *unaff_x24;
      uVar11 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) ==
              *(long *)Method_System_Runtime_Remoting_ConfigHandler_ReadPreload__) {
            puVar9 = (undefined8 *)(lVar7 + (long)(*piVar12 + 0x16) * 0x10 + 0x138);
            goto System_Collections_Generic_Dictionary<object,_fsOption<fsVersionedType>>__get_Count
            ;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar9 = (undefined8 *)FUN_01ecb238();
System_Collections_Generic_Dictionary<object,_fsOption<fsVersionedType>>__get_Count:
      (*(code *)*puVar9)();
      lVar7 = *unaff_x27;
      uVar8 = *(undefined8 *)(unaff_x29 + -0x70);
LAB_02a513a4:
      lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x18);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_01ecaf44(lVar7);
      }
      unaff_x21 = (void *)FUN_01f08934(uVar8,lVar7);
      pvVar5 = *(void **)(unaff_x29 + -0xd8);
      goto LAB_02a4ff1c;
    }
    break;
  case 2:
    lVar7 = *(long *)(*(long *)(*unaff_x27 + 0xc0) + 8);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_01ecaf44();
    }
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    lVar7 = *(long *)(*(long *)(*unaff_x27 + 0xc0) + 8);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_01ecaf44();
    }
    if (**(char **)(lVar7 + 0xb8) != '\0') {
      lVar7 = *unaff_x24;
      uVar11 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) ==
              *(long *)Method_System_Runtime_Remoting_ConfigHandler_ReadPreload__) {
            puVar9 = (undefined8 *)(lVar7 + (long)(*piVar12 + 0x17) * 0x10 + 0x138);
            goto LAB_02a50858;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar9 = (undefined8 *)FUN_01ecb238();
LAB_02a50858:
      (*(code *)*puVar9)();
      puVar9 = (undefined8 *)
               Method_UnityEngine_Experimental_Rendering_RenderGraphModule_RenderGraphResourcePool<ComputeBuffer>_UnregisterFrameAllocation__
      ;
      *(undefined8 *)(unaff_x29 + -0xa8) = *(undefined8 *)(unaff_x29 + -0x78);
      *(undefined8 *)(unaff_x29 + -0xb0) = *(undefined8 *)(unaff_x29 + -0x80);
System_Collections_Generic_Dictionary<object,_fsOption<fsVersionedType>>__get_Values:
      uVar8 = *puVar9;
LAB_02a51394:
      uVar8 = thunk_FUN_01f113fc(uVar8,unaff_x29 + -0xb0);
      lVar7 = *unaff_x27;
      goto LAB_02a513a4;
    }
    break;
  case 3:
    lVar7 = *(long *)(*(long *)(*unaff_x27 + 0xc0) + 8);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_01ecaf44();
    }
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    lVar7 = *(long *)(*(long *)(*unaff_x27 + 0xc0) + 8);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_01ecaf44();
    }
    if (**(char **)(lVar7 + 0xb8) != '\0') {
      lVar7 = *unaff_x24;
      uVar11 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) ==
              *(long *)Method_System_Runtime_Remoting_ConfigHandler_ReadPreload__) {
            puVar9 = (undefined8 *)(lVar7 + (long)(*piVar12 + 0x1b) * 0x10 + 0x138);
            goto LAB_02a50824;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar9 = (undefined8 *)FUN_01ecb238();
LAB_02a50824:
      (*(code *)*puVar9)();
      puVar9 = (undefined8 *)Method_System_Runtime_Remoting_Messaging_CADMethodRef_GetTypes__;
      *(undefined8 *)(unaff_x29 + -0xb0) = *(undefined8 *)(unaff_x29 + -0x68);
LAB_02a51390:
      uVar8 = *puVar9;
      goto LAB_02a51394;
    }
    break;
  case 4:
    lVar7 = *(long *)(*(long *)(*unaff_x27 + 0xc0) + 8);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_01ecaf44();
    }
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    lVar7 = *(long *)(*(long *)(*unaff_x27 + 0xc0) + 8);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_01ecaf44();
    }
    if (**(char **)(lVar7 + 0xb8) != '\0') {
      lVar7 = *unaff_x24;
      uVar11 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) ==
              *(long *)Method_System_Runtime_Remoting_ConfigHandler_ReadPreload__) {
            puVar9 = (undefined8 *)(lVar7 + (long)(*piVar12 + 0x22) * 0x10 + 0x138);
            goto LAB_02a507c4;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar9 = (undefined8 *)FUN_01ecb238();
LAB_02a507c4:
      (*(code *)*puVar9)();
      puVar9 = (undefined8 *)Method_System_Globalization_Calendar_TimeToTicks__;
      *(undefined8 *)(unaff_x29 + -0xb0) = *(undefined8 *)(unaff_x29 + -0x60);
      goto System_Collections_Generic_Dictionary<object,_fsOption<fsVersionedType>>__get_Values;
    }
    break;
  case 5:
    lVar7 = *(long *)(*(long *)(*unaff_x27 + 0xc0) + 8);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_01ecaf44();
    }
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    lVar7 = *(long *)(*(long *)(*unaff_x27 + 0xc0) + 8);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_01ecaf44();
    }
    if (**(char **)(lVar7 + 0xb8) != '\0') {
      lVar7 = *unaff_x24;
      uVar11 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) ==
              *(long *)Method_System_Runtime_Remoting_ConfigHandler_ReadPreload__) {
            puVar9 = (undefined8 *)(lVar7 + (long)(*piVar12 + 0x23) * 0x10 + 0x138);
            goto LAB_02a51370;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar9 = (undefined8 *)FUN_01ecb238();
LAB_02a51370:
      (*(code *)*puVar9)();
      puVar9 = (undefined8 *)
               Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_Dequeue__;
      *(undefined1 *)(unaff_x29 + -0xb0) = *(undefined1 *)(unaff_x29 + -0x54);
      goto LAB_02a51390;
    }
    break;
  case 6:
    lVar7 = *unaff_x24;
    uVar11 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) ==
            *(long *)Method_System_Runtime_Remoting_ConfigHandler_ReadPreload__) {
          puVar9 = (undefined8 *)(lVar7 + (long)(*piVar12 + 0x24) * 0x10 + 0x138);
          goto LAB_02a50584;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar9 = (undefined8 *)FUN_01ecb238();
LAB_02a50584:
    (*(code *)*puVar9)();
    goto LAB_02a51344;
  case 7:
    lVar7 = *unaff_x27;
    *(undefined4 *)(unaff_x29 + -0xf0) = in_w12;
    lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_01ecaf44();
    }
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    lVar7 = *(long *)(*(long *)(*unaff_x27 + 0xc0) + 8);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_01ecaf44();
    }
    lVar10 = *unaff_x24;
    uVar8 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 8);
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) ==
            *(long *)Method_System_Runtime_Remoting_ConfigHandler_ReadPreload__) {
          puVar9 = (undefined8 *)(lVar10 + (long)(*piVar12 + 0xb) * 0x10 + 0x138);
          goto LAB_02a506e8;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar9 = (undefined8 *)FUN_01ecb238();
LAB_02a506e8:
    uVar11 = (*(code *)*puVar9)();
    if ((uVar11 & 1) == 0) {
      lVar7 = FUN_0390b368();
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar7 = FUN_0390b70c(lVar7,0);
      uVar8 = FUN_0340ebc0(*(undefined8 *)Method_System_Linq_Enumerable_Select<char,_char>__,
                           *(undefined8 *)(unaff_x29 + -0x18),
                           *(undefined8 *)
                            Method_Unity_Collections_ConcurrentMask_TryFree<Long1024>__,0);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c(uVar8,uVar8);
      }
      FUN_0390b840(lVar7,uVar8,0);
      memset(unaff_x23,0,unaff_x20);
      unaff_x28 = unaff_x23;
    }
    else {
      lVar7 = *unaff_x24;
      uVar11 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) ==
              *(long *)Method_System_Runtime_Remoting_ConfigHandler_ReadPreload__) {
            puVar9 = (undefined8 *)(lVar7 + (long)(*piVar12 + 6) * 0x10 + 0x138);
            goto LAB_02a50890;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar9 = (undefined8 *)FUN_01ecb238();
LAB_02a50890:
      uVar3 = (*(code *)*puVar9)();
      *(undefined4 *)(unaff_x29 + -0xf8) = uVar3;
      *(undefined8 *)(unaff_x29 + -0x100) = uVar8;
      puVar1 = Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
      uVar8 = *(undefined8 *)(unaff_x29 + -0x50);
      if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0)
      {
        thunk_FUN_01ee6d7c();
      }
      uVar11 = FUN_03583338(uVar8,0,0);
      pvVar5 = unaff_x21;
      if ((uVar11 & 1) == 0) {
LAB_02a509ec:
        lVar7 = *(long *)(*(long *)(*unaff_x27 + 0xc0) + 8);
        if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_01ecaf44();
        }
        if (*(int *)(lVar7 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        lVar7 = *(long *)(*(long *)(*unaff_x27 + 0xc0) + 8);
        if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_01ecaf44();
        }
        if (*(char *)(*(long *)(lVar7 + 0xb8) + 1) == '\0') {
          lVar7 = FUN_0390b368();
          if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          uVar8 = FUN_0390b3d4(lVar7,0);
          lVar7 = *(long *)(*(long *)(*unaff_x27 + 0xc0) + 8);
          if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
            lVar7 = FUN_01ecaf44();
          }
          if (*(int *)(lVar7 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          plVar6 = (long *)(*(code *)**(undefined8 **)(*(long *)(*unaff_x27 + 0xc0) + 0x20))(uVar8);
          if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          lVar7 = *(long *)(*(long *)(*unaff_x27 + 0xc0) + 0x28);
          if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
            lVar7 = FUN_01ecaf44(lVar7);
          }
          lVar10 = *plVar6;
          uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar11 != 0) {
            piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == lVar7) {
                lVar7 = lVar10 + (long)(*piVar12 + 1) * 0x10 + 0x138;
                goto LAB_02a510c0;
              }
              uVar11 = uVar11 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar11 != 0);
          }
          lVar7 = FUN_01ecb238(plVar6,lVar7,1);
LAB_02a510c0:
          *(long **)(unaff_x29 + -200) = unaff_x24;
          *(void **)(unaff_x29 + -0xc0) = unaff_x21;
          lVar7 = *(long *)(lVar7 + 8);
          (**(code **)(lVar7 + 0x10))(*(undefined8 *)(lVar7 + 8),lVar7,plVar6,unaff_x29 + -200);
          goto LAB_02a510e4;
        }
LAB_02a50a34:
        memset(unaff_x28,0,unaff_x20);
      }
      else {
        uVar8 = *(undefined8 *)(unaff_x29 + -0x50);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar11 = FUN_03583338(*(undefined8 *)(unaff_x29 + -0x100),uVar8,0);
        if ((uVar11 & 1) == 0) goto LAB_02a509ec;
        uVar8 = *(undefined8 *)(unaff_x29 + -0x50);
        if (*(int *)(*(long *)
                      Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<FocusInEvent>__
                    + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        bVar2 = FUN_03916b10(uVar8,0);
        lVar7 = *(long *)(*(long *)(*unaff_x27 + 0xc0) + 8);
        if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_01ecaf44();
        }
        if (*(int *)(lVar7 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        lVar7 = *(long *)(*(long *)(*unaff_x27 + 0xc0) + 8);
        if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_01ecaf44();
        }
        uVar8 = *(undefined8 *)(unaff_x29 + -0x50);
        if ((bVar2 & **(byte **)(lVar7 + 0xb8) & 1) == 0) {
          plVar6 = *(long **)(unaff_x29 + -0x100);
          if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          uVar4 = (**(code **)(*plVar6 + 0x2a8))(plVar6,uVar8,*(undefined8 *)(*plVar6 + 0x2b0));
          *(uint *)(unaff_x29 + -0x108) = uVar4;
          if ((uVar4 & 1) != 0) {
LAB_02a5106c:
            uVar8 = *(undefined8 *)(unaff_x29 + -0x50);
            if ((bVar2 & 1) == 0) {
              lVar7 = FUN_0390b368();
              if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              uVar13 = FUN_0390b3d4(lVar7,0);
              if (*(int *)(*(long *)Method_Drawing_CommandBuilder_Add<CommandBuilder_BoxData>__ +
                          0xe0) == 0) {
                thunk_FUN_01ee6d7c();
              }
              plVar6 = (long *)FUN_038f8654(uVar8,uVar13,0);
              if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              lVar7 = *plVar6;
              uVar11 = (ulong)*(ushort *)(lVar7 + 0x12e);
              if (uVar11 != 0) {
                piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar12 + -2) ==
                      *(long *)Method_System_Linq_Enumerable_OrderBy<TMP_SpriteGlyph,_uint>__) {
                    puVar9 = (undefined8 *)(lVar7 + (long)(*piVar12 + 2) * 0x10 + 0x138);
                    goto LAB_02a519e8;
                  }
                  uVar11 = uVar11 - 1;
                  piVar12 = piVar12 + 4;
                } while (uVar11 != 0);
              }
              puVar9 = (undefined8 *)
                       FUN_01ecb238(plVar6,*(long *)
                                            Method_System_Linq_Enumerable_OrderBy<TMP_SpriteGlyph,_uint>__
                                    ,2);
LAB_02a519e8:
              uVar8 = (*(code *)*puVar9)(plVar6);
            }
            else {
              if (*(int *)(*(long *)
                            Method_System_Runtime_Remoting_ConfigHandler_ReadClientActivated__ +
                          0xe0) == 0) {
                thunk_FUN_01ee6d7c();
              }
              plVar6 = (long *)FUN_0390bc14(uVar8,0);
              if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              uVar8 = (**(code **)(*plVar6 + 0x178))();
            }
            if ((*(uint *)(unaff_x29 + -0x108) & 1) == 0) {
              uVar13 = *(undefined8 *)(unaff_x29 + -0x50);
              if (*(int *)(*(long *)Method_UnityEngine_Rendering_Universal_ClipperBase_AddPath__ +
                          0xe0) == 0) {
                thunk_FUN_01ee6d7c();
              }
              lVar7 = FUN_03946318(uVar13,*(undefined8 *)(unaff_x29 + -0x100),0,0);
              if (lVar7 == 0) {
                lVar7 = *(long *)(*(long *)(*unaff_x27 + 0xc0) + 0x18);
                if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
                  lVar7 = FUN_01ecaf44(lVar7);
                }
                pvVar5 = (void *)FUN_01f08934(uVar8,lVar7);
              }
              else {
                uVar8 = (**(code **)(lVar7 + 0x18))
                                  (*(undefined8 *)(lVar7 + 0x40),uVar8,*(undefined8 *)(lVar7 + 0x28)
                                  );
                lVar7 = *(long *)(*(long *)(*unaff_x27 + 0xc0) + 0x18);
                if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
                  lVar7 = FUN_01ecaf44(lVar7);
                }
                pvVar5 = (void *)FUN_01f08934(uVar8,lVar7);
              }
            }
            else {
              lVar7 = *(long *)(*(long *)(*unaff_x27 + 0xc0) + 0x18);
              if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
                lVar7 = FUN_01ecaf44(lVar7);
              }
              pvVar5 = (void *)FUN_01f08934(uVar8,lVar7);
            }
            goto LAB_02a510e4;
          }
          uVar8 = *(undefined8 *)(unaff_x29 + -0x50);
          if (*(int *)(*(long *)Method_UnityEngine_Rendering_Universal_ClipperBase_AddPath__ + 0xe0)
              == 0) {
            thunk_FUN_01ee6d7c();
          }
          uVar11 = FUN_03945150(uVar8,*(undefined8 *)(unaff_x29 + -0x100),0,0);
          if ((uVar11 & 1) != 0) goto LAB_02a5106c;
          lVar7 = *(long *)(*(long *)(*unaff_x27 + 0xc0) + 8);
          if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
            lVar7 = FUN_01ecaf44();
          }
          if (*(int *)(lVar7 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          lVar7 = *(long *)(*(long *)(*unaff_x27 + 0xc0) + 8);
          if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
            lVar7 = FUN_01ecaf44();
          }
          if (*(char *)(*(long *)(lVar7 + 0xb8) + 1) == '\0') {
            lVar7 = *(long *)(*(long *)(*unaff_x27 + 0xc0) + 8);
            if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
              lVar7 = FUN_01ecaf44();
            }
            if (*(int *)(lVar7 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            lVar7 = *(long *)(*(long *)(*unaff_x27 + 0xc0) + 8);
            if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
              lVar7 = FUN_01ecaf44();
            }
            if (*(char *)(*(long *)(lVar7 + 0xb8) + 0x10) == '\0') {
              lVar7 = *unaff_x24;
              uVar11 = (ulong)*(ushort *)(lVar7 + 0x12e);
              if (uVar11 != 0) {
                piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar12 + -2) ==
                      *(long *)Method_System_Runtime_Remoting_ConfigHandler_ReadPreload__) {
                    puVar9 = (undefined8 *)(lVar7 + (long)(*piVar12 + 8) * 0x10 + 0x138);
                    goto LAB_02a51d58;
                  }
                  uVar11 = uVar11 - 1;
                  piVar12 = piVar12 + 4;
                } while (uVar11 != 0);
              }
              puVar9 = (undefined8 *)FUN_01ecb238();
LAB_02a51d58:
              lVar7 = (*(code *)*puVar9)();
              if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              lVar7 = FUN_0390b368(lVar7,0);
              if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              if (*(char *)(lVar7 + 0x28) == '\0') goto LAB_02a51940;
            }
            lVar7 = FUN_0390b368();
            if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            uVar8 = FUN_0390b70c(lVar7,0);
            *(undefined8 *)(unaff_x29 + -0x108) = uVar8;
            lVar7 = FUN_01f08890(*(undefined8 *)
                                  Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__
                                 ,7);
            if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            if (*(int *)(lVar7 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a44();
            }
            *(undefined8 *)(lVar7 + 0x20) =
                 *(undefined8 *)Method_System_Linq_Enumerable_Select<Enum,_int>__;
            thunk_FUN_01f51358();
            uVar8 = *(undefined8 *)(unaff_x29 + -0x50);
            if (*(int *)(*(long *)Method_UnityEngine_Rendering_Universal_ClipperBase_AddPath__ +
                        0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            uVar8 = FUN_0392f7cc(uVar8,0);
            if (*(uint *)(lVar7 + 0x18) < 2) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a44();
            }
            *(undefined8 *)(lVar7 + 0x28) = uVar8;
            thunk_FUN_01f51358();
            if (*(uint *)(lVar7 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a44();
            }
            *(undefined8 *)(lVar7 + 0x30) =
                 *(undefined8 *)
                  Method_System_Linq_Enumerable_OrderBy<ONSPPropagationMaterial_Point,_float>__;
            thunk_FUN_01f51358();
            uVar8 = FUN_0392f7cc(*(undefined8 *)(unaff_x29 + -0x100),0);
            if (*(uint *)(lVar7 + 0x18) < 4) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a44();
            }
            *(undefined8 *)(lVar7 + 0x38) = uVar8;
            thunk_FUN_01f51358();
            if (*(uint *)(lVar7 + 0x18) < 5) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a44();
            }
            *(undefined8 *)(lVar7 + 0x40) =
                 *(undefined8 *)Method_System_Linq_Enumerable_Select<FieldInfo,_VolumeParameter>__;
            thunk_FUN_01f51358();
            if (*(uint *)(lVar7 + 0x18) < 6) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a44();
            }
            *(undefined8 *)(lVar7 + 0x48) = *(undefined8 *)(unaff_x29 + -0x18);
            thunk_FUN_01f51358();
            if (*(uint *)(lVar7 + 0x18) < 7) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a44();
            }
            *(undefined8 *)(lVar7 + 0x50) =
                 *(undefined8 *)Method_Unity_Collections_ConcurrentMask_TryFree<Long1024>__;
            thunk_FUN_01f51358();
            uVar8 = FUN_0340efe8(lVar7,0);
            if (*(long *)(unaff_x29 + -0x108) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c(0,uVar8);
            }
            FUN_0390b988(*(long *)(unaff_x29 + -0x108),uVar8,0);
            lVar7 = FUN_0390b368();
            if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            uVar8 = FUN_0390b3d4(lVar7,0);
            lVar7 = *(long *)(*(long *)(*unaff_x27 + 0xc0) + 8);
            if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
              lVar7 = FUN_01ecaf44();
            }
            if (*(int *)(lVar7 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            plVar6 = (long *)(*(code *)**(undefined8 **)(*(long *)(*unaff_x27 + 0xc0) + 0x20))
                                       (uVar8);
            if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            lVar7 = *(long *)(*(long *)(*unaff_x27 + 0xc0) + 0x28);
            if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
              lVar7 = FUN_01ecaf44(lVar7);
            }
            lVar10 = *plVar6;
            uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar11 != 0) {
              piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == lVar7) {
                  lVar7 = lVar10 + (long)(*piVar12 + 1) * 0x10 + 0x138;
                  goto LAB_02a51fbc;
                }
                uVar11 = uVar11 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar11 != 0);
            }
            lVar7 = FUN_01ecb238(plVar6,lVar7,1);
LAB_02a51fbc:
            *(long **)(unaff_x29 + -200) = unaff_x24;
            *(void **)(unaff_x29 + -0xc0) = unaff_x21;
            lVar7 = *(long *)(lVar7 + 8);
            (**(code **)(lVar7 + 0x10))(*(undefined8 *)(lVar7 + 8),lVar7,plVar6,unaff_x29 + -200);
            goto LAB_02a510e4;
          }
LAB_02a51940:
          uVar8 = *(undefined8 *)(unaff_x29 + -0x50);
          lVar7 = FUN_0390b368();
          if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          uVar13 = FUN_0390b3d4(lVar7,0);
          if (*(int *)(*(long *)Method_Drawing_CommandBuilder_Add<CommandBuilder_BoxData>__ + 0xe0)
              == 0) {
            thunk_FUN_01ee6d7c();
          }
          plVar6 = (long *)FUN_038f8654(uVar8,uVar13,0);
          if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          lVar7 = *plVar6;
          uVar11 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar11 != 0) {
            piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) ==
                  *(long *)Method_System_Linq_Enumerable_OrderBy<TMP_SpriteGlyph,_uint>__) {
                puVar9 = (undefined8 *)(lVar7 + (long)(*piVar12 + 2) * 0x10 + 0x138);
                goto LAB_02a51b94;
              }
              uVar11 = uVar11 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar11 != 0);
          }
          puVar9 = (undefined8 *)
                   FUN_01ecb238(plVar6,*(long *)
                                        Method_System_Linq_Enumerable_OrderBy<TMP_SpriteGlyph,_uint>__
                                ,2);
LAB_02a51b94:
          (*(code *)*puVar9)(plVar6);
          if (-1 < *(int *)(unaff_x29 + -0xf8)) {
            FUN_03914a34();
          }
          memset(unaff_x28,0,unaff_x20);
          lVar7 = FUN_0390b368();
          if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          uVar8 = FUN_0390b70c(lVar7,0);
          *(undefined8 *)(unaff_x29 + -0x108) = uVar8;
          lVar7 = FUN_01f08890(*(undefined8 *)
                                Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__
                               ,7);
          if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          if (*(int *)(lVar7 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a44();
          }
          *(undefined8 *)(lVar7 + 0x20) =
               *(undefined8 *)Method_System_Linq_Enumerable_Select<Enum,_int>__;
          thunk_FUN_01f51358();
          uVar8 = *(undefined8 *)(unaff_x29 + -0x50);
          if (*(int *)(*(long *)Method_UnityEngine_Rendering_Universal_ClipperBase_AddPath__ + 0xe0)
              == 0) {
            thunk_FUN_01ee6d7c();
          }
          uVar8 = FUN_0392f7cc(uVar8,0);
          if (*(uint *)(lVar7 + 0x18) < 2) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a44();
          }
          *(undefined8 *)(lVar7 + 0x28) = uVar8;
          thunk_FUN_01f51358();
          if (*(uint *)(lVar7 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a44();
          }
          *(undefined8 *)(lVar7 + 0x30) =
               *(undefined8 *)
                Method_System_Linq_Enumerable_OrderBy<ONSPPropagationMaterial_Point,_float>__;
          thunk_FUN_01f51358();
          uVar8 = FUN_0392f7cc(*(undefined8 *)(unaff_x29 + -0x100),0);
          if (*(uint *)(lVar7 + 0x18) < 4) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a44();
          }
          *(undefined8 *)(lVar7 + 0x38) = uVar8;
          thunk_FUN_01f51358();
          if (*(uint *)(lVar7 + 0x18) < 5) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a44();
          }
          *(undefined8 *)(lVar7 + 0x40) =
               *(undefined8 *)Method_System_Linq_Enumerable_Select<FieldInfo,_string>__;
          thunk_FUN_01f51358();
          if (*(uint *)(lVar7 + 0x18) < 6) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a44();
          }
          *(undefined8 *)(lVar7 + 0x48) = *(undefined8 *)(unaff_x29 + -0x18);
          thunk_FUN_01f51358();
          if (*(uint *)(lVar7 + 0x18) < 7) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a44();
          }
          *(undefined8 *)(lVar7 + 0x50) =
               *(undefined8 *)Method_Unity_Collections_ConcurrentMask_TryFree<Long1024>__;
          thunk_FUN_01f51358();
          uVar8 = FUN_0340efe8(lVar7,0);
          if (*(long *)(unaff_x29 + -0x108) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c(0,uVar8);
          }
          FUN_0390b988(*(long *)(unaff_x29 + -0x108),uVar8,0);
          goto LAB_02a50a34;
        }
        if (*(int *)(*(long *)Method_System_Runtime_Remoting_ConfigHandler_ReadClientActivated__ +
                    0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        plVar6 = (long *)FUN_0390bc14(uVar8,0);
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar8 = (**(code **)(*plVar6 + 0x178))();
        lVar7 = *(long *)(*(long *)(*unaff_x27 + 0xc0) + 0x18);
        if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_01ecaf44(lVar7);
        }
        pvVar5 = (void *)FUN_01f08934(uVar8,lVar7);
LAB_02a510e4:
        memcpy(unaff_x28,pvVar5,unaff_x20);
      }
      if (-1 < *(int *)(unaff_x29 + -0xf8)) {
        memcpy(unaff_x21,unaff_x28,unaff_x20);
        thunk_FUN_01f113fc(*(undefined8 *)(*(long *)(*unaff_x27 + 0xc0) + 0x18));
        FUN_03914a34();
      }
    }
    memcpy(unaff_x21,unaff_x28,unaff_x20);
    memcpy(unaff_x22,unaff_x21,unaff_x20);
    if (*(int *)(unaff_x29 + -0xf0) != 0) {
      lVar7 = *unaff_x24;
      uVar11 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) ==
              *(long *)Method_System_Runtime_Remoting_ConfigHandler_ReadPreload__) {
            puVar9 = (undefined8 *)(lVar7 + (long)(*piVar12 + 0xc) * 0x10 + 0x138);
            goto LAB_02a511b4;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar9 = (undefined8 *)FUN_01ecb238();
LAB_02a511b4:
      (*(code *)*puVar9)();
    }
    goto LAB_02a4ff0c;
  case 9:
    lVar7 = *unaff_x24;
    uVar11 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) ==
            *(long *)Method_System_Runtime_Remoting_ConfigHandler_ReadPreload__) {
          puVar9 = (undefined8 *)(lVar7 + (long)(*piVar12 + 0x11) * 0x10 + 0x138);
          goto LAB_02a505a4;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar9 = (undefined8 *)FUN_01ecb238();
LAB_02a505a4:
    (*(code *)*puVar9)();
    uVar8 = FUN_03914a9c();
    lVar7 = *(long *)(*(long *)(*unaff_x27 + 0xc0) + 0x18);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_01ecaf44(lVar7);
    }
    pvVar5 = (void *)FUN_01f08934(uVar8,lVar7);
    goto LAB_02a506c8;
  case 10:
    lVar7 = *unaff_x24;
    uVar11 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) ==
            *(long *)Method_System_Runtime_Remoting_ConfigHandler_ReadPreload__) {
          puVar9 = (undefined8 *)(lVar7 + (long)(*piVar12 + 0x12) * 0x10 + 0x138);
          goto LAB_02a50674;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar9 = (undefined8 *)FUN_01ecb238();
LAB_02a50674:
    (*(code *)*puVar9)();
    uVar8 = FUN_03914b0c();
    lVar7 = *(long *)(*(long *)(*unaff_x27 + 0xc0) + 0x18);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_01ecaf44(lVar7);
    }
    pvVar5 = (void *)FUN_01f08934(uVar8,lVar7);
    goto LAB_02a506c8;
  case 0xb:
    lVar7 = *unaff_x24;
    uVar11 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) ==
            *(long *)Method_System_Runtime_Remoting_ConfigHandler_ReadPreload__) {
          puVar9 = (undefined8 *)(lVar7 + (long)(*piVar12 + 0x13) * 0x10 + 0x138);
          goto LAB_02a5060c;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar9 = (undefined8 *)FUN_01ecb238();
LAB_02a5060c:
    (*(code *)*puVar9)();
    uVar8 = FUN_03914c98();
    lVar7 = *(long *)(*(long *)(*unaff_x27 + 0xc0) + 0x18);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_01ecaf44(lVar7);
    }
    pvVar5 = (void *)FUN_01f08934(uVar8,lVar7);
LAB_02a506c8:
    memcpy(unaff_x22,pvVar5,unaff_x20);
    goto LAB_02a4ff0c;
  case 0x10:
    FUN_042af7c4();
    return;
  }
  lVar7 = FUN_0390b368();
  if (lVar7 != 0) {
    lVar7 = FUN_0390b70c(lVar7,0);
    *(undefined8 *)(unaff_x29 + -0xb0) =
         *(undefined8 *)
          Method_UnityEngine_UIElements_ComputedTransitionUtils_GetWrappingTransitionData<EasingFunction>__
    ;
    *(undefined8 *)(unaff_x29 + -0xa8) = 0xffffffffffffffff;
    *(char *)(unaff_x29 + -0xa0) = (char)*(undefined4 *)(unaff_x29 + -0xdc);
    uVar8 = FUN_0359ff90(unaff_x29 + -0xb0,0);
    uVar8 = FUN_0340ebc0(*(undefined8 *)
                          Method_System_Linq_Enumerable_Select<ControlConnection,_ControlOutput>__,
                         uVar8,*(undefined8 *)
                                Method_System_Linq_Enumerable_Select<KeyValuePair<string,_object>,_string>__
                         ,0);
    if (lVar7 != 0) {
      FUN_0390b988(lVar7,uVar8,0);
      lVar7 = *unaff_x24;
      uVar11 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) ==
              *(long *)Method_System_Runtime_Remoting_ConfigHandler_ReadPreload__) {
            puVar9 = (undefined8 *)(lVar7 + (long)(*piVar12 + 0x25) * 0x10 + 0x138);
            goto LAB_02a51338;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar9 = (undefined8 *)FUN_01ecb238();
LAB_02a51338:
      (*(code *)*puVar9)();
LAB_02a51344:
      memset(unaff_x23,0,unaff_x20);
      unaff_x22 = unaff_x23;
LAB_02a4ff0c:
      memcpy(unaff_x21,unaff_x22,unaff_x20);
      pvVar5 = *(void **)(unaff_x29 + -0xd8);
LAB_02a4ff1c:
      memcpy(pvVar5,unaff_x21,unaff_x20);
      if (*(long *)(*(long *)(unaff_x29 + -0xd0) + 0x28) != *(long *)(unaff_x29 + -0x10)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


