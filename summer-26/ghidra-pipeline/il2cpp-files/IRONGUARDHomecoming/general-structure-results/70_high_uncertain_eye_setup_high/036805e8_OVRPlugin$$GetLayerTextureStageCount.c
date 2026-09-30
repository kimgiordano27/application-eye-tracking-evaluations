/*
FUNCTION_NAME: OVRPlugin$$GetLayerTextureStageCount
ENTRY_POINT: 036805e8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_4
*/


void OVRPlugin__GetLayerTextureStageCount
               (long param_1,undefined1 param_2 [16],undefined4 param_3,undefined4 param_4)

{
  undefined *puVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  long lVar5;
  long in_x9;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  long *plVar8;
  long lVar9;
  long *unaff_x22;
  long unaff_x23;
  
  bVar2 = (**(code **)(param_1 + in_x9 * 0x10 + 0x138))();
  if (unaff_x23 != 0) {
    *(byte *)(unaff_x23 + 0x10) = bVar2 & 1;
    lVar9 = *(long *)(unaff_x19 + 0x58);
    if (lVar9 != 0) {
      if (*(char *)(lVar9 + 0x10) == '\0') {
        return;
      }
      plVar8 = *(long **)(unaff_x19 + 0x28);
      if (plVar8 != (long *)0x0) {
        lVar5 = *plVar8;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *unaff_x22) {
              puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_03680670;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar4 = (undefined8 *)FUN_01ecb238(plVar8,*unaff_x22,0);
LAB_03680670:
        uVar3 = (*(code *)*puVar4)(plVar8,puVar4[1]);
        *(undefined4 *)(lVar9 + 0x14) = uVar3;
        puVar1 = Method_Unity_VisualScripting_GreaterThanOrEqualHandler_<>c_<_ctor>b__0_47__;
        plVar8 = *(long **)(unaff_x19 + 0x48);
        if (plVar8 != (long *)0x0) {
          lVar9 = *plVar8;
          lVar5 = *(long *)(unaff_x19 + 0x58);
          uVar6 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar6 != 0) {
            piVar7 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) ==
                  *(long *)
                   Method_Unity_VisualScripting_GreaterThanOrEqualHandler_<>c_<_ctor>b__0_47__) {
                puVar4 = (undefined8 *)(lVar9 + (long)*piVar7 * 0x10 + 0x138);
                goto OVRPlugin__GetLayerAndroidSurfaceObject;
              }
              uVar6 = uVar6 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar6 != 0);
          }
          puVar4 = (undefined8 *)
                   FUN_01ecb238(plVar8,*(long *)
                                        Method_Unity_VisualScripting_GreaterThanOrEqualHandler_<>c_<_ctor>b__0_47__
                                ,0);
OVRPlugin__GetLayerAndroidSurfaceObject:
          lVar9 = (*(code *)*puVar4)(plVar8,puVar4[1]);
          if ((lVar9 != 0) && (uVar3 = FUN_0407d7c4(lVar9,0), lVar5 != 0)) {
            *(undefined4 *)(lVar5 + 0x50) = uVar3;
            *(undefined4 *)(lVar5 + 0x54) = param_3;
            *(undefined4 *)(lVar5 + 0x58) = param_4;
            plVar8 = *(long **)(unaff_x19 + 0x48);
            if (plVar8 != (long *)0x0) {
              lVar9 = *plVar8;
              lVar5 = *(long *)(unaff_x19 + 0x58);
              uVar6 = (ulong)*(ushort *)(lVar9 + 0x12e);
              if (uVar6 != 0) {
                piVar7 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
                    puVar4 = (undefined8 *)(lVar9 + (long)*piVar7 * 0x10 + 0x138);
                    goto LAB_0368075c;
                  }
                  uVar6 = uVar6 - 1;
                  piVar7 = piVar7 + 4;
                } while (uVar6 != 0);
              }
              puVar4 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar1,0);
LAB_0368075c:
              lVar9 = (*(code *)*puVar4)(plVar8,puVar4[1]);
              if ((lVar9 != 0) && (uVar3 = FUN_0407d840(lVar9,0), lVar5 != 0)) {
                *(undefined4 *)(lVar5 + 0x5c) = uVar3;
                *(undefined4 *)(lVar5 + 0x60) = param_3;
                *(undefined4 *)(lVar5 + 100) = param_4;
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


