/*
FUNCTION_NAME: System.Array$$Resize<OVRPlugin.Quatf>
ENTRY_POINT: 01f1c618
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 131
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_6;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_6
*/


void System_Array__Resize<OVRPlugin_Quatf>(void)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  undefined1 *__s;
  undefined8 uVar7;
  void *pvVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 *puVar12;
  ulong __n;
  undefined1 *__s_00;
  size_t unaff_x21;
  long unaff_x22;
  ulong uVar13;
  undefined8 uVar14;
  undefined1 *__s_01;
  long *unaff_x26;
  long unaff_x27;
  void *unaff_x28;
  long unaff_x29;
  
  __s_00 = &stack0x00000000 + -unaff_x22;
  memset(__s_00,0,unaff_x21);
  __s_01 = __s_00 + -unaff_x22;
  memset(__s_01,0,unaff_x21);
  if (*(long *)(unaff_x29 + -0x28) == 0) {
    uVar13 = 0;
LAB_01f1c688:
    __s = (undefined1 *)0x0;
  }
  else {
    uVar13 = *(ulong *)(*(long *)(unaff_x29 + -0x28) + 0x18);
    if (uVar13 == 0) goto LAB_01f1c688;
    __n = -(uVar13 >> 0x1f & 1) & 0xfffffff800000000 | (uVar13 & 0xffffffff) << 3;
    if ((uVar13 & 0xffffffff) == 0) {
      __s = (undefined1 *)0x0;
    }
    else {
      __s = __s_01 + -(__n + 0xf & 0xfffffffffffffff0);
    }
    memset(__s,0,__n);
    if ((int)uVar13 < 0) {
      FUN_033b2a00(0);
    }
  }
  *(ulong *)(unaff_x29 + -0x48) = uVar13 & 0xffffffff;
  *(undefined1 **)(unaff_x29 + -0x40) = __s;
  FUN_03d22268(*(undefined8 *)(unaff_x29 + -0x28),__s,uVar13 & 0xffffffff,0);
  puVar1 = Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material;
  uVar14 = *(undefined8 *)*unaff_x26;
  if (*(int *)(*(long *)
                Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
              + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  uVar14 = FUN_033a87c8(uVar14,0);
  puVar2 = StringLiteral_1164;
  if (*(int *)(*(long *)StringLiteral_1164 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  uVar13 = FUN_03d30f1c(uVar14,0);
  uVar14 = *(undefined8 *)*unaff_x26;
  if ((uVar13 & 1) == 0) {
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    uVar14 = FUN_033a87c8(uVar14,0);
    uVar7 = FUN_033a87c8(*(undefined8 *)StringLiteral_1175,0);
    uVar13 = FUN_033aa3b4(uVar14,uVar7,0);
    if ((uVar13 & 1) == 0) {
      uVar14 = *(undefined8 *)*unaff_x26;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      uVar14 = FUN_033a87c8(uVar14,0);
      uVar7 = FUN_033a87c8(*(undefined8 *)StringLiteral_1162,0);
      uVar13 = FUN_033aa3b4(uVar14,uVar7,0);
      if ((uVar13 & 1) != 0) {
        uVar14 = FUN_03d2cba4(*(undefined8 *)(unaff_x27 + 0x10),0);
        uVar14 = FUN_03d2bcb0(uVar14,*(undefined8 *)(unaff_x29 + -0x60),
                              *(undefined8 *)(unaff_x29 + -0x40),*(undefined8 *)(unaff_x29 + -0x48),
                              0);
        uVar13 = FUN_033dc8d4(uVar14,0,0);
        if ((uVar13 & 1) == 0) {
          uVar14 = FUN_03d30d88(uVar14,0);
          lVar11 = *(long *)(*unaff_x26 + 8);
          if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
            lVar11 = FUN_01dde7f8(lVar11);
          }
          pvVar8 = (void *)FUN_01d7da60(uVar14,lVar11,*(undefined8 *)(unaff_x29 + -0x30));
        }
        else {
          memset(unaff_x28,0,unaff_x21);
          pvVar8 = *(void **)(unaff_x29 + -0x30);
          memcpy(pvVar8,unaff_x28,unaff_x21);
        }
        memcpy(__s_00,pvVar8,unaff_x21);
        pvVar8 = *(void **)(unaff_x29 + -0x38);
        __s_01 = __s_00;
        goto LAB_01f1d13c;
      }
      uVar14 = *(undefined8 *)*unaff_x26;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      uVar14 = FUN_033a87c8(uVar14,0);
      uVar7 = FUN_033a87c8(*(undefined8 *)StringLiteral_1163,0);
      uVar13 = FUN_033aa3b4(uVar14,uVar7,0);
      if ((uVar13 & 1) != 0) {
        uVar14 = FUN_03d2cba4(*(undefined8 *)(unaff_x27 + 0x10),0);
        uVar14 = FUN_03d2bcb0(uVar14,*(undefined8 *)(unaff_x29 + -0x60),
                              *(undefined8 *)(unaff_x29 + -0x40),*(undefined8 *)(unaff_x29 + -0x48),
                              0);
        uVar13 = FUN_033dc8d4(uVar14,0,0);
        if ((uVar13 & 1) == 0) {
          uVar14 = FUN_03d2f69c(uVar14,0);
          lVar11 = *(long *)(*unaff_x26 + 8);
          if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
            lVar11 = FUN_01dde7f8(lVar11);
          }
          pvVar8 = (void *)FUN_01d7da60(uVar14,lVar11,*(undefined8 *)(unaff_x29 + -0x30));
        }
        else {
          memset(unaff_x28,0,unaff_x21);
          pvVar8 = *(void **)(unaff_x29 + -0x30);
          memcpy(pvVar8,unaff_x28,unaff_x21);
        }
        memcpy(__s_01,pvVar8,unaff_x21);
        pvVar8 = *(void **)(unaff_x29 + -0x38);
        goto LAB_01f1d13c;
      }
      uVar14 = *(undefined8 *)StringLiteral_1171;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      uVar14 = FUN_033a87c8(uVar14,0);
      uVar7 = FUN_033a87c8(*(undefined8 *)*unaff_x26,0);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      uVar13 = FUN_03d30f30(uVar14,uVar7,0);
      if ((uVar13 & 1) == 0) {
        uVar14 = *(undefined8 *)*unaff_x26;
        lVar11 = thunk_FUN_01dd295c(
                                   Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
                                   );
        if (*(int *)(lVar11 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
        }
        plVar9 = (long *)FUN_033a87c8(uVar14,0);
        if (plVar9 == (long *)0x0) {
          uVar14 = thunk_FUN_01dd295c(StringLiteral_1177);
          uVar7 = 0;
        }
        else {
          uVar14 = thunk_FUN_01dd295c(StringLiteral_1177);
          uVar7 = (**(code **)(*plVar9 + 0x168))(plVar9,*(undefined8 *)(*plVar9 + 0x170));
        }
        uVar10 = thunk_FUN_01dd295c(StringLiteral_712);
        uVar14 = FUN_032797dc(uVar14,uVar7,uVar10,0);
        thunk_FUN_01dd295c(StringLiteral_464);
        uVar7 = thunk_FUN_01de27b8();
        FUN_033c8b98(uVar7,uVar14,0);
                    /* WARNING: Subroutine does not return */
        FUN_01d7da3c(uVar7);
      }
      uVar14 = FUN_03d2cba4(*(undefined8 *)(unaff_x27 + 0x10),0);
      uVar14 = FUN_03d2bcb0(uVar14,*(undefined8 *)(unaff_x29 + -0x60),
                            *(undefined8 *)(unaff_x29 + -0x40),*(undefined8 *)(unaff_x29 + -0x48),0)
      ;
      __s_01 = *(undefined1 **)(unaff_x29 + -0x30);
      puVar12 = *(undefined8 **)(*unaff_x26 + 0x10);
      uVar7 = *puVar12;
      *(long *)(unaff_x29 + -0x20) = unaff_x29 + -0x10;
      *(undefined1 **)(unaff_x29 + -0x18) = __s_01;
      *(undefined8 *)(unaff_x29 + -0x10) = uVar14;
      (*(code *)puVar12[2])(uVar7,puVar12,0,unaff_x29 + -0x20,__s_01);
LAB_01f1cd38:
      pvVar8 = *(void **)(unaff_x29 + -0x38);
      goto LAB_01f1d13c;
    }
    uVar14 = FUN_03d2cba4(*(undefined8 *)(unaff_x27 + 0x10),0);
    uVar14 = FUN_03d2bd28(uVar14,*(undefined8 *)(unaff_x29 + -0x60),
                          *(undefined8 *)(unaff_x29 + -0x40),*(undefined8 *)(unaff_x29 + -0x48),0);
    lVar11 = *(long *)(*unaff_x26 + 8);
    if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = FUN_01dde7f8(lVar11);
    }
    __s_01 = (undefined1 *)FUN_01d7da60(uVar14,lVar11,*(undefined8 *)(unaff_x29 + -0x30));
  }
  else {
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    uVar14 = FUN_033a87c8(uVar14,0);
    uVar7 = FUN_033a87c8(*(undefined8 *)
                          Field_UnityEngine_InputSystem_InputActionRebindingExtensions_ParameterEnumerator_m_State
                         ,0);
    uVar13 = FUN_033aa3b4(uVar14,uVar7,0);
    if ((uVar13 & 1) == 0) {
      uVar14 = *(undefined8 *)*unaff_x26;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      uVar14 = FUN_033a87c8(uVar14,0);
      uVar7 = FUN_033a87c8(*(undefined8 *)
                            Field_UnityEngine_UIElements_EventDispatcher_DispatchContext_m_Queue,0);
      uVar13 = FUN_033aa3b4(uVar14,uVar7,0);
      if ((uVar13 & 1) == 0) {
        uVar14 = *(undefined8 *)*unaff_x26;
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
        }
        uVar14 = FUN_033a87c8(uVar14,0);
        uVar7 = FUN_033a87c8(*(undefined8 *)StringLiteral_1165,0);
        uVar13 = FUN_033aa3b4(uVar14,uVar7,0);
        if ((uVar13 & 1) == 0) {
          uVar14 = *(undefined8 *)*unaff_x26;
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_01dc4f30();
          }
          uVar14 = FUN_033a87c8(uVar14,0);
          uVar7 = FUN_033a87c8(*(undefined8 *)StringLiteral_1172,0);
          uVar13 = FUN_033aa3b4(uVar14,uVar7,0);
          if ((uVar13 & 1) == 0) {
            uVar14 = *(undefined8 *)*unaff_x26;
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_01dc4f30();
            }
            uVar14 = FUN_033a87c8(uVar14,0);
            uVar7 = FUN_033a87c8(*(undefined8 *)StringLiteral_1168,0);
            uVar13 = FUN_033aa3b4(uVar14,uVar7,0);
            if ((uVar13 & 1) == 0) {
              uVar14 = *(undefined8 *)*unaff_x26;
              if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                thunk_FUN_01dc4f30();
              }
              uVar14 = FUN_033a87c8(uVar14,0);
              uVar7 = FUN_033a87c8(*(undefined8 *)StringLiteral_1170,0);
              uVar13 = FUN_033aa3b4(uVar14,uVar7,0);
              if ((uVar13 & 1) == 0) {
                uVar14 = *(undefined8 *)*unaff_x26;
                if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                  thunk_FUN_01dc4f30();
                }
                uVar14 = FUN_033a87c8(uVar14,0);
                uVar7 = FUN_033a87c8(*(undefined8 *)
                                      Field_UnityEngine_InputSystem_InputActionSetupExtensions_CompositeSyntax_m_Action
                                     ,0);
                uVar13 = FUN_033aa3b4(uVar14,uVar7,0);
                if ((uVar13 & 1) == 0) {
                  uVar14 = *(undefined8 *)*unaff_x26;
                  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                    thunk_FUN_01dc4f30();
                  }
                  uVar14 = FUN_033a87c8(uVar14,0);
                  uVar7 = FUN_033a87c8(*(undefined8 *)
                                        Field_UnityEngine_InputSystem_InputActionRebindingExtensions_Parameter_field
                                       ,0);
                  uVar13 = FUN_033aa3b4(uVar14,uVar7,0);
                  if ((uVar13 & 1) == 0) {
                    uVar14 = *(undefined8 *)*unaff_x26;
                    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                      thunk_FUN_01dc4f30();
                    }
                    uVar14 = FUN_033a87c8(uVar14,0);
                    uVar7 = FUN_033a87c8(*(undefined8 *)StringLiteral_1166,0);
                    uVar13 = FUN_033aa3b4(uVar14,uVar7,0);
                    if ((uVar13 & 1) == 0) {
                      memset(unaff_x28,0,unaff_x21);
                      __s_01 = *(undefined1 **)(unaff_x29 + -0x30);
                      memcpy(__s_01,unaff_x28,unaff_x21);
                      goto LAB_01f1cd38;
                    }
                    uVar14 = FUN_03d2cba4(*(undefined8 *)(unaff_x27 + 0x10),0);
                    uVar5 = FUN_03d244dc(uVar14,*(undefined8 *)(unaff_x29 + -0x60),
                                         *(undefined8 *)(unaff_x29 + -0x40),
                                         *(undefined8 *)(unaff_x29 + -0x48),0);
                    puVar1 = StringLiteral_1167;
                    *(undefined2 *)(unaff_x29 + -0x20) = uVar5;
                    uVar14 = thunk_FUN_01de23e8(*(undefined8 *)puVar1,unaff_x29 + -0x20);
                    lVar11 = *(long *)(*unaff_x26 + 8);
                    if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
                      lVar11 = FUN_01dde7f8(lVar11);
                    }
                    __s_01 = (undefined1 *)
                             FUN_01d7da60(uVar14,lVar11,*(undefined8 *)(unaff_x29 + -0x30));
                  }
                  else {
                    uVar14 = FUN_03d2cba4(*(undefined8 *)(unaff_x27 + 0x10),0);
                    uVar14 = FUN_03d243d0(uVar14,*(undefined8 *)(unaff_x29 + -0x60),
                                          *(undefined8 *)(unaff_x29 + -0x40),
                                          *(undefined8 *)(unaff_x29 + -0x48),0);
                    puVar1 = 
                    Field_UnityEngine_InputSystem_InputActionRebindingExtensions_ParameterEnumerable_m_State
                    ;
                    *(undefined8 *)(unaff_x29 + -0x20) = uVar14;
                    uVar14 = thunk_FUN_01de23e8(*(undefined8 *)puVar1,unaff_x29 + -0x20);
                    lVar11 = *(long *)(*unaff_x26 + 8);
                    if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
                      lVar11 = FUN_01dde7f8(lVar11);
                    }
                    __s_01 = (undefined1 *)
                             FUN_01d7da60(uVar14,lVar11,*(undefined8 *)(unaff_x29 + -0x30));
                  }
                }
                else {
                  uVar14 = FUN_03d2cba4(*(undefined8 *)(unaff_x27 + 0x10),0);
                  uVar6 = FUN_03d242c4(uVar14,*(undefined8 *)(unaff_x29 + -0x60),
                                       *(undefined8 *)(unaff_x29 + -0x40),
                                       *(undefined8 *)(unaff_x29 + -0x48),0);
                  puVar1 = Field_UnityEngine_SecondarySpriteTexture_texture;
                  *(undefined4 *)(unaff_x29 + -0x20) = uVar6;
                  uVar14 = thunk_FUN_01de23e8(*(undefined8 *)puVar1,unaff_x29 + -0x20);
                  lVar11 = *(long *)(*unaff_x26 + 8);
                  if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
                    lVar11 = FUN_01dde7f8(lVar11);
                  }
                  __s_01 = (undefined1 *)
                           FUN_01d7da60(uVar14,lVar11,*(undefined8 *)(unaff_x29 + -0x30));
                }
              }
              else {
                uVar14 = FUN_03d2cba4(*(undefined8 *)(unaff_x27 + 0x10),0);
                uVar14 = FUN_03d241c4(uVar14,*(undefined8 *)(unaff_x29 + -0x60),
                                      *(undefined8 *)(unaff_x29 + -0x40),
                                      *(undefined8 *)(unaff_x29 + -0x48),0);
                puVar1 = StringLiteral_1160;
                *(undefined8 *)(unaff_x29 + -0x20) = uVar14;
                uVar14 = thunk_FUN_01de23e8(*(undefined8 *)puVar1,unaff_x29 + -0x20);
                lVar11 = *(long *)(*unaff_x26 + 8);
                if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
                  lVar11 = FUN_01dde7f8(lVar11);
                }
                __s_01 = (undefined1 *)
                         FUN_01d7da60(uVar14,lVar11,*(undefined8 *)(unaff_x29 + -0x30));
              }
            }
            else {
              uVar14 = FUN_03d2cba4(*(undefined8 *)(unaff_x27 + 0x10),0);
              uVar5 = FUN_03d23fc4(uVar14,*(undefined8 *)(unaff_x29 + -0x60),
                                   *(undefined8 *)(unaff_x29 + -0x40),
                                   *(undefined8 *)(unaff_x29 + -0x48),0);
              puVar1 = StringLiteral_1169;
              *(undefined2 *)(unaff_x29 + -0x20) = uVar5;
              uVar14 = thunk_FUN_01de23e8(*(undefined8 *)puVar1,unaff_x29 + -0x20);
              lVar11 = *(long *)(*unaff_x26 + 8);
              if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
                lVar11 = FUN_01dde7f8(lVar11);
              }
              __s_01 = (undefined1 *)FUN_01d7da60(uVar14,lVar11,*(undefined8 *)(unaff_x29 + -0x30));
            }
          }
          else {
            uVar14 = FUN_03d2cba4(*(undefined8 *)(unaff_x27 + 0x10),0);
            uVar4 = FUN_03d23ec4(uVar14,*(undefined8 *)(unaff_x29 + -0x60),
                                 *(undefined8 *)(unaff_x29 + -0x40),
                                 *(undefined8 *)(unaff_x29 + -0x48),0);
            puVar1 = StringLiteral_1173;
            *(undefined1 *)(unaff_x29 + -0x20) = uVar4;
            uVar14 = thunk_FUN_01de23e8(*(undefined8 *)puVar1,unaff_x29 + -0x20);
            lVar11 = *(long *)(*unaff_x26 + 8);
            if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
              lVar11 = FUN_01dde7f8(lVar11);
            }
            __s_01 = (undefined1 *)FUN_01d7da60(uVar14,lVar11,*(undefined8 *)(unaff_x29 + -0x30));
          }
        }
        else {
          if (*(int *)(*(long *)
                        Field_<PrivateImplementationDetails>_E768EDCAE10BAB68BB5DF102FDBB8CF4F31B9D60159B44DA3F33ABC36388308B
                      + 0xe0) == 0) {
            thunk_FUN_01dc4f30();
          }
          FUN_03d41b48(*(undefined8 *)StringLiteral_1176,0);
          uVar14 = FUN_03d2cba4(*(undefined8 *)(unaff_x27 + 0x10),0);
          uVar4 = FUN_03d23ec4(uVar14,*(undefined8 *)(unaff_x29 + -0x60),
                               *(undefined8 *)(unaff_x29 + -0x40),*(undefined8 *)(unaff_x29 + -0x48)
                               ,0);
          puVar1 = StringLiteral_595;
          *(undefined1 *)(unaff_x29 + -0x20) = uVar4;
          uVar14 = thunk_FUN_01de23e8(*(undefined8 *)puVar1,unaff_x29 + -0x20);
          lVar11 = *(long *)(*unaff_x26 + 8);
          if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
            lVar11 = FUN_01dde7f8(lVar11);
          }
          __s_01 = (undefined1 *)FUN_01d7da60(uVar14,lVar11,*(undefined8 *)(unaff_x29 + -0x30));
        }
      }
      else {
        uVar14 = FUN_03d2cba4(*(undefined8 *)(unaff_x27 + 0x10),0);
        bVar3 = FUN_03d245e0(uVar14,*(undefined8 *)(unaff_x29 + -0x60),
                             *(undefined8 *)(unaff_x29 + -0x40),*(undefined8 *)(unaff_x29 + -0x48),0
                            );
        puVar1 = 
        Field_<PrivateImplementationDetails>_A30E1152CFB528AE968FAC58E83BBEB3611BFDE2E6CF60B4FA9535A7D0A9B8EA
        ;
        *(byte *)(unaff_x29 + -0x20) = bVar3 & 1;
        uVar14 = thunk_FUN_01de23e8(*(undefined8 *)puVar1,unaff_x29 + -0x20);
        lVar11 = *(long *)(*unaff_x26 + 8);
        if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = FUN_01dde7f8(lVar11);
        }
        __s_01 = (undefined1 *)FUN_01d7da60(uVar14,lVar11,*(undefined8 *)(unaff_x29 + -0x30));
      }
    }
    else {
      uVar14 = FUN_03d2cba4(*(undefined8 *)(unaff_x27 + 0x10),0);
      uVar6 = FUN_03d240c4(uVar14,*(undefined8 *)(unaff_x29 + -0x60),
                           *(undefined8 *)(unaff_x29 + -0x40),*(undefined8 *)(unaff_x29 + -0x48),0);
      puVar1 = Field_UnityEngine_InputSystem_InputActionSetupExtensions_BindingSyntax_m_ActionMap;
      *(undefined4 *)(unaff_x29 + -0x20) = uVar6;
      uVar14 = thunk_FUN_01de23e8(*(undefined8 *)puVar1,unaff_x29 + -0x20);
      lVar11 = *(long *)(*unaff_x26 + 8);
      if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_01dde7f8(lVar11);
      }
      __s_01 = (undefined1 *)FUN_01d7da60(uVar14,lVar11,*(undefined8 *)(unaff_x29 + -0x30));
    }
  }
  pvVar8 = *(void **)(unaff_x29 + -0x38);
LAB_01f1d13c:
  memcpy(pvVar8,__s_01,unaff_x21);
  thunk_FUN_03d223e4(*(undefined8 *)(unaff_x29 + -0x28),*(undefined8 *)(unaff_x29 + -0x40),
                     *(undefined8 *)(unaff_x29 + -0x48),0);
  pvVar8 = *(void **)(unaff_x29 + -0x30);
  memcpy(pvVar8,*(void **)(unaff_x29 + -0x38),unaff_x21);
  memcpy(*(void **)(unaff_x29 + -0x58),pvVar8,unaff_x21);
  if (*(long *)(*(long *)(unaff_x29 + -0x50) + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


