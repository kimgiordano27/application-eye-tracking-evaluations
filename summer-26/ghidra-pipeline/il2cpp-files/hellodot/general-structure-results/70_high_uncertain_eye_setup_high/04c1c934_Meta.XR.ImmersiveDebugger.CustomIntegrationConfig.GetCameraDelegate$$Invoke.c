/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.CustomIntegrationConfig.GetCameraDelegate$$Invoke
ENTRY_POINT: 04c1c934
PROGRAM: hellodot-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_19;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_CustomIntegrationConfig_GetCameraDelegate__Invoke(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  int *piVar11;
  long unaff_x19;
  long unaff_x20;
  long *plVar12;
  long unaff_x21;
  int unaff_w22;
  long *plVar13;
  
                    /* try { // try from 04c1c934 to 04d1ca4f has its CatchHandler @ 04c1c934
                       catch() { ... } // from try @ 04c1c934 with catch @ 04c1c934
                       catch() { ... } // from try @ 04c1cb18 with catch @ 04c1c934
                       catch() { ... } // from try @ 04c1cbec with catch @ 04c1c934
                       catch() { ... } // from try @ 04c1cc90 with catch @ 04c1c934 */
  FUN_0354cb00();
  puVar2 = PTR_DAT_065e58d0;
  puVar1 = PTR_DAT_065dfe10;
  if (unaff_x20 == 0) {
    lVar7 = *(long *)PTR_DAT_065dfe10;
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
      lVar7 = *(long *)puVar1;
    }
    plVar12 = (long *)**(undefined8 **)(lVar7 + 0xb8);
    plVar13 = (long *)FUN_02ce7ad4(*(undefined8 *)PTR_DAT_065c8a10,2);
    lVar7 = thunk_FUN_02cea4e8(*(undefined8 *)PTR_DAT_065e5918);
    if (plVar13 != (long *)0x0) {
      if ((lVar7 != 0) &&
         (lVar8 = thunk_FUN_02cea798(lVar7,*(undefined8 *)(*plVar13 + 0x40)), lVar8 == 0)) {
LAB_04c1cd7c:
        uVar4 = thunk_FUN_02c94d60();
                    /* WARNING: Subroutine does not return */
        FUN_02ce7b54(uVar4,0);
      }
      uVar6 = *(uint *)(plVar13 + 3);
      if (uVar6 != 0) {
        plVar13[4] = lVar7;
        if (unaff_x19 != 0) {
          lVar7 = thunk_FUN_02cea798();
          if (lVar7 == 0) goto LAB_04c1cd7c;
          uVar6 = *(uint *)(plVar13 + 3);
        }
        if (1 < uVar6) {
          plVar13[5] = unaff_x19;
          if (plVar12 != (long *)0x0) {
            lVar7 = *plVar12;
            uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
            uVar4 = *(undefined8 *)PTR_DAT_065e5920;
            if (uVar9 != 0) {
              piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_065e39d8) {
                  puVar3 = (undefined8 *)(lVar7 + (long)(*piVar11 + 5) * 0x10 + 0x138);
                  goto LAB_04c1cb3c;
                }
                uVar9 = uVar9 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar9 != 0);
            }
            puVar3 = (undefined8 *)FUN_02ce0a7c(plVar12,*(long *)PTR_DAT_065e39d8,5);
LAB_04c1cb3c:
            (*(code *)*puVar3)(plVar12,uVar4,plVar13,puVar3[1]);
            return;
          }
          goto LAB_04c1cd74;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c84();
    }
  }
  else if (unaff_w22 == 1) {
    lVar7 = *(long *)(unaff_x21 + 0x18);
    FUN_037de0a8();
    if (lVar7 != 0) {
      lVar8 = *(long *)(lVar7 + 0x10);
      lVar10 = *(long *)PTR_DAT_065e5910;
      *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
      if (lVar8 != 0) {
        uVar6 = *(uint *)(lVar7 + 0x18);
        if (uVar6 < *(uint *)(lVar8 + 0x18)) {
          lVar8 = lVar8 + (long)(int)uVar6 * 0x10;
          *(uint *)(lVar7 + 0x18) = uVar6 + 1;
          *(undefined8 *)(lVar8 + 0x20) = 0;
          *(undefined8 *)(lVar8 + 0x28) = 0;
        }
        else {
          FUN_0381ed00(lVar7,0,0,*(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70))
          ;
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
    plVar13 = *(long **)(unaff_x21 + 0x10);
    if (plVar13 != (long *)0x0) {
      lVar7 = *plVar13;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar9 != 0) {
        piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_065e58d0) {
            puVar3 = (undefined8 *)(lVar7 + (long)(*piVar11 + 4) * 0x10 + 0x138);
            goto LAB_04c1cb78;
          }
          uVar9 = uVar9 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar9 != 0);
      }
      puVar3 = (undefined8 *)FUN_02ce0a7c(plVar13,*(long *)PTR_DAT_065e58d0,4);
LAB_04c1cb78:
      uVar9 = (*(code *)*puVar3)(plVar13);
      plVar13 = *(long **)(unaff_x21 + 0x10);
      if ((uVar9 & 1) == 0) {
        lVar7 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065c9438);
        System_Collections_Generic_List<FingerFeatureStateProvider_FingerStateThresholds>__BinarySearch
                  (lVar7,*(undefined8 *)PTR_DAT_065c9440);
        if (lVar7 != 0) {
          lVar8 = *(long *)(lVar7 + 0x10);
          *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
          if (lVar8 != 0) {
            uVar6 = *(uint *)(lVar7 + 0x18);
            if (uVar6 < *(uint *)(lVar8 + 0x18)) {
              *(uint *)(lVar7 + 0x18) = uVar6 + 1;
              *(long *)(lVar8 + (long)(int)uVar6 * 8 + 0x20) = unaff_x20;
            }
            else {
              FUN_039683cc(lVar7);
            }
            if (plVar13 != (long *)0x0) {
              lVar8 = *plVar13;
              lVar7 = *(long *)puVar2;
              uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
              if (uVar9 != 0) {
                piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar11 + -2) == lVar7) {
                    puVar3 = (undefined8 *)(lVar8 + (long)(*piVar11 + 1) * 0x10 + 0x138);
                    goto LAB_04c1cd4c;
                  }
                  uVar9 = uVar9 - 1;
                  piVar11 = piVar11 + 4;
                } while (uVar9 != 0);
              }
              puVar3 = (undefined8 *)FUN_02ce0a7c(plVar13,lVar7,1);
LAB_04c1cd4c:
                    /* WARNING: Could not recover jumptable at 0x04c1cd70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)*puVar3)(plVar13);
              return;
            }
          }
        }
      }
      else if (plVar13 != (long *)0x0) {
        lVar8 = *plVar13;
        lVar7 = *(long *)puVar2;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == lVar7) {
              puVar3 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_04c1cca8;
            }
            uVar9 = uVar9 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar9 != 0);
        }
        puVar3 = (undefined8 *)FUN_02ce0a7c(plVar13,lVar7,0);
LAB_04c1cca8:
        plVar13 = (long *)(*(code *)*puVar3)(plVar13);
        if (plVar13 != (long *)0x0) {
          lVar7 = *plVar13;
          uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar9 != 0) {
            piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_065c8e90) {
                puVar3 = (undefined8 *)(lVar7 + (long)(*piVar11 + 2) * 0x10 + 0x138);
                goto LAB_04c1cd18;
              }
              uVar9 = uVar9 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar9 != 0);
          }
          puVar3 = (undefined8 *)FUN_02ce0a7c(plVar13,*(long *)PTR_DAT_065c8e90,2);
LAB_04c1cd18:
                    /* WARNING: Could not recover jumptable at 0x04c1cd38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)*puVar3)(plVar13);
          return;
        }
      }
    }
  }
LAB_04c1cd74:
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


