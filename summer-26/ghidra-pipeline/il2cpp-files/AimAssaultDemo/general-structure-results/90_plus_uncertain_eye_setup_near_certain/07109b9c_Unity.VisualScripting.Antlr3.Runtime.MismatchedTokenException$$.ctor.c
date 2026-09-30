/*
FUNCTION_NAME: Unity.VisualScripting.Antlr3.Runtime.MismatchedTokenException$$.ctor
ENTRY_POINT: 07109b9c
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 93
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_12;ray_or_cast_sink_hits_1;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_VisualScripting_Antlr3_Runtime_MismatchedTokenException___ctor(void)

{
  undefined8 uVar1;
  char cVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  bool bVar10;
  byte bVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  int iVar14;
  undefined8 uVar15;
  long lVar16;
  long *plVar17;
  undefined8 *puVar18;
  ulong uVar19;
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  long lVar20;
  long *plVar21;
  long unaff_x22;
  long *unaff_x23;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  
  FUN_0373b518();
  FUN_0373b518(System_Action<UITKTextJobSystem_ManagedJobData>_TypeInfo);
  FUN_0373b518(System_Action<XRInputModalityManager_InputMode>_TypeInfo);
  FUN_0373b518(PTR_DAT_07d86bf8);
  FUN_0373b518(PTR_DAT_07dbdea0);
  *(undefined1 *)(unaff_x22 + 0xd90) = 1;
  in_stack_00000058 = 0;
  in_stack_00000050 = 0;
  uVar15 = thunk_FUN_037788cc(*unaff_x21);
  FUN_06f417f4(uVar15,0);
  *(undefined8 *)(unaff_x20 + 0x18) = uVar15;
  thunk_FUN_037aeb94((undefined8 *)(unaff_x20 + 0x18),uVar15);
  *(undefined1 *)(unaff_x20 + 0x40) = 1;
  lVar16 = *unaff_x23;
  if (*(int *)(lVar16 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar16 = *unaff_x23;
  }
  puVar4 = System_Xml_Xsl_Runtime_StringConcat_var;
  lVar20 = *(long *)(*(long *)(lVar16 + 0xb8) + 8);
  if (lVar20 == 0) {
    if (*(int *)(lVar16 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar16 = *unaff_x23;
    }
    uVar15 = **(undefined8 **)(lVar16 + 0xb8);
    lVar20 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07dbb5a8);
    FUN_058673e8(lVar20,uVar15,
                 *(undefined8 *)System_Action<PropertyContainer_GetPropertyVisitor>_TypeInfo,0);
    plVar17 = (long *)(*(long *)(*unaff_x23 + 0xb8) + 8);
    *plVar17 = lVar20;
    thunk_FUN_037aeb94(plVar17,lVar20);
  }
  puVar6 = UnityEngine_XR_ARSubsystems_XRPlaneSubsystemDescriptor_Cinfo_var;
  puVar5 = PTR_DAT_07d8bb08;
  *(long *)(unaff_x20 + 0x48) = lVar20;
  thunk_FUN_037aeb94((long *)(unaff_x20 + 0x48),lVar20);
  FUN_075e2c1c();
  plVar17 = (long *)(unaff_x20 + 0x38);
  *plVar17 = unaff_x19;
  thunk_FUN_037aeb94(plVar17);
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  puVar7 = System_Action<OVRPlugin_BoundaryVisibility>_TypeInfo;
  puVar4 = UnityEngine_UI_IMeshModifier_var;
  lVar16 = System_Span<Painter2D_Painter2DJobData>___ctor(*(undefined8 *)puVar6);
  plVar21 = (long *)(unaff_x20 + 0x20);
  *plVar21 = lVar16;
  thunk_FUN_037aeb94(plVar21,lVar16);
  if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  uVar15 = FUN_03fe726c(*(undefined8 *)puVar4);
  *(undefined8 *)(unaff_x20 + 0x28) = uVar15;
  thunk_FUN_037aeb94();
  lVar16 = FUN_03fe726c(*(undefined8 *)puVar7);
  puVar4 = PTR_DAT_07d97de8;
  if (lVar16 != 0) {
    uVar15 = *(undefined8 *)(lVar16 + 0x28);
    uVar1 = *(undefined8 *)(lVar16 + 0x30);
    if (*(int *)(*(long *)PTR_DAT_07df7288 + 0xe4) == 0) {
      thunk_FUN_03798b70(*(long *)PTR_DAT_07df7288);
    }
    puVar6 = PTR_DAT_07df7208;
    FUN_06f9f0e8(uVar15,uVar1,0);
    lVar16 = *plVar17;
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    FUN_0710a2c4(lVar16);
    uVar12 = FUN_07566b68(0);
    uVar13 = FUN_07566b90(0);
    if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
      thunk_FUN_03798b70(*(long *)puVar6);
    }
    FUN_06f94e90(uVar12,uVar13,0);
    FUN_07118138(0);
    if (unaff_x19 != 0) {
      FUN_075cba60(*(undefined1 *)(unaff_x19 + 0xf4),0);
      iVar14 = FUN_0756d4b0(0);
      if (iVar14 < 1) {
        iVar14 = 1;
      }
      else {
        iVar14 = FUN_0756d4b0(0);
      }
      if (iVar14 != *(int *)(unaff_x19 + 0x54)) {
        FUN_0756d4d8(*(int *)(unaff_x19 + 0x54),0);
      }
      puVar7 = System_Action<OVRManager_PassthroughInitializationState>_TypeInfo;
      puVar6 = PTR_DAT_07d88c10;
      if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      lVar16 = FUN_03fe726c(*(undefined8 *)puVar7);
      if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
        thunk_FUN_03798b70(*(long *)puVar6);
      }
      lVar20 = FUN_06f4282c(0);
      puVar5 = PTR_DAT_07df4970;
      if ((lVar16 != 0) && (lVar20 != 0)) {
        FUN_06f562d0(lVar20,*(undefined8 *)(lVar16 + 0x18),*(undefined8 *)(unaff_x19 + 0x138),0);
        iVar14 = FUN_0756d4b0(0);
        uVar3 = iVar14 - 1U | (int)(iVar14 - 1U) >> 0x10;
        uVar3 = uVar3 | (int)uVar3 >> 8;
        uVar3 = uVar3 | (int)uVar3 >> 4;
        uVar3 = uVar3 | (int)uVar3 >> 2;
        uVar3 = uVar3 | (int)uVar3 >> 1;
        iVar14 = 8;
        if ((int)(uVar3 + 1) < 8) {
          iVar14 = uVar3 + 1;
        }
        if (iVar14 < 2) {
          iVar14 = 1;
        }
        if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
          thunk_FUN_03798b70();
        }
        puVar5 = System_Action<OVRSpatialAnchor_OperationResult>_TypeInfo;
        FUN_06f31b9c(iVar14,0);
        FUN_06f31fec(*(undefined4 *)(unaff_x19 + 0x58),0);
        lVar16 = *(long *)puVar4;
        if (*(int *)(lVar16 + 0xe4) == 0) {
          thunk_FUN_03798b70();
          lVar16 = *(long *)puVar4;
        }
        puVar6 = PTR_DAT_07df5050;
        uVar15 = *(undefined8 *)(*(long *)(lVar16 + 0xb8) + 0x80);
        if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
          thunk_FUN_03798b70(*(long *)puVar5);
        }
        FUN_075f1310(uVar15,0);
        if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
          thunk_FUN_03798b70();
        }
        if (DAT_08267dc2 == '\0') {
          FUN_0373b518(PTR_DAT_07df5050);
          DAT_08267dc2 = '\x01';
        }
        puVar5 = PTR_DAT_07dfbd28;
        lVar16 = *(long *)puVar6;
        if (*(int *)(lVar16 + 0xe4) == 0) {
          thunk_FUN_03798b70();
          lVar16 = *(long *)puVar6;
        }
        *(undefined1 *)(*(long *)(lVar16 + 0xb8) + 8) = 1;
        if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
          thunk_FUN_03798b70();
        }
        puVar7 = System_Action<UITKTextJobSystem_ManagedJobData>_TypeInfo;
        puVar6 = UnityEngine_Rendering_Universal_Light2DBlendStyle_var;
        puVar5 = PTR_DAT_07d99dd8;
        FUN_070e419c(0);
        uVar15 = FUN_0706cfe0();
        if (DAT_08267dc3 == '\0') {
          FUN_0373b518(System_Reflection_MonoEventInfo_var);
          DAT_08267dc3 = '\x01';
        }
        puVar18 = (undefined8 *)
                  (*(long *)(*(long *)System_Reflection_MonoEventInfo_var + 0xb8) + 0x28);
        *puVar18 = uVar15;
        thunk_FUN_037aeb94(puVar18,uVar15);
        uVar15 = thunk_FUN_037788cc(*(undefined8 *)puVar5);
        FUN_06fb8a08(uVar15,*(undefined8 *)puVar7,0);
        puVar18 = (undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 8);
        *puVar18 = uVar15;
        thunk_FUN_037aeb94(puVar18,uVar15);
        lVar16 = FUN_03fe726c(*(undefined8 *)puVar6);
        puVar9 = System_Action<XRInputModalityManager_InputMode>_TypeInfo;
        puVar8 = UnityEngine_ParticleSystem_CollisionModule_var;
        puVar7 = PTR_DAT_07dbdea0;
        puVar18 = (undefined8 *)PTR_DAT_07d992c0;
        puVar6 = PTR_DAT_07d86bf8;
        puVar5 = PTR_DAT_07d86440;
        if (lVar16 != 0) {
          bVar11 = FUN_070ea568(lVar16,0);
          if ((bVar11 & 1) == 0) {
            puVar18 = (undefined8 *)puVar7;
          }
          *(byte *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x18) = ~bVar11 & 1;
          uVar15 = FUN_060c1430(*(undefined8 *)puVar9,*puVar18,*(undefined8 *)puVar6,0);
          if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
            thunk_FUN_03798b70(*(long *)puVar5);
          }
          puVar5 = PTR_DAT_07df4c00;
          FUN_0755d864(uVar15,0);
          uVar15 = thunk_FUN_037788cc(*(undefined8 *)puVar8);
          FUN_070ea1d4(uVar15,0);
          lVar16 = *(long *)puVar4;
          if (*(int *)(lVar16 + 0xe4) == 0) {
            thunk_FUN_03798b70();
            lVar16 = *(long *)puVar4;
          }
          puVar18 = (undefined8 *)(*(long *)(lVar16 + 0xb8) + 0x10);
          *puVar18 = uVar15;
          thunk_FUN_037aeb94(puVar18,uVar15);
          if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
            thunk_FUN_03798b70();
          }
          lVar16 = FUN_06f413a0(0);
          puVar4 = PTR_DAT_07d86398;
          if (lVar16 != 0) {
            UnityEngine_Rendering_Universal_PixelPerfectCamera__set_stretchFill(lVar16,0);
            FUN_0756d410(*(undefined1 *)(unaff_x19 + 0x68),0);
            if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
              thunk_FUN_03798b70();
            }
            puVar4 = TMPro_TMP_LinkInfo_var;
            uVar19 = FUN_075aa744();
            if ((uVar19 & 1) == 0) {
              bVar10 = false;
            }
            else {
              bVar10 = *(int *)(unaff_x19 + 0x74) == 1;
            }
            *(bool *)(unaff_x20 + 0x30) = bVar10;
            if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
              thunk_FUN_03798b70();
            }
            lVar16 = FUN_075e9a08(0);
            if (lVar16 != 0) {
              *(undefined1 *)(lVar16 + 0x3b) = *(undefined1 *)(unaff_x20 + 0x30);
              lVar16 = FUN_075e9a08(0);
              if (lVar16 != 0) {
                cVar2 = *(char *)(unaff_x20 + 0x30);
                *(char *)(lVar16 + 0x26) = cVar2;
                puVar4 = PTR_DAT_07df5ec8;
                if (cVar2 == '\0') {
                  return;
                }
                if (*(int *)(*(long *)PTR_DAT_07df5ec8 + 0xe4) == 0) {
                  thunk_FUN_03798b70();
                }
                if (DAT_08267079 == '\0') {
                  FUN_0373b518(PTR_DAT_07df5ec8);
                  DAT_08267079 = '\x01';
                }
                lVar16 = *(long *)puVar4;
                if (*(int *)(lVar16 + 0xe4) == 0) {
                  thunk_FUN_03798b70();
                  lVar16 = *(long *)puVar4;
                }
                lVar16 = *(long *)(*(long *)(lVar16 + 0xb8) + 8);
                in_stack_00000058 = 0;
                in_stack_00000050 = 0;
                if (*plVar21 != 0) {
                  in_stack_00000050 = FUN_070a1c38(*plVar21,0);
                  thunk_FUN_037aeb94(&stack0x00000050);
                  if (lVar16 != 0) {
                    FUN_06f5b098(lVar16);
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
  FUN_0373b7b4();
}


