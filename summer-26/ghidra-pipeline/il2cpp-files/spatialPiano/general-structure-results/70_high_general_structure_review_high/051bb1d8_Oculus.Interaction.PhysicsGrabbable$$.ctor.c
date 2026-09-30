/*
FUNCTION_NAME: Oculus.Interaction.PhysicsGrabbable$$.ctor
ENTRY_POINT: 051bb1d8
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x051bbb98) */
/* WARNING: Removing unreachable block (ram,0x051bbbc4) */
/* WARNING: Removing unreachable block (ram,0x051bbd6c) */

long Oculus_Interaction_PhysicsGrabbable___ctor(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  char cVar2;
  byte bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  int iVar12;
  undefined8 uVar13;
  long *plVar14;
  long *plVar15;
  long lVar16;
  long lVar17;
  undefined8 *puVar18;
  uint uVar19;
  undefined8 *puVar20;
  ulong uVar21;
  long lVar22;
  long lVar23;
  int *piVar24;
  long lVar25;
  undefined8 uVar26;
  undefined8 local_70;
  long *local_68;
  
  if ((DAT_06bba4a4 & 1) == 0) {
    FUN_02f08768(PTR_DAT_067ccc28);
    FUN_02f08768(System_Func<JsonProperty,_string>_TypeInfo);
    FUN_02f08768(System_Func<JsonProperty,_JsonSerializerInternalReader_PropertyPresence>_TypeInfo);
    FUN_02f08768(System_Func<JsonSchema,_bool>_TypeInfo);
    FUN_02f08768(System_Func<JsonSchema,_string>_TypeInfo);
    FUN_02f08768(UnityEngine_VFX_VFXSpawnerState_var);
    FUN_02f08768(PTR_DAT_067cadf0);
    FUN_02f08768(PTR_DAT_067cdf20);
    FUN_02f08768(PTR_DAT_067c91b0);
    FUN_02f08768(PTR_DAT_067cae10);
    FUN_02f08768(PTR_DAT_067cae18);
    FUN_02f08768(PTR_DAT_067c91b8);
    FUN_02f08768(System_Func<JsonSchemaModel,_IEnumerable<string>>_TypeInfo);
    FUN_02f08768(System_Func<JsonSchemaModel,_bool>_TypeInfo);
    FUN_02f08768(System_Func<JsonSchemaType,_bool>_TypeInfo);
    FUN_02f08768(PTR_DAT_067ca198);
    FUN_02f08768(PTR_DAT_067d11f0);
    FUN_02f08768(PTR_DAT_067d11f8);
    FUN_02f08768(PTR_DAT_067d1200);
    FUN_02f08768(PTR_DAT_067d1208);
    FUN_02f08768(PTR_DAT_067ca168);
    FUN_02f08768(System_Func<KerningPair,_uint>_TypeInfo);
    FUN_02f08768(System_Func<LabelScopeInfo,_LabelScopeInfo>_TypeInfo);
    FUN_02f08768(System_Func<LightLambda,_Delegate>_TypeInfo);
    FUN_02f08768(System_Func<MRUKAnchor,_bool>_TypeInfo);
    DAT_06bba4a4 = 1;
  }
  puVar4 = PTR_DAT_067ca168;
  cVar2 = *(char *)(param_1 + 0x26);
  local_70 = 0;
  local_68 = (long *)0x0;
  if (*(int *)(*(long *)PTR_DAT_067ca198 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  puVar5 = System_Func<LightLambda,_Delegate>_TypeInfo;
  iVar12 = FUN_051dd6c4(param_2,cVar2 != '\0',0);
  lVar16 = *(long *)puVar4;
  if (*(int *)(lVar16 + 0xe4) == 0) {
    thunk_FUN_02f6670c(lVar16);
  }
  uVar13 = FUN_051b6bcc(param_2,0x3c,0);
  lVar16 = *(long *)puVar5;
  if (*(int *)(lVar16 + 0xe4) == 0) {
    thunk_FUN_02f6670c(lVar16);
    lVar16 = *(long *)puVar5;
  }
  puVar8 = System_Func<JsonSchema,_string>_TypeInfo;
  puVar7 = PTR_DAT_067d1208;
  puVar6 = PTR_DAT_067d1200;
  puVar20 = *(undefined8 **)(lVar16 + 0xb8);
  lVar25 = puVar20[1];
  if (lVar25 == 0) {
    if (*(int *)(lVar16 + 0xe4) == 0) {
      thunk_FUN_02f6670c(lVar16);
      puVar20 = *(undefined8 **)(*(long *)puVar5 + 0xb8);
    }
    uVar26 = *puVar20;
    lVar25 = thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067cdf20);
    FUN_04e0200c(lVar25,uVar26,*(undefined8 *)System_Func<KerningPair,_uint>_TypeInfo,0);
    *(long *)(*(long *)(*(long *)puVar5 + 0xb8) + 8) = lVar25;
  }
  plVar14 = (long *)FUN_033a774c(uVar13,lVar25,*(undefined8 *)puVar8);
  lVar16 = thunk_FUN_02f45270(*(undefined8 *)puVar7);
  FUN_03abf108(lVar16,*(undefined8 *)puVar6);
  if (iVar12 == 2) {
    if (plVar14 != (long *)0x0) {
      lVar25 = *plVar14;
      uVar21 = (ulong)*(ushort *)(lVar25 + 0x12e);
      if (uVar21 != 0) {
        piVar24 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
        do {
          if (*(long *)(piVar24 + -2) == *(long *)PTR_DAT_067cae10) {
            puVar20 = (undefined8 *)(lVar25 + (long)*piVar24 * 0x10 + 0x138);
            goto FUN_051bb5c0;
          }
          uVar21 = uVar21 - 1;
          piVar24 = piVar24 + 4;
        } while (uVar21 != 0);
      }
      puVar20 = (undefined8 *)FUN_02f421d0(plVar14,*(long *)PTR_DAT_067cae10,0);
FUN_051bb5c0:
      plVar14 = (long *)(*(code *)*puVar20)(plVar14,puVar20[1]);
      puVar7 = PTR_DAT_067d11f0;
      puVar6 = PTR_DAT_067cae18;
      puVar5 = PTR_DAT_067cadf0;
      puVar4 = PTR_DAT_067c91b8;
joined_r0x051bb5d8:
      do {
        do {
          local_68 = plVar14;
          if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          lVar25 = *plVar14;
          uVar21 = (ulong)*(ushort *)(lVar25 + 0x12e);
          if (uVar21 != 0) {
            piVar24 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
            do {
              if (*(long *)(piVar24 + -2) == *(long *)puVar4) {
                puVar20 = (undefined8 *)(lVar25 + (long)*piVar24 * 0x10 + 0x138);
                goto LAB_051bb64c;
              }
              uVar21 = uVar21 - 1;
              piVar24 = piVar24 + 4;
            } while (uVar21 != 0);
          }
          puVar20 = (undefined8 *)FUN_02f421d0(plVar14,*(long *)puVar4,0);
LAB_051bb64c:
          uVar21 = (*(code *)*puVar20)(plVar14,puVar20[1]);
          plVar14 = local_68;
          if ((uVar21 & 1) == 0) {
            if (local_68 == (long *)0x0) {
              return lVar16;
            }
            lVar25 = *local_68;
            uVar21 = (ulong)*(ushort *)(lVar25 + 0x12e);
            if (uVar21 == 0) goto LAB_051bb7ac;
            piVar24 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
            goto LAB_051bb794;
          }
          if (local_68 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          lVar25 = *local_68;
          uVar21 = (ulong)*(ushort *)(lVar25 + 0x12e);
          if (uVar21 != 0) {
            piVar24 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
            do {
              if (*(long *)(piVar24 + -2) == *(long *)puVar6) {
                puVar20 = (undefined8 *)(lVar25 + (long)*piVar24 * 0x10 + 0x138);
                goto LAB_051bb6b0;
              }
              uVar21 = uVar21 - 1;
              piVar24 = piVar24 + 4;
            } while (uVar21 != 0);
          }
          puVar20 = (undefined8 *)FUN_02f421d0(local_68,*(long *)puVar6,0);
LAB_051bb6b0:
          plVar15 = (long *)(*(code *)*puVar20)(plVar14,puVar20[1]);
          plVar14 = local_68;
        } while (plVar15 == (long *)0x0);
        bVar3 = *(byte *)(*(long *)puVar5 + 0x130);
      } while (((*(byte *)(*plVar15 + 0x130) < bVar3) ||
               (*(long *)(*(long *)(*plVar15 + 200) + (ulong)bVar3 * 8 + -8) != *(long *)puVar5)) ||
              (uVar21 = FUN_050150b8(plVar15,0), plVar14 = local_68, (uVar21 & 1) != 0));
      if (lVar16 != 0) {
        lVar25 = *(long *)(lVar16 + 0x10);
        lVar22 = *(long *)puVar7;
        *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
        if (lVar25 != 0) {
          uVar19 = *(uint *)(lVar16 + 0x18);
          if (uVar19 < *(uint *)(lVar25 + 0x18)) {
            *(uint *)(lVar16 + 0x18) = uVar19 + 1;
            *(long **)(lVar25 + (long)(int)uVar19 * 8 + 0x20) = plVar15;
          }
          else {
            FUN_03abf904(lVar16,plVar15,
                         *(undefined8 *)(*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0x70));
            plVar14 = local_68;
          }
          goto joined_r0x051bb5d8;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
  }
  else {
    if (*(int *)(*(long *)PTR_DAT_067ca198 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    lVar25 = FUN_051dd37c(param_2,0);
    lVar22 = *(long *)puVar4;
    uVar1 = *(undefined4 *)(param_1 + 0x20);
    if (*(int *)(lVar22 + 0xe4) == 0) {
      thunk_FUN_02f6670c(lVar22);
    }
    uVar13 = FUN_051b6bcc(param_2,uVar1,0);
    uVar26 = thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067cdf20);
    FUN_04e0200c(uVar26,0,*(undefined8 *)System_Func<JsonProperty,_string>_TypeInfo,0);
    uVar13 = FUN_033a774c(uVar13,uVar26,*(undefined8 *)puVar8);
    lVar22 = FUN_033a66d4(uVar13,*(undefined8 *)System_Func<JsonSchema,_bool>_TypeInfo);
    if (plVar14 != (long *)0x0) {
      lVar17 = *plVar14;
      uVar21 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar21 != 0) {
        piVar24 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar24 + -2) == *(long *)PTR_DAT_067cae10) {
            puVar20 = (undefined8 *)(lVar17 + (long)*piVar24 * 0x10 + 0x138);
            goto LAB_051bb7c8;
          }
          uVar21 = uVar21 - 1;
          piVar24 = piVar24 + 4;
        } while (uVar21 != 0);
      }
      puVar20 = (undefined8 *)FUN_02f421d0(plVar14,*(long *)PTR_DAT_067cae10,0);
LAB_051bb7c8:
      plVar14 = (long *)(*(code *)*puVar20)(plVar14,puVar20[1]);
      puVar10 = System_Func<JsonSchemaModel,_bool>_TypeInfo;
      puVar8 = PTR_DAT_067d11f8;
      puVar7 = PTR_DAT_067d11f0;
      puVar6 = PTR_DAT_067cae18;
      puVar5 = PTR_DAT_067c9338;
      puVar4 = PTR_DAT_067c91b8;
joined_r0x051bb7e0:
      local_68 = plVar14;
      if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      lVar17 = *plVar14;
      uVar21 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar21 != 0) {
        piVar24 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar24 + -2) == *(long *)puVar4) {
            puVar20 = (undefined8 *)(lVar17 + (long)*piVar24 * 0x10 + 0x138);
            goto LAB_051bb864;
          }
          uVar21 = uVar21 - 1;
          piVar24 = piVar24 + 4;
        } while (uVar21 != 0);
      }
      puVar20 = (undefined8 *)FUN_02f421d0(plVar14,*(long *)puVar4,0);
LAB_051bb864:
      uVar21 = (*(code *)*puVar20)(plVar14,puVar20[1]);
      plVar14 = local_68;
      puVar11 = System_Func<LightLambda,_Delegate>_TypeInfo;
      puVar9 = System_Func<JsonSchema,_string>_TypeInfo;
      if ((uVar21 & 1) != 0) {
        if (local_68 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        lVar17 = *local_68;
        uVar21 = (ulong)*(ushort *)(lVar17 + 0x12e);
        if (uVar21 != 0) {
          piVar24 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
          do {
            if (*(long *)(piVar24 + -2) == *(long *)puVar6) {
              puVar20 = (undefined8 *)(lVar17 + (long)*piVar24 * 0x10 + 0x138);
              goto LAB_051bb8c8;
            }
            uVar21 = uVar21 - 1;
            piVar24 = piVar24 + 4;
          } while (uVar21 != 0);
        }
        puVar20 = (undefined8 *)FUN_02f421d0(local_68,*(long *)puVar6,0);
LAB_051bb8c8:
        plVar15 = (long *)(*(code *)*puVar20)(plVar14,puVar20[1]);
        if (*(char *)(param_1 + 0x24) == '\0') goto code_r0x051bb8e0;
        goto LAB_051bb928;
      }
      if (local_68 == (long *)0x0) goto LAB_051bbbb8;
      lVar25 = *local_68;
      uVar21 = (ulong)*(ushort *)(lVar25 + 0x12e);
      if (uVar21 == 0) goto LAB_051bbb6c;
      piVar24 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
      goto LAB_051bbb54;
    }
  }
Oculus_Interaction_PointableCanvasModule__add_WhenPointerStarted:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
  while( true ) {
    uVar21 = uVar21 - 1;
    piVar24 = piVar24 + 4;
    if (uVar21 == 0) break;
LAB_051bbb54:
    if (*(long *)(piVar24 + -2) == *(long *)PTR_DAT_067c91b0) {
      puVar20 = (undefined8 *)(lVar25 + (long)*piVar24 * 0x10 + 0x138);
      goto LAB_051bbbac;
    }
  }
LAB_051bbb6c:
  puVar20 = (undefined8 *)FUN_02f421d0(local_68,*(long *)PTR_DAT_067c91b0,0);
LAB_051bbbac:
  (*(code *)*puVar20)(plVar14,puVar20[1]);
LAB_051bbbb8:
  uVar21 = FUN_051ba3a4(param_2,*(undefined8 *)System_Func<MRUKAnchor,_bool>_TypeInfo,0,&local_70);
  puVar20 = (undefined8 *)System_Func<JsonSchema,_bool>_TypeInfo;
  if ((uVar21 & 1) != 0) {
    uVar13 = thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067cdf20);
    FUN_04e0200c(uVar13,param_1,
                 *(undefined8 *)
                  System_Func<JsonProperty,_JsonSerializerInternalReader_PropertyPresence>_TypeInfo,
                 0);
    uVar13 = FUN_033a774c(lVar16,uVar13,*(undefined8 *)puVar9);
    puVar20 = (undefined8 *)System_Func<JsonSchema,_bool>_TypeInfo;
    lVar16 = FUN_033a66d4(uVar13,*(undefined8 *)System_Func<JsonSchema,_bool>_TypeInfo);
  }
  uVar13 = *(undefined8 *)UnityEngine_VFX_VFXSpawnerState_var;
  if (*(int *)(*(long *)(PTR_DAT_067c9338 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  plVar14 = (long *)FUN_050e4454(uVar13,0);
  if (plVar14 != (long *)0x0) {
    uVar21 = (**(code **)(*plVar14 + 0x298))(plVar14,param_2,*(undefined8 *)(*plVar14 + 0x2a0));
    if ((uVar21 & 1) == 0) {
      return lVar16;
    }
    lVar25 = *(long *)puVar11;
    if (*(int *)(lVar25 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
      lVar25 = *(long *)puVar11;
    }
    puVar18 = *(undefined8 **)(lVar25 + 0xb8);
    lVar22 = puVar18[2];
    if (lVar22 == 0) {
      if (*(int *)(lVar25 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
        puVar18 = *(undefined8 **)(*(long *)puVar11 + 0xb8);
      }
      uVar13 = *puVar18;
      lVar22 = thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067cdf20);
      FUN_04e0200c(lVar22,uVar13,*(undefined8 *)System_Func<LabelScopeInfo,_LabelScopeInfo>_TypeInfo
                   ,0);
      *(long *)(*(long *)(*(long *)puVar11 + 0xb8) + 0x10) = lVar22;
    }
    uVar13 = FUN_033a774c(lVar16,lVar22,*(undefined8 *)puVar9);
    lVar16 = FUN_033a66d4(uVar13,*puVar20);
    return lVar16;
  }
  goto Oculus_Interaction_PointableCanvasModule__add_WhenPointerStarted;
  while( true ) {
    uVar21 = uVar21 - 1;
    piVar24 = piVar24 + 4;
    if (uVar21 == 0) break;
LAB_051bb794:
    if (*(long *)(piVar24 + -2) == *(long *)PTR_DAT_067c91b0) {
      puVar20 = (undefined8 *)(lVar25 + (long)*piVar24 * 0x10 + 0x138);
      goto FUN_051bbb88;
    }
  }
LAB_051bb7ac:
  puVar20 = (undefined8 *)FUN_02f421d0(local_68,*(long *)PTR_DAT_067c91b0,0);
FUN_051bbb88:
  (*(code *)*puVar20)(plVar14,puVar20[1]);
  return lVar16;
code_r0x051bb8e0:
  uVar13 = *(undefined8 *)PTR_DAT_067ccc28;
  if (*(int *)(*(long *)(puVar5 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  uVar13 = FUN_050e4454(uVar13,0);
  if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8(uVar13,uVar13);
  }
  uVar21 = (**(code **)(*plVar15 + 0x1f8))(plVar15,uVar13,1,*(undefined8 *)(*plVar15 + 0x200));
  plVar14 = local_68;
  if ((uVar21 & 1) != 0) goto joined_r0x051bb7e0;
LAB_051bb928:
  if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  uVar21 = FUN_03abfc98(lVar22,plVar15,*(undefined8 *)puVar8);
  if ((uVar21 & 1) != 0) {
    if (lVar16 != 0) {
      lVar17 = *(long *)(lVar16 + 0x10);
      lVar23 = *(long *)puVar7;
      *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
      if (lVar17 != 0) {
        uVar19 = *(uint *)(lVar16 + 0x18);
        if (*(uint *)(lVar17 + 0x18) <= uVar19) {
          FUN_03abf904(lVar16,plVar15,
                       *(undefined8 *)(*(long *)(*(long *)(lVar23 + 0x20) + 0xc0) + 0x70));
          plVar14 = local_68;
          goto joined_r0x051bb7e0;
        }
        goto LAB_051bba54;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  if (*(int *)(*(long *)PTR_DAT_067ca198 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  lVar17 = FUN_0345748c(plVar15,*(undefined8 *)puVar10);
  if (lVar17 != 0) {
    if (lVar16 != 0) {
      lVar17 = *(long *)(lVar16 + 0x10);
      lVar23 = *(long *)puVar7;
      *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
      if (lVar17 != 0) {
        uVar19 = *(uint *)(lVar16 + 0x18);
        if (*(uint *)(lVar17 + 0x18) <= uVar19) {
          FUN_03abf904(lVar16,plVar15,
                       *(undefined8 *)(*(long *)(*(long *)(lVar23 + 0x20) + 0xc0) + 0x70));
          plVar14 = local_68;
          goto joined_r0x051bb7e0;
        }
        goto LAB_051bba54;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  if (*(int *)(*(long *)PTR_DAT_067ca198 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  lVar17 = FUN_0345748c(plVar15,*(undefined8 *)System_Func<JsonSchemaType,_bool>_TypeInfo);
  if (lVar17 == 0) {
    plVar14 = local_68;
    if (lVar25 == 0) goto joined_r0x051bb7e0;
    if (*(int *)(*(long *)PTR_DAT_067ca198 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    lVar17 = FUN_0345748c(plVar15,*(undefined8 *)
                                   System_Func<JsonSchemaModel,_IEnumerable<string>>_TypeInfo);
    plVar14 = local_68;
    if (lVar17 == 0) goto joined_r0x051bb7e0;
    if (lVar16 != 0) {
      lVar17 = *(long *)(lVar16 + 0x10);
      lVar23 = *(long *)puVar7;
      *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
      if (lVar17 != 0) {
        uVar19 = *(uint *)(lVar16 + 0x18);
        if (*(uint *)(lVar17 + 0x18) <= uVar19) {
          FUN_03abf904(lVar16,plVar15,
                       *(undefined8 *)(*(long *)(*(long *)(lVar23 + 0x20) + 0xc0) + 0x70));
          plVar14 = local_68;
          goto joined_r0x051bb7e0;
        }
LAB_051bba54:
        *(uint *)(lVar16 + 0x18) = uVar19 + 1;
        *(long **)(lVar17 + (long)(int)uVar19 * 8 + 0x20) = plVar15;
        plVar14 = local_68;
        goto joined_r0x051bb7e0;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  if (lVar16 != 0) {
    lVar17 = *(long *)(lVar16 + 0x10);
    lVar23 = *(long *)puVar7;
    *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
    if (lVar17 != 0) {
      uVar19 = *(uint *)(lVar16 + 0x18);
      if (*(uint *)(lVar17 + 0x18) <= uVar19) {
        FUN_03abf904(lVar16,plVar15,
                     *(undefined8 *)(*(long *)(*(long *)(lVar23 + 0x20) + 0xc0) + 0x70));
        plVar14 = local_68;
        goto joined_r0x051bb7e0;
      }
      goto LAB_051bba54;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


