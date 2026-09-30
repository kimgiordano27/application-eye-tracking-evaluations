/*
FUNCTION_NAME: FUN_0630df38
ENTRY_POINT: 0630df38
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_0630df38(long param_1,byte *param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  byte bVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  int iVar14;
  long lVar15;
  short local_54 [2];
  
  puVar3 = PTR_DAT_069fd228;
  puVar2 = PTR_DAT_069fd220;
  if ((DAT_06dc8d33 & 1) == 0) {
    FUN_02d965b8(OVRPlugin_OVRP_1_116_0_TypeInfo);
    FUN_02d965b8(PTR_DAT_06a0da08);
    FUN_02d965b8(UnityEngine_UIElements_EventCallback<AttachToPanelEvent>_TypeInfo);
    FUN_02d965b8(PTR_DAT_069fcea0);
    FUN_02d965b8(PTR_DAT_069ff370);
    FUN_02d965b8(PTR_DAT_069fd220);
    FUN_02d965b8(PTR_DAT_069fd228);
    FUN_02d965b8(Method_TMPro_TMP_Dropdown_GetOrAddComponent<GraphicRaycaster>__);
    FUN_02d965b8(Method_TMPro_TMP_Dropdown_Hide__);
    FUN_02d965b8(PTR_DAT_069fba08);
    DAT_06dc8d33 = 1;
  }
  *param_2 = 0;
  local_54[0] = 0;
  lVar7 = thunk_FUN_02dd3144(*(undefined8 *)puVar3);
  FUN_0400f984(lVar7,*(undefined8 *)puVar2);
  puVar5 = PTR_DAT_06a0da08;
  puVar4 = PTR_DAT_069fcea0;
  puVar3 = PTR_DAT_069fba08;
  puVar2 = PTR_DAT_069fb9c0;
  if (param_1 != 0) {
    lVar15 = *(long *)PTR_DAT_069fba08;
    if (0 < *(int *)(param_1 + 0x10)) {
      iVar14 = 0;
      do {
        local_54[0] = FUN_053674f8(param_1,iVar14,0);
        if (*(int *)(*(long *)(puVar2 + 0x88) + 0xe4) == 0) {
          thunk_FUN_02df485c(*(long *)(puVar2 + 0x88));
        }
        uVar8 = FUN_054484f0(local_54,0);
        if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
          thunk_FUN_02df485c(*(long *)puVar5);
        }
        uVar9 = FUN_0630d57c(uVar8);
        if ((uVar9 & 1) == 0) {
          if (local_54[0] == 0x20) {
            if (lVar15 != 0) {
              if (*(int *)(lVar15 + 0x10) < 1) goto LAB_0630e22c;
              if (lVar7 != 0) {
                lVar11 = *(long *)(lVar7 + 0x10);
                lVar13 = *(long *)puVar4;
                *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
                if (lVar11 != 0) {
                  uVar1 = *(uint *)(lVar7 + 0x18);
                  if (*(uint *)(lVar11 + 0x18) <= uVar1) {
                    lVar11 = *(long *)(lVar13 + 0x20);
                    goto LAB_0630e220;
                  }
                  *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                  plVar10 = (long *)(lVar11 + (long)(int)uVar1 * 8 + 0x20);
                  *plVar10 = lVar15;
                  goto LAB_0630e200;
                }
              }
            }
            goto LAB_0630e384;
          }
          if (*(int *)(*(long *)(puVar2 + 0x88) + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          uVar8 = FUN_054484f0(local_54,0);
          lVar15 = FUN_05362cb4(lVar15,uVar8,0);
        }
        else {
          if (lVar15 == 0) goto LAB_0630e384;
          if (0 < *(int *)(lVar15 + 0x10)) {
            if (lVar7 == 0) goto LAB_0630e384;
            lVar11 = *(long *)(lVar7 + 0x10);
            lVar13 = *(long *)puVar4;
            *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
            if (lVar11 == 0) goto LAB_0630e384;
            uVar1 = *(uint *)(lVar7 + 0x18);
            if (uVar1 < *(uint *)(lVar11 + 0x18)) {
              *(uint *)(lVar7 + 0x18) = uVar1 + 1;
              plVar10 = (long *)(lVar11 + (long)(int)uVar1 * 8 + 0x20);
              *plVar10 = lVar15;
              LeanTween__value(plVar10,lVar15);
            }
            else {
              FUN_040101ec(lVar7,lVar15,
                           *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
            }
          }
          if (*(int *)(*(long *)(puVar2 + 0x88) + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          lVar15 = FUN_054484f0(local_54,0);
          if (lVar7 == 0) goto LAB_0630e384;
          lVar11 = *(long *)(lVar7 + 0x10);
          lVar13 = *(long *)puVar4;
          *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
          if (lVar11 == 0) goto LAB_0630e384;
          uVar1 = *(uint *)(lVar7 + 0x18);
          if (uVar1 < *(uint *)(lVar11 + 0x18)) {
            *(uint *)(lVar7 + 0x18) = uVar1 + 1;
            plVar10 = (long *)(lVar11 + (long)(int)uVar1 * 8 + 0x20);
            *plVar10 = lVar15;
LAB_0630e200:
            LeanTween__value(plVar10,lVar15);
          }
          else {
            lVar11 = *(long *)(lVar13 + 0x20);
LAB_0630e220:
            FUN_040101ec(lVar7,lVar15,*(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0x70));
          }
LAB_0630e22c:
          lVar15 = *(long *)puVar3;
        }
        iVar14 = iVar14 + 1;
      } while (iVar14 < *(int *)(param_1 + 0x10));
    }
    if (lVar15 != 0) {
      if (0 < *(int *)(lVar15 + 0x10)) {
        if (lVar7 == 0) goto LAB_0630e384;
        lVar11 = *(long *)(lVar7 + 0x10);
        lVar13 = *(long *)puVar4;
        *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
        if (lVar11 == 0) goto LAB_0630e384;
        uVar1 = *(uint *)(lVar7 + 0x18);
        if (uVar1 < *(uint *)(lVar11 + 0x18)) {
          *(uint *)(lVar7 + 0x18) = uVar1 + 1;
          plVar10 = (long *)(lVar11 + (long)(int)uVar1 * 8 + 0x20);
          *plVar10 = lVar15;
          LeanTween__value(plVar10,lVar15);
        }
        else {
          FUN_040101ec(lVar7,lVar15,
                       *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
        }
      }
      puVar2 = Method_TMPro_TMP_Dropdown_Hide__;
      lVar15 = *(long *)Method_TMPro_TMP_Dropdown_Hide__;
      if (*(int *)(lVar15 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        lVar15 = *(long *)puVar2;
      }
      puVar3 = OVRPlugin_OVRP_1_116_0_TypeInfo;
      puVar12 = *(undefined8 **)(lVar15 + 0xb8);
      lVar11 = puVar12[1];
      if (lVar11 == 0) {
        if (*(int *)(lVar15 + 0xe4) == 0) {
          thunk_FUN_02df485c();
          puVar12 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
        }
        uVar8 = *puVar12;
        lVar11 = thunk_FUN_02dd3144(*(undefined8 *)
                                     UnityEngine_UIElements_EventCallback<AttachToPanelEvent>_TypeInfo
                                   );
        FUN_03b7820c(lVar11,uVar8,
                     *(undefined8 *)Method_TMPro_TMP_Dropdown_GetOrAddComponent<GraphicRaycaster>__,
                     0);
        plVar10 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
        *plVar10 = lVar11;
        LeanTween__value(plVar10,lVar11);
      }
      bVar6 = FUN_035f916c(lVar7,lVar11,*(undefined8 *)puVar3);
      *param_2 = bVar6 & 1;
      if (lVar7 != 0) {
        FUN_04011c04(lVar7,*(undefined8 *)PTR_DAT_069ff370);
        return;
      }
    }
  }
LAB_0630e384:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


