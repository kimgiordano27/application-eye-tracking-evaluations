/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.CustomIntegrationConfig.GetCameraDelegate$$BeginInvoke
ENTRY_POINT: 04c1c948
PROGRAM: hellodot-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_12;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_CustomIntegrationConfig_GetCameraDelegate__BeginInvoke(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  int *piVar10;
  undefined8 unaff_x20;
  long unaff_x21;
  int unaff_w22;
  long *plVar11;
  
  puVar2 = PTR_DAT_065e58d0;
  if (unaff_w22 == 1) {
    lVar6 = *(long *)(unaff_x21 + 0x18);
    FUN_037de0a8();
    if (lVar6 != 0) {
      lVar7 = *(long *)(lVar6 + 0x10);
      lVar9 = *(long *)PTR_DAT_065e5910;
      *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
      if (lVar7 != 0) {
        uVar1 = *(uint *)(lVar6 + 0x18);
        if (uVar1 < *(uint *)(lVar7 + 0x18)) {
          lVar7 = lVar7 + (long)(int)uVar1 * 0x10;
          *(uint *)(lVar6 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar7 + 0x20) = 0;
          *(undefined8 *)(lVar7 + 0x28) = 0;
        }
        else {
          FUN_0381ed00(lVar6,0,0,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
        }
        return;
      }
    }
  }
  else {
    if (unaff_w22 != 0) {
      thunk_FUN_02c7737c(PTR_DAT_065cb038);
      uVar4 = thunk_FUN_02cea894();
      uVar5 = thunk_FUN_02c7737c(PTR_DAT_065dd048);
      FUN_04e9ff98(uVar4,uVar5,0);
      uVar5 = thunk_FUN_02c7737c(PTR_DAT_065e5928);
                    /* WARNING: Subroutine does not return */
      FUN_02ce7b54(uVar4,uVar5);
    }
    plVar11 = *(long **)(unaff_x21 + 0x10);
    if (plVar11 != (long *)0x0) {
      lVar6 = *plVar11;
      uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar8 != 0) {
        piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_065e58d0) {
            puVar3 = (undefined8 *)(lVar6 + (long)(*piVar10 + 4) * 0x10 + 0x138);
            goto LAB_04c1cb78;
          }
          uVar8 = uVar8 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar8 != 0);
      }
      puVar3 = (undefined8 *)FUN_02ce0a7c(plVar11,*(long *)PTR_DAT_065e58d0,4);
LAB_04c1cb78:
      uVar8 = (*(code *)*puVar3)(plVar11);
      plVar11 = *(long **)(unaff_x21 + 0x10);
      if ((uVar8 & 1) == 0) {
        lVar6 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065c9438);
        System_Collections_Generic_List<FingerFeatureStateProvider_FingerStateThresholds>__BinarySearch
                  (lVar6,*(undefined8 *)PTR_DAT_065c9440);
        if (lVar6 != 0) {
          lVar7 = *(long *)(lVar6 + 0x10);
          *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
          if (lVar7 != 0) {
            uVar1 = *(uint *)(lVar6 + 0x18);
            if (uVar1 < *(uint *)(lVar7 + 0x18)) {
              *(uint *)(lVar6 + 0x18) = uVar1 + 1;
              *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = unaff_x20;
            }
            else {
              FUN_039683cc(lVar6);
            }
            if (plVar11 != (long *)0x0) {
              lVar7 = *plVar11;
              lVar6 = *(long *)puVar2;
              uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
              if (uVar8 != 0) {
                piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar10 + -2) == lVar6) {
                    puVar3 = (undefined8 *)(lVar7 + (long)(*piVar10 + 1) * 0x10 + 0x138);
                    goto LAB_04c1cd4c;
                  }
                  uVar8 = uVar8 - 1;
                  piVar10 = piVar10 + 4;
                } while (uVar8 != 0);
              }
              puVar3 = (undefined8 *)FUN_02ce0a7c(plVar11,lVar6,1);
LAB_04c1cd4c:
                    /* WARNING: Could not recover jumptable at 0x04c1cd70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)*puVar3)(plVar11);
              return;
            }
          }
        }
      }
      else if (plVar11 != (long *)0x0) {
        lVar7 = *plVar11;
        lVar6 = *(long *)puVar2;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 != 0) {
          piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == lVar6) {
              puVar3 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_04c1cca8;
            }
            uVar8 = uVar8 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar8 != 0);
        }
        puVar3 = (undefined8 *)FUN_02ce0a7c(plVar11,lVar6,0);
LAB_04c1cca8:
        plVar11 = (long *)(*(code *)*puVar3)(plVar11);
        if (plVar11 != (long *)0x0) {
          lVar6 = *plVar11;
          uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar8 != 0) {
            piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_065c8e90) {
                puVar3 = (undefined8 *)(lVar6 + (long)(*piVar10 + 2) * 0x10 + 0x138);
                goto LAB_04c1cd18;
              }
              uVar8 = uVar8 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar8 != 0);
          }
          puVar3 = (undefined8 *)FUN_02ce0a7c(plVar11,*(long *)PTR_DAT_065c8e90,2);
LAB_04c1cd18:
                    /* WARNING: Could not recover jumptable at 0x04c1cd38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)*puVar3)(plVar11);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


