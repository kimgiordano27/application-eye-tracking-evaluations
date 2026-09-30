/*
FUNCTION_NAME: FUN_05ee59c8
ENTRY_POINT: 05ee59c8
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_3;frame_or_lifecycle_behavior
*/


void FUN_05ee59c8(long param_1)

{
  void *pvVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  int *piVar13;
  int iVar14;
  undefined8 uVar15;
  undefined1 auVar16 [16];
  undefined1 auStack_640 [368];
  long local_4d0;
  undefined1 local_4c8 [16];
  long local_4b8;
  long *local_4b0;
  undefined1 auStack_4a8 [8];
  long local_4a0;
  undefined4 local_408;
  byte local_348;
  byte local_347;
  undefined1 auStack_340 [8];
  undefined1 auStack_338 [360];
  undefined1 auStack_1d0 [368];
  
  if ((DAT_06b83d69 & 1) == 0) {
    FUN_02d6084c(Method_System_Reflection_Emit_ConstructorBuilder_GetCustomAttributes__);
    FUN_02d6084c(Method_Unity_XR_CompositionLayers_CompositionSplash_OnCameraPostRender__);
    FUN_02d6084c(Method_System_Reflection_Emit_ConstructorBuilder_GetMethodImplementationFlags__);
    FUN_02d6084c(Method_System_Reflection_Emit_ConstructorBuilder_GetParameters__);
    FUN_02d6084c(Method_Unity_XR_CompositionLayers_CompositionLayer_ReportStateChange__);
    FUN_02d6084c(Method_Unity_XR_CompositionLayers_CompositionLayerExtension_UpdateValue<bool>__);
    FUN_02d6084c(
                Method_Unity_XR_CompositionLayers_CompositionLayerExtension_UpdateValue<ColorGamut>__
                );
    FUN_02d6084c(PTR_DAT_0675e1b8);
    FUN_02d6084c(Method_System_Reflection_Emit_ConstructorBuilder_Invoke__);
    FUN_02d6084c(
                Method_Unity_XR_CoreUtils_Datums_DatumProperty<FollowPreset,_FollowPresetDatum>_get_Value__
                );
    FUN_02d6084c(
                Method_System_Collections_Generic_CollectionExtensions_Remove<TrackableId,_MeshFilter>__
                );
    DAT_06b83d69 = 1;
  }
  memset(&local_4b0,0,0x170);
  puVar4 = Method_Unity_XR_CompositionLayers_CompositionLayerExtension_UpdateValue<bool>__;
  puVar3 = Method_System_Collections_Generic_CollectionExtensions_Remove<TrackableId,_MeshFilter>__;
  puVar2 = PTR_DAT_0675e1b8;
  local_4b8 = 0;
  local_4d0 = 0;
  local_4c8 = ZEXT816(0);
  auVar16 = ZEXT816(0);
  if (*(char *)(param_1 + 300) != '\0') {
    lVar12 = *(long *)(param_1 + 0x390);
    if (lVar12 != 0) {
      iVar14 = 0;
      do {
        auVar16 = local_4c8;
        if (*(int *)(lVar12 + 0x18) <= iVar14) goto LAB_05ee62ec;
        FUN_03c47104(auStack_340,lVar12,iVar14,*(undefined8 *)puVar4);
        memcpy(&local_4b0,auStack_340,0x170);
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        lVar12 = local_4a0;
        plVar9 = local_4b0;
        if (local_4b0 == (long *)0x0) {
LAB_05ee5bfc:
          plVar9 = local_4b0;
          if ((local_348 & 1) == 0) {
            if ((local_347 & 1) == 0) goto LAB_05ee61c4;
            auVar16 = local_4c8;
            if (local_4b0 == (long *)0x0) break;
            lVar6 = *local_4b0;
            uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
            if (uVar7 != 0) {
              piVar13 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) ==
                    *(long *)
                     Method_Unity_XR_CompositionLayers_CompositionSplash_OnCameraPostRender__) {
                  puVar8 = (undefined8 *)(lVar6 + (long)*piVar13 * 0x10 + 0x138);
                  goto LAB_05ee5cc4;
                }
                uVar7 = uVar7 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar7 != 0);
            }
            puVar8 = (undefined8 *)
                     FUN_02d9a5d4(local_4b0,
                                  *(long *)
                                   Method_Unity_XR_CompositionLayers_CompositionSplash_OnCameraPostRender__
                                  ,0);
LAB_05ee5cc4:
            (*(code *)*puVar8)(plVar9,auStack_4a8,puVar8[1]);
            FUN_05ee2d2c(param_1,auStack_4a8,0);
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
            }
            FUN_05edf4bc(auStack_4a8);
          }
          else {
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
            }
            FUN_05edf664(auStack_4a8,0);
            FUN_05ee2d2c(param_1,auStack_4a8,1);
            FUN_05ee38d0(param_1,local_408);
            local_348 = 0;
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
            }
            FUN_05edf664(auStack_4a8,1);
          }
          lVar6 = *(long *)(param_1 + 0x390);
          memcpy(auStack_640,&local_4b0,0x170);
          auVar16 = local_4c8;
          if (lVar6 == 0) break;
          uVar15 = *(undefined8 *)
                    Method_Unity_XR_CompositionLayers_CompositionLayerExtension_UpdateValue<ColorGamut>__
          ;
          memcpy(auStack_340,auStack_640,0x170);
          FUN_03c47168(lVar6,iVar14,auStack_340,uVar15);
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          lVar6 = local_4a0;
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          uVar7 = FUN_0606a004(lVar12,lVar6,0);
          if ((uVar7 & 1) != 0) {
            auVar16 = local_4c8;
            if (*(long *)(param_1 + 0x398) == 0) break;
            auVar16 = FUN_03955d38(*(long *)(param_1 + 0x398),&local_4b8,
                                   *(undefined8 *)
                                    Method_System_Reflection_Emit_ConstructorBuilder_GetMethodImplementationFlags__
                                  );
            local_4c8 = auVar16;
            if (local_4b8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d60ae8();
            }
            *(long **)(local_4b8 + 0x10) = local_4b0;
            thunk_FUN_02dd37b4();
            lVar5 = local_4b8;
            memcpy(auStack_340,&local_4b0,0x170);
            memcpy(auStack_640,auStack_338,0x160);
            if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d60ae8();
            }
            pvVar1 = (void *)(lVar5 + 0x18);
            memcpy(pvVar1,auStack_640,0x160);
            thunk_FUN_02dd37b4(pvVar1,0);
            if (local_4b8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d60ae8();
            }
            if (*(long *)(local_4b8 + 0x10) != 0) {
              plVar9 = (long *)thunk_FUN_02d9d438(*(long *)(local_4b8 + 0x10),
                                                  *(undefined8 *)
                                                                                                      
                                                  Method_System_Reflection_Emit_ConstructorBuilder_GetCustomAttributes__
                                                 );
              if (plVar9 != (long *)0x0) {
                if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                  thunk_FUN_02dbd7b4();
                }
                uVar7 = FUN_0606a004(lVar12,0,0);
                if ((uVar7 & 1) != 0) {
                  if (local_4b8 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02d60ae8();
                  }
                  *(long *)(local_4b8 + 0x178) = lVar12;
                  thunk_FUN_02dd37b4(local_4b8 + 0x178,lVar12);
                  lVar5 = local_4b8;
                  lVar11 = *plVar9;
                  uVar7 = (ulong)*(ushort *)(lVar11 + 0x12e);
                  if (uVar7 != 0) {
                    piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar13 + -2) ==
                          *(long *)
                           Method_System_Reflection_Emit_ConstructorBuilder_GetCustomAttributes__) {
                        puVar8 = (undefined8 *)(lVar11 + (long)(*piVar13 + 3) * 0x10 + 0x138);
                        goto LAB_05ee5ebc;
                      }
                      uVar7 = uVar7 - 1;
                      piVar13 = piVar13 + 4;
                    } while (uVar7 != 0);
                  }
                  puVar8 = (undefined8 *)
                           FUN_02d9a5d4(plVar9,*(long *)
                                                Method_System_Reflection_Emit_ConstructorBuilder_GetCustomAttributes__
                                        ,3);
LAB_05ee5ebc:
                  (*(code *)*puVar8)(plVar9,lVar5,puVar8[1]);
                }
                if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                  thunk_FUN_02dbd7b4();
                }
                uVar7 = FUN_0606a004(lVar6,0,0);
                if ((uVar7 & 1) != 0) {
                  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02d60ae8();
                  }
                  uVar7 = FUN_0606a648(lVar6,0);
                  if ((uVar7 & 1) != 0) {
                    if (local_4b8 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_02d60ae8();
                    }
                    *(long *)(local_4b8 + 0x178) = lVar6;
                    thunk_FUN_02dd37b4(local_4b8 + 0x178,lVar6);
                    lVar5 = local_4b8;
                    lVar11 = *plVar9;
                    uVar7 = (ulong)*(ushort *)(lVar11 + 0x12e);
                    if (uVar7 != 0) {
                      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar13 + -2) ==
                            *(long *)
                             Method_System_Reflection_Emit_ConstructorBuilder_GetCustomAttributes__)
                        {
                          puVar8 = (undefined8 *)(lVar11 + (long)(*piVar13 + 2) * 0x10 + 0x138);
                          goto LAB_05ee5f78;
                        }
                        uVar7 = uVar7 - 1;
                        piVar13 = piVar13 + 4;
                      } while (uVar7 != 0);
                    }
                    puVar8 = (undefined8 *)
                             FUN_02d9a5d4(plVar9,*(long *)
                                                  Method_System_Reflection_Emit_ConstructorBuilder_GetCustomAttributes__
                                          ,2);
LAB_05ee5f78:
                    (*(code *)*puVar8)(plVar9,lVar5,puVar8[1]);
                  }
                }
              }
            }
            FUN_03eeeba4(local_4c8,
                         *(undefined8 *)Method_System_Reflection_Emit_ConstructorBuilder_Invoke__);
          }
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          uVar7 = FUN_0606a004(lVar12,0,0);
          if ((uVar7 & 1) == 0) {
            if (lVar12 != 0) goto LAB_05ee5fdc;
          }
          else {
            auVar16 = local_4c8;
            if (lVar12 == 0) break;
            uVar7 = FUN_0606a648(lVar12,0);
            if ((uVar7 & 1) != 0) {
LAB_05ee5fdc:
              if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                thunk_FUN_02dbd7b4();
              }
              uVar7 = UnityEngine_Font__add_textureRebuilt(lVar12,0,0);
              if ((uVar7 & 1) == 0) goto LAB_05ee61c4;
            }
            auVar16 = local_4c8;
            if (*(long *)(param_1 + 0x398) == 0) break;
            auVar16 = FUN_03955d38(*(long *)(param_1 + 0x398),&local_4d0,
                                   *(undefined8 *)
                                    Method_System_Reflection_Emit_ConstructorBuilder_GetMethodImplementationFlags__
                                  );
            local_4c8 = auVar16;
            if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
            }
            uVar7 = UnityEngine_Font__add_textureRebuilt(lVar12,lVar6,0);
            if ((uVar7 & 1) != 0) {
              if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                thunk_FUN_02dbd7b4();
              }
              FUN_05edf664(auStack_4a8,1);
              lVar6 = *(long *)(param_1 + 0x390);
              memcpy(auStack_340,&local_4b0,0x170);
              if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d60ae8();
              }
              uVar15 = *(undefined8 *)
                        Method_Unity_XR_CompositionLayers_CompositionLayerExtension_UpdateValue<ColorGamut>__
              ;
              memcpy(auStack_1d0,auStack_340,0x170);
              FUN_03c47168(lVar6,iVar14,auStack_1d0,uVar15);
            }
            plVar9 = local_4b0;
            if (local_4b0 != (long *)0x0) {
              plVar10 = (long *)thunk_FUN_02d9d438(local_4b0,
                                                   *(undefined8 *)
                                                                                                        
                                                  Method_System_Reflection_Emit_ConstructorBuilder_GetCustomAttributes__
                                                  );
              if (plVar10 != (long *)0x0) {
                if (local_4d0 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d60ae8();
                }
                *(undefined8 *)(local_4d0 + 0x10) = plVar9;
                thunk_FUN_02dd37b4((undefined8 *)(local_4d0 + 0x10),plVar9);
                if (local_4d0 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d60ae8();
                }
                *(long *)(local_4d0 + 0x178) = lVar12;
                thunk_FUN_02dd37b4(local_4d0 + 0x178,lVar12);
                lVar12 = local_4d0;
                memcpy(auStack_340,&local_4b0,0x170);
                memcpy(auStack_640,auStack_338,0x160);
                if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d60ae8();
                }
                pvVar1 = (void *)(lVar12 + 0x18);
                memcpy(pvVar1,auStack_640,0x160);
                thunk_FUN_02dd37b4(pvVar1,0);
                lVar12 = local_4d0;
                lVar6 = *plVar10;
                uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
                if (uVar7 != 0) {
                  piVar13 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar13 + -2) ==
                        *(long *)
                         Method_System_Reflection_Emit_ConstructorBuilder_GetCustomAttributes__) {
                      puVar8 = (undefined8 *)(lVar6 + (long)(*piVar13 + 3) * 0x10 + 0x138);
                      goto LAB_05ee61a0;
                    }
                    uVar7 = uVar7 - 1;
                    piVar13 = piVar13 + 4;
                  } while (uVar7 != 0);
                }
                puVar8 = (undefined8 *)
                         FUN_02d9a5d4(plVar10,*(long *)
                                               Method_System_Reflection_Emit_ConstructorBuilder_GetCustomAttributes__
                                      ,3);
LAB_05ee61a0:
                (*(code *)*puVar8)(plVar10,lVar12,puVar8[1]);
              }
            }
            FUN_03eeeba4(local_4c8,
                         *(undefined8 *)Method_System_Reflection_Emit_ConstructorBuilder_Invoke__);
          }
        }
        else {
          lVar6 = *(long *)puVar2;
          if ((*(byte *)(*local_4b0 + 0x130) < *(byte *)(lVar6 + 0x130)) ||
             (*(long *)(*(long *)(*local_4b0 + 200) + (ulong)*(byte *)(lVar6 + 0x130) * 8 + -8) !=
              lVar6)) goto LAB_05ee5bfc;
          if (*(int *)(lVar6 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          uVar7 = UnityEngine_Font__add_textureRebuilt(plVar9,0,0);
          if ((uVar7 & 1) == 0) goto LAB_05ee5bfc;
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          FUN_05edf664(auStack_4a8,0);
          FUN_05ee2d2c(param_1,auStack_4a8,1);
          FUN_05ee38d0(param_1,local_408);
          lVar12 = *(long *)(param_1 + 0x1a0);
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          auVar16 = local_4c8;
          if (lVar12 == 0) break;
          FUN_0424b354(lVar12,local_408,
                       *(undefined8 *)
                        Method_Unity_XR_CoreUtils_Datums_DatumProperty<FollowPreset,_FollowPresetDatum>_get_Value__
                      );
          auVar16 = local_4c8;
          if (*(long *)(param_1 + 0x390) == 0) break;
          FUN_03c491d4(*(long *)(param_1 + 0x390),iVar14,
                       *(undefined8 *)
                        Method_System_Reflection_Emit_ConstructorBuilder_GetParameters__);
          iVar14 = iVar14 + -1;
        }
LAB_05ee61c4:
        lVar12 = *(long *)(param_1 + 0x390);
        iVar14 = iVar14 + 1;
        auVar16 = local_4c8;
      } while (lVar12 != 0);
    }
    local_4c8 = auVar16;
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
LAB_05ee62ec:
  if (*(char *)(param_1 + 0x12e) != '\0') {
    local_4c8 = auVar16;
    uVar7 = FUN_05ee63b4(param_1);
    auVar16 = local_4c8;
    if ((uVar7 & 1) != 0) goto LAB_05ee631c;
  }
  local_4c8 = auVar16;
  if (*(char *)(param_1 + 0x12d) != '\0') {
    FUN_05ee69e8(param_1);
  }
LAB_05ee631c:
  FUN_05ee718c(param_1);
  return;
}


