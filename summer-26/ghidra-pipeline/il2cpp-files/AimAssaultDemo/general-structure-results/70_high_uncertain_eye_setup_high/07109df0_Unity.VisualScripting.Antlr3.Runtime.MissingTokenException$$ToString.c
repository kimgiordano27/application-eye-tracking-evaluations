/*
FUNCTION_NAME: Unity.VisualScripting.Antlr3.Runtime.MissingTokenException$$ToString
ENTRY_POINT: 07109df0
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 85
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_9;ray_or_cast_sink_hits_1;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Unity_VisualScripting_Antlr3_Runtime_MissingTokenException__ToString(undefined8 param_1)

{
  char cVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  bool bVar8;
  byte bVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  ulong uVar14;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  undefined8 uVar15;
  long *unaff_x25;
  long *unaff_x26;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  
  FUN_075cba60(param_1,0);
  iVar10 = FUN_0756d4b0(0);
  if (iVar10 < 1) {
    iVar10 = 1;
  }
  else {
    iVar10 = FUN_0756d4b0(0);
  }
  if (iVar10 != *(int *)(unaff_x19 + 0x54)) {
    FUN_0756d4d8(*(int *)(unaff_x19 + 0x54),0);
  }
  puVar4 = System_Action<OVRManager_PassthroughInitializationState>_TypeInfo;
  puVar3 = PTR_DAT_07d88c10;
  if (*(int *)(*unaff_x26 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  lVar11 = FUN_03fe726c(*(undefined8 *)puVar4);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_03798b70(*(long *)puVar3);
  }
  lVar12 = FUN_06f4282c(0);
  puVar3 = PTR_DAT_07df4970;
  if ((lVar11 != 0) && (lVar12 != 0)) {
    FUN_06f562d0(lVar12,*(undefined8 *)(lVar11 + 0x18),*(undefined8 *)(unaff_x19 + 0x138),0);
    iVar10 = FUN_0756d4b0(0);
    uVar2 = iVar10 - 1U | (int)(iVar10 - 1U) >> 0x10;
    uVar2 = uVar2 | (int)uVar2 >> 8;
    uVar2 = uVar2 | (int)uVar2 >> 4;
    uVar2 = uVar2 | (int)uVar2 >> 2;
    uVar2 = uVar2 | (int)uVar2 >> 1;
    iVar10 = 8;
    if ((int)(uVar2 + 1) < 8) {
      iVar10 = uVar2 + 1;
    }
    if (iVar10 < 2) {
      iVar10 = 1;
    }
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    puVar3 = System_Action<OVRSpatialAnchor_OperationResult>_TypeInfo;
    FUN_06f31b9c(iVar10,0);
    FUN_06f31fec(*(undefined4 *)(unaff_x19 + 0x58),0);
    lVar11 = *unaff_x25;
    if (*(int *)(lVar11 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar11 = *unaff_x25;
    }
    puVar4 = PTR_DAT_07df5050;
    uVar15 = *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0x80);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_03798b70(*(long *)puVar3);
    }
    FUN_075f1310(uVar15,0);
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    if (DAT_08267dc2 == '\0') {
      FUN_0373b518(PTR_DAT_07df5050);
      DAT_08267dc2 = '\x01';
    }
    puVar3 = PTR_DAT_07dfbd28;
    lVar11 = *(long *)puVar4;
    if (*(int *)(lVar11 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar11 = *(long *)puVar4;
    }
    *(undefined1 *)(*(long *)(lVar11 + 0xb8) + 8) = 1;
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    puVar5 = System_Action<UITKTextJobSystem_ManagedJobData>_TypeInfo;
    puVar4 = UnityEngine_Rendering_Universal_Light2DBlendStyle_var;
    puVar3 = PTR_DAT_07d99dd8;
    FUN_070e419c(0);
    uVar15 = FUN_0706cfe0();
    if (DAT_08267dc3 == '\0') {
      FUN_0373b518(System_Reflection_MonoEventInfo_var);
      DAT_08267dc3 = '\x01';
    }
    puVar13 = (undefined8 *)(*(long *)(*(long *)System_Reflection_MonoEventInfo_var + 0xb8) + 0x28);
    *puVar13 = uVar15;
    thunk_FUN_037aeb94(puVar13,uVar15);
    uVar15 = thunk_FUN_037788cc(*(undefined8 *)puVar3);
    FUN_06fb8a08(uVar15,*(undefined8 *)puVar5,0);
    puVar13 = (undefined8 *)(*(long *)(*unaff_x25 + 0xb8) + 8);
    *puVar13 = uVar15;
    thunk_FUN_037aeb94(puVar13,uVar15);
    lVar11 = FUN_03fe726c(*(undefined8 *)puVar4);
    puVar7 = System_Action<XRInputModalityManager_InputMode>_TypeInfo;
    puVar6 = UnityEngine_ParticleSystem_CollisionModule_var;
    puVar5 = PTR_DAT_07dbdea0;
    puVar13 = (undefined8 *)PTR_DAT_07d992c0;
    puVar4 = PTR_DAT_07d86bf8;
    puVar3 = PTR_DAT_07d86440;
    if (lVar11 != 0) {
      bVar9 = FUN_070ea568(lVar11,0);
      if ((bVar9 & 1) == 0) {
        puVar13 = (undefined8 *)puVar5;
      }
      *(byte *)(*(long *)(*unaff_x25 + 0xb8) + 0x18) = ~bVar9 & 1;
      uVar15 = FUN_060c1430(*(undefined8 *)puVar7,*puVar13,*(undefined8 *)puVar4,0);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_03798b70(*(long *)puVar3);
      }
      puVar3 = PTR_DAT_07df4c00;
      FUN_0755d864(uVar15,0);
      uVar15 = thunk_FUN_037788cc(*(undefined8 *)puVar6);
      FUN_070ea1d4(uVar15,0);
      lVar11 = *unaff_x25;
      if (*(int *)(lVar11 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar11 = *unaff_x25;
      }
      puVar13 = (undefined8 *)(*(long *)(lVar11 + 0xb8) + 0x10);
      *puVar13 = uVar15;
      thunk_FUN_037aeb94(puVar13,uVar15);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      lVar11 = FUN_06f413a0(0);
      puVar3 = PTR_DAT_07d86398;
      if (lVar11 != 0) {
        UnityEngine_Rendering_Universal_PixelPerfectCamera__set_stretchFill(lVar11,0);
        FUN_0756d410(*(undefined1 *)(unaff_x19 + 0x68),0);
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_03798b70();
        }
        puVar3 = TMPro_TMP_LinkInfo_var;
        uVar14 = FUN_075aa744();
        if ((uVar14 & 1) == 0) {
          bVar8 = false;
        }
        else {
          bVar8 = *(int *)(unaff_x19 + 0x74) == 1;
        }
        *(bool *)(unaff_x20 + 0x30) = bVar8;
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_03798b70();
        }
        lVar11 = FUN_075e9a08(0);
        if (lVar11 != 0) {
          *(undefined1 *)(lVar11 + 0x3b) = *(undefined1 *)(unaff_x20 + 0x30);
          lVar11 = FUN_075e9a08(0);
          if (lVar11 != 0) {
            cVar1 = *(char *)(unaff_x20 + 0x30);
            *(char *)(lVar11 + 0x26) = cVar1;
            puVar3 = PTR_DAT_07df5ec8;
            if (cVar1 == '\0') {
              return;
            }
            if (*(int *)(*(long *)PTR_DAT_07df5ec8 + 0xe4) == 0) {
              thunk_FUN_03798b70();
            }
            if (DAT_08267079 == '\0') {
              FUN_0373b518(PTR_DAT_07df5ec8);
              DAT_08267079 = '\x01';
            }
            lVar11 = *(long *)puVar3;
            if (*(int *)(lVar11 + 0xe4) == 0) {
              thunk_FUN_03798b70();
              lVar11 = *(long *)puVar3;
            }
            lVar11 = *(long *)(*(long *)(lVar11 + 0xb8) + 8);
            in_stack_00000058 = 0;
            in_stack_00000050 = 0;
            if (*unaff_x21 != 0) {
              in_stack_00000050 = FUN_070a1c38(*unaff_x21,0);
              thunk_FUN_037aeb94(&stack0x00000050);
              if (lVar11 != 0) {
                FUN_06f5b098(lVar11);
                return;
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


