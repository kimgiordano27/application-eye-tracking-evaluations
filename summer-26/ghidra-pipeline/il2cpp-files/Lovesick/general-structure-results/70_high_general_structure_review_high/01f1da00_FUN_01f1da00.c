/*
FUNCTION_NAME: FUN_01f1da00
ENTRY_POINT: 01f1da00
PROGRAM: Lovesick-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ray_interaction;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;ray_or_cast_sink_hits_6;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_4;negative_generic_transform_raycast_without_eye_source_or_attempt
*/


/* WARNING: Removing unreachable block (ram,0x01f1e2cc) */
/* WARNING: Removing unreachable block (ram,0x01f1e320) */

void FUN_01f1da00(long param_1)

{
  int iVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 *puVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  int *piVar18;
  long *plVar19;
  uint uVar20;
  
  if ((DAT_037801fa & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_14245);
    thunk_FUN_00d48444(Method_UnityEngine_PhysicsSceneExtensions_GetPhysicsScene__);
    thunk_FUN_00d48444(StringLiteral_10310);
    thunk_FUN_00d48444(
                      Field_<PrivateImplementationDetails>_9D525C94DA0D9E0D4A9CE96909F6AE5E6C4DB27466EF98E0288AC9A99A07F07B
                      );
    thunk_FUN_00d48444(Method_UnityEngine_Events_UnityEvent_Invoke__);
    thunk_FUN_00d48444(
                      Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass7_0_<CreateHDR>b__1__
                      );
    thunk_FUN_00d48444(Meta_Voice_TelemetryUtilities_OperationID_TypeInfo);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary_Enumerator<KeyValuePair<Type,_XmlRootAttribute>,_XmlSerializer>_get_Current__
                      );
    thunk_FUN_00d48444(Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__);
    thunk_FUN_00d48444(Method_UnityEngine_Experimental_GlobalIllumination_LinearColor_set_green__);
    thunk_FUN_00d48444(
                      Field_<PrivateImplementationDetails>_7C8975E1E60A5C8337F28EDF8C33C3B180360B7279644A9BC1AF3C51E6220BF5
                      );
    thunk_FUN_00d48444(StringLiteral_3023);
    thunk_FUN_00d48444(DG_Tweening_Core_DOSetter<Vector4>_TypeInfo);
    DAT_037801fa = 1;
  }
  lVar16 = *(long *)(param_1 + 0xb8);
  if ((lVar16 == 0) || (plVar19 = *(long **)(param_1 + 0x170), plVar19 == (long *)0x0)) {
LAB_01f1e304:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  lVar14 = *plVar19;
  uVar12 = *(undefined8 *)(lVar16 + 0x18);
  uVar13 = *(undefined8 *)(lVar16 + 0x20);
  uVar17 = (ulong)*(ushort *)(lVar14 + 0x12a);
  if (uVar17 != 0) {
    piVar18 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
    do {
      if (*(long *)(piVar18 + -2) ==
          *(long *)
           Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass7_0_<CreateHDR>b__1__
         ) {
        puVar10 = (undefined8 *)(lVar14 + (long)(*piVar18 + 4) * 0x10 + 0x138);
        goto LAB_01f1db38;
      }
      uVar17 = uVar17 - 1;
      piVar18 = piVar18 + 4;
    } while (uVar17 != 0);
  }
  puVar10 = (undefined8 *)
            FUN_00d59724(plVar19,*(long *)
                                  Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass7_0_<CreateHDR>b__1__
                         ,4);
LAB_01f1db38:
  plVar19 = (long *)(*(code *)*puVar10)(plVar19,uVar12,uVar13,puVar10[1]);
  puVar6 = 
  Field_<PrivateImplementationDetails>_9D525C94DA0D9E0D4A9CE96909F6AE5E6C4DB27466EF98E0288AC9A99A07F07B
  ;
  puVar4 = Method_UnityEngine_Events_UnityEvent_Invoke__;
  if (plVar19 == (long *)0x0) {
    return;
  }
  if (*(char *)(param_1 + 0x100) != '\0') {
    lVar16 = *plVar19;
    uVar17 = (ulong)*(ushort *)(lVar16 + 0x12a);
    if (uVar17 != 0) {
      piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == *(long *)Method_UnityEngine_Events_UnityEvent_Invoke__) {
          puVar10 = (undefined8 *)(lVar16 + (long)*piVar18 * 0x10 + 0x138);
          goto LAB_01f1dbb8;
        }
        uVar17 = uVar17 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar17 != 0);
    }
    puVar10 = (undefined8 *)
              FUN_00d59724(plVar19,*(long *)Method_UnityEngine_Events_UnityEvent_Invoke__,0);
LAB_01f1dbb8:
    uVar17 = (*(code *)*puVar10)(plVar19,puVar10[1]);
    puVar3 = DG_Tweening_Core_DOSetter<Vector4>_TypeInfo;
    if (((uVar17 & 1) != 0) &&
       (uVar20 = *(int *)(param_1 + 0xc0) + 1, (int)uVar20 < (int)(uVar20 + *(int *)(param_1 + 200))
       )) {
      do {
        lVar16 = *(long *)(param_1 + 0xb0);
        if (lVar16 == 0) goto LAB_01f1e304;
        if (*(uint *)(lVar16 + 0x18) <= uVar20) {
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        lVar16 = *(long *)(lVar16 + (long)(int)uVar20 * 8 + 0x20);
        if (lVar16 == 0) goto LAB_01f1e304;
        lVar15 = *plVar19;
        uVar12 = *(undefined8 *)(lVar16 + 0x18);
        uVar13 = *(undefined8 *)(lVar16 + 0x20);
        lVar14 = *(long *)puVar4;
        uVar17 = (ulong)*(ushort *)(lVar15 + 0x12a);
        if (uVar17 != 0) {
          piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == lVar14) {
              puVar10 = (undefined8 *)(lVar15 + (long)(*piVar18 + 1) * 0x10 + 0x138);
              goto LAB_01f1dc5c;
            }
            uVar17 = uVar17 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar17 != 0);
        }
        puVar10 = (undefined8 *)FUN_00d59724(plVar19,lVar14,1);
LAB_01f1dc5c:
        plVar11 = (long *)(*(code *)*puVar10)(plVar19,uVar13,uVar12,puVar10[1]);
        if (plVar11 != (long *)0x0) {
          lVar14 = *plVar11;
          uVar17 = (ulong)*(ushort *)(lVar14 + 0x12a);
          if (uVar17 != 0) {
            piVar18 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) == *(long *)puVar6) {
                puVar10 = (undefined8 *)(lVar14 + (long)(*piVar18 + 4) * 0x10 + 0x138);
                goto LAB_01f1dcc8;
              }
              uVar17 = uVar17 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar17 != 0);
          }
          puVar10 = (undefined8 *)FUN_00d59724(plVar11,*(long *)puVar6,4);
LAB_01f1dcc8:
          uVar17 = (*(code *)*puVar10)(plVar11,puVar10[1]);
          if ((uVar17 & 1) != 0) {
            if ((*(long *)(param_1 + 0x1d0) != 0) && (*(char *)(param_1 + 0x1f1) != '\0')) {
              lVar14 = *plVar11;
              uVar17 = (ulong)*(ushort *)(lVar14 + 0x12a);
              if (uVar17 != 0) {
                piVar18 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar18 + -2) == *(long *)puVar6) {
                    puVar10 = (undefined8 *)(lVar14 + (long)(*piVar18 + 5) * 0x10 + 0x138);
                    goto System_Text_RegularExpressions_Match__MatchIndex;
                  }
                  uVar17 = uVar17 - 1;
                  piVar18 = piVar18 + 4;
                } while (uVar17 != 0);
              }
              puVar10 = (undefined8 *)FUN_00d59724(plVar11,*(long *)puVar6,5);
System_Text_RegularExpressions_Match__MatchIndex:
              uVar17 = (*(code *)*puVar10)(plVar11,puVar10[1]);
              if ((uVar17 & 1) != 0) {
                uVar12 = FUN_01f2a270(lVar16,0);
                FUN_01f2a29c(lVar16,0);
                uVar13 = FUN_01f2a270(lVar16,0);
                uVar17 = FUN_015fe7e8(uVar12,uVar13,0);
                if ((uVar17 & 1) != 0) {
                  uVar12 = FUN_01f2a73c(lVar16,*(undefined8 *)(param_1 + 0xe0),0);
                  uVar8 = FUN_01f2a1f0(lVar16,0);
                  uVar9 = FUN_01f2a1f8(lVar16,0);
                  FUN_01f18e9c(param_1,0,*(undefined8 *)puVar3,uVar12,uVar8,uVar9);
                }
                goto LAB_01f1dde0;
              }
            }
            FUN_01f2a29c(lVar16,0);
          }
        }
LAB_01f1dde0:
        uVar20 = uVar20 + 1;
      } while ((int)uVar20 < *(int *)(param_1 + 0xc0) + *(int *)(param_1 + 200) + 1);
    }
  }
  lVar14 = *plVar19;
  lVar16 = *(long *)puVar4;
  uVar17 = (ulong)*(ushort *)(lVar14 + 0x12a);
  if (uVar17 != 0) {
    piVar18 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
    do {
      if (*(long *)(piVar18 + -2) == lVar16) {
        puVar10 = (undefined8 *)(lVar14 + (long)(*piVar18 + 2) * 0x10 + 0x138);
        goto LAB_01f1de4c;
      }
      uVar17 = uVar17 - 1;
      piVar18 = piVar18 + 4;
    } while (uVar17 != 0);
  }
  puVar10 = (undefined8 *)FUN_00d59724(plVar19,lVar16,2);
LAB_01f1de4c:
  plVar19 = (long *)(*(code *)*puVar10)(plVar19,puVar10[1]);
  puVar3 = Method_UnityEngine_PhysicsSceneExtensions_GetPhysicsScene__;
  puVar4 = Meta_Voice_TelemetryUtilities_OperationID_TypeInfo;
  if (plVar19 == (long *)0x0) {
    return;
  }
  iVar1 = *(int *)(param_1 + 200);
  if (iVar1 < 0xfa) {
    uVar12 = 0;
  }
  else {
    uVar12 = FUN_00da4fb8(*(undefined8 *)
                           Method_UnityEngine_Experimental_GlobalIllumination_LinearColor_set_green__
                          ,iVar1);
    FUN_01795470(*(undefined8 *)(param_1 + 0xb0),*(int *)(param_1 + 0xc0) + 1,uVar12,0,
                 *(undefined4 *)(param_1 + 200),0);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    if (DAT_03780236 == '\0') {
      thunk_FUN_00d48444(Method_UnityEngine_PhysicsSceneExtensions_GetPhysicsScene__);
      DAT_03780236 = '\x01';
    }
    puVar5 = StringLiteral_14245;
    lVar16 = *(long *)puVar3;
    if (*(int *)(lVar16 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar16 = *(long *)puVar3;
    }
    FUN_010b0550(uVar12,**(undefined8 **)(lVar16 + 0xb8),*(undefined8 *)puVar5);
  }
  lVar16 = *plVar19;
  uVar17 = (ulong)*(ushort *)(lVar16 + 0x12a);
  if (uVar17 != 0) {
    piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
    do {
      if (*(long *)(piVar18 + -2) == *(long *)puVar4) {
        puVar10 = (undefined8 *)(lVar16 + (long)*piVar18 * 0x10 + 0x138);
        goto LAB_01f1df68;
      }
      uVar17 = uVar17 - 1;
      piVar18 = piVar18 + 4;
    } while (uVar17 != 0);
  }
  puVar10 = (undefined8 *)FUN_00d59724(plVar19,*(long *)puVar4,0);
LAB_01f1df68:
  plVar19 = (long *)(*(code *)*puVar10)(plVar19,puVar10[1]);
  puVar7 = StringLiteral_3023;
  puVar5 = 
  Field_<PrivateImplementationDetails>_7C8975E1E60A5C8337F28EDF8C33C3B180360B7279644A9BC1AF3C51E6220BF5
  ;
  puVar3 = Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__;
  puVar4 = 
  Method_System_Collections_Generic_Dictionary_Enumerator<KeyValuePair<Type,_XmlRootAttribute>,_XmlSerializer>_get_Current__
  ;
  if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  do {
    lVar16 = *plVar19;
    uVar17 = (ulong)*(ushort *)(lVar16 + 0x12a);
    if (uVar17 != 0) {
      piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == *(long *)puVar3) {
          puVar10 = (undefined8 *)(lVar16 + (long)*piVar18 * 0x10 + 0x138);
          goto LAB_01f1dfe8;
        }
        uVar17 = uVar17 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar17 != 0);
    }
    puVar10 = (undefined8 *)FUN_00d59724(plVar19,*(long *)puVar3,0);
LAB_01f1dfe8:
    uVar17 = (*(code *)*puVar10)(plVar19,puVar10[1]);
    if ((uVar17 & 1) == 0) {
      if (plVar19 == (long *)0x0) goto LAB_01f1e2c0;
      lVar16 = *plVar19;
      uVar17 = (ulong)*(ushort *)(lVar16 + 0x12a);
      if (uVar17 == 0) goto LAB_01f1e298;
      piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      break;
    }
    lVar16 = *plVar19;
    uVar17 = (ulong)*(ushort *)(lVar16 + 0x12a);
    if (uVar17 != 0) {
      piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == *(long *)puVar4) {
          puVar10 = (undefined8 *)(lVar16 + (long)*piVar18 * 0x10 + 0x138);
          goto LAB_01f1e044;
        }
        uVar17 = uVar17 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar17 != 0);
    }
    puVar10 = (undefined8 *)FUN_00d59724(plVar19,*(long *)puVar4,0);
LAB_01f1e044:
    plVar11 = (long *)(*(code *)*puVar10)(plVar19,puVar10[1]);
    uVar17 = FUN_01f1e45c(param_1,plVar11,0,uVar12);
    if ((((uVar17 & 1) != 0) && (*(long *)(param_1 + 0x1d0) != 0)) &&
       (*(char *)(param_1 + 0x1f1) != '\0')) {
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      lVar16 = *plVar11;
      uVar17 = (ulong)*(ushort *)(lVar16 + 0x12a);
      if (uVar17 != 0) {
        piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *(long *)puVar6) {
            puVar10 = (undefined8 *)(lVar16 + (long)(*piVar18 + 5) * 0x10 + 0x138);
            goto LAB_01f1e0d0;
          }
          uVar17 = uVar17 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar17 != 0);
      }
      puVar10 = (undefined8 *)FUN_00d59724(plVar11,*(long *)puVar6,5);
LAB_01f1e0d0:
      uVar17 = (*(code *)*puVar10)(plVar11,puVar10[1]);
      if ((uVar17 & 1) != 0) {
        lVar16 = *plVar11;
        uVar17 = (ulong)*(ushort *)(lVar16 + 0x12a);
        if (uVar17 != 0) {
          piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == *(long *)puVar6) {
              puVar10 = (undefined8 *)(lVar16 + (long)*piVar18 * 0x10 + 0x138);
              goto LAB_01f1e12c;
            }
            uVar17 = uVar17 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar17 != 0);
        }
        puVar10 = (undefined8 *)FUN_00d59724(plVar11,*(long *)puVar6,0);
LAB_01f1e12c:
        lVar16 = (*(code *)*puVar10)(plVar11,puVar10[1]);
        if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        lVar15 = *plVar11;
        lVar14 = *(long *)puVar6;
        uVar2 = *(ushort *)(lVar15 + 0x12a);
        uVar17 = (ulong)uVar2;
        if (*(int *)(lVar16 + 0x10) == 0) {
          if (uVar2 != 0) {
            piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) == lVar14) {
                puVar10 = (undefined8 *)(lVar15 + (long)(*piVar18 + 1) * 0x10 + 0x138);
                goto LAB_01f1e200;
              }
              uVar17 = uVar17 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar17 != 0);
          }
          puVar10 = (undefined8 *)FUN_00d59724(plVar11,lVar14,1);
LAB_01f1e200:
          uVar13 = (*(code *)*puVar10)(plVar11,puVar10[1]);
        }
        else {
          if (uVar2 != 0) {
            piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) == lVar14) {
                puVar10 = (undefined8 *)(lVar15 + (long)(*piVar18 + 1) * 0x10 + 0x138);
                goto LAB_01f1e1cc;
              }
              uVar17 = uVar17 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar17 != 0);
          }
          puVar10 = (undefined8 *)FUN_00d59724(plVar11,lVar14,1);
LAB_01f1e1cc:
          uVar13 = (*(code *)*puVar10)(plVar11,puVar10[1]);
          uVar13 = FUN_01600424(lVar16,*(undefined8 *)puVar5,uVar13,0);
        }
        if (*(long *)(param_1 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        uVar8 = FUN_01f2a1f0(*(long *)(param_1 + 0xb8),0);
        if (*(long *)(param_1 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        uVar9 = FUN_01f2a1f8(*(long *)(param_1 + 0xb8),0);
        FUN_01f18e9c(param_1,0,*(undefined8 *)puVar7,uVar13,uVar8,uVar9);
      }
    }
  } while( true );
  while( true ) {
    uVar17 = uVar17 - 1;
    piVar18 = piVar18 + 4;
    if (uVar17 == 0) break;
    if (*(long *)(piVar18 + -2) == *(long *)StringLiteral_10310) {
      puVar10 = (undefined8 *)(lVar16 + (long)*piVar18 * 0x10 + 0x138);
      goto LAB_01f1e2b4;
    }
  }
LAB_01f1e298:
  puVar10 = (undefined8 *)FUN_00d59724(plVar19,*(long *)StringLiteral_10310,0);
LAB_01f1e2b4:
  (*(code *)*puVar10)(plVar19,puVar10[1]);
LAB_01f1e2c0:
  if ((iVar1 == 0) && (*(char *)(param_1 + 0xd4) != '\0')) {
    FUN_01f1eac8(param_1);
    *(undefined1 *)(param_1 + 0xd4) = 0;
  }
  return;
}


