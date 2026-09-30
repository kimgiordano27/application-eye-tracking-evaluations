/*
FUNCTION_NAME: System.Xml.Schema.XdrValidator$$get_PreserveWhitespace
ENTRY_POINT: 01db60b8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x01db6c8c) */
/* WARNING: Removing unreachable block (ram,0x01db67d4) */
/* WARNING: Removing unreachable block (ram,0x01db686c) */
/* WARNING: Removing unreachable block (ram,0x01db6878) */
/* WARNING: Removing unreachable block (ram,0x01db6c1c) */
/* WARNING: Removing unreachable block (ram,0x01db691c) */
/* WARNING: Removing unreachable block (ram,0x01db68a0) */
/* WARNING: Removing unreachable block (ram,0x01db68a4) */
/* WARNING: Removing unreachable block (ram,0x01db6c78) */
/* WARNING: Removing unreachable block (ram,0x01db6b64) */
/* WARNING: Removing unreachable block (ram,0x01db6b68) */
/* WARNING: Removing unreachable block (ram,0x01db5b04) */

void System_Xml_Schema_XdrValidator__get_PreserveWhitespace(undefined8 *param_1)

{
  byte bVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  undefined8 uVar13;
  uint uVar14;
  long lVar15;
  int *piVar16;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long unaff_x23;
  long *unaff_x24;
  long *unaff_x28;
  ulong in_stack_00000018;
  long in_stack_00000020;
  long *in_stack_00000028;
  
code_r0x01db60b8:
  uVar3 = (*(code *)*param_1)();
  puVar2 = StringLiteral_10310;
  if ((uVar3 & 1) != 0) {
    lVar15 = *unaff_x24;
    uVar3 = (ulong)*(ushort *)(lVar15 + 0x12a);
    if (uVar3 != 0) {
      piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *unaff_x19) {
          puVar4 = (undefined8 *)(lVar15 + (long)(*piVar16 + 1) * 0x10 + 0x138);
          goto LAB_01db6118;
        }
        uVar3 = uVar3 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar3 != 0);
    }
    puVar4 = (undefined8 *)FUN_00d59724();
LAB_01db6118:
    plVar5 = (long *)(*(code *)*puVar4)();
    if ((plVar5 != (long *)0x0) && (*plVar5 != *unaff_x20)) {
                    /* WARNING: Subroutine does not return */
      FUN_00da544c(plVar5);
    }
    if (*(long *)(unaff_x21 + 0x30) == 0) {
      if (unaff_x23 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      uVar13 = FUN_01d3b244();
    }
    else {
      uVar13 = *(undefined8 *)(*(long *)(unaff_x21 + 0x30) + 0x50);
    }
    uVar3 = thunk_FUN_015fe514(plVar5,uVar13,0);
    if (((uVar3 & 1) == 0) && (uVar3 = FUN_015ff8a0(plVar5,0), (uVar3 & 1) == 0)) {
      plVar6 = in_stack_00000028;
      if (in_stack_00000020 != 0) {
        plVar6 = (long *)FUN_00da4fb8(*(undefined8 *)PTR_DAT_033ea8a0,5);
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        lVar15 = *(long *)(unaff_x21 + 0x60);
        if ((lVar15 != 0) &&
           (lVar7 = thunk_FUN_00d6225c(lVar15,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0)) {
          uVar13 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
          FUN_00da5038(uVar13,0);
        }
        uVar14 = *(uint *)(plVar6 + 3);
        if (uVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        plVar6[4] = lVar15;
        lVar15 = *(long *)(unaff_x21 + 0x68);
        if (lVar15 != 0) {
          lVar7 = thunk_FUN_00d6225c(lVar15,*(undefined8 *)(*plVar6 + 0x40));
          if (lVar7 == 0) {
            uVar13 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
            FUN_00da5038(uVar13,0);
          }
          uVar14 = *(uint *)(plVar6 + 3);
        }
        if (uVar14 < 2) {
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        plVar6[5] = lVar15;
        if (*(long *)StringLiteral_11537 != 0) {
          lVar15 = thunk_FUN_00d6225c(*(long *)StringLiteral_11537,*(undefined8 *)(*plVar6 + 0x40));
          if (lVar15 == 0) {
            uVar13 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
            FUN_00da5038(uVar13,0);
          }
          uVar14 = *(uint *)(plVar6 + 3);
        }
        if (uVar14 < 3) {
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        plVar6[6] = *(long *)StringLiteral_11537;
        plVar8 = *(long **)(unaff_x21 + 0x28);
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        plVar8 = (long *)(**(code **)(*plVar8 + 0x308))
                                   (plVar8,plVar5,*(undefined8 *)(*plVar8 + 0x310));
        if (plVar8 == (long *)0x0) {
          lVar15 = 0;
        }
        else {
          if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          lVar15 = (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
          if ((lVar15 != 0) &&
             (lVar7 = thunk_FUN_00d6225c(lVar15,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0)) {
            uVar13 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
            FUN_00da5038(uVar13,0);
          }
        }
        uVar14 = *(uint *)(plVar6 + 3);
        if (uVar14 < 4) {
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        plVar6[7] = lVar15;
        if (*(long *)Method_UnityEngine_UIElements_PanelEventHandler_OnElementFocus__ != 0) {
          lVar15 = thunk_FUN_00d6225c(*(long *)
                                       Method_UnityEngine_UIElements_PanelEventHandler_OnElementFocus__
                                      ,*(undefined8 *)(*plVar6 + 0x40));
          if (lVar15 == 0) {
            uVar13 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
            FUN_00da5038(uVar13,0);
          }
          uVar14 = *(uint *)(plVar6 + 3);
        }
        if (uVar14 < 5) {
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        plVar6[8] = *(long *)Method_UnityEngine_UIElements_PanelEventHandler_OnElementFocus__;
        uVar13 = FUN_01600844(plVar6,0);
        plVar6 = (long *)thunk_FUN_00d62348(*(undefined8 *)
                                             Method_System_Collections_Generic_KeyValuePair<string,_InputControlLayout_ControlItem>_get_Value__
                                           );
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        FUN_01f2b078(plVar6,uVar13,0,0);
        lVar15 = *plVar6;
        bVar1 = *(byte *)(*(long *)
                           Method_System_Collections_Generic_KeyValuePair<string,_InputControlLayout_ControlItem>_get_Value__
                         + 300);
        if ((bVar1 <= *(byte *)(lVar15 + 300)) &&
           (*(long *)(*(long *)(lVar15 + 200) + (ulong)bVar1 * 8 + -8) ==
            *(long *)
             Method_System_Collections_Generic_KeyValuePair<string,_InputControlLayout_ControlItem>_get_Value__
           )) {
          FUN_01f2b2c0(plVar6,1,0);
          lVar15 = *plVar6;
        }
        (**(code **)(lVar15 + 0x198))(plVar6,1,*(undefined8 *)(lVar15 + 0x1a0));
      }
      plVar8 = *(long **)(unaff_x21 + 0x18);
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      plVar8 = (long *)(**(code **)(*plVar8 + 0x308))
                                 (plVar8,plVar5,*(undefined8 *)(*plVar8 + 0x310));
      if (plVar8 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)Method_UnityEngine_Mesh_SetIndices<ushort>__ + 300);
        if ((*(byte *)(*plVar8 + 300) < bVar1) ||
           (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) !=
            *(long *)Method_UnityEngine_Mesh_SetIndices<ushort>__)) {
                    /* WARNING: Subroutine does not return */
          FUN_00da544c(plVar8);
        }
      }
      plVar9 = *(long **)(unaff_x21 + 0x48);
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      (**(code **)(*plVar9 + 0x2c8))(plVar9,plVar8,*(undefined8 *)(*plVar9 + 0x2d0));
      plVar9 = *(long **)(unaff_x21 + 0x18);
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      plVar9 = (long *)(**(code **)(*plVar9 + 0x388))(plVar9,*(undefined8 *)(*plVar9 + 0x390));
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      lVar15 = *plVar9;
      uVar3 = (ulong)*(ushort *)(lVar15 + 0x12a);
      if (uVar3 != 0) {
        piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *unaff_x28) {
            puVar4 = (undefined8 *)(lVar15 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_01db6478;
          }
          uVar3 = uVar3 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar3 != 0);
      }
      puVar4 = (undefined8 *)FUN_00d59724(plVar9,*unaff_x28,0);
LAB_01db6478:
      plVar9 = (long *)(*(code *)*puVar4)(plVar9,puVar4[1]);
      do {
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        do {
          do {
            lVar15 = *plVar9;
            uVar3 = (ulong)*(ushort *)(lVar15 + 0x12a);
            if (uVar3 != 0) {
              piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
              do {
                if (*(long *)(piVar16 + -2) == *unaff_x19) {
                  puVar4 = (undefined8 *)(lVar15 + (long)*piVar16 * 0x10 + 0x138);
                  goto LAB_01db64e0;
                }
                uVar3 = uVar3 - 1;
                piVar16 = piVar16 + 4;
              } while (uVar3 != 0);
            }
            puVar4 = (undefined8 *)FUN_00d59724(plVar9,*unaff_x19,0);
LAB_01db64e0:
            uVar3 = (*(code *)*puVar4)(plVar9,puVar4[1]);
            if ((uVar3 & 1) == 0) {
              plVar5 = (long *)thunk_FUN_00d6225c(plVar9,*(undefined8 *)StringLiteral_10310);
              if (plVar5 == (long *)0x0) goto LAB_01db67c8;
              lVar15 = *plVar5;
              uVar3 = (ulong)*(ushort *)(lVar15 + 0x12a);
              if (uVar3 == 0) goto LAB_01db67a0;
              piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
              goto LAB_01db6788;
            }
            lVar15 = *plVar9;
            uVar3 = (ulong)*(ushort *)(lVar15 + 0x12a);
            if (uVar3 != 0) {
              piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
              do {
                if (*(long *)(piVar16 + -2) == *unaff_x19) {
                  puVar4 = (undefined8 *)(lVar15 + (long)(*piVar16 + 1) * 0x10 + 0x138);
                  goto LAB_01db6540;
                }
                uVar3 = uVar3 - 1;
                piVar16 = piVar16 + 4;
              } while (uVar3 != 0);
            }
            puVar4 = (undefined8 *)FUN_00d59724(plVar9,*unaff_x19,1);
LAB_01db6540:
            plVar10 = (long *)(*(code *)*puVar4)(plVar9,puVar4[1]);
            if ((plVar10 != (long *)0x0) && (*plVar10 != *unaff_x20)) {
                    /* WARNING: Subroutine does not return */
              FUN_00da544c(plVar10);
            }
            uVar3 = thunk_FUN_015fe514(plVar5,plVar10,0);
          } while ((uVar3 & 1) != 0);
          plVar11 = *(long **)(unaff_x21 + 0x28);
          if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          plVar11 = (long *)(**(code **)(*plVar11 + 0x308))
                                      (plVar11,plVar10,*(undefined8 *)(*plVar11 + 0x310));
        } while (plVar11 == (long *)0x0);
        if (*plVar11 != *unaff_x20) {
                    /* WARNING: Subroutine does not return */
          FUN_00da544c(plVar11);
        }
        uVar13 = FUN_015f5b28(*(undefined8 *)
                               Method_System_Collections_Generic_List<OVRPassthroughLayer_DeferredPassthroughMeshAddition>_Add__
                              ,plVar11,0);
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c(0,uVar13);
        }
        (**(code **)(*plVar8 + 0x4d8))(plVar8,uVar13,plVar10,*(undefined8 *)(*plVar8 + 0x4e0));
        plVar12 = *(long **)(unaff_x21 + 0x48);
        if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        plVar12 = (long *)(**(code **)(*plVar12 + 0x5a8))
                                    (plVar12,*(undefined8 *)
                                              Meta_Net_NativeWebSocket_WebSocketUnexpectedException_TypeInfo
                                     ,*(undefined8 *)
                                       Method_Oculus_Platform_Request<MicrophoneAvailabilityState>__ctor__
                                     ,*(undefined8 *)
                                       Unity_XR_CoreUtils_TypeExtensions_<>c__DisplayClass2_0_TypeInfo
                                     ,*(undefined8 *)(*plVar12 + 0x5b0));
        if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        (**(code **)(*plVar12 + 0x4d8))
                  (plVar12,*(undefined8 *)StringLiteral_11343,plVar10,
                   *(undefined8 *)(*plVar12 + 0x4e0));
        if ((in_stack_00000018 & 0x100000000) == 0 && *(int *)(unaff_x21 + 0x5c) != 3) {
          if (*(long *)(unaff_x21 + 0x30) == 0) {
            if (unaff_x23 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            uVar13 = FUN_01d3b244();
          }
          else {
            uVar13 = *(undefined8 *)(*(long *)(unaff_x21 + 0x30) + 0x50);
          }
          uVar3 = thunk_FUN_015fe514(plVar10,uVar13,0);
          if ((uVar3 & 1) == 0) {
            uVar13 = FUN_0160073c(*(undefined8 *)(unaff_x21 + 0x68),
                                  *(undefined8 *)StringLiteral_11537,plVar11,
                                  *(undefined8 *)
                                   Method_UnityEngine_UIElements_PanelEventHandler_OnElementFocus__,
                                  0);
            (**(code **)(*plVar12 + 0x4d8))
                      (plVar12,*(undefined8 *)System_Func<LightLambda,_Delegate>_var,uVar13,
                       *(undefined8 *)(*plVar12 + 0x4e0));
          }
          else {
            uVar13 = FUN_015f5b28(*(undefined8 *)(unaff_x21 + 0x68),
                                  *(undefined8 *)(unaff_x21 + 0x70),0);
            (**(code **)(*plVar12 + 0x4d8))
                      (plVar12,*(undefined8 *)System_Func<LightLambda,_Delegate>_var,uVar13,
                       *(undefined8 *)(*plVar12 + 0x4e0));
          }
        }
        unaff_x28 = (long *)Method_UnityEngine_UIElements_UIR_Page_DataSet<Vertex>_Dispose__;
        (**(code **)(*plVar8 + 0x2b8))(plVar8,plVar12,*(undefined8 *)(*plVar8 + 0x2c0));
      } while( true );
    }
    goto LAB_01db606c;
  }
  plVar5 = (long *)thunk_FUN_00d6225c();
  if (plVar5 != (long *)0x0) {
    lVar15 = *plVar5;
    uVar3 = (ulong)*(ushort *)(lVar15 + 0x12a);
    if (uVar3 != 0) {
      piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)puVar2) {
          puVar4 = (undefined8 *)(lVar15 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_01db6b4c;
        }
        uVar3 = uVar3 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar3 != 0);
    }
    puVar4 = (undefined8 *)FUN_00d59724(plVar5,*(long *)puVar2,0);
LAB_01db6b4c:
    (*(code *)*puVar4)(plVar5,puVar4[1]);
  }
  if (in_stack_00000020 == 0) {
    if (in_stack_00000028 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    (**(code **)(*in_stack_00000028 + 0x308))
              (in_stack_00000028,*(undefined8 *)(*in_stack_00000028 + 0x310));
  }
  return;
  while( true ) {
    uVar3 = uVar3 - 1;
    piVar16 = piVar16 + 4;
    if (uVar3 == 0) break;
LAB_01db6788:
    if (*(long *)(piVar16 + -2) == *(long *)StringLiteral_10310) {
      puVar4 = (undefined8 *)(lVar15 + (long)*piVar16 * 0x10 + 0x138);
      goto LAB_01db67bc;
    }
  }
LAB_01db67a0:
  puVar4 = (undefined8 *)FUN_00d59724(plVar5,*(long *)StringLiteral_10310,0);
LAB_01db67bc:
  (*(code *)*puVar4)(plVar5,puVar4[1]);
LAB_01db67c8:
  plVar5 = *(long **)(unaff_x21 + 0x48);
  if ((in_stack_00000018._4_1_ & *(int *)(unaff_x21 + 0x5c) != 3) == 0) {
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    (**(code **)(*plVar5 + 0x5e8))(plVar5,plVar6,*(undefined8 *)(*plVar5 + 0x5f0));
  }
  else {
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    (**(code **)(*plVar5 + 1000))(plVar5,plVar6,*(undefined8 *)(*plVar5 + 0x3f0));
  }
  plVar5 = *(long **)(unaff_x21 + 0x48);
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  (**(code **)(*plVar5 + 0x2a8))(plVar5,plVar8,*(undefined8 *)(*plVar5 + 0x2b0));
  unaff_x20 = (long *)System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo;
  if (in_stack_00000020 != 0) {
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    (**(code **)(*plVar6 + 0x1a8))(plVar6,*(undefined8 *)(*plVar6 + 0x1b0));
    (**(code **)(*plVar6 + 0x2f8))(plVar6,*(undefined8 *)(*plVar6 + 0x300));
    unaff_x20 = (long *)System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo
    ;
  }
LAB_01db606c:
  lVar15 = *unaff_x24;
  uVar3 = (ulong)*(ushort *)(lVar15 + 0x12a);
  if (uVar3 != 0) {
    piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
    do {
      if (*(long *)(piVar16 + -2) == *unaff_x19) {
        param_1 = (undefined8 *)(lVar15 + (long)*piVar16 * 0x10 + 0x138);
        goto code_r0x01db60b8;
      }
      uVar3 = uVar3 - 1;
      piVar16 = piVar16 + 4;
    } while (uVar3 != 0);
  }
  param_1 = (undefined8 *)FUN_00d59724();
  goto code_r0x01db60b8;
}


