/*
FUNCTION_NAME: FUN_040a053c
ENTRY_POINT: 040a053c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_8;ui_or_gameplay_sink_hits_4;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


long FUN_040a053c(long param_1)

{
  undefined *puVar1;
  ushort uVar2;
  undefined2 uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  code *pcVar10;
  long *plVar11;
  undefined4 *puVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  int iVar15;
  
  puVar1 = PTR_DAT_0457aa28;
  if ((DAT_0483f38a & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_ObjectPool<VisualElementFocusChangeTarget>__ctor__
                      );
    thunk_FUN_01efb3a4(PTR_DAT_0457aa28);
    thunk_FUN_01efb3a4(PTR_DAT_04587d78);
    thunk_FUN_01efb3a4(PTR_DAT_04587d80);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    thunk_FUN_01efb3a4(PTR_DAT_04587d88);
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 040a050c with catch @ 040a05b8
                        */
    thunk_FUN_01efb3a4(PTR_DAT_04587d90);
    thunk_FUN_01efb3a4(StringLiteral_12625);
                    /* try { // try from 040a05d0 to 041a05e7 has its CatchHandler @ 040a0670 */
    thunk_FUN_01efb3a4(StringLiteral_12627);
    thunk_FUN_01efb3a4(StringLiteral_11540);
                    /* try { // try from 040a05e8 to 041a065b has its CatchHandler @ 040a042c */
    thunk_FUN_01efb3a4(PTR_DAT_04587d98);
    thunk_FUN_01efb3a4(PTR_DAT_04587da0);
    thunk_FUN_01efb3a4(StringLiteral_12087);
    thunk_FUN_01efb3a4(StringLiteral_12636);
    thunk_FUN_01efb3a4(Method_System_Reflection_SignatureType_GetCustomAttributesData__);
    thunk_FUN_01efb3a4(PTR_DAT_04587da8);
    thunk_FUN_01efb3a4(PTR_DAT_04587db0);
    thunk_FUN_01efb3a4(PTR_DAT_04587db8);
    thunk_FUN_01efb3a4(
                      Method_Unity_VisualScripting_StaticFunctionInvoker<Vector2,_float,_Vector2>__ctor__
                      );
    thunk_FUN_01efb3a4(PTR_DAT_04587dc0);
    thunk_FUN_01efb3a4(StringLiteral_12088);
    thunk_FUN_01efb3a4(StringLiteral_12649);
    thunk_FUN_01efb3a4(StringLiteral_12651);
    thunk_FUN_01efb3a4(PTR_DAT_04587dc8);
    thunk_FUN_01efb3a4(PTR_DAT_04587dd0);
    thunk_FUN_01efb3a4(PTR_DAT_04587dd8);
    thunk_FUN_01efb3a4(StringLiteral_12660);
    thunk_FUN_01efb3a4(PTR_DAT_04587de0);
    thunk_FUN_01efb3a4(Method_Gameplay_Creeps_CreepsSpawnerService_<>c_<Awake>b__7_3__);
    thunk_FUN_01efb3a4(StringLiteral_12667);
    thunk_FUN_01efb3a4(PTR_DAT_04587de8);
    thunk_FUN_01efb3a4(PTR_DAT_04587df0);
    thunk_FUN_01efb3a4(StringLiteral_12672);
    thunk_FUN_01efb3a4(StringLiteral_12673);
    thunk_FUN_01efb3a4(StringLiteral_12674);
    thunk_FUN_01efb3a4(StringLiteral_12676);
    thunk_FUN_01efb3a4(PTR_DAT_04587df8);
    thunk_FUN_01efb3a4(PTR_DAT_04587e00);
    thunk_FUN_01efb3a4(PTR_DAT_04587e08);
    thunk_FUN_01efb3a4(StringLiteral_1221);
    thunk_FUN_01efb3a4(StringLiteral_12684);
    thunk_FUN_01efb3a4(StringLiteral_12689);
    thunk_FUN_01efb3a4(PTR_DAT_04587e10);
    thunk_FUN_01efb3a4(PTR_DAT_04587e18);
    thunk_FUN_01efb3a4(StringLiteral_451);
    thunk_FUN_01efb3a4(PTR_DAT_04587e20);
    thunk_FUN_01efb3a4(PTR_DAT_04587e28);
    thunk_FUN_01efb3a4(PTR_DAT_04587e30);
    thunk_FUN_01efb3a4(StringLiteral_12696);
    thunk_FUN_01efb3a4(StringLiteral_12697);
    thunk_FUN_01efb3a4(PTR_DAT_04587e38);
    thunk_FUN_01efb3a4(StringLiteral_12698);
    thunk_FUN_01efb3a4(PTR_DAT_04587e40);
    thunk_FUN_01efb3a4(PTR_DAT_04587e48);
    DAT_0483f38a = 1;
  }
  lVar7 = thunk_FUN_01f117cc(*(undefined8 *)puVar1);
  FUN_040a0008(lVar7,0);
  if (lVar7 == 0) goto LAB_040a20e4;
  if (DAT_0483f330 == (code *)0x0) {
    DAT_0483f330 = (code *)FUN_01f087c4("UnityEngine.Event::set_type(UnityEngine.EventType)");
  }
  (*DAT_0483f330)(lVar7,4);
  uVar8 = FUN_0340eec4(param_1,0);
  if ((uVar8 & 1) != 0) {
    return lVar7;
  }
  if (param_1 == 0) goto LAB_040a20e4;
  iVar6 = *(int *)(param_1 + 0x10);
  if (iVar6 < 1) {
    iVar15 = 0;
  }
  else {
    iVar15 = 0;
    do {
      uVar2 = FUN_03409f80(param_1,iVar15,0);
      if (uVar2 < 0x26) {
        if (uVar2 == 0x23) {
          if (DAT_0483f2c8 == (code *)0x0) {
            DAT_0483f2c8 = (code *)FUN_01f087c4("UnityEngine.Event::get_modifiers()");
          }
          uVar4 = (*DAT_0483f2c8)(lVar7);
          if (DAT_0483f2d0 == (code *)0x0) {
            DAT_0483f2d0 = (code *)FUN_01f087c4(
                                               "UnityEngine.Event::set_modifiers(UnityEngine.EventModifiers)"
                                               );
          }
          uVar4 = uVar4 | 1;
        }
        else {
          if (uVar2 != 0x25) {
LAB_040a09e4:
            iVar6 = *(int *)(param_1 + 0x10);
            break;
          }
          if (DAT_0483f2c8 == (code *)0x0) {
            DAT_0483f2c8 = (code *)FUN_01f087c4("UnityEngine.Event::get_modifiers()");
          }
          uVar4 = (*DAT_0483f2c8)(lVar7);
          if (DAT_0483f2d0 == (code *)0x0) {
            DAT_0483f2d0 = (code *)FUN_01f087c4(
                                               "UnityEngine.Event::set_modifiers(UnityEngine.EventModifiers)"
                                               );
          }
          uVar4 = uVar4 | 8;
        }
      }
      else if (uVar2 == 0x26) {
        if (DAT_0483f2c8 == (code *)0x0) {
          DAT_0483f2c8 = (code *)FUN_01f087c4("UnityEngine.Event::get_modifiers()");
        }
        uVar4 = (*DAT_0483f2c8)(lVar7);
        if (DAT_0483f2d0 == (code *)0x0) {
          DAT_0483f2d0 = (code *)FUN_01f087c4(
                                             "UnityEngine.Event::set_modifiers(UnityEngine.EventModifiers)"
                                             );
        }
        uVar4 = uVar4 | 4;
      }
      else {
        if (uVar2 != 0x5e) goto LAB_040a09e4;
        if (DAT_0483f2c8 == (code *)0x0) {
          DAT_0483f2c8 = (code *)FUN_01f087c4("UnityEngine.Event::get_modifiers()");
        }
        uVar4 = (*DAT_0483f2c8)(lVar7);
        if (DAT_0483f2d0 == (code *)0x0) {
          DAT_0483f2d0 = (code *)FUN_01f087c4(
                                             "UnityEngine.Event::set_modifiers(UnityEngine.EventModifiers)"
                                             );
        }
        uVar4 = uVar4 | 2;
      }
      (*DAT_0483f2d0)(lVar7,uVar4);
      iVar6 = *(int *)(param_1 + 0x10);
      iVar15 = iVar15 + 1;
    } while (iVar15 < iVar6);
  }
  lVar9 = FUN_03410500(param_1,iVar15,iVar6 - iVar15,0);
  if (lVar9 == 0) goto LAB_040a20e4;
  lVar9 = FUN_034128bc(lVar9,0);
  uVar4 = FUN_040b6918(lVar9,0);
  if (uVar4 < 0x7a25d23b) {
    if (uVar4 < 0x3db9b916) {
      if (uVar4 < 0x17227232) {
        if (uVar4 < 0x124aec71) {
          if (uVar4 == 0xc2260e0) {
            uVar8 = thunk_FUN_0340e318(lVar9,*(undefined8 *)StringLiteral_12697,0);
            if ((uVar8 & 1) != 0) {
              if (DAT_0483f310 == (code *)0x0) {
                DAT_0483f310 = (code *)FUN_01f087c4(
                                                  "UnityEngine.Event::set_keyCode(UnityEngine.KeyCode)"
                                                  );
              }
              uVar13 = 0x122;
              goto FUN_040a1dcc;
            }
          }
          else if (uVar4 == 0xd226273) {
            uVar8 = thunk_FUN_0340e318(lVar9,*(undefined8 *)StringLiteral_12698,0);
            if ((uVar8 & 1) != 0) {
              if (DAT_0483f310 == (code *)0x0) {
                DAT_0483f310 = (code *)FUN_01f087c4(
                                                  "UnityEngine.Event::set_keyCode(UnityEngine.KeyCode)"
                                                  );
              }
              uVar13 = 0x121;
              goto FUN_040a1dcc;
            }
          }
          else if ((uVar4 == 0x124aec70) &&
                  (uVar8 = thunk_FUN_0340e318(lVar9,*(undefined8 *)
                                                                                                          
                                                  Method_Gameplay_Creeps_CreepsSpawnerService_<>c_<Awake>b__7_3__
                                              ,0), (uVar8 & 1) != 0)) {
            if (DAT_0483f310 == (code *)0x0) {
              DAT_0483f310 = (code *)FUN_01f087c4(
                                                 "UnityEngine.Event::set_keyCode(UnityEngine.KeyCode)"
                                                 );
            }
            uVar13 = 0x114;
            goto FUN_040a1dcc;
          }
        }
        else if (uVar4 == 0x14226d78) {
          uVar8 = thunk_FUN_0340e318(lVar9,*(undefined8 *)StringLiteral_12649,0);
          if ((uVar8 & 1) != 0) {
            if (DAT_0483f310 == (code *)0x0) {
              DAT_0483f310 = (code *)FUN_01f087c4(
                                                 "UnityEngine.Event::set_keyCode(UnityEngine.KeyCode)"
                                                 );
            }
            uVar13 = 0x11a;
            goto FUN_040a1dcc;
          }
        }
        else if (uVar4 == 0x1622709e) {
          uVar8 = thunk_FUN_0340e318(lVar9,*(undefined8 *)StringLiteral_12689,0);
          if ((uVar8 & 1) != 0) {
            if (DAT_0483f310 == (code *)0x0) {
              DAT_0483f310 = (code *)FUN_01f087c4(
                                                 "UnityEngine.Event::set_keyCode(UnityEngine.KeyCode)"
                                                 );
            }
            uVar13 = 0x11c;
            goto FUN_040a1dcc;
          }
        }
        else if ((uVar4 == 0x17227231) &&
                (uVar8 = thunk_FUN_0340e318(lVar9,*(undefined8 *)
                                                                                                      
                                                  Method_Unity_VisualScripting_StaticFunctionInvoker<Vector2,_float,_Vector2>__ctor__
                                            ,0), (uVar8 & 1) != 0)) {
          if (DAT_0483f310 == (code *)0x0) {
            DAT_0483f310 = (code *)FUN_01f087c4(
                                               "UnityEngine.Event::set_keyCode(UnityEngine.KeyCode)"
                                               );
          }
          uVar13 = 0x11b;
          goto FUN_040a1dcc;
        }
      }
      else if (uVar4 < 0x1a2276eb) {
        if (uVar4 == 0x182273c4) {
          uVar8 = thunk_FUN_0340e318(lVar9,*(undefined8 *)StringLiteral_12684,0);
          if ((uVar8 & 1) != 0) {
            if (DAT_0483f310 == (code *)0x0) {
              DAT_0483f310 = (code *)FUN_01f087c4(
                                                 "UnityEngine.Event::set_keyCode(UnityEngine.KeyCode)"
                                                 );
            }
            uVar13 = 0x11e;
            goto FUN_040a1dcc;
          }
        }
        else if (uVar4 == 0x19227557) {
          uVar8 = thunk_FUN_0340e318(lVar9,*(undefined8 *)StringLiteral_12696,0);
          if ((uVar8 & 1) != 0) {
            if (DAT_0483f310 == (code *)0x0) {
              DAT_0483f310 = (code *)FUN_01f087c4(
                                                 "UnityEngine.Event::set_keyCode(UnityEngine.KeyCode)"
                                                 );
            }
            uVar13 = 0x11d;
            goto FUN_040a1dcc;
          }
        }
        else if ((uVar4 == 0x1a2276ea) &&
                (uVar8 = thunk_FUN_0340e318(lVar9,*(undefined8 *)StringLiteral_12674,0),
                (uVar8 & 1) != 0)) {
          if (DAT_0483f310 == (code *)0x0) {
            DAT_0483f310 = (code *)FUN_01f087c4(
                                               "UnityEngine.Event::set_keyCode(UnityEngine.KeyCode)"
                                               );
          }
          uVar13 = 0x120;
FUN_040a1dcc:
          (*DAT_0483f310)(lVar7,uVar13);
          if (DAT_0483f2c8 == (code *)0x0) {
            DAT_0483f2c8 = (code *)FUN_01f087c4("UnityEngine.Event::get_modifiers()");
          }
          uVar4 = (*DAT_0483f2c8)(lVar7);
          uVar4 = uVar4 | 0x40;
          pcVar10 = DAT_0483f2d0;
          goto joined_r0x040a1bbc;
        }
      }
      else if (uVar4 == 0x1b22787d) {
        uVar8 = thunk_FUN_0340e318(lVar9,*(undefined8 *)StringLiteral_12651,0);
        if ((uVar8 & 1) != 0) {
          if (DAT_0483f310 == (code *)0x0) {
            DAT_0483f310 = (code *)FUN_01f087c4(
                                               "UnityEngine.Event::set_keyCode(UnityEngine.KeyCode)"
                                               );
          }
          uVar13 = 0x11f;
          goto FUN_040a1dcc;
        }
      }
      else if (uVar4 == 0x3553e285) {
        uVar8 = thunk_FUN_0340e318(lVar9,*(undefined8 *)StringLiteral_451,0);
        if ((uVar8 & 1) != 0) {
          if (DAT_0483f310 == (code *)0x0) {
            DAT_0483f310 = (code *)FUN_01f087c4(
                                               "UnityEngine.Event::set_keyCode(UnityEngine.KeyCode)"
                                               );
          }
          (*DAT_0483f310)(lVar7,0x20);
          if (DAT_0483f300 == (code *)0x0) {
            DAT_0483f300 = (code *)FUN_01f087c4("UnityEngine.Event::set_character(System.Char)");
          }
          uVar13 = 0x20;
          pcVar10 = DAT_0483f300;
          goto LAB_040a1b80;
        }
      }
      else if ((uVar4 == 0x3db9b915) &&
              (uVar8 = thunk_FUN_0340e318(lVar9,*(undefined8 *)StringLiteral_12088,0),
              (uVar8 & 1) != 0)) {
        if (DAT_0483f310 == (code *)0x0) {
          DAT_0483f310 = (code *)FUN_01f087c4("UnityEngine.Event::set_keyCode(UnityEngine.KeyCode)")
          ;
        }
        uVar13 = 0x112;
        goto FUN_040a1dcc;
      }
    }
    else if (uVar4 < 0x760dc709) {
      if (uVar4 < 0x471cb5a0) {
        puVar14 = (undefined8 *)PTR_DAT_04587e08;
        if (uVar4 == 0x4258d54e) {
LAB_040a1890:
          uVar8 = thunk_FUN_0340e318(lVar9,*puVar14,0);
          if ((uVar8 & 1) != 0) {
            if (DAT_0483f300 == (code *)0x0) {
              DAT_0483f300 = (code *)FUN_01f087c4("UnityEngine.Event::set_character(System.Char)");
            }
            (*DAT_0483f300)(lVar7,0x3d);
            if (DAT_0483f310 == (code *)0x0) {
              DAT_0483f310 = (code *)FUN_01f087c4(
                                                 "UnityEngine.Event::set_keyCode(UnityEngine.KeyCode)"
                                                 );
            }
            uVar4 = 0x110;
            pcVar10 = DAT_0483f310;
            goto LAB_040a1f30;
          }
        }
        else if (uVar4 == 0x43430b20) {
          uVar8 = thunk_FUN_0340e318(lVar9,*(undefined8 *)StringLiteral_12087,0);
          if ((uVar8 & 1) != 0) {
            if (DAT_0483f310 == (code *)0x0) {
              DAT_0483f310 = (code *)FUN_01f087c4(
                                                 "UnityEngine.Event::set_keyCode(UnityEngine.KeyCode)"
                                                 );
            }
            uVar13 = 0x111;
            goto FUN_040a1dcc;
          }
        }
        else {
          puVar14 = (undefined8 *)PTR_DAT_04587e18;
          if (uVar4 == 0x471cb59f) goto LAB_040a1a94;
        }
      }
      else if (uVar4 == 0x67c2444a) {
        uVar8 = thunk_FUN_0340e318(lVar9,*(undefined8 *)StringLiteral_12627,0);
        if ((uVar8 & 1) != 0) {
          if (DAT_0483f310 == (code *)0x0) {
            DAT_0483f310 = (code *)FUN_01f087c4(
                                               "UnityEngine.Event::set_keyCode(UnityEngine.KeyCode)"
                                               );
          }
          uVar13 = 0x7f;
          goto FUN_040a1dcc;
        }
      }
      else if (uVar4 == 0x6a8e75aa) {
        uVar8 = thunk_FUN_0340e318(lVar9,*(undefined8 *)StringLiteral_12676,0);
        if ((uVar8 & 1) != 0) {
          if (DAT_0483f310 == (code *)0x0) {
            DAT_0483f310 = (code *)FUN_01f087c4(
                                               "UnityEngine.Event::set_keyCode(UnityEngine.KeyCode)"
                                               );
          }
          uVar13 = 0x117;
          goto FUN_040a1dcc;
        }
      }
      else {
        puVar14 = (undefined8 *)PTR_DAT_04587dd0;
        if (uVar4 == 0x760dc708) goto LAB_040a1890;
      }
    }
    else if (uVar4 < 0x76214ec1) {
      if (uVar4 == 0x7610059f) {
        uVar8 = thunk_FUN_0340e318(lVar9,*(undefined8 *)PTR_DAT_04587e38,0);
        if ((uVar8 & 1) != 0) {
          if (DAT_0483f300 == (code *)0x0) {
            DAT_0483f300 = (code *)FUN_01f087c4("UnityEngine.Event::set_character(System.Char)");
          }
          (*DAT_0483f300)(lVar7,0x32);
          if (DAT_0483f310 == (code *)0x0) {
            DAT_0483f310 = (code *)FUN_01f087c4(
                                               "UnityEngine.Event::set_keyCode(UnityEngine.KeyCode)"
                                               );
          }
          uVar4 = 0x102;
          pcVar10 = DAT_0483f310;
          goto LAB_040a1f30;
        }
      }
      else if (uVar4 == 0x7616c164) {
        uVar8 = thunk_FUN_0340e318(lVar9,*(undefined8 *)PTR_DAT_04587dd8,0);
        if ((uVar8 & 1) != 0) {
          if (DAT_0483f300 == (code *)0x0) {
            DAT_0483f300 = (code *)FUN_01f087c4("UnityEngine.Event::set_character(System.Char)");
          }
          (*DAT_0483f300)(lVar7,0x31);
          if (DAT_0483f310 == (code *)0x0) {
            DAT_0483f310 = (code *)FUN_01f087c4(
                                               "UnityEngine.Event::set_keyCode(UnityEngine.KeyCode)"
                                               );
          }
          uVar4 = 0x101;
          pcVar10 = DAT_0483f310;
          goto LAB_040a1f30;
        }
      }
      else if ((uVar4 == 0x76214ec0) &&
              (uVar8 = thunk_FUN_0340e318(lVar9,*(undefined8 *)PTR_DAT_04587d88,0), (uVar8 & 1) != 0
              )) {
        if (DAT_0483f300 == (code *)0x0) {
          DAT_0483f300 = (code *)FUN_01f087c4("UnityEngine.Event::set_character(System.Char)");
        }
        (*DAT_0483f300)(lVar7,0x35);
        if (DAT_0483f310 == (code *)0x0) {
          DAT_0483f310 = (code *)FUN_01f087c4("UnityEngine.Event::set_keyCode(UnityEngine.KeyCode)")
          ;
        }
        uVar4 = 0x105;
        pcVar10 = DAT_0483f310;
        goto LAB_040a1f30;
      }
    }
    else if (uVar4 == 0x78e32de5) {
      uVar8 = thunk_FUN_0340e318(lVar9,*(undefined8 *)StringLiteral_1221,0);
      if ((uVar8 & 1) != 0) {
        if (DAT_0483f310 == (code *)0x0) {
          DAT_0483f310 = (code *)FUN_01f087c4("UnityEngine.Event::set_keyCode(UnityEngine.KeyCode)")
          ;
        }
        uVar13 = 0x113;
        goto FUN_040a1dcc;
      }
    }
    else if (uVar4 == 0x7a1f1675) {
      uVar8 = thunk_FUN_0340e318(lVar9,*(undefined8 *)PTR_DAT_04587de0,0);
      if ((uVar8 & 1) != 0) {
        if (DAT_0483f300 == (code *)0x0) {
          DAT_0483f300 = (code *)FUN_01f087c4("UnityEngine.Event::set_character(System.Char)");
        }
        (*DAT_0483f300)(lVar7,0x34);
        if (DAT_0483f310 == (code *)0x0) {
          DAT_0483f310 = (code *)FUN_01f087c4("UnityEngine.Event::set_keyCode(UnityEngine.KeyCode)")
          ;
        }
        uVar4 = 0x104;
        pcVar10 = DAT_0483f310;
        goto LAB_040a1f30;
      }
    }
    else if ((uVar4 == 0x7a25d23a) &&
            (uVar8 = thunk_FUN_0340e318(lVar9,*(undefined8 *)PTR_DAT_04587dc8,0), (uVar8 & 1) != 0))
    {
      if (DAT_0483f300 == (code *)0x0) {
        DAT_0483f300 = (code *)FUN_01f087c4("UnityEngine.Event::set_character(System.Char)");
      }
      (*DAT_0483f300)(lVar7,0x2b);
      if (DAT_0483f310 == (code *)0x0) {
        DAT_0483f310 = (code *)FUN_01f087c4("UnityEngine.Event::set_keyCode(UnityEngine.KeyCode)");
      }
      uVar4 = 0x10e;
      pcVar10 = DAT_0483f310;
      goto LAB_040a1f30;
    }
  }
  else if (uVar4 < 0xba14edda) {
    if (uVar4 < 0xb6039e6d) {
      if (uVar4 < 0x853c682d) {
        if (uVar4 == 0x853c682c) {
          uVar8 = thunk_FUN_0340e318(lVar9,*(undefined8 *)StringLiteral_12660,0);
          if ((uVar8 & 1) != 0) {
            if (DAT_0483f310 == (code *)0x0) {
              DAT_0483f310 = (code *)FUN_01f087c4(
                                                 "UnityEngine.Event::set_keyCode(UnityEngine.KeyCode)"
                                                 );
            }
            uVar13 = 8;
            goto FUN_040a1dcc;
          }
        }
        else if (uVar4 == 0x7a305f96) {
          uVar8 = thunk_FUN_0340e318(lVar9,*(undefined8 *)PTR_DAT_04587db8,0);
          if ((uVar8 & 1) != 0) {
            if (DAT_0483f300 == (code *)0x0) {
              DAT_0483f300 = (code *)FUN_01f087c4("UnityEngine.Event::set_character(System.Char)");
            }
            (*DAT_0483f300)(lVar7,0x2f);
            if (DAT_0483f310 == (code *)0x0) {
              DAT_0483f310 = (code *)FUN_01f087c4(
                                                 "UnityEngine.Event::set_keyCode(UnityEngine.KeyCode)"
                                                 );
            }
            uVar4 = 0x10b;
            pcVar10 = DAT_0483f310;
            goto LAB_040a1f30;
          }
        }
        else {
          puVar14 = (undefined8 *)PTR_DAT_04587de8;
          if (uVar4 == 0x7f02713a) goto LAB_040a1c10;
        }
      }
      else if (uVar4 == 0x85ee37bf) {
        uVar8 = thunk_FUN_0340e318(lVar9,*(undefined8 *)
                                          Method_System_Reflection_SignatureType_GetCustomAttributesData__
                                   ,0);
        if ((uVar8 & 1) != 0) {
          if (DAT_0483f300 == (code *)0x0) {
            DAT_0483f300 = (code *)FUN_01f087c4("UnityEngine.Event::set_character(System.Char)");
          }
          (*DAT_0483f300)(lVar7,10);
          if (DAT_0483f310 == (code *)0x0) {
            DAT_0483f310 = (code *)FUN_01f087c4(
                                               "UnityEngine.Event::set_keyCode(UnityEngine.KeyCode)"
                                               );
          }
          uVar13 = 0xd;
          pcVar10 = DAT_0483f310;
LAB_040a1b80:
          (*pcVar10)(lVar7,uVar13);
          if (DAT_0483f2c8 == (code *)0x0) {
            DAT_0483f2c8 = (code *)FUN_01f087c4("UnityEngine.Event::get_modifiers()");
          }
          uVar4 = (*DAT_0483f2c8)(lVar7);
          uVar4 = uVar4 & 0xffffffbf;
          pcVar10 = DAT_0483f2d0;
joined_r0x040a1bbc:
          DAT_0483f2d0 = pcVar10;
          if (pcVar10 == (code *)0x0) {
            pcVar10 = (code *)FUN_01f087c4(
                                          "UnityEngine.Event::set_modifiers(UnityEngine.EventModifiers)"
                                          );
            DAT_0483f2d0 = pcVar10;
          }
          goto LAB_040a1f30;
        }
      }
      else if (uVar4 == 0x98f72e4c) {
        uVar8 = thunk_FUN_0340e318(lVar9,*(undefined8 *)StringLiteral_12667,0);
        if ((uVar8 & 1) != 0) {
          if (DAT_0483f310 == (code *)0x0) {
            DAT_0483f310 = (code *)FUN_01f087c4(
                                               "UnityEngine.Event::set_keyCode(UnityEngine.KeyCode)"
                                               );
          }
          uVar4 = 9;
          pcVar10 = DAT_0483f310;
          goto LAB_040a1f30;
        }
      }
      else if ((uVar4 == 0xb6039e6c) &&
              (uVar8 = thunk_FUN_0340e318(lVar9,*(undefined8 *)PTR_DAT_04587df8,0), (uVar8 & 1) != 0
              )) {
        if (DAT_0483f300 == (code *)0x0) {
          DAT_0483f300 = (code *)FUN_01f087c4("UnityEngine.Event::set_character(System.Char)");
        }
        (*DAT_0483f300)(lVar7,0x39);
        if (DAT_0483f310 == (code *)0x0) {
          DAT_0483f310 = (code *)FUN_01f087c4("UnityEngine.Event::set_keyCode(UnityEngine.KeyCode)")
          ;
        }
        uVar4 = 0x109;
        pcVar10 = DAT_0483f310;
        goto LAB_040a1f30;
      }
    }
    else if (uVar4 < 0xb6353b39) {
      if (uVar4 == 0xb61964bb) {
        uVar8 = thunk_FUN_0340e318(lVar9,*(undefined8 *)PTR_DAT_04587e20,0);
        if ((uVar8 & 1) != 0) {
          if (DAT_0483f300 == (code *)0x0) {
            DAT_0483f300 = (code *)FUN_01f087c4("UnityEngine.Event::set_character(System.Char)");
          }
          (*DAT_0483f300)(lVar7,0x36);
          if (DAT_0483f310 == (code *)0x0) {
            DAT_0483f310 = (code *)FUN_01f087c4(
                                               "UnityEngine.Event::set_keyCode(UnityEngine.KeyCode)"
                                               );
          }
          uVar4 = 0x106;
          pcVar10 = DAT_0483f310;
          goto LAB_040a1f30;
        }
      }
      else if (uVar4 == 0xb62cec73) {
        uVar8 = thunk_FUN_0340e318(lVar9,*(undefined8 *)PTR_DAT_04587d90,0);
        if ((uVar8 & 1) != 0) {
          if (DAT_0483f300 == (code *)0x0) {
            DAT_0483f300 = (code *)FUN_01f087c4("UnityEngine.Event::set_character(System.Char)");
          }
          (*DAT_0483f300)(lVar7,0x2e);
          if (DAT_0483f310 == (code *)0x0) {
            DAT_0483f310 = (code *)FUN_01f087c4(
                                               "UnityEngine.Event::set_keyCode(UnityEngine.KeyCode)"
                                               );
          }
          uVar4 = 0x10a;
          pcVar10 = DAT_0483f310;
          goto LAB_040a1f30;
        }
      }
      else if ((uVar4 == 0xb6353b38) &&
              (uVar8 = thunk_FUN_0340e318(lVar9,*(undefined8 *)PTR_DAT_04587da0,0), (uVar8 & 1) != 0
              )) {
        if (DAT_0483f300 == (code *)0x0) {
          DAT_0483f300 = (code *)FUN_01f087c4("UnityEngine.Event::set_character(System.Char)");
        }
        (*DAT_0483f300)(lVar7,0x2d);
        if (DAT_0483f310 == (code *)0x0) {
          DAT_0483f310 = (code *)FUN_01f087c4("UnityEngine.Event::set_keyCode(UnityEngine.KeyCode)")
          ;
        }
        uVar4 = 0x10d;
        pcVar10 = DAT_0483f310;
        goto LAB_040a1f30;
      }
    }
    else if (uVar4 == 0xba016621) {
      uVar8 = thunk_FUN_0340e318(lVar9,*(undefined8 *)PTR_DAT_04587da8,0);
      if ((uVar8 & 1) != 0) {
        if (DAT_0483f300 == (code *)0x0) {
          DAT_0483f300 = (code *)FUN_01f087c4("UnityEngine.Event::set_character(System.Char)");
        }
        (*DAT_0483f300)(lVar7,0x38);
        if (DAT_0483f310 == (code *)0x0) {
          DAT_0483f310 = (code *)FUN_01f087c4("UnityEngine.Event::set_keyCode(UnityEngine.KeyCode)")
          ;
        }
        uVar4 = 0x108;
        pcVar10 = DAT_0483f310;
        goto LAB_040a1f30;
      }
    }
    else if (uVar4 == 0xba12af42) {
      uVar8 = thunk_FUN_0340e318(lVar9,*(undefined8 *)PTR_DAT_04587d98,0);
      if ((uVar8 & 1) != 0) {
        if (DAT_0483f300 == (code *)0x0) {
          DAT_0483f300 = (code *)FUN_01f087c4("UnityEngine.Event::set_character(System.Char)");
        }
        (*DAT_0483f300)(lVar7,0x33);
        if (DAT_0483f310 == (code *)0x0) {
          DAT_0483f310 = (code *)FUN_01f087c4("UnityEngine.Event::set_keyCode(UnityEngine.KeyCode)")
          ;
        }
        uVar4 = 0x103;
        pcVar10 = DAT_0483f310;
        goto LAB_040a1f30;
      }
    }
    else if ((uVar4 == 0xba14edd9) &&
            (uVar8 = thunk_FUN_0340e318(lVar9,*(undefined8 *)PTR_DAT_04587e40,0), (uVar8 & 1) != 0))
    {
      if (DAT_0483f300 == (code *)0x0) {
        DAT_0483f300 = (code *)FUN_01f087c4("UnityEngine.Event::set_character(System.Char)");
      }
      (*DAT_0483f300)(lVar7,0x30);
      if (DAT_0483f310 == (code *)0x0) {
        DAT_0483f310 = (code *)FUN_01f087c4("UnityEngine.Event::set_keyCode(UnityEngine.KeyCode)");
      }
      uVar4 = 0x100;
      pcVar10 = DAT_0483f310;
      goto LAB_040a1f30;
    }
  }
  else if (uVar4 < 0xfa320859) {
    if (uVar4 < 0xd2c8c28f) {
      if (uVar4 == 0xba1ba99e) {
        uVar8 = thunk_FUN_0340e318(lVar9,*(undefined8 *)PTR_DAT_04587e10,0);
        if ((uVar8 & 1) != 0) {
          if (DAT_0483f300 == (code *)0x0) {
            DAT_0483f300 = (code *)FUN_01f087c4("UnityEngine.Event::set_character(System.Char)");
          }
          (*DAT_0483f300)(lVar7,0x37);
          if (DAT_0483f310 == (code *)0x0) {
            DAT_0483f310 = (code *)FUN_01f087c4(
                                               "UnityEngine.Event::set_keyCode(UnityEngine.KeyCode)"
                                               );
          }
          uVar4 = 0x107;
          pcVar10 = DAT_0483f310;
          goto LAB_040a1f30;
        }
      }
      else if (uVar4 == 0xc6a39628) {
        uVar8 = thunk_FUN_0340e318(lVar9,*(undefined8 *)StringLiteral_12673,0);
        if ((uVar8 & 1) != 0) {
          if (DAT_0483f310 == (code *)0x0) {
            DAT_0483f310 = (code *)FUN_01f087c4(
                                               "UnityEngine.Event::set_keyCode(UnityEngine.KeyCode)"
                                               );
          }
          uVar13 = 0x115;
          goto FUN_040a1dcc;
        }
      }
      else if ((uVar4 == 0xd2c8c28e) &&
              (uVar8 = thunk_FUN_0340e318(lVar9,*(undefined8 *)StringLiteral_11540,0),
              (uVar8 & 1) != 0)) {
        if (DAT_0483f310 == (code *)0x0) {
          DAT_0483f310 = (code *)FUN_01f087c4("UnityEngine.Event::set_keyCode(UnityEngine.KeyCode)")
          ;
        }
        uVar13 = 0x116;
        goto FUN_040a1dcc;
      }
    }
    else {
      puVar14 = (undefined8 *)PTR_DAT_04587e28;
      if (uVar4 == 0xe8d303a5) {
LAB_040a1c10:
        uVar8 = thunk_FUN_0340e318(lVar9,*puVar14,0);
        if ((uVar8 & 1) != 0) {
          if (DAT_0483f310 == (code *)0x0) {
            DAT_0483f310 = (code *)FUN_01f087c4(
                                               "UnityEngine.Event::set_keyCode(UnityEngine.KeyCode)"
                                               );
          }
          uVar13 = 0x119;
          goto FUN_040a1dcc;
        }
      }
      else if (uVar4 == 0xed7d9f12) {
        uVar8 = thunk_FUN_0340e318(lVar9,*(undefined8 *)PTR_DAT_04587e30,0);
        if ((uVar8 & 1) != 0) {
          if (DAT_0483f310 == (code *)0x0) {
            DAT_0483f310 = (code *)FUN_01f087c4(
                                               "UnityEngine.Event::set_keyCode(UnityEngine.KeyCode)"
                                               );
          }
          uVar4 = 0x1b;
          pcVar10 = DAT_0483f310;
          goto LAB_040a1f30;
        }
      }
      else if ((uVar4 == 0xfa320858) &&
              (uVar8 = thunk_FUN_0340e318(lVar9,*(undefined8 *)StringLiteral_12672,0),
              (uVar8 & 1) != 0)) {
        if (DAT_0483f310 == (code *)0x0) {
          DAT_0483f310 = (code *)FUN_01f087c4("UnityEngine.Event::set_keyCode(UnityEngine.KeyCode)")
          ;
        }
        uVar13 = 0x123;
        goto FUN_040a1dcc;
      }
    }
  }
  else if (uVar4 < 0xfbf8a204) {
    puVar14 = (undefined8 *)PTR_DAT_04587e00;
    if (uVar4 == 0xfb1d8004) {
LAB_040a1a94:
      uVar8 = thunk_FUN_0340e318(lVar9,*puVar14,0);
      if ((uVar8 & 1) != 0) {
        if (DAT_0483f310 == (code *)0x0) {
          DAT_0483f310 = (code *)FUN_01f087c4("UnityEngine.Event::set_keyCode(UnityEngine.KeyCode)")
          ;
        }
        uVar13 = 0x118;
        goto FUN_040a1dcc;
      }
    }
    else if (uVar4 == 0xfb3209eb) {
      uVar8 = thunk_FUN_0340e318(lVar9,*(undefined8 *)StringLiteral_12625,0);
      if ((uVar8 & 1) != 0) {
        if (DAT_0483f310 == (code *)0x0) {
          DAT_0483f310 = (code *)FUN_01f087c4("UnityEngine.Event::set_keyCode(UnityEngine.KeyCode)")
          ;
        }
        uVar13 = 0x124;
        goto FUN_040a1dcc;
      }
    }
    else if ((uVar4 == 0xfbf8a203) &&
            (uVar8 = thunk_FUN_0340e318(lVar9,*(undefined8 *)PTR_DAT_04587db0,0), (uVar8 & 1) != 0))
    {
      if (DAT_0483f300 == (code *)0x0) {
        DAT_0483f300 = (code *)FUN_01f087c4("UnityEngine.Event::set_character(System.Char)");
      }
      (*DAT_0483f300)(lVar7,10);
      if (DAT_0483f310 == (code *)0x0) {
        DAT_0483f310 = (code *)FUN_01f087c4("UnityEngine.Event::set_keyCode(UnityEngine.KeyCode)");
      }
      uVar4 = 0x10f;
      pcVar10 = DAT_0483f310;
      goto LAB_040a1f30;
    }
  }
  else if (uVar4 < 0xfd320d12) {
    if (uVar4 == 0xfc320b7e) {
      uVar8 = thunk_FUN_0340e318(lVar9,*(undefined8 *)StringLiteral_12636,0);
      if ((uVar8 & 1) != 0) {
        if (DAT_0483f310 == (code *)0x0) {
          DAT_0483f310 = (code *)FUN_01f087c4("UnityEngine.Event::set_keyCode(UnityEngine.KeyCode)")
          ;
        }
        uVar13 = 0x125;
        goto FUN_040a1dcc;
      }
    }
    else if ((uVar4 == 0xfd320d11) &&
            (uVar8 = thunk_FUN_0340e318(lVar9,*(undefined8 *)PTR_DAT_04587df0,0), (uVar8 & 1) != 0))
    {
      if (DAT_0483f310 == (code *)0x0) {
        DAT_0483f310 = (code *)FUN_01f087c4("UnityEngine.Event::set_keyCode(UnityEngine.KeyCode)");
      }
      uVar13 = 0x126;
      goto FUN_040a1dcc;
    }
  }
  else if (uVar4 == 0xfe320ea4) {
    uVar8 = thunk_FUN_0340e318(lVar9,*(undefined8 *)PTR_DAT_04587e48,0);
    if ((uVar8 & 1) != 0) {
      if (DAT_0483f310 == (code *)0x0) {
        DAT_0483f310 = (code *)FUN_01f087c4("UnityEngine.Event::set_keyCode(UnityEngine.KeyCode)");
      }
      uVar13 = 0x127;
      goto FUN_040a1dcc;
    }
  }
  else if ((uVar4 == 0xff321037) &&
          (uVar8 = thunk_FUN_0340e318(lVar9,*(undefined8 *)PTR_DAT_04587dc0,0), (uVar8 & 1) != 0)) {
    if (DAT_0483f310 == (code *)0x0) {
      DAT_0483f310 = (code *)FUN_01f087c4("UnityEngine.Event::set_keyCode(UnityEngine.KeyCode)");
    }
    uVar13 = 0x128;
    goto FUN_040a1dcc;
  }
  if (lVar9 != 0) {
    if (*(int *)(lVar9 + 0x10) != 1) {
      uVar13 = *(undefined8 *)PTR_DAT_04587d78;
      if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0)
      {
        thunk_FUN_01ee6d7c();
      }
      uVar13 = FUN_03579868(uVar13,0);
      if (*(int *)(*(long *)
                    Method_UnityEngine_UIElements_ObjectPool<VisualElementFocusChangeTarget>__ctor__
                  + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      plVar11 = (long *)FUN_0359d4c0(uVar13,lVar9,1,0);
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      if (*(long *)(*plVar11 + 0x40) != *(long *)(*(long *)PTR_DAT_04587d80 + 0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08cfc();
      }
      puVar12 = (undefined4 *)thunk_FUN_01f11920();
      uVar5 = *puVar12;
      if (DAT_0483f310 == (code *)0x0) {
        DAT_0483f310 = (code *)FUN_01f087c4("UnityEngine.Event::set_keyCode(UnityEngine.KeyCode)");
      }
      (*DAT_0483f310)(lVar7,uVar5);
      return lVar7;
    }
    lVar9 = FUN_034127bc(lVar9,0);
    if (lVar9 != 0) {
      uVar5 = FUN_03409f80(lVar9,0,0);
      if (DAT_0483f300 == (code *)0x0) {
        DAT_0483f300 = (code *)FUN_01f087c4("UnityEngine.Event::set_character(System.Char)");
      }
      (*DAT_0483f300)(lVar7,uVar5);
      if (DAT_0483f2f8 == (code *)0x0) {
        DAT_0483f2f8 = (code *)FUN_01f087c4("UnityEngine.Event::get_character()");
      }
      uVar3 = (*DAT_0483f2f8)(lVar7);
      if (DAT_0483f310 == (code *)0x0) {
        DAT_0483f310 = (code *)FUN_01f087c4("UnityEngine.Event::set_keyCode(UnityEngine.KeyCode)");
      }
      (*DAT_0483f310)(lVar7,uVar3);
      if (DAT_0483f2c8 == (code *)0x0) {
        DAT_0483f2c8 = (code *)FUN_01f087c4("UnityEngine.Event::get_modifiers()");
      }
      iVar6 = (*DAT_0483f2c8)(lVar7);
      if (iVar6 == 0) {
        return lVar7;
      }
      if (DAT_0483f300 == (code *)0x0) {
        DAT_0483f300 = (code *)FUN_01f087c4("UnityEngine.Event::set_character(System.Char)");
      }
      uVar4 = 0;
      pcVar10 = DAT_0483f300;
LAB_040a1f30:
      (*pcVar10)(lVar7,uVar4);
      return lVar7;
    }
  }
LAB_040a20e4:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


